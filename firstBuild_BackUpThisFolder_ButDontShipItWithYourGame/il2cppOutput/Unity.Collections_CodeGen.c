﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* RewindableAllocator_TryU24BurstManaged_mBB6DAE6A8CDB2E3626C38F3B65186AAF6ACBF6E8_RuntimeMethod_var;
extern const RuntimeMethod* RewindableAllocator_Try_mA4AF5A5088097CB6343C3CC97058959976372C35_RuntimeMethod_var;
extern const RuntimeMethod* SlabAllocator_TryU24BurstManaged_mC48F05E806431B6537727E4D6A10550207FBB1EA_RuntimeMethod_var;
extern const RuntimeMethod* SlabAllocator_Try_mCD7DED588811A6E3F78E4A14CBFE2852D8E39DEB_RuntimeMethod_var;
extern const RuntimeMethod* StackAllocator_TryU24BurstManaged_mB88D607AA12E4D9181BF1FFE81A1AC3117FDB5E2_RuntimeMethod_var;
extern const RuntimeMethod* StackAllocator_Try_m093FA501B1B427E32DD9F654380B3EA56A5A4234_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
extern void EmbeddedAttribute__ctor_mB9EA4CCF3A3DC39A3BC92CFE9557FFAA77D15404 (void);
// 0x00000002 System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
extern void IsUnmanagedAttribute__ctor_m15974D59768AFF916E346F7107F7FF7F6AD9099C (void);
// 0x00000003 Unity.Collections.AllocatorManager/Block Unity.Collections.AllocatorManager::AllocateBlock(T&,System.Int32,System.Int32,System.Int32)
// 0x00000004 System.Void* Unity.Collections.AllocatorManager::Allocate(T&,System.Int32,System.Int32,System.Int32)
// 0x00000005 U* Unity.Collections.AllocatorManager::Allocate(T&,U,System.Int32)
// 0x00000006 System.Void* Unity.Collections.AllocatorManager::AllocateStruct(T&,U,System.Int32)
// 0x00000007 System.Void Unity.Collections.AllocatorManager::FreeBlock(T&,Unity.Collections.AllocatorManager/Block&)
// 0x00000008 System.Void Unity.Collections.AllocatorManager::Free(T&,System.Void*,System.Int32,System.Int32,System.Int32)
// 0x00000009 System.Void Unity.Collections.AllocatorManager::Free(T&,U*,System.Int32)
// 0x0000000A System.Void Unity.Collections.AllocatorManager::Free(Unity.Collections.AllocatorManager/AllocatorHandle,T*,System.Int32)
// 0x0000000B System.Void Unity.Collections.AllocatorManager::CheckDelegate(System.Boolean&)
extern void AllocatorManager_CheckDelegate_m52D3F12472A2BBC5A28D2F4B5011B19D2E36AC61 (void);
// 0x0000000C System.Boolean Unity.Collections.AllocatorManager::UseDelegate()
extern void AllocatorManager_UseDelegate_mEB18420309DAA2CC710BA123C6996C9FB6FC3798 (void);
// 0x0000000D System.Int32 Unity.Collections.AllocatorManager::allocate_block(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_allocate_block_mBEB6E6FDC334118DB679CF2619EBB3FF4FDD7FB5 (void);
// 0x0000000E System.Void Unity.Collections.AllocatorManager::forward_mono_allocate_block(Unity.Collections.AllocatorManager/Block&,System.Int32&)
extern void AllocatorManager_forward_mono_allocate_block_mD2A9A49DFC8CBDC39F27E2749048ABC91E124519 (void);
// 0x0000000F Unity.Collections.Allocator Unity.Collections.AllocatorManager::LegacyOf(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void AllocatorManager_LegacyOf_mAD212C1A7F5295C8987A6C9D7F81E8FF42E0A3BF (void);
// 0x00000010 System.Int32 Unity.Collections.AllocatorManager::TryLegacy(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_TryLegacy_mF4F0B8CE7B0293504FA12A6F9C4ACFF28B59FF79 (void);
// 0x00000011 System.Int32 Unity.Collections.AllocatorManager::Try(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_Try_m24A6A4EF594F8909B5677C94C4788F365E02E7F9 (void);
// 0x00000012 System.Boolean Unity.Collections.AllocatorManager::IsCustomAllocator(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909 (void);
// 0x00000013 System.Void Unity.Collections.AllocatorManager::.cctor()
extern void AllocatorManager__cctor_m3E94344CB4CD852C9427FE9394EBE4EC36BFEEA1 (void);
// 0x00000014 System.Void Unity.Collections.AllocatorManager/TryFunction::.ctor(System.Object,System.IntPtr)
extern void TryFunction__ctor_m10C4A7B32E87301727B84D8CBA081FABAE3CCE53 (void);
// 0x00000015 System.Int32 Unity.Collections.AllocatorManager/TryFunction::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2 (void);
// 0x00000016 Unity.Collections.AllocatorManager/TableEntry& Unity.Collections.AllocatorManager/AllocatorHandle::get_TableEntry()
extern void AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63 (void);
// 0x00000017 System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Rewind()
extern void AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1 (void);
// 0x00000018 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
extern void AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (void);
// 0x00000019 System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::get_Value()
extern void AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F (void);
// 0x0000001A System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::Try(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9 (void);
// 0x0000001B Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::get_Handle()
extern void AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2 (void);
// 0x0000001C Unity.Collections.Allocator Unity.Collections.AllocatorManager/AllocatorHandle::get_ToAllocator()
extern void AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF (void);
// 0x0000001D System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Dispose()
extern void AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3 (void);
// 0x0000001E System.Void Unity.Collections.AllocatorManager/Range::Dispose()
extern void Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A (void);
// 0x0000001F System.Int64 Unity.Collections.AllocatorManager/Block::get_Bytes()
extern void Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7 (void);
// 0x00000020 System.Int64 Unity.Collections.AllocatorManager/Block::get_AllocatedBytes()
extern void Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08 (void);
// 0x00000021 System.Int32 Unity.Collections.AllocatorManager/Block::get_Alignment()
extern void Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633 (void);
// 0x00000022 System.Void Unity.Collections.AllocatorManager/Block::set_Alignment(System.Int32)
extern void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F (void);
// 0x00000023 System.Void Unity.Collections.AllocatorManager/Block::Dispose()
extern void Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED (void);
// 0x00000024 System.Int32 Unity.Collections.AllocatorManager/Block::TryFree()
extern void Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225 (void);
// 0x00000025 System.Int32 Unity.Collections.AllocatorManager/IAllocator::Try(Unity.Collections.AllocatorManager/Block&)
// 0x00000026 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/IAllocator::get_Handle()
// 0x00000027 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/StackAllocator::get_Handle()
extern void StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267 (void);
// 0x00000028 System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558 (void);
// 0x00000029 System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_Try_m093FA501B1B427E32DD9F654380B3EA56A5A4234 (void);
// 0x0000002A System.Void Unity.Collections.AllocatorManager/StackAllocator::Dispose()
extern void StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB (void);
// 0x0000002B System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_TryU24BurstManaged_mB88D607AA12E4D9181BF1FFE81A1AC3117FDB5E2 (void);
// 0x0000002C System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_0000097EU24PostfixBurstDelegate__ctor_m4E3868C8A411DAF57EF8A9D97631E120C2DC6EEE (void);
// 0x0000002D System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000097EU24PostfixBurstDelegate_Invoke_m324F6448CF4FE9CF56BAB3979C72CD5CE5BE4D70 (void);
// 0x0000002E System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_0000097EU24BurstDirectCall_GetFunctionPointerDiscard_m6AF180EC22A4927E094D972F89051FAFC8BDF1C3 (void);
// 0x0000002F System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::GetFunctionPointer()
extern void Try_0000097EU24BurstDirectCall_GetFunctionPointer_m4D2948869CAA0149DCB01A4315F0DFC40E219D1D (void);
// 0x00000030 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::Constructor()
extern void Try_0000097EU24BurstDirectCall_Constructor_m8FD87B838F183CE09AB64A062D7D78C93C424608 (void);
// 0x00000031 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::Initialize()
extern void Try_0000097EU24BurstDirectCall_Initialize_m2D23B74BCC409B0C57771D57257370594D5497E0 (void);
// 0x00000032 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::.cctor()
extern void Try_0000097EU24BurstDirectCall__cctor_m6D9E803E60BC0C4540EB3EDBE1651533D79E0FCC (void);
// 0x00000033 System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000097EU24BurstDirectCall_Invoke_m565A2C7B059B9E1E870EBC965029DF37E95078BE (void);
// 0x00000034 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/SlabAllocator::get_Handle()
extern void SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE (void);
// 0x00000035 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::get_SlabSizeInBytes()
extern void SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612 (void);
// 0x00000036 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD (void);
// 0x00000037 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_Try_mCD7DED588811A6E3F78E4A14CBFE2852D8E39DEB (void);
// 0x00000038 System.Void Unity.Collections.AllocatorManager/SlabAllocator::Dispose()
extern void SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912 (void);
// 0x00000039 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_TryU24BurstManaged_mC48F05E806431B6537727E4D6A10550207FBB1EA (void);
// 0x0000003A System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_0000098CU24PostfixBurstDelegate__ctor_m9E6F58E9EB432438802BB51EC7BE4D5D773B6992 (void);
// 0x0000003B System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000098CU24PostfixBurstDelegate_Invoke_mDE7805BCAD841995771EE5D737C0F50BA4641218 (void);
// 0x0000003C System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_0000098CU24BurstDirectCall_GetFunctionPointerDiscard_m8FB249CBDAA01BA8D8AC85D9D22498688B0E92CA (void);
// 0x0000003D System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::GetFunctionPointer()
extern void Try_0000098CU24BurstDirectCall_GetFunctionPointer_mF3FA5FCB8479F11C4B39D2552937D02FAE46A1B8 (void);
// 0x0000003E System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::Constructor()
extern void Try_0000098CU24BurstDirectCall_Constructor_mE725F91017185E00AF7AA204A918C09DFBD16BC0 (void);
// 0x0000003F System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::Initialize()
extern void Try_0000098CU24BurstDirectCall_Initialize_m87A200D4BEB001C8D77079AD352265490E07794F (void);
// 0x00000040 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::.cctor()
extern void Try_0000098CU24BurstDirectCall__cctor_m1F66E6693EA996C2DCCF5A5F6B0497A25E2EFAD6 (void);
// 0x00000041 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000098CU24BurstDirectCall_Invoke_m43A052ACB256E86A7614CB4817BC28D72FD8F5ED (void);
// 0x00000042 System.Int32 Unity.Collections.AllocatorManager/Array32768`1::get_Length()
// 0x00000043 System.Void Unity.Collections.AllocatorManager/Array32768`1::set_Length(System.Int32)
// 0x00000044 T& Unity.Collections.AllocatorManager/Array32768`1::ElementAt(System.Int32)
// 0x00000045 System.Void Unity.Collections.AllocatorManager/SharedStatics/TableEntry::.cctor()
extern void TableEntry__cctor_mCA16889126B2ED5EF69666F8B0376FCC8834FCE1 (void);
// 0x00000046 System.Void Unity.Collections.AllocatorManager/Managed::.cctor()
extern void Managed__cctor_mE3BC99DF4AF7BC63DE01424848BDC790B53500BA (void);
// 0x00000047 System.Void Unity.Collections.CreatePropertyAttribute::.ctor()
extern void CreatePropertyAttribute__ctor_mFD5BF090F42312F62534D903F2D804C19CE16264 (void);
// 0x00000048 System.Void Unity.Collections.BurstCompatibleAttribute::set_GenericTypeArguments(System.Type[])
extern void BurstCompatibleAttribute_set_GenericTypeArguments_mBE8AE08E0824187C5B48F5132C73624CAB2C6906 (void);
// 0x00000049 System.Void Unity.Collections.BurstCompatibleAttribute::.ctor()
extern void BurstCompatibleAttribute__ctor_m6D43ED0B880EE6FCCCBC38B1A63DB493898DD3BA (void);
// 0x0000004A System.Void Unity.Collections.NotBurstCompatibleAttribute::.ctor()
extern void NotBurstCompatibleAttribute__ctor_mF89AC194CF3CC2F03A673D1FBDE969E1751CB827 (void);
// 0x0000004B System.Int32 Unity.Collections.CollectionHelper::Align(System.Int32,System.Int32)
extern void CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F (void);
// 0x0000004C System.UInt32 Unity.Collections.CollectionHelper::Hash(System.Void*,System.Int32)
extern void CollectionHelper_Hash_mFB14DD4BA7288CEDF90E514A9397FB9C27E55293 (void);
// 0x0000004D System.Boolean Unity.Collections.CollectionHelper::ShouldDeallocate(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void CollectionHelper_ShouldDeallocate_m505E7EDBA71F02BAF52CC9DCD7C593CDA85D5465 (void);
// 0x0000004E System.Int32 Unity.Collections.CollectionHelper::AssumePositive(System.Int32)
extern void CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1 (void);
// 0x0000004F Unity.Collections.NativeArray`1<T> Unity.Collections.CollectionHelper::CreateNativeArray(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeArrayOptions)
// 0x00000050 System.Int32 Unity.Collections.FixedList::PaddingBytes()
// 0x00000051 System.Int32 Unity.Collections.FixedList::StorageBytes()
// 0x00000052 System.Int32 Unity.Collections.FixedList::Capacity()
// 0x00000053 System.Int32 Unity.Collections.FixedList32Bytes`1::get_Length()
// 0x00000054 System.Void Unity.Collections.FixedList32Bytes`1::set_Length(System.Int32)
// 0x00000055 System.Int32 Unity.Collections.FixedList32Bytes`1::get_LengthInBytes()
// 0x00000056 System.Byte* Unity.Collections.FixedList32Bytes`1::get_Buffer()
// 0x00000057 System.Int32 Unity.Collections.FixedList32Bytes`1::get_Capacity()
// 0x00000058 System.Int32 Unity.Collections.FixedList32Bytes`1::GetHashCode()
// 0x00000059 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000005A System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000005B System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000005C System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000005D System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000005E System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000005F System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000060 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000061 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000062 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000063 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(System.Object)
// 0x00000064 System.Collections.IEnumerator Unity.Collections.FixedList32Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000065 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList32Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000066 System.Int32 Unity.Collections.FixedList64Bytes`1::get_Length()
// 0x00000067 System.Void Unity.Collections.FixedList64Bytes`1::set_Length(System.Int32)
// 0x00000068 System.Int32 Unity.Collections.FixedList64Bytes`1::get_LengthInBytes()
// 0x00000069 System.Byte* Unity.Collections.FixedList64Bytes`1::get_Buffer()
// 0x0000006A System.Int32 Unity.Collections.FixedList64Bytes`1::get_Capacity()
// 0x0000006B System.Int32 Unity.Collections.FixedList64Bytes`1::GetHashCode()
// 0x0000006C System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000006D System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000006E System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000006F System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000070 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000071 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000072 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000073 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000074 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000075 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000076 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(System.Object)
// 0x00000077 System.Collections.IEnumerator Unity.Collections.FixedList64Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000078 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList64Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000079 System.Int32 Unity.Collections.FixedList128Bytes`1::get_Length()
// 0x0000007A System.Void Unity.Collections.FixedList128Bytes`1::set_Length(System.Int32)
// 0x0000007B System.Int32 Unity.Collections.FixedList128Bytes`1::get_LengthInBytes()
// 0x0000007C System.Byte* Unity.Collections.FixedList128Bytes`1::get_Buffer()
// 0x0000007D System.Int32 Unity.Collections.FixedList128Bytes`1::get_Capacity()
// 0x0000007E System.Int32 Unity.Collections.FixedList128Bytes`1::GetHashCode()
// 0x0000007F System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000080 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000081 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000082 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000083 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000084 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000085 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000086 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000087 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000088 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000089 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(System.Object)
// 0x0000008A System.Collections.IEnumerator Unity.Collections.FixedList128Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008B System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList128Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000008C System.Int32 Unity.Collections.FixedList512Bytes`1::get_Length()
// 0x0000008D System.Void Unity.Collections.FixedList512Bytes`1::set_Length(System.Int32)
// 0x0000008E System.Int32 Unity.Collections.FixedList512Bytes`1::get_LengthInBytes()
// 0x0000008F System.Byte* Unity.Collections.FixedList512Bytes`1::get_Buffer()
// 0x00000090 System.Int32 Unity.Collections.FixedList512Bytes`1::get_Capacity()
// 0x00000091 System.Int32 Unity.Collections.FixedList512Bytes`1::GetHashCode()
// 0x00000092 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000093 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000094 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000095 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000096 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000097 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000098 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000099 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000009A System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000009B System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000009C System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(System.Object)
// 0x0000009D System.Collections.IEnumerator Unity.Collections.FixedList512Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009E System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList512Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000009F System.Int32 Unity.Collections.FixedList4096Bytes`1::get_Length()
// 0x000000A0 System.Void Unity.Collections.FixedList4096Bytes`1::set_Length(System.Int32)
// 0x000000A1 System.Int32 Unity.Collections.FixedList4096Bytes`1::get_LengthInBytes()
// 0x000000A2 System.Byte* Unity.Collections.FixedList4096Bytes`1::get_Buffer()
// 0x000000A3 System.Int32 Unity.Collections.FixedList4096Bytes`1::get_Capacity()
// 0x000000A4 T Unity.Collections.FixedList4096Bytes`1::get_Item(System.Int32)
// 0x000000A5 System.Void Unity.Collections.FixedList4096Bytes`1::set_Item(System.Int32,T)
// 0x000000A6 System.Int32 Unity.Collections.FixedList4096Bytes`1::GetHashCode()
// 0x000000A7 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x000000A8 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x000000A9 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x000000AA System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x000000AB System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x000000AC System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x000000AD System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x000000AE System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x000000AF System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x000000B0 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x000000B1 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(System.Object)
// 0x000000B2 System.Collections.IEnumerator Unity.Collections.FixedList4096Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B3 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList4096Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000B4 System.Byte* Unity.Collections.FixedString32Bytes::GetUnsafePtr()
extern void FixedString32Bytes_GetUnsafePtr_mA653D9296813A2EA93C0D6FC501500008121C3A8 (void);
// 0x000000B5 System.Int32 Unity.Collections.FixedString32Bytes::get_Length()
extern void FixedString32Bytes_get_Length_mA349139D3C731DF762B4124B833B60BF0B283797 (void);
// 0x000000B6 System.Void Unity.Collections.FixedString32Bytes::set_Length(System.Int32)
extern void FixedString32Bytes_set_Length_m9BD2B7F7AA48AF38F72C4C3A3C00C9324F39FA8F (void);
// 0x000000B7 System.Int32 Unity.Collections.FixedString32Bytes::get_Capacity()
extern void FixedString32Bytes_get_Capacity_m4CEE4CE0CC97C33ED774FACD8211D766FEB549E2 (void);
// 0x000000B8 System.Boolean Unity.Collections.FixedString32Bytes::TryResize(System.Int32,Unity.Collections.NativeArrayOptions)
extern void FixedString32Bytes_TryResize_m2E7F8E8810492683C24102604F65EA3294BF6150 (void);
// 0x000000B9 System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(System.String)
extern void FixedString32Bytes_CompareTo_m79B33E69FCFCD08E454F2DEE35FC5F1C9C64E425 (void);
// 0x000000BA System.Boolean Unity.Collections.FixedString32Bytes::Equals(System.String)
extern void FixedString32Bytes_Equals_m1F50C94DF6B470C0BD1C56421A566EE556341766 (void);
// 0x000000BB System.Void Unity.Collections.FixedString32Bytes::.ctor(System.String)
extern void FixedString32Bytes__ctor_m1C1C73C55B3D020EA211DE2E9E6C7CF0400C6408 (void);
// 0x000000BC System.Int32 Unity.Collections.FixedString32Bytes::Initialize(System.String)
extern void FixedString32Bytes_Initialize_m42C7A7BFFFE132CCD2DB5984E779B4467F88D4AC (void);
// 0x000000BD System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString32Bytes_CompareTo_mD37FD30C7E3F389CC41E9E1AC9D3D655CA875D19 (void);
// 0x000000BE System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString32Bytes_op_Equality_m1426A50ADD3772C2008B14D276BD5C10A5D92573 (void);
// 0x000000BF System.Boolean Unity.Collections.FixedString32Bytes::op_Inequality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString32Bytes_op_Inequality_m79C9EBDDD8ACA515FEE668E2C49C5F0CD4B2AD16 (void);
// 0x000000C0 System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString32Bytes_Equals_m7CA0083FD7E3A4F0ECEC273977A88425F13806E6 (void);
// 0x000000C1 System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString32Bytes_CompareTo_mFC8EDD03F444D1B497D163FBF38A413A5DF47E70 (void);
// 0x000000C2 System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString32Bytes_op_Equality_m0F27AD70B9D59163D745A9CCC47A0F20739C25F6 (void);
// 0x000000C3 System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString32Bytes_Equals_m5E5B5F1ACC5BF8C93EF3A97BFB3CC1338F7D5A1D (void);
// 0x000000C4 System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString32Bytes_CompareTo_m77F538DDC2D8A7B5EFF36482F83E5B9DDCFE08D8 (void);
// 0x000000C5 System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString32Bytes_op_Equality_m8798D9727925F686AC8BB99439AB90C546A4D6C8 (void);
// 0x000000C6 System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString32Bytes_Equals_m84D35401C5A983408E4B4D26903EB05BBE05A53A (void);
// 0x000000C7 System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString32Bytes_CompareTo_m50123082F19E44CB94E7F56E28AD0119C3DE53F8 (void);
// 0x000000C8 System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString32Bytes_op_Equality_m856509D8F9C3F5E0895D7CBEBD74884F656A224B (void);
// 0x000000C9 System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString32Bytes_Equals_m23ABF390E00DDB6B6D391EFC121CF7474FD751C5 (void);
// 0x000000CA System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString32Bytes_CompareTo_mB5BB0CB6D7DE907B07C07BB20D5E1F8A74EA8EF8 (void);
// 0x000000CB System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString32Bytes_op_Equality_mF58CBA454E17E8C74B81BF854A277C9576E3AB67 (void);
// 0x000000CC System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString32Bytes_Equals_mAAD5520503E00E6340BAA463BC027C035F7C8317 (void);
// 0x000000CD Unity.Collections.FixedString32Bytes Unity.Collections.FixedString32Bytes::op_Implicit(System.String)
extern void FixedString32Bytes_op_Implicit_mD0ABB16ACC6621C61F924F70651403927DEACF9F (void);
// 0x000000CE System.String Unity.Collections.FixedString32Bytes::ToString()
extern void FixedString32Bytes_ToString_mCDBDE58EDFFA82B48A8613E724F92305B4C84914 (void);
// 0x000000CF System.Int32 Unity.Collections.FixedString32Bytes::GetHashCode()
extern void FixedString32Bytes_GetHashCode_m699B6C9D56B99126CB2F988A01DC87DF8A9CCFFD (void);
// 0x000000D0 System.Boolean Unity.Collections.FixedString32Bytes::Equals(System.Object)
extern void FixedString32Bytes_Equals_m95DCBCE85E03295E539FF672D39977CDF1233647 (void);
// 0x000000D1 System.Byte* Unity.Collections.FixedString64Bytes::GetUnsafePtr()
extern void FixedString64Bytes_GetUnsafePtr_mB61C0A15578E5DCFB19AC3A6504D66B4DAA88C6E (void);
// 0x000000D2 System.Int32 Unity.Collections.FixedString64Bytes::get_Length()
extern void FixedString64Bytes_get_Length_m7FC1591B9CBA2113727D06FC5EA43AE4A5F16BF5 (void);
// 0x000000D3 System.Void Unity.Collections.FixedString64Bytes::set_Length(System.Int32)
extern void FixedString64Bytes_set_Length_mF1C5F76690D2DB3BE7F6440213FA758E803462C6 (void);
// 0x000000D4 System.Int32 Unity.Collections.FixedString64Bytes::get_Capacity()
extern void FixedString64Bytes_get_Capacity_mDA79A4601FF4672BDDCCB90EA4EF40613F9C35B0 (void);
// 0x000000D5 System.Boolean Unity.Collections.FixedString64Bytes::TryResize(System.Int32,Unity.Collections.NativeArrayOptions)
extern void FixedString64Bytes_TryResize_m9B49BA15D7B2DFE50F4482E4113EE8E44EE9F138 (void);
// 0x000000D6 System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(System.String)
extern void FixedString64Bytes_CompareTo_m982D1C7FF590144B881A32008C73F1E3A1A8A63E (void);
// 0x000000D7 System.Boolean Unity.Collections.FixedString64Bytes::Equals(System.String)
extern void FixedString64Bytes_Equals_m9E74082A6DAD750845D5D82DCFFCDE5141056D1E (void);
// 0x000000D8 System.Void Unity.Collections.FixedString64Bytes::.ctor(System.String)
extern void FixedString64Bytes__ctor_mAC760222B77A7BB28B5A7E9A00B9168F3B99F211 (void);
// 0x000000D9 System.Int32 Unity.Collections.FixedString64Bytes::Initialize(System.String)
extern void FixedString64Bytes_Initialize_m82ABCB4DCF0902729F32BED310A7EC5F6C8021C4 (void);
// 0x000000DA System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString64Bytes_CompareTo_mC70C4EB2FFEEB4DD7372F57E2D3E5DE3B1773E2F (void);
// 0x000000DB System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString64Bytes_op_Equality_m3B842D63D93646FC370B5E22A8CFFE176AEE8692 (void);
// 0x000000DC System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString64Bytes_Equals_m48F66EA24CE289A0EF42E422ACE3DD222D5011F1 (void);
// 0x000000DD System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString64Bytes_CompareTo_mF3A1A476403FA9932C229A1A60D43575087D3D4F (void);
// 0x000000DE System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString64Bytes_op_Equality_m6482029A475ADE0C314A5EC31BF89F4773854DA1 (void);
// 0x000000DF System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString64Bytes_Equals_m5AA29267D5B6D641B68732BFD430646971ECD62D (void);
// 0x000000E0 System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString64Bytes_CompareTo_m3295FA78979CDA555DFA04CF29CFF649439B8711 (void);
// 0x000000E1 System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString64Bytes_op_Equality_m35753FD7FE758FBDF1D107EBAF7405E7D2D778D6 (void);
// 0x000000E2 System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString64Bytes_Equals_m5A4B5CD2579DAB7CA024749046D711F4621D29E2 (void);
// 0x000000E3 System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString64Bytes_CompareTo_m19F3795ED3A69BD3F5BC9C3B4C7E35897344AB50 (void);
// 0x000000E4 System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString64Bytes_op_Equality_m34038710CBDB51FC825814313571D76EF29BE475 (void);
// 0x000000E5 System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString64Bytes_Equals_mA2CAA548B481B1BBD0A0DC745DEAC5D7824F6970 (void);
// 0x000000E6 System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString64Bytes_CompareTo_m9407A8045F52D4C006BB232ED67AE6A6C4F56962 (void);
// 0x000000E7 System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString64Bytes_op_Equality_mE056F9BEACA73D92F6DDF5EC51FB12BDC7A1CB57 (void);
// 0x000000E8 System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString64Bytes_Equals_mA9BDDEACE5792EA7513B082B280999828FB6C1EB (void);
// 0x000000E9 Unity.Collections.FixedString64Bytes Unity.Collections.FixedString64Bytes::op_Implicit(System.String)
extern void FixedString64Bytes_op_Implicit_m3E667E6D427DA8F605D1B0D2B7ECD392070A874E (void);
// 0x000000EA System.String Unity.Collections.FixedString64Bytes::ToString()
extern void FixedString64Bytes_ToString_m67C6568EB9ED23E3B624E581A57E5BE8749A254E (void);
// 0x000000EB System.Int32 Unity.Collections.FixedString64Bytes::GetHashCode()
extern void FixedString64Bytes_GetHashCode_mECC24662CA8517B714FEE61D8CD82E7A30BF76D4 (void);
// 0x000000EC System.Boolean Unity.Collections.FixedString64Bytes::Equals(System.Object)
extern void FixedString64Bytes_Equals_m0E3F24AA5E7B50BA24D6CEE92A0617E115A86ED9 (void);
// 0x000000ED System.Byte* Unity.Collections.FixedString128Bytes::GetUnsafePtr()
extern void FixedString128Bytes_GetUnsafePtr_m5F280F7783EB21A69893D7FEF551F0E68D3E51BA (void);
// 0x000000EE System.Int32 Unity.Collections.FixedString128Bytes::get_Length()
extern void FixedString128Bytes_get_Length_mB01AB46B1F5415C0379CCAF98ED2AAE6F08C242E (void);
// 0x000000EF System.Void Unity.Collections.FixedString128Bytes::set_Length(System.Int32)
extern void FixedString128Bytes_set_Length_mBBB43CE32D9C6285009629AE64BC6C34759C2ED2 (void);
// 0x000000F0 System.Int32 Unity.Collections.FixedString128Bytes::get_Capacity()
extern void FixedString128Bytes_get_Capacity_mD161D26116BAA25254B2CCFAB79975FFDA9CA711 (void);
// 0x000000F1 System.Boolean Unity.Collections.FixedString128Bytes::TryResize(System.Int32,Unity.Collections.NativeArrayOptions)
extern void FixedString128Bytes_TryResize_mF1DCAFDBD573E0CCC60E0A534A5E854434B6BC39 (void);
// 0x000000F2 System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(System.String)
extern void FixedString128Bytes_CompareTo_m8FA619D7CD1ADD9AFC7D92148025CB181A117470 (void);
// 0x000000F3 System.Boolean Unity.Collections.FixedString128Bytes::Equals(System.String)
extern void FixedString128Bytes_Equals_mAD97C501810E69B444947F8169017A4A132DCE8B (void);
// 0x000000F4 System.Void Unity.Collections.FixedString128Bytes::.ctor(System.String)
extern void FixedString128Bytes__ctor_mB0E30CB7FA5CAFF30C1D4FDE75043FD7D7F2AA40 (void);
// 0x000000F5 System.Int32 Unity.Collections.FixedString128Bytes::Initialize(System.String)
extern void FixedString128Bytes_Initialize_m4A2BA0C3501339D697E1BCAA11763D6BAA45E1C4 (void);
// 0x000000F6 System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString128Bytes_CompareTo_mF9C0984E47EEB20E9E28A4AAE1275E59E42D81B5 (void);
// 0x000000F7 System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString128Bytes_op_Equality_m5F5BA10BF7DCBB3E8DFE55BA6AA3D0B515162637 (void);
// 0x000000F8 System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString128Bytes_Equals_m5C92E72BEBE4D7E67AF7646C4293F3F9EA7E33EC (void);
// 0x000000F9 System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString128Bytes_CompareTo_mB8E2D570CDCEE17387FD2BDA4BD35F9AD5C311A8 (void);
// 0x000000FA System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString128Bytes_op_Equality_mE6BF574CF44C2046A0D99E8630938F92FA6944A8 (void);
// 0x000000FB System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString128Bytes_Equals_mC7C2AEBA071128B24EB0BD130ED6423EA46275C1 (void);
// 0x000000FC System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString128Bytes_CompareTo_m3A02146ED7EA6B833583D2C1B38F6FF5B0870E6F (void);
// 0x000000FD System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString128Bytes_op_Equality_mE119008C751060334BD3CECF7B3D0B74B288F684 (void);
// 0x000000FE System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString128Bytes_Equals_m3B91B177B21344B9CB879DFDAA00AB7E812AD5AB (void);
// 0x000000FF System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString128Bytes_CompareTo_m7DAC821750F1242E519D29D8A1A01ABD6B5630C6 (void);
// 0x00000100 System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString128Bytes_op_Equality_m585E99914214C76581B50D2279924B42A6E5ADD1 (void);
// 0x00000101 System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString128Bytes_Equals_m02FB7C6C4862D4F44EDC97E72A4CADD0BD379D5F (void);
// 0x00000102 System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString128Bytes_CompareTo_m340091A89F740B13DE44A1F3AE938A14AE658A4B (void);
// 0x00000103 System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString128Bytes_op_Equality_mF721475F602666C9A09E70EB8C08B0D2DF7D83EA (void);
// 0x00000104 System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString128Bytes_Equals_m0A10CFEB353647A220B407CCEBE12035F0C1D4A2 (void);
// 0x00000105 Unity.Collections.FixedString128Bytes Unity.Collections.FixedString128Bytes::op_Implicit(System.String)
extern void FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E (void);
// 0x00000106 System.String Unity.Collections.FixedString128Bytes::ToString()
extern void FixedString128Bytes_ToString_m1CD5B095D5A80759EF2E7F60AA95921369958A29 (void);
// 0x00000107 System.Int32 Unity.Collections.FixedString128Bytes::GetHashCode()
extern void FixedString128Bytes_GetHashCode_mB211F7E224953364EE91770921BA59760A0E4428 (void);
// 0x00000108 System.Boolean Unity.Collections.FixedString128Bytes::Equals(System.Object)
extern void FixedString128Bytes_Equals_mF8C053D97C4EA171FF1A82613C836A231DDF0DD9 (void);
// 0x00000109 System.Byte* Unity.Collections.FixedString512Bytes::GetUnsafePtr()
extern void FixedString512Bytes_GetUnsafePtr_m6BE151F6C1AC2994321FFC794DD61AEE5E915E05 (void);
// 0x0000010A System.Int32 Unity.Collections.FixedString512Bytes::get_Length()
extern void FixedString512Bytes_get_Length_m07F07806B00F694DA08ED7C3BC04C9FCE7CE4E07 (void);
// 0x0000010B System.Void Unity.Collections.FixedString512Bytes::set_Length(System.Int32)
extern void FixedString512Bytes_set_Length_m5BECBE3190D559780E9F84276928B0EC612A1BDE (void);
// 0x0000010C System.Int32 Unity.Collections.FixedString512Bytes::get_Capacity()
extern void FixedString512Bytes_get_Capacity_m80069D7197EA5C9AC0149AEE21591CCCFBC0AB55 (void);
// 0x0000010D System.Boolean Unity.Collections.FixedString512Bytes::TryResize(System.Int32,Unity.Collections.NativeArrayOptions)
extern void FixedString512Bytes_TryResize_m924FCE76C50EFD1773E2A417BCA84B2C6B158ABD (void);
// 0x0000010E System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(System.String)
extern void FixedString512Bytes_CompareTo_mF2E8A9C2171833229322FEBEF4DF783251513B59 (void);
// 0x0000010F System.Boolean Unity.Collections.FixedString512Bytes::Equals(System.String)
extern void FixedString512Bytes_Equals_mE4279608ABCBD5236ADF59E96788F0837787F11A (void);
// 0x00000110 System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString512Bytes_CompareTo_mFEA161B206C05F7894DDF0CAB24CDBF525AD9F97 (void);
// 0x00000111 System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString512Bytes_op_Equality_m9396081EA8C88FEA2006D359260245627184D456 (void);
// 0x00000112 System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString512Bytes_Equals_m2AF82E5FAAF96DBD0A105DF94BD1287804D6D568 (void);
// 0x00000113 System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString512Bytes_CompareTo_mCF6F5BD2E7F95763F8903514954023697C1A3838 (void);
// 0x00000114 System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString512Bytes_op_Equality_m72AD5D8E203AEBD992FFDB15E2AA658549127C77 (void);
// 0x00000115 System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString512Bytes_Equals_m14403CF490B635D08B4FD2DCAB8473AD2A510CE6 (void);
// 0x00000116 System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString512Bytes_CompareTo_m80D4CAD931945D04AE44A9610D72D8E0839FB2B5 (void);
// 0x00000117 System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString512Bytes_op_Equality_m402E2B00BB62CC4AA6E20DBE2A763A64D957A951 (void);
// 0x00000118 System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString512Bytes_Equals_m865E75EE8511CFC6CB527D86E54AEE7AE010449A (void);
// 0x00000119 System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString512Bytes_CompareTo_m42E210C85C1D09E6698DCDDB40545351895E2574 (void);
// 0x0000011A System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString512Bytes_op_Equality_m2D57D6666092B59CE4541DB706A388DA6F7332C0 (void);
// 0x0000011B System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString512Bytes_Equals_m34F02FA9086BE42B8856DF5A85DA039FD3036E99 (void);
// 0x0000011C System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString512Bytes_CompareTo_mEC561BBFD17069268207BF2D6BD6E2C93E90A1B7 (void);
// 0x0000011D System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString512Bytes_op_Equality_m6C60AF29D4AFBB2FCD3F347EB45D4F4F2787AAFF (void);
// 0x0000011E System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString512Bytes_Equals_mE00AFBE32D04B3671E8D476855409B35B5C8E674 (void);
// 0x0000011F System.String Unity.Collections.FixedString512Bytes::ToString()
extern void FixedString512Bytes_ToString_m1A47583FB34608DBEEDC65F9CA6E7B8E7930233F (void);
// 0x00000120 System.Int32 Unity.Collections.FixedString512Bytes::GetHashCode()
extern void FixedString512Bytes_GetHashCode_m3F22B7550BFBA5E580D804CCAC7528BA8F64862B (void);
// 0x00000121 System.Boolean Unity.Collections.FixedString512Bytes::Equals(System.Object)
extern void FixedString512Bytes_Equals_m344621B84C32BCC845396B588F2AE18154B9C6C3 (void);
// 0x00000122 System.Byte* Unity.Collections.FixedString4096Bytes::GetUnsafePtr()
extern void FixedString4096Bytes_GetUnsafePtr_mE1DB42C2C0EEA7D6E1B5D0366A4727125D916EEB (void);
// 0x00000123 System.Int32 Unity.Collections.FixedString4096Bytes::get_Length()
extern void FixedString4096Bytes_get_Length_mC2A80F2813739852F0675DA8D2AB68AA92BFC36F (void);
// 0x00000124 System.Void Unity.Collections.FixedString4096Bytes::set_Length(System.Int32)
extern void FixedString4096Bytes_set_Length_mB4335BCB8388D446FF0C612F81355BD4861F4F8B (void);
// 0x00000125 System.Int32 Unity.Collections.FixedString4096Bytes::get_Capacity()
extern void FixedString4096Bytes_get_Capacity_m55EE381DB20EC9C738999C9F562700569906434D (void);
// 0x00000126 System.Boolean Unity.Collections.FixedString4096Bytes::TryResize(System.Int32,Unity.Collections.NativeArrayOptions)
extern void FixedString4096Bytes_TryResize_mC7B1C3EF58A73536BD8A17AEA540B05D1FC4A8F7 (void);
// 0x00000127 System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(System.String)
extern void FixedString4096Bytes_CompareTo_mFE2F6019EBA8EAB9FCCDE7589C8A5F38DA8D4A58 (void);
// 0x00000128 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(System.String)
extern void FixedString4096Bytes_Equals_m3C8E7CA4F35F56F0759EEE2D8E5F1D4591D1E598 (void);
// 0x00000129 System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString4096Bytes_CompareTo_m8D38C45B1D05029012A417EB72A6108BB820C472 (void);
// 0x0000012A System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString4096Bytes_op_Equality_mA7CC6C4984FCC9EED79B16AF16237504BD00254D (void);
// 0x0000012B System.Boolean Unity.Collections.FixedString4096Bytes::op_Inequality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString4096Bytes_op_Inequality_m7FFBE281245A53F6FF937ABE36ADAD484F1B0B1F (void);
// 0x0000012C System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString4096Bytes_Equals_mF43146C7063DCE299D0708E173E48D146806796A (void);
// 0x0000012D System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString4096Bytes_CompareTo_mA10C3E4B7291BD7C68B64922D7EF51FF9019E7B1 (void);
// 0x0000012E System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString4096Bytes_op_Equality_m974761DC27A56EB51074713A5B755FEA5C84419B (void);
// 0x0000012F System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString4096Bytes_Equals_mF4868F94338530FEFCDF35BB76E1C3D64F54CAEF (void);
// 0x00000130 System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString4096Bytes_CompareTo_m40115F59AF4ADBC9F7C70B9A30B90DD660526D19 (void);
// 0x00000131 System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString4096Bytes_op_Equality_mCD4EAE52D8F0BA4161054E936710D0C0F3D43260 (void);
// 0x00000132 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString4096Bytes_Equals_mA00838D2DA8F71412C78B2C37D699B39D7897FB5 (void);
// 0x00000133 System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString4096Bytes_CompareTo_m16A7E31FA53206F33F3418353A43A2E02F662895 (void);
// 0x00000134 System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString4096Bytes_op_Equality_mD2FD6209FE469F2385026575EBC55A6079D3B0C5 (void);
// 0x00000135 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString4096Bytes_Equals_mB76C4C23572B2D379F22EB1EE52B84EE820F075F (void);
// 0x00000136 System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString4096Bytes_CompareTo_m1EA8E99320A4B5078747BCE1617B3B1574A53F01 (void);
// 0x00000137 System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString4096Bytes_op_Equality_m30D4A0EF7ED2223E8A41181F92E87DA31C73CCAF (void);
// 0x00000138 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString4096Bytes_Equals_m3991F570BEC852688D532724FD842E0BD3AC2BB6 (void);
// 0x00000139 System.String Unity.Collections.FixedString4096Bytes::ToString()
extern void FixedString4096Bytes_ToString_m1EB551FB3DB9E208AAF34DFFA3864DAB34FD1A26 (void);
// 0x0000013A System.Int32 Unity.Collections.FixedString4096Bytes::GetHashCode()
extern void FixedString4096Bytes_GetHashCode_m4F13B6A3839EDFD34CE37729A815905DD1AAB720 (void);
// 0x0000013B System.Boolean Unity.Collections.FixedString4096Bytes::Equals(System.Object)
extern void FixedString4096Bytes_Equals_mD182C954C7A720E5C452CE5C9B4BAA20D22A4952 (void);
// 0x0000013C Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,Unity.Collections.Unicode/Rune)
// 0x0000013D Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,System.Char)
// 0x0000013E Unity.Collections.FormatError Unity.Collections.FixedStringMethods::AppendRawByte(T&,System.Byte)
// 0x0000013F Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,System.Int64)
// 0x00000140 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,System.Int32)
// 0x00000141 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,System.Single,System.Char)
// 0x00000142 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,T2&)
// 0x00000143 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,System.Byte*,System.Int32)
// 0x00000144 System.Void Unity.Collections.FixedStringMethods::AppendFormat(T&,U&,T0&)
// 0x00000145 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,System.Char,System.Char)
// 0x00000146 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,System.Char,System.Char,System.Char)
// 0x00000147 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Append(T&,System.Char,System.Char,System.Char,System.Char,System.Char,System.Char,System.Char,System.Char)
// 0x00000148 Unity.Collections.FormatError Unity.Collections.FixedStringMethods::AppendScientific(T&,System.Char*,System.Int32,System.Int32,System.Char)
// 0x00000149 System.Int32 Unity.Collections.FixedStringMethods::CompareTo(T&,System.Byte*,System.Int32)
// 0x0000014A System.Int32 Unity.Collections.FixedStringMethods::CompareTo(T&,T2&)
// 0x0000014B Unity.Collections.FormatError Unity.Collections.FixedStringMethods::Write(T&,System.Int32&,Unity.Collections.Unicode/Rune)
// 0x0000014C System.String Unity.Collections.FixedStringMethods::ConvertToString(T&)
// 0x0000014D System.Int32 Unity.Collections.FixedStringMethods::ComputeHashCode(T&)
// 0x0000014E Unity.Collections.FixedString128Bytes Unity.Collections.FixedString::Format(Unity.Collections.FixedString128Bytes,System.Int32)
extern void FixedString_Format_m6F108E2AF8178697C27234FF8AA515F32B77F4AF (void);
// 0x0000014F Unity.Collections.FixedString128Bytes Unity.Collections.FixedString::Format(Unity.Collections.FixedString128Bytes,System.Single)
extern void FixedString_Format_m68D81C29724F640A5261464C671E96EB92AAA4B0 (void);
// 0x00000150 System.Byte* Unity.Collections.IUTF8Bytes::GetUnsafePtr()
// 0x00000151 System.Boolean Unity.Collections.IUTF8Bytes::TryResize(System.Int32,Unity.Collections.NativeArrayOptions)
// 0x00000152 System.Void Unity.Collections.FixedStringUtils::Base2ToBase10(System.UInt64&,System.Int32&,System.Single)
extern void FixedStringUtils_Base2ToBase10_m26FA15F7F8FA8E6736C0E6927D4C5A74B1D8EAF5 (void);
// 0x00000153 System.Void* Unity.Collections.Memory/Unmanaged::Allocate(System.Int64,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5 (void);
// 0x00000154 System.Void Unity.Collections.Memory/Unmanaged::Free(System.Void*,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Unmanaged_Free_m09F6EA89F368ED2C9E5EC5EA60C894C4434F4FD1 (void);
// 0x00000155 System.Void Unity.Collections.Memory/Unmanaged::Free(T*,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000156 System.Boolean Unity.Collections.Memory/Unmanaged/Array::IsCustom(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Array_IsCustom_m7651BFF84F5AEFA592FEE86C834A85C373DDC126 (void);
// 0x00000157 System.Void* Unity.Collections.Memory/Unmanaged/Array::CustomResize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
extern void Array_CustomResize_mB51497D583399092F23AA773ABB64F0780610D82 (void);
// 0x00000158 System.Void* Unity.Collections.Memory/Unmanaged/Array::Resize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
extern void Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void);
// 0x00000159 T* Unity.Collections.Memory/Unmanaged/Array::Resize(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000015A System.Int32 Unity.Collections.NativeArrayExtensions::IndexOf(Unity.Collections.NativeList`1<T>,U)
// 0x0000015B System.Int32 Unity.Collections.NativeArrayExtensions::IndexOf(System.Void*,System.Int32,U)
// 0x0000015C System.Void Unity.Collections.NativeArrayExtensions::Initialize(Unity.Collections.NativeArray`1<T>&,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeArrayOptions)
// 0x0000015D System.Void Unity.Collections.NativeHashMap`2::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000015E System.Void Unity.Collections.NativeHashMap`2::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int32)
// 0x0000015F System.Boolean Unity.Collections.NativeHashMap`2::TryAdd(TKey,TValue)
// 0x00000160 System.Boolean Unity.Collections.NativeHashMap`2::TryGetValue(TKey,TValue&)
// 0x00000161 System.Boolean Unity.Collections.NativeHashMap`2::ContainsKey(TKey)
// 0x00000162 TValue Unity.Collections.NativeHashMap`2::get_Item(TKey)
// 0x00000163 System.Void Unity.Collections.NativeHashMap`2::Dispose()
// 0x00000164 System.Collections.Generic.IEnumerator`1<Unity.Collections.LowLevel.Unsafe.KeyValue`2<TKey,TValue>> Unity.Collections.NativeHashMap`2::System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator()
// 0x00000165 System.Collections.IEnumerator Unity.Collections.NativeHashMap`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000166 System.Void Unity.Collections.NativeHashSet`1::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000167 System.Void Unity.Collections.NativeHashSet`1::Dispose()
// 0x00000168 System.Boolean Unity.Collections.NativeHashSet`1::Add(T)
// 0x00000169 System.Boolean Unity.Collections.NativeHashSet`1::Contains(T)
// 0x0000016A System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeHashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000016B System.Collections.IEnumerator Unity.Collections.NativeHashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000016C System.Int32 Unity.Collections.IIndexable`1::get_Length()
// 0x0000016D System.Void Unity.Collections.IIndexable`1::set_Length(System.Int32)
// 0x0000016E System.Int32 Unity.Collections.INativeList`1::get_Capacity()
// 0x0000016F System.Void Unity.Collections.NativeList`1::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000170 System.Void Unity.Collections.NativeList`1::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000171 System.Void Unity.Collections.NativeList`1::Initialize(System.Int32,U&,System.Int32)
// 0x00000172 System.Void Unity.Collections.NativeList`1::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int32)
// 0x00000173 T Unity.Collections.NativeList`1::get_Item(System.Int32)
// 0x00000174 System.Void Unity.Collections.NativeList`1::set_Item(System.Int32,T)
// 0x00000175 T& Unity.Collections.NativeList`1::ElementAt(System.Int32)
// 0x00000176 System.Int32 Unity.Collections.NativeList`1::get_Length()
// 0x00000177 System.Void Unity.Collections.NativeList`1::set_Length(System.Int32)
// 0x00000178 System.Int32 Unity.Collections.NativeList`1::get_Capacity()
// 0x00000179 System.Void Unity.Collections.NativeList`1::Add(T&)
// 0x0000017A System.Void Unity.Collections.NativeList`1::InsertRangeWithBeginEnd(System.Int32,System.Int32)
// 0x0000017B System.Void Unity.Collections.NativeList`1::RemoveAt(System.Int32)
// 0x0000017C System.Boolean Unity.Collections.NativeList`1::get_IsCreated()
// 0x0000017D System.Void Unity.Collections.NativeList`1::Dispose()
// 0x0000017E System.Void Unity.Collections.NativeList`1::Clear()
// 0x0000017F Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1::op_Implicit(Unity.Collections.NativeList`1<T>)
// 0x00000180 Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1::AsArray()
// 0x00000181 Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeList`1::GetEnumerator()
// 0x00000182 System.Collections.IEnumerator Unity.Collections.NativeList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000183 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000184 System.Void Unity.Collections.NativeList`1::Resize(System.Int32,Unity.Collections.NativeArrayOptions)
// 0x00000185 System.Void Unity.Collections.NativeList`1::ResizeUninitialized(System.Int32)
// 0x00000186 Unity.Collections.NativeQueueBlockHeader* Unity.Collections.NativeQueueBlockPoolData::AllocateBlock()
extern void NativeQueueBlockPoolData_AllocateBlock_m5B26A5ECC71386FA451CC6A8539CA5828A0D41CD (void);
// 0x00000187 System.Void Unity.Collections.NativeQueueBlockPoolData::FreeBlock(Unity.Collections.NativeQueueBlockHeader*)
extern void NativeQueueBlockPoolData_FreeBlock_m1F946136116E617CAA61EE33BCF4B55E71A2E6DC (void);
// 0x00000188 Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueueBlockPool::GetQueueBlockPool()
extern void NativeQueueBlockPool_GetQueueBlockPool_m72A3D0FE305C26652617D578ADE6C2EE6754FA7A (void);
// 0x00000189 System.Void Unity.Collections.NativeQueueBlockPool::AppDomainOnDomainUnload()
extern void NativeQueueBlockPool_AppDomainOnDomainUnload_mD3B4E5430F5D7EC43B4B41DF3B87D26D5418A606 (void);
// 0x0000018A System.Void Unity.Collections.NativeQueueBlockPool::OnDomainUnload(System.Object,System.EventArgs)
extern void NativeQueueBlockPool_OnDomainUnload_m1BC3ECE44F94F0D5579AC3643A8C229BB806847D (void);
// 0x0000018B System.Void Unity.Collections.NativeQueueBlockPool::.cctor()
extern void NativeQueueBlockPool__cctor_m9730DA75F226458D19D4D98D9A3BE7133B9B177C (void);
// 0x0000018C Unity.Collections.NativeQueueBlockHeader* Unity.Collections.NativeQueueData::GetCurrentWriteBlockTLS(System.Int32)
extern void NativeQueueData_GetCurrentWriteBlockTLS_m21D4E781362232FFB12406ED641A17D25C34632C (void);
// 0x0000018D System.Void Unity.Collections.NativeQueueData::SetCurrentWriteBlockTLS(System.Int32,Unity.Collections.NativeQueueBlockHeader*)
extern void NativeQueueData_SetCurrentWriteBlockTLS_m36127FAE539B6E36DBCCEF247F067270E0CE9149 (void);
// 0x0000018E Unity.Collections.NativeQueueBlockHeader* Unity.Collections.NativeQueueData::AllocateWriteBlockMT(Unity.Collections.NativeQueueData*,Unity.Collections.NativeQueueBlockPoolData*,System.Int32)
// 0x0000018F System.Void Unity.Collections.NativeQueueData::AllocateQueue(Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeQueueData*&)
// 0x00000190 System.Void Unity.Collections.NativeQueueData::DeallocateQueue(Unity.Collections.NativeQueueData*,Unity.Collections.NativeQueueBlockPoolData*,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void NativeQueueData_DeallocateQueue_m00F1377036BFEDFFD7627C8E188150B2BB05F328 (void);
// 0x00000191 System.Void Unity.Collections.NativeQueue`1::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000192 System.Int32 Unity.Collections.NativeQueue`1::get_Count()
// 0x00000193 System.Void Unity.Collections.NativeQueue`1::Enqueue(T)
// 0x00000194 System.Boolean Unity.Collections.NativeQueue`1::TryDequeue(T&)
// 0x00000195 System.Void Unity.Collections.NativeQueue`1::Clear()
// 0x00000196 System.Void Unity.Collections.NativeQueue`1::Dispose()
// 0x00000197 Unity.Collections.NativeQueue`1/ParallelWriter<T> Unity.Collections.NativeQueue`1::AsParallelWriter()
// 0x00000198 System.Void Unity.Collections.NativeQueue`1/ParallelWriter::Enqueue(T)
// 0x00000199 System.Void Unity.Collections.NativeReference`1::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeArrayOptions)
// 0x0000019A System.Void Unity.Collections.NativeReference`1::Allocate(Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeReference`1<T>&)
// 0x0000019B T Unity.Collections.NativeReference`1::get_Value()
// 0x0000019C System.Void Unity.Collections.NativeReference`1::set_Value(T)
// 0x0000019D System.Void Unity.Collections.NativeReference`1::Dispose()
// 0x0000019E System.Boolean Unity.Collections.NativeReference`1::Equals(Unity.Collections.NativeReference`1<T>)
// 0x0000019F System.Boolean Unity.Collections.NativeReference`1::Equals(System.Object)
// 0x000001A0 System.Int32 Unity.Collections.NativeReference`1::GetHashCode()
// 0x000001A1 System.Void Unity.Collections.Spinner::Lock()
extern void Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7 (void);
// 0x000001A2 System.Void Unity.Collections.Spinner::Unlock()
extern void Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A (void);
// 0x000001A3 System.Void Unity.Collections.UnmanagedArray`1::Dispose()
// 0x000001A4 T& Unity.Collections.UnmanagedArray`1::get_Item(System.Int32)
// 0x000001A5 System.Void Unity.Collections.RewindableAllocator::Rewind()
extern void RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595 (void);
// 0x000001A6 System.Void Unity.Collections.RewindableAllocator::Dispose()
extern void RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F (void);
// 0x000001A7 System.Int32 Unity.Collections.RewindableAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED (void);
// 0x000001A8 System.Int32 Unity.Collections.RewindableAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_Try_mA4AF5A5088097CB6343C3CC97058959976372C35 (void);
// 0x000001A9 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.RewindableAllocator::get_Handle()
extern void RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E (void);
// 0x000001AA System.Int32 Unity.Collections.RewindableAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_TryU24BurstManaged_mBB6DAE6A8CDB2E3626C38F3B65186AAF6ACBF6E8 (void);
// 0x000001AB System.Void Unity.Collections.RewindableAllocator/MemoryBlock::.ctor(System.Int64)
extern void MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F (void);
// 0x000001AC System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Rewind()
extern void MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069 (void);
// 0x000001AD System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Dispose()
extern void MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F (void);
// 0x000001AE System.Int32 Unity.Collections.RewindableAllocator/MemoryBlock::TryAllocate(Unity.Collections.AllocatorManager/Block&)
extern void MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10 (void);
// 0x000001AF System.Boolean Unity.Collections.RewindableAllocator/MemoryBlock::Contains(System.IntPtr)
extern void MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC (void);
// 0x000001B0 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_000006E6U24PostfixBurstDelegate__ctor_mA295EC796EC1F185B3169F07893F684A865565C1 (void);
// 0x000001B1 System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_000006E6U24PostfixBurstDelegate_Invoke_m55694249E8A0556322798E88394271A1F173150B (void);
// 0x000001B2 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_000006E6U24BurstDirectCall_GetFunctionPointerDiscard_m1B3F8DD7B28BF2F5F17B13F20E3143119FF635FA (void);
// 0x000001B3 System.IntPtr Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::GetFunctionPointer()
extern void Try_000006E6U24BurstDirectCall_GetFunctionPointer_m4E7AEF80846D3FDA028F59DDCAFA2B9D16221D58 (void);
// 0x000001B4 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::Constructor()
extern void Try_000006E6U24BurstDirectCall_Constructor_m4069614047B91CE4D9D5E6F6EA146A491DCB16BA (void);
// 0x000001B5 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::Initialize()
extern void Try_000006E6U24BurstDirectCall_Initialize_m69C16A383B9323977377D5C1DC99B033C89FF54E (void);
// 0x000001B6 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::.cctor()
extern void Try_000006E6U24BurstDirectCall__cctor_m533758B0BD60C9DD2E2CE71C897C48BAB1C9C56C (void);
// 0x000001B7 System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_000006E6U24BurstDirectCall_Invoke_m7B90D503373C6B87DD499837E4800AF754714B13 (void);
// 0x000001B8 System.Boolean Unity.Collections.Unicode::IsValidCodePoint(System.Int32)
extern void Unicode_IsValidCodePoint_m6F8516FA18D35B6D052FD6BDE01D9D497EA06B9D (void);
// 0x000001B9 System.Boolean Unity.Collections.Unicode::NotTrailer(System.Byte)
extern void Unicode_NotTrailer_m9FD6FC331044FE0EFC90E29A2808C4A6535E4CAD (void);
// 0x000001BA Unity.Collections.Unicode/Rune Unity.Collections.Unicode::get_ReplacementCharacter()
extern void Unicode_get_ReplacementCharacter_m525CDE0E6CAB489454025711F93FF832A600556A (void);
// 0x000001BB Unity.Collections.ConversionError Unity.Collections.Unicode::Utf8ToUcs(Unity.Collections.Unicode/Rune&,System.Byte*,System.Int32&,System.Int32)
extern void Unicode_Utf8ToUcs_m013E3A507C4B6F5459B09C6EA8EA229BDC979827 (void);
// 0x000001BC System.Boolean Unity.Collections.Unicode::IsLeadingSurrogate(System.Char)
extern void Unicode_IsLeadingSurrogate_mCFA66EB348CD8F48DB573D45B2658A95BA248F06 (void);
// 0x000001BD System.Boolean Unity.Collections.Unicode::IsTrailingSurrogate(System.Char)
extern void Unicode_IsTrailingSurrogate_m2ECEB76882DCD6006C95D3861BFA7654D3A22B25 (void);
// 0x000001BE Unity.Collections.ConversionError Unity.Collections.Unicode::Utf16ToUcs(Unity.Collections.Unicode/Rune&,System.Char*,System.Int32&,System.Int32)
extern void Unicode_Utf16ToUcs_m55352C5470C6C4C506B02E9827F05C7285F113D3 (void);
// 0x000001BF Unity.Collections.ConversionError Unity.Collections.Unicode::UcsToUtf8(System.Byte*,System.Int32&,System.Int32,Unity.Collections.Unicode/Rune)
extern void Unicode_UcsToUtf8_mBE0B9FE432D859A3409B7BD03C26C958CF9301BE (void);
// 0x000001C0 Unity.Collections.ConversionError Unity.Collections.Unicode::UcsToUtf16(System.Char*,System.Int32&,System.Int32,Unity.Collections.Unicode/Rune)
extern void Unicode_UcsToUtf16_m14C1098270C0DFFAF6B48D47C3214344FD4FAE0E (void);
// 0x000001C1 Unity.Collections.ConversionError Unity.Collections.Unicode::Utf16ToUtf8(System.Char*,System.Int32,System.Byte*,System.Int32&,System.Int32)
extern void Unicode_Utf16ToUtf8_mF16BCB8771E0A53EE7464D418792F4CEB99A641E (void);
// 0x000001C2 Unity.Collections.ConversionError Unity.Collections.Unicode::Utf8ToUtf16(System.Byte*,System.Int32,System.Char*,System.Int32&,System.Int32)
extern void Unicode_Utf8ToUtf16_mF3051E9181A57301EEF945C10B97D3C9356706DD (void);
// 0x000001C3 Unity.Collections.Unicode/Rune Unity.Collections.Unicode/Rune::op_Explicit(System.Char)
extern void Rune_op_Explicit_mE522A7646091C5FC49F41954FCDB8880AB9D6595 (void);
// 0x000001C4 System.Int32 Unity.Collections.Unicode/Rune::LengthInUtf8Bytes()
extern void Rune_LengthInUtf8Bytes_m2E470564E773DB43A761FC2A5DA17F0885E81489 (void);
// 0x000001C5 Unity.Collections.CopyError Unity.Collections.UTF8ArrayUnsafeUtility::Copy(System.Byte*,System.UInt16&,System.UInt16,System.Char*,System.Int32)
extern void UTF8ArrayUnsafeUtility_Copy_m599E2064905A6DF1D3F386114B76668CD0E5B7B9 (void);
// 0x000001C6 System.Int32 Unity.Collections.UTF8ArrayUnsafeUtility::StrCmp(System.Byte*,System.Int32,System.Byte*,System.Int32)
extern void UTF8ArrayUnsafeUtility_StrCmp_mEA1B1EC00085F9EDEC1CDEFCF53C2E83830374D4 (void);
// 0x000001C7 System.Boolean Unity.Collections.UTF8ArrayUnsafeUtility::EqualsUTF8Bytes(System.Byte*,System.Int32,System.Byte*,System.Int32)
extern void UTF8ArrayUnsafeUtility_EqualsUTF8Bytes_m96A84A5B2B6E4ABA06A65995D7EA16477797E754 (void);
// 0x000001C8 System.Int32 Unity.Collections.UTF8ArrayUnsafeUtility::StrCmp(System.Byte*,System.Int32,System.Char*,System.Int32)
extern void UTF8ArrayUnsafeUtility_StrCmp_m2C38EE679FD06EDDEB1409956BA7398431FF2FEC (void);
// 0x000001C9 System.Void Unity.Collections.UTF8ArrayUnsafeUtility/Comparison::.ctor(Unity.Collections.Unicode/Rune,Unity.Collections.ConversionError,Unity.Collections.Unicode/Rune,Unity.Collections.ConversionError)
extern void Comparison__ctor_m40D70075E3FE042352BE5C6589C23C5D7D41668C (void);
// 0x000001CA System.Void Unity.Collections.xxHash3::Avx2HashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
extern void xxHash3_Avx2HashLongInternalLoop_mCAEEE715FCB699CA2F1B947BCD252AA0F87D2B15 (void);
// 0x000001CB System.Void Unity.Collections.xxHash3::Avx2ScrambleAcc(System.UInt64*,System.Byte*)
extern void xxHash3_Avx2ScrambleAcc_m64D8B68219EA3E164A61D2001E0969263CF098CE (void);
// 0x000001CC System.Void Unity.Collections.xxHash3::Avx2Accumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
extern void xxHash3_Avx2Accumulate_mD57A48AB8FB3471A923F64F7C8B52FF8538E791D (void);
// 0x000001CD System.Void Unity.Collections.xxHash3::Avx2Accumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*)
extern void xxHash3_Avx2Accumulate512_mBB4B8AAAA2DC7E6B1350597687C11B82E81CEF06 (void);
// 0x000001CE System.UInt64 Unity.Collections.xxHash3::Hash64Long(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void xxHash3_Hash64Long_m9950702E864DCCD9B8DEAAE23E7CBB5E79D4AC62 (void);
// 0x000001CF System.Void Unity.Collections.xxHash3::Hash128Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Long_mED9958D31B54E0E0666AAD34A52DE7CDEB802E6F (void);
// 0x000001D0 Unity.Mathematics.uint4 Unity.Collections.xxHash3::ToUint4(System.UInt64,System.UInt64)
extern void xxHash3_ToUint4_m811AB95294FBBC0F17A5358D0A22669691CE3633 (void);
// 0x000001D1 System.UInt64 Unity.Collections.xxHash3::Read64LE(System.Void*)
extern void xxHash3_Read64LE_mD275A5EFD8727CDE8B8E280D4A5D5B82D5E3B195 (void);
// 0x000001D2 System.Void Unity.Collections.xxHash3::Write64LE(System.Void*,System.UInt64)
extern void xxHash3_Write64LE_m79CC2011BF16363F2338D61BE43E99E6467A9437 (void);
// 0x000001D3 System.UInt64 Unity.Collections.xxHash3::Mul32To64(System.UInt32,System.UInt32)
extern void xxHash3_Mul32To64_m9210E9379305FC38A6D69C698F6E1A30013BC4F5 (void);
// 0x000001D4 System.UInt64 Unity.Collections.xxHash3::XorShift64(System.UInt64,System.Int32)
extern void xxHash3_XorShift64_mF4245CDE1C4AF6B1CC8F57AAE0DA8C7E04673CFC (void);
// 0x000001D5 System.UInt64 Unity.Collections.xxHash3::Mul128Fold64(System.UInt64,System.UInt64)
extern void xxHash3_Mul128Fold64_mF59DCB5142027D151F52C7748BFA28C32B3B8F38 (void);
// 0x000001D6 System.UInt64 Unity.Collections.xxHash3::Avalanche(System.UInt64)
extern void xxHash3_Avalanche_m059990B780566C6F04C66700B2BE7817B4FA2F18 (void);
// 0x000001D7 System.UInt64 Unity.Collections.xxHash3::Mix2Acc(System.UInt64,System.UInt64,System.Byte*)
extern void xxHash3_Mix2Acc_mDEB8D0C149D943295B8A3049A437578BE879BED8 (void);
// 0x000001D8 System.UInt64 Unity.Collections.xxHash3::MergeAcc(System.UInt64*,System.Byte*,System.UInt64)
extern void xxHash3_MergeAcc_mB01ADB1934EDFE8FE3B2AAB13DA6884EB1133A14 (void);
// 0x000001D9 System.Void Unity.Collections.xxHash3::DefaultHashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
extern void xxHash3_DefaultHashLongInternalLoop_m9181A3A8DBE8DBEFF1B730ECC9A9AA5E93110F1B (void);
// 0x000001DA System.Void Unity.Collections.xxHash3::DefaultAccumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
extern void xxHash3_DefaultAccumulate_m3D28C5486CC42D31D2D832F40DEFE1A7CF508CA5 (void);
// 0x000001DB System.Void Unity.Collections.xxHash3::DefaultAccumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int32)
extern void xxHash3_DefaultAccumulate512_mFADF15092DA5379116D3FCCFC4238ADBF48D85D7 (void);
// 0x000001DC System.Void Unity.Collections.xxHash3::DefaultScrambleAcc(System.UInt64*,System.Byte*)
extern void xxHash3_DefaultScrambleAcc_mA46D6E8E1BA4613A50B56C8536B0DA3F50437137 (void);
// 0x000001DD System.UInt64 Unity.Collections.xxHash3::Hash64Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void xxHash3_Hash64LongU24BurstManaged_m71E36BBD116CCA46ED23162F80B08D3B2F782B4D (void);
// 0x000001DE System.Void Unity.Collections.xxHash3::Hash128Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128LongU24BurstManaged_m961A07284DAB6ADFF52EB4287E9D105AB971FDF6 (void);
// 0x000001DF System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Hash64Long_0000071DU24PostfixBurstDelegate__ctor_mAA816B552583BBF0345F3BF9E10146D2BB7F75F4 (void);
// 0x000001E0 System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void Hash64Long_0000071DU24PostfixBurstDelegate_Invoke_mA703A2BD646351C6FA75259F26F12BC2D9D70BFF (void);
// 0x000001E1 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Hash64Long_0000071DU24BurstDirectCall_GetFunctionPointerDiscard_m7A4CA1217A64D411ED07D1D3A72E6BD5E0C927FE (void);
// 0x000001E2 System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::GetFunctionPointer()
extern void Hash64Long_0000071DU24BurstDirectCall_GetFunctionPointer_m37B0865B8DABAEA1D28D39C36CC2F229EEC54267 (void);
// 0x000001E3 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::Constructor()
extern void Hash64Long_0000071DU24BurstDirectCall_Constructor_m1A7B2D63B8EC9BA41ED9BBE30618FAEA9731B3DE (void);
// 0x000001E4 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::Initialize()
extern void Hash64Long_0000071DU24BurstDirectCall_Initialize_m995C925DC5918C21563F4FB1B3466A2465020578 (void);
// 0x000001E5 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::.cctor()
extern void Hash64Long_0000071DU24BurstDirectCall__cctor_mD6287194F5736004328B9FA8B9B4C2AC479D9B29 (void);
// 0x000001E6 System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void Hash64Long_0000071DU24BurstDirectCall_Invoke_mC3A346DEA4D298905A0A1E69BF23B9F04DA41226 (void);
// 0x000001E7 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Hash128Long_00000724U24PostfixBurstDelegate__ctor_mA70726DF6285E514E02A2874991DCE8560B283D5 (void);
// 0x000001E8 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void Hash128Long_00000724U24PostfixBurstDelegate_Invoke_m90B7C2AED7E18A0776F50E22F830E4E4DBD154CA (void);
// 0x000001E9 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Hash128Long_00000724U24BurstDirectCall_GetFunctionPointerDiscard_m7E8D0F29A949D77F8911359791501F3652DAE050 (void);
// 0x000001EA System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::GetFunctionPointer()
extern void Hash128Long_00000724U24BurstDirectCall_GetFunctionPointer_m1B1F6B1005561D04A9C8F5F24DBCD98C83B971CC (void);
// 0x000001EB System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::Constructor()
extern void Hash128Long_00000724U24BurstDirectCall_Constructor_mEAF80A4054770022CC3376F289460FF5C628CB24 (void);
// 0x000001EC System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::Initialize()
extern void Hash128Long_00000724U24BurstDirectCall_Initialize_m3754CC927F2B00E853721D2A50D2E70662A6EF2C (void);
// 0x000001ED System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::.cctor()
extern void Hash128Long_00000724U24BurstDirectCall__cctor_mF7C0DE50ADCDA3F9CF7CF4B00CD72F5BB4AC7506 (void);
// 0x000001EE System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void Hash128Long_00000724U24BurstDirectCall_Invoke_mE7F31F7F2047C671537BEB603CDEF312ABCBC345 (void);
// 0x000001EF System.Void* Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility::GetUnsafePtr(Unity.Collections.NativeList`1<T>)
// 0x000001F0 System.Void* Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility::GetUnsafeReadOnlyPtr(Unity.Collections.NativeList`1<T>)
// 0x000001F1 System.Void* Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility::GetInternalListDataPtrUnchecked(Unity.Collections.NativeList`1<T>&)
// 0x000001F2 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GetBucketSize(System.Int32)
extern void UnsafeHashMapData_GetBucketSize_m17A5F68A59D412D436867D3C5F0DE92C0A618E66 (void);
// 0x000001F3 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GrowCapacity(System.Int32)
extern void UnsafeHashMapData_GrowCapacity_m9F5FA7B8596A7D1F437808D889FDBA7F857EEB64 (void);
// 0x000001F4 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::AllocateHashMap(System.Int32,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*&)
// 0x000001F5 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::ReallocateHashMap(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,System.Int32,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000001F6 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::DeallocateHashMap(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void UnsafeHashMapData_DeallocateHashMap_mB18705656928CE3FFF2F3EFD079F7AF719F03130 (void);
// 0x000001F7 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::CalculateDataSize(System.Int32,System.Int32,System.Int32&,System.Int32&,System.Int32&)
// 0x000001F8 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GetCount(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*)
extern void UnsafeHashMapData_GetCount_m9E897C5011779A3FF8B21473CE767A83393461C7 (void);
// 0x000001F9 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GetKeyArray(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,Unity.Collections.NativeArray`1<TKey>)
// 0x000001FA System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::Clear(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*)
// 0x000001FB System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::TryAdd(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TKey,TValue,System.Boolean,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000001FC System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::Remove(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TKey,System.Boolean)
// 0x000001FD System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::TryGetFirstValueAtomic(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TKey,TValue&,Unity.Collections.NativeMultiHashMapIterator`1<TKey>&)
// 0x000001FE System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::TryGetNextValueAtomic(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TValue&,Unity.Collections.NativeMultiHashMapIterator`1<TKey>&)
// 0x000001FF System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::SetValue(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,Unity.Collections.NativeMultiHashMapIterator`1<TKey>&,TValue&)
// 0x00000200 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000201 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::Clear()
// 0x00000202 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::TryAdd(TKey,TValue)
// 0x00000203 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::Remove(TKey)
// 0x00000204 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::TryGetValue(TKey,TValue&)
// 0x00000205 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::ContainsKey(TKey)
// 0x00000206 TValue Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::get_Item(TKey)
// 0x00000207 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::set_Item(TKey,TValue)
// 0x00000208 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::Dispose()
// 0x00000209 Unity.Collections.NativeArray`1<TKey> Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::GetKeyArray(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000020A System.Collections.Generic.IEnumerator`1<Unity.Collections.LowLevel.Unsafe.KeyValue`2<TKey,TValue>> Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator()
// 0x0000020B System.Collections.IEnumerator Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000020C System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Length()
// 0x0000020D System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::set_Length(System.Int32)
// 0x0000020E System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Capacity()
// 0x0000020F T Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Item(System.Int32)
// 0x00000210 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::set_Item(System.Int32,T)
// 0x00000211 T& Unity.Collections.LowLevel.Unsafe.UnsafeList`1::ElementAt(System.Int32)
// 0x00000212 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeArrayOptions)
// 0x00000213 Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Create(System.Int32,U&,Unity.Collections.NativeArrayOptions)
// 0x00000214 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Destroy(Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>*)
// 0x00000215 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Dispose()
// 0x00000216 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Clear()
// 0x00000217 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Resize(System.Int32,Unity.Collections.NativeArrayOptions)
// 0x00000218 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Realloc(U&,System.Int32)
// 0x00000219 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::SetCapacity(U&,System.Int32)
// 0x0000021A System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::SetCapacity(System.Int32)
// 0x0000021B System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Add(T&)
// 0x0000021C System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::InsertRangeWithBeginEnd(System.Int32,System.Int32)
// 0x0000021D System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::RemoveAt(System.Int32)
// 0x0000021E System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::RemoveRange(System.Int32,System.Int32)
// 0x0000021F System.Collections.IEnumerator Unity.Collections.LowLevel.Unsafe.UnsafeList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000220 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.LowLevel.Unsafe.UnsafeList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000221 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::get_Length()
// 0x00000222 T* Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::get_Item(System.Int32)
// 0x00000223 System.Void Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.NativeArrayOptions)
// 0x00000224 System.Void Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::Dispose()
// 0x00000225 System.Void Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::Add(System.Void*)
// 0x00000226 System.Collections.IEnumerator Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000227 System.Collections.Generic.IEnumerator`1<System.IntPtr> Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::System.Collections.Generic.IEnumerable<System.IntPtr>.GetEnumerator()
// 0x00000228 Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.IntPtr>& Unity.Collections.LowLevel.Unsafe.UnsafePtrListTExtensions::ListData(Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1<T>&)
// 0x00000229 System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtilityExtensions::AddressOf(T&)
// 0x0000022A T& Unity.Collections.LowLevel.Unsafe.UnsafeUtilityExtensions::AsRef(T&)
// 0x0000022B System.Void $BurstDirectCallInitializer::Initialize()
extern void U24BurstDirectCallInitializer_Initialize_mBB7299DE1F1DF732C60394307234ED45AE14AD82 (void);
static Il2CppMethodPointer s_methodPointers[555] = 
{
	EmbeddedAttribute__ctor_mB9EA4CCF3A3DC39A3BC92CFE9557FFAA77D15404,
	IsUnmanagedAttribute__ctor_m15974D59768AFF916E346F7107F7FF7F6AD9099C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AllocatorManager_CheckDelegate_m52D3F12472A2BBC5A28D2F4B5011B19D2E36AC61,
	AllocatorManager_UseDelegate_mEB18420309DAA2CC710BA123C6996C9FB6FC3798,
	AllocatorManager_allocate_block_mBEB6E6FDC334118DB679CF2619EBB3FF4FDD7FB5,
	AllocatorManager_forward_mono_allocate_block_mD2A9A49DFC8CBDC39F27E2749048ABC91E124519,
	AllocatorManager_LegacyOf_mAD212C1A7F5295C8987A6C9D7F81E8FF42E0A3BF,
	AllocatorManager_TryLegacy_mF4F0B8CE7B0293504FA12A6F9C4ACFF28B59FF79,
	AllocatorManager_Try_m24A6A4EF594F8909B5677C94C4788F365E02E7F9,
	AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909,
	AllocatorManager__cctor_m3E94344CB4CD852C9427FE9394EBE4EC36BFEEA1,
	TryFunction__ctor_m10C4A7B32E87301727B84D8CBA081FABAE3CCE53,
	TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2,
	AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63,
	AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1,
	AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D,
	AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F,
	AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9,
	AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2,
	AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF,
	AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3,
	Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A,
	Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7,
	Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08,
	Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633,
	Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F,
	Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED,
	Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225,
	NULL,
	NULL,
	StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267,
	StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558,
	StackAllocator_Try_m093FA501B1B427E32DD9F654380B3EA56A5A4234,
	StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB,
	StackAllocator_TryU24BurstManaged_mB88D607AA12E4D9181BF1FFE81A1AC3117FDB5E2,
	Try_0000097EU24PostfixBurstDelegate__ctor_m4E3868C8A411DAF57EF8A9D97631E120C2DC6EEE,
	Try_0000097EU24PostfixBurstDelegate_Invoke_m324F6448CF4FE9CF56BAB3979C72CD5CE5BE4D70,
	Try_0000097EU24BurstDirectCall_GetFunctionPointerDiscard_m6AF180EC22A4927E094D972F89051FAFC8BDF1C3,
	Try_0000097EU24BurstDirectCall_GetFunctionPointer_m4D2948869CAA0149DCB01A4315F0DFC40E219D1D,
	Try_0000097EU24BurstDirectCall_Constructor_m8FD87B838F183CE09AB64A062D7D78C93C424608,
	Try_0000097EU24BurstDirectCall_Initialize_m2D23B74BCC409B0C57771D57257370594D5497E0,
	Try_0000097EU24BurstDirectCall__cctor_m6D9E803E60BC0C4540EB3EDBE1651533D79E0FCC,
	Try_0000097EU24BurstDirectCall_Invoke_m565A2C7B059B9E1E870EBC965029DF37E95078BE,
	SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE,
	SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612,
	SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD,
	SlabAllocator_Try_mCD7DED588811A6E3F78E4A14CBFE2852D8E39DEB,
	SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912,
	SlabAllocator_TryU24BurstManaged_mC48F05E806431B6537727E4D6A10550207FBB1EA,
	Try_0000098CU24PostfixBurstDelegate__ctor_m9E6F58E9EB432438802BB51EC7BE4D5D773B6992,
	Try_0000098CU24PostfixBurstDelegate_Invoke_mDE7805BCAD841995771EE5D737C0F50BA4641218,
	Try_0000098CU24BurstDirectCall_GetFunctionPointerDiscard_m8FB249CBDAA01BA8D8AC85D9D22498688B0E92CA,
	Try_0000098CU24BurstDirectCall_GetFunctionPointer_mF3FA5FCB8479F11C4B39D2552937D02FAE46A1B8,
	Try_0000098CU24BurstDirectCall_Constructor_mE725F91017185E00AF7AA204A918C09DFBD16BC0,
	Try_0000098CU24BurstDirectCall_Initialize_m87A200D4BEB001C8D77079AD352265490E07794F,
	Try_0000098CU24BurstDirectCall__cctor_m1F66E6693EA996C2DCCF5A5F6B0497A25E2EFAD6,
	Try_0000098CU24BurstDirectCall_Invoke_m43A052ACB256E86A7614CB4817BC28D72FD8F5ED,
	NULL,
	NULL,
	NULL,
	TableEntry__cctor_mCA16889126B2ED5EF69666F8B0376FCC8834FCE1,
	Managed__cctor_mE3BC99DF4AF7BC63DE01424848BDC790B53500BA,
	CreatePropertyAttribute__ctor_mFD5BF090F42312F62534D903F2D804C19CE16264,
	BurstCompatibleAttribute_set_GenericTypeArguments_mBE8AE08E0824187C5B48F5132C73624CAB2C6906,
	BurstCompatibleAttribute__ctor_m6D43ED0B880EE6FCCCBC38B1A63DB493898DD3BA,
	NotBurstCompatibleAttribute__ctor_mF89AC194CF3CC2F03A673D1FBDE969E1751CB827,
	CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F,
	CollectionHelper_Hash_mFB14DD4BA7288CEDF90E514A9397FB9C27E55293,
	CollectionHelper_ShouldDeallocate_m505E7EDBA71F02BAF52CC9DCD7C593CDA85D5465,
	CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	FixedString32Bytes_GetUnsafePtr_mA653D9296813A2EA93C0D6FC501500008121C3A8,
	FixedString32Bytes_get_Length_mA349139D3C731DF762B4124B833B60BF0B283797,
	FixedString32Bytes_set_Length_m9BD2B7F7AA48AF38F72C4C3A3C00C9324F39FA8F,
	FixedString32Bytes_get_Capacity_m4CEE4CE0CC97C33ED774FACD8211D766FEB549E2,
	FixedString32Bytes_TryResize_m2E7F8E8810492683C24102604F65EA3294BF6150,
	FixedString32Bytes_CompareTo_m79B33E69FCFCD08E454F2DEE35FC5F1C9C64E425,
	FixedString32Bytes_Equals_m1F50C94DF6B470C0BD1C56421A566EE556341766,
	FixedString32Bytes__ctor_m1C1C73C55B3D020EA211DE2E9E6C7CF0400C6408,
	FixedString32Bytes_Initialize_m42C7A7BFFFE132CCD2DB5984E779B4467F88D4AC,
	FixedString32Bytes_CompareTo_mD37FD30C7E3F389CC41E9E1AC9D3D655CA875D19,
	FixedString32Bytes_op_Equality_m1426A50ADD3772C2008B14D276BD5C10A5D92573,
	FixedString32Bytes_op_Inequality_m79C9EBDDD8ACA515FEE668E2C49C5F0CD4B2AD16,
	FixedString32Bytes_Equals_m7CA0083FD7E3A4F0ECEC273977A88425F13806E6,
	FixedString32Bytes_CompareTo_mFC8EDD03F444D1B497D163FBF38A413A5DF47E70,
	FixedString32Bytes_op_Equality_m0F27AD70B9D59163D745A9CCC47A0F20739C25F6,
	FixedString32Bytes_Equals_m5E5B5F1ACC5BF8C93EF3A97BFB3CC1338F7D5A1D,
	FixedString32Bytes_CompareTo_m77F538DDC2D8A7B5EFF36482F83E5B9DDCFE08D8,
	FixedString32Bytes_op_Equality_m8798D9727925F686AC8BB99439AB90C546A4D6C8,
	FixedString32Bytes_Equals_m84D35401C5A983408E4B4D26903EB05BBE05A53A,
	FixedString32Bytes_CompareTo_m50123082F19E44CB94E7F56E28AD0119C3DE53F8,
	FixedString32Bytes_op_Equality_m856509D8F9C3F5E0895D7CBEBD74884F656A224B,
	FixedString32Bytes_Equals_m23ABF390E00DDB6B6D391EFC121CF7474FD751C5,
	FixedString32Bytes_CompareTo_mB5BB0CB6D7DE907B07C07BB20D5E1F8A74EA8EF8,
	FixedString32Bytes_op_Equality_mF58CBA454E17E8C74B81BF854A277C9576E3AB67,
	FixedString32Bytes_Equals_mAAD5520503E00E6340BAA463BC027C035F7C8317,
	FixedString32Bytes_op_Implicit_mD0ABB16ACC6621C61F924F70651403927DEACF9F,
	FixedString32Bytes_ToString_mCDBDE58EDFFA82B48A8613E724F92305B4C84914,
	FixedString32Bytes_GetHashCode_m699B6C9D56B99126CB2F988A01DC87DF8A9CCFFD,
	FixedString32Bytes_Equals_m95DCBCE85E03295E539FF672D39977CDF1233647,
	FixedString64Bytes_GetUnsafePtr_mB61C0A15578E5DCFB19AC3A6504D66B4DAA88C6E,
	FixedString64Bytes_get_Length_m7FC1591B9CBA2113727D06FC5EA43AE4A5F16BF5,
	FixedString64Bytes_set_Length_mF1C5F76690D2DB3BE7F6440213FA758E803462C6,
	FixedString64Bytes_get_Capacity_mDA79A4601FF4672BDDCCB90EA4EF40613F9C35B0,
	FixedString64Bytes_TryResize_m9B49BA15D7B2DFE50F4482E4113EE8E44EE9F138,
	FixedString64Bytes_CompareTo_m982D1C7FF590144B881A32008C73F1E3A1A8A63E,
	FixedString64Bytes_Equals_m9E74082A6DAD750845D5D82DCFFCDE5141056D1E,
	FixedString64Bytes__ctor_mAC760222B77A7BB28B5A7E9A00B9168F3B99F211,
	FixedString64Bytes_Initialize_m82ABCB4DCF0902729F32BED310A7EC5F6C8021C4,
	FixedString64Bytes_CompareTo_mC70C4EB2FFEEB4DD7372F57E2D3E5DE3B1773E2F,
	FixedString64Bytes_op_Equality_m3B842D63D93646FC370B5E22A8CFFE176AEE8692,
	FixedString64Bytes_Equals_m48F66EA24CE289A0EF42E422ACE3DD222D5011F1,
	FixedString64Bytes_CompareTo_mF3A1A476403FA9932C229A1A60D43575087D3D4F,
	FixedString64Bytes_op_Equality_m6482029A475ADE0C314A5EC31BF89F4773854DA1,
	FixedString64Bytes_Equals_m5AA29267D5B6D641B68732BFD430646971ECD62D,
	FixedString64Bytes_CompareTo_m3295FA78979CDA555DFA04CF29CFF649439B8711,
	FixedString64Bytes_op_Equality_m35753FD7FE758FBDF1D107EBAF7405E7D2D778D6,
	FixedString64Bytes_Equals_m5A4B5CD2579DAB7CA024749046D711F4621D29E2,
	FixedString64Bytes_CompareTo_m19F3795ED3A69BD3F5BC9C3B4C7E35897344AB50,
	FixedString64Bytes_op_Equality_m34038710CBDB51FC825814313571D76EF29BE475,
	FixedString64Bytes_Equals_mA2CAA548B481B1BBD0A0DC745DEAC5D7824F6970,
	FixedString64Bytes_CompareTo_m9407A8045F52D4C006BB232ED67AE6A6C4F56962,
	FixedString64Bytes_op_Equality_mE056F9BEACA73D92F6DDF5EC51FB12BDC7A1CB57,
	FixedString64Bytes_Equals_mA9BDDEACE5792EA7513B082B280999828FB6C1EB,
	FixedString64Bytes_op_Implicit_m3E667E6D427DA8F605D1B0D2B7ECD392070A874E,
	FixedString64Bytes_ToString_m67C6568EB9ED23E3B624E581A57E5BE8749A254E,
	FixedString64Bytes_GetHashCode_mECC24662CA8517B714FEE61D8CD82E7A30BF76D4,
	FixedString64Bytes_Equals_m0E3F24AA5E7B50BA24D6CEE92A0617E115A86ED9,
	FixedString128Bytes_GetUnsafePtr_m5F280F7783EB21A69893D7FEF551F0E68D3E51BA,
	FixedString128Bytes_get_Length_mB01AB46B1F5415C0379CCAF98ED2AAE6F08C242E,
	FixedString128Bytes_set_Length_mBBB43CE32D9C6285009629AE64BC6C34759C2ED2,
	FixedString128Bytes_get_Capacity_mD161D26116BAA25254B2CCFAB79975FFDA9CA711,
	FixedString128Bytes_TryResize_mF1DCAFDBD573E0CCC60E0A534A5E854434B6BC39,
	FixedString128Bytes_CompareTo_m8FA619D7CD1ADD9AFC7D92148025CB181A117470,
	FixedString128Bytes_Equals_mAD97C501810E69B444947F8169017A4A132DCE8B,
	FixedString128Bytes__ctor_mB0E30CB7FA5CAFF30C1D4FDE75043FD7D7F2AA40,
	FixedString128Bytes_Initialize_m4A2BA0C3501339D697E1BCAA11763D6BAA45E1C4,
	FixedString128Bytes_CompareTo_mF9C0984E47EEB20E9E28A4AAE1275E59E42D81B5,
	FixedString128Bytes_op_Equality_m5F5BA10BF7DCBB3E8DFE55BA6AA3D0B515162637,
	FixedString128Bytes_Equals_m5C92E72BEBE4D7E67AF7646C4293F3F9EA7E33EC,
	FixedString128Bytes_CompareTo_mB8E2D570CDCEE17387FD2BDA4BD35F9AD5C311A8,
	FixedString128Bytes_op_Equality_mE6BF574CF44C2046A0D99E8630938F92FA6944A8,
	FixedString128Bytes_Equals_mC7C2AEBA071128B24EB0BD130ED6423EA46275C1,
	FixedString128Bytes_CompareTo_m3A02146ED7EA6B833583D2C1B38F6FF5B0870E6F,
	FixedString128Bytes_op_Equality_mE119008C751060334BD3CECF7B3D0B74B288F684,
	FixedString128Bytes_Equals_m3B91B177B21344B9CB879DFDAA00AB7E812AD5AB,
	FixedString128Bytes_CompareTo_m7DAC821750F1242E519D29D8A1A01ABD6B5630C6,
	FixedString128Bytes_op_Equality_m585E99914214C76581B50D2279924B42A6E5ADD1,
	FixedString128Bytes_Equals_m02FB7C6C4862D4F44EDC97E72A4CADD0BD379D5F,
	FixedString128Bytes_CompareTo_m340091A89F740B13DE44A1F3AE938A14AE658A4B,
	FixedString128Bytes_op_Equality_mF721475F602666C9A09E70EB8C08B0D2DF7D83EA,
	FixedString128Bytes_Equals_m0A10CFEB353647A220B407CCEBE12035F0C1D4A2,
	FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E,
	FixedString128Bytes_ToString_m1CD5B095D5A80759EF2E7F60AA95921369958A29,
	FixedString128Bytes_GetHashCode_mB211F7E224953364EE91770921BA59760A0E4428,
	FixedString128Bytes_Equals_mF8C053D97C4EA171FF1A82613C836A231DDF0DD9,
	FixedString512Bytes_GetUnsafePtr_m6BE151F6C1AC2994321FFC794DD61AEE5E915E05,
	FixedString512Bytes_get_Length_m07F07806B00F694DA08ED7C3BC04C9FCE7CE4E07,
	FixedString512Bytes_set_Length_m5BECBE3190D559780E9F84276928B0EC612A1BDE,
	FixedString512Bytes_get_Capacity_m80069D7197EA5C9AC0149AEE21591CCCFBC0AB55,
	FixedString512Bytes_TryResize_m924FCE76C50EFD1773E2A417BCA84B2C6B158ABD,
	FixedString512Bytes_CompareTo_mF2E8A9C2171833229322FEBEF4DF783251513B59,
	FixedString512Bytes_Equals_mE4279608ABCBD5236ADF59E96788F0837787F11A,
	FixedString512Bytes_CompareTo_mFEA161B206C05F7894DDF0CAB24CDBF525AD9F97,
	FixedString512Bytes_op_Equality_m9396081EA8C88FEA2006D359260245627184D456,
	FixedString512Bytes_Equals_m2AF82E5FAAF96DBD0A105DF94BD1287804D6D568,
	FixedString512Bytes_CompareTo_mCF6F5BD2E7F95763F8903514954023697C1A3838,
	FixedString512Bytes_op_Equality_m72AD5D8E203AEBD992FFDB15E2AA658549127C77,
	FixedString512Bytes_Equals_m14403CF490B635D08B4FD2DCAB8473AD2A510CE6,
	FixedString512Bytes_CompareTo_m80D4CAD931945D04AE44A9610D72D8E0839FB2B5,
	FixedString512Bytes_op_Equality_m402E2B00BB62CC4AA6E20DBE2A763A64D957A951,
	FixedString512Bytes_Equals_m865E75EE8511CFC6CB527D86E54AEE7AE010449A,
	FixedString512Bytes_CompareTo_m42E210C85C1D09E6698DCDDB40545351895E2574,
	FixedString512Bytes_op_Equality_m2D57D6666092B59CE4541DB706A388DA6F7332C0,
	FixedString512Bytes_Equals_m34F02FA9086BE42B8856DF5A85DA039FD3036E99,
	FixedString512Bytes_CompareTo_mEC561BBFD17069268207BF2D6BD6E2C93E90A1B7,
	FixedString512Bytes_op_Equality_m6C60AF29D4AFBB2FCD3F347EB45D4F4F2787AAFF,
	FixedString512Bytes_Equals_mE00AFBE32D04B3671E8D476855409B35B5C8E674,
	FixedString512Bytes_ToString_m1A47583FB34608DBEEDC65F9CA6E7B8E7930233F,
	FixedString512Bytes_GetHashCode_m3F22B7550BFBA5E580D804CCAC7528BA8F64862B,
	FixedString512Bytes_Equals_m344621B84C32BCC845396B588F2AE18154B9C6C3,
	FixedString4096Bytes_GetUnsafePtr_mE1DB42C2C0EEA7D6E1B5D0366A4727125D916EEB,
	FixedString4096Bytes_get_Length_mC2A80F2813739852F0675DA8D2AB68AA92BFC36F,
	FixedString4096Bytes_set_Length_mB4335BCB8388D446FF0C612F81355BD4861F4F8B,
	FixedString4096Bytes_get_Capacity_m55EE381DB20EC9C738999C9F562700569906434D,
	FixedString4096Bytes_TryResize_mC7B1C3EF58A73536BD8A17AEA540B05D1FC4A8F7,
	FixedString4096Bytes_CompareTo_mFE2F6019EBA8EAB9FCCDE7589C8A5F38DA8D4A58,
	FixedString4096Bytes_Equals_m3C8E7CA4F35F56F0759EEE2D8E5F1D4591D1E598,
	FixedString4096Bytes_CompareTo_m8D38C45B1D05029012A417EB72A6108BB820C472,
	FixedString4096Bytes_op_Equality_mA7CC6C4984FCC9EED79B16AF16237504BD00254D,
	FixedString4096Bytes_op_Inequality_m7FFBE281245A53F6FF937ABE36ADAD484F1B0B1F,
	FixedString4096Bytes_Equals_mF43146C7063DCE299D0708E173E48D146806796A,
	FixedString4096Bytes_CompareTo_mA10C3E4B7291BD7C68B64922D7EF51FF9019E7B1,
	FixedString4096Bytes_op_Equality_m974761DC27A56EB51074713A5B755FEA5C84419B,
	FixedString4096Bytes_Equals_mF4868F94338530FEFCDF35BB76E1C3D64F54CAEF,
	FixedString4096Bytes_CompareTo_m40115F59AF4ADBC9F7C70B9A30B90DD660526D19,
	FixedString4096Bytes_op_Equality_mCD4EAE52D8F0BA4161054E936710D0C0F3D43260,
	FixedString4096Bytes_Equals_mA00838D2DA8F71412C78B2C37D699B39D7897FB5,
	FixedString4096Bytes_CompareTo_m16A7E31FA53206F33F3418353A43A2E02F662895,
	FixedString4096Bytes_op_Equality_mD2FD6209FE469F2385026575EBC55A6079D3B0C5,
	FixedString4096Bytes_Equals_mB76C4C23572B2D379F22EB1EE52B84EE820F075F,
	FixedString4096Bytes_CompareTo_m1EA8E99320A4B5078747BCE1617B3B1574A53F01,
	FixedString4096Bytes_op_Equality_m30D4A0EF7ED2223E8A41181F92E87DA31C73CCAF,
	FixedString4096Bytes_Equals_m3991F570BEC852688D532724FD842E0BD3AC2BB6,
	FixedString4096Bytes_ToString_m1EB551FB3DB9E208AAF34DFFA3864DAB34FD1A26,
	FixedString4096Bytes_GetHashCode_m4F13B6A3839EDFD34CE37729A815905DD1AAB720,
	FixedString4096Bytes_Equals_mD182C954C7A720E5C452CE5C9B4BAA20D22A4952,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	FixedString_Format_m6F108E2AF8178697C27234FF8AA515F32B77F4AF,
	FixedString_Format_m68D81C29724F640A5261464C671E96EB92AAA4B0,
	NULL,
	NULL,
	FixedStringUtils_Base2ToBase10_m26FA15F7F8FA8E6736C0E6927D4C5A74B1D8EAF5,
	Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5,
	Unmanaged_Free_m09F6EA89F368ED2C9E5EC5EA60C894C4434F4FD1,
	NULL,
	Array_IsCustom_m7651BFF84F5AEFA592FEE86C834A85C373DDC126,
	Array_CustomResize_mB51497D583399092F23AA773ABB64F0780610D82,
	Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NativeQueueBlockPoolData_AllocateBlock_m5B26A5ECC71386FA451CC6A8539CA5828A0D41CD,
	NativeQueueBlockPoolData_FreeBlock_m1F946136116E617CAA61EE33BCF4B55E71A2E6DC,
	NativeQueueBlockPool_GetQueueBlockPool_m72A3D0FE305C26652617D578ADE6C2EE6754FA7A,
	NativeQueueBlockPool_AppDomainOnDomainUnload_mD3B4E5430F5D7EC43B4B41DF3B87D26D5418A606,
	NativeQueueBlockPool_OnDomainUnload_m1BC3ECE44F94F0D5579AC3643A8C229BB806847D,
	NativeQueueBlockPool__cctor_m9730DA75F226458D19D4D98D9A3BE7133B9B177C,
	NativeQueueData_GetCurrentWriteBlockTLS_m21D4E781362232FFB12406ED641A17D25C34632C,
	NativeQueueData_SetCurrentWriteBlockTLS_m36127FAE539B6E36DBCCEF247F067270E0CE9149,
	NULL,
	NULL,
	NativeQueueData_DeallocateQueue_m00F1377036BFEDFFD7627C8E188150B2BB05F328,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7,
	Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A,
	NULL,
	NULL,
	RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595,
	RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F,
	RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED,
	RewindableAllocator_Try_mA4AF5A5088097CB6343C3CC97058959976372C35,
	RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E,
	RewindableAllocator_TryU24BurstManaged_mBB6DAE6A8CDB2E3626C38F3B65186AAF6ACBF6E8,
	MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F,
	MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069,
	MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F,
	MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10,
	MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC,
	Try_000006E6U24PostfixBurstDelegate__ctor_mA295EC796EC1F185B3169F07893F684A865565C1,
	Try_000006E6U24PostfixBurstDelegate_Invoke_m55694249E8A0556322798E88394271A1F173150B,
	Try_000006E6U24BurstDirectCall_GetFunctionPointerDiscard_m1B3F8DD7B28BF2F5F17B13F20E3143119FF635FA,
	Try_000006E6U24BurstDirectCall_GetFunctionPointer_m4E7AEF80846D3FDA028F59DDCAFA2B9D16221D58,
	Try_000006E6U24BurstDirectCall_Constructor_m4069614047B91CE4D9D5E6F6EA146A491DCB16BA,
	Try_000006E6U24BurstDirectCall_Initialize_m69C16A383B9323977377D5C1DC99B033C89FF54E,
	Try_000006E6U24BurstDirectCall__cctor_m533758B0BD60C9DD2E2CE71C897C48BAB1C9C56C,
	Try_000006E6U24BurstDirectCall_Invoke_m7B90D503373C6B87DD499837E4800AF754714B13,
	Unicode_IsValidCodePoint_m6F8516FA18D35B6D052FD6BDE01D9D497EA06B9D,
	Unicode_NotTrailer_m9FD6FC331044FE0EFC90E29A2808C4A6535E4CAD,
	Unicode_get_ReplacementCharacter_m525CDE0E6CAB489454025711F93FF832A600556A,
	Unicode_Utf8ToUcs_m013E3A507C4B6F5459B09C6EA8EA229BDC979827,
	Unicode_IsLeadingSurrogate_mCFA66EB348CD8F48DB573D45B2658A95BA248F06,
	Unicode_IsTrailingSurrogate_m2ECEB76882DCD6006C95D3861BFA7654D3A22B25,
	Unicode_Utf16ToUcs_m55352C5470C6C4C506B02E9827F05C7285F113D3,
	Unicode_UcsToUtf8_mBE0B9FE432D859A3409B7BD03C26C958CF9301BE,
	Unicode_UcsToUtf16_m14C1098270C0DFFAF6B48D47C3214344FD4FAE0E,
	Unicode_Utf16ToUtf8_mF16BCB8771E0A53EE7464D418792F4CEB99A641E,
	Unicode_Utf8ToUtf16_mF3051E9181A57301EEF945C10B97D3C9356706DD,
	Rune_op_Explicit_mE522A7646091C5FC49F41954FCDB8880AB9D6595,
	Rune_LengthInUtf8Bytes_m2E470564E773DB43A761FC2A5DA17F0885E81489,
	UTF8ArrayUnsafeUtility_Copy_m599E2064905A6DF1D3F386114B76668CD0E5B7B9,
	UTF8ArrayUnsafeUtility_StrCmp_mEA1B1EC00085F9EDEC1CDEFCF53C2E83830374D4,
	UTF8ArrayUnsafeUtility_EqualsUTF8Bytes_m96A84A5B2B6E4ABA06A65995D7EA16477797E754,
	UTF8ArrayUnsafeUtility_StrCmp_m2C38EE679FD06EDDEB1409956BA7398431FF2FEC,
	Comparison__ctor_m40D70075E3FE042352BE5C6589C23C5D7D41668C,
	xxHash3_Avx2HashLongInternalLoop_mCAEEE715FCB699CA2F1B947BCD252AA0F87D2B15,
	xxHash3_Avx2ScrambleAcc_m64D8B68219EA3E164A61D2001E0969263CF098CE,
	xxHash3_Avx2Accumulate_mD57A48AB8FB3471A923F64F7C8B52FF8538E791D,
	xxHash3_Avx2Accumulate512_mBB4B8AAAA2DC7E6B1350597687C11B82E81CEF06,
	xxHash3_Hash64Long_m9950702E864DCCD9B8DEAAE23E7CBB5E79D4AC62,
	xxHash3_Hash128Long_mED9958D31B54E0E0666AAD34A52DE7CDEB802E6F,
	xxHash3_ToUint4_m811AB95294FBBC0F17A5358D0A22669691CE3633,
	xxHash3_Read64LE_mD275A5EFD8727CDE8B8E280D4A5D5B82D5E3B195,
	xxHash3_Write64LE_m79CC2011BF16363F2338D61BE43E99E6467A9437,
	xxHash3_Mul32To64_m9210E9379305FC38A6D69C698F6E1A30013BC4F5,
	xxHash3_XorShift64_mF4245CDE1C4AF6B1CC8F57AAE0DA8C7E04673CFC,
	xxHash3_Mul128Fold64_mF59DCB5142027D151F52C7748BFA28C32B3B8F38,
	xxHash3_Avalanche_m059990B780566C6F04C66700B2BE7817B4FA2F18,
	xxHash3_Mix2Acc_mDEB8D0C149D943295B8A3049A437578BE879BED8,
	xxHash3_MergeAcc_mB01ADB1934EDFE8FE3B2AAB13DA6884EB1133A14,
	xxHash3_DefaultHashLongInternalLoop_m9181A3A8DBE8DBEFF1B730ECC9A9AA5E93110F1B,
	xxHash3_DefaultAccumulate_m3D28C5486CC42D31D2D832F40DEFE1A7CF508CA5,
	xxHash3_DefaultAccumulate512_mFADF15092DA5379116D3FCCFC4238ADBF48D85D7,
	xxHash3_DefaultScrambleAcc_mA46D6E8E1BA4613A50B56C8536B0DA3F50437137,
	xxHash3_Hash64LongU24BurstManaged_m71E36BBD116CCA46ED23162F80B08D3B2F782B4D,
	xxHash3_Hash128LongU24BurstManaged_m961A07284DAB6ADFF52EB4287E9D105AB971FDF6,
	Hash64Long_0000071DU24PostfixBurstDelegate__ctor_mAA816B552583BBF0345F3BF9E10146D2BB7F75F4,
	Hash64Long_0000071DU24PostfixBurstDelegate_Invoke_mA703A2BD646351C6FA75259F26F12BC2D9D70BFF,
	Hash64Long_0000071DU24BurstDirectCall_GetFunctionPointerDiscard_m7A4CA1217A64D411ED07D1D3A72E6BD5E0C927FE,
	Hash64Long_0000071DU24BurstDirectCall_GetFunctionPointer_m37B0865B8DABAEA1D28D39C36CC2F229EEC54267,
	Hash64Long_0000071DU24BurstDirectCall_Constructor_m1A7B2D63B8EC9BA41ED9BBE30618FAEA9731B3DE,
	Hash64Long_0000071DU24BurstDirectCall_Initialize_m995C925DC5918C21563F4FB1B3466A2465020578,
	Hash64Long_0000071DU24BurstDirectCall__cctor_mD6287194F5736004328B9FA8B9B4C2AC479D9B29,
	Hash64Long_0000071DU24BurstDirectCall_Invoke_mC3A346DEA4D298905A0A1E69BF23B9F04DA41226,
	Hash128Long_00000724U24PostfixBurstDelegate__ctor_mA70726DF6285E514E02A2874991DCE8560B283D5,
	Hash128Long_00000724U24PostfixBurstDelegate_Invoke_m90B7C2AED7E18A0776F50E22F830E4E4DBD154CA,
	Hash128Long_00000724U24BurstDirectCall_GetFunctionPointerDiscard_m7E8D0F29A949D77F8911359791501F3652DAE050,
	Hash128Long_00000724U24BurstDirectCall_GetFunctionPointer_m1B1F6B1005561D04A9C8F5F24DBCD98C83B971CC,
	Hash128Long_00000724U24BurstDirectCall_Constructor_mEAF80A4054770022CC3376F289460FF5C628CB24,
	Hash128Long_00000724U24BurstDirectCall_Initialize_m3754CC927F2B00E853721D2A50D2E70662A6EF2C,
	Hash128Long_00000724U24BurstDirectCall__cctor_mF7C0DE50ADCDA3F9CF7CF4B00CD72F5BB4AC7506,
	Hash128Long_00000724U24BurstDirectCall_Invoke_mE7F31F7F2047C671537BEB603CDEF312ABCBC345,
	NULL,
	NULL,
	NULL,
	UnsafeHashMapData_GetBucketSize_m17A5F68A59D412D436867D3C5F0DE92C0A618E66,
	UnsafeHashMapData_GrowCapacity_m9F5FA7B8596A7D1F437808D889FDBA7F857EEB64,
	NULL,
	NULL,
	UnsafeHashMapData_DeallocateHashMap_mB18705656928CE3FFF2F3EFD079F7AF719F03130,
	NULL,
	UnsafeHashMapData_GetCount_m9E897C5011779A3FF8B21473CE767A83393461C7,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U24BurstDirectCallInitializer_Initialize_mBB7299DE1F1DF732C60394307234ED45AE14AD82,
};
extern void AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63_AdjustorThunk (void);
extern void AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1_AdjustorThunk (void);
extern void AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_AdjustorThunk (void);
extern void AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9_AdjustorThunk (void);
extern void AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2_AdjustorThunk (void);
extern void AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF_AdjustorThunk (void);
extern void AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3_AdjustorThunk (void);
extern void Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A_AdjustorThunk (void);
extern void Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7_AdjustorThunk (void);
extern void Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08_AdjustorThunk (void);
extern void Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633_AdjustorThunk (void);
extern void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F_AdjustorThunk (void);
extern void Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED_AdjustorThunk (void);
extern void Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225_AdjustorThunk (void);
extern void StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267_AdjustorThunk (void);
extern void StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558_AdjustorThunk (void);
extern void StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB_AdjustorThunk (void);
extern void SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE_AdjustorThunk (void);
extern void SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612_AdjustorThunk (void);
extern void SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD_AdjustorThunk (void);
extern void SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912_AdjustorThunk (void);
extern void FixedString32Bytes_GetUnsafePtr_mA653D9296813A2EA93C0D6FC501500008121C3A8_AdjustorThunk (void);
extern void FixedString32Bytes_get_Length_mA349139D3C731DF762B4124B833B60BF0B283797_AdjustorThunk (void);
extern void FixedString32Bytes_set_Length_m9BD2B7F7AA48AF38F72C4C3A3C00C9324F39FA8F_AdjustorThunk (void);
extern void FixedString32Bytes_get_Capacity_m4CEE4CE0CC97C33ED774FACD8211D766FEB549E2_AdjustorThunk (void);
extern void FixedString32Bytes_TryResize_m2E7F8E8810492683C24102604F65EA3294BF6150_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_m79B33E69FCFCD08E454F2DEE35FC5F1C9C64E425_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m1F50C94DF6B470C0BD1C56421A566EE556341766_AdjustorThunk (void);
extern void FixedString32Bytes__ctor_m1C1C73C55B3D020EA211DE2E9E6C7CF0400C6408_AdjustorThunk (void);
extern void FixedString32Bytes_Initialize_m42C7A7BFFFE132CCD2DB5984E779B4467F88D4AC_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_mD37FD30C7E3F389CC41E9E1AC9D3D655CA875D19_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m7CA0083FD7E3A4F0ECEC273977A88425F13806E6_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_mFC8EDD03F444D1B497D163FBF38A413A5DF47E70_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m5E5B5F1ACC5BF8C93EF3A97BFB3CC1338F7D5A1D_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_m77F538DDC2D8A7B5EFF36482F83E5B9DDCFE08D8_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m84D35401C5A983408E4B4D26903EB05BBE05A53A_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_m50123082F19E44CB94E7F56E28AD0119C3DE53F8_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m23ABF390E00DDB6B6D391EFC121CF7474FD751C5_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_mB5BB0CB6D7DE907B07C07BB20D5E1F8A74EA8EF8_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_mAAD5520503E00E6340BAA463BC027C035F7C8317_AdjustorThunk (void);
extern void FixedString32Bytes_ToString_mCDBDE58EDFFA82B48A8613E724F92305B4C84914_AdjustorThunk (void);
extern void FixedString32Bytes_GetHashCode_m699B6C9D56B99126CB2F988A01DC87DF8A9CCFFD_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m95DCBCE85E03295E539FF672D39977CDF1233647_AdjustorThunk (void);
extern void FixedString64Bytes_GetUnsafePtr_mB61C0A15578E5DCFB19AC3A6504D66B4DAA88C6E_AdjustorThunk (void);
extern void FixedString64Bytes_get_Length_m7FC1591B9CBA2113727D06FC5EA43AE4A5F16BF5_AdjustorThunk (void);
extern void FixedString64Bytes_set_Length_mF1C5F76690D2DB3BE7F6440213FA758E803462C6_AdjustorThunk (void);
extern void FixedString64Bytes_get_Capacity_mDA79A4601FF4672BDDCCB90EA4EF40613F9C35B0_AdjustorThunk (void);
extern void FixedString64Bytes_TryResize_m9B49BA15D7B2DFE50F4482E4113EE8E44EE9F138_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_m982D1C7FF590144B881A32008C73F1E3A1A8A63E_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m9E74082A6DAD750845D5D82DCFFCDE5141056D1E_AdjustorThunk (void);
extern void FixedString64Bytes__ctor_mAC760222B77A7BB28B5A7E9A00B9168F3B99F211_AdjustorThunk (void);
extern void FixedString64Bytes_Initialize_m82ABCB4DCF0902729F32BED310A7EC5F6C8021C4_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_mC70C4EB2FFEEB4DD7372F57E2D3E5DE3B1773E2F_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m48F66EA24CE289A0EF42E422ACE3DD222D5011F1_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_mF3A1A476403FA9932C229A1A60D43575087D3D4F_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m5AA29267D5B6D641B68732BFD430646971ECD62D_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_m3295FA78979CDA555DFA04CF29CFF649439B8711_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m5A4B5CD2579DAB7CA024749046D711F4621D29E2_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_m19F3795ED3A69BD3F5BC9C3B4C7E35897344AB50_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_mA2CAA548B481B1BBD0A0DC745DEAC5D7824F6970_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_m9407A8045F52D4C006BB232ED67AE6A6C4F56962_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_mA9BDDEACE5792EA7513B082B280999828FB6C1EB_AdjustorThunk (void);
extern void FixedString64Bytes_ToString_m67C6568EB9ED23E3B624E581A57E5BE8749A254E_AdjustorThunk (void);
extern void FixedString64Bytes_GetHashCode_mECC24662CA8517B714FEE61D8CD82E7A30BF76D4_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m0E3F24AA5E7B50BA24D6CEE92A0617E115A86ED9_AdjustorThunk (void);
extern void FixedString128Bytes_GetUnsafePtr_m5F280F7783EB21A69893D7FEF551F0E68D3E51BA_AdjustorThunk (void);
extern void FixedString128Bytes_get_Length_mB01AB46B1F5415C0379CCAF98ED2AAE6F08C242E_AdjustorThunk (void);
extern void FixedString128Bytes_set_Length_mBBB43CE32D9C6285009629AE64BC6C34759C2ED2_AdjustorThunk (void);
extern void FixedString128Bytes_get_Capacity_mD161D26116BAA25254B2CCFAB79975FFDA9CA711_AdjustorThunk (void);
extern void FixedString128Bytes_TryResize_mF1DCAFDBD573E0CCC60E0A534A5E854434B6BC39_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_m8FA619D7CD1ADD9AFC7D92148025CB181A117470_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_mAD97C501810E69B444947F8169017A4A132DCE8B_AdjustorThunk (void);
extern void FixedString128Bytes__ctor_mB0E30CB7FA5CAFF30C1D4FDE75043FD7D7F2AA40_AdjustorThunk (void);
extern void FixedString128Bytes_Initialize_m4A2BA0C3501339D697E1BCAA11763D6BAA45E1C4_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_mF9C0984E47EEB20E9E28A4AAE1275E59E42D81B5_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_m5C92E72BEBE4D7E67AF7646C4293F3F9EA7E33EC_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_mB8E2D570CDCEE17387FD2BDA4BD35F9AD5C311A8_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_mC7C2AEBA071128B24EB0BD130ED6423EA46275C1_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_m3A02146ED7EA6B833583D2C1B38F6FF5B0870E6F_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_m3B91B177B21344B9CB879DFDAA00AB7E812AD5AB_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_m7DAC821750F1242E519D29D8A1A01ABD6B5630C6_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_m02FB7C6C4862D4F44EDC97E72A4CADD0BD379D5F_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_m340091A89F740B13DE44A1F3AE938A14AE658A4B_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_m0A10CFEB353647A220B407CCEBE12035F0C1D4A2_AdjustorThunk (void);
extern void FixedString128Bytes_ToString_m1CD5B095D5A80759EF2E7F60AA95921369958A29_AdjustorThunk (void);
extern void FixedString128Bytes_GetHashCode_mB211F7E224953364EE91770921BA59760A0E4428_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_mF8C053D97C4EA171FF1A82613C836A231DDF0DD9_AdjustorThunk (void);
extern void FixedString512Bytes_GetUnsafePtr_m6BE151F6C1AC2994321FFC794DD61AEE5E915E05_AdjustorThunk (void);
extern void FixedString512Bytes_get_Length_m07F07806B00F694DA08ED7C3BC04C9FCE7CE4E07_AdjustorThunk (void);
extern void FixedString512Bytes_set_Length_m5BECBE3190D559780E9F84276928B0EC612A1BDE_AdjustorThunk (void);
extern void FixedString512Bytes_get_Capacity_m80069D7197EA5C9AC0149AEE21591CCCFBC0AB55_AdjustorThunk (void);
extern void FixedString512Bytes_TryResize_m924FCE76C50EFD1773E2A417BCA84B2C6B158ABD_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_mF2E8A9C2171833229322FEBEF4DF783251513B59_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_mE4279608ABCBD5236ADF59E96788F0837787F11A_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_mFEA161B206C05F7894DDF0CAB24CDBF525AD9F97_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m2AF82E5FAAF96DBD0A105DF94BD1287804D6D568_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_mCF6F5BD2E7F95763F8903514954023697C1A3838_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m14403CF490B635D08B4FD2DCAB8473AD2A510CE6_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_m80D4CAD931945D04AE44A9610D72D8E0839FB2B5_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m865E75EE8511CFC6CB527D86E54AEE7AE010449A_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_m42E210C85C1D09E6698DCDDB40545351895E2574_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m34F02FA9086BE42B8856DF5A85DA039FD3036E99_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_mEC561BBFD17069268207BF2D6BD6E2C93E90A1B7_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_mE00AFBE32D04B3671E8D476855409B35B5C8E674_AdjustorThunk (void);
extern void FixedString512Bytes_ToString_m1A47583FB34608DBEEDC65F9CA6E7B8E7930233F_AdjustorThunk (void);
extern void FixedString512Bytes_GetHashCode_m3F22B7550BFBA5E580D804CCAC7528BA8F64862B_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m344621B84C32BCC845396B588F2AE18154B9C6C3_AdjustorThunk (void);
extern void FixedString4096Bytes_GetUnsafePtr_mE1DB42C2C0EEA7D6E1B5D0366A4727125D916EEB_AdjustorThunk (void);
extern void FixedString4096Bytes_get_Length_mC2A80F2813739852F0675DA8D2AB68AA92BFC36F_AdjustorThunk (void);
extern void FixedString4096Bytes_set_Length_mB4335BCB8388D446FF0C612F81355BD4861F4F8B_AdjustorThunk (void);
extern void FixedString4096Bytes_get_Capacity_m55EE381DB20EC9C738999C9F562700569906434D_AdjustorThunk (void);
extern void FixedString4096Bytes_TryResize_mC7B1C3EF58A73536BD8A17AEA540B05D1FC4A8F7_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_mFE2F6019EBA8EAB9FCCDE7589C8A5F38DA8D4A58_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_m3C8E7CA4F35F56F0759EEE2D8E5F1D4591D1E598_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_m8D38C45B1D05029012A417EB72A6108BB820C472_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_mF43146C7063DCE299D0708E173E48D146806796A_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_mA10C3E4B7291BD7C68B64922D7EF51FF9019E7B1_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_mF4868F94338530FEFCDF35BB76E1C3D64F54CAEF_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_m40115F59AF4ADBC9F7C70B9A30B90DD660526D19_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_mA00838D2DA8F71412C78B2C37D699B39D7897FB5_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_m16A7E31FA53206F33F3418353A43A2E02F662895_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_mB76C4C23572B2D379F22EB1EE52B84EE820F075F_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_m1EA8E99320A4B5078747BCE1617B3B1574A53F01_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_m3991F570BEC852688D532724FD842E0BD3AC2BB6_AdjustorThunk (void);
extern void FixedString4096Bytes_ToString_m1EB551FB3DB9E208AAF34DFFA3864DAB34FD1A26_AdjustorThunk (void);
extern void FixedString4096Bytes_GetHashCode_m4F13B6A3839EDFD34CE37729A815905DD1AAB720_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_mD182C954C7A720E5C452CE5C9B4BAA20D22A4952_AdjustorThunk (void);
extern void NativeQueueBlockPoolData_AllocateBlock_m5B26A5ECC71386FA451CC6A8539CA5828A0D41CD_AdjustorThunk (void);
extern void NativeQueueBlockPoolData_FreeBlock_m1F946136116E617CAA61EE33BCF4B55E71A2E6DC_AdjustorThunk (void);
extern void NativeQueueData_GetCurrentWriteBlockTLS_m21D4E781362232FFB12406ED641A17D25C34632C_AdjustorThunk (void);
extern void NativeQueueData_SetCurrentWriteBlockTLS_m36127FAE539B6E36DBCCEF247F067270E0CE9149_AdjustorThunk (void);
extern void Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7_AdjustorThunk (void);
extern void Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A_AdjustorThunk (void);
extern void RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595_AdjustorThunk (void);
extern void RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F_AdjustorThunk (void);
extern void RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED_AdjustorThunk (void);
extern void RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E_AdjustorThunk (void);
extern void MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F_AdjustorThunk (void);
extern void MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069_AdjustorThunk (void);
extern void MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F_AdjustorThunk (void);
extern void MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10_AdjustorThunk (void);
extern void MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC_AdjustorThunk (void);
extern void Rune_LengthInUtf8Bytes_m2E470564E773DB43A761FC2A5DA17F0885E81489_AdjustorThunk (void);
extern void Comparison__ctor_m40D70075E3FE042352BE5C6589C23C5D7D41668C_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[144] = 
{
	{ 0x06000016, AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63_AdjustorThunk },
	{ 0x06000017, AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1_AdjustorThunk },
	{ 0x06000019, AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_AdjustorThunk },
	{ 0x0600001A, AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9_AdjustorThunk },
	{ 0x0600001B, AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2_AdjustorThunk },
	{ 0x0600001C, AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF_AdjustorThunk },
	{ 0x0600001D, AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3_AdjustorThunk },
	{ 0x0600001E, Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A_AdjustorThunk },
	{ 0x0600001F, Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7_AdjustorThunk },
	{ 0x06000020, Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08_AdjustorThunk },
	{ 0x06000021, Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633_AdjustorThunk },
	{ 0x06000022, Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F_AdjustorThunk },
	{ 0x06000023, Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED_AdjustorThunk },
	{ 0x06000024, Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225_AdjustorThunk },
	{ 0x06000027, StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267_AdjustorThunk },
	{ 0x06000028, StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558_AdjustorThunk },
	{ 0x0600002A, StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB_AdjustorThunk },
	{ 0x06000034, SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE_AdjustorThunk },
	{ 0x06000035, SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612_AdjustorThunk },
	{ 0x06000036, SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD_AdjustorThunk },
	{ 0x06000038, SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912_AdjustorThunk },
	{ 0x060000B4, FixedString32Bytes_GetUnsafePtr_mA653D9296813A2EA93C0D6FC501500008121C3A8_AdjustorThunk },
	{ 0x060000B5, FixedString32Bytes_get_Length_mA349139D3C731DF762B4124B833B60BF0B283797_AdjustorThunk },
	{ 0x060000B6, FixedString32Bytes_set_Length_m9BD2B7F7AA48AF38F72C4C3A3C00C9324F39FA8F_AdjustorThunk },
	{ 0x060000B7, FixedString32Bytes_get_Capacity_m4CEE4CE0CC97C33ED774FACD8211D766FEB549E2_AdjustorThunk },
	{ 0x060000B8, FixedString32Bytes_TryResize_m2E7F8E8810492683C24102604F65EA3294BF6150_AdjustorThunk },
	{ 0x060000B9, FixedString32Bytes_CompareTo_m79B33E69FCFCD08E454F2DEE35FC5F1C9C64E425_AdjustorThunk },
	{ 0x060000BA, FixedString32Bytes_Equals_m1F50C94DF6B470C0BD1C56421A566EE556341766_AdjustorThunk },
	{ 0x060000BB, FixedString32Bytes__ctor_m1C1C73C55B3D020EA211DE2E9E6C7CF0400C6408_AdjustorThunk },
	{ 0x060000BC, FixedString32Bytes_Initialize_m42C7A7BFFFE132CCD2DB5984E779B4467F88D4AC_AdjustorThunk },
	{ 0x060000BD, FixedString32Bytes_CompareTo_mD37FD30C7E3F389CC41E9E1AC9D3D655CA875D19_AdjustorThunk },
	{ 0x060000C0, FixedString32Bytes_Equals_m7CA0083FD7E3A4F0ECEC273977A88425F13806E6_AdjustorThunk },
	{ 0x060000C1, FixedString32Bytes_CompareTo_mFC8EDD03F444D1B497D163FBF38A413A5DF47E70_AdjustorThunk },
	{ 0x060000C3, FixedString32Bytes_Equals_m5E5B5F1ACC5BF8C93EF3A97BFB3CC1338F7D5A1D_AdjustorThunk },
	{ 0x060000C4, FixedString32Bytes_CompareTo_m77F538DDC2D8A7B5EFF36482F83E5B9DDCFE08D8_AdjustorThunk },
	{ 0x060000C6, FixedString32Bytes_Equals_m84D35401C5A983408E4B4D26903EB05BBE05A53A_AdjustorThunk },
	{ 0x060000C7, FixedString32Bytes_CompareTo_m50123082F19E44CB94E7F56E28AD0119C3DE53F8_AdjustorThunk },
	{ 0x060000C9, FixedString32Bytes_Equals_m23ABF390E00DDB6B6D391EFC121CF7474FD751C5_AdjustorThunk },
	{ 0x060000CA, FixedString32Bytes_CompareTo_mB5BB0CB6D7DE907B07C07BB20D5E1F8A74EA8EF8_AdjustorThunk },
	{ 0x060000CC, FixedString32Bytes_Equals_mAAD5520503E00E6340BAA463BC027C035F7C8317_AdjustorThunk },
	{ 0x060000CE, FixedString32Bytes_ToString_mCDBDE58EDFFA82B48A8613E724F92305B4C84914_AdjustorThunk },
	{ 0x060000CF, FixedString32Bytes_GetHashCode_m699B6C9D56B99126CB2F988A01DC87DF8A9CCFFD_AdjustorThunk },
	{ 0x060000D0, FixedString32Bytes_Equals_m95DCBCE85E03295E539FF672D39977CDF1233647_AdjustorThunk },
	{ 0x060000D1, FixedString64Bytes_GetUnsafePtr_mB61C0A15578E5DCFB19AC3A6504D66B4DAA88C6E_AdjustorThunk },
	{ 0x060000D2, FixedString64Bytes_get_Length_m7FC1591B9CBA2113727D06FC5EA43AE4A5F16BF5_AdjustorThunk },
	{ 0x060000D3, FixedString64Bytes_set_Length_mF1C5F76690D2DB3BE7F6440213FA758E803462C6_AdjustorThunk },
	{ 0x060000D4, FixedString64Bytes_get_Capacity_mDA79A4601FF4672BDDCCB90EA4EF40613F9C35B0_AdjustorThunk },
	{ 0x060000D5, FixedString64Bytes_TryResize_m9B49BA15D7B2DFE50F4482E4113EE8E44EE9F138_AdjustorThunk },
	{ 0x060000D6, FixedString64Bytes_CompareTo_m982D1C7FF590144B881A32008C73F1E3A1A8A63E_AdjustorThunk },
	{ 0x060000D7, FixedString64Bytes_Equals_m9E74082A6DAD750845D5D82DCFFCDE5141056D1E_AdjustorThunk },
	{ 0x060000D8, FixedString64Bytes__ctor_mAC760222B77A7BB28B5A7E9A00B9168F3B99F211_AdjustorThunk },
	{ 0x060000D9, FixedString64Bytes_Initialize_m82ABCB4DCF0902729F32BED310A7EC5F6C8021C4_AdjustorThunk },
	{ 0x060000DA, FixedString64Bytes_CompareTo_mC70C4EB2FFEEB4DD7372F57E2D3E5DE3B1773E2F_AdjustorThunk },
	{ 0x060000DC, FixedString64Bytes_Equals_m48F66EA24CE289A0EF42E422ACE3DD222D5011F1_AdjustorThunk },
	{ 0x060000DD, FixedString64Bytes_CompareTo_mF3A1A476403FA9932C229A1A60D43575087D3D4F_AdjustorThunk },
	{ 0x060000DF, FixedString64Bytes_Equals_m5AA29267D5B6D641B68732BFD430646971ECD62D_AdjustorThunk },
	{ 0x060000E0, FixedString64Bytes_CompareTo_m3295FA78979CDA555DFA04CF29CFF649439B8711_AdjustorThunk },
	{ 0x060000E2, FixedString64Bytes_Equals_m5A4B5CD2579DAB7CA024749046D711F4621D29E2_AdjustorThunk },
	{ 0x060000E3, FixedString64Bytes_CompareTo_m19F3795ED3A69BD3F5BC9C3B4C7E35897344AB50_AdjustorThunk },
	{ 0x060000E5, FixedString64Bytes_Equals_mA2CAA548B481B1BBD0A0DC745DEAC5D7824F6970_AdjustorThunk },
	{ 0x060000E6, FixedString64Bytes_CompareTo_m9407A8045F52D4C006BB232ED67AE6A6C4F56962_AdjustorThunk },
	{ 0x060000E8, FixedString64Bytes_Equals_mA9BDDEACE5792EA7513B082B280999828FB6C1EB_AdjustorThunk },
	{ 0x060000EA, FixedString64Bytes_ToString_m67C6568EB9ED23E3B624E581A57E5BE8749A254E_AdjustorThunk },
	{ 0x060000EB, FixedString64Bytes_GetHashCode_mECC24662CA8517B714FEE61D8CD82E7A30BF76D4_AdjustorThunk },
	{ 0x060000EC, FixedString64Bytes_Equals_m0E3F24AA5E7B50BA24D6CEE92A0617E115A86ED9_AdjustorThunk },
	{ 0x060000ED, FixedString128Bytes_GetUnsafePtr_m5F280F7783EB21A69893D7FEF551F0E68D3E51BA_AdjustorThunk },
	{ 0x060000EE, FixedString128Bytes_get_Length_mB01AB46B1F5415C0379CCAF98ED2AAE6F08C242E_AdjustorThunk },
	{ 0x060000EF, FixedString128Bytes_set_Length_mBBB43CE32D9C6285009629AE64BC6C34759C2ED2_AdjustorThunk },
	{ 0x060000F0, FixedString128Bytes_get_Capacity_mD161D26116BAA25254B2CCFAB79975FFDA9CA711_AdjustorThunk },
	{ 0x060000F1, FixedString128Bytes_TryResize_mF1DCAFDBD573E0CCC60E0A534A5E854434B6BC39_AdjustorThunk },
	{ 0x060000F2, FixedString128Bytes_CompareTo_m8FA619D7CD1ADD9AFC7D92148025CB181A117470_AdjustorThunk },
	{ 0x060000F3, FixedString128Bytes_Equals_mAD97C501810E69B444947F8169017A4A132DCE8B_AdjustorThunk },
	{ 0x060000F4, FixedString128Bytes__ctor_mB0E30CB7FA5CAFF30C1D4FDE75043FD7D7F2AA40_AdjustorThunk },
	{ 0x060000F5, FixedString128Bytes_Initialize_m4A2BA0C3501339D697E1BCAA11763D6BAA45E1C4_AdjustorThunk },
	{ 0x060000F6, FixedString128Bytes_CompareTo_mF9C0984E47EEB20E9E28A4AAE1275E59E42D81B5_AdjustorThunk },
	{ 0x060000F8, FixedString128Bytes_Equals_m5C92E72BEBE4D7E67AF7646C4293F3F9EA7E33EC_AdjustorThunk },
	{ 0x060000F9, FixedString128Bytes_CompareTo_mB8E2D570CDCEE17387FD2BDA4BD35F9AD5C311A8_AdjustorThunk },
	{ 0x060000FB, FixedString128Bytes_Equals_mC7C2AEBA071128B24EB0BD130ED6423EA46275C1_AdjustorThunk },
	{ 0x060000FC, FixedString128Bytes_CompareTo_m3A02146ED7EA6B833583D2C1B38F6FF5B0870E6F_AdjustorThunk },
	{ 0x060000FE, FixedString128Bytes_Equals_m3B91B177B21344B9CB879DFDAA00AB7E812AD5AB_AdjustorThunk },
	{ 0x060000FF, FixedString128Bytes_CompareTo_m7DAC821750F1242E519D29D8A1A01ABD6B5630C6_AdjustorThunk },
	{ 0x06000101, FixedString128Bytes_Equals_m02FB7C6C4862D4F44EDC97E72A4CADD0BD379D5F_AdjustorThunk },
	{ 0x06000102, FixedString128Bytes_CompareTo_m340091A89F740B13DE44A1F3AE938A14AE658A4B_AdjustorThunk },
	{ 0x06000104, FixedString128Bytes_Equals_m0A10CFEB353647A220B407CCEBE12035F0C1D4A2_AdjustorThunk },
	{ 0x06000106, FixedString128Bytes_ToString_m1CD5B095D5A80759EF2E7F60AA95921369958A29_AdjustorThunk },
	{ 0x06000107, FixedString128Bytes_GetHashCode_mB211F7E224953364EE91770921BA59760A0E4428_AdjustorThunk },
	{ 0x06000108, FixedString128Bytes_Equals_mF8C053D97C4EA171FF1A82613C836A231DDF0DD9_AdjustorThunk },
	{ 0x06000109, FixedString512Bytes_GetUnsafePtr_m6BE151F6C1AC2994321FFC794DD61AEE5E915E05_AdjustorThunk },
	{ 0x0600010A, FixedString512Bytes_get_Length_m07F07806B00F694DA08ED7C3BC04C9FCE7CE4E07_AdjustorThunk },
	{ 0x0600010B, FixedString512Bytes_set_Length_m5BECBE3190D559780E9F84276928B0EC612A1BDE_AdjustorThunk },
	{ 0x0600010C, FixedString512Bytes_get_Capacity_m80069D7197EA5C9AC0149AEE21591CCCFBC0AB55_AdjustorThunk },
	{ 0x0600010D, FixedString512Bytes_TryResize_m924FCE76C50EFD1773E2A417BCA84B2C6B158ABD_AdjustorThunk },
	{ 0x0600010E, FixedString512Bytes_CompareTo_mF2E8A9C2171833229322FEBEF4DF783251513B59_AdjustorThunk },
	{ 0x0600010F, FixedString512Bytes_Equals_mE4279608ABCBD5236ADF59E96788F0837787F11A_AdjustorThunk },
	{ 0x06000110, FixedString512Bytes_CompareTo_mFEA161B206C05F7894DDF0CAB24CDBF525AD9F97_AdjustorThunk },
	{ 0x06000112, FixedString512Bytes_Equals_m2AF82E5FAAF96DBD0A105DF94BD1287804D6D568_AdjustorThunk },
	{ 0x06000113, FixedString512Bytes_CompareTo_mCF6F5BD2E7F95763F8903514954023697C1A3838_AdjustorThunk },
	{ 0x06000115, FixedString512Bytes_Equals_m14403CF490B635D08B4FD2DCAB8473AD2A510CE6_AdjustorThunk },
	{ 0x06000116, FixedString512Bytes_CompareTo_m80D4CAD931945D04AE44A9610D72D8E0839FB2B5_AdjustorThunk },
	{ 0x06000118, FixedString512Bytes_Equals_m865E75EE8511CFC6CB527D86E54AEE7AE010449A_AdjustorThunk },
	{ 0x06000119, FixedString512Bytes_CompareTo_m42E210C85C1D09E6698DCDDB40545351895E2574_AdjustorThunk },
	{ 0x0600011B, FixedString512Bytes_Equals_m34F02FA9086BE42B8856DF5A85DA039FD3036E99_AdjustorThunk },
	{ 0x0600011C, FixedString512Bytes_CompareTo_mEC561BBFD17069268207BF2D6BD6E2C93E90A1B7_AdjustorThunk },
	{ 0x0600011E, FixedString512Bytes_Equals_mE00AFBE32D04B3671E8D476855409B35B5C8E674_AdjustorThunk },
	{ 0x0600011F, FixedString512Bytes_ToString_m1A47583FB34608DBEEDC65F9CA6E7B8E7930233F_AdjustorThunk },
	{ 0x06000120, FixedString512Bytes_GetHashCode_m3F22B7550BFBA5E580D804CCAC7528BA8F64862B_AdjustorThunk },
	{ 0x06000121, FixedString512Bytes_Equals_m344621B84C32BCC845396B588F2AE18154B9C6C3_AdjustorThunk },
	{ 0x06000122, FixedString4096Bytes_GetUnsafePtr_mE1DB42C2C0EEA7D6E1B5D0366A4727125D916EEB_AdjustorThunk },
	{ 0x06000123, FixedString4096Bytes_get_Length_mC2A80F2813739852F0675DA8D2AB68AA92BFC36F_AdjustorThunk },
	{ 0x06000124, FixedString4096Bytes_set_Length_mB4335BCB8388D446FF0C612F81355BD4861F4F8B_AdjustorThunk },
	{ 0x06000125, FixedString4096Bytes_get_Capacity_m55EE381DB20EC9C738999C9F562700569906434D_AdjustorThunk },
	{ 0x06000126, FixedString4096Bytes_TryResize_mC7B1C3EF58A73536BD8A17AEA540B05D1FC4A8F7_AdjustorThunk },
	{ 0x06000127, FixedString4096Bytes_CompareTo_mFE2F6019EBA8EAB9FCCDE7589C8A5F38DA8D4A58_AdjustorThunk },
	{ 0x06000128, FixedString4096Bytes_Equals_m3C8E7CA4F35F56F0759EEE2D8E5F1D4591D1E598_AdjustorThunk },
	{ 0x06000129, FixedString4096Bytes_CompareTo_m8D38C45B1D05029012A417EB72A6108BB820C472_AdjustorThunk },
	{ 0x0600012C, FixedString4096Bytes_Equals_mF43146C7063DCE299D0708E173E48D146806796A_AdjustorThunk },
	{ 0x0600012D, FixedString4096Bytes_CompareTo_mA10C3E4B7291BD7C68B64922D7EF51FF9019E7B1_AdjustorThunk },
	{ 0x0600012F, FixedString4096Bytes_Equals_mF4868F94338530FEFCDF35BB76E1C3D64F54CAEF_AdjustorThunk },
	{ 0x06000130, FixedString4096Bytes_CompareTo_m40115F59AF4ADBC9F7C70B9A30B90DD660526D19_AdjustorThunk },
	{ 0x06000132, FixedString4096Bytes_Equals_mA00838D2DA8F71412C78B2C37D699B39D7897FB5_AdjustorThunk },
	{ 0x06000133, FixedString4096Bytes_CompareTo_m16A7E31FA53206F33F3418353A43A2E02F662895_AdjustorThunk },
	{ 0x06000135, FixedString4096Bytes_Equals_mB76C4C23572B2D379F22EB1EE52B84EE820F075F_AdjustorThunk },
	{ 0x06000136, FixedString4096Bytes_CompareTo_m1EA8E99320A4B5078747BCE1617B3B1574A53F01_AdjustorThunk },
	{ 0x06000138, FixedString4096Bytes_Equals_m3991F570BEC852688D532724FD842E0BD3AC2BB6_AdjustorThunk },
	{ 0x06000139, FixedString4096Bytes_ToString_m1EB551FB3DB9E208AAF34DFFA3864DAB34FD1A26_AdjustorThunk },
	{ 0x0600013A, FixedString4096Bytes_GetHashCode_m4F13B6A3839EDFD34CE37729A815905DD1AAB720_AdjustorThunk },
	{ 0x0600013B, FixedString4096Bytes_Equals_mD182C954C7A720E5C452CE5C9B4BAA20D22A4952_AdjustorThunk },
	{ 0x06000186, NativeQueueBlockPoolData_AllocateBlock_m5B26A5ECC71386FA451CC6A8539CA5828A0D41CD_AdjustorThunk },
	{ 0x06000187, NativeQueueBlockPoolData_FreeBlock_m1F946136116E617CAA61EE33BCF4B55E71A2E6DC_AdjustorThunk },
	{ 0x0600018C, NativeQueueData_GetCurrentWriteBlockTLS_m21D4E781362232FFB12406ED641A17D25C34632C_AdjustorThunk },
	{ 0x0600018D, NativeQueueData_SetCurrentWriteBlockTLS_m36127FAE539B6E36DBCCEF247F067270E0CE9149_AdjustorThunk },
	{ 0x060001A1, Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7_AdjustorThunk },
	{ 0x060001A2, Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A_AdjustorThunk },
	{ 0x060001A5, RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595_AdjustorThunk },
	{ 0x060001A6, RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F_AdjustorThunk },
	{ 0x060001A7, RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED_AdjustorThunk },
	{ 0x060001A9, RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E_AdjustorThunk },
	{ 0x060001AB, MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F_AdjustorThunk },
	{ 0x060001AC, MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069_AdjustorThunk },
	{ 0x060001AD, MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F_AdjustorThunk },
	{ 0x060001AE, MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10_AdjustorThunk },
	{ 0x060001AF, MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC_AdjustorThunk },
	{ 0x060001C4, Rune_LengthInUtf8Bytes_m2E470564E773DB43A761FC2A5DA17F0885E81489_AdjustorThunk },
	{ 0x060001C9, Comparison__ctor_m40D70075E3FE042352BE5C6589C23C5D7D41668C_AdjustorThunk },
};
static const int32_t s_InvokerIndices[555] = 
{
	7062,
	7062,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	10507,
	10675,
	10175,
	9740,
	10197,
	10175,
	10175,
	10091,
	10762,
	3152,
	2222,
	6821,
	7062,
	10543,
	6903,
	4589,
	7071,
	6903,
	7062,
	7062,
	6904,
	6904,
	6903,
	5577,
	7062,
	6903,
	0,
	0,
	7071,
	4589,
	9407,
	7062,
	9407,
	3152,
	2222,
	10507,
	10706,
	10762,
	10762,
	10762,
	9407,
	7071,
	6903,
	4589,
	9407,
	7062,
	9407,
	3152,
	2222,
	10507,
	10706,
	10762,
	10762,
	10762,
	9407,
	0,
	0,
	0,
	10762,
	10762,
	7062,
	5613,
	7062,
	7062,
	9398,
	9629,
	10091,
	10185,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6821,
	6903,
	5577,
	6903,
	1932,
	4676,
	4008,
	5613,
	4676,
	4618,
	9158,
	9158,
	3932,
	4621,
	9158,
	3935,
	4617,
	9158,
	3931,
	4620,
	9158,
	3934,
	4619,
	9158,
	3933,
	10140,
	6944,
	6903,
	4008,
	6821,
	6903,
	5577,
	6903,
	1932,
	4676,
	4008,
	5613,
	4676,
	4618,
	9158,
	3932,
	4621,
	9158,
	3935,
	4617,
	9158,
	3931,
	4620,
	9158,
	3934,
	4619,
	9158,
	3933,
	10141,
	6944,
	6903,
	4008,
	6821,
	6903,
	5577,
	6903,
	1932,
	4676,
	4008,
	5613,
	4676,
	4618,
	9158,
	3932,
	4621,
	9158,
	3935,
	4617,
	9158,
	3931,
	4620,
	9158,
	3934,
	4619,
	9158,
	3933,
	10139,
	6944,
	6903,
	4008,
	6821,
	6903,
	5577,
	6903,
	1932,
	4676,
	4008,
	4618,
	9158,
	3932,
	4621,
	9158,
	3935,
	4617,
	9158,
	3931,
	4620,
	9158,
	3934,
	4619,
	9158,
	3933,
	6944,
	6903,
	4008,
	6821,
	6903,
	5577,
	6903,
	1932,
	4676,
	4008,
	4618,
	9158,
	9158,
	3932,
	4621,
	9158,
	3935,
	4617,
	9158,
	3931,
	4620,
	9158,
	3934,
	4619,
	9158,
	3933,
	6944,
	6903,
	4008,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	9348,
	9349,
	0,
	0,
	8918,
	8471,
	9752,
	0,
	10091,
	7394,
	7394,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6821,
	5491,
	10669,
	10762,
	9820,
	10762,
	3567,
	2816,
	0,
	0,
	8921,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7062,
	7062,
	0,
	0,
	7062,
	7062,
	4589,
	9407,
	7071,
	9407,
	5578,
	7062,
	7062,
	4589,
	3971,
	3152,
	2222,
	10507,
	10706,
	10762,
	10762,
	10762,
	9407,
	10075,
	10070,
	10778,
	7991,
	10088,
	10088,
	7991,
	7995,
	7995,
	7569,
	7569,
	10602,
	6903,
	7567,
	8015,
	7923,
	8015,
	1263,
	7475,
	9740,
	7474,
	8268,
	8246,
	7832,
	9860,
	10461,
	9749,
	9655,
	9657,
	9660,
	10477,
	8851,
	8825,
	7475,
	7474,
	7826,
	9740,
	8246,
	7832,
	3152,
	1055,
	10507,
	10706,
	10762,
	10762,
	10762,
	8246,
	3152,
	538,
	10507,
	10706,
	10762,
	10762,
	10762,
	7832,
	0,
	0,
	0,
	10185,
	10185,
	0,
	0,
	9752,
	0,
	10175,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	10762,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[6] = 
{
	{ 0x06000029, 64,  (void**)&StackAllocator_Try_m093FA501B1B427E32DD9F654380B3EA56A5A4234_RuntimeMethod_var, 0 },
	{ 0x0600002B, 65,  (void**)&StackAllocator_TryU24BurstManaged_mB88D607AA12E4D9181BF1FFE81A1AC3117FDB5E2_RuntimeMethod_var, 0 },
	{ 0x06000037, 62,  (void**)&SlabAllocator_Try_mCD7DED588811A6E3F78E4A14CBFE2852D8E39DEB_RuntimeMethod_var, 0 },
	{ 0x06000039, 63,  (void**)&SlabAllocator_TryU24BurstManaged_mC48F05E806431B6537727E4D6A10550207FBB1EA_RuntimeMethod_var, 0 },
	{ 0x060001A8, 27,  (void**)&RewindableAllocator_Try_mA4AF5A5088097CB6343C3CC97058959976372C35_RuntimeMethod_var, 0 },
	{ 0x060001AA, 28,  (void**)&RewindableAllocator_TryU24BurstManaged_mBB6DAE6A8CDB2E3626C38F3B65186AAF6ACBF6E8_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[64] = 
{
	{ 0x02000014, { 17, 2 } },
	{ 0x0200001D, { 26, 26 } },
	{ 0x0200001F, { 52, 26 } },
	{ 0x02000021, { 78, 26 } },
	{ 0x02000023, { 104, 26 } },
	{ 0x02000025, { 130, 28 } },
	{ 0x0200003B, { 222, 7 } },
	{ 0x0200003D, { 229, 5 } },
	{ 0x02000041, { 234, 19 } },
	{ 0x02000048, { 257, 4 } },
	{ 0x02000049, { 261, 2 } },
	{ 0x0200004A, { 263, 10 } },
	{ 0x0200004C, { 273, 2 } },
	{ 0x02000060, { 285, 12 } },
	{ 0x02000062, { 297, 11 } },
	{ 0x02000064, { 308, 12 } },
	{ 0x02000066, { 327, 2 } },
	{ 0x06000003, { 0, 3 } },
	{ 0x06000004, { 3, 1 } },
	{ 0x06000005, { 4, 3 } },
	{ 0x06000006, { 7, 3 } },
	{ 0x06000007, { 10, 2 } },
	{ 0x06000008, { 12, 1 } },
	{ 0x06000009, { 13, 3 } },
	{ 0x0600000A, { 16, 1 } },
	{ 0x0600004F, { 19, 2 } },
	{ 0x06000050, { 21, 1 } },
	{ 0x06000051, { 22, 2 } },
	{ 0x06000052, { 24, 2 } },
	{ 0x0600013C, { 158, 4 } },
	{ 0x0600013D, { 162, 1 } },
	{ 0x0600013E, { 163, 4 } },
	{ 0x0600013F, { 167, 1 } },
	{ 0x06000140, { 168, 1 } },
	{ 0x06000141, { 169, 5 } },
	{ 0x06000142, { 174, 5 } },
	{ 0x06000143, { 179, 4 } },
	{ 0x06000144, { 183, 6 } },
	{ 0x06000145, { 189, 1 } },
	{ 0x06000146, { 190, 1 } },
	{ 0x06000147, { 191, 1 } },
	{ 0x06000148, { 192, 1 } },
	{ 0x06000149, { 193, 3 } },
	{ 0x0600014A, { 196, 5 } },
	{ 0x0600014B, { 201, 3 } },
	{ 0x0600014C, { 204, 3 } },
	{ 0x0600014D, { 207, 3 } },
	{ 0x06000155, { 210, 1 } },
	{ 0x06000159, { 211, 2 } },
	{ 0x0600015A, { 213, 3 } },
	{ 0x0600015B, { 216, 4 } },
	{ 0x0600015C, { 220, 2 } },
	{ 0x06000171, { 253, 3 } },
	{ 0x0600018F, { 256, 1 } },
	{ 0x060001F4, { 275, 1 } },
	{ 0x060001F5, { 276, 6 } },
	{ 0x060001F7, { 282, 2 } },
	{ 0x060001F9, { 284, 1 } },
	{ 0x06000213, { 320, 4 } },
	{ 0x06000218, { 324, 2 } },
	{ 0x06000219, { 326, 1 } },
	{ 0x06000228, { 329, 1 } },
	{ 0x06000229, { 330, 1 } },
	{ 0x0600022A, { 331, 1 } },
};
extern const uint32_t g_rgctx_T_t2BD6686FA9DF7A772BB80D160D1EFDB90CDC262F;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t2BD6686FA9DF7A772BB80D160D1EFDB90CDC262F_IAllocator_get_Handle_m54F384A4E6B7365849D3462AA309C77F8D9E9E6C;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t2BD6686FA9DF7A772BB80D160D1EFDB90CDC262F_IAllocator_Try_mDD961D5AECA15763EDDE7F745C825C7CD5D7FAB2;
extern const uint32_t g_rgctx_AllocatorManager_AllocateBlock_TisT_t4B6526BAD6B8C750196E96687551E6FB248D8B93_m20F711BEC9AE42C4FA04E61E37EDAE5F8E13C2A2;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisU_tA9035EFB2BDFB918891BB54C12A40A61E813D1AB_m147F0BD45B75434C545EA473E1C858F26B10C11C;
extern const uint32_t g_rgctx_UnsafeUtility_AlignOf_TisU_tA9035EFB2BDFB918891BB54C12A40A61E813D1AB_m21F060306B883FAA6844D2D92424AD0C418E7FB8;
extern const uint32_t g_rgctx_AllocatorManager_Allocate_TisT_t53C98BE980141A98061F7E0C00F1E53863D49172_mCE845A9B9E6485B0D134D2578EAAB89D9FB73D29;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisU_tD3D99706DA190E86407D1D82879F6F709EB4C868_m2AC5DE4526CE78C7DF28F5E331592A1D35522F32;
extern const uint32_t g_rgctx_UnsafeUtility_AlignOf_TisU_tD3D99706DA190E86407D1D82879F6F709EB4C868_m71C14B1576AD1BAF27A35D6414FAB6B4FCF35856;
extern const uint32_t g_rgctx_AllocatorManager_Allocate_TisT_t3DD7401FA21FE0512E56A1C674CD70F032268D44_m47B4DF89F52B6CE8FB4FD11EC4E4A82004076746;
extern const uint32_t g_rgctx_T_t675DECA271C35699FBAD03C9D9F04E758C9964B7;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t675DECA271C35699FBAD03C9D9F04E758C9964B7_IAllocator_Try_mDD961D5AECA15763EDDE7F745C825C7CD5D7FAB2;
extern const uint32_t g_rgctx_AllocatorManager_FreeBlock_TisT_t35BD07ABBCB8D61BAD11D72A4D6D6D997BD815DA_mCFAB24856A7C4B600583475999609C1BDE147617;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisU_tE686974E7BAF50725A50289F9FE1E4DAEB20FEB9_m08C7637594479E2DE074EBCB3AB56DE38E47F0EA;
extern const uint32_t g_rgctx_UnsafeUtility_AlignOf_TisU_tE686974E7BAF50725A50289F9FE1E4DAEB20FEB9_m54C6FF17733951B3182314D7A7392CAF02AE8CBE;
extern const uint32_t g_rgctx_AllocatorManager_Free_TisT_tB5F0204FCE510FB4611F370EFC46DA8C45DC09AF_m866B5AC4270563CCF787270E884E9ADB696947CF;
extern const uint32_t g_rgctx_AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisT_t570532536E3FD3B2205FD25800E5A7DAFDA40675_mC0583857F21D37F314ADCD109E5E9DD8244E4792;
extern const uint32_t g_rgctx_T_t2B0E445D8A10145BC0D27189CC7F23CC9EF95B34;
extern const uint32_t g_rgctx_UnsafeUtility_AsRef_TisT_t2B0E445D8A10145BC0D27189CC7F23CC9EF95B34_m224DE97901461C7EFDC5FE9F0AC057A7815ACC92;
extern const uint32_t g_rgctx_NativeArray_1__ctor_m4ECD2C0F498BB96F26D22D2211DA124311E6913C;
extern const uint32_t g_rgctx_NativeArrayExtensions_Initialize_TisT_t4F1456D1F0D78CBDAD04233A68B351AFD370B8D6_m2A33B8DA1839BC8856106CBC5C6359DE80E72FAB;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tA5912E8646DA88E85E66D08CB0327BAA5E6B0184_mA7BC1C40589A53585C6F00F43E6B2FF9C40DBE3B;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisBUFFER_tFD40F1306B645EA97CA83B52D2CB6CD3FEEAC54D_mF155F456885915E1F3C70F273A8C897F07AA7A9F;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_t2D6B0CCB470769484641DD2BFB5115894D099F35_m7EF6A496BA6072238092F45DB16A779E764F5489;
extern const uint32_t g_rgctx_FixedList_StorageBytes_TisBUFFER_t73A4AA1DE43400A5108AF898EA2ACE7B858658C5_TisT_t383CE4675CD7273C5AE8AE0CE56DD3BD03C553EF_m916CAB4FC681EE3D68EF2DB793A2E9491D2231D4;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t383CE4675CD7273C5AE8AE0CE56DD3BD03C553EF_mB419A365B9AA116F362278FF24992D7C8D54CEC7;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_m09C6C267D9BAF792F6EE22EE3EBFFA6DF40A1AF0;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_m1CA32CEFE1BB9A05D042A6414E2C873CFDDB24FA;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_mF9274D4AE2A751E849E75F7FF15624553335C9E3;
extern const uint32_t g_rgctx_FixedList_Capacity_TisFixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_m86A556E7807973A99C024DC03F74323C88AAE239;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Buffer_m8C59DC6D188FDA6852C8E1DCD65467F24AB6C6FF;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_LengthInBytes_mF4D1CE0CFE876F4AEA6727E2F9DC3E9ED4C6F49F;
extern const uint32_t g_rgctx_T_t604DA2B2C61AC824178F38507FE80321D55C1110;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_mBBBC65A417BA1B4D27BD77E11B44DE17E4AE14EF;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m927C78B4D944D4E876AB25A3E7AB4F6DFAD4F108;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_m6290A920F0B1C958BBD7B60BA6F94FD3164B806A;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_m07F322CB13F58D937FC51D44F14EE31B19067359;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_m6642F674EE22AC655E358EF533B0F700C16A0A94;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_m1CC3012C703D85C7C951AE77DD2B3F5B8E42E918;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_mFAF2429BB4895D0C3AF7C5B981A3C53F440BE6A5;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_m29F0A70AA1DAC8624B99E5E213DC4E34036BBF0C;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_m21876ACD769677EB12796837397549EACDC6DA1F;
extern const uint32_t g_rgctx_FixedList32Bytes_1_tD2F19E017C9CF5DC6CB5780CDA882089FFE4B99C;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_mA9B2F154A856E8EB9B4983E2745FD077BA0D98C3;
extern const uint32_t g_rgctx_FixedList64Bytes_1_tC4ED4AB3E4EEE98679B1412FB4C80C3E4FA16834;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_m496CF2C8A1FAFE63A285C2350D9530A60CC9B463;
extern const uint32_t g_rgctx_FixedList128Bytes_1_t97E27D9873786614696ED6CB6B7DABF2AFF7DCFF;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_m3B2C3C3508065763A6DEE8185CD3507C80EE2159;
extern const uint32_t g_rgctx_FixedList512Bytes_1_tE0BA0381F29B58D8A0C87FD4F2A4E8DB45DFB48F;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_m8812C7F42A79683AC17FBC09A7F04E5E909E3A67;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_t0629EA7E8B063F8817ECAE15F9A75E6F61CA42F0;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_m7701FD9664F730DE055F5A80657EBC6BF96BB399;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m904CEC4D13DAB3EC2E63867290A4919B3EE07B94;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_m9AEE49A539D4229D6C082363CC4750BC3C7BD959;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_mBEB73D718598A132E3FB38993715F6580F14AAF4;
extern const uint32_t g_rgctx_FixedList_Capacity_TisFixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_mBFE2EB1E8054BA05932A224E8E5B0B172C76A4E2;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Buffer_m4ACFD76E5BAB7BBA3B105EF045FB34DF16925121;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_LengthInBytes_m830026A47AC35E78ACFB4ED8613C4241631C7FB3;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_mDC309D74DBDE3857D8CF451A6C61E4DF244DB906;
extern const uint32_t g_rgctx_T_tD32C0F6209442C9BB65A030D29698147784945B7;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_mFFA2BDEF1D5931103F2349F121D89B9EFDA18B2A;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_m1B404F21933A0C0E3F4EDB9BDC56FF1374BA36BB;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_m913F6E9C36DA6E5150201BB04705176C61779A4A;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_mAE605CEAEF66638FB3772258684647B86795A026;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_mB4AC876C1C0A6D784950D1DF9D938E8187CC254A;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_m709B483E5DEB7FB21FD73055E1D18EFC77CB8D94;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_mA84088FDB735E31D8EC68ED7C7241B82F7E382E9;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_m72AEE1D5D4DD2A52568A3DB0395D4C6A4450D662;
extern const uint32_t g_rgctx_FixedList32Bytes_1_tF36F3420B2D85BB09FDA7CBE0B0A59127E7E47B5;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_mFA63385DF5A53E2D34A838F6B4D3E5EB93454707;
extern const uint32_t g_rgctx_FixedList64Bytes_1_t01290055D2315B7FB797137C2585E1D2A8FEFC93;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_m4A58B7E48EC3D1CE4B417CC606F7AF283179CE19;
extern const uint32_t g_rgctx_FixedList128Bytes_1_t90FF12D54923E198013051CB940E9B9C7747AA0E;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_mD426D7F36DA3313161AF4ACB1D163554927B2B5C;
extern const uint32_t g_rgctx_FixedList512Bytes_1_t5A455036DE64718823C34266F43B4B930819650E;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_mA3CB277239697E135B80B1652428B650E393E3EF;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_t140F024B8BA0DDF7C9A41DFDFE78C7BEECDE6355;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_m676325C656968A3297E0312C5E86C06A021B6A7A;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_m0455E51110778F6A133DB6106D4F22A64B989348;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_mDFFBC1AB4195A6724110DE5980F5E23E6FFBD712;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_m69D18CFEBEB2907DF3FAC8CA19E77BE6A657316C;
extern const uint32_t g_rgctx_FixedList_Capacity_TisFixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_mCCBFF245343A7B36B9527CBA6D9741B77826F0AE;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Buffer_m97D30707BB2AEA2F5DBADE3B0FAC8F672E8B1A3D;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_LengthInBytes_m47F607A647F86AE5CEE40BB1760159288C68D0BB;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_mB2C086817BC1745080C475DEF2DC556F31A59D67;
extern const uint32_t g_rgctx_T_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_m2666E22B9261026A0D7D0DDBE9CAF263093BCA3B;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m4D4D3FDEAC491E57BF639002CE416C8CAEEAF68B;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_mE9957B37908F02DBF2C0FBC8A01F575132266E51;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_m4C2FEAF12A383067066580E5AE042BA1E5E15353;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_m660F2F29958AF880448E6418281CCCEB44F5B7D4;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_m437197F791AB58DC99F09DD25DFF430B2F4CFA16;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_m9A5EEBCAC9EB81EA90B9BD7FFB53C8C16795D572;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_m255D7C47599B63B530DEF04B43CD7223D203C6DC;
extern const uint32_t g_rgctx_FixedList32Bytes_1_t3C413D65609876A5C74284892DEE5A0D625FB108;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_m086E1CCF2A8A8917B11F2B64CF7D29C6EE148120;
extern const uint32_t g_rgctx_FixedList64Bytes_1_t870D9CA977C5EB1DE5E7F03D3EBCDF741429CFD5;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_mBF301D370C792F53697A10E96FFDC089205671AE;
extern const uint32_t g_rgctx_FixedList128Bytes_1_tD5CBB33E81228C7A982A8BB36F4C59C6886B72D2;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_m2CDB0F15DB14C27621333422EF9796AD3D031766;
extern const uint32_t g_rgctx_FixedList512Bytes_1_tC3D869C52DA776B0E1C9C381FB198A6197EACD87;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_mB57417246E4D25627832638BE91CB141FDF04EA9;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_t416541239A6A63A742AD7E9584232B8BAEC559DD;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_m23DA07023310D345AD86B3B55A0D2AA231BD7788;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_m0B248C6A39E59A7CC633B8EBB0E2214A7374A24A;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_mFAB9277A26B57EEBBD96FBFF9A8E348CDF0F3695;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_m84508C7415A499FE729E49407F30491D8BA1347B;
extern const uint32_t g_rgctx_FixedList_Capacity_TisFixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_mFF48156C860043812A4CE8D19432EC0D7A50E568;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Buffer_mD366D995A0996A4941BFD8FF7751F8888529019A;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_LengthInBytes_mE533117FD90EE225AB1657584FE15D9FCD3B31F6;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_mFEB57847565241DE5AC20F3C47DFB1C1FBD77D42;
extern const uint32_t g_rgctx_T_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_m2ED44CE82345E495B02845190DC950E9369F9B66;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m0E56845145169510605A77387713117B1DF42A2D;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_m7D404D1A8DCDBFBA6E77CA9A1BAE087DA8BEDB45;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_mC45C102EEA509426C4E25123ACB537AA2E1C8B53;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_m0BE3A1FE674C670F1F163603702EA2EC121C96C0;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_mCB87559DEEEFBF43BBE5EDA844844CCB64B12C06;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_mAFB31975A1194980FE703C4FF6157CA124568175;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_m71F5DF9EF41C7A4B6C05EDC77E4AEBD567829F44;
extern const uint32_t g_rgctx_FixedList32Bytes_1_t16FDC26837A35E8C9EE737B47C5566926DD97D40;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_mFEFB3BF366F96DCEEF8CF0F400F6F6BC865C4EFA;
extern const uint32_t g_rgctx_FixedList64Bytes_1_t692D679ABC650A6E1D639F9B704EBF1C015B7E54;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_mDC81D66D0B81AB0FEBD1F8666E2BB7783FA5ACB8;
extern const uint32_t g_rgctx_FixedList128Bytes_1_t855A409C9DAE10C3B3F003764F360E082BE304C1;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_m2A8267A3F7D08EC772B96BE833442B1E5887C72E;
extern const uint32_t g_rgctx_FixedList512Bytes_1_t669FFE3EF2D7972808F85F458A97B36D3B08A302;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_mBDE871330097648822A6964D577DA54C9C62CDE1;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_t30D9953988646BADE87AE3D019C1B0BB523F33B2;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_mDAE776DA9235ED2BD2A75CD0AC265DB954F739E3;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_mF981B72DCECDB30EBED5ACCC7749B57FE4D25643;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_mDF9CEBCF3A941F23B144FCD20FDA1D094151485F;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m866B91A370BB67C092A4B0E5D72A7734F2132F73;
extern const uint32_t g_rgctx_FixedList_Capacity_TisFixedBytes4094_t8611441D8BDC6A677C2D9E551086F59EFBFCBBE5_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m365CB7E2D2385EF3C160C60E268D84639982C57A;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Buffer_m8C59032AB0882881E308B5310103C4C0C67FE527;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m4521B626F59BBB2321D000869DFCBDC991657E02;
extern const uint32_t g_rgctx_UnsafeUtility_WriteArrayElement_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m7E4C5808A41558EDB297D03CF1DE6FE52199AA57;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_LengthInBytes_mDD272B4890655CD06ACF62B312C72673B7066DAB;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_mE8F8A185DE5BB8CB0BEE9383F387044EC232D30C;
extern const uint32_t g_rgctx_T_tBD073BADADC7386EA705AE4342916B0F07BDACDE;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_mDCA60AD837CDD603A14317382F8FE7B7A5332496;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m6B94FC005EB3D868CEC8B0A1A2953929BDB403B9;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_m1EE2D74734AD460BFAC1124BEC50F6A7242C157A;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_mBEFA2EA7F7D0BDBF7900A55AD4870026F5CDD9E0;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_m76A8C7244A78E281DE7D75356C8C98452CC9B973;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_m0FB45017FC642488814B76ED2D5856074D0A2C13;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_m7B2C705430CA47FDBA89E556A4BA14F10B5E62D6;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_m48E8E70F5EC08F0B2764E1FA714A0E6B42AD79B3;
extern const uint32_t g_rgctx_FixedList32Bytes_1_t7AAD6CEC30726A322BBECE5EF36547B20FE7474E;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_mA097DF642E512753B3F3819A63A991273FB15433;
extern const uint32_t g_rgctx_FixedList64Bytes_1_tA47527956352165EF643C47FD1BC7C6169E29EBC;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_m3F25D402683E10A10CC6E899C3C5F3242C07DE65;
extern const uint32_t g_rgctx_FixedList128Bytes_1_t79918BA354DF7C9EED2BB2E611792E496C73C747;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_mA57897971800CECFA745EAA611995A129370DE0E;
extern const uint32_t g_rgctx_FixedList512Bytes_1_t3AB2AD5617F05D853E1819914CDD7FE040D0A863;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_m234039E2C015B564CDC7962B8ECA3F6161456BC2;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_tDD8407366F29BD7A6221ED46D0353F2A5DEB8D87;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_m79776FC49E1BE2ECE4CD5A12AB1AD9E67199A5B6;
extern const uint32_t g_rgctx_T_t128D4A74C38857567A2488C6CD7C1BA749677358;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t128D4A74C38857567A2488C6CD7C1BA749677358_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t128D4A74C38857567A2488C6CD7C1BA749677358_IUTF8Bytes_TryResize_m42B6D259A45BC13F377FFA6A77393E1B89319CE0;
extern const uint32_t g_rgctx_FixedStringMethods_Write_TisT_t128D4A74C38857567A2488C6CD7C1BA749677358_m5B6E47CFAA22B1EB4E5C1C39A067F65B5B48DFA1;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_tCACCA4E422C4855D9ED402558E999CB0C2BC720F_mEFC58699E2B44FF5B958EF465B6A020B2273864C;
extern const uint32_t g_rgctx_T_t3719B19A5F40B5A453DFEC1F980F02334CBB37AB;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t3719B19A5F40B5A453DFEC1F980F02334CBB37AB_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t3719B19A5F40B5A453DFEC1F980F02334CBB37AB_IUTF8Bytes_TryResize_m42B6D259A45BC13F377FFA6A77393E1B89319CE0;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t3719B19A5F40B5A453DFEC1F980F02334CBB37AB_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_tFBEF2E899D7E776BACE215E9FC58EE91279D97B8_m39E5F4800AF994D6A510E28AA3269DBFAB97B16A;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_t77B0AAC497BABF700242B22D3AE6A9C6281B8BE0_mD6FEC8FEA1CE74E62EBEB56F2CB6F5FEE4969375;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_tD348CE173187A3FC1EFEAC66147EFA803A5A7BE7_m1146627AE0EFBAF0F71AE2A948A73EE8278A97BD;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_tD348CE173187A3FC1EFEAC66147EFA803A5A7BE7_mA87C60EC43E296377D5C47614CE7C1EA8581AFB2;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_tD348CE173187A3FC1EFEAC66147EFA803A5A7BE7_m7CB5C23C8F0A07EA38D430CA3936F37DB1AB4F68;
extern const uint32_t g_rgctx_FixedStringMethods_AppendScientific_TisT_tD348CE173187A3FC1EFEAC66147EFA803A5A7BE7_m694ED83E7E9535A2FEEB59695A8C191F7B2120E7;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_tD348CE173187A3FC1EFEAC66147EFA803A5A7BE7_m1E88C92AFA2F6FF8987C34B8C5D9F40606372D9D;
extern const uint32_t g_rgctx_UnsafeUtilityExtensions_AsRef_TisT2_t32EA74C6914E6CF63B14ADAE219B21DE90DE3FDC_mEACB25F0892A8D2C1017914E9BC224F8AF8A594F;
extern const uint32_t g_rgctx_T2_t32EA74C6914E6CF63B14ADAE219B21DE90DE3FDC;
extern const Il2CppRGCTXConstrainedData g_rgctx_T2_t32EA74C6914E6CF63B14ADAE219B21DE90DE3FDC_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1;
extern const Il2CppRGCTXConstrainedData g_rgctx_T2_t32EA74C6914E6CF63B14ADAE219B21DE90DE3FDC_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_tAF666238E844771565195E661F0E174E5E0F1867_m66FD19C64582D5837D91409D20FCDECDC11D875A;
extern const uint32_t g_rgctx_T_t394CB326631A38B224E2EF133552EA72F59A5785;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t394CB326631A38B224E2EF133552EA72F59A5785_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t394CB326631A38B224E2EF133552EA72F59A5785_IUTF8Bytes_TryResize_m42B6D259A45BC13F377FFA6A77393E1B89319CE0;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t394CB326631A38B224E2EF133552EA72F59A5785_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1;
extern const uint32_t g_rgctx_UnsafeUtilityExtensions_AsRef_TisU_t48602537A6FE9E3004BEF5A7D69B7EF21D14AC4D_m569B3D2466AB16D01A46A854DEC984928AE96664;
extern const uint32_t g_rgctx_U_t48602537A6FE9E3004BEF5A7D69B7EF21D14AC4D;
extern const Il2CppRGCTXConstrainedData g_rgctx_U_t48602537A6FE9E3004BEF5A7D69B7EF21D14AC4D_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA;
extern const Il2CppRGCTXConstrainedData g_rgctx_U_t48602537A6FE9E3004BEF5A7D69B7EF21D14AC4D_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_t0B2CC83D0F761DC499149F89688785B96285B7AC_TisT0_t59B18FCD5F3CCEFEDB47008F8CCDA26BFB6D6029_m45531558CF7905106365D44D755E3072CEBDFE0F;
extern const uint32_t g_rgctx_FixedStringMethods_AppendRawByte_TisT_t0B2CC83D0F761DC499149F89688785B96285B7AC_m1EF275E1430AA2106453003EA4F39464EEB60516;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_t07B227D60731A9CE77D375F160017FCA3B9E860D_m50BECEB48BA831E3E4BAD7193B62BE0C845C698A;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_tC536ABE50E318DA04463BF2ED1207E56419E196B_m493C6EF7E4A986275B67BA357471125210F2B847;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_tE972552ACA762F93209DEE7815F9664D711F520E_m57F48F4955BEAAED74063D5C11EC9125F1AF093B;
extern const uint32_t g_rgctx_FixedStringMethods_Append_TisT_tDD524902B7254CF8812E71C4E7CD17EBE546A3E8_m2938EBE66C8871E8AF8549FF177ADB2A53BA668B;
extern const uint32_t g_rgctx_T_t40CFE80575C0B3A9E97C1A7DB9A1C99154484193;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t40CFE80575C0B3A9E97C1A7DB9A1C99154484193_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t40CFE80575C0B3A9E97C1A7DB9A1C99154484193_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA;
extern const uint32_t g_rgctx_UnsafeUtilityExtensions_AsRef_TisT2_t2BAE730EBE1EFEDF9B51E00473183A8664C69200_m61DFED76CEE5300C00F730592D7972436A60570F;
extern const uint32_t g_rgctx_T2_t2BAE730EBE1EFEDF9B51E00473183A8664C69200;
extern const Il2CppRGCTXConstrainedData g_rgctx_T2_t2BAE730EBE1EFEDF9B51E00473183A8664C69200_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1;
extern const Il2CppRGCTXConstrainedData g_rgctx_T2_t2BAE730EBE1EFEDF9B51E00473183A8664C69200_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA;
extern const uint32_t g_rgctx_FixedStringMethods_CompareTo_TisT_t44578AF0C73EE30B7AE87E0F1E82A995DF6FEBCA_m1F12FF739B81A47680F8F08CA3AB5E03308601C8;
extern const uint32_t g_rgctx_T_tEA019B08712E2CAE787B21AFA982788BF07899CA;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tEA019B08712E2CAE787B21AFA982788BF07899CA_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tEA019B08712E2CAE787B21AFA982788BF07899CA_INativeList_1_get_Capacity_mF5B445EAD5F226F5E8C3B2DDF4B8C35EFBB40C4C;
extern const uint32_t g_rgctx_T_tD92B3110D590A5F2CBCE2D8750D7F0E6FB6C1D34;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tD92B3110D590A5F2CBCE2D8750D7F0E6FB6C1D34_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tD92B3110D590A5F2CBCE2D8750D7F0E6FB6C1D34_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1;
extern const uint32_t g_rgctx_T_t0720BD109D0FD7DCF11AF76ED4D7B452221C1557;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t0720BD109D0FD7DCF11AF76ED4D7B452221C1557_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t0720BD109D0FD7DCF11AF76ED4D7B452221C1557_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA;
extern const uint32_t g_rgctx_Array_Resize_TisT_tA7BC8A9B01B94F56CE3273E1C3F4463BAFDB2774_m40E5359FE293594F47DD50DDB1F2AD213B4A709A;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954_mD44E7FDD63803D509A5BB08B506B82CA121DF38A;
extern const uint32_t g_rgctx_UnsafeUtility_AlignOf_TisT_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954_mD999DEAF969B234226FD5F050A1A8DF99545F7FC;
extern const uint32_t g_rgctx_NativeListUnsafeUtility_GetUnsafeReadOnlyPtr_TisT_t340BB4BE22E9CA5793ABD358E65F76E06EEE670B_m86D129B7F6E2A0FEB5E9601382BFB4DE7C301953;
extern const uint32_t g_rgctx_NativeList_1_get_Length_mE7CED0ECF35224EA73CC9ABDA8F9F739C45E599F;
extern const uint32_t g_rgctx_NativeArrayExtensions_IndexOf_TisT_t340BB4BE22E9CA5793ABD358E65F76E06EEE670B_TisU_t6EAD6496BD94F27E87A2E7A37B6F85200A6A2811_m90B2FF04D5A2ABB0BE9D28612E6374AA9C6422E9;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisT_t09DC94586A2FDECDAB68AB50CA4DFDBCC556F52C_m6BD5970A2696B8AF321330715F8E3C1540680FAE;
extern const uint32_t g_rgctx_T_t09DC94586A2FDECDAB68AB50CA4DFDBCC556F52C;
extern const uint32_t g_rgctx_IEquatable_1_t0CFAE6010DDC5EEFA3D8CD8FA44AE16BF6AF174C;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t09DC94586A2FDECDAB68AB50CA4DFDBCC556F52C_IEquatable_1_Equals_m12D2D9D3C150139969DBE87730D6E4452F6D58AB;
extern const uint32_t g_rgctx_AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisT_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5_mCD78204D5334495A64D5596132C3B8DF63A9ADFB;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5_m73DED6813E12309EE3307BDC06E7D267D3029682;
extern const uint32_t g_rgctx_NativeHashMap_2__ctor_m477E96F08615F8EF61D599D2EF3406D24AF95BE2;
extern const uint32_t g_rgctx_UnsafeHashMap_2_tF3FE093304BF7E939999457F5E224165140D43D1;
extern const uint32_t g_rgctx_UnsafeHashMap_2__ctor_m42C2CD6C2AE9326BFF66FA507C04417FD8CBFC9A;
extern const uint32_t g_rgctx_UnsafeHashMap_2_TryAdd_m82D6EEBD6097A7DC5C5E9937FCD9F624F02E15A7;
extern const uint32_t g_rgctx_UnsafeHashMap_2_TryGetValue_m90448100C89F021A29C76F693FD8BC1DB8946E0F;
extern const uint32_t g_rgctx_UnsafeHashMap_2_ContainsKey_m00C7BED6B375F6C3819971EC61283F58BF182175;
extern const uint32_t g_rgctx_UnsafeHashMap_2_Dispose_mC0C1DAD8C9D4E220484DAC753C1A40CB019DB9F4;
extern const uint32_t g_rgctx_NativeHashMap_2_tAEF305DA2FA456149C8F02ACE3D3B52146530E91;
extern const uint32_t g_rgctx_NativeHashMap_2__ctor_m92C94AF69B198508A87FC13755D28368F320FF28;
extern const uint32_t g_rgctx_NativeHashMap_2_Dispose_m47A6D2F27D0B47B5798CE4AFD4887635BF9A0A3F;
extern const uint32_t g_rgctx_NativeHashMap_2_TryAdd_m0F44C00E6A726884EF9FD7C9B1B69714B4D10050;
extern const uint32_t g_rgctx_NativeHashMap_2_ContainsKey_m9194A7E469F30CD90168BC7EE4969FB07456BC11;
extern const uint32_t g_rgctx_NativeList_1__ctor_mFC02027D535FF8FA6DA0D2F3FF28BE9C3C22FA0D;
extern const uint32_t g_rgctx_UnsafeList_1_t62C841C6D06562004B617CB8FEB154768A22A448;
extern const uint32_t g_rgctx_NativeList_1_Initialize_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mDA27076ECD04FDDCE4F08EC240944ED85C58EA1F;
extern const uint32_t g_rgctx_UnsafeList_1_get_Item_m3A75728B303CDC6919167D5BFCD56D9BAE755F4A;
extern const uint32_t g_rgctx_UnsafeList_1_set_Item_m55F6D1F1AE6B627E9916AC7867161D4DFA6EB267;
extern const uint32_t g_rgctx_UnsafeList_1_ElementAt_m94F2861AED0CAABDD863BF768BD5B41FE0A10976;
extern const uint32_t g_rgctx_UnsafeList_1_get_Length_mBB48D1B7E16C1A3EFC1FECFAE979F4AC003C5BA7;
extern const uint32_t g_rgctx_UnsafeList_1_Resize_m877B9B1A6AA00562D5D52E78696C5B2364FCB296;
extern const uint32_t g_rgctx_UnsafeList_1_get_Capacity_m7CEDBD1C464E131C4BA666F0BE92ED8747465B1D;
extern const uint32_t g_rgctx_UnsafeList_1_Add_m31E9C9CB6476E5AF889F68A699B2DE541626AE2D;
extern const uint32_t g_rgctx_UnsafeList_1_InsertRangeWithBeginEnd_m124A00651AD640BCE5EE0FC32A2E7BB38F706F0B;
extern const uint32_t g_rgctx_UnsafeList_1_RemoveAt_m8E84B72BBF49287163A0716AC74C07A268F63AB5;
extern const uint32_t g_rgctx_UnsafeList_1_Destroy_m4365069A2F94BC7B50074F5C3C23A35769947475;
extern const uint32_t g_rgctx_UnsafeList_1_Clear_m763F409F9070AAB6B2E20A3952CED497999D10B5;
extern const uint32_t g_rgctx_NativeList_1_AsArray_mF7F649295B1EB59DCF87D80023CDC9825B535243;
extern const uint32_t g_rgctx_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisT_t86F43EBF284E6FC6FD87B54AE593FF12A96EACEA_m30203C993DF4EFC52F1B6D61B11B1BE1438DC7A0;
extern const uint32_t g_rgctx_Enumerator_tA55E226E9D7AB26F044B58ECE28F8B79A8215FB6;
extern const uint32_t g_rgctx_Enumerator__ctor_mD2EFC009587810FA50EDBA17918DE09FF1A0D3E8;
extern const uint32_t g_rgctx_NativeList_1_Resize_m2DA751BFAA461CD57325BF1C6766FBF50AE0E384;
extern const uint32_t g_rgctx_UnsafeList_1_Create_TisU_t8D9513FF7045C2A2417339533F96C0B604BC6DE3_m87141D5D82ED170DBB65F3C443132ABE0C2B143E;
extern const uint32_t g_rgctx_U_t8D9513FF7045C2A2417339533F96C0B604BC6DE3;
extern const Il2CppRGCTXConstrainedData g_rgctx_U_t8D9513FF7045C2A2417339533F96C0B604BC6DE3_IAllocator_get_Handle_m54F384A4E6B7365849D3462AA309C77F8D9E9E6C;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tE7A8D70110B92235F62517F896A32C02F63FA103_m65384FF867A28977606B44C52A465279757EDCDD;
extern const uint32_t g_rgctx_NativeQueueData_AllocateQueue_TisT_tB1D82A0A8EDB98867BDD6CCBD9C7401F3C1E7AC2_mAE39CD87FEFCC4C6FD7ED75BAFEF28B0C8EF7B2B;
extern const uint32_t g_rgctx_NativeQueueData_AllocateWriteBlockMT_TisT_tB1D82A0A8EDB98867BDD6CCBD9C7401F3C1E7AC2_mEA2A377DD7A2FEA64747F068DEF60A754790A09D;
extern const uint32_t g_rgctx_UnsafeUtility_WriteArrayElement_TisT_tB1D82A0A8EDB98867BDD6CCBD9C7401F3C1E7AC2_m83CBA12C8E9613562A23548D169AD7C4A9CA7336;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisT_tB1D82A0A8EDB98867BDD6CCBD9C7401F3C1E7AC2_m040798FFC1D1A9E64F1E0986F32FBCC6B6B8B116;
extern const uint32_t g_rgctx_NativeQueueData_AllocateWriteBlockMT_TisT_tE8BB381867704C003338C575568A7F879227D8C8_m1863E40F24BA4CBBF5E025EB6EF11379AFD8CD2D;
extern const uint32_t g_rgctx_UnsafeUtility_WriteArrayElement_TisT_tE8BB381867704C003338C575568A7F879227D8C8_mC90B667D921AF8365127F9131BC9E61B578A52DA;
extern const uint32_t g_rgctx_NativeReference_1_Allocate_m5A290B745BFCD56688446E04A807A6E6B79FB832;
extern const uint32_t g_rgctx_NativeReference_1_tDE51FD94D7756BF26363CAAFD78F564BC0346FEB;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t6DC8D4611200E21BAEF642248669B9D77E9D8F25_mDF3C421D4340F267E62959249A7DD21E8E14913B;
extern const uint32_t g_rgctx_UnsafeUtility_AlignOf_TisT_t6DC8D4611200E21BAEF642248669B9D77E9D8F25_m945EEC48A6604717EEDD0EF4CAEC6CF46277EC47;
extern const uint32_t g_rgctx_NativeReference_1_get_Value_m05951CED8688A4C020D9EBCE4417D75D9503BB35;
extern const uint32_t g_rgctx_T_t6DC8D4611200E21BAEF642248669B9D77E9D8F25;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t6DC8D4611200E21BAEF642248669B9D77E9D8F25_Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B;
extern const uint32_t g_rgctx_NativeReference_1_tDE51FD94D7756BF26363CAAFD78F564BC0346FEB;
extern const uint32_t g_rgctx_NativeReference_1_Equals_mB4815FD0D415028A7B31B84DB1906D9D38BD7BF7;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t6DC8D4611200E21BAEF642248669B9D77E9D8F25_Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C;
extern const uint32_t g_rgctx_Unmanaged_Free_TisT_t5BC8A3A1143355B7F5A74A86A9F4AD760F016F3F_m80B9E4D5EF4A9B36865D150DF2BAEA934AF4B721;
extern const uint32_t g_rgctx_T_t5BC8A3A1143355B7F5A74A86A9F4AD760F016F3F;
extern const uint32_t g_rgctx_UnsafeHashMapData_CalculateDataSize_TisTKey_t17EF52075FE7CA15560F301DE64E24AF43EA4F19_TisTValue_tBE70E8EE37E320734C25647D0F2B7CF66DB91B7B_m7F82433F8ECB937C94A0FAA97605F8B8DC1891FB;
extern const uint32_t g_rgctx_UnsafeHashMapData_CalculateDataSize_TisTKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_TisTValue_tE31A0268C733C505F35CBD443D14CFD991A47665_m0F9FF1F554484D74178201235DFB11BF53A330D4;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisTValue_tE31A0268C733C505F35CBD443D14CFD991A47665_mD8181BC37B8E3A5AD60C1735D4A39D71B671B8B1;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisTKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_m39A76C9B0B357A658674F1232E506CD56D37C717;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisTKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_m83DC3D795D62AB43EAF6609FEB0032B85AD6E66C;
extern const uint32_t g_rgctx_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F;
extern const Il2CppRGCTXConstrainedData g_rgctx_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisTValue_t9BEA98065AE85235E2502C5AB0E884FF03C5668F_m6658D3E9BFDC6692972806096D0F143B26CD391A;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisTKey_t5F28BA1D306AB8FE2AB2CC71D717C5AEE8486A37_m20D9E73F25A80D1F7774C3A532F7293CAAC95E20;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisTKey_t01ADD782F682217A566855FEDB600569A9B650E4_m5A50D233A0BB29566FFC733C2E63931D804984B4;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_TryGetFirstValueAtomic_m891CD2EBFDF79454075F9535E0F2391A485A0A7F;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_t809E38EA5ABFD4D49660AB06422F98F857C0906A;
extern const uint32_t g_rgctx_UnsafeHashMapData_ReallocateHashMap_TisTKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_TisTValue_tAFA2E425E810A436A283BAD02D7F0BB9E9C72BBA_mEC224ECD6DB5E7E62F714929AF508A4C6E8399AE;
extern const uint32_t g_rgctx_UnsafeUtility_WriteArrayElement_TisTKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_m3DF15E715908753378C09947055FA017C869E1A0;
extern const uint32_t g_rgctx_UnsafeUtility_WriteArrayElement_TisTValue_tAFA2E425E810A436A283BAD02D7F0BB9E9C72BBA_m306DE1B20DB1836CC66599BD5481E597D4F864CE;
extern const uint32_t g_rgctx_TKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B;
extern const Il2CppRGCTXConstrainedData g_rgctx_TKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisTKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_m292884B367F1D587D4881715B25D4F31509374A3;
extern const uint32_t g_rgctx_IEquatable_1_t230BC9DF3CC331AD0B7EB67722AF2C2474170EC0;
extern const Il2CppRGCTXConstrainedData g_rgctx_TKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_IEquatable_1_Equals_mE86769881C8CC395B52D9F9CA8E363EE1D857DA2;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_TryGetNextValueAtomic_mE01538BDEB8A97C70A5ED3E0C23BE6DD2346E576;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisTValue_tAFA2E425E810A436A283BAD02D7F0BB9E9C72BBA_mDAFD4F9EF96D5299709CF4F978AAB092233CE927;
extern const uint32_t g_rgctx_UnsafeHashMapData_AllocateHashMap_TisTKey_t9956810BF50C2A9F06E26DAA0F2BA3122F4B1E98_TisTValue_t1811826E5E497EF68E35EF1EEBCA743E7CDB0003_mAC824AA05DC02873672ECCB1BCE2578F52F815DE;
extern const uint32_t g_rgctx_UnsafeHashMap_2_Clear_m9D40221AC7B584D82E611989EFC5E32D54ABBF8F;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_Clear_mB442EA4307DDAC3DFFEBD74F323FA5518E53350F;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_t62F134250F10223C807DAB4EACA0AD4809E0DF8C;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_TryAdd_m2FE941906C9E69169A4930B1ACC95EFCBA420FD1;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_Remove_m8147EFFB572F3E7962804F33CB317D07287E3AA7;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_TryGetFirstValueAtomic_m08E1BC1E329FCA1586B4525A4D5B10C6E09B5B7F;
extern const uint32_t g_rgctx_UnsafeHashMap_2_TryGetValue_mBD27010BEF6E3F67BA65E1A198531F291CC26F0C;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_SetValue_mA9A6DE16AF11EDA580A1979C36D168C3749AD051;
extern const uint32_t g_rgctx_CollectionHelper_CreateNativeArray_TisTKey_t9956810BF50C2A9F06E26DAA0F2BA3122F4B1E98_m26D5B6D1B19058FD9DE0682ACE8869CC04B4FD28;
extern const uint32_t g_rgctx_UnsafeHashMapData_GetKeyArray_TisTKey_t9956810BF50C2A9F06E26DAA0F2BA3122F4B1E98_m656BB85EC110A42528828186A7C241D451690EEE;
extern const uint32_t g_rgctx_UnsafeList_1_get_Capacity_mE30AE2BB42DF086225C6BEEACED7A1E66EAC91ED;
extern const uint32_t g_rgctx_UnsafeList_1_Resize_mD2E7D06E288A389059211E1D82BA7DB35F3AF301;
extern const uint32_t g_rgctx_T_t6368C7377A351E8DAE030B3776E2EAB48430F6A1;
extern const uint32_t g_rgctx_UnsafeList_1_SetCapacity_mC9FF72A63AF11927A72AFC4491824A38C3741104;
extern const uint32_t g_rgctx_UnsafeList_1_t620A94D0181E3DFEF514032D62F7285F783817BF;
extern const uint32_t g_rgctx_UnsafeList_1_Dispose_mA9C46557DD7D143A317FDF3F55E3DB921A44125C;
extern const uint32_t g_rgctx_AllocatorManager_Free_TisUnsafeList_1_t620A94D0181E3DFEF514032D62F7285F783817BF_m10CA4CD105BFD216034DA9E1E453483651FF7BA7;
extern const uint32_t g_rgctx_AllocatorManager_Free_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_m3380E20A35AE021576F755FA3B86CE60AC955DAB;
extern const uint32_t g_rgctx_UnsafeUtility_AlignOf_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_m541A7459A8FD164187328166064C4404C9CB1247;
extern const uint32_t g_rgctx_UnsafeList_1_SetCapacity_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mB514D6019190B92124D1A238FB222C812F7CC09F;
extern const uint32_t g_rgctx_UnsafeUtility_WriteArrayElement_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_mA94F2BC0DE06EB1D0025E0C41B8513CADC008966;
extern const uint32_t g_rgctx_UnsafeList_1_RemoveRange_mAB0C70CA65697E6ED03BD83841B322153EF340F1;
extern const uint32_t g_rgctx_AllocatorManager_Allocate_TisU_t00C790F8C500DC1C444D4422A52F657E0858DB7D_TisUnsafeList_1_t620A94D0181E3DFEF514032D62F7285F783817BF_m33A1C62888A2F0358171DBBB13F92E1995C3982D;
extern const uint32_t g_rgctx_U_t00C790F8C500DC1C444D4422A52F657E0858DB7D;
extern const Il2CppRGCTXConstrainedData g_rgctx_U_t00C790F8C500DC1C444D4422A52F657E0858DB7D_IAllocator_get_Handle_m54F384A4E6B7365849D3462AA309C77F8D9E9E6C;
extern const uint32_t g_rgctx_UnsafeList_1_SetCapacity_TisU_t00C790F8C500DC1C444D4422A52F657E0858DB7D_mED87DE5A2866AD2610DF962DDD2B32565BE50175;
extern const uint32_t g_rgctx_AllocatorManager_Allocate_TisU_tD4E7F950E65E51D0FFB646539AFA97213F18FDCB_m3424B5B28B4777480531ABD6CCCBF82C251F0D46;
extern const uint32_t g_rgctx_AllocatorManager_Free_TisU_tD4E7F950E65E51D0FFB646539AFA97213F18FDCB_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_m54F51F8A7FBB83F8306F70DA0A131C06A38E6706;
extern const uint32_t g_rgctx_UnsafeList_1_Realloc_TisU_t74C7EABD355F620088583D354F66E077F74C2116_m601210D03B7815AC3291C90C7517E1FCEB210612;
extern const uint32_t g_rgctx_UnsafePtrListTExtensions_ListData_TisT_tF8E99804EEF94B935A6FD2688DEB26291A2D108B_m0C30F69A257596D0DE5875BCEFD7A6A5F3DAFE05;
extern const uint32_t g_rgctx_TU2A_tF6D46589EF3AD0664B1484E566D4B3B6DC192805;
extern const uint32_t g_rgctx_UnsafeUtility_As_TisUnsafePtrList_1_t0D911C4E1640779BB8BDFEA11F4CAB84E558AF25_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mDF68B5FE092DAD9082374AB097B30857FFBAFAA5;
extern const uint32_t g_rgctx_ILSupport_AddressOf_TisT_tCF8995A642FF6C6B39489CC54F7B7FB179DD8EB7_m61251B4786FAAD41BD9A3A4555501786A9759290;
extern const uint32_t g_rgctx_ILSupport_AsRef_TisT_t1AD28EB9FB4F1EE8B862A47B00FCA3990142BEFB_m71FC67ABC68632F08CDF5CCB9EA51989EA7F388A;
static const Il2CppRGCTXDefinition s_rgctxValues[332] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2BD6686FA9DF7A772BB80D160D1EFDB90CDC262F },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t2BD6686FA9DF7A772BB80D160D1EFDB90CDC262F_IAllocator_get_Handle_m54F384A4E6B7365849D3462AA309C77F8D9E9E6C },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t2BD6686FA9DF7A772BB80D160D1EFDB90CDC262F_IAllocator_Try_mDD961D5AECA15763EDDE7F745C825C7CD5D7FAB2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_AllocateBlock_TisT_t4B6526BAD6B8C750196E96687551E6FB248D8B93_m20F711BEC9AE42C4FA04E61E37EDAE5F8E13C2A2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisU_tA9035EFB2BDFB918891BB54C12A40A61E813D1AB_m147F0BD45B75434C545EA473E1C858F26B10C11C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AlignOf_TisU_tA9035EFB2BDFB918891BB54C12A40A61E813D1AB_m21F060306B883FAA6844D2D92424AD0C418E7FB8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Allocate_TisT_t53C98BE980141A98061F7E0C00F1E53863D49172_mCE845A9B9E6485B0D134D2578EAAB89D9FB73D29 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisU_tD3D99706DA190E86407D1D82879F6F709EB4C868_m2AC5DE4526CE78C7DF28F5E331592A1D35522F32 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AlignOf_TisU_tD3D99706DA190E86407D1D82879F6F709EB4C868_m71C14B1576AD1BAF27A35D6414FAB6B4FCF35856 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Allocate_TisT_t3DD7401FA21FE0512E56A1C674CD70F032268D44_m47B4DF89F52B6CE8FB4FD11EC4E4A82004076746 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t675DECA271C35699FBAD03C9D9F04E758C9964B7 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t675DECA271C35699FBAD03C9D9F04E758C9964B7_IAllocator_Try_mDD961D5AECA15763EDDE7F745C825C7CD5D7FAB2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_FreeBlock_TisT_t35BD07ABBCB8D61BAD11D72A4D6D6D997BD815DA_mCFAB24856A7C4B600583475999609C1BDE147617 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisU_tE686974E7BAF50725A50289F9FE1E4DAEB20FEB9_m08C7637594479E2DE074EBCB3AB56DE38E47F0EA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AlignOf_TisU_tE686974E7BAF50725A50289F9FE1E4DAEB20FEB9_m54C6FF17733951B3182314D7A7392CAF02AE8CBE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Free_TisT_tB5F0204FCE510FB4611F370EFC46DA8C45DC09AF_m866B5AC4270563CCF787270E884E9ADB696947CF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisT_t570532536E3FD3B2205FD25800E5A7DAFDA40675_mC0583857F21D37F314ADCD109E5E9DD8244E4792 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2B0E445D8A10145BC0D27189CC7F23CC9EF95B34 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AsRef_TisT_t2B0E445D8A10145BC0D27189CC7F23CC9EF95B34_m224DE97901461C7EFDC5FE9F0AC057A7815ACC92 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeArray_1__ctor_m4ECD2C0F498BB96F26D22D2211DA124311E6913C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeArrayExtensions_Initialize_TisT_t4F1456D1F0D78CBDAD04233A68B351AFD370B8D6_m2A33B8DA1839BC8856106CBC5C6359DE80E72FAB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tA5912E8646DA88E85E66D08CB0327BAA5E6B0184_mA7BC1C40589A53585C6F00F43E6B2FF9C40DBE3B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisBUFFER_tFD40F1306B645EA97CA83B52D2CB6CD3FEEAC54D_mF155F456885915E1F3C70F273A8C897F07AA7A9F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_t2D6B0CCB470769484641DD2BFB5115894D099F35_m7EF6A496BA6072238092F45DB16A779E764F5489 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_StorageBytes_TisBUFFER_t73A4AA1DE43400A5108AF898EA2ACE7B858658C5_TisT_t383CE4675CD7273C5AE8AE0CE56DD3BD03C553EF_m916CAB4FC681EE3D68EF2DB793A2E9491D2231D4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t383CE4675CD7273C5AE8AE0CE56DD3BD03C553EF_mB419A365B9AA116F362278FF24992D7C8D54CEC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_m09C6C267D9BAF792F6EE22EE3EBFFA6DF40A1AF0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_m1CA32CEFE1BB9A05D042A6414E2C873CFDDB24FA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_mF9274D4AE2A751E849E75F7FF15624553335C9E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_Capacity_TisFixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_m86A556E7807973A99C024DC03F74323C88AAE239 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Buffer_m8C59DC6D188FDA6852C8E1DCD65467F24AB6C6FF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_LengthInBytes_mF4D1CE0CFE876F4AEA6727E2F9DC3E9ED4C6F49F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t604DA2B2C61AC824178F38507FE80321D55C1110 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_mBBBC65A417BA1B4D27BD77E11B44DE17E4AE14EF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m927C78B4D944D4E876AB25A3E7AB4F6DFAD4F108 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_m6290A920F0B1C958BBD7B60BA6F94FD3164B806A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_m07F322CB13F58D937FC51D44F14EE31B19067359 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_m6642F674EE22AC655E358EF533B0F700C16A0A94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_m1CC3012C703D85C7C951AE77DD2B3F5B8E42E918 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_mFAF2429BB4895D0C3AF7C5B981A3C53F440BE6A5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_m29F0A70AA1DAC8624B99E5E213DC4E34036BBF0C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_m21876ACD769677EB12796837397549EACDC6DA1F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_tD2F19E017C9CF5DC6CB5780CDA882089FFE4B99C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_mA9B2F154A856E8EB9B4983E2745FD077BA0D98C3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_tC4ED4AB3E4EEE98679B1412FB4C80C3E4FA16834 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_m496CF2C8A1FAFE63A285C2350D9530A60CC9B463 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_t97E27D9873786614696ED6CB6B7DABF2AFF7DCFF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_m3B2C3C3508065763A6DEE8185CD3507C80EE2159 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_tE0BA0381F29B58D8A0C87FD4F2A4E8DB45DFB48F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_m8812C7F42A79683AC17FBC09A7F04E5E909E3A67 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_t0629EA7E8B063F8817ECAE15F9A75E6F61CA42F0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_m7701FD9664F730DE055F5A80657EBC6BF96BB399 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m904CEC4D13DAB3EC2E63867290A4919B3EE07B94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_m9AEE49A539D4229D6C082363CC4750BC3C7BD959 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_mBEB73D718598A132E3FB38993715F6580F14AAF4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_Capacity_TisFixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_mBFE2EB1E8054BA05932A224E8E5B0B172C76A4E2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Buffer_m4ACFD76E5BAB7BBA3B105EF045FB34DF16925121 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_LengthInBytes_m830026A47AC35E78ACFB4ED8613C4241631C7FB3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_mDC309D74DBDE3857D8CF451A6C61E4DF244DB906 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tD32C0F6209442C9BB65A030D29698147784945B7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_mFFA2BDEF1D5931103F2349F121D89B9EFDA18B2A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_m1B404F21933A0C0E3F4EDB9BDC56FF1374BA36BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_m913F6E9C36DA6E5150201BB04705176C61779A4A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_mAE605CEAEF66638FB3772258684647B86795A026 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_mB4AC876C1C0A6D784950D1DF9D938E8187CC254A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_m709B483E5DEB7FB21FD73055E1D18EFC77CB8D94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_mA84088FDB735E31D8EC68ED7C7241B82F7E382E9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_m72AEE1D5D4DD2A52568A3DB0395D4C6A4450D662 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_tF36F3420B2D85BB09FDA7CBE0B0A59127E7E47B5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_mFA63385DF5A53E2D34A838F6B4D3E5EB93454707 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_t01290055D2315B7FB797137C2585E1D2A8FEFC93 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_m4A58B7E48EC3D1CE4B417CC606F7AF283179CE19 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_t90FF12D54923E198013051CB940E9B9C7747AA0E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_mD426D7F36DA3313161AF4ACB1D163554927B2B5C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_t5A455036DE64718823C34266F43B4B930819650E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_mA3CB277239697E135B80B1652428B650E393E3EF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_t140F024B8BA0DDF7C9A41DFDFE78C7BEECDE6355 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_m676325C656968A3297E0312C5E86C06A021B6A7A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_m0455E51110778F6A133DB6106D4F22A64B989348 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_mDFFBC1AB4195A6724110DE5980F5E23E6FFBD712 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_m69D18CFEBEB2907DF3FAC8CA19E77BE6A657316C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_Capacity_TisFixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_mCCBFF245343A7B36B9527CBA6D9741B77826F0AE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Buffer_m97D30707BB2AEA2F5DBADE3B0FAC8F672E8B1A3D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_LengthInBytes_m47F607A647F86AE5CEE40BB1760159288C68D0BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_mB2C086817BC1745080C475DEF2DC556F31A59D67 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_m2666E22B9261026A0D7D0DDBE9CAF263093BCA3B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m4D4D3FDEAC491E57BF639002CE416C8CAEEAF68B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_mE9957B37908F02DBF2C0FBC8A01F575132266E51 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_m4C2FEAF12A383067066580E5AE042BA1E5E15353 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_m660F2F29958AF880448E6418281CCCEB44F5B7D4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_m437197F791AB58DC99F09DD25DFF430B2F4CFA16 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_m9A5EEBCAC9EB81EA90B9BD7FFB53C8C16795D572 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_m255D7C47599B63B530DEF04B43CD7223D203C6DC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_t3C413D65609876A5C74284892DEE5A0D625FB108 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_m086E1CCF2A8A8917B11F2B64CF7D29C6EE148120 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_t870D9CA977C5EB1DE5E7F03D3EBCDF741429CFD5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_mBF301D370C792F53697A10E96FFDC089205671AE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_tD5CBB33E81228C7A982A8BB36F4C59C6886B72D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_m2CDB0F15DB14C27621333422EF9796AD3D031766 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_tC3D869C52DA776B0E1C9C381FB198A6197EACD87 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_mB57417246E4D25627832638BE91CB141FDF04EA9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_t416541239A6A63A742AD7E9584232B8BAEC559DD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_m23DA07023310D345AD86B3B55A0D2AA231BD7788 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_m0B248C6A39E59A7CC633B8EBB0E2214A7374A24A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_mFAB9277A26B57EEBBD96FBFF9A8E348CDF0F3695 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_m84508C7415A499FE729E49407F30491D8BA1347B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_Capacity_TisFixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_mFF48156C860043812A4CE8D19432EC0D7A50E568 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Buffer_mD366D995A0996A4941BFD8FF7751F8888529019A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_LengthInBytes_mE533117FD90EE225AB1657584FE15D9FCD3B31F6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_mFEB57847565241DE5AC20F3C47DFB1C1FBD77D42 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_m2ED44CE82345E495B02845190DC950E9369F9B66 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m0E56845145169510605A77387713117B1DF42A2D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_m7D404D1A8DCDBFBA6E77CA9A1BAE087DA8BEDB45 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_mC45C102EEA509426C4E25123ACB537AA2E1C8B53 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_m0BE3A1FE674C670F1F163603702EA2EC121C96C0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_mCB87559DEEEFBF43BBE5EDA844844CCB64B12C06 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_mAFB31975A1194980FE703C4FF6157CA124568175 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_m71F5DF9EF41C7A4B6C05EDC77E4AEBD567829F44 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_t16FDC26837A35E8C9EE737B47C5566926DD97D40 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_mFEFB3BF366F96DCEEF8CF0F400F6F6BC865C4EFA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_t692D679ABC650A6E1D639F9B704EBF1C015B7E54 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_mDC81D66D0B81AB0FEBD1F8666E2BB7783FA5ACB8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_t855A409C9DAE10C3B3F003764F360E082BE304C1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_m2A8267A3F7D08EC772B96BE833442B1E5887C72E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_t669FFE3EF2D7972808F85F458A97B36D3B08A302 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_mBDE871330097648822A6964D577DA54C9C62CDE1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_t30D9953988646BADE87AE3D019C1B0BB523F33B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_mDAE776DA9235ED2BD2A75CD0AC265DB954F739E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_mF981B72DCECDB30EBED5ACCC7749B57FE4D25643 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_mDF9CEBCF3A941F23B144FCD20FDA1D094151485F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m866B91A370BB67C092A4B0E5D72A7734F2132F73 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_Capacity_TisFixedBytes4094_t8611441D8BDC6A677C2D9E551086F59EFBFCBBE5_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m365CB7E2D2385EF3C160C60E268D84639982C57A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Buffer_m8C59032AB0882881E308B5310103C4C0C67FE527 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m4521B626F59BBB2321D000869DFCBDC991657E02 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_WriteArrayElement_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m7E4C5808A41558EDB297D03CF1DE6FE52199AA57 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_LengthInBytes_mDD272B4890655CD06ACF62B312C72673B7066DAB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_mE8F8A185DE5BB8CB0BEE9383F387044EC232D30C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tBD073BADADC7386EA705AE4342916B0F07BDACDE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_mDCA60AD837CDD603A14317382F8FE7B7A5332496 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m6B94FC005EB3D868CEC8B0A1A2953929BDB403B9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_m1EE2D74734AD460BFAC1124BEC50F6A7242C157A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_mBEFA2EA7F7D0BDBF7900A55AD4870026F5CDD9E0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_m76A8C7244A78E281DE7D75356C8C98452CC9B973 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_m0FB45017FC642488814B76ED2D5856074D0A2C13 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_m7B2C705430CA47FDBA89E556A4BA14F10B5E62D6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_m48E8E70F5EC08F0B2764E1FA714A0E6B42AD79B3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_t7AAD6CEC30726A322BBECE5EF36547B20FE7474E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_mA097DF642E512753B3F3819A63A991273FB15433 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_tA47527956352165EF643C47FD1BC7C6169E29EBC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_m3F25D402683E10A10CC6E899C3C5F3242C07DE65 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_t79918BA354DF7C9EED2BB2E611792E496C73C747 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_mA57897971800CECFA745EAA611995A129370DE0E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_t3AB2AD5617F05D853E1819914CDD7FE040D0A863 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_m234039E2C015B564CDC7962B8ECA3F6161456BC2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_tDD8407366F29BD7A6221ED46D0353F2A5DEB8D87 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_m79776FC49E1BE2ECE4CD5A12AB1AD9E67199A5B6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t128D4A74C38857567A2488C6CD7C1BA749677358 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t128D4A74C38857567A2488C6CD7C1BA749677358_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t128D4A74C38857567A2488C6CD7C1BA749677358_IUTF8Bytes_TryResize_m42B6D259A45BC13F377FFA6A77393E1B89319CE0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Write_TisT_t128D4A74C38857567A2488C6CD7C1BA749677358_m5B6E47CFAA22B1EB4E5C1C39A067F65B5B48DFA1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_tCACCA4E422C4855D9ED402558E999CB0C2BC720F_mEFC58699E2B44FF5B958EF465B6A020B2273864C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t3719B19A5F40B5A453DFEC1F980F02334CBB37AB },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t3719B19A5F40B5A453DFEC1F980F02334CBB37AB_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t3719B19A5F40B5A453DFEC1F980F02334CBB37AB_IUTF8Bytes_TryResize_m42B6D259A45BC13F377FFA6A77393E1B89319CE0 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t3719B19A5F40B5A453DFEC1F980F02334CBB37AB_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_tFBEF2E899D7E776BACE215E9FC58EE91279D97B8_m39E5F4800AF994D6A510E28AA3269DBFAB97B16A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_t77B0AAC497BABF700242B22D3AE6A9C6281B8BE0_mD6FEC8FEA1CE74E62EBEB56F2CB6F5FEE4969375 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_tD348CE173187A3FC1EFEAC66147EFA803A5A7BE7_m1146627AE0EFBAF0F71AE2A948A73EE8278A97BD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_tD348CE173187A3FC1EFEAC66147EFA803A5A7BE7_mA87C60EC43E296377D5C47614CE7C1EA8581AFB2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_tD348CE173187A3FC1EFEAC66147EFA803A5A7BE7_m7CB5C23C8F0A07EA38D430CA3936F37DB1AB4F68 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_AppendScientific_TisT_tD348CE173187A3FC1EFEAC66147EFA803A5A7BE7_m694ED83E7E9535A2FEEB59695A8C191F7B2120E7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_tD348CE173187A3FC1EFEAC66147EFA803A5A7BE7_m1E88C92AFA2F6FF8987C34B8C5D9F40606372D9D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtilityExtensions_AsRef_TisT2_t32EA74C6914E6CF63B14ADAE219B21DE90DE3FDC_mEACB25F0892A8D2C1017914E9BC224F8AF8A594F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T2_t32EA74C6914E6CF63B14ADAE219B21DE90DE3FDC },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T2_t32EA74C6914E6CF63B14ADAE219B21DE90DE3FDC_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T2_t32EA74C6914E6CF63B14ADAE219B21DE90DE3FDC_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_tAF666238E844771565195E661F0E174E5E0F1867_m66FD19C64582D5837D91409D20FCDECDC11D875A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t394CB326631A38B224E2EF133552EA72F59A5785 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t394CB326631A38B224E2EF133552EA72F59A5785_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t394CB326631A38B224E2EF133552EA72F59A5785_IUTF8Bytes_TryResize_m42B6D259A45BC13F377FFA6A77393E1B89319CE0 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t394CB326631A38B224E2EF133552EA72F59A5785_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtilityExtensions_AsRef_TisU_t48602537A6FE9E3004BEF5A7D69B7EF21D14AC4D_m569B3D2466AB16D01A46A854DEC984928AE96664 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U_t48602537A6FE9E3004BEF5A7D69B7EF21D14AC4D },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_U_t48602537A6FE9E3004BEF5A7D69B7EF21D14AC4D_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_U_t48602537A6FE9E3004BEF5A7D69B7EF21D14AC4D_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_t0B2CC83D0F761DC499149F89688785B96285B7AC_TisT0_t59B18FCD5F3CCEFEDB47008F8CCDA26BFB6D6029_m45531558CF7905106365D44D755E3072CEBDFE0F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_AppendRawByte_TisT_t0B2CC83D0F761DC499149F89688785B96285B7AC_m1EF275E1430AA2106453003EA4F39464EEB60516 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_t07B227D60731A9CE77D375F160017FCA3B9E860D_m50BECEB48BA831E3E4BAD7193B62BE0C845C698A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_tC536ABE50E318DA04463BF2ED1207E56419E196B_m493C6EF7E4A986275B67BA357471125210F2B847 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_tE972552ACA762F93209DEE7815F9664D711F520E_m57F48F4955BEAAED74063D5C11EC9125F1AF093B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_Append_TisT_tDD524902B7254CF8812E71C4E7CD17EBE546A3E8_m2938EBE66C8871E8AF8549FF177ADB2A53BA668B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t40CFE80575C0B3A9E97C1A7DB9A1C99154484193 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t40CFE80575C0B3A9E97C1A7DB9A1C99154484193_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t40CFE80575C0B3A9E97C1A7DB9A1C99154484193_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtilityExtensions_AsRef_TisT2_t2BAE730EBE1EFEDF9B51E00473183A8664C69200_m61DFED76CEE5300C00F730592D7972436A60570F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T2_t2BAE730EBE1EFEDF9B51E00473183A8664C69200 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T2_t2BAE730EBE1EFEDF9B51E00473183A8664C69200_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T2_t2BAE730EBE1EFEDF9B51E00473183A8664C69200_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedStringMethods_CompareTo_TisT_t44578AF0C73EE30B7AE87E0F1E82A995DF6FEBCA_m1F12FF739B81A47680F8F08CA3AB5E03308601C8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tEA019B08712E2CAE787B21AFA982788BF07899CA },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tEA019B08712E2CAE787B21AFA982788BF07899CA_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tEA019B08712E2CAE787B21AFA982788BF07899CA_INativeList_1_get_Capacity_mF5B445EAD5F226F5E8C3B2DDF4B8C35EFBB40C4C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tD92B3110D590A5F2CBCE2D8750D7F0E6FB6C1D34 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tD92B3110D590A5F2CBCE2D8750D7F0E6FB6C1D34_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tD92B3110D590A5F2CBCE2D8750D7F0E6FB6C1D34_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t0720BD109D0FD7DCF11AF76ED4D7B452221C1557 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t0720BD109D0FD7DCF11AF76ED4D7B452221C1557_IUTF8Bytes_GetUnsafePtr_mB67E683E33AA89AB66BB1187E74C99A53EFEBED1 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t0720BD109D0FD7DCF11AF76ED4D7B452221C1557_IIndexable_1_get_Length_mAED3EB7DD75EF7C1E601F6DEA790BEF4B7C8E2EA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Array_Resize_TisT_tA7BC8A9B01B94F56CE3273E1C3F4463BAFDB2774_m40E5359FE293594F47DD50DDB1F2AD213B4A709A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954_mD44E7FDD63803D509A5BB08B506B82CA121DF38A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AlignOf_TisT_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954_mD999DEAF969B234226FD5F050A1A8DF99545F7FC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeListUnsafeUtility_GetUnsafeReadOnlyPtr_TisT_t340BB4BE22E9CA5793ABD358E65F76E06EEE670B_m86D129B7F6E2A0FEB5E9601382BFB4DE7C301953 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeList_1_get_Length_mE7CED0ECF35224EA73CC9ABDA8F9F739C45E599F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeArrayExtensions_IndexOf_TisT_t340BB4BE22E9CA5793ABD358E65F76E06EEE670B_TisU_t6EAD6496BD94F27E87A2E7A37B6F85200A6A2811_m90B2FF04D5A2ABB0BE9D28612E6374AA9C6422E9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisT_t09DC94586A2FDECDAB68AB50CA4DFDBCC556F52C_m6BD5970A2696B8AF321330715F8E3C1540680FAE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t09DC94586A2FDECDAB68AB50CA4DFDBCC556F52C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEquatable_1_t0CFAE6010DDC5EEFA3D8CD8FA44AE16BF6AF174C },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t09DC94586A2FDECDAB68AB50CA4DFDBCC556F52C_IEquatable_1_Equals_m12D2D9D3C150139969DBE87730D6E4452F6D58AB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisT_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5_mCD78204D5334495A64D5596132C3B8DF63A9ADFB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5_m73DED6813E12309EE3307BDC06E7D267D3029682 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeHashMap_2__ctor_m477E96F08615F8EF61D599D2EF3406D24AF95BE2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnsafeHashMap_2_tF3FE093304BF7E939999457F5E224165140D43D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2__ctor_m42C2CD6C2AE9326BFF66FA507C04417FD8CBFC9A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_TryAdd_m82D6EEBD6097A7DC5C5E9937FCD9F624F02E15A7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_TryGetValue_m90448100C89F021A29C76F693FD8BC1DB8946E0F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_ContainsKey_m00C7BED6B375F6C3819971EC61283F58BF182175 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_Dispose_mC0C1DAD8C9D4E220484DAC753C1A40CB019DB9F4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_NativeHashMap_2_tAEF305DA2FA456149C8F02ACE3D3B52146530E91 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeHashMap_2__ctor_m92C94AF69B198508A87FC13755D28368F320FF28 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeHashMap_2_Dispose_m47A6D2F27D0B47B5798CE4AFD4887635BF9A0A3F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeHashMap_2_TryAdd_m0F44C00E6A726884EF9FD7C9B1B69714B4D10050 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeHashMap_2_ContainsKey_m9194A7E469F30CD90168BC7EE4969FB07456BC11 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeList_1__ctor_mFC02027D535FF8FA6DA0D2F3FF28BE9C3C22FA0D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnsafeList_1_t62C841C6D06562004B617CB8FEB154768A22A448 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeList_1_Initialize_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mDA27076ECD04FDDCE4F08EC240944ED85C58EA1F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_get_Item_m3A75728B303CDC6919167D5BFCD56D9BAE755F4A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_set_Item_m55F6D1F1AE6B627E9916AC7867161D4DFA6EB267 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_ElementAt_m94F2861AED0CAABDD863BF768BD5B41FE0A10976 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_get_Length_mBB48D1B7E16C1A3EFC1FECFAE979F4AC003C5BA7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Resize_m877B9B1A6AA00562D5D52E78696C5B2364FCB296 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_get_Capacity_m7CEDBD1C464E131C4BA666F0BE92ED8747465B1D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Add_m31E9C9CB6476E5AF889F68A699B2DE541626AE2D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_InsertRangeWithBeginEnd_m124A00651AD640BCE5EE0FC32A2E7BB38F706F0B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_RemoveAt_m8E84B72BBF49287163A0716AC74C07A268F63AB5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Destroy_m4365069A2F94BC7B50074F5C3C23A35769947475 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Clear_m763F409F9070AAB6B2E20A3952CED497999D10B5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeList_1_AsArray_mF7F649295B1EB59DCF87D80023CDC9825B535243 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisT_t86F43EBF284E6FC6FD87B54AE593FF12A96EACEA_m30203C993DF4EFC52F1B6D61B11B1BE1438DC7A0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_tA55E226E9D7AB26F044B58ECE28F8B79A8215FB6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator__ctor_mD2EFC009587810FA50EDBA17918DE09FF1A0D3E8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeList_1_Resize_m2DA751BFAA461CD57325BF1C6766FBF50AE0E384 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Create_TisU_t8D9513FF7045C2A2417339533F96C0B604BC6DE3_m87141D5D82ED170DBB65F3C443132ABE0C2B143E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U_t8D9513FF7045C2A2417339533F96C0B604BC6DE3 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_U_t8D9513FF7045C2A2417339533F96C0B604BC6DE3_IAllocator_get_Handle_m54F384A4E6B7365849D3462AA309C77F8D9E9E6C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tE7A8D70110B92235F62517F896A32C02F63FA103_m65384FF867A28977606B44C52A465279757EDCDD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeQueueData_AllocateQueue_TisT_tB1D82A0A8EDB98867BDD6CCBD9C7401F3C1E7AC2_mAE39CD87FEFCC4C6FD7ED75BAFEF28B0C8EF7B2B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeQueueData_AllocateWriteBlockMT_TisT_tB1D82A0A8EDB98867BDD6CCBD9C7401F3C1E7AC2_mEA2A377DD7A2FEA64747F068DEF60A754790A09D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_WriteArrayElement_TisT_tB1D82A0A8EDB98867BDD6CCBD9C7401F3C1E7AC2_m83CBA12C8E9613562A23548D169AD7C4A9CA7336 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisT_tB1D82A0A8EDB98867BDD6CCBD9C7401F3C1E7AC2_m040798FFC1D1A9E64F1E0986F32FBCC6B6B8B116 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeQueueData_AllocateWriteBlockMT_TisT_tE8BB381867704C003338C575568A7F879227D8C8_m1863E40F24BA4CBBF5E025EB6EF11379AFD8CD2D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_WriteArrayElement_TisT_tE8BB381867704C003338C575568A7F879227D8C8_mC90B667D921AF8365127F9131BC9E61B578A52DA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeReference_1_Allocate_m5A290B745BFCD56688446E04A807A6E6B79FB832 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_NativeReference_1_tDE51FD94D7756BF26363CAAFD78F564BC0346FEB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t6DC8D4611200E21BAEF642248669B9D77E9D8F25_mDF3C421D4340F267E62959249A7DD21E8E14913B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AlignOf_TisT_t6DC8D4611200E21BAEF642248669B9D77E9D8F25_m945EEC48A6604717EEDD0EF4CAEC6CF46277EC47 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeReference_1_get_Value_m05951CED8688A4C020D9EBCE4417D75D9503BB35 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t6DC8D4611200E21BAEF642248669B9D77E9D8F25 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t6DC8D4611200E21BAEF642248669B9D77E9D8F25_Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_NativeReference_1_tDE51FD94D7756BF26363CAAFD78F564BC0346FEB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeReference_1_Equals_mB4815FD0D415028A7B31B84DB1906D9D38BD7BF7 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t6DC8D4611200E21BAEF642248669B9D77E9D8F25_Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Unmanaged_Free_TisT_t5BC8A3A1143355B7F5A74A86A9F4AD760F016F3F_m80B9E4D5EF4A9B36865D150DF2BAEA934AF4B721 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t5BC8A3A1143355B7F5A74A86A9F4AD760F016F3F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapData_CalculateDataSize_TisTKey_t17EF52075FE7CA15560F301DE64E24AF43EA4F19_TisTValue_tBE70E8EE37E320734C25647D0F2B7CF66DB91B7B_m7F82433F8ECB937C94A0FAA97605F8B8DC1891FB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapData_CalculateDataSize_TisTKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_TisTValue_tE31A0268C733C505F35CBD443D14CFD991A47665_m0F9FF1F554484D74178201235DFB11BF53A330D4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisTValue_tE31A0268C733C505F35CBD443D14CFD991A47665_mD8181BC37B8E3A5AD60C1735D4A39D71B671B8B1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisTKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_m39A76C9B0B357A658674F1232E506CD56D37C717 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisTKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_m83DC3D795D62AB43EAF6609FEB0032B85AD6E66C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisTValue_t9BEA98065AE85235E2502C5AB0E884FF03C5668F_m6658D3E9BFDC6692972806096D0F143B26CD391A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisTKey_t5F28BA1D306AB8FE2AB2CC71D717C5AEE8486A37_m20D9E73F25A80D1F7774C3A532F7293CAAC95E20 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisTKey_t01ADD782F682217A566855FEDB600569A9B650E4_m5A50D233A0BB29566FFC733C2E63931D804984B4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_TryGetFirstValueAtomic_m891CD2EBFDF79454075F9535E0F2391A485A0A7F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnsafeHashMapBase_2_t809E38EA5ABFD4D49660AB06422F98F857C0906A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapData_ReallocateHashMap_TisTKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_TisTValue_tAFA2E425E810A436A283BAD02D7F0BB9E9C72BBA_mEC224ECD6DB5E7E62F714929AF508A4C6E8399AE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_WriteArrayElement_TisTKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_m3DF15E715908753378C09947055FA017C869E1A0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_WriteArrayElement_TisTValue_tAFA2E425E810A436A283BAD02D7F0BB9E9C72BBA_m306DE1B20DB1836CC66599BD5481E597D4F864CE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisTKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_m292884B367F1D587D4881715B25D4F31509374A3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEquatable_1_t230BC9DF3CC331AD0B7EB67722AF2C2474170EC0 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_IEquatable_1_Equals_mE86769881C8CC395B52D9F9CA8E363EE1D857DA2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_TryGetNextValueAtomic_mE01538BDEB8A97C70A5ED3E0C23BE6DD2346E576 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisTValue_tAFA2E425E810A436A283BAD02D7F0BB9E9C72BBA_mDAFD4F9EF96D5299709CF4F978AAB092233CE927 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapData_AllocateHashMap_TisTKey_t9956810BF50C2A9F06E26DAA0F2BA3122F4B1E98_TisTValue_t1811826E5E497EF68E35EF1EEBCA743E7CDB0003_mAC824AA05DC02873672ECCB1BCE2578F52F815DE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_Clear_m9D40221AC7B584D82E611989EFC5E32D54ABBF8F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_Clear_mB442EA4307DDAC3DFFEBD74F323FA5518E53350F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnsafeHashMapBase_2_t62F134250F10223C807DAB4EACA0AD4809E0DF8C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_TryAdd_m2FE941906C9E69169A4930B1ACC95EFCBA420FD1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_Remove_m8147EFFB572F3E7962804F33CB317D07287E3AA7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_TryGetFirstValueAtomic_m08E1BC1E329FCA1586B4525A4D5B10C6E09B5B7F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_TryGetValue_mBD27010BEF6E3F67BA65E1A198531F291CC26F0C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_SetValue_mA9A6DE16AF11EDA580A1979C36D168C3749AD051 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CollectionHelper_CreateNativeArray_TisTKey_t9956810BF50C2A9F06E26DAA0F2BA3122F4B1E98_m26D5B6D1B19058FD9DE0682ACE8869CC04B4FD28 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapData_GetKeyArray_TisTKey_t9956810BF50C2A9F06E26DAA0F2BA3122F4B1E98_m656BB85EC110A42528828186A7C241D451690EEE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_get_Capacity_mE30AE2BB42DF086225C6BEEACED7A1E66EAC91ED },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Resize_mD2E7D06E288A389059211E1D82BA7DB35F3AF301 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t6368C7377A351E8DAE030B3776E2EAB48430F6A1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_SetCapacity_mC9FF72A63AF11927A72AFC4491824A38C3741104 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnsafeList_1_t620A94D0181E3DFEF514032D62F7285F783817BF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Dispose_mA9C46557DD7D143A317FDF3F55E3DB921A44125C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Free_TisUnsafeList_1_t620A94D0181E3DFEF514032D62F7285F783817BF_m10CA4CD105BFD216034DA9E1E453483651FF7BA7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Free_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_m3380E20A35AE021576F755FA3B86CE60AC955DAB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AlignOf_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_m541A7459A8FD164187328166064C4404C9CB1247 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_SetCapacity_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mB514D6019190B92124D1A238FB222C812F7CC09F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_WriteArrayElement_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_mA94F2BC0DE06EB1D0025E0C41B8513CADC008966 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_RemoveRange_mAB0C70CA65697E6ED03BD83841B322153EF340F1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Allocate_TisU_t00C790F8C500DC1C444D4422A52F657E0858DB7D_TisUnsafeList_1_t620A94D0181E3DFEF514032D62F7285F783817BF_m33A1C62888A2F0358171DBBB13F92E1995C3982D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U_t00C790F8C500DC1C444D4422A52F657E0858DB7D },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_U_t00C790F8C500DC1C444D4422A52F657E0858DB7D_IAllocator_get_Handle_m54F384A4E6B7365849D3462AA309C77F8D9E9E6C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_SetCapacity_TisU_t00C790F8C500DC1C444D4422A52F657E0858DB7D_mED87DE5A2866AD2610DF962DDD2B32565BE50175 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Allocate_TisU_tD4E7F950E65E51D0FFB646539AFA97213F18FDCB_m3424B5B28B4777480531ABD6CCCBF82C251F0D46 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Free_TisU_tD4E7F950E65E51D0FFB646539AFA97213F18FDCB_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_m54F51F8A7FBB83F8306F70DA0A131C06A38E6706 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Realloc_TisU_t74C7EABD355F620088583D354F66E077F74C2116_m601210D03B7815AC3291C90C7517E1FCEB210612 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafePtrListTExtensions_ListData_TisT_tF8E99804EEF94B935A6FD2688DEB26291A2D108B_m0C30F69A257596D0DE5875BCEFD7A6A5F3DAFE05 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU2A_tF6D46589EF3AD0664B1484E566D4B3B6DC192805 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_As_TisUnsafePtrList_1_t0D911C4E1640779BB8BDFEA11F4CAB84E558AF25_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mDF68B5FE092DAD9082374AB097B30857FFBAFAA5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ILSupport_AddressOf_TisT_tCF8995A642FF6C6B39489CC54F7B7FB179DD8EB7_m61251B4786FAAD41BD9A3A4555501786A9759290 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ILSupport_AsRef_TisT_t1AD28EB9FB4F1EE8B862A47B00FCA3990142BEFB_m71FC67ABC68632F08CDF5CCB9EA51989EA7F388A },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Collections_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Collections_CodeGenModule = 
{
	"Unity.Collections.dll",
	555,
	s_methodPointers,
	144,
	s_adjustorThunks,
	s_InvokerIndices,
	6,
	s_reversePInvokeIndices,
	64,
	s_rgctxIndices,
	332,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
