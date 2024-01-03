// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/InstancingShader"
{
    Properties 
    {
        _MainTex ("Base (RGB)", 2D) = "white" {}
        [PerRendererData] _Color ("Color", Color) = (0, 0, 0, 1)
    }

    SubShader 
    {
        Tags {"Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Fade"}
        ZWrite Off
        Blend SrcAlpha OneMinusSrcAlpha
        Cull front 
        LOD 100

        Pass 
        {
            CGPROGRAM
            #pragma multi_compile_instancing
            #pragma vertex vert alpha
            #pragma fragment frag alpha

            #include "UnityCG.cginc"

            struct appdata_t 
            {
                float4 vertex   : POSITION;
                float2 texcoord : TEXCOORD0;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2f 
            {
                float4 vertex  : SV_POSITION;
                half2 texcoord : TEXCOORD0;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float4 _Color;
            UNITY_INSTANCING_BUFFER_START(Props)
                UNITY_DEFINE_INSTANCED_PROP(float4, _Color)
            UNITY_INSTANCING_BUFFER_END(Props)
            v2f vert (appdata_t v)
            {
                v2f o;
                UNITY_SETUP_INSTANCE_ID(v);
                UNITY_TRANSFER_INSTANCE_ID(v, o);
                o.vertex     = UnityObjectToClipPos(v.vertex);
                v.texcoord.x = 1 - v.texcoord.x;
                o.texcoord   = TRANSFORM_TEX(v.texcoord, _MainTex);

                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                UNITY_SETUP_INSTANCE_ID(i);
                fixed4 col = tex2D(_MainTex, i.texcoord) * _Color; // multiply by _Color
                return col;
            }

            ENDCG
        }
    }
}
