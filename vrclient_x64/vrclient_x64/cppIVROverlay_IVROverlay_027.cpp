#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_027.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVROverlay_IVROverlay_027_FindOverlay( struct cppIVROverlay_IVROverlay_027_FindOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->FindOverlay((const char *)params->pchOverlayKey, (vr::VROverlayHandle_t *)params->pOverlayHandle);
}

void cppIVROverlay_IVROverlay_027_CreateOverlay( struct cppIVROverlay_IVROverlay_027_CreateOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->CreateOverlay((const char *)params->pchOverlayKey, (const char *)params->pchOverlayName, (vr::VROverlayHandle_t *)params->pOverlayHandle);
}

void cppIVROverlay_IVROverlay_027_DestroyOverlay( struct cppIVROverlay_IVROverlay_027_DestroyOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->DestroyOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_027_GetOverlayKey( struct cppIVROverlay_IVROverlay_027_GetOverlayKey_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayKey((vr::VROverlayHandle_t)params->ulOverlayHandle, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::EVROverlayError *)params->pError);
}

void cppIVROverlay_IVROverlay_027_GetOverlayName( struct cppIVROverlay_IVROverlay_027_GetOverlayName_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayName((vr::VROverlayHandle_t)params->ulOverlayHandle, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::EVROverlayError *)params->pError);
}

void cppIVROverlay_IVROverlay_027_SetOverlayName( struct cppIVROverlay_IVROverlay_027_SetOverlayName_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayName((vr::VROverlayHandle_t)params->ulOverlayHandle, (const char *)params->pchName);
}

void cppIVROverlay_IVROverlay_027_GetOverlayImageData( struct cppIVROverlay_IVROverlay_027_GetOverlayImageData_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayImageData((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pvBuffer, (uint32_t)params->unBufferSize, (uint32_t *)params->punWidth, (uint32_t *)params->punHeight);
}

void cppIVROverlay_IVROverlay_027_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_027_GetOverlayErrorNameFromEnum_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayErrorNameFromEnum((vr::EVROverlayError)params->error);
}

void cppIVROverlay_IVROverlay_027_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_027_SetOverlayRenderingPid_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayRenderingPid((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t)params->unPID);
}

void cppIVROverlay_IVROverlay_027_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_027_GetOverlayRenderingPid_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayRenderingPid((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_027_SetOverlayFlag( struct cppIVROverlay_IVROverlay_027_SetOverlayFlag_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayFlags)params->eOverlayFlag, (bool)params->bEnabled);
}

void cppIVROverlay_IVROverlay_027_GetOverlayFlag( struct cppIVROverlay_IVROverlay_027_GetOverlayFlag_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayFlags)params->eOverlayFlag, (bool *)params->pbEnabled);
}

void cppIVROverlay_IVROverlay_027_GetOverlayFlags( struct cppIVROverlay_IVROverlay_027_GetOverlayFlags_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayFlags((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->pFlags);
}

void cppIVROverlay_IVROverlay_027_SetOverlayColor( struct cppIVROverlay_IVROverlay_027_SetOverlayColor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayColor((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fRed, (float)params->fGreen, (float)params->fBlue);
}

void cppIVROverlay_IVROverlay_027_GetOverlayColor( struct cppIVROverlay_IVROverlay_027_GetOverlayColor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayColor((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfRed, (float *)params->pfGreen, (float *)params->pfBlue);
}

void cppIVROverlay_IVROverlay_027_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_027_SetOverlayAlpha_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fAlpha);
}

void cppIVROverlay_IVROverlay_027_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_027_GetOverlayAlpha_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfAlpha);
}

void cppIVROverlay_IVROverlay_027_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_027_SetOverlayTexelAspect_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTexelAspect((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fTexelAspect);
}

void cppIVROverlay_IVROverlay_027_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_027_GetOverlayTexelAspect_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTexelAspect((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfTexelAspect);
}

void cppIVROverlay_IVROverlay_027_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_027_SetOverlaySortOrder_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlaySortOrder((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t)params->unSortOrder);
}

void cppIVROverlay_IVROverlay_027_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_027_GetOverlaySortOrder_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlaySortOrder((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->punSortOrder);
}

void cppIVROverlay_IVROverlay_027_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_027_SetOverlayWidthInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fWidthInMeters);
}

