// Copyright (c) Facebook, Inc. and its affiliates.
// Use of the material below is subject to the terms of the MIT License
// https://github.com/oculus-samples/Unity-SharedSpaces/tree/main/Assets/SharedSpaces/LICENSE

using UnityEngine;
using Unity.Netcode;
using UnityEngine.InputSystem;
using System.Collections.Generic;

//[RequireComponent(typeof(CharacterController))]
[RequireComponent(typeof(PlayerInput))]
public class SharedSpacesPlayerController : NetworkBehaviour
{
    [Header("Player")]
    [Tooltip("Move speed of the character in m/s")]
    public float MoveSpeed = 2.0f;
    [Tooltip("Sprint speed of the character in m/s")]
    public float SprintSpeed = 5.335f;
    [Tooltip("How fast the character turns to face movement direction")]
    [Range(0.0f, 0.3f)]
    public float RotationSmoothTime = 0.12f;
    [Tooltip("Acceleration and deceleration")]
    public float SpeedChangeRate = 10.0f;
    public bool sprint = false;

    [Space(10)]
    [Tooltip("The height the player can jump")]
    public float JumpHeight = 1.2f;
    [Tooltip("The character uses its own gravity value. The engine default is -9.81f")]
    public float Gravity = -15.0f;

    [Space(10)]
    [Tooltip("Time required to pass before being able to jump again. Set to 0f to instantly jump again")]
    public float JumpTimeout = 0.50f;
    [Tooltip("Time required to pass before entering the fall state. Useful for walking down stairs")]
    public float FallTimeout = 0.15f;

    [Header("Player Grounded")]
    [Tooltip("If the character is grounded or not. Not part of the CharacterController built in grounded check")]
    public bool Grounded = true;
    [Tooltip("Useful for rough ground")]
    public float GroundedOffset = -0.14f;
    [Tooltip("The radius of the grounded check. Should match the radius of the CharacterController")]
    public float GroundedRadius = 0.28f;
    [Tooltip("What layers the character uses as ground")]
    public LayerMask GroundLayers;

    // player
    private float _speed;
    private float _animationBlend;
    private float _targetRotation = 0.0f;
    private float _rotationVelocity;
    private float _verticalVelocity;
    private float _terminalVelocity = 53.0f;

    // timeout deltatime
    private float _jumpTimeoutDelta;
    private float _fallTimeoutDelta;

    // animation IDs
    private int _animIDSpeed;
    private int _animIDGrounded;
    private int _animIDJump;
    private int _animIDFreeFall;
    private int _animIDMotionSpeed;
    private Dictionary<int, (float f, bool b)> _animPropCache = new Dictionary<int, (float f, bool b)>();

    private Animator _animator;
    //private CharacterController _controller;
    private SharedSpacesInputs _input;

    private const float _threshold = 0.01f;

    private bool _hasAnimator;

    private SharedSpacesLocalPlayerState LocalPlayerState => IsOwner ? SharedSpacesLocalPlayerState.Instance : null;

    private void Start()
    {
        _hasAnimator = TryGetComponent(out _animator);
        //_controller = GetComponent<CharacterController>();
        _input = GetComponent<SharedSpacesInputs>();

        AssignAnimationIDs();

        // reset our timeouts on start
        _jumpTimeoutDelta = JumpTimeout;
        _fallTimeoutDelta = FallTimeout;

        
    }

    public override void OnNetworkSpawn()
    {
        enabled = IsOwner;
        GetComponent<PlayerInput>().enabled = IsOwner;
    }

    private void Update()
    {

        _hasAnimator = TryGetComponent(out _animator);

        //move the fella
        if (LocalPlayerState)
        {
            transform.position = LocalPlayerState.playerCamera.transform.position;
        }

    }

    private void AssignAnimationIDs()
    {
        _animIDSpeed = Animator.StringToHash("Speed");
        _animIDGrounded = Animator.StringToHash("Grounded");
        _animIDJump = Animator.StringToHash("Jump");
        _animIDFreeFall = Animator.StringToHash("FreeFall");
        _animIDMotionSpeed = Animator.StringToHash("MotionSpeed");
    }

    private void OnDrawGizmosSelected()
    {
        Color transparentGreen = new Color(0.0f, 1.0f, 0.0f, 0.35f);
        Color transparentRed = new Color(1.0f, 0.0f, 0.0f, 0.35f);

        if (Grounded) Gizmos.color = transparentGreen;
        else Gizmos.color = transparentRed;

        // when selected, draw a gizmo in the position of, and matching radius of, the grounded collider
        Gizmos.DrawSphere(new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z), GroundedRadius);
    }

    [ServerRpc(RequireOwnership = true)]
    private void SetAnimatorFloatServerRpc(int id, float value)
    {
        _hasAnimator = _hasAnimator || TryGetComponent(out _animator);
        if (_hasAnimator)
            _animator.SetFloat(id, value);
    }
    [ServerRpc(RequireOwnership = true)]
    private void SetAnimatorBoolServerRpc(int id, bool value)
    {
        _hasAnimator = _hasAnimator || TryGetComponent(out _animator);
        if (_hasAnimator)
            _animator.SetBool(id, value);
    }

    private void SetAnimatorFloat(int id, float value)
    {
        if (_hasAnimator && _animPropCache.TryGetValue(id, out var current) && current.f.IsCloseTo(value))
            return;

        SetAnimatorFloatServerRpc(id, value);
        _animPropCache[id] = (value, false);
        
        if (_hasAnimator)
            _animator.SetFloat(id, value);
    }
    private void SetAnimatorBool(int id, bool value)
    {
        if (_hasAnimator && _animPropCache.TryGetValue(id, out var current) && current.b == value)
            return;

        SetAnimatorBoolServerRpc(id, value);
        _animPropCache[id] = (0.0f, value);
        
        if (_hasAnimator)
            _animator.SetBool(id, value);
    }
}
