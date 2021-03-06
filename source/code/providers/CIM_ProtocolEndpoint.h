/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_ProtocolEndpoint_h
#define _CIM_ProtocolEndpoint_h

#include <MI.h>
#include "CIM_ServiceAccessPoint.h"
#include "CIM_ConcreteJob.h"

/*
**==============================================================================
**
** CIM_ProtocolEndpoint [CIM_ProtocolEndpoint]
**
** Keys:
**    Name
**    SystemCreationClassName
**    SystemName
**    CreationClassName
**
**==============================================================================
*/

typedef struct _CIM_ProtocolEndpoint /* extends CIM_ServiceAccessPoint */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_ManagedSystemElement properties */
    MI_ConstDatetimeField InstallDate;
    /*KEY*/ MI_ConstStringField Name;
    MI_ConstUint16AField OperationalStatus;
    MI_ConstStringAField StatusDescriptions;
    MI_ConstStringField Status;
    MI_ConstUint16Field HealthState;
    MI_ConstUint16Field CommunicationStatus;
    MI_ConstUint16Field DetailedStatus;
    MI_ConstUint16Field OperatingStatus;
    MI_ConstUint16Field PrimaryStatus;
    /* CIM_LogicalElement properties */
    /* CIM_EnabledLogicalElement properties */
    MI_ConstUint16Field EnabledState;
    MI_ConstStringField OtherEnabledState;
    MI_ConstUint16Field RequestedState;
    MI_ConstUint16Field EnabledDefault;
    MI_ConstDatetimeField TimeOfLastStateChange;
    MI_ConstUint16AField AvailableRequestedStates;
    MI_ConstUint16Field TransitioningToState;
    /* CIM_ServiceAccessPoint properties */
    /*KEY*/ MI_ConstStringField SystemCreationClassName;
    /*KEY*/ MI_ConstStringField SystemName;
    /*KEY*/ MI_ConstStringField CreationClassName;
    /* CIM_ProtocolEndpoint properties */
    MI_ConstStringField NameFormat;
    MI_ConstUint16Field ProtocolType;
    MI_ConstUint16Field ProtocolIFType;
    MI_ConstStringField OtherTypeDescription;
}
CIM_ProtocolEndpoint;