void cppIVROverlay_IVROverlay_027_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_027_GetOverlayWidthInMeters_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfWidthInMeters);
}

void cppIVROverlay_IVROverlay_027_SetOverlayCurvature( struct cppIVROverlay_IVROverlay_027_SetOverlayCurvature_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayCurvature((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fCurvature);
}

void cppIVROverlay_IVROverlay_027_GetOverlayCurvature( struct cppIVROverlay_IVROverlay_027_GetOverlayCurvature_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayCurvature((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfCurvature);
}

void cppIVROverlay_IVROverlay_027_SetOverlayPreCurvePitch( struct cppIVROverlay_IVROverlay_027_SetOverlayPreCurvePitch_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayPreCurvePitch((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fRadians);
}

void cppIVROverlay_IVROverlay_027_GetOverlayPreCurvePitch( struct cppIVROverlay_IVROverlay_027_GetOverlayPreCurvePitch_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayPreCurvePitch((vr::VROverlayHandle_t)params->ulOverlayHandle, (float *)params->pfRadians);
}

void cppIVROverlay_IVROverlay_027_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_027_SetOverlayTextureColorSpace_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTextureColorSpace((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::EColorSpace)params->eTextureColorSpace);
}

void cppIVROverlay_IVROverlay_027_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_027_GetOverlayTextureColorSpace_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureColorSpace((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::EColorSpace *)params->peTextureColorSpace);
}

void cppIVROverlay_IVROverlay_027_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_027_SetOverlayTextureBounds_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::VRTextureBounds_t *)params->pOverlayTextureBounds);
}

void cppIVROverlay_IVROverlay_027_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_027_GetOverlayTextureBounds_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VRTextureBounds_t *)params->pOverlayTextureBounds);
}

void cppIVROverlay_IVROverlay_027_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_027_GetOverlayTransformType_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayTransformType *)params->peTransformType);
}

void cppIVROverlay_IVROverlay_027_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_027_SetOverlayTransformAbsolute_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (const vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform);
}

void cppIVROverlay_IVROverlay_027_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_027_GetOverlayTransformAbsolute_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin *)params->peTrackingOrigin, (vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform);
}

void cppIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unTrackedDevice, (const vr::HmdMatrix34_t *)params->pmatTrackedDeviceToOverlayTransform);
}

void cppIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t *)params->punTrackedDevice, (vr::HmdMatrix34_t *)params->pmatTrackedDeviceToOverlayTransform);
}

void cppIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t)params->unDeviceIndex, (const char *)params->pchComponentName);
}

void cppIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::TrackedDeviceIndex_t *)params->punDeviceIndex, (char *)params->pchComponentName, (uint32_t)params->unComponentNameSize);
}

void cppIVROverlay_IVROverlay_027_SetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_027_SetOverlayTransformCursor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformCursor((vr::VROverlayHandle_t)params->ulCursorOverlayHandle, (const vr::HmdVector2_t *)params->pvHotspot);
}

void cppIVROverlay_IVROverlay_027_GetOverlayTransformCursor( struct cppIVROverlay_IVROverlay_027_GetOverlayTransformCursor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTransformCursor((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::HmdVector2_t *)params->pvHotspot);
}

void cppIVROverlay_IVROverlay_027_SetOverlayTransformProjection( struct cppIVROverlay_IVROverlay_027_SetOverlayTransformProjection_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTransformProjection((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (const vr::HmdMatrix34_t *)params->pmatTrackingOriginToOverlayTransform, (const vr::VROverlayProjection_t *)params->pProjection, (vr::EVREye)params->eEye);
}

void cppIVROverlay_IVROverlay_027_ShowOverlay( struct cppIVROverlay_IVROverlay_027_ShowOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_027_HideOverlay( struct cppIVROverlay_IVROverlay_027_HideOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->HideOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_027_IsOverlayVisible( struct cppIVROverlay_IVROverlay_027_IsOverlayVisible_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_027_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_027_GetTransformForOverlayCoordinates_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetTransformForOverlayCoordinates((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (vr::HmdVector2_t)params->coordinatesInOverlay, (vr::HmdMatrix34_t *)params->pmatTransform);
}

void cppIVROverlay_IVROverlay_027_WaitFrameSync( struct cppIVROverlay_IVROverlay_027_WaitFrameSync_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->WaitFrameSync((uint32_t)params->nTimeoutMs);
}

void cppIVROverlay_IVROverlay_027_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_027_PollNextOverlayEvent_params *params )
{
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_1267_win_to_lin( params->pEvent, &lin_pEvent );
    uint32_t lin_uncbVREvent = params->uncbVREvent ? sizeof(lin_pEvent) : 0;
    params->_ret = ((IVROverlay*)params->linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)params->ulOverlayHandle, params->pEvent ? &lin_pEvent : nullptr, lin_uncbVREvent);
    if (params->pEvent)
        struct_VREvent_t_1267_lin_to_win( &lin_pEvent, params->pEvent, params->uncbVREvent );
}

void cppIVROverlay_IVROverlay_027_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_027_GetOverlayInputMethod_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayInputMethod *)params->peInputMethod);
}

