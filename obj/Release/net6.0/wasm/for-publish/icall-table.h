#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
174,
179,
180,
181,
182,
183,
184,
185,
186,
187,
190,
191,
280,
281,
283,
306,
307,
308,
318,
319,
320,
321,
322,
389,
390,
391,
394,
426,
427,
429,
431,
433,
435,
440,
448,
449,
450,
451,
452,
453,
454,
455,
456,
457,
559,
560,
567,
570,
572,
577,
578,
580,
581,
585,
586,
587,
588,
590,
591,
592,
595,
596,
599,
600,
601,
663,
664,
666,
674,
675,
676,
677,
678,
682,
683,
684,
685,
686,
687,
689,
690,
691,
693,
694,
695,
697,
886,
1038,
1039,
5363,
5364,
5366,
5367,
5368,
5369,
5370,
5372,
5374,
5376,
5377,
5385,
5387,
5391,
5392,
5394,
5396,
5398,
5410,
5419,
5420,
5422,
5423,
5424,
5425,
5426,
5428,
5430,
6269,
6273,
6275,
6276,
6277,
6278,
6322,
6323,
6324,
6339,
6340,
6341,
6342,
6373,
6416,
6426,
6427,
6428,
6676,
6678,
6679,
6703,
6704,
6705,
6719,
6725,
6732,
6742,
6745,
6814,
6820,
6821,
6822,
6823,
6829,
6842,
6862,
6863,
6871,
6873,
6880,
6881,
6884,
6886,
6891,
6897,
6898,
6905,
6907,
6917,
6920,
6921,
6922,
6932,
6943,
6949,
6950,
6951,
6953,
6954,
6964,
6982,
6995,
7014,
7041,
7042,
7380,
7510,
7687,
7688,
7691,
7694,
7743,
7895,
7896,
8979,
8998,
9005,
9006,
9008,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 174,
ves_icall_System_Array_InternalCreate,
// token 179,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 180,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 181,
ves_icall_System_Array_CanChangePrimitive,
// token 182,
ves_icall_System_Array_FastCopy_raw,
// token 183,
ves_icall_System_Array_GetLength_raw,
// token 184,
ves_icall_System_Array_GetLowerBound_raw,
// token 185,
ves_icall_System_Array_GetGenericValue_icall,
// token 186,
ves_icall_System_Array_GetValueImpl_raw,
// token 187,
ves_icall_System_Array_SetGenericValue_icall,
// token 190,
ves_icall_System_Array_SetValueImpl_raw,
// token 191,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 280,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 281,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 283,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 306,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 307,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 308,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 318,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 319,
ves_icall_System_Enum_ToObject_raw,
// token 320,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 321,
ves_icall_System_Enum_get_underlying_type_raw,
// token 322,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 389,
ves_icall_System_Environment_get_ProcessorCount,
// token 390,
ves_icall_System_Environment_get_TickCount,
// token 391,
ves_icall_System_Environment_get_TickCount64,
// token 394,
ves_icall_System_Environment_FailFast_raw,
// token 426,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 427,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 429,
ves_icall_System_GC_SuppressFinalize_raw,
// token 431,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 433,
ves_icall_System_GC_GetGCMemoryInfo,
// token 435,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 440,
ves_icall_System_Object_MemberwiseClone_raw,
// token 448,
ves_icall_System_Math_Abs_double,
// token 449,
ves_icall_System_Math_Ceiling,
// token 450,
ves_icall_System_Math_Cos,
// token 451,
ves_icall_System_Math_Floor,
// token 452,
ves_icall_System_Math_Log10,
// token 453,
ves_icall_System_Math_Pow,
// token 454,
ves_icall_System_Math_Sin,
// token 455,
ves_icall_System_Math_Sqrt,
// token 456,
ves_icall_System_Math_Tan,
// token 457,
ves_icall_System_Math_ModF,
// token 559,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 560,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 567,
ves_icall_RuntimeType_make_array_type_raw,
// token 570,
ves_icall_RuntimeType_make_byref_type_raw,
// token 572,
ves_icall_RuntimeType_MakePointerType_raw,
// token 577,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 578,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 580,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 581,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 585,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 586,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 587,
ves_icall_System_RuntimeType_getFullName_raw,
// token 588,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 590,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 591,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 592,
ves_icall_RuntimeType_GetFields_native_raw,
// token 595,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 596,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 599,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 600,
ves_icall_RuntimeType_get_Name_raw,
// token 601,
ves_icall_RuntimeType_get_Namespace_raw,
// token 663,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 664,
ves_icall_reflection_get_token_raw,
// token 666,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 674,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 675,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 676,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 677,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 678,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 682,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 683,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 684,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 685,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 686,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 687,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 689,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 690,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 691,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 693,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 694,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 695,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 697,
ves_icall_System_String_FastAllocateString_raw,
// token 886,
ves_icall_System_Type_internal_from_handle_raw,
// token 1038,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1039,
ves_icall_System_ValueType_Equals_raw,
// token 5363,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5364,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5366,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5367,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5368,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5369,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5370,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5372,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5374,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5376,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5377,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 5385,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5387,
mono_monitor_exit_icall_raw,
// token 5391,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5392,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5394,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5396,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5398,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5410,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5419,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5420,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5422,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5423,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5424,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5425,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5426,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5428,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5430,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6269,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6273,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6275,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6276,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6277,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6278,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6322,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6323,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6324,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6339,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6340,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6341,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6342,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 6373,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6416,
mono_object_hash_icall_raw,
// token 6426,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6427,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6428,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6676,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6678,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6679,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6703,
mono_digest_get_public_token,
// token 6704,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6705,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 6719,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6725,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6732,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6742,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6745,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6814,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6820,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 6821,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 6822,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 6823,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6829,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6842,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6862,
ves_icall_reflection_get_token_raw,
// token 6863,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6871,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6873,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6880,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6881,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6884,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6886,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6891,
ves_icall_reflection_get_token_raw,
// token 6897,
ves_icall_get_method_info_raw,
// token 6898,
ves_icall_get_method_attributes,
// token 6905,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6907,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6917,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6920,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6921,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6922,
ves_icall_reflection_get_token_raw,
// token 6932,
ves_icall_InternalInvoke_raw,
// token 6943,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6949,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6950,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6951,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6953,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6954,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6964,
ves_icall_InternalInvoke_raw,
// token 6982,
ves_icall_reflection_get_token_raw,
// token 6995,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7014,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7041,
ves_icall_reflection_get_token_raw,
// token 7042,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7380,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7510,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7687,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7688,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7691,
ves_icall_ModuleBuilder_getToken_raw,
// token 7694,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7743,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7895,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7896,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8979,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8998,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9005,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 9006,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9008,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
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
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
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
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
