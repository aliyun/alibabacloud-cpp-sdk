// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCENTERPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCENTERPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCenterPolicyRequestAuthorizeAccessPolicyRule.hpp>
#include <alibabacloud/models/ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule.hpp>
#include <alibabacloud/models/ModifyCenterPolicyRequestClientType.hpp>
#include <alibabacloud/models/ModifyCenterPolicyRequestClipboardGraineds.hpp>
#include <alibabacloud/models/ModifyCenterPolicyRequestDeviceRedirects.hpp>
#include <alibabacloud/models/ModifyCenterPolicyRequestDeviceRules.hpp>
#include <alibabacloud/models/ModifyCenterPolicyRequestDomainResolveRule.hpp>
#include <alibabacloud/models/ModifyCenterPolicyRequestNetRedirectRule.hpp>
#include <alibabacloud/models/ModifyCenterPolicyRequestRecordEventLevels.hpp>
#include <alibabacloud/models/ModifyCenterPolicyRequestRevokeAccessPolicyRule.hpp>
#include <alibabacloud/models/ModifyCenterPolicyRequestRevokeSecurityPolicyRule.hpp>
#include <alibabacloud/models/ModifyCenterPolicyRequestUsbSupplyRedirectRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyCenterPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCenterPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdminAccess, adminAccess_);
      DARABONBA_PTR_TO_JSON(AppContentProtection, appContentProtection_);
      DARABONBA_PTR_TO_JSON(AuthorizeAccessPolicyRule, authorizeAccessPolicyRule_);
      DARABONBA_PTR_TO_JSON(AuthorizeSecurityPolicyRule, authorizeSecurityPolicyRule_);
      DARABONBA_PTR_TO_JSON(AutoReconnect, autoReconnect_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_TO_JSON(ClientControlMenu, clientControlMenu_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_TO_JSON(ClipboardGraineds, clipboardGraineds_);
      DARABONBA_PTR_TO_JSON(ClipboardScope, clipboardScope_);
      DARABONBA_PTR_TO_JSON(ColorEnhancement, colorEnhancement_);
      DARABONBA_PTR_TO_JSON(CpdDriveClipboard, cpdDriveClipboard_);
      DARABONBA_PTR_TO_JSON(CpuDownGradeDuration, cpuDownGradeDuration_);
      DARABONBA_PTR_TO_JSON(CpuProcessors, cpuProcessors_);
      DARABONBA_PTR_TO_JSON(CpuProtectedMode, cpuProtectedMode_);
      DARABONBA_PTR_TO_JSON(CpuRateLimit, cpuRateLimit_);
      DARABONBA_PTR_TO_JSON(CpuSampleDuration, cpuSampleDuration_);
      DARABONBA_PTR_TO_JSON(CpuSingleRateLimit, cpuSingleRateLimit_);
      DARABONBA_PTR_TO_JSON(DeviceConnectHint, deviceConnectHint_);
      DARABONBA_PTR_TO_JSON(DeviceRedirects, deviceRedirects_);
      DARABONBA_PTR_TO_JSON(DeviceRules, deviceRules_);
      DARABONBA_PTR_TO_JSON(DisconnectKeepSession, disconnectKeepSession_);
      DARABONBA_PTR_TO_JSON(DisconnectKeepSessionTime, disconnectKeepSessionTime_);
      DARABONBA_PTR_TO_JSON(DisplayMode, displayMode_);
      DARABONBA_PTR_TO_JSON(DomainResolveRule, domainResolveRule_);
      DARABONBA_PTR_TO_JSON(DomainResolveRuleType, domainResolveRuleType_);
      DARABONBA_PTR_TO_JSON(EnableSessionRateLimiting, enableSessionRateLimiting_);
      DARABONBA_PTR_TO_JSON(EndUserApplyAdminCoordinate, endUserApplyAdminCoordinate_);
      DARABONBA_PTR_TO_JSON(EndUserGroupCoordinate, endUserGroupCoordinate_);
      DARABONBA_PTR_TO_JSON(FileMigrate, fileMigrate_);
      DARABONBA_PTR_TO_JSON(FileTransferAddress, fileTransferAddress_);
      DARABONBA_PTR_TO_JSON(FileTransferSpeed, fileTransferSpeed_);
      DARABONBA_PTR_TO_JSON(FileTransferSpeedLocation, fileTransferSpeedLocation_);
      DARABONBA_PTR_TO_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_TO_JSON(Html5FileTransfer, html5FileTransfer_);
      DARABONBA_PTR_TO_JSON(InternetCommunicationProtocol, internetCommunicationProtocol_);
      DARABONBA_PTR_TO_JSON(InternetPrinter, internetPrinter_);
      DARABONBA_PTR_TO_JSON(LocalDrive, localDrive_);
      DARABONBA_PTR_TO_JSON(MaxReconnectTime, maxReconnectTime_);
      DARABONBA_PTR_TO_JSON(MemoryDownGradeDuration, memoryDownGradeDuration_);
      DARABONBA_PTR_TO_JSON(MemoryProcessors, memoryProcessors_);
      DARABONBA_PTR_TO_JSON(MemoryProtectedMode, memoryProtectedMode_);
      DARABONBA_PTR_TO_JSON(MemoryRateLimit, memoryRateLimit_);
      DARABONBA_PTR_TO_JSON(MemorySampleDuration, memorySampleDuration_);
      DARABONBA_PTR_TO_JSON(MemorySingleRateLimit, memorySingleRateLimit_);
      DARABONBA_PTR_TO_JSON(MobileRestart, mobileRestart_);
      DARABONBA_PTR_TO_JSON(MobileSafeMenu, mobileSafeMenu_);
      DARABONBA_PTR_TO_JSON(MobileShutdown, mobileShutdown_);
      DARABONBA_PTR_TO_JSON(MobileWuyingKeeper, mobileWuyingKeeper_);
      DARABONBA_PTR_TO_JSON(MobileWyAssistant, mobileWyAssistant_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetRedirect, netRedirect_);
      DARABONBA_PTR_TO_JSON(NetRedirectRule, netRedirectRule_);
      DARABONBA_PTR_TO_JSON(NoOperationDisconnect, noOperationDisconnect_);
      DARABONBA_PTR_TO_JSON(NoOperationDisconnectTime, noOperationDisconnectTime_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PrinterRedirect, printerRedirect_);
      DARABONBA_PTR_TO_JSON(QualityEnhancement, qualityEnhancement_);
      DARABONBA_PTR_TO_JSON(RecordEventDuration, recordEventDuration_);
      DARABONBA_PTR_TO_JSON(RecordEventFileExts, recordEventFileExts_);
      DARABONBA_PTR_TO_JSON(RecordEventFilePaths, recordEventFilePaths_);
      DARABONBA_PTR_TO_JSON(RecordEventLevels, recordEventLevels_);
      DARABONBA_PTR_TO_JSON(RecordEventRegisters, recordEventRegisters_);
      DARABONBA_PTR_TO_JSON(RecordEvents, recordEvents_);
      DARABONBA_PTR_TO_JSON(Recording, recording_);
      DARABONBA_PTR_TO_JSON(RecordingAudio, recordingAudio_);
      DARABONBA_PTR_TO_JSON(RecordingDuration, recordingDuration_);
      DARABONBA_PTR_TO_JSON(RecordingEndTime, recordingEndTime_);
      DARABONBA_PTR_TO_JSON(RecordingExpires, recordingExpires_);
      DARABONBA_PTR_TO_JSON(RecordingFps, recordingFps_);
      DARABONBA_PTR_TO_JSON(RecordingStartTime, recordingStartTime_);
      DARABONBA_PTR_TO_JSON(RecordingUserNotify, recordingUserNotify_);
      DARABONBA_PTR_TO_JSON(RecordingUserNotifyMessage, recordingUserNotifyMessage_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoteCoordinate, remoteCoordinate_);
      DARABONBA_PTR_TO_JSON(ResetDesktop, resetDesktop_);
      DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_TO_JSON(ResolutionModel, resolutionModel_);
      DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RevokeAccessPolicyRule, revokeAccessPolicyRule_);
      DARABONBA_PTR_TO_JSON(RevokeSecurityPolicyRule, revokeSecurityPolicyRule_);
      DARABONBA_PTR_TO_JSON(SafeMenu, safeMenu_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(ScopeValue, scopeValue_);
      DARABONBA_PTR_TO_JSON(ScreenDisplayMode, screenDisplayMode_);
      DARABONBA_PTR_TO_JSON(SessionMaxRateKbps, sessionMaxRateKbps_);
      DARABONBA_PTR_TO_JSON(SmoothEnhancement, smoothEnhancement_);
      DARABONBA_PTR_TO_JSON(StatusMonitor, statusMonitor_);
      DARABONBA_PTR_TO_JSON(StreamingMode, streamingMode_);
      DARABONBA_PTR_TO_JSON(TargetFps, targetFps_);
      DARABONBA_PTR_TO_JSON(Taskbar, taskbar_);
      DARABONBA_PTR_TO_JSON(UsbRedirect, usbRedirect_);
      DARABONBA_PTR_TO_JSON(UsbSupplyRedirectRule, usbSupplyRedirectRule_);
      DARABONBA_PTR_TO_JSON(UseTime, useTime_);
      DARABONBA_PTR_TO_JSON(VideoEncAvgKbps, videoEncAvgKbps_);
      DARABONBA_PTR_TO_JSON(VideoEncMaxQP, videoEncMaxQP_);
      DARABONBA_PTR_TO_JSON(VideoEncMinQP, videoEncMinQP_);
      DARABONBA_PTR_TO_JSON(VideoEncPeakKbps, videoEncPeakKbps_);
      DARABONBA_PTR_TO_JSON(VideoEncPolicy, videoEncPolicy_);
      DARABONBA_PTR_TO_JSON(VideoRedirect, videoRedirect_);
      DARABONBA_PTR_TO_JSON(VisualQuality, visualQuality_);
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
      DARABONBA_PTR_TO_JSON(WatermarkAntiCam, watermarkAntiCam_);
      DARABONBA_PTR_TO_JSON(WatermarkColor, watermarkColor_);
      DARABONBA_PTR_TO_JSON(WatermarkColumnAmount, watermarkColumnAmount_);
      DARABONBA_PTR_TO_JSON(WatermarkCustomText, watermarkCustomText_);
      DARABONBA_PTR_TO_JSON(WatermarkDegree, watermarkDegree_);
      DARABONBA_PTR_TO_JSON(WatermarkFontSize, watermarkFontSize_);
      DARABONBA_PTR_TO_JSON(WatermarkFontStyle, watermarkFontStyle_);
      DARABONBA_PTR_TO_JSON(WatermarkPower, watermarkPower_);
      DARABONBA_PTR_TO_JSON(WatermarkRowAmount, watermarkRowAmount_);
      DARABONBA_PTR_TO_JSON(WatermarkSecurity, watermarkSecurity_);
      DARABONBA_PTR_TO_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
      DARABONBA_PTR_TO_JSON(WatermarkType, watermarkType_);
      DARABONBA_PTR_TO_JSON(WuyingKeeper, wuyingKeeper_);
      DARABONBA_PTR_TO_JSON(WyAssistant, wyAssistant_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCenterPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminAccess, adminAccess_);
      DARABONBA_PTR_FROM_JSON(AppContentProtection, appContentProtection_);
      DARABONBA_PTR_FROM_JSON(AuthorizeAccessPolicyRule, authorizeAccessPolicyRule_);
      DARABONBA_PTR_FROM_JSON(AuthorizeSecurityPolicyRule, authorizeSecurityPolicyRule_);
      DARABONBA_PTR_FROM_JSON(AutoReconnect, autoReconnect_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_FROM_JSON(ClientControlMenu, clientControlMenu_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_FROM_JSON(ClipboardGraineds, clipboardGraineds_);
      DARABONBA_PTR_FROM_JSON(ClipboardScope, clipboardScope_);
      DARABONBA_PTR_FROM_JSON(ColorEnhancement, colorEnhancement_);
      DARABONBA_PTR_FROM_JSON(CpdDriveClipboard, cpdDriveClipboard_);
      DARABONBA_PTR_FROM_JSON(CpuDownGradeDuration, cpuDownGradeDuration_);
      DARABONBA_PTR_FROM_JSON(CpuProcessors, cpuProcessors_);
      DARABONBA_PTR_FROM_JSON(CpuProtectedMode, cpuProtectedMode_);
      DARABONBA_PTR_FROM_JSON(CpuRateLimit, cpuRateLimit_);
      DARABONBA_PTR_FROM_JSON(CpuSampleDuration, cpuSampleDuration_);
      DARABONBA_PTR_FROM_JSON(CpuSingleRateLimit, cpuSingleRateLimit_);
      DARABONBA_PTR_FROM_JSON(DeviceConnectHint, deviceConnectHint_);
      DARABONBA_PTR_FROM_JSON(DeviceRedirects, deviceRedirects_);
      DARABONBA_PTR_FROM_JSON(DeviceRules, deviceRules_);
      DARABONBA_PTR_FROM_JSON(DisconnectKeepSession, disconnectKeepSession_);
      DARABONBA_PTR_FROM_JSON(DisconnectKeepSessionTime, disconnectKeepSessionTime_);
      DARABONBA_PTR_FROM_JSON(DisplayMode, displayMode_);
      DARABONBA_PTR_FROM_JSON(DomainResolveRule, domainResolveRule_);
      DARABONBA_PTR_FROM_JSON(DomainResolveRuleType, domainResolveRuleType_);
      DARABONBA_PTR_FROM_JSON(EnableSessionRateLimiting, enableSessionRateLimiting_);
      DARABONBA_PTR_FROM_JSON(EndUserApplyAdminCoordinate, endUserApplyAdminCoordinate_);
      DARABONBA_PTR_FROM_JSON(EndUserGroupCoordinate, endUserGroupCoordinate_);
      DARABONBA_PTR_FROM_JSON(FileMigrate, fileMigrate_);
      DARABONBA_PTR_FROM_JSON(FileTransferAddress, fileTransferAddress_);
      DARABONBA_PTR_FROM_JSON(FileTransferSpeed, fileTransferSpeed_);
      DARABONBA_PTR_FROM_JSON(FileTransferSpeedLocation, fileTransferSpeedLocation_);
      DARABONBA_PTR_FROM_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_FROM_JSON(Html5FileTransfer, html5FileTransfer_);
      DARABONBA_PTR_FROM_JSON(InternetCommunicationProtocol, internetCommunicationProtocol_);
      DARABONBA_PTR_FROM_JSON(InternetPrinter, internetPrinter_);
      DARABONBA_PTR_FROM_JSON(LocalDrive, localDrive_);
      DARABONBA_PTR_FROM_JSON(MaxReconnectTime, maxReconnectTime_);
      DARABONBA_PTR_FROM_JSON(MemoryDownGradeDuration, memoryDownGradeDuration_);
      DARABONBA_PTR_FROM_JSON(MemoryProcessors, memoryProcessors_);
      DARABONBA_PTR_FROM_JSON(MemoryProtectedMode, memoryProtectedMode_);
      DARABONBA_PTR_FROM_JSON(MemoryRateLimit, memoryRateLimit_);
      DARABONBA_PTR_FROM_JSON(MemorySampleDuration, memorySampleDuration_);
      DARABONBA_PTR_FROM_JSON(MemorySingleRateLimit, memorySingleRateLimit_);
      DARABONBA_PTR_FROM_JSON(MobileRestart, mobileRestart_);
      DARABONBA_PTR_FROM_JSON(MobileSafeMenu, mobileSafeMenu_);
      DARABONBA_PTR_FROM_JSON(MobileShutdown, mobileShutdown_);
      DARABONBA_PTR_FROM_JSON(MobileWuyingKeeper, mobileWuyingKeeper_);
      DARABONBA_PTR_FROM_JSON(MobileWyAssistant, mobileWyAssistant_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetRedirect, netRedirect_);
      DARABONBA_PTR_FROM_JSON(NetRedirectRule, netRedirectRule_);
      DARABONBA_PTR_FROM_JSON(NoOperationDisconnect, noOperationDisconnect_);
      DARABONBA_PTR_FROM_JSON(NoOperationDisconnectTime, noOperationDisconnectTime_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PrinterRedirect, printerRedirect_);
      DARABONBA_PTR_FROM_JSON(QualityEnhancement, qualityEnhancement_);
      DARABONBA_PTR_FROM_JSON(RecordEventDuration, recordEventDuration_);
      DARABONBA_PTR_FROM_JSON(RecordEventFileExts, recordEventFileExts_);
      DARABONBA_PTR_FROM_JSON(RecordEventFilePaths, recordEventFilePaths_);
      DARABONBA_PTR_FROM_JSON(RecordEventLevels, recordEventLevels_);
      DARABONBA_PTR_FROM_JSON(RecordEventRegisters, recordEventRegisters_);
      DARABONBA_PTR_FROM_JSON(RecordEvents, recordEvents_);
      DARABONBA_PTR_FROM_JSON(Recording, recording_);
      DARABONBA_PTR_FROM_JSON(RecordingAudio, recordingAudio_);
      DARABONBA_PTR_FROM_JSON(RecordingDuration, recordingDuration_);
      DARABONBA_PTR_FROM_JSON(RecordingEndTime, recordingEndTime_);
      DARABONBA_PTR_FROM_JSON(RecordingExpires, recordingExpires_);
      DARABONBA_PTR_FROM_JSON(RecordingFps, recordingFps_);
      DARABONBA_PTR_FROM_JSON(RecordingStartTime, recordingStartTime_);
      DARABONBA_PTR_FROM_JSON(RecordingUserNotify, recordingUserNotify_);
      DARABONBA_PTR_FROM_JSON(RecordingUserNotifyMessage, recordingUserNotifyMessage_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoteCoordinate, remoteCoordinate_);
      DARABONBA_PTR_FROM_JSON(ResetDesktop, resetDesktop_);
      DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_FROM_JSON(ResolutionModel, resolutionModel_);
      DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RevokeAccessPolicyRule, revokeAccessPolicyRule_);
      DARABONBA_PTR_FROM_JSON(RevokeSecurityPolicyRule, revokeSecurityPolicyRule_);
      DARABONBA_PTR_FROM_JSON(SafeMenu, safeMenu_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(ScopeValue, scopeValue_);
      DARABONBA_PTR_FROM_JSON(ScreenDisplayMode, screenDisplayMode_);
      DARABONBA_PTR_FROM_JSON(SessionMaxRateKbps, sessionMaxRateKbps_);
      DARABONBA_PTR_FROM_JSON(SmoothEnhancement, smoothEnhancement_);
      DARABONBA_PTR_FROM_JSON(StatusMonitor, statusMonitor_);
      DARABONBA_PTR_FROM_JSON(StreamingMode, streamingMode_);
      DARABONBA_PTR_FROM_JSON(TargetFps, targetFps_);
      DARABONBA_PTR_FROM_JSON(Taskbar, taskbar_);
      DARABONBA_PTR_FROM_JSON(UsbRedirect, usbRedirect_);
      DARABONBA_PTR_FROM_JSON(UsbSupplyRedirectRule, usbSupplyRedirectRule_);
      DARABONBA_PTR_FROM_JSON(UseTime, useTime_);
      DARABONBA_PTR_FROM_JSON(VideoEncAvgKbps, videoEncAvgKbps_);
      DARABONBA_PTR_FROM_JSON(VideoEncMaxQP, videoEncMaxQP_);
      DARABONBA_PTR_FROM_JSON(VideoEncMinQP, videoEncMinQP_);
      DARABONBA_PTR_FROM_JSON(VideoEncPeakKbps, videoEncPeakKbps_);
      DARABONBA_PTR_FROM_JSON(VideoEncPolicy, videoEncPolicy_);
      DARABONBA_PTR_FROM_JSON(VideoRedirect, videoRedirect_);
      DARABONBA_PTR_FROM_JSON(VisualQuality, visualQuality_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
      DARABONBA_PTR_FROM_JSON(WatermarkAntiCam, watermarkAntiCam_);
      DARABONBA_PTR_FROM_JSON(WatermarkColor, watermarkColor_);
      DARABONBA_PTR_FROM_JSON(WatermarkColumnAmount, watermarkColumnAmount_);
      DARABONBA_PTR_FROM_JSON(WatermarkCustomText, watermarkCustomText_);
      DARABONBA_PTR_FROM_JSON(WatermarkDegree, watermarkDegree_);
      DARABONBA_PTR_FROM_JSON(WatermarkFontSize, watermarkFontSize_);
      DARABONBA_PTR_FROM_JSON(WatermarkFontStyle, watermarkFontStyle_);
      DARABONBA_PTR_FROM_JSON(WatermarkPower, watermarkPower_);
      DARABONBA_PTR_FROM_JSON(WatermarkRowAmount, watermarkRowAmount_);
      DARABONBA_PTR_FROM_JSON(WatermarkSecurity, watermarkSecurity_);
      DARABONBA_PTR_FROM_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
      DARABONBA_PTR_FROM_JSON(WatermarkType, watermarkType_);
      DARABONBA_PTR_FROM_JSON(WuyingKeeper, wuyingKeeper_);
      DARABONBA_PTR_FROM_JSON(WyAssistant, wyAssistant_);
    };
    ModifyCenterPolicyRequest() = default ;
    ModifyCenterPolicyRequest(const ModifyCenterPolicyRequest &) = default ;
    ModifyCenterPolicyRequest(ModifyCenterPolicyRequest &&) = default ;
    ModifyCenterPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCenterPolicyRequest() = default ;
    ModifyCenterPolicyRequest& operator=(const ModifyCenterPolicyRequest &) = default ;
    ModifyCenterPolicyRequest& operator=(ModifyCenterPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminAccess_ == nullptr
        && return this->appContentProtection_ == nullptr && return this->authorizeAccessPolicyRule_ == nullptr && return this->authorizeSecurityPolicyRule_ == nullptr && return this->autoReconnect_ == nullptr && return this->businessType_ == nullptr
        && return this->cameraRedirect_ == nullptr && return this->clientControlMenu_ == nullptr && return this->clientType_ == nullptr && return this->clipboard_ == nullptr && return this->clipboardGraineds_ == nullptr
        && return this->clipboardScope_ == nullptr && return this->colorEnhancement_ == nullptr && return this->cpdDriveClipboard_ == nullptr && return this->cpuDownGradeDuration_ == nullptr && return this->cpuProcessors_ == nullptr
        && return this->cpuProtectedMode_ == nullptr && return this->cpuRateLimit_ == nullptr && return this->cpuSampleDuration_ == nullptr && return this->cpuSingleRateLimit_ == nullptr && return this->deviceConnectHint_ == nullptr
        && return this->deviceRedirects_ == nullptr && return this->deviceRules_ == nullptr && return this->disconnectKeepSession_ == nullptr && return this->disconnectKeepSessionTime_ == nullptr && return this->displayMode_ == nullptr
        && return this->domainResolveRule_ == nullptr && return this->domainResolveRuleType_ == nullptr && return this->enableSessionRateLimiting_ == nullptr && return this->endUserApplyAdminCoordinate_ == nullptr && return this->endUserGroupCoordinate_ == nullptr
        && return this->fileMigrate_ == nullptr && return this->fileTransferAddress_ == nullptr && return this->fileTransferSpeed_ == nullptr && return this->fileTransferSpeedLocation_ == nullptr && return this->gpuAcceleration_ == nullptr
        && return this->html5FileTransfer_ == nullptr && return this->internetCommunicationProtocol_ == nullptr && return this->internetPrinter_ == nullptr && return this->localDrive_ == nullptr && return this->maxReconnectTime_ == nullptr
        && return this->memoryDownGradeDuration_ == nullptr && return this->memoryProcessors_ == nullptr && return this->memoryProtectedMode_ == nullptr && return this->memoryRateLimit_ == nullptr && return this->memorySampleDuration_ == nullptr
        && return this->memorySingleRateLimit_ == nullptr && return this->mobileRestart_ == nullptr && return this->mobileSafeMenu_ == nullptr && return this->mobileShutdown_ == nullptr && return this->mobileWuyingKeeper_ == nullptr
        && return this->mobileWyAssistant_ == nullptr && return this->name_ == nullptr && return this->netRedirect_ == nullptr && return this->netRedirectRule_ == nullptr && return this->noOperationDisconnect_ == nullptr
        && return this->noOperationDisconnectTime_ == nullptr && return this->policyGroupId_ == nullptr && return this->printerRedirect_ == nullptr && return this->qualityEnhancement_ == nullptr && return this->recordEventDuration_ == nullptr
        && return this->recordEventFileExts_ == nullptr && return this->recordEventFilePaths_ == nullptr && return this->recordEventLevels_ == nullptr && return this->recordEventRegisters_ == nullptr && return this->recordEvents_ == nullptr
        && return this->recording_ == nullptr && return this->recordingAudio_ == nullptr && return this->recordingDuration_ == nullptr && return this->recordingEndTime_ == nullptr && return this->recordingExpires_ == nullptr
        && return this->recordingFps_ == nullptr && return this->recordingStartTime_ == nullptr && return this->recordingUserNotify_ == nullptr && return this->recordingUserNotifyMessage_ == nullptr && return this->regionId_ == nullptr
        && return this->remoteCoordinate_ == nullptr && return this->resetDesktop_ == nullptr && return this->resolutionHeight_ == nullptr && return this->resolutionModel_ == nullptr && return this->resolutionWidth_ == nullptr
        && return this->resourceType_ == nullptr && return this->revokeAccessPolicyRule_ == nullptr && return this->revokeSecurityPolicyRule_ == nullptr && return this->safeMenu_ == nullptr && return this->scope_ == nullptr
        && return this->scopeValue_ == nullptr && return this->screenDisplayMode_ == nullptr && return this->sessionMaxRateKbps_ == nullptr && return this->smoothEnhancement_ == nullptr && return this->statusMonitor_ == nullptr
        && return this->streamingMode_ == nullptr && return this->targetFps_ == nullptr && return this->taskbar_ == nullptr && return this->usbRedirect_ == nullptr && return this->usbSupplyRedirectRule_ == nullptr
        && return this->useTime_ == nullptr && return this->videoEncAvgKbps_ == nullptr && return this->videoEncMaxQP_ == nullptr && return this->videoEncMinQP_ == nullptr && return this->videoEncPeakKbps_ == nullptr
        && return this->videoEncPolicy_ == nullptr && return this->videoRedirect_ == nullptr && return this->visualQuality_ == nullptr && return this->watermark_ == nullptr && return this->watermarkAntiCam_ == nullptr
        && return this->watermarkColor_ == nullptr && return this->watermarkColumnAmount_ == nullptr && return this->watermarkCustomText_ == nullptr && return this->watermarkDegree_ == nullptr && return this->watermarkFontSize_ == nullptr
        && return this->watermarkFontStyle_ == nullptr && return this->watermarkPower_ == nullptr && return this->watermarkRowAmount_ == nullptr && return this->watermarkSecurity_ == nullptr && return this->watermarkTransparencyValue_ == nullptr
        && return this->watermarkType_ == nullptr && return this->wuyingKeeper_ == nullptr && return this->wyAssistant_ == nullptr; };
    // adminAccess Field Functions 
    bool hasAdminAccess() const { return this->adminAccess_ != nullptr;};
    void deleteAdminAccess() { this->adminAccess_ = nullptr;};
    inline string adminAccess() const { DARABONBA_PTR_GET_DEFAULT(adminAccess_, "") };
    inline ModifyCenterPolicyRequest& setAdminAccess(string adminAccess) { DARABONBA_PTR_SET_VALUE(adminAccess_, adminAccess) };


    // appContentProtection Field Functions 
    bool hasAppContentProtection() const { return this->appContentProtection_ != nullptr;};
    void deleteAppContentProtection() { this->appContentProtection_ = nullptr;};
    inline string appContentProtection() const { DARABONBA_PTR_GET_DEFAULT(appContentProtection_, "") };
    inline ModifyCenterPolicyRequest& setAppContentProtection(string appContentProtection) { DARABONBA_PTR_SET_VALUE(appContentProtection_, appContentProtection) };


    // authorizeAccessPolicyRule Field Functions 
    bool hasAuthorizeAccessPolicyRule() const { return this->authorizeAccessPolicyRule_ != nullptr;};
    void deleteAuthorizeAccessPolicyRule() { this->authorizeAccessPolicyRule_ = nullptr;};
    inline const vector<ModifyCenterPolicyRequestAuthorizeAccessPolicyRule> & authorizeAccessPolicyRule() const { DARABONBA_PTR_GET_CONST(authorizeAccessPolicyRule_, vector<ModifyCenterPolicyRequestAuthorizeAccessPolicyRule>) };
    inline vector<ModifyCenterPolicyRequestAuthorizeAccessPolicyRule> authorizeAccessPolicyRule() { DARABONBA_PTR_GET(authorizeAccessPolicyRule_, vector<ModifyCenterPolicyRequestAuthorizeAccessPolicyRule>) };
    inline ModifyCenterPolicyRequest& setAuthorizeAccessPolicyRule(const vector<ModifyCenterPolicyRequestAuthorizeAccessPolicyRule> & authorizeAccessPolicyRule) { DARABONBA_PTR_SET_VALUE(authorizeAccessPolicyRule_, authorizeAccessPolicyRule) };
    inline ModifyCenterPolicyRequest& setAuthorizeAccessPolicyRule(vector<ModifyCenterPolicyRequestAuthorizeAccessPolicyRule> && authorizeAccessPolicyRule) { DARABONBA_PTR_SET_RVALUE(authorizeAccessPolicyRule_, authorizeAccessPolicyRule) };


    // authorizeSecurityPolicyRule Field Functions 
    bool hasAuthorizeSecurityPolicyRule() const { return this->authorizeSecurityPolicyRule_ != nullptr;};
    void deleteAuthorizeSecurityPolicyRule() { this->authorizeSecurityPolicyRule_ = nullptr;};
    inline const vector<ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule> & authorizeSecurityPolicyRule() const { DARABONBA_PTR_GET_CONST(authorizeSecurityPolicyRule_, vector<ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule>) };
    inline vector<ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule> authorizeSecurityPolicyRule() { DARABONBA_PTR_GET(authorizeSecurityPolicyRule_, vector<ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule>) };
    inline ModifyCenterPolicyRequest& setAuthorizeSecurityPolicyRule(const vector<ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule> & authorizeSecurityPolicyRule) { DARABONBA_PTR_SET_VALUE(authorizeSecurityPolicyRule_, authorizeSecurityPolicyRule) };
    inline ModifyCenterPolicyRequest& setAuthorizeSecurityPolicyRule(vector<ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule> && authorizeSecurityPolicyRule) { DARABONBA_PTR_SET_RVALUE(authorizeSecurityPolicyRule_, authorizeSecurityPolicyRule) };


    // autoReconnect Field Functions 
    bool hasAutoReconnect() const { return this->autoReconnect_ != nullptr;};
    void deleteAutoReconnect() { this->autoReconnect_ = nullptr;};
    inline string autoReconnect() const { DARABONBA_PTR_GET_DEFAULT(autoReconnect_, "") };
    inline ModifyCenterPolicyRequest& setAutoReconnect(string autoReconnect) { DARABONBA_PTR_SET_VALUE(autoReconnect_, autoReconnect) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline int32_t businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, 0) };
    inline ModifyCenterPolicyRequest& setBusinessType(int32_t businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // cameraRedirect Field Functions 
    bool hasCameraRedirect() const { return this->cameraRedirect_ != nullptr;};
    void deleteCameraRedirect() { this->cameraRedirect_ = nullptr;};
    inline string cameraRedirect() const { DARABONBA_PTR_GET_DEFAULT(cameraRedirect_, "") };
    inline ModifyCenterPolicyRequest& setCameraRedirect(string cameraRedirect) { DARABONBA_PTR_SET_VALUE(cameraRedirect_, cameraRedirect) };


    // clientControlMenu Field Functions 
    bool hasClientControlMenu() const { return this->clientControlMenu_ != nullptr;};
    void deleteClientControlMenu() { this->clientControlMenu_ = nullptr;};
    inline string clientControlMenu() const { DARABONBA_PTR_GET_DEFAULT(clientControlMenu_, "") };
    inline ModifyCenterPolicyRequest& setClientControlMenu(string clientControlMenu) { DARABONBA_PTR_SET_VALUE(clientControlMenu_, clientControlMenu) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline const vector<ModifyCenterPolicyRequestClientType> & clientType() const { DARABONBA_PTR_GET_CONST(clientType_, vector<ModifyCenterPolicyRequestClientType>) };
    inline vector<ModifyCenterPolicyRequestClientType> clientType() { DARABONBA_PTR_GET(clientType_, vector<ModifyCenterPolicyRequestClientType>) };
    inline ModifyCenterPolicyRequest& setClientType(const vector<ModifyCenterPolicyRequestClientType> & clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };
    inline ModifyCenterPolicyRequest& setClientType(vector<ModifyCenterPolicyRequestClientType> && clientType) { DARABONBA_PTR_SET_RVALUE(clientType_, clientType) };


    // clipboard Field Functions 
    bool hasClipboard() const { return this->clipboard_ != nullptr;};
    void deleteClipboard() { this->clipboard_ = nullptr;};
    inline string clipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
    inline ModifyCenterPolicyRequest& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


    // clipboardGraineds Field Functions 
    bool hasClipboardGraineds() const { return this->clipboardGraineds_ != nullptr;};
    void deleteClipboardGraineds() { this->clipboardGraineds_ = nullptr;};
    inline const vector<ModifyCenterPolicyRequestClipboardGraineds> & clipboardGraineds() const { DARABONBA_PTR_GET_CONST(clipboardGraineds_, vector<ModifyCenterPolicyRequestClipboardGraineds>) };
    inline vector<ModifyCenterPolicyRequestClipboardGraineds> clipboardGraineds() { DARABONBA_PTR_GET(clipboardGraineds_, vector<ModifyCenterPolicyRequestClipboardGraineds>) };
    inline ModifyCenterPolicyRequest& setClipboardGraineds(const vector<ModifyCenterPolicyRequestClipboardGraineds> & clipboardGraineds) { DARABONBA_PTR_SET_VALUE(clipboardGraineds_, clipboardGraineds) };
    inline ModifyCenterPolicyRequest& setClipboardGraineds(vector<ModifyCenterPolicyRequestClipboardGraineds> && clipboardGraineds) { DARABONBA_PTR_SET_RVALUE(clipboardGraineds_, clipboardGraineds) };


    // clipboardScope Field Functions 
    bool hasClipboardScope() const { return this->clipboardScope_ != nullptr;};
    void deleteClipboardScope() { this->clipboardScope_ = nullptr;};
    inline string clipboardScope() const { DARABONBA_PTR_GET_DEFAULT(clipboardScope_, "") };
    inline ModifyCenterPolicyRequest& setClipboardScope(string clipboardScope) { DARABONBA_PTR_SET_VALUE(clipboardScope_, clipboardScope) };


    // colorEnhancement Field Functions 
    bool hasColorEnhancement() const { return this->colorEnhancement_ != nullptr;};
    void deleteColorEnhancement() { this->colorEnhancement_ = nullptr;};
    inline string colorEnhancement() const { DARABONBA_PTR_GET_DEFAULT(colorEnhancement_, "") };
    inline ModifyCenterPolicyRequest& setColorEnhancement(string colorEnhancement) { DARABONBA_PTR_SET_VALUE(colorEnhancement_, colorEnhancement) };


    // cpdDriveClipboard Field Functions 
    bool hasCpdDriveClipboard() const { return this->cpdDriveClipboard_ != nullptr;};
    void deleteCpdDriveClipboard() { this->cpdDriveClipboard_ = nullptr;};
    inline string cpdDriveClipboard() const { DARABONBA_PTR_GET_DEFAULT(cpdDriveClipboard_, "") };
    inline ModifyCenterPolicyRequest& setCpdDriveClipboard(string cpdDriveClipboard) { DARABONBA_PTR_SET_VALUE(cpdDriveClipboard_, cpdDriveClipboard) };


    // cpuDownGradeDuration Field Functions 
    bool hasCpuDownGradeDuration() const { return this->cpuDownGradeDuration_ != nullptr;};
    void deleteCpuDownGradeDuration() { this->cpuDownGradeDuration_ = nullptr;};
    inline int32_t cpuDownGradeDuration() const { DARABONBA_PTR_GET_DEFAULT(cpuDownGradeDuration_, 0) };
    inline ModifyCenterPolicyRequest& setCpuDownGradeDuration(int32_t cpuDownGradeDuration) { DARABONBA_PTR_SET_VALUE(cpuDownGradeDuration_, cpuDownGradeDuration) };


    // cpuProcessors Field Functions 
    bool hasCpuProcessors() const { return this->cpuProcessors_ != nullptr;};
    void deleteCpuProcessors() { this->cpuProcessors_ = nullptr;};
    inline const vector<string> & cpuProcessors() const { DARABONBA_PTR_GET_CONST(cpuProcessors_, vector<string>) };
    inline vector<string> cpuProcessors() { DARABONBA_PTR_GET(cpuProcessors_, vector<string>) };
    inline ModifyCenterPolicyRequest& setCpuProcessors(const vector<string> & cpuProcessors) { DARABONBA_PTR_SET_VALUE(cpuProcessors_, cpuProcessors) };
    inline ModifyCenterPolicyRequest& setCpuProcessors(vector<string> && cpuProcessors) { DARABONBA_PTR_SET_RVALUE(cpuProcessors_, cpuProcessors) };


    // cpuProtectedMode Field Functions 
    bool hasCpuProtectedMode() const { return this->cpuProtectedMode_ != nullptr;};
    void deleteCpuProtectedMode() { this->cpuProtectedMode_ = nullptr;};
    inline string cpuProtectedMode() const { DARABONBA_PTR_GET_DEFAULT(cpuProtectedMode_, "") };
    inline ModifyCenterPolicyRequest& setCpuProtectedMode(string cpuProtectedMode) { DARABONBA_PTR_SET_VALUE(cpuProtectedMode_, cpuProtectedMode) };


    // cpuRateLimit Field Functions 
    bool hasCpuRateLimit() const { return this->cpuRateLimit_ != nullptr;};
    void deleteCpuRateLimit() { this->cpuRateLimit_ = nullptr;};
    inline int32_t cpuRateLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuRateLimit_, 0) };
    inline ModifyCenterPolicyRequest& setCpuRateLimit(int32_t cpuRateLimit) { DARABONBA_PTR_SET_VALUE(cpuRateLimit_, cpuRateLimit) };


    // cpuSampleDuration Field Functions 
    bool hasCpuSampleDuration() const { return this->cpuSampleDuration_ != nullptr;};
    void deleteCpuSampleDuration() { this->cpuSampleDuration_ = nullptr;};
    inline int32_t cpuSampleDuration() const { DARABONBA_PTR_GET_DEFAULT(cpuSampleDuration_, 0) };
    inline ModifyCenterPolicyRequest& setCpuSampleDuration(int32_t cpuSampleDuration) { DARABONBA_PTR_SET_VALUE(cpuSampleDuration_, cpuSampleDuration) };


    // cpuSingleRateLimit Field Functions 
    bool hasCpuSingleRateLimit() const { return this->cpuSingleRateLimit_ != nullptr;};
    void deleteCpuSingleRateLimit() { this->cpuSingleRateLimit_ = nullptr;};
    inline int32_t cpuSingleRateLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuSingleRateLimit_, 0) };
    inline ModifyCenterPolicyRequest& setCpuSingleRateLimit(int32_t cpuSingleRateLimit) { DARABONBA_PTR_SET_VALUE(cpuSingleRateLimit_, cpuSingleRateLimit) };


    // deviceConnectHint Field Functions 
    bool hasDeviceConnectHint() const { return this->deviceConnectHint_ != nullptr;};
    void deleteDeviceConnectHint() { this->deviceConnectHint_ = nullptr;};
    inline string deviceConnectHint() const { DARABONBA_PTR_GET_DEFAULT(deviceConnectHint_, "") };
    inline ModifyCenterPolicyRequest& setDeviceConnectHint(string deviceConnectHint) { DARABONBA_PTR_SET_VALUE(deviceConnectHint_, deviceConnectHint) };


    // deviceRedirects Field Functions 
    bool hasDeviceRedirects() const { return this->deviceRedirects_ != nullptr;};
    void deleteDeviceRedirects() { this->deviceRedirects_ = nullptr;};
    inline const vector<ModifyCenterPolicyRequestDeviceRedirects> & deviceRedirects() const { DARABONBA_PTR_GET_CONST(deviceRedirects_, vector<ModifyCenterPolicyRequestDeviceRedirects>) };
    inline vector<ModifyCenterPolicyRequestDeviceRedirects> deviceRedirects() { DARABONBA_PTR_GET(deviceRedirects_, vector<ModifyCenterPolicyRequestDeviceRedirects>) };
    inline ModifyCenterPolicyRequest& setDeviceRedirects(const vector<ModifyCenterPolicyRequestDeviceRedirects> & deviceRedirects) { DARABONBA_PTR_SET_VALUE(deviceRedirects_, deviceRedirects) };
    inline ModifyCenterPolicyRequest& setDeviceRedirects(vector<ModifyCenterPolicyRequestDeviceRedirects> && deviceRedirects) { DARABONBA_PTR_SET_RVALUE(deviceRedirects_, deviceRedirects) };


    // deviceRules Field Functions 
    bool hasDeviceRules() const { return this->deviceRules_ != nullptr;};
    void deleteDeviceRules() { this->deviceRules_ = nullptr;};
    inline const vector<ModifyCenterPolicyRequestDeviceRules> & deviceRules() const { DARABONBA_PTR_GET_CONST(deviceRules_, vector<ModifyCenterPolicyRequestDeviceRules>) };
    inline vector<ModifyCenterPolicyRequestDeviceRules> deviceRules() { DARABONBA_PTR_GET(deviceRules_, vector<ModifyCenterPolicyRequestDeviceRules>) };
    inline ModifyCenterPolicyRequest& setDeviceRules(const vector<ModifyCenterPolicyRequestDeviceRules> & deviceRules) { DARABONBA_PTR_SET_VALUE(deviceRules_, deviceRules) };
    inline ModifyCenterPolicyRequest& setDeviceRules(vector<ModifyCenterPolicyRequestDeviceRules> && deviceRules) { DARABONBA_PTR_SET_RVALUE(deviceRules_, deviceRules) };


    // disconnectKeepSession Field Functions 
    bool hasDisconnectKeepSession() const { return this->disconnectKeepSession_ != nullptr;};
    void deleteDisconnectKeepSession() { this->disconnectKeepSession_ = nullptr;};
    inline string disconnectKeepSession() const { DARABONBA_PTR_GET_DEFAULT(disconnectKeepSession_, "") };
    inline ModifyCenterPolicyRequest& setDisconnectKeepSession(string disconnectKeepSession) { DARABONBA_PTR_SET_VALUE(disconnectKeepSession_, disconnectKeepSession) };


    // disconnectKeepSessionTime Field Functions 
    bool hasDisconnectKeepSessionTime() const { return this->disconnectKeepSessionTime_ != nullptr;};
    void deleteDisconnectKeepSessionTime() { this->disconnectKeepSessionTime_ = nullptr;};
    inline int32_t disconnectKeepSessionTime() const { DARABONBA_PTR_GET_DEFAULT(disconnectKeepSessionTime_, 0) };
    inline ModifyCenterPolicyRequest& setDisconnectKeepSessionTime(int32_t disconnectKeepSessionTime) { DARABONBA_PTR_SET_VALUE(disconnectKeepSessionTime_, disconnectKeepSessionTime) };


    // displayMode Field Functions 
    bool hasDisplayMode() const { return this->displayMode_ != nullptr;};
    void deleteDisplayMode() { this->displayMode_ = nullptr;};
    inline string displayMode() const { DARABONBA_PTR_GET_DEFAULT(displayMode_, "") };
    inline ModifyCenterPolicyRequest& setDisplayMode(string displayMode) { DARABONBA_PTR_SET_VALUE(displayMode_, displayMode) };


    // domainResolveRule Field Functions 
    bool hasDomainResolveRule() const { return this->domainResolveRule_ != nullptr;};
    void deleteDomainResolveRule() { this->domainResolveRule_ = nullptr;};
    inline const vector<ModifyCenterPolicyRequestDomainResolveRule> & domainResolveRule() const { DARABONBA_PTR_GET_CONST(domainResolveRule_, vector<ModifyCenterPolicyRequestDomainResolveRule>) };
    inline vector<ModifyCenterPolicyRequestDomainResolveRule> domainResolveRule() { DARABONBA_PTR_GET(domainResolveRule_, vector<ModifyCenterPolicyRequestDomainResolveRule>) };
    inline ModifyCenterPolicyRequest& setDomainResolveRule(const vector<ModifyCenterPolicyRequestDomainResolveRule> & domainResolveRule) { DARABONBA_PTR_SET_VALUE(domainResolveRule_, domainResolveRule) };
    inline ModifyCenterPolicyRequest& setDomainResolveRule(vector<ModifyCenterPolicyRequestDomainResolveRule> && domainResolveRule) { DARABONBA_PTR_SET_RVALUE(domainResolveRule_, domainResolveRule) };


    // domainResolveRuleType Field Functions 
    bool hasDomainResolveRuleType() const { return this->domainResolveRuleType_ != nullptr;};
    void deleteDomainResolveRuleType() { this->domainResolveRuleType_ = nullptr;};
    inline string domainResolveRuleType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveRuleType_, "") };
    inline ModifyCenterPolicyRequest& setDomainResolveRuleType(string domainResolveRuleType) { DARABONBA_PTR_SET_VALUE(domainResolveRuleType_, domainResolveRuleType) };


    // enableSessionRateLimiting Field Functions 
    bool hasEnableSessionRateLimiting() const { return this->enableSessionRateLimiting_ != nullptr;};
    void deleteEnableSessionRateLimiting() { this->enableSessionRateLimiting_ = nullptr;};
    inline string enableSessionRateLimiting() const { DARABONBA_PTR_GET_DEFAULT(enableSessionRateLimiting_, "") };
    inline ModifyCenterPolicyRequest& setEnableSessionRateLimiting(string enableSessionRateLimiting) { DARABONBA_PTR_SET_VALUE(enableSessionRateLimiting_, enableSessionRateLimiting) };


    // endUserApplyAdminCoordinate Field Functions 
    bool hasEndUserApplyAdminCoordinate() const { return this->endUserApplyAdminCoordinate_ != nullptr;};
    void deleteEndUserApplyAdminCoordinate() { this->endUserApplyAdminCoordinate_ = nullptr;};
    inline string endUserApplyAdminCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserApplyAdminCoordinate_, "") };
    inline ModifyCenterPolicyRequest& setEndUserApplyAdminCoordinate(string endUserApplyAdminCoordinate) { DARABONBA_PTR_SET_VALUE(endUserApplyAdminCoordinate_, endUserApplyAdminCoordinate) };


    // endUserGroupCoordinate Field Functions 
    bool hasEndUserGroupCoordinate() const { return this->endUserGroupCoordinate_ != nullptr;};
    void deleteEndUserGroupCoordinate() { this->endUserGroupCoordinate_ = nullptr;};
    inline string endUserGroupCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserGroupCoordinate_, "") };
    inline ModifyCenterPolicyRequest& setEndUserGroupCoordinate(string endUserGroupCoordinate) { DARABONBA_PTR_SET_VALUE(endUserGroupCoordinate_, endUserGroupCoordinate) };


    // fileMigrate Field Functions 
    bool hasFileMigrate() const { return this->fileMigrate_ != nullptr;};
    void deleteFileMigrate() { this->fileMigrate_ = nullptr;};
    inline string fileMigrate() const { DARABONBA_PTR_GET_DEFAULT(fileMigrate_, "") };
    inline ModifyCenterPolicyRequest& setFileMigrate(string fileMigrate) { DARABONBA_PTR_SET_VALUE(fileMigrate_, fileMigrate) };


    // fileTransferAddress Field Functions 
    bool hasFileTransferAddress() const { return this->fileTransferAddress_ != nullptr;};
    void deleteFileTransferAddress() { this->fileTransferAddress_ = nullptr;};
    inline string fileTransferAddress() const { DARABONBA_PTR_GET_DEFAULT(fileTransferAddress_, "") };
    inline ModifyCenterPolicyRequest& setFileTransferAddress(string fileTransferAddress) { DARABONBA_PTR_SET_VALUE(fileTransferAddress_, fileTransferAddress) };


    // fileTransferSpeed Field Functions 
    bool hasFileTransferSpeed() const { return this->fileTransferSpeed_ != nullptr;};
    void deleteFileTransferSpeed() { this->fileTransferSpeed_ = nullptr;};
    inline string fileTransferSpeed() const { DARABONBA_PTR_GET_DEFAULT(fileTransferSpeed_, "") };
    inline ModifyCenterPolicyRequest& setFileTransferSpeed(string fileTransferSpeed) { DARABONBA_PTR_SET_VALUE(fileTransferSpeed_, fileTransferSpeed) };


    // fileTransferSpeedLocation Field Functions 
    bool hasFileTransferSpeedLocation() const { return this->fileTransferSpeedLocation_ != nullptr;};
    void deleteFileTransferSpeedLocation() { this->fileTransferSpeedLocation_ = nullptr;};
    inline string fileTransferSpeedLocation() const { DARABONBA_PTR_GET_DEFAULT(fileTransferSpeedLocation_, "") };
    inline ModifyCenterPolicyRequest& setFileTransferSpeedLocation(string fileTransferSpeedLocation) { DARABONBA_PTR_SET_VALUE(fileTransferSpeedLocation_, fileTransferSpeedLocation) };


    // gpuAcceleration Field Functions 
    bool hasGpuAcceleration() const { return this->gpuAcceleration_ != nullptr;};
    void deleteGpuAcceleration() { this->gpuAcceleration_ = nullptr;};
    inline string gpuAcceleration() const { DARABONBA_PTR_GET_DEFAULT(gpuAcceleration_, "") };
    inline ModifyCenterPolicyRequest& setGpuAcceleration(string gpuAcceleration) { DARABONBA_PTR_SET_VALUE(gpuAcceleration_, gpuAcceleration) };


    // html5FileTransfer Field Functions 
    bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
    void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
    inline string html5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
    inline ModifyCenterPolicyRequest& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


    // internetCommunicationProtocol Field Functions 
    bool hasInternetCommunicationProtocol() const { return this->internetCommunicationProtocol_ != nullptr;};
    void deleteInternetCommunicationProtocol() { this->internetCommunicationProtocol_ = nullptr;};
    inline string internetCommunicationProtocol() const { DARABONBA_PTR_GET_DEFAULT(internetCommunicationProtocol_, "") };
    inline ModifyCenterPolicyRequest& setInternetCommunicationProtocol(string internetCommunicationProtocol) { DARABONBA_PTR_SET_VALUE(internetCommunicationProtocol_, internetCommunicationProtocol) };


    // internetPrinter Field Functions 
    bool hasInternetPrinter() const { return this->internetPrinter_ != nullptr;};
    void deleteInternetPrinter() { this->internetPrinter_ = nullptr;};
    inline string internetPrinter() const { DARABONBA_PTR_GET_DEFAULT(internetPrinter_, "") };
    inline ModifyCenterPolicyRequest& setInternetPrinter(string internetPrinter) { DARABONBA_PTR_SET_VALUE(internetPrinter_, internetPrinter) };


    // localDrive Field Functions 
    bool hasLocalDrive() const { return this->localDrive_ != nullptr;};
    void deleteLocalDrive() { this->localDrive_ = nullptr;};
    inline string localDrive() const { DARABONBA_PTR_GET_DEFAULT(localDrive_, "") };
    inline ModifyCenterPolicyRequest& setLocalDrive(string localDrive) { DARABONBA_PTR_SET_VALUE(localDrive_, localDrive) };


    // maxReconnectTime Field Functions 
    bool hasMaxReconnectTime() const { return this->maxReconnectTime_ != nullptr;};
    void deleteMaxReconnectTime() { this->maxReconnectTime_ = nullptr;};
    inline int32_t maxReconnectTime() const { DARABONBA_PTR_GET_DEFAULT(maxReconnectTime_, 0) };
    inline ModifyCenterPolicyRequest& setMaxReconnectTime(int32_t maxReconnectTime) { DARABONBA_PTR_SET_VALUE(maxReconnectTime_, maxReconnectTime) };


    // memoryDownGradeDuration Field Functions 
    bool hasMemoryDownGradeDuration() const { return this->memoryDownGradeDuration_ != nullptr;};
    void deleteMemoryDownGradeDuration() { this->memoryDownGradeDuration_ = nullptr;};
    inline int32_t memoryDownGradeDuration() const { DARABONBA_PTR_GET_DEFAULT(memoryDownGradeDuration_, 0) };
    inline ModifyCenterPolicyRequest& setMemoryDownGradeDuration(int32_t memoryDownGradeDuration) { DARABONBA_PTR_SET_VALUE(memoryDownGradeDuration_, memoryDownGradeDuration) };


    // memoryProcessors Field Functions 
    bool hasMemoryProcessors() const { return this->memoryProcessors_ != nullptr;};
    void deleteMemoryProcessors() { this->memoryProcessors_ = nullptr;};
    inline const vector<string> & memoryProcessors() const { DARABONBA_PTR_GET_CONST(memoryProcessors_, vector<string>) };
    inline vector<string> memoryProcessors() { DARABONBA_PTR_GET(memoryProcessors_, vector<string>) };
    inline ModifyCenterPolicyRequest& setMemoryProcessors(const vector<string> & memoryProcessors) { DARABONBA_PTR_SET_VALUE(memoryProcessors_, memoryProcessors) };
    inline ModifyCenterPolicyRequest& setMemoryProcessors(vector<string> && memoryProcessors) { DARABONBA_PTR_SET_RVALUE(memoryProcessors_, memoryProcessors) };


    // memoryProtectedMode Field Functions 
    bool hasMemoryProtectedMode() const { return this->memoryProtectedMode_ != nullptr;};
    void deleteMemoryProtectedMode() { this->memoryProtectedMode_ = nullptr;};
    inline string memoryProtectedMode() const { DARABONBA_PTR_GET_DEFAULT(memoryProtectedMode_, "") };
    inline ModifyCenterPolicyRequest& setMemoryProtectedMode(string memoryProtectedMode) { DARABONBA_PTR_SET_VALUE(memoryProtectedMode_, memoryProtectedMode) };


    // memoryRateLimit Field Functions 
    bool hasMemoryRateLimit() const { return this->memoryRateLimit_ != nullptr;};
    void deleteMemoryRateLimit() { this->memoryRateLimit_ = nullptr;};
    inline int32_t memoryRateLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryRateLimit_, 0) };
    inline ModifyCenterPolicyRequest& setMemoryRateLimit(int32_t memoryRateLimit) { DARABONBA_PTR_SET_VALUE(memoryRateLimit_, memoryRateLimit) };


    // memorySampleDuration Field Functions 
    bool hasMemorySampleDuration() const { return this->memorySampleDuration_ != nullptr;};
    void deleteMemorySampleDuration() { this->memorySampleDuration_ = nullptr;};
    inline int32_t memorySampleDuration() const { DARABONBA_PTR_GET_DEFAULT(memorySampleDuration_, 0) };
    inline ModifyCenterPolicyRequest& setMemorySampleDuration(int32_t memorySampleDuration) { DARABONBA_PTR_SET_VALUE(memorySampleDuration_, memorySampleDuration) };


    // memorySingleRateLimit Field Functions 
    bool hasMemorySingleRateLimit() const { return this->memorySingleRateLimit_ != nullptr;};
    void deleteMemorySingleRateLimit() { this->memorySingleRateLimit_ = nullptr;};
    inline int32_t memorySingleRateLimit() const { DARABONBA_PTR_GET_DEFAULT(memorySingleRateLimit_, 0) };
    inline ModifyCenterPolicyRequest& setMemorySingleRateLimit(int32_t memorySingleRateLimit) { DARABONBA_PTR_SET_VALUE(memorySingleRateLimit_, memorySingleRateLimit) };


    // mobileRestart Field Functions 
    bool hasMobileRestart() const { return this->mobileRestart_ != nullptr;};
    void deleteMobileRestart() { this->mobileRestart_ = nullptr;};
    inline string mobileRestart() const { DARABONBA_PTR_GET_DEFAULT(mobileRestart_, "") };
    inline ModifyCenterPolicyRequest& setMobileRestart(string mobileRestart) { DARABONBA_PTR_SET_VALUE(mobileRestart_, mobileRestart) };


    // mobileSafeMenu Field Functions 
    bool hasMobileSafeMenu() const { return this->mobileSafeMenu_ != nullptr;};
    void deleteMobileSafeMenu() { this->mobileSafeMenu_ = nullptr;};
    inline string mobileSafeMenu() const { DARABONBA_PTR_GET_DEFAULT(mobileSafeMenu_, "") };
    inline ModifyCenterPolicyRequest& setMobileSafeMenu(string mobileSafeMenu) { DARABONBA_PTR_SET_VALUE(mobileSafeMenu_, mobileSafeMenu) };


    // mobileShutdown Field Functions 
    bool hasMobileShutdown() const { return this->mobileShutdown_ != nullptr;};
    void deleteMobileShutdown() { this->mobileShutdown_ = nullptr;};
    inline string mobileShutdown() const { DARABONBA_PTR_GET_DEFAULT(mobileShutdown_, "") };
    inline ModifyCenterPolicyRequest& setMobileShutdown(string mobileShutdown) { DARABONBA_PTR_SET_VALUE(mobileShutdown_, mobileShutdown) };


    // mobileWuyingKeeper Field Functions 
    bool hasMobileWuyingKeeper() const { return this->mobileWuyingKeeper_ != nullptr;};
    void deleteMobileWuyingKeeper() { this->mobileWuyingKeeper_ = nullptr;};
    inline string mobileWuyingKeeper() const { DARABONBA_PTR_GET_DEFAULT(mobileWuyingKeeper_, "") };
    inline ModifyCenterPolicyRequest& setMobileWuyingKeeper(string mobileWuyingKeeper) { DARABONBA_PTR_SET_VALUE(mobileWuyingKeeper_, mobileWuyingKeeper) };


    // mobileWyAssistant Field Functions 
    bool hasMobileWyAssistant() const { return this->mobileWyAssistant_ != nullptr;};
    void deleteMobileWyAssistant() { this->mobileWyAssistant_ = nullptr;};
    inline string mobileWyAssistant() const { DARABONBA_PTR_GET_DEFAULT(mobileWyAssistant_, "") };
    inline ModifyCenterPolicyRequest& setMobileWyAssistant(string mobileWyAssistant) { DARABONBA_PTR_SET_VALUE(mobileWyAssistant_, mobileWyAssistant) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyCenterPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netRedirect Field Functions 
    bool hasNetRedirect() const { return this->netRedirect_ != nullptr;};
    void deleteNetRedirect() { this->netRedirect_ = nullptr;};
    inline string netRedirect() const { DARABONBA_PTR_GET_DEFAULT(netRedirect_, "") };
    inline ModifyCenterPolicyRequest& setNetRedirect(string netRedirect) { DARABONBA_PTR_SET_VALUE(netRedirect_, netRedirect) };


    // netRedirectRule Field Functions 
    bool hasNetRedirectRule() const { return this->netRedirectRule_ != nullptr;};
    void deleteNetRedirectRule() { this->netRedirectRule_ = nullptr;};
    inline const vector<ModifyCenterPolicyRequestNetRedirectRule> & netRedirectRule() const { DARABONBA_PTR_GET_CONST(netRedirectRule_, vector<ModifyCenterPolicyRequestNetRedirectRule>) };
    inline vector<ModifyCenterPolicyRequestNetRedirectRule> netRedirectRule() { DARABONBA_PTR_GET(netRedirectRule_, vector<ModifyCenterPolicyRequestNetRedirectRule>) };
    inline ModifyCenterPolicyRequest& setNetRedirectRule(const vector<ModifyCenterPolicyRequestNetRedirectRule> & netRedirectRule) { DARABONBA_PTR_SET_VALUE(netRedirectRule_, netRedirectRule) };
    inline ModifyCenterPolicyRequest& setNetRedirectRule(vector<ModifyCenterPolicyRequestNetRedirectRule> && netRedirectRule) { DARABONBA_PTR_SET_RVALUE(netRedirectRule_, netRedirectRule) };


    // noOperationDisconnect Field Functions 
    bool hasNoOperationDisconnect() const { return this->noOperationDisconnect_ != nullptr;};
    void deleteNoOperationDisconnect() { this->noOperationDisconnect_ = nullptr;};
    inline string noOperationDisconnect() const { DARABONBA_PTR_GET_DEFAULT(noOperationDisconnect_, "") };
    inline ModifyCenterPolicyRequest& setNoOperationDisconnect(string noOperationDisconnect) { DARABONBA_PTR_SET_VALUE(noOperationDisconnect_, noOperationDisconnect) };


    // noOperationDisconnectTime Field Functions 
    bool hasNoOperationDisconnectTime() const { return this->noOperationDisconnectTime_ != nullptr;};
    void deleteNoOperationDisconnectTime() { this->noOperationDisconnectTime_ = nullptr;};
    inline int32_t noOperationDisconnectTime() const { DARABONBA_PTR_GET_DEFAULT(noOperationDisconnectTime_, 0) };
    inline ModifyCenterPolicyRequest& setNoOperationDisconnectTime(int32_t noOperationDisconnectTime) { DARABONBA_PTR_SET_VALUE(noOperationDisconnectTime_, noOperationDisconnectTime) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ModifyCenterPolicyRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // printerRedirect Field Functions 
    bool hasPrinterRedirect() const { return this->printerRedirect_ != nullptr;};
    void deletePrinterRedirect() { this->printerRedirect_ = nullptr;};
    inline string printerRedirect() const { DARABONBA_PTR_GET_DEFAULT(printerRedirect_, "") };
    inline ModifyCenterPolicyRequest& setPrinterRedirect(string printerRedirect) { DARABONBA_PTR_SET_VALUE(printerRedirect_, printerRedirect) };


    // qualityEnhancement Field Functions 
    bool hasQualityEnhancement() const { return this->qualityEnhancement_ != nullptr;};
    void deleteQualityEnhancement() { this->qualityEnhancement_ = nullptr;};
    inline string qualityEnhancement() const { DARABONBA_PTR_GET_DEFAULT(qualityEnhancement_, "") };
    inline ModifyCenterPolicyRequest& setQualityEnhancement(string qualityEnhancement) { DARABONBA_PTR_SET_VALUE(qualityEnhancement_, qualityEnhancement) };


    // recordEventDuration Field Functions 
    bool hasRecordEventDuration() const { return this->recordEventDuration_ != nullptr;};
    void deleteRecordEventDuration() { this->recordEventDuration_ = nullptr;};
    inline int32_t recordEventDuration() const { DARABONBA_PTR_GET_DEFAULT(recordEventDuration_, 0) };
    inline ModifyCenterPolicyRequest& setRecordEventDuration(int32_t recordEventDuration) { DARABONBA_PTR_SET_VALUE(recordEventDuration_, recordEventDuration) };


    // recordEventFileExts Field Functions 
    bool hasRecordEventFileExts() const { return this->recordEventFileExts_ != nullptr;};
    void deleteRecordEventFileExts() { this->recordEventFileExts_ = nullptr;};
    inline const vector<string> & recordEventFileExts() const { DARABONBA_PTR_GET_CONST(recordEventFileExts_, vector<string>) };
    inline vector<string> recordEventFileExts() { DARABONBA_PTR_GET(recordEventFileExts_, vector<string>) };
    inline ModifyCenterPolicyRequest& setRecordEventFileExts(const vector<string> & recordEventFileExts) { DARABONBA_PTR_SET_VALUE(recordEventFileExts_, recordEventFileExts) };
    inline ModifyCenterPolicyRequest& setRecordEventFileExts(vector<string> && recordEventFileExts) { DARABONBA_PTR_SET_RVALUE(recordEventFileExts_, recordEventFileExts) };


    // recordEventFilePaths Field Functions 
    bool hasRecordEventFilePaths() const { return this->recordEventFilePaths_ != nullptr;};
    void deleteRecordEventFilePaths() { this->recordEventFilePaths_ = nullptr;};
    inline const vector<string> & recordEventFilePaths() const { DARABONBA_PTR_GET_CONST(recordEventFilePaths_, vector<string>) };
    inline vector<string> recordEventFilePaths() { DARABONBA_PTR_GET(recordEventFilePaths_, vector<string>) };
    inline ModifyCenterPolicyRequest& setRecordEventFilePaths(const vector<string> & recordEventFilePaths) { DARABONBA_PTR_SET_VALUE(recordEventFilePaths_, recordEventFilePaths) };
    inline ModifyCenterPolicyRequest& setRecordEventFilePaths(vector<string> && recordEventFilePaths) { DARABONBA_PTR_SET_RVALUE(recordEventFilePaths_, recordEventFilePaths) };


    // recordEventLevels Field Functions 
    bool hasRecordEventLevels() const { return this->recordEventLevels_ != nullptr;};
    void deleteRecordEventLevels() { this->recordEventLevels_ = nullptr;};
    inline const vector<ModifyCenterPolicyRequestRecordEventLevels> & recordEventLevels() const { DARABONBA_PTR_GET_CONST(recordEventLevels_, vector<ModifyCenterPolicyRequestRecordEventLevels>) };
    inline vector<ModifyCenterPolicyRequestRecordEventLevels> recordEventLevels() { DARABONBA_PTR_GET(recordEventLevels_, vector<ModifyCenterPolicyRequestRecordEventLevels>) };
    inline ModifyCenterPolicyRequest& setRecordEventLevels(const vector<ModifyCenterPolicyRequestRecordEventLevels> & recordEventLevels) { DARABONBA_PTR_SET_VALUE(recordEventLevels_, recordEventLevels) };
    inline ModifyCenterPolicyRequest& setRecordEventLevels(vector<ModifyCenterPolicyRequestRecordEventLevels> && recordEventLevels) { DARABONBA_PTR_SET_RVALUE(recordEventLevels_, recordEventLevels) };


    // recordEventRegisters Field Functions 
    bool hasRecordEventRegisters() const { return this->recordEventRegisters_ != nullptr;};
    void deleteRecordEventRegisters() { this->recordEventRegisters_ = nullptr;};
    inline const vector<string> & recordEventRegisters() const { DARABONBA_PTR_GET_CONST(recordEventRegisters_, vector<string>) };
    inline vector<string> recordEventRegisters() { DARABONBA_PTR_GET(recordEventRegisters_, vector<string>) };
    inline ModifyCenterPolicyRequest& setRecordEventRegisters(const vector<string> & recordEventRegisters) { DARABONBA_PTR_SET_VALUE(recordEventRegisters_, recordEventRegisters) };
    inline ModifyCenterPolicyRequest& setRecordEventRegisters(vector<string> && recordEventRegisters) { DARABONBA_PTR_SET_RVALUE(recordEventRegisters_, recordEventRegisters) };


    // recordEvents Field Functions 
    bool hasRecordEvents() const { return this->recordEvents_ != nullptr;};
    void deleteRecordEvents() { this->recordEvents_ = nullptr;};
    inline const vector<string> & recordEvents() const { DARABONBA_PTR_GET_CONST(recordEvents_, vector<string>) };
    inline vector<string> recordEvents() { DARABONBA_PTR_GET(recordEvents_, vector<string>) };
    inline ModifyCenterPolicyRequest& setRecordEvents(const vector<string> & recordEvents) { DARABONBA_PTR_SET_VALUE(recordEvents_, recordEvents) };
    inline ModifyCenterPolicyRequest& setRecordEvents(vector<string> && recordEvents) { DARABONBA_PTR_SET_RVALUE(recordEvents_, recordEvents) };


    // recording Field Functions 
    bool hasRecording() const { return this->recording_ != nullptr;};
    void deleteRecording() { this->recording_ = nullptr;};
    inline string recording() const { DARABONBA_PTR_GET_DEFAULT(recording_, "") };
    inline ModifyCenterPolicyRequest& setRecording(string recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };


    // recordingAudio Field Functions 
    bool hasRecordingAudio() const { return this->recordingAudio_ != nullptr;};
    void deleteRecordingAudio() { this->recordingAudio_ = nullptr;};
    inline string recordingAudio() const { DARABONBA_PTR_GET_DEFAULT(recordingAudio_, "") };
    inline ModifyCenterPolicyRequest& setRecordingAudio(string recordingAudio) { DARABONBA_PTR_SET_VALUE(recordingAudio_, recordingAudio) };


    // recordingDuration Field Functions 
    bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
    void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
    inline int32_t recordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0) };
    inline ModifyCenterPolicyRequest& setRecordingDuration(int32_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


    // recordingEndTime Field Functions 
    bool hasRecordingEndTime() const { return this->recordingEndTime_ != nullptr;};
    void deleteRecordingEndTime() { this->recordingEndTime_ = nullptr;};
    inline string recordingEndTime() const { DARABONBA_PTR_GET_DEFAULT(recordingEndTime_, "") };
    inline ModifyCenterPolicyRequest& setRecordingEndTime(string recordingEndTime) { DARABONBA_PTR_SET_VALUE(recordingEndTime_, recordingEndTime) };


    // recordingExpires Field Functions 
    bool hasRecordingExpires() const { return this->recordingExpires_ != nullptr;};
    void deleteRecordingExpires() { this->recordingExpires_ = nullptr;};
    inline int32_t recordingExpires() const { DARABONBA_PTR_GET_DEFAULT(recordingExpires_, 0) };
    inline ModifyCenterPolicyRequest& setRecordingExpires(int32_t recordingExpires) { DARABONBA_PTR_SET_VALUE(recordingExpires_, recordingExpires) };


    // recordingFps Field Functions 
    bool hasRecordingFps() const { return this->recordingFps_ != nullptr;};
    void deleteRecordingFps() { this->recordingFps_ = nullptr;};
    inline string recordingFps() const { DARABONBA_PTR_GET_DEFAULT(recordingFps_, "") };
    inline ModifyCenterPolicyRequest& setRecordingFps(string recordingFps) { DARABONBA_PTR_SET_VALUE(recordingFps_, recordingFps) };


    // recordingStartTime Field Functions 
    bool hasRecordingStartTime() const { return this->recordingStartTime_ != nullptr;};
    void deleteRecordingStartTime() { this->recordingStartTime_ = nullptr;};
    inline string recordingStartTime() const { DARABONBA_PTR_GET_DEFAULT(recordingStartTime_, "") };
    inline ModifyCenterPolicyRequest& setRecordingStartTime(string recordingStartTime) { DARABONBA_PTR_SET_VALUE(recordingStartTime_, recordingStartTime) };


    // recordingUserNotify Field Functions 
    bool hasRecordingUserNotify() const { return this->recordingUserNotify_ != nullptr;};
    void deleteRecordingUserNotify() { this->recordingUserNotify_ = nullptr;};
    inline string recordingUserNotify() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotify_, "") };
    inline ModifyCenterPolicyRequest& setRecordingUserNotify(string recordingUserNotify) { DARABONBA_PTR_SET_VALUE(recordingUserNotify_, recordingUserNotify) };


    // recordingUserNotifyMessage Field Functions 
    bool hasRecordingUserNotifyMessage() const { return this->recordingUserNotifyMessage_ != nullptr;};
    void deleteRecordingUserNotifyMessage() { this->recordingUserNotifyMessage_ = nullptr;};
    inline string recordingUserNotifyMessage() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotifyMessage_, "") };
    inline ModifyCenterPolicyRequest& setRecordingUserNotifyMessage(string recordingUserNotifyMessage) { DARABONBA_PTR_SET_VALUE(recordingUserNotifyMessage_, recordingUserNotifyMessage) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCenterPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteCoordinate Field Functions 
    bool hasRemoteCoordinate() const { return this->remoteCoordinate_ != nullptr;};
    void deleteRemoteCoordinate() { this->remoteCoordinate_ = nullptr;};
    inline string remoteCoordinate() const { DARABONBA_PTR_GET_DEFAULT(remoteCoordinate_, "") };
    inline ModifyCenterPolicyRequest& setRemoteCoordinate(string remoteCoordinate) { DARABONBA_PTR_SET_VALUE(remoteCoordinate_, remoteCoordinate) };


    // resetDesktop Field Functions 
    bool hasResetDesktop() const { return this->resetDesktop_ != nullptr;};
    void deleteResetDesktop() { this->resetDesktop_ = nullptr;};
    inline string resetDesktop() const { DARABONBA_PTR_GET_DEFAULT(resetDesktop_, "") };
    inline ModifyCenterPolicyRequest& setResetDesktop(string resetDesktop) { DARABONBA_PTR_SET_VALUE(resetDesktop_, resetDesktop) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t resolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline ModifyCenterPolicyRequest& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionModel Field Functions 
    bool hasResolutionModel() const { return this->resolutionModel_ != nullptr;};
    void deleteResolutionModel() { this->resolutionModel_ = nullptr;};
    inline string resolutionModel() const { DARABONBA_PTR_GET_DEFAULT(resolutionModel_, "") };
    inline ModifyCenterPolicyRequest& setResolutionModel(string resolutionModel) { DARABONBA_PTR_SET_VALUE(resolutionModel_, resolutionModel) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t resolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline ModifyCenterPolicyRequest& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ModifyCenterPolicyRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // revokeAccessPolicyRule Field Functions 
    bool hasRevokeAccessPolicyRule() const { return this->revokeAccessPolicyRule_ != nullptr;};
    void deleteRevokeAccessPolicyRule() { this->revokeAccessPolicyRule_ = nullptr;};
    inline const vector<ModifyCenterPolicyRequestRevokeAccessPolicyRule> & revokeAccessPolicyRule() const { DARABONBA_PTR_GET_CONST(revokeAccessPolicyRule_, vector<ModifyCenterPolicyRequestRevokeAccessPolicyRule>) };
    inline vector<ModifyCenterPolicyRequestRevokeAccessPolicyRule> revokeAccessPolicyRule() { DARABONBA_PTR_GET(revokeAccessPolicyRule_, vector<ModifyCenterPolicyRequestRevokeAccessPolicyRule>) };
    inline ModifyCenterPolicyRequest& setRevokeAccessPolicyRule(const vector<ModifyCenterPolicyRequestRevokeAccessPolicyRule> & revokeAccessPolicyRule) { DARABONBA_PTR_SET_VALUE(revokeAccessPolicyRule_, revokeAccessPolicyRule) };
    inline ModifyCenterPolicyRequest& setRevokeAccessPolicyRule(vector<ModifyCenterPolicyRequestRevokeAccessPolicyRule> && revokeAccessPolicyRule) { DARABONBA_PTR_SET_RVALUE(revokeAccessPolicyRule_, revokeAccessPolicyRule) };


    // revokeSecurityPolicyRule Field Functions 
    bool hasRevokeSecurityPolicyRule() const { return this->revokeSecurityPolicyRule_ != nullptr;};
    void deleteRevokeSecurityPolicyRule() { this->revokeSecurityPolicyRule_ = nullptr;};
    inline const vector<ModifyCenterPolicyRequestRevokeSecurityPolicyRule> & revokeSecurityPolicyRule() const { DARABONBA_PTR_GET_CONST(revokeSecurityPolicyRule_, vector<ModifyCenterPolicyRequestRevokeSecurityPolicyRule>) };
    inline vector<ModifyCenterPolicyRequestRevokeSecurityPolicyRule> revokeSecurityPolicyRule() { DARABONBA_PTR_GET(revokeSecurityPolicyRule_, vector<ModifyCenterPolicyRequestRevokeSecurityPolicyRule>) };
    inline ModifyCenterPolicyRequest& setRevokeSecurityPolicyRule(const vector<ModifyCenterPolicyRequestRevokeSecurityPolicyRule> & revokeSecurityPolicyRule) { DARABONBA_PTR_SET_VALUE(revokeSecurityPolicyRule_, revokeSecurityPolicyRule) };
    inline ModifyCenterPolicyRequest& setRevokeSecurityPolicyRule(vector<ModifyCenterPolicyRequestRevokeSecurityPolicyRule> && revokeSecurityPolicyRule) { DARABONBA_PTR_SET_RVALUE(revokeSecurityPolicyRule_, revokeSecurityPolicyRule) };


    // safeMenu Field Functions 
    bool hasSafeMenu() const { return this->safeMenu_ != nullptr;};
    void deleteSafeMenu() { this->safeMenu_ = nullptr;};
    inline string safeMenu() const { DARABONBA_PTR_GET_DEFAULT(safeMenu_, "") };
    inline ModifyCenterPolicyRequest& setSafeMenu(string safeMenu) { DARABONBA_PTR_SET_VALUE(safeMenu_, safeMenu) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ModifyCenterPolicyRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // scopeValue Field Functions 
    bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
    void deleteScopeValue() { this->scopeValue_ = nullptr;};
    inline const vector<string> & scopeValue() const { DARABONBA_PTR_GET_CONST(scopeValue_, vector<string>) };
    inline vector<string> scopeValue() { DARABONBA_PTR_GET(scopeValue_, vector<string>) };
    inline ModifyCenterPolicyRequest& setScopeValue(const vector<string> & scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };
    inline ModifyCenterPolicyRequest& setScopeValue(vector<string> && scopeValue) { DARABONBA_PTR_SET_RVALUE(scopeValue_, scopeValue) };


    // screenDisplayMode Field Functions 
    bool hasScreenDisplayMode() const { return this->screenDisplayMode_ != nullptr;};
    void deleteScreenDisplayMode() { this->screenDisplayMode_ = nullptr;};
    inline string screenDisplayMode() const { DARABONBA_PTR_GET_DEFAULT(screenDisplayMode_, "") };
    inline ModifyCenterPolicyRequest& setScreenDisplayMode(string screenDisplayMode) { DARABONBA_PTR_SET_VALUE(screenDisplayMode_, screenDisplayMode) };


    // sessionMaxRateKbps Field Functions 
    bool hasSessionMaxRateKbps() const { return this->sessionMaxRateKbps_ != nullptr;};
    void deleteSessionMaxRateKbps() { this->sessionMaxRateKbps_ = nullptr;};
    inline int32_t sessionMaxRateKbps() const { DARABONBA_PTR_GET_DEFAULT(sessionMaxRateKbps_, 0) };
    inline ModifyCenterPolicyRequest& setSessionMaxRateKbps(int32_t sessionMaxRateKbps) { DARABONBA_PTR_SET_VALUE(sessionMaxRateKbps_, sessionMaxRateKbps) };


    // smoothEnhancement Field Functions 
    bool hasSmoothEnhancement() const { return this->smoothEnhancement_ != nullptr;};
    void deleteSmoothEnhancement() { this->smoothEnhancement_ = nullptr;};
    inline string smoothEnhancement() const { DARABONBA_PTR_GET_DEFAULT(smoothEnhancement_, "") };
    inline ModifyCenterPolicyRequest& setSmoothEnhancement(string smoothEnhancement) { DARABONBA_PTR_SET_VALUE(smoothEnhancement_, smoothEnhancement) };


    // statusMonitor Field Functions 
    bool hasStatusMonitor() const { return this->statusMonitor_ != nullptr;};
    void deleteStatusMonitor() { this->statusMonitor_ = nullptr;};
    inline string statusMonitor() const { DARABONBA_PTR_GET_DEFAULT(statusMonitor_, "") };
    inline ModifyCenterPolicyRequest& setStatusMonitor(string statusMonitor) { DARABONBA_PTR_SET_VALUE(statusMonitor_, statusMonitor) };


    // streamingMode Field Functions 
    bool hasStreamingMode() const { return this->streamingMode_ != nullptr;};
    void deleteStreamingMode() { this->streamingMode_ = nullptr;};
    inline string streamingMode() const { DARABONBA_PTR_GET_DEFAULT(streamingMode_, "") };
    inline ModifyCenterPolicyRequest& setStreamingMode(string streamingMode) { DARABONBA_PTR_SET_VALUE(streamingMode_, streamingMode) };


    // targetFps Field Functions 
    bool hasTargetFps() const { return this->targetFps_ != nullptr;};
    void deleteTargetFps() { this->targetFps_ = nullptr;};
    inline int32_t targetFps() const { DARABONBA_PTR_GET_DEFAULT(targetFps_, 0) };
    inline ModifyCenterPolicyRequest& setTargetFps(int32_t targetFps) { DARABONBA_PTR_SET_VALUE(targetFps_, targetFps) };


    // taskbar Field Functions 
    bool hasTaskbar() const { return this->taskbar_ != nullptr;};
    void deleteTaskbar() { this->taskbar_ = nullptr;};
    inline string taskbar() const { DARABONBA_PTR_GET_DEFAULT(taskbar_, "") };
    inline ModifyCenterPolicyRequest& setTaskbar(string taskbar) { DARABONBA_PTR_SET_VALUE(taskbar_, taskbar) };


    // usbRedirect Field Functions 
    bool hasUsbRedirect() const { return this->usbRedirect_ != nullptr;};
    void deleteUsbRedirect() { this->usbRedirect_ = nullptr;};
    inline string usbRedirect() const { DARABONBA_PTR_GET_DEFAULT(usbRedirect_, "") };
    inline ModifyCenterPolicyRequest& setUsbRedirect(string usbRedirect) { DARABONBA_PTR_SET_VALUE(usbRedirect_, usbRedirect) };


    // usbSupplyRedirectRule Field Functions 
    bool hasUsbSupplyRedirectRule() const { return this->usbSupplyRedirectRule_ != nullptr;};
    void deleteUsbSupplyRedirectRule() { this->usbSupplyRedirectRule_ = nullptr;};
    inline const vector<ModifyCenterPolicyRequestUsbSupplyRedirectRule> & usbSupplyRedirectRule() const { DARABONBA_PTR_GET_CONST(usbSupplyRedirectRule_, vector<ModifyCenterPolicyRequestUsbSupplyRedirectRule>) };
    inline vector<ModifyCenterPolicyRequestUsbSupplyRedirectRule> usbSupplyRedirectRule() { DARABONBA_PTR_GET(usbSupplyRedirectRule_, vector<ModifyCenterPolicyRequestUsbSupplyRedirectRule>) };
    inline ModifyCenterPolicyRequest& setUsbSupplyRedirectRule(const vector<ModifyCenterPolicyRequestUsbSupplyRedirectRule> & usbSupplyRedirectRule) { DARABONBA_PTR_SET_VALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };
    inline ModifyCenterPolicyRequest& setUsbSupplyRedirectRule(vector<ModifyCenterPolicyRequestUsbSupplyRedirectRule> && usbSupplyRedirectRule) { DARABONBA_PTR_SET_RVALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };


    // useTime Field Functions 
    bool hasUseTime() const { return this->useTime_ != nullptr;};
    void deleteUseTime() { this->useTime_ = nullptr;};
    inline string useTime() const { DARABONBA_PTR_GET_DEFAULT(useTime_, "") };
    inline ModifyCenterPolicyRequest& setUseTime(string useTime) { DARABONBA_PTR_SET_VALUE(useTime_, useTime) };


    // videoEncAvgKbps Field Functions 
    bool hasVideoEncAvgKbps() const { return this->videoEncAvgKbps_ != nullptr;};
    void deleteVideoEncAvgKbps() { this->videoEncAvgKbps_ = nullptr;};
    inline int32_t videoEncAvgKbps() const { DARABONBA_PTR_GET_DEFAULT(videoEncAvgKbps_, 0) };
    inline ModifyCenterPolicyRequest& setVideoEncAvgKbps(int32_t videoEncAvgKbps) { DARABONBA_PTR_SET_VALUE(videoEncAvgKbps_, videoEncAvgKbps) };


    // videoEncMaxQP Field Functions 
    bool hasVideoEncMaxQP() const { return this->videoEncMaxQP_ != nullptr;};
    void deleteVideoEncMaxQP() { this->videoEncMaxQP_ = nullptr;};
    inline int32_t videoEncMaxQP() const { DARABONBA_PTR_GET_DEFAULT(videoEncMaxQP_, 0) };
    inline ModifyCenterPolicyRequest& setVideoEncMaxQP(int32_t videoEncMaxQP) { DARABONBA_PTR_SET_VALUE(videoEncMaxQP_, videoEncMaxQP) };


    // videoEncMinQP Field Functions 
    bool hasVideoEncMinQP() const { return this->videoEncMinQP_ != nullptr;};
    void deleteVideoEncMinQP() { this->videoEncMinQP_ = nullptr;};
    inline int32_t videoEncMinQP() const { DARABONBA_PTR_GET_DEFAULT(videoEncMinQP_, 0) };
    inline ModifyCenterPolicyRequest& setVideoEncMinQP(int32_t videoEncMinQP) { DARABONBA_PTR_SET_VALUE(videoEncMinQP_, videoEncMinQP) };


    // videoEncPeakKbps Field Functions 
    bool hasVideoEncPeakKbps() const { return this->videoEncPeakKbps_ != nullptr;};
    void deleteVideoEncPeakKbps() { this->videoEncPeakKbps_ = nullptr;};
    inline int32_t videoEncPeakKbps() const { DARABONBA_PTR_GET_DEFAULT(videoEncPeakKbps_, 0) };
    inline ModifyCenterPolicyRequest& setVideoEncPeakKbps(int32_t videoEncPeakKbps) { DARABONBA_PTR_SET_VALUE(videoEncPeakKbps_, videoEncPeakKbps) };


    // videoEncPolicy Field Functions 
    bool hasVideoEncPolicy() const { return this->videoEncPolicy_ != nullptr;};
    void deleteVideoEncPolicy() { this->videoEncPolicy_ = nullptr;};
    inline string videoEncPolicy() const { DARABONBA_PTR_GET_DEFAULT(videoEncPolicy_, "") };
    inline ModifyCenterPolicyRequest& setVideoEncPolicy(string videoEncPolicy) { DARABONBA_PTR_SET_VALUE(videoEncPolicy_, videoEncPolicy) };


    // videoRedirect Field Functions 
    bool hasVideoRedirect() const { return this->videoRedirect_ != nullptr;};
    void deleteVideoRedirect() { this->videoRedirect_ = nullptr;};
    inline string videoRedirect() const { DARABONBA_PTR_GET_DEFAULT(videoRedirect_, "") };
    inline ModifyCenterPolicyRequest& setVideoRedirect(string videoRedirect) { DARABONBA_PTR_SET_VALUE(videoRedirect_, videoRedirect) };


    // visualQuality Field Functions 
    bool hasVisualQuality() const { return this->visualQuality_ != nullptr;};
    void deleteVisualQuality() { this->visualQuality_ = nullptr;};
    inline string visualQuality() const { DARABONBA_PTR_GET_DEFAULT(visualQuality_, "") };
    inline ModifyCenterPolicyRequest& setVisualQuality(string visualQuality) { DARABONBA_PTR_SET_VALUE(visualQuality_, visualQuality) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline string watermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, "") };
    inline ModifyCenterPolicyRequest& setWatermark(string watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


    // watermarkAntiCam Field Functions 
    bool hasWatermarkAntiCam() const { return this->watermarkAntiCam_ != nullptr;};
    void deleteWatermarkAntiCam() { this->watermarkAntiCam_ = nullptr;};
    inline string watermarkAntiCam() const { DARABONBA_PTR_GET_DEFAULT(watermarkAntiCam_, "") };
    inline ModifyCenterPolicyRequest& setWatermarkAntiCam(string watermarkAntiCam) { DARABONBA_PTR_SET_VALUE(watermarkAntiCam_, watermarkAntiCam) };


    // watermarkColor Field Functions 
    bool hasWatermarkColor() const { return this->watermarkColor_ != nullptr;};
    void deleteWatermarkColor() { this->watermarkColor_ = nullptr;};
    inline int32_t watermarkColor() const { DARABONBA_PTR_GET_DEFAULT(watermarkColor_, 0) };
    inline ModifyCenterPolicyRequest& setWatermarkColor(int32_t watermarkColor) { DARABONBA_PTR_SET_VALUE(watermarkColor_, watermarkColor) };


    // watermarkColumnAmount Field Functions 
    bool hasWatermarkColumnAmount() const { return this->watermarkColumnAmount_ != nullptr;};
    void deleteWatermarkColumnAmount() { this->watermarkColumnAmount_ = nullptr;};
    inline int32_t watermarkColumnAmount() const { DARABONBA_PTR_GET_DEFAULT(watermarkColumnAmount_, 0) };
    inline ModifyCenterPolicyRequest& setWatermarkColumnAmount(int32_t watermarkColumnAmount) { DARABONBA_PTR_SET_VALUE(watermarkColumnAmount_, watermarkColumnAmount) };


    // watermarkCustomText Field Functions 
    bool hasWatermarkCustomText() const { return this->watermarkCustomText_ != nullptr;};
    void deleteWatermarkCustomText() { this->watermarkCustomText_ = nullptr;};
    inline string watermarkCustomText() const { DARABONBA_PTR_GET_DEFAULT(watermarkCustomText_, "") };
    inline ModifyCenterPolicyRequest& setWatermarkCustomText(string watermarkCustomText) { DARABONBA_PTR_SET_VALUE(watermarkCustomText_, watermarkCustomText) };


    // watermarkDegree Field Functions 
    bool hasWatermarkDegree() const { return this->watermarkDegree_ != nullptr;};
    void deleteWatermarkDegree() { this->watermarkDegree_ = nullptr;};
    inline double watermarkDegree() const { DARABONBA_PTR_GET_DEFAULT(watermarkDegree_, 0.0) };
    inline ModifyCenterPolicyRequest& setWatermarkDegree(double watermarkDegree) { DARABONBA_PTR_SET_VALUE(watermarkDegree_, watermarkDegree) };


    // watermarkFontSize Field Functions 
    bool hasWatermarkFontSize() const { return this->watermarkFontSize_ != nullptr;};
    void deleteWatermarkFontSize() { this->watermarkFontSize_ = nullptr;};
    inline int32_t watermarkFontSize() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontSize_, 0) };
    inline ModifyCenterPolicyRequest& setWatermarkFontSize(int32_t watermarkFontSize) { DARABONBA_PTR_SET_VALUE(watermarkFontSize_, watermarkFontSize) };


    // watermarkFontStyle Field Functions 
    bool hasWatermarkFontStyle() const { return this->watermarkFontStyle_ != nullptr;};
    void deleteWatermarkFontStyle() { this->watermarkFontStyle_ = nullptr;};
    inline string watermarkFontStyle() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontStyle_, "") };
    inline ModifyCenterPolicyRequest& setWatermarkFontStyle(string watermarkFontStyle) { DARABONBA_PTR_SET_VALUE(watermarkFontStyle_, watermarkFontStyle) };


    // watermarkPower Field Functions 
    bool hasWatermarkPower() const { return this->watermarkPower_ != nullptr;};
    void deleteWatermarkPower() { this->watermarkPower_ = nullptr;};
    inline string watermarkPower() const { DARABONBA_PTR_GET_DEFAULT(watermarkPower_, "") };
    inline ModifyCenterPolicyRequest& setWatermarkPower(string watermarkPower) { DARABONBA_PTR_SET_VALUE(watermarkPower_, watermarkPower) };


    // watermarkRowAmount Field Functions 
    bool hasWatermarkRowAmount() const { return this->watermarkRowAmount_ != nullptr;};
    void deleteWatermarkRowAmount() { this->watermarkRowAmount_ = nullptr;};
    inline int32_t watermarkRowAmount() const { DARABONBA_PTR_GET_DEFAULT(watermarkRowAmount_, 0) };
    inline ModifyCenterPolicyRequest& setWatermarkRowAmount(int32_t watermarkRowAmount) { DARABONBA_PTR_SET_VALUE(watermarkRowAmount_, watermarkRowAmount) };


    // watermarkSecurity Field Functions 
    bool hasWatermarkSecurity() const { return this->watermarkSecurity_ != nullptr;};
    void deleteWatermarkSecurity() { this->watermarkSecurity_ = nullptr;};
    inline string watermarkSecurity() const { DARABONBA_PTR_GET_DEFAULT(watermarkSecurity_, "") };
    inline ModifyCenterPolicyRequest& setWatermarkSecurity(string watermarkSecurity) { DARABONBA_PTR_SET_VALUE(watermarkSecurity_, watermarkSecurity) };


    // watermarkTransparencyValue Field Functions 
    bool hasWatermarkTransparencyValue() const { return this->watermarkTransparencyValue_ != nullptr;};
    void deleteWatermarkTransparencyValue() { this->watermarkTransparencyValue_ = nullptr;};
    inline int32_t watermarkTransparencyValue() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparencyValue_, 0) };
    inline ModifyCenterPolicyRequest& setWatermarkTransparencyValue(int32_t watermarkTransparencyValue) { DARABONBA_PTR_SET_VALUE(watermarkTransparencyValue_, watermarkTransparencyValue) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string watermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline ModifyCenterPolicyRequest& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


    // wuyingKeeper Field Functions 
    bool hasWuyingKeeper() const { return this->wuyingKeeper_ != nullptr;};
    void deleteWuyingKeeper() { this->wuyingKeeper_ = nullptr;};
    inline string wuyingKeeper() const { DARABONBA_PTR_GET_DEFAULT(wuyingKeeper_, "") };
    inline ModifyCenterPolicyRequest& setWuyingKeeper(string wuyingKeeper) { DARABONBA_PTR_SET_VALUE(wuyingKeeper_, wuyingKeeper) };


    // wyAssistant Field Functions 
    bool hasWyAssistant() const { return this->wyAssistant_ != nullptr;};
    void deleteWyAssistant() { this->wyAssistant_ = nullptr;};
    inline string wyAssistant() const { DARABONBA_PTR_GET_DEFAULT(wyAssistant_, "") };
    inline ModifyCenterPolicyRequest& setWyAssistant(string wyAssistant) { DARABONBA_PTR_SET_VALUE(wyAssistant_, wyAssistant) };


  protected:
    // Specifies whether to grant the admin permissions to end users.
    // 
    // >  This parameter is in private preview and only available to specific users.
    // 
    // Valid values:
    // 
    // *   allow: forcibly grants admin permissions.
    // *   deny: forcibly rejects granting admin permissions.
    // *   inherited: inherits the admin permissions from the user dimension.
    std::shared_ptr<string> adminAccess_ = nullptr;
    // The anti-screenshot policy.
    // 
    // Valid values:
    // 
    // *   off (default): disables anti-screenshot.
    // *   on: enables anti-screenshot.
    std::shared_ptr<string> appContentProtection_ = nullptr;
    // The client IP address whitelists that you want to add.
    std::shared_ptr<vector<ModifyCenterPolicyRequestAuthorizeAccessPolicyRule>> authorizeAccessPolicyRule_ = nullptr;
    // The security group rules.
    std::shared_ptr<vector<ModifyCenterPolicyRequestAuthorizeSecurityPolicyRule>> authorizeSecurityPolicyRule_ = nullptr;
    std::shared_ptr<string> autoReconnect_ = nullptr;
    // The business type.
    // 
    // Valid values:
    // 
    // *   1: public cloud
    // *   8: commercial edition.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> businessType_ = nullptr;
    // The on-premises camera redirection policy. This parameter only applies if DeviceRedirects does not include an on-premises camera redirection policy.
    // 
    // Valid values:
    // 
    // *   deviceRedirect: enables device redirection.
    // *   off: disables device redirection.
    std::shared_ptr<string> cameraRedirect_ = nullptr;
    std::shared_ptr<string> clientControlMenu_ = nullptr;
    // The types of Alibaba Cloud Workspace clients that end users can use to connect to cloud computers.
    std::shared_ptr<vector<ModifyCenterPolicyRequestClientType>> clientType_ = nullptr;
    // The read/write permissions on the clipboard.
    // 
    // Valid values:
    // 
    // *   read: specifies one-way transfer. You can copy files only from on-premises devices to cloud computers.
    // *   readwrite: specifies two-way transfer. You can copy files between on-premises devices and cloud computers.
    // *   write: specifies one-way transfer. You can only copy files from cloud computers to on-premises devices.
    // *   off (default): disables all transfers, both one-way and two-way. Files cannot be copied directly between on-premises devices and cloud computers.
    std::shared_ptr<string> clipboard_ = nullptr;
    std::shared_ptr<vector<ModifyCenterPolicyRequestClipboardGraineds>> clipboardGraineds_ = nullptr;
    std::shared_ptr<string> clipboardScope_ = nullptr;
    // Specifies whether to enable color enhancement for design and 3D applications.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t enable color enhancement for design and 3D applications.
    // *   on: enables color enhancement for design and 3D applications.
    std::shared_ptr<string> colorEnhancement_ = nullptr;
    std::shared_ptr<string> cpdDriveClipboard_ = nullptr;
    // The CPU underclocking duration. Valid values: 30 to 120. Unit: seconds.
    std::shared_ptr<int32_t> cpuDownGradeDuration_ = nullptr;
    // The CPU processors.
    std::shared_ptr<vector<string>> cpuProcessors_ = nullptr;
    // The CPU spike protection policy.
    // 
    // Valid values:
    // 
    // *   off: disables CPU spike protection.
    // *   on: enables CPU spike protection.
    std::shared_ptr<string> cpuProtectedMode_ = nullptr;
    // The overall CPU usage. Valid values: 70 to 90. Unit: percentage (%).
    std::shared_ptr<int32_t> cpuRateLimit_ = nullptr;
    // The overall CPU sampling duration. Valid values: 10 to 60. Unit: seconds.
    std::shared_ptr<int32_t> cpuSampleDuration_ = nullptr;
    // The single-CPU usage. Valid values: 70 to 100. Unit: %.
    std::shared_ptr<int32_t> cpuSingleRateLimit_ = nullptr;
    // Specifies whether to display the peripheral connection prompt.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t display the peripheral connection prompt.
    // *   on: displays the peripheral connection prompt.
    std::shared_ptr<string> deviceConnectHint_ = nullptr;
    // The device redirection rules.
    std::shared_ptr<vector<ModifyCenterPolicyRequestDeviceRedirects>> deviceRedirects_ = nullptr;
    // The custom peripheral rules.
    std::shared_ptr<vector<ModifyCenterPolicyRequestDeviceRules>> deviceRules_ = nullptr;
    // Specifies whether to retain the session upon disconnection.
    // 
    // >  This parameter applies only to cloud application policies.
    // 
    // Valid values:
    // 
    // *   customTime: retains the session for a specified time period.
    // *   persistent: retains the session permanently.
    std::shared_ptr<string> disconnectKeepSession_ = nullptr;
    // The retention period of the session after disconnection. Valid values: 30 to 7200. Unit: seconds.
    // 
    // >  This parameter applies only to cloud application policies.
    std::shared_ptr<int32_t> disconnectKeepSessionTime_ = nullptr;
    // The display mode.
    // 
    // Valid values:
    // 
    // *   clientCustom: suitable for user-defined scenarios.
    // *   adminOffice: suitable for daily office scenarios.
    // *   adminDesign: suitable for design and 3D application scenarios.
    // *   adminCustom: suitable for admin-customized scenarios.
    std::shared_ptr<string> displayMode_ = nullptr;
    // The domain resolution policies.
    std::shared_ptr<vector<ModifyCenterPolicyRequestDomainResolveRule>> domainResolveRule_ = nullptr;
    // Specifies whether to enforce the domain resolution policy.
    // 
    // Valid values:
    // 
    // *   off: disables the domain resolution policy.
    // *   on: enables the domain resolution policy.
    std::shared_ptr<string> domainResolveRuleType_ = nullptr;
    // Specifies whether to enforce a bandwidth limit for sessions.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t enforce a bandwidth limit for sessions.
    // *   on: enforces a bandwidth limit for sessions.
    std::shared_ptr<string> enableSessionRateLimiting_ = nullptr;
    // Specifies whether to enable end users to request administrator help.
    // 
    // Valid values:
    // 
    // *   off: disables end users to request administrator help.
    // *   on: enables end users to request administrator help.
    std::shared_ptr<string> endUserApplyAdminCoordinate_ = nullptr;
    // Specifies whether to allow end users from the same office network to share cloud computers.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t allow end users from the same office network to share cloud computers.
    // *   on: allows end users from the same office network to share cloud computers.
    std::shared_ptr<string> endUserGroupCoordinate_ = nullptr;
    // Specifies whether to enable file transfer.
    // 
    // Valid values:
    // 
    // *   off: enables file transfer.
    // *   on: disables file transfer.
    std::shared_ptr<string> fileMigrate_ = nullptr;
    std::shared_ptr<string> fileTransferAddress_ = nullptr;
    std::shared_ptr<string> fileTransferSpeed_ = nullptr;
    std::shared_ptr<string> fileTransferSpeedLocation_ = nullptr;
    // Specifies whether to enable Image Quality Control. This feature is highly recommended for professional design scenarios where performance and user experience are critical.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> gpuAcceleration_ = nullptr;
    // The file transfer policy on the web client.
    // 
    // Valid values:
    // 
    // *   all: File upload and download are supported.
    // *   download: Only file download is supported.
    // *   upload: Only file upload is supported.
    // *   off (default): File upload and download are not supported.
    std::shared_ptr<string> html5FileTransfer_ = nullptr;
    // The network communication protocol.
    // 
    // Valid values:
    // 
    // *   tcp: TCP is used when UDP/AST is restricted.
    // *   rtc: AST is used for high-frequency audio and video streaming.
    // *   auto: UTO enables automatic switch between AST and UDP modes based on desktop content.
    // *   both: UDP is ideal for office and HD graphic design use.
    std::shared_ptr<string> internetCommunicationProtocol_ = nullptr;
    std::shared_ptr<string> internetPrinter_ = nullptr;
    // The read/write permissions on the on-premises drive.
    // 
    // Valid values:
    // 
    // *   read: read-only. Cloud computers support on-premises disk mapping, but only for reading (copying) files—not modifying them.
    // *   readwrite: read and write. Cloud computers support on-premises disk mapping, allowing you to read (copy) and write (modify) on-premises files.
    // *   off (default): none. Cloud computers don\\"t support on-premises disk mapping.
    std::shared_ptr<string> localDrive_ = nullptr;
    // The maximum duration to retry reconnecting to cloud computers after an unexpected disconnection (non-human causes). Valid values: 30 to 7200. Unit: seconds.
    std::shared_ptr<int32_t> maxReconnectTime_ = nullptr;
    // The memory underclocking duration per process. Valid values: 30 to 120. Unit: seconds.
    std::shared_ptr<int32_t> memoryDownGradeDuration_ = nullptr;
    // The memory processors.
    std::shared_ptr<vector<string>> memoryProcessors_ = nullptr;
    // The memory spike protection policy.
    // 
    // Valid values:
    // 
    // *   off: disables memory spike protection.
    // *   on: enables memory spike protection.
    std::shared_ptr<string> memoryProtectedMode_ = nullptr;
    // The overall memory usage. Valid values: 70 to 90. Unit: %.
    std::shared_ptr<int32_t> memoryRateLimit_ = nullptr;
    // The overall memory sampling duration. Valid values: 30 to 60. Unit: seconds.
    std::shared_ptr<int32_t> memorySampleDuration_ = nullptr;
    // The memory usage per process. Valid values: 30 to 60. Unit: %.
    std::shared_ptr<int32_t> memorySingleRateLimit_ = nullptr;
    // Specifies whether to display the Restart button in the DesktopAssistant menu when end users connect to cloud computers from Android clients.
    // 
    // >  This feature applies to only mobile clients of version 7.4.0 or later.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t display the Restart button in the DesktopAssistant menu when end users connect to cloud computers from Android clients.
    // *   on: displays the Restart button in the DesktopAssistant menu when end users connect to cloud computers from Android clients.
    std::shared_ptr<string> mobileRestart_ = nullptr;
    std::shared_ptr<string> mobileSafeMenu_ = nullptr;
    // Specifies whether to display the Stop button in the DesktopAssistant menu when end users connect to cloud computers from Android clients.
    // 
    // >  This feature applies to only mobile clients of version 7.4.0 or later.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t display the Stop button in the DesktopAssistant menu when end users connect to cloud computers from Android clients.
    // *   on: displays the Stop button in the DesktopAssistant menu when end users connect to cloud computers from Android clients.
    std::shared_ptr<string> mobileShutdown_ = nullptr;
    std::shared_ptr<string> mobileWuyingKeeper_ = nullptr;
    std::shared_ptr<string> mobileWyAssistant_ = nullptr;
    // The policy name.
    std::shared_ptr<string> name_ = nullptr;
    // The network redirection policy.
    // 
    // >  This parameter is in private preview and only available to specific users.
    // 
    // Valid values:
    // 
    // *   all: enables network redirection globally.
    // *   off (default): disables network redirection.
    // *   on: enables the whitelist mode.
    std::shared_ptr<string> netRedirect_ = nullptr;
    // The network redirection rules.
    // 
    // >  This parameter is in private preview and only available to specific users.
    std::shared_ptr<vector<ModifyCenterPolicyRequestNetRedirectRule>> netRedirectRule_ = nullptr;
    // Specifies whether to enforce a disconnection upon inactivity.
    // 
    // >  This parameter applies only to cloud application policies.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t enforce a disconnection upon inactivity.
    // *   on: enforces a disconnection upon inactivity.
    std::shared_ptr<string> noOperationDisconnect_ = nullptr;
    // The duration of disconnection after inactivity. Valid values: 120 to 7200. Unit: seconds.
    // 
    // >  This parameter applies only to cloud application policies.
    std::shared_ptr<int32_t> noOperationDisconnectTime_ = nullptr;
    // The cloud computer policy ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The printer redirection policy. This parameter only applies if DeviceRedirects does not include a printer redirection policy.
    // 
    // Valid values:
    // 
    // *   deviceRedirect (default):enables device redirection.
    // *   usbRedirect: enables USB redirection.
    // *   off: disables any type of redirection.
    std::shared_ptr<string> printerRedirect_ = nullptr;
    // Specifies whether to enable image quality enhancement for design and 3D applications.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t enable image quality enhancement for design and 3D applications.
    // *   on: enables image quality enhancement for design and 3D applications.
    std::shared_ptr<string> qualityEnhancement_ = nullptr;
    // The duration of screen recording after the specified event is detected. Unit: minutes. Valid values: 10 to 60.
    std::shared_ptr<int32_t> recordEventDuration_ = nullptr;
    std::shared_ptr<vector<string>> recordEventFileExts_ = nullptr;
    // The absolute paths to screen recording files.
    std::shared_ptr<vector<string>> recordEventFilePaths_ = nullptr;
    std::shared_ptr<vector<ModifyCenterPolicyRequestRecordEventLevels>> recordEventLevels_ = nullptr;
    // The absolute paths to screen recording registries.
    std::shared_ptr<vector<string>> recordEventRegisters_ = nullptr;
    // The events that trigger screen recording.
    std::shared_ptr<vector<string>> recordEvents_ = nullptr;
    // The screen recording policy.
    // 
    // Valid values:
    // 
    // *   period: Screen recording occurs at set intervals.
    // *   session: Screen recording is limited to sessions only.
    // *   off: Screen recording is disabled.
    // *   alltime: Screen recording is always enabled.
    std::shared_ptr<string> recording_ = nullptr;
    // Specifies whether to record audio files generated by cloud computers.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t record audio files generated by cloud computers.
    // *   on: records audio files generated by cloud computers.
    std::shared_ptr<string> recordingAudio_ = nullptr;
    // The length of the screen recording file (in minutes). Screen recordings are split based on the specified duration and uploaded to Object Storage Service (OSS) buckets. If a file reaches 300 MB, the system prioritizes rolling updates for that file. Valid values: 10 to 60.
    std::shared_ptr<int32_t> recordingDuration_ = nullptr;
    // The screen recording\\"s end time in HH:MM:SS format. The value is meaningful only if `Recording` is set to `PERIOD`.
    std::shared_ptr<string> recordingEndTime_ = nullptr;
    // The retention period of the screen recording file. Valid values: 1 to 180. Unit: days.
    std::shared_ptr<int32_t> recordingExpires_ = nullptr;
    // The frame rate of screen recording. Unit: fps.
    std::shared_ptr<string> recordingFps_ = nullptr;
    // The screen recording\\"s start time in HH:MM:SS format. The value is meaningful only if `Recording` is set to `PERIOD`.
    std::shared_ptr<string> recordingStartTime_ = nullptr;
    // Specifies whether to notify end users when screen recording is enabled.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t notify end users when screen recording is enabled.
    // *   on: notifies end users when screen recording is enabled.
    std::shared_ptr<string> recordingUserNotify_ = nullptr;
    // The notification sent to end users when screen recording is enabled.
    std::shared_ptr<string> recordingUserNotifyMessage_ = nullptr;
    // The region ID. Set the value to `cn-shanghai`.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The keyboard and mouse control permissions during remote assistance.
    // 
    // Valid values:
    // 
    // *   optionalControl: By default, keyboard and mouse control is disabled during remote assistance. You can request permissions as needed.
    // *   fullControl: Keyboard and mouse control is enabled during remote assistance.
    // *   disableControl: Keyboard and mouse control is disabled during remote assistance.
    std::shared_ptr<string> remoteCoordinate_ = nullptr;
    // The computer reset setting.
    // 
    // Valid values:
    // 
    // *   off: disables the reset setting.
    // *   on: enables the reset setting.
    std::shared_ptr<string> resetDesktop_ = nullptr;
    // The height of the resolution. Unit: pixel. Valid values for cloud applications: 500 to 50000. Valid values for cloud computers: 480 to 4096.
    std::shared_ptr<int32_t> resolutionHeight_ = nullptr;
    // The resolution type.
    // 
    // Valid values:
    // 
    // *   adaptive: adaptive resolution.
    // *   customer: fixed resolution.
    std::shared_ptr<string> resolutionModel_ = nullptr;
    // The width of the resolution. Unit: pixel. Valid values for cloud applications: 500 to 50000. Valid values for cloud computers: 480 to 4096.
    std::shared_ptr<int32_t> resolutionWidth_ = nullptr;
    // The resource type.
    // 
    // Valid values:
    // 
    // *   app: cloud applications.
    // *   desktop: cloud computers.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The client IP address whitelists that you want to delete.
    std::shared_ptr<vector<ModifyCenterPolicyRequestRevokeAccessPolicyRule>> revokeAccessPolicyRule_ = nullptr;
    // The security group rules that you want to delete.
    std::shared_ptr<vector<ModifyCenterPolicyRequestRevokeSecurityPolicyRule>> revokeSecurityPolicyRule_ = nullptr;
    std::shared_ptr<string> safeMenu_ = nullptr;
    // The effective scope of the policy.
    // 
    // Valid values:
    // 
    // *   IP: The policy applies to specific IP addresses.
    // *   GLOBAL: The policy applies globally.
    std::shared_ptr<string> scope_ = nullptr;
    // The effective scopes. This parameter is required when `Scope` is set to `IP`. If `Scope` is set to `IP`, this parameter doesn\\"t take effect.
    std::shared_ptr<vector<string>> scopeValue_ = nullptr;
    std::shared_ptr<string> screenDisplayMode_ = nullptr;
    // The bandwidth peak allowed for sessions. Unit: Kbit/s. Valid values: 2000 to 100000.
    std::shared_ptr<int32_t> sessionMaxRateKbps_ = nullptr;
    // Specifies whether to enable smoothness enhancement for daily office use.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t enable smoothness enhancement for daily office use.
    // *   on: enables smoothness enhancement for daily office use.
    std::shared_ptr<string> smoothEnhancement_ = nullptr;
    // Specifies whether to display the metric status entry in the DesktopAssistant menu.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t display the metric status entry in the DesktopAssistant menu.
    // *   on: displays the metric status entry in the DesktopAssistant menu.
    std::shared_ptr<string> statusMonitor_ = nullptr;
    // The streaming mode.
    // 
    // Valid values:
    // 
    // *   intelligent
    // *   smooth
    std::shared_ptr<string> streamingMode_ = nullptr;
    // The target frame rate. Valid values: 10 to 60.
    std::shared_ptr<int32_t> targetFps_ = nullptr;
    // Specifies whether to display the application taskbar.
    // 
    // >  This parameter applies only to cloud application policies.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t display the application taskbar.
    // *   on: displays the application taskbar.
    std::shared_ptr<string> taskbar_ = nullptr;
    // Specifies whether to enable the USB redirection feature.
    // 
    // Valid values:
    // 
    // *   off (default)
    // *   on
    std::shared_ptr<string> usbRedirect_ = nullptr;
    // The USB redirection rules.
    std::shared_ptr<vector<ModifyCenterPolicyRequestUsbSupplyRedirectRule>> usbSupplyRedirectRule_ = nullptr;
    std::shared_ptr<string> useTime_ = nullptr;
    // The average bitrate for video encoding. Unit: Kbit/s. Valid values: 1000 to 50000.
    std::shared_ptr<int32_t> videoEncAvgKbps_ = nullptr;
    // The maximum QP for video files. Higher QP values result in lower video quality. Valid values: 0 to 51.
    std::shared_ptr<int32_t> videoEncMaxQP_ = nullptr;
    // The minimum quantizer parameter (QP) for video files. A lower QP means better video quality. Valid values: 0 to 51.
    std::shared_ptr<int32_t> videoEncMinQP_ = nullptr;
    // The peak bitrate allowed for video encoding. Unit: Kbit/s. Valid values: 1000 to 50000.
    std::shared_ptr<int32_t> videoEncPeakKbps_ = nullptr;
    // The video encoding policy.
    // 
    // Valid values:
    // 
    // *   qualityFirst: prioritizes image quality.
    // *   bandwidthFirst: prioritizes bandwidth.
    std::shared_ptr<string> videoEncPolicy_ = nullptr;
    // The multimedia redirection policy.
    // 
    // Valid values:
    // 
    // *   off: disables multimedia redirection.
    // *   on: enables multimedia redirection.
    std::shared_ptr<string> videoRedirect_ = nullptr;
    // The image display quality.
    // 
    // Valid values:
    // 
    // *   high: high-definition (HD).
    // *   low: smoothness.
    // *   lossless: no quality loss.
    // *   medium (default): scenario-specific adaptation.
    std::shared_ptr<string> visualQuality_ = nullptr;
    // The watermark policy.
    // 
    // Valid values:
    // 
    // *   blind: displays invisible watermarks.
    // *   off (default): displays no watermark.
    // *   on: displays visible watermarks.
    std::shared_ptr<string> watermark_ = nullptr;
    // Specifies whether to enable anti-screen capture for invisible watermarks.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t enable anti-screen capture for invisible watermarks.
    // *   on: enables anti-screen capture for invisible watermarks.
    std::shared_ptr<string> watermarkAntiCam_ = nullptr;
    // The font color of the watermark. Valid values: 0 to 16777215.
    std::shared_ptr<int32_t> watermarkColor_ = nullptr;
    // The number of watermark columns. Valid values: 3 to 10.
    std::shared_ptr<int32_t> watermarkColumnAmount_ = nullptr;
    // If you set `WatermarkType` to `custom`, you must also specify `WatermarkCustomText`.
    std::shared_ptr<string> watermarkCustomText_ = nullptr;
    // The watermark rotation. Valid values: -10 to -30.
    std::shared_ptr<double> watermarkDegree_ = nullptr;
    // The font size of the watermark. Valid values: 10 to 20.
    std::shared_ptr<int32_t> watermarkFontSize_ = nullptr;
    // The font style of the watermark.
    // 
    // Valid values:
    // 
    // *   plain
    // *   bold
    std::shared_ptr<string> watermarkFontStyle_ = nullptr;
    // The enhancement level for invisible watermarks.
    // 
    // Valid values:
    // 
    // *   high
    // *   low
    // *   medium
    std::shared_ptr<string> watermarkPower_ = nullptr;
    // The number of watermark rows. Valid values: 3 to 10.
    std::shared_ptr<int32_t> watermarkRowAmount_ = nullptr;
    // Specifies whether to enable security priority for invisible watermarks.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> watermarkSecurity_ = nullptr;
    // The watermark opacity. A higher value makes the watermark more opaque. Valid values: 10 to 100.
    std::shared_ptr<int32_t> watermarkTransparencyValue_ = nullptr;
    // The watermark type. You can specify up to three types. Separate multiple values with commas (,).
    // 
    // >  If you provide `custom` as the value for this parameter, you must configure `WatermarkCustomText` to specify custom text.
    // 
    // Valid values:
    // 
    // *   EndUserId: the username.
    // *   Custom: the custom text.
    // *   DesktopIp: the IP address of the cloud computer.
    // *   ClientIp: the IP address of the client.
    // *   HostName: the rightmost 15 digits of the cloud computer ID.
    // *   ClientTime: the current time displayed on the cloud computer.
    std::shared_ptr<string> watermarkType_ = nullptr;
    // Specifies whether to enable Cloud Computer Manager.
    // 
    // Valid values:
    // 
    // *   off: disables Cloud Computer Manager.
    // *   on: enables Cloud Computer Manager.
    std::shared_ptr<string> wuyingKeeper_ = nullptr;
    // Specifies whether to display the Xiaoying AI Assistant option in the DesktopAssistant menu when end users connect to cloud computers via desktop clients (Windows and macOS).
    // 
    // >  This feature applies to only desktop clients of version 7.7.0 or later.
    // 
    // Valid values:
    // 
    // *   off: doesn\\"t display the Xiaoying AI Assistant option in the DesktopAssistant menu.
    // *   on: displays the Xiaoying AI Assistant option in the DesktopAssistant menu.
    std::shared_ptr<string> wyAssistant_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