void cppIVROverlay_IVROverlay_027_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_027_SetOverlayInputMethod_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayInputMethod)params->eInputMethod);
}

void cppIVROverlay_IVROverlay_027_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_027_GetOverlayMouseScale_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::HmdVector2_t *)params->pvecMouseScale);
}

void cppIVROverlay_IVROverlay_027_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_027_SetOverlayMouseScale_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::HmdVector2_t *)params->pvecMouseScale);
}

void cppIVROverlay_IVROverlay_027_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_027_ComputeOverlayIntersection_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)params->pParams, (vr::VROverlayIntersectionResults_t *)params->pResults);
}

void cppIVROverlay_IVROverlay_027_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_027_IsHoverTargetOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsHoverTargetOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_027_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_027_SetOverlayIntersectionMask_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayIntersectionMask((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayIntersectionMaskPrimitive_t *)params->pMaskPrimitives, (uint32_t)params->unNumMaskPrimitives, (uint32_t)params->unPrimitiveSize);
}

void cppIVROverlay_IVROverlay_027_TriggerLaserMouseHapticVibration( struct cppIVROverlay_IVROverlay_027_TriggerLaserMouseHapticVibration_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->TriggerLaserMouseHapticVibration((vr::VROverlayHandle_t)params->ulOverlayHandle, (float)params->fDurationSeconds, (float)params->fFrequency, (float)params->fAmplitude);
}

void cppIVROverlay_IVROverlay_027_SetOverlayCursor( struct cppIVROverlay_IVROverlay_027_SetOverlayCursor_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayCursor((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VROverlayHandle_t)params->ulCursorHandle);
}

void cppIVROverlay_IVROverlay_027_SetOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_027_SetOverlayCursorPositionOverride_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayCursorPositionOverride((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::HmdVector2_t *)params->pvCursor);
}

void cppIVROverlay_IVROverlay_027_ClearOverlayCursorPositionOverride( struct cppIVROverlay_IVROverlay_027_ClearOverlayCursorPositionOverride_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ClearOverlayCursorPositionOverride((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_027_SetOverlayTexture( struct cppIVROverlay_IVROverlay_027_SetOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle, (const vr::Texture_t *)params->pTexture);
}

void cppIVROverlay_IVROverlay_027_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_027_ClearOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ClearOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_027_SetOverlayRaw( struct cppIVROverlay_IVROverlay_027_SetOverlayRaw_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pvBuffer, (uint32_t)params->unWidth, (uint32_t)params->unHeight, (uint32_t)params->unBytesPerPixel);
}

void cppIVROverlay_IVROverlay_027_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_027_SetOverlayFromFile_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)params->ulOverlayHandle, (const char *)params->pchFilePath);
}

void cppIVROverlay_IVROverlay_027_GetOverlayTexture( struct cppIVROverlay_IVROverlay_027_GetOverlayTexture_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTexture((vr::VROverlayHandle_t)params->ulOverlayHandle, (void **)params->pNativeTextureHandle, (void *)params->pNativeTextureRef, (uint32_t *)params->pWidth, (uint32_t *)params->pHeight, (uint32_t *)params->pNativeFormat, (vr::ETextureType *)params->pAPIType, (vr::EColorSpace *)params->pColorSpace, (vr::VRTextureBounds_t *)params->pTextureBounds);
}