typedef struct _CIM_ProtocolEndpoint_Ref
{
    CIM_ProtocolEndpoint* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_ProtocolEndpoint_Ref;

typedef struct _CIM_ProtocolEndpoint_ConstRef
{
    MI_CONST CIM_ProtocolEndpoint* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_ProtocolEndpoint_ConstRef;

typedef struct _CIM_ProtocolEndpoint_Array
{
    struct _CIM_ProtocolEndpoint** data;
    MI_Uint32 size;
}
CIM_ProtocolEndpoint_Array;

typedef struct _CIM_ProtocolEndpoint_ConstArray
{
    struct _CIM_ProtocolEndpoint MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_ProtocolEndpoint_ConstArray;

typedef struct _CIM_ProtocolEndpoint_ArrayRef
{
    CIM_ProtocolEndpoint_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_ProtocolEndpoint_ArrayRef;

typedef struct _CIM_ProtocolEndpoint_ConstArrayRef
{
    CIM_ProtocolEndpoint_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_ProtocolEndpoint_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_ProtocolEndpoint_rtti;

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Construct(
    CIM_ProtocolEndpoint* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_ProtocolEndpoint_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clone(
    const CIM_ProtocolEndpoint* self,
    CIM_ProtocolEndpoint** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_ProtocolEndpoint_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_ProtocolEndpoint_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Destruct(CIM_ProtocolEndpoint* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Delete(CIM_ProtocolEndpoint* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Post(
    const CIM_ProtocolEndpoint* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_InstanceID(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_InstanceID(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_InstanceID(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_Caption(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_Caption(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_Caption(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_Description(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_Description(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_Description(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_ElementName(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_ElementName(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_ElementName(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_InstallDate(
    CIM_ProtocolEndpoint* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->InstallDate)->value = x;
    ((MI_DatetimeField*)&self->InstallDate)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_InstallDate(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->InstallDate, 0, sizeof(self->InstallDate));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_Name(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_Name(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_Name(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_OperationalStatus(
    CIM_ProtocolEndpoint* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_OperationalStatus(
    CIM_ProtocolEndpoint* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_OperationalStatus(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_StatusDescriptions(
    CIM_ProtocolEndpoint* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_StatusDescriptions(
    CIM_ProtocolEndpoint* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_StatusDescriptions(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_Status(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_Status(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_Status(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_HealthState(
    CIM_ProtocolEndpoint* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->HealthState)->value = x;
    ((MI_Uint16Field*)&self->HealthState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_HealthState(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->HealthState, 0, sizeof(self->HealthState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_CommunicationStatus(
    CIM_ProtocolEndpoint* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->CommunicationStatus)->value = x;
    ((MI_Uint16Field*)&self->CommunicationStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_CommunicationStatus(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->CommunicationStatus, 0, sizeof(self->CommunicationStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_DetailedStatus(
    CIM_ProtocolEndpoint* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->DetailedStatus)->value = x;
    ((MI_Uint16Field*)&self->DetailedStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_DetailedStatus(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->DetailedStatus, 0, sizeof(self->DetailedStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_OperatingStatus(
    CIM_ProtocolEndpoint* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->OperatingStatus)->value = x;
    ((MI_Uint16Field*)&self->OperatingStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_OperatingStatus(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->OperatingStatus, 0, sizeof(self->OperatingStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_PrimaryStatus(
    CIM_ProtocolEndpoint* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PrimaryStatus)->value = x;
    ((MI_Uint16Field*)&self->PrimaryStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_PrimaryStatus(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->PrimaryStatus, 0, sizeof(self->PrimaryStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_EnabledState(
    CIM_ProtocolEndpoint* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->EnabledState)->value = x;
    ((MI_Uint16Field*)&self->EnabledState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_EnabledState(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->EnabledState, 0, sizeof(self->EnabledState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_OtherEnabledState(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_OtherEnabledState(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_OtherEnabledState(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        15);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_RequestedState(
    CIM_ProtocolEndpoint* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->RequestedState)->value = x;
    ((MI_Uint16Field*)&self->RequestedState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_RequestedState(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->RequestedState, 0, sizeof(self->RequestedState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_EnabledDefault(
    CIM_ProtocolEndpoint* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->EnabledDefault)->value = x;
    ((MI_Uint16Field*)&self->EnabledDefault)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_EnabledDefault(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->EnabledDefault, 0, sizeof(self->EnabledDefault));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_TimeOfLastStateChange(
    CIM_ProtocolEndpoint* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->TimeOfLastStateChange)->value = x;
    ((MI_DatetimeField*)&self->TimeOfLastStateChange)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_TimeOfLastStateChange(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->TimeOfLastStateChange, 0, sizeof(self->TimeOfLastStateChange));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_AvailableRequestedStates(
    CIM_ProtocolEndpoint* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        19,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_AvailableRequestedStates(
    CIM_ProtocolEndpoint* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        19,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_AvailableRequestedStates(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        19);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_TransitioningToState(
    CIM_ProtocolEndpoint* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->TransitioningToState)->value = x;
    ((MI_Uint16Field*)&self->TransitioningToState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_TransitioningToState(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->TransitioningToState, 0, sizeof(self->TransitioningToState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_SystemCreationClassName(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        21,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_SystemCreationClassName(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        21,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_SystemCreationClassName(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        21);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_SystemName(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        22,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_SystemName(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        22,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_SystemName(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        22);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_CreationClassName(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        23,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_CreationClassName(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        23,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_CreationClassName(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        23);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_NameFormat(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        24,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_NameFormat(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        24,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_NameFormat(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        24);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_ProtocolType(
    CIM_ProtocolEndpoint* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->ProtocolType)->value = x;
    ((MI_Uint16Field*)&self->ProtocolType)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_ProtocolType(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->ProtocolType, 0, sizeof(self->ProtocolType));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_ProtocolIFType(
    CIM_ProtocolEndpoint* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->ProtocolIFType)->value = x;
    ((MI_Uint16Field*)&self->ProtocolIFType)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_ProtocolIFType(
    CIM_ProtocolEndpoint* self)
{
    memset((void*)&self->ProtocolIFType, 0, sizeof(self->ProtocolIFType));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Set_OtherTypeDescription(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        27,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_SetPtr_OtherTypeDescription(
    CIM_ProtocolEndpoint* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        27,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_Clear_OtherTypeDescription(
    CIM_ProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        27);
}

/*
**==============================================================================
**
** CIM_ProtocolEndpoint.RequestStateChange()
**
**==============================================================================
*/

typedef struct _CIM_ProtocolEndpoint_RequestStateChange
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstUint16Field RequestedState;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
    /*IN*/ MI_ConstDatetimeField TimeoutPeriod;
}
CIM_ProtocolEndpoint_RequestStateChange;

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_RequestStateChange_Set_MIReturn(
    CIM_ProtocolEndpoint_RequestStateChange* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_RequestStateChange_Clear_MIReturn(
    CIM_ProtocolEndpoint_RequestStateChange* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_RequestStateChange_Set_RequestedState(
    CIM_ProtocolEndpoint_RequestStateChange* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->RequestedState)->value = x;
    ((MI_Uint16Field*)&self->RequestedState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_RequestStateChange_Clear_RequestedState(
    CIM_ProtocolEndpoint_RequestStateChange* self)
{
    memset((void*)&self->RequestedState, 0, sizeof(self->RequestedState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_RequestStateChange_Set_Job(
    CIM_ProtocolEndpoint_RequestStateChange* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_RequestStateChange_SetPtr_Job(
    CIM_ProtocolEndpoint_RequestStateChange* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_RequestStateChange_Clear_Job(
    CIM_ProtocolEndpoint_RequestStateChange* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_RequestStateChange_Set_TimeoutPeriod(
    CIM_ProtocolEndpoint_RequestStateChange* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->TimeoutPeriod)->value = x;
    ((MI_DatetimeField*)&self->TimeoutPeriod)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_ProtocolEndpoint_RequestStateChange_Clear_TimeoutPeriod(
    CIM_ProtocolEndpoint_RequestStateChange* self)
{
    memset((void*)&self->TimeoutPeriod, 0, sizeof(self->TimeoutPeriod));
    return MI_RESULT_OK;
}


/*
**==============================================================================
**
** CIM_ProtocolEndpoint_Class
**
**==============================================================================
*/

#ifdef __cplusplus
# include <micxx/micxx.h>

MI_BEGIN_NAMESPACE

class CIM_ProtocolEndpoint_Class : public CIM_ServiceAccessPoint_Class
{
public:
    
    typedef CIM_ProtocolEndpoint Self;
    
    CIM_ProtocolEndpoint_Class() :
        CIM_ServiceAccessPoint_Class(&CIM_ProtocolEndpoint_rtti)
    {
    }
    
    CIM_ProtocolEndpoint_Class(
        const CIM_ProtocolEndpoint* instanceName,
        bool keysOnly) :
        CIM_ServiceAccessPoint_Class(
            &CIM_ProtocolEndpoint_rtti,
            &instanceName->__instance,
            keysOnly)
    {
    }
    
    CIM_ProtocolEndpoint_Class(
        const MI_ClassDecl* clDecl,
        const MI_Instance* instance,
        bool keysOnly) :
        CIM_ServiceAccessPoint_Class(clDecl, instance, keysOnly)
    {
    }
    
    CIM_ProtocolEndpoint_Class(
        const MI_ClassDecl* clDecl) :
        CIM_ServiceAccessPoint_Class(clDecl)
    {
    }
    
    CIM_ProtocolEndpoint_Class& operator=(
        const CIM_ProtocolEndpoint_Class& x)
    {
        CopyRef(x);
        return *this;
    }
    
    CIM_ProtocolEndpoint_Class(
        const CIM_ProtocolEndpoint_Class& x) :
        CIM_ServiceAccessPoint_Class(x)
    {
    }

    static const MI_ClassDecl* GetClassDecl()
    {
        return &CIM_ProtocolEndpoint_rtti;
    }

    //
    // CIM_ProtocolEndpoint_Class.NameFormat
    //
    
    const Field<String>& NameFormat() const
    {
        const size_t n = offsetof(Self, NameFormat);
        return GetField<String>(n);
    }
    
    void NameFormat(const Field<String>& x)
    {
        const size_t n = offsetof(Self, NameFormat);
        GetField<String>(n) = x;
    }
    
    const String& NameFormat_value() const
    {
        const size_t n = offsetof(Self, NameFormat);
        return GetField<String>(n).value;
    }
    
    void NameFormat_value(const String& x)
    {
        const size_t n = offsetof(Self, NameFormat);
        GetField<String>(n).Set(x);
    }
    
    bool NameFormat_exists() const
    {
        const size_t n = offsetof(Self, NameFormat);
        return GetField<String>(n).exists ? true : false;
    }
    
    void NameFormat_clear()
    {
        const size_t n = offsetof(Self, NameFormat);
        GetField<String>(n).Clear();
    }

    //
    // CIM_ProtocolEndpoint_Class.ProtocolType
    //
    
    const Field<Uint16>& ProtocolType() const
    {
        const size_t n = offsetof(Self, ProtocolType);
        return GetField<Uint16>(n);
    }
    
    void ProtocolType(const Field<Uint16>& x)
    {
        const size_t n = offsetof(Self, ProtocolType);
        GetField<Uint16>(n) = x;
    }
    
    const Uint16& ProtocolType_value() const
    {
        const size_t n = offsetof(Self, ProtocolType);
        return GetField<Uint16>(n).value;
    }
    
    void ProtocolType_value(const Uint16& x)
    {
        const size_t n = offsetof(Self, ProtocolType);
        GetField<Uint16>(n).Set(x);
    }
    
    bool ProtocolType_exists() const
    {
        const size_t n = offsetof(Self, ProtocolType);
        return GetField<Uint16>(n).exists ? true : false;
    }
    
    void ProtocolType_clear()
    {
        const size_t n = offsetof(Self, ProtocolType);
        GetField<Uint16>(n).Clear();
    }

    //
    // CIM_ProtocolEndpoint_Class.ProtocolIFType
    //
    
    const Field<Uint16>& ProtocolIFType() const
    {
        const size_t n = offsetof(Self, ProtocolIFType);
        return GetField<Uint16>(n);
    }
    
    void ProtocolIFType(const Field<Uint16>& x)
    {
        const size_t n = offsetof(Self, ProtocolIFType);
        GetField<Uint16>(n) = x;
    }
    
    const Uint16& ProtocolIFType_value() const
    {
        const size_t n = offsetof(Self, ProtocolIFType);
        return GetField<Uint16>(n).value;
    }
    
    void ProtocolIFType_value(const Uint16& x)
    {
        const size_t n = offsetof(Self, ProtocolIFType);
        GetField<Uint16>(n).Set(x);
    }
    
    bool ProtocolIFType_exists() const
    {
        const size_t n = offsetof(Self, ProtocolIFType);
        return GetField<Uint16>(n).exists ? true : false;
    }
    
    void ProtocolIFType_clear()
    {
        const size_t n = offsetof(Self, ProtocolIFType);
        GetField<Uint16>(n).Clear();
    }

    //
    // CIM_ProtocolEndpoint_Class.OtherTypeDescription
    //
    
    const Field<String>& OtherTypeDescription() const
    {
        const size_t n = offsetof(Self, OtherTypeDescription);
        return GetField<String>(n);
    }
    
    void OtherTypeDescription(const Field<String>& x)
    {
        const size_t n = offsetof(Self, OtherTypeDescription);
        GetField<String>(n) = x;
    }
    
    const String& OtherTypeDescription_value() const
    {
        const size_t n = offsetof(Self, OtherTypeDescription);
        return GetField<String>(n).value;
    }
    
    void OtherTypeDescription_value(const String& x)
    {
        const size_t n = offsetof(Self, OtherTypeDescription);
        GetField<String>(n).Set(x);
    }
    
    bool OtherTypeDescription_exists() const
    {
        const size_t n = offsetof(Self, OtherTypeDescription);
        return GetField<String>(n).exists ? true : false;
    }
    
    void OtherTypeDescription_clear()
    {
        const size_t n = offsetof(Self, OtherTypeDescription);
        GetField<String>(n).Clear();
    }
};

typedef Array<CIM_ProtocolEndpoint_Class> CIM_ProtocolEndpoint_ClassA;

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _CIM_ProtocolEndpoint_h */