void cppIVROverlay_IVROverlay_027_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_027_ReleaseNativeOverlayHandle_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ReleaseNativeOverlayHandle((vr::VROverlayHandle_t)params->ulOverlayHandle, (void *)params->pNativeTextureHandle);
}

void cppIVROverlay_IVROverlay_027_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_027_GetOverlayTextureSize_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetOverlayTextureSize((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->pWidth, (uint32_t *)params->pHeight);
}

void cppIVROverlay_IVROverlay_027_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_027_CreateDashboardOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->CreateDashboardOverlay((const char *)params->pchOverlayKey, (const char *)params->pchOverlayFriendlyName, (vr::VROverlayHandle_t *)params->pMainHandle, (vr::VROverlayHandle_t *)params->pThumbnailHandle);
}

void cppIVROverlay_IVROverlay_027_IsDashboardVisible( struct cppIVROverlay_IVROverlay_027_IsDashboardVisible_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsDashboardVisible();
}

void cppIVROverlay_IVROverlay_027_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_027_IsActiveDashboardOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->IsActiveDashboardOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

void cppIVROverlay_IVROverlay_027_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_027_SetDashboardOverlaySceneProcess_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->SetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t)params->unProcessId);
}

void cppIVROverlay_IVROverlay_027_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_027_GetDashboardOverlaySceneProcess_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint32_t *)params->punProcessId);
}

void cppIVROverlay_IVROverlay_027_ShowDashboard( struct cppIVROverlay_IVROverlay_027_ShowDashboard_params *params )
{
    ((IVROverlay*)params->linux_side)->ShowDashboard((const char *)params->pchOverlayToShow);
}

void cppIVROverlay_IVROverlay_027_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_027_GetPrimaryDashboardDevice_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetPrimaryDashboardDevice();
}

void cppIVROverlay_IVROverlay_027_ShowKeyboard( struct cppIVROverlay_IVROverlay_027_ShowKeyboard_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowKeyboard((vr::EGamepadTextInputMode)params->eInputMode, (vr::EGamepadTextInputLineMode)params->eLineInputMode, (uint32_t)params->unFlags, (const char *)params->pchDescription, (uint32_t)params->unCharMax, (const char *)params->pchExistingText, (uint64_t)params->uUserValue);
}

void cppIVROverlay_IVROverlay_027_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_027_ShowKeyboardForOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowKeyboardForOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::EGamepadTextInputMode)params->eInputMode, (vr::EGamepadTextInputLineMode)params->eLineInputMode, (uint32_t)params->unFlags, (const char *)params->pchDescription, (uint32_t)params->unCharMax, (const char *)params->pchExistingText, (uint64_t)params->uUserValue);
}

void cppIVROverlay_IVROverlay_027_GetKeyboardText( struct cppIVROverlay_IVROverlay_027_GetKeyboardText_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->GetKeyboardText((char *)params->pchText, (uint32_t)params->cchText);
}

void cppIVROverlay_IVROverlay_027_HideKeyboard( struct cppIVROverlay_IVROverlay_027_HideKeyboard_params *params )
{
    ((IVROverlay*)params->linux_side)->HideKeyboard();
}

void cppIVROverlay_IVROverlay_027_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_027_SetKeyboardTransformAbsolute_params *params )
{
    ((IVROverlay*)params->linux_side)->SetKeyboardTransformAbsolute((vr::ETrackingUniverseOrigin)params->eTrackingOrigin, (const vr::HmdMatrix34_t *)params->pmatTrackingOriginToKeyboardTransform);
}

void cppIVROverlay_IVROverlay_027_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_027_SetKeyboardPositionForOverlay_params *params )
{
    ((IVROverlay*)params->linux_side)->SetKeyboardPositionForOverlay((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::HmdRect2_t)params->avoidRect);
}

void cppIVROverlay_IVROverlay_027_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_027_ShowMessageOverlay_params *params )
{
    params->_ret = ((IVROverlay*)params->linux_side)->ShowMessageOverlay((const char *)params->pchText, (const char *)params->pchCaption, (const char *)params->pchButton0Text, (const char *)params->pchButton1Text, (const char *)params->pchButton2Text, (const char *)params->pchButton3Text);
}

void cppIVROverlay_IVROverlay_027_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_027_CloseMessageOverlay_params *params )
{
    ((IVROverlay*)params->linux_side)->CloseMessageOverlay();
}

#ifdef __cplusplus
}
#endif