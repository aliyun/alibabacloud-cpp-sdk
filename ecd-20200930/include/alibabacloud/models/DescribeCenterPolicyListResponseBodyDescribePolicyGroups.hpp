// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENTERPOLICYLISTRESPONSEBODYDESCRIBEPOLICYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENTERPOLICYLISTRESPONSEBODYDESCRIBEPOLICYGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules.hpp>
#include <alibabacloud/models/DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules.hpp>
#include <alibabacloud/models/DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes.hpp>
#include <alibabacloud/models/DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRedirects.hpp>
#include <alibabacloud/models/DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRules.hpp>
#include <alibabacloud/models/DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDomainResolveRule.hpp>
#include <alibabacloud/models/DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule.hpp>
#include <alibabacloud/models/DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCenterPolicyListResponseBodyDescribePolicyGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenterPolicyListResponseBodyDescribePolicyGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AdminAccess, adminAccess_);
      DARABONBA_PTR_TO_JSON(AppContentProtection, appContentProtection_);
      DARABONBA_PTR_TO_JSON(AuthorizeAccessPolicyRules, authorizeAccessPolicyRules_);
      DARABONBA_PTR_TO_JSON(AuthorizeSecurityPolicyRules, authorizeSecurityPolicyRules_);
      DARABONBA_PTR_TO_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_TO_JSON(ClientControlMenu, clientControlMenu_);
      DARABONBA_PTR_TO_JSON(ClientTypes, clientTypes_);
      DARABONBA_PTR_TO_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_TO_JSON(ColorEnhancement, colorEnhancement_);
      DARABONBA_PTR_TO_JSON(CpdDriveClipboard, cpdDriveClipboard_);
      DARABONBA_PTR_TO_JSON(CpuDownGradeDuration, cpuDownGradeDuration_);
      DARABONBA_PTR_TO_JSON(CpuProcessors, cpuProcessors_);
      DARABONBA_PTR_TO_JSON(CpuProtectedMode, cpuProtectedMode_);
      DARABONBA_PTR_TO_JSON(CpuRateLimit, cpuRateLimit_);
      DARABONBA_PTR_TO_JSON(CpuSampleDuration, cpuSampleDuration_);
      DARABONBA_PTR_TO_JSON(CpuSingleRateLimit, cpuSingleRateLimit_);
      DARABONBA_PTR_TO_JSON(DesktopCount, desktopCount_);
      DARABONBA_PTR_TO_JSON(DesktopGroupCount, desktopGroupCount_);
      DARABONBA_PTR_TO_JSON(DeviceRedirects, deviceRedirects_);
      DARABONBA_PTR_TO_JSON(DeviceRules, deviceRules_);
      DARABONBA_PTR_TO_JSON(DisconnectKeepSession, disconnectKeepSession_);
      DARABONBA_PTR_TO_JSON(DisconnectKeepSessionTime, disconnectKeepSessionTime_);
      DARABONBA_PTR_TO_JSON(DisplayMode, displayMode_);
      DARABONBA_PTR_TO_JSON(DomainRegisterValue, domainRegisterValue_);
      DARABONBA_PTR_TO_JSON(DomainResolveRule, domainResolveRule_);
      DARABONBA_PTR_TO_JSON(DomainResolveRuleType, domainResolveRuleType_);
      DARABONBA_PTR_TO_JSON(EndUserApplyAdminCoordinate, endUserApplyAdminCoordinate_);
      DARABONBA_PTR_TO_JSON(EndUserGroupCoordinate, endUserGroupCoordinate_);
      DARABONBA_PTR_TO_JSON(FileTransferAddress, fileTransferAddress_);
      DARABONBA_PTR_TO_JSON(FileTransferSpeed, fileTransferSpeed_);
      DARABONBA_PTR_TO_JSON(FileTransferSpeedLocation, fileTransferSpeedLocation_);
      DARABONBA_PTR_TO_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_TO_JSON(Html5Access, html5Access_);
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
      DARABONBA_PTR_TO_JSON(MobileShutdown, mobileShutdown_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetRedirect, netRedirect_);
      DARABONBA_PTR_TO_JSON(NetRedirectRule, netRedirectRule_);
      DARABONBA_PTR_TO_JSON(NoOperationDisconnect, noOperationDisconnect_);
      DARABONBA_PTR_TO_JSON(NoOperationDisconnectTime, noOperationDisconnectTime_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupType, policyGroupType_);
      DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_TO_JSON(PrinterRedirection, printerRedirection_);
      DARABONBA_PTR_TO_JSON(QualityEnhancement, qualityEnhancement_);
      DARABONBA_PTR_TO_JSON(RecordContent, recordContent_);
      DARABONBA_PTR_TO_JSON(RecordContentExpires, recordContentExpires_);
      DARABONBA_PTR_TO_JSON(RecordEventDuration, recordEventDuration_);
      DARABONBA_PTR_TO_JSON(RecordEventFilePaths, recordEventFilePaths_);
      DARABONBA_PTR_TO_JSON(RecordEventRegisters, recordEventRegisters_);
      DARABONBA_PTR_TO_JSON(Recording, recording_);
      DARABONBA_PTR_TO_JSON(RecordingAudio, recordingAudio_);
      DARABONBA_PTR_TO_JSON(RecordingDuration, recordingDuration_);
      DARABONBA_PTR_TO_JSON(RecordingEndTime, recordingEndTime_);
      DARABONBA_PTR_TO_JSON(RecordingExpires, recordingExpires_);
      DARABONBA_PTR_TO_JSON(RecordingFps, recordingFps_);
      DARABONBA_PTR_TO_JSON(RecordingStartTime, recordingStartTime_);
      DARABONBA_PTR_TO_JSON(RecordingUserNotify, recordingUserNotify_);
      DARABONBA_PTR_TO_JSON(RecordingUserNotifyMessage, recordingUserNotifyMessage_);
      DARABONBA_PTR_TO_JSON(RemoteCoordinate, remoteCoordinate_);
      DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_TO_JSON(ResolutionModel, resolutionModel_);
      DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_TO_JSON(ResourceGroupCount, resourceGroupCount_);
      DARABONBA_PTR_TO_JSON(SafeMenu, safeMenu_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(ScopeValue, scopeValue_);
      DARABONBA_PTR_TO_JSON(ScreenDisplayMode, screenDisplayMode_);
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
      DARABONBA_PTR_TO_JSON(WatermarkCustomText, watermarkCustomText_);
      DARABONBA_PTR_TO_JSON(WatermarkDegree, watermarkDegree_);
      DARABONBA_PTR_TO_JSON(WatermarkFontSize, watermarkFontSize_);
      DARABONBA_PTR_TO_JSON(WatermarkFontStyle, watermarkFontStyle_);
      DARABONBA_PTR_TO_JSON(WatermarkPower, watermarkPower_);
      DARABONBA_PTR_TO_JSON(WatermarkRowAmount, watermarkRowAmount_);
      DARABONBA_PTR_TO_JSON(WatermarkSecurity, watermarkSecurity_);
      DARABONBA_PTR_TO_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
      DARABONBA_PTR_TO_JSON(WatermarkType, watermarkType_);
      DARABONBA_PTR_TO_JSON(WyAssistant, wyAssistant_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenterPolicyListResponseBodyDescribePolicyGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminAccess, adminAccess_);
      DARABONBA_PTR_FROM_JSON(AppContentProtection, appContentProtection_);
      DARABONBA_PTR_FROM_JSON(AuthorizeAccessPolicyRules, authorizeAccessPolicyRules_);
      DARABONBA_PTR_FROM_JSON(AuthorizeSecurityPolicyRules, authorizeSecurityPolicyRules_);
      DARABONBA_PTR_FROM_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_FROM_JSON(ClientControlMenu, clientControlMenu_);
      DARABONBA_PTR_FROM_JSON(ClientTypes, clientTypes_);
      DARABONBA_PTR_FROM_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_FROM_JSON(ColorEnhancement, colorEnhancement_);
      DARABONBA_PTR_FROM_JSON(CpdDriveClipboard, cpdDriveClipboard_);
      DARABONBA_PTR_FROM_JSON(CpuDownGradeDuration, cpuDownGradeDuration_);
      DARABONBA_PTR_FROM_JSON(CpuProcessors, cpuProcessors_);
      DARABONBA_PTR_FROM_JSON(CpuProtectedMode, cpuProtectedMode_);
      DARABONBA_PTR_FROM_JSON(CpuRateLimit, cpuRateLimit_);
      DARABONBA_PTR_FROM_JSON(CpuSampleDuration, cpuSampleDuration_);
      DARABONBA_PTR_FROM_JSON(CpuSingleRateLimit, cpuSingleRateLimit_);
      DARABONBA_PTR_FROM_JSON(DesktopCount, desktopCount_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupCount, desktopGroupCount_);
      DARABONBA_PTR_FROM_JSON(DeviceRedirects, deviceRedirects_);
      DARABONBA_PTR_FROM_JSON(DeviceRules, deviceRules_);
      DARABONBA_PTR_FROM_JSON(DisconnectKeepSession, disconnectKeepSession_);
      DARABONBA_PTR_FROM_JSON(DisconnectKeepSessionTime, disconnectKeepSessionTime_);
      DARABONBA_PTR_FROM_JSON(DisplayMode, displayMode_);
      DARABONBA_PTR_FROM_JSON(DomainRegisterValue, domainRegisterValue_);
      DARABONBA_PTR_FROM_JSON(DomainResolveRule, domainResolveRule_);
      DARABONBA_PTR_FROM_JSON(DomainResolveRuleType, domainResolveRuleType_);
      DARABONBA_PTR_FROM_JSON(EndUserApplyAdminCoordinate, endUserApplyAdminCoordinate_);
      DARABONBA_PTR_FROM_JSON(EndUserGroupCoordinate, endUserGroupCoordinate_);
      DARABONBA_PTR_FROM_JSON(FileTransferAddress, fileTransferAddress_);
      DARABONBA_PTR_FROM_JSON(FileTransferSpeed, fileTransferSpeed_);
      DARABONBA_PTR_FROM_JSON(FileTransferSpeedLocation, fileTransferSpeedLocation_);
      DARABONBA_PTR_FROM_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_FROM_JSON(Html5Access, html5Access_);
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
      DARABONBA_PTR_FROM_JSON(MobileShutdown, mobileShutdown_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetRedirect, netRedirect_);
      DARABONBA_PTR_FROM_JSON(NetRedirectRule, netRedirectRule_);
      DARABONBA_PTR_FROM_JSON(NoOperationDisconnect, noOperationDisconnect_);
      DARABONBA_PTR_FROM_JSON(NoOperationDisconnectTime, noOperationDisconnectTime_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupType, policyGroupType_);
      DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_FROM_JSON(PrinterRedirection, printerRedirection_);
      DARABONBA_PTR_FROM_JSON(QualityEnhancement, qualityEnhancement_);
      DARABONBA_PTR_FROM_JSON(RecordContent, recordContent_);
      DARABONBA_PTR_FROM_JSON(RecordContentExpires, recordContentExpires_);
      DARABONBA_PTR_FROM_JSON(RecordEventDuration, recordEventDuration_);
      DARABONBA_PTR_FROM_JSON(RecordEventFilePaths, recordEventFilePaths_);
      DARABONBA_PTR_FROM_JSON(RecordEventRegisters, recordEventRegisters_);
      DARABONBA_PTR_FROM_JSON(Recording, recording_);
      DARABONBA_PTR_FROM_JSON(RecordingAudio, recordingAudio_);
      DARABONBA_PTR_FROM_JSON(RecordingDuration, recordingDuration_);
      DARABONBA_PTR_FROM_JSON(RecordingEndTime, recordingEndTime_);
      DARABONBA_PTR_FROM_JSON(RecordingExpires, recordingExpires_);
      DARABONBA_PTR_FROM_JSON(RecordingFps, recordingFps_);
      DARABONBA_PTR_FROM_JSON(RecordingStartTime, recordingStartTime_);
      DARABONBA_PTR_FROM_JSON(RecordingUserNotify, recordingUserNotify_);
      DARABONBA_PTR_FROM_JSON(RecordingUserNotifyMessage, recordingUserNotifyMessage_);
      DARABONBA_PTR_FROM_JSON(RemoteCoordinate, remoteCoordinate_);
      DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_FROM_JSON(ResolutionModel, resolutionModel_);
      DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupCount, resourceGroupCount_);
      DARABONBA_PTR_FROM_JSON(SafeMenu, safeMenu_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(ScopeValue, scopeValue_);
      DARABONBA_PTR_FROM_JSON(ScreenDisplayMode, screenDisplayMode_);
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
      DARABONBA_PTR_FROM_JSON(WatermarkCustomText, watermarkCustomText_);
      DARABONBA_PTR_FROM_JSON(WatermarkDegree, watermarkDegree_);
      DARABONBA_PTR_FROM_JSON(WatermarkFontSize, watermarkFontSize_);
      DARABONBA_PTR_FROM_JSON(WatermarkFontStyle, watermarkFontStyle_);
      DARABONBA_PTR_FROM_JSON(WatermarkPower, watermarkPower_);
      DARABONBA_PTR_FROM_JSON(WatermarkRowAmount, watermarkRowAmount_);
      DARABONBA_PTR_FROM_JSON(WatermarkSecurity, watermarkSecurity_);
      DARABONBA_PTR_FROM_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
      DARABONBA_PTR_FROM_JSON(WatermarkType, watermarkType_);
      DARABONBA_PTR_FROM_JSON(WyAssistant, wyAssistant_);
    };
    DescribeCenterPolicyListResponseBodyDescribePolicyGroups() = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroups(const DescribeCenterPolicyListResponseBodyDescribePolicyGroups &) = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroups(DescribeCenterPolicyListResponseBodyDescribePolicyGroups &&) = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenterPolicyListResponseBodyDescribePolicyGroups() = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroups& operator=(const DescribeCenterPolicyListResponseBodyDescribePolicyGroups &) = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroups& operator=(DescribeCenterPolicyListResponseBodyDescribePolicyGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminAccess_ == nullptr
        && return this->appContentProtection_ == nullptr && return this->authorizeAccessPolicyRules_ == nullptr && return this->authorizeSecurityPolicyRules_ == nullptr && return this->cameraRedirect_ == nullptr && return this->clientControlMenu_ == nullptr
        && return this->clientTypes_ == nullptr && return this->clipboard_ == nullptr && return this->colorEnhancement_ == nullptr && return this->cpdDriveClipboard_ == nullptr && return this->cpuDownGradeDuration_ == nullptr
        && return this->cpuProcessors_ == nullptr && return this->cpuProtectedMode_ == nullptr && return this->cpuRateLimit_ == nullptr && return this->cpuSampleDuration_ == nullptr && return this->cpuSingleRateLimit_ == nullptr
        && return this->desktopCount_ == nullptr && return this->desktopGroupCount_ == nullptr && return this->deviceRedirects_ == nullptr && return this->deviceRules_ == nullptr && return this->disconnectKeepSession_ == nullptr
        && return this->disconnectKeepSessionTime_ == nullptr && return this->displayMode_ == nullptr && return this->domainRegisterValue_ == nullptr && return this->domainResolveRule_ == nullptr && return this->domainResolveRuleType_ == nullptr
        && return this->endUserApplyAdminCoordinate_ == nullptr && return this->endUserGroupCoordinate_ == nullptr && return this->fileTransferAddress_ == nullptr && return this->fileTransferSpeed_ == nullptr && return this->fileTransferSpeedLocation_ == nullptr
        && return this->gpuAcceleration_ == nullptr && return this->html5Access_ == nullptr && return this->html5FileTransfer_ == nullptr && return this->internetCommunicationProtocol_ == nullptr && return this->internetPrinter_ == nullptr
        && return this->localDrive_ == nullptr && return this->maxReconnectTime_ == nullptr && return this->memoryDownGradeDuration_ == nullptr && return this->memoryProcessors_ == nullptr && return this->memoryProtectedMode_ == nullptr
        && return this->memoryRateLimit_ == nullptr && return this->memorySampleDuration_ == nullptr && return this->memorySingleRateLimit_ == nullptr && return this->mobileRestart_ == nullptr && return this->mobileShutdown_ == nullptr
        && return this->name_ == nullptr && return this->netRedirect_ == nullptr && return this->netRedirectRule_ == nullptr && return this->noOperationDisconnect_ == nullptr && return this->noOperationDisconnectTime_ == nullptr
        && return this->policyGroupId_ == nullptr && return this->policyGroupType_ == nullptr && return this->policyStatus_ == nullptr && return this->printerRedirection_ == nullptr && return this->qualityEnhancement_ == nullptr
        && return this->recordContent_ == nullptr && return this->recordContentExpires_ == nullptr && return this->recordEventDuration_ == nullptr && return this->recordEventFilePaths_ == nullptr && return this->recordEventRegisters_ == nullptr
        && return this->recording_ == nullptr && return this->recordingAudio_ == nullptr && return this->recordingDuration_ == nullptr && return this->recordingEndTime_ == nullptr && return this->recordingExpires_ == nullptr
        && return this->recordingFps_ == nullptr && return this->recordingStartTime_ == nullptr && return this->recordingUserNotify_ == nullptr && return this->recordingUserNotifyMessage_ == nullptr && return this->remoteCoordinate_ == nullptr
        && return this->resolutionHeight_ == nullptr && return this->resolutionModel_ == nullptr && return this->resolutionWidth_ == nullptr && return this->resourceGroupCount_ == nullptr && return this->safeMenu_ == nullptr
        && return this->scope_ == nullptr && return this->scopeValue_ == nullptr && return this->screenDisplayMode_ == nullptr && return this->smoothEnhancement_ == nullptr && return this->statusMonitor_ == nullptr
        && return this->streamingMode_ == nullptr && return this->targetFps_ == nullptr && return this->taskbar_ == nullptr && return this->usbRedirect_ == nullptr && return this->usbSupplyRedirectRule_ == nullptr
        && return this->useTime_ == nullptr && return this->videoEncAvgKbps_ == nullptr && return this->videoEncMaxQP_ == nullptr && return this->videoEncMinQP_ == nullptr && return this->videoEncPeakKbps_ == nullptr
        && return this->videoEncPolicy_ == nullptr && return this->videoRedirect_ == nullptr && return this->visualQuality_ == nullptr && return this->watermark_ == nullptr && return this->watermarkAntiCam_ == nullptr
        && return this->watermarkColor_ == nullptr && return this->watermarkCustomText_ == nullptr && return this->watermarkDegree_ == nullptr && return this->watermarkFontSize_ == nullptr && return this->watermarkFontStyle_ == nullptr
        && return this->watermarkPower_ == nullptr && return this->watermarkRowAmount_ == nullptr && return this->watermarkSecurity_ == nullptr && return this->watermarkTransparencyValue_ == nullptr && return this->watermarkType_ == nullptr
        && return this->wyAssistant_ == nullptr; };
    // adminAccess Field Functions 
    bool hasAdminAccess() const { return this->adminAccess_ != nullptr;};
    void deleteAdminAccess() { this->adminAccess_ = nullptr;};
    inline string adminAccess() const { DARABONBA_PTR_GET_DEFAULT(adminAccess_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setAdminAccess(string adminAccess) { DARABONBA_PTR_SET_VALUE(adminAccess_, adminAccess) };


    // appContentProtection Field Functions 
    bool hasAppContentProtection() const { return this->appContentProtection_ != nullptr;};
    void deleteAppContentProtection() { this->appContentProtection_ = nullptr;};
    inline string appContentProtection() const { DARABONBA_PTR_GET_DEFAULT(appContentProtection_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setAppContentProtection(string appContentProtection) { DARABONBA_PTR_SET_VALUE(appContentProtection_, appContentProtection) };


    // authorizeAccessPolicyRules Field Functions 
    bool hasAuthorizeAccessPolicyRules() const { return this->authorizeAccessPolicyRules_ != nullptr;};
    void deleteAuthorizeAccessPolicyRules() { this->authorizeAccessPolicyRules_ = nullptr;};
    inline const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules> & authorizeAccessPolicyRules() const { DARABONBA_PTR_GET_CONST(authorizeAccessPolicyRules_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules>) };
    inline vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules> authorizeAccessPolicyRules() { DARABONBA_PTR_GET(authorizeAccessPolicyRules_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setAuthorizeAccessPolicyRules(const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules> & authorizeAccessPolicyRules) { DARABONBA_PTR_SET_VALUE(authorizeAccessPolicyRules_, authorizeAccessPolicyRules) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setAuthorizeAccessPolicyRules(vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules> && authorizeAccessPolicyRules) { DARABONBA_PTR_SET_RVALUE(authorizeAccessPolicyRules_, authorizeAccessPolicyRules) };


    // authorizeSecurityPolicyRules Field Functions 
    bool hasAuthorizeSecurityPolicyRules() const { return this->authorizeSecurityPolicyRules_ != nullptr;};
    void deleteAuthorizeSecurityPolicyRules() { this->authorizeSecurityPolicyRules_ = nullptr;};
    inline const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules> & authorizeSecurityPolicyRules() const { DARABONBA_PTR_GET_CONST(authorizeSecurityPolicyRules_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules>) };
    inline vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules> authorizeSecurityPolicyRules() { DARABONBA_PTR_GET(authorizeSecurityPolicyRules_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setAuthorizeSecurityPolicyRules(const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules> & authorizeSecurityPolicyRules) { DARABONBA_PTR_SET_VALUE(authorizeSecurityPolicyRules_, authorizeSecurityPolicyRules) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setAuthorizeSecurityPolicyRules(vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules> && authorizeSecurityPolicyRules) { DARABONBA_PTR_SET_RVALUE(authorizeSecurityPolicyRules_, authorizeSecurityPolicyRules) };


    // cameraRedirect Field Functions 
    bool hasCameraRedirect() const { return this->cameraRedirect_ != nullptr;};
    void deleteCameraRedirect() { this->cameraRedirect_ = nullptr;};
    inline string cameraRedirect() const { DARABONBA_PTR_GET_DEFAULT(cameraRedirect_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setCameraRedirect(string cameraRedirect) { DARABONBA_PTR_SET_VALUE(cameraRedirect_, cameraRedirect) };


    // clientControlMenu Field Functions 
    bool hasClientControlMenu() const { return this->clientControlMenu_ != nullptr;};
    void deleteClientControlMenu() { this->clientControlMenu_ = nullptr;};
    inline string clientControlMenu() const { DARABONBA_PTR_GET_DEFAULT(clientControlMenu_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setClientControlMenu(string clientControlMenu) { DARABONBA_PTR_SET_VALUE(clientControlMenu_, clientControlMenu) };


    // clientTypes Field Functions 
    bool hasClientTypes() const { return this->clientTypes_ != nullptr;};
    void deleteClientTypes() { this->clientTypes_ = nullptr;};
    inline const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes> & clientTypes() const { DARABONBA_PTR_GET_CONST(clientTypes_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes>) };
    inline vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes> clientTypes() { DARABONBA_PTR_GET(clientTypes_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setClientTypes(const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes> & clientTypes) { DARABONBA_PTR_SET_VALUE(clientTypes_, clientTypes) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setClientTypes(vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes> && clientTypes) { DARABONBA_PTR_SET_RVALUE(clientTypes_, clientTypes) };


    // clipboard Field Functions 
    bool hasClipboard() const { return this->clipboard_ != nullptr;};
    void deleteClipboard() { this->clipboard_ = nullptr;};
    inline string clipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


    // colorEnhancement Field Functions 
    bool hasColorEnhancement() const { return this->colorEnhancement_ != nullptr;};
    void deleteColorEnhancement() { this->colorEnhancement_ = nullptr;};
    inline string colorEnhancement() const { DARABONBA_PTR_GET_DEFAULT(colorEnhancement_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setColorEnhancement(string colorEnhancement) { DARABONBA_PTR_SET_VALUE(colorEnhancement_, colorEnhancement) };


    // cpdDriveClipboard Field Functions 
    bool hasCpdDriveClipboard() const { return this->cpdDriveClipboard_ != nullptr;};
    void deleteCpdDriveClipboard() { this->cpdDriveClipboard_ = nullptr;};
    inline string cpdDriveClipboard() const { DARABONBA_PTR_GET_DEFAULT(cpdDriveClipboard_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setCpdDriveClipboard(string cpdDriveClipboard) { DARABONBA_PTR_SET_VALUE(cpdDriveClipboard_, cpdDriveClipboard) };


    // cpuDownGradeDuration Field Functions 
    bool hasCpuDownGradeDuration() const { return this->cpuDownGradeDuration_ != nullptr;};
    void deleteCpuDownGradeDuration() { this->cpuDownGradeDuration_ = nullptr;};
    inline int32_t cpuDownGradeDuration() const { DARABONBA_PTR_GET_DEFAULT(cpuDownGradeDuration_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setCpuDownGradeDuration(int32_t cpuDownGradeDuration) { DARABONBA_PTR_SET_VALUE(cpuDownGradeDuration_, cpuDownGradeDuration) };


    // cpuProcessors Field Functions 
    bool hasCpuProcessors() const { return this->cpuProcessors_ != nullptr;};
    void deleteCpuProcessors() { this->cpuProcessors_ = nullptr;};
    inline const vector<string> & cpuProcessors() const { DARABONBA_PTR_GET_CONST(cpuProcessors_, vector<string>) };
    inline vector<string> cpuProcessors() { DARABONBA_PTR_GET(cpuProcessors_, vector<string>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setCpuProcessors(const vector<string> & cpuProcessors) { DARABONBA_PTR_SET_VALUE(cpuProcessors_, cpuProcessors) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setCpuProcessors(vector<string> && cpuProcessors) { DARABONBA_PTR_SET_RVALUE(cpuProcessors_, cpuProcessors) };


    // cpuProtectedMode Field Functions 
    bool hasCpuProtectedMode() const { return this->cpuProtectedMode_ != nullptr;};
    void deleteCpuProtectedMode() { this->cpuProtectedMode_ = nullptr;};
    inline string cpuProtectedMode() const { DARABONBA_PTR_GET_DEFAULT(cpuProtectedMode_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setCpuProtectedMode(string cpuProtectedMode) { DARABONBA_PTR_SET_VALUE(cpuProtectedMode_, cpuProtectedMode) };


    // cpuRateLimit Field Functions 
    bool hasCpuRateLimit() const { return this->cpuRateLimit_ != nullptr;};
    void deleteCpuRateLimit() { this->cpuRateLimit_ = nullptr;};
    inline int32_t cpuRateLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuRateLimit_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setCpuRateLimit(int32_t cpuRateLimit) { DARABONBA_PTR_SET_VALUE(cpuRateLimit_, cpuRateLimit) };


    // cpuSampleDuration Field Functions 
    bool hasCpuSampleDuration() const { return this->cpuSampleDuration_ != nullptr;};
    void deleteCpuSampleDuration() { this->cpuSampleDuration_ = nullptr;};
    inline int32_t cpuSampleDuration() const { DARABONBA_PTR_GET_DEFAULT(cpuSampleDuration_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setCpuSampleDuration(int32_t cpuSampleDuration) { DARABONBA_PTR_SET_VALUE(cpuSampleDuration_, cpuSampleDuration) };


    // cpuSingleRateLimit Field Functions 
    bool hasCpuSingleRateLimit() const { return this->cpuSingleRateLimit_ != nullptr;};
    void deleteCpuSingleRateLimit() { this->cpuSingleRateLimit_ = nullptr;};
    inline int32_t cpuSingleRateLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuSingleRateLimit_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setCpuSingleRateLimit(int32_t cpuSingleRateLimit) { DARABONBA_PTR_SET_VALUE(cpuSingleRateLimit_, cpuSingleRateLimit) };


    // desktopCount Field Functions 
    bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
    void deleteDesktopCount() { this->desktopCount_ = nullptr;};
    inline int32_t desktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDesktopCount(int32_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


    // desktopGroupCount Field Functions 
    bool hasDesktopGroupCount() const { return this->desktopGroupCount_ != nullptr;};
    void deleteDesktopGroupCount() { this->desktopGroupCount_ = nullptr;};
    inline int32_t desktopGroupCount() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupCount_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDesktopGroupCount(int32_t desktopGroupCount) { DARABONBA_PTR_SET_VALUE(desktopGroupCount_, desktopGroupCount) };


    // deviceRedirects Field Functions 
    bool hasDeviceRedirects() const { return this->deviceRedirects_ != nullptr;};
    void deleteDeviceRedirects() { this->deviceRedirects_ = nullptr;};
    inline const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRedirects> & deviceRedirects() const { DARABONBA_PTR_GET_CONST(deviceRedirects_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRedirects>) };
    inline vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRedirects> deviceRedirects() { DARABONBA_PTR_GET(deviceRedirects_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRedirects>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDeviceRedirects(const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRedirects> & deviceRedirects) { DARABONBA_PTR_SET_VALUE(deviceRedirects_, deviceRedirects) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDeviceRedirects(vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRedirects> && deviceRedirects) { DARABONBA_PTR_SET_RVALUE(deviceRedirects_, deviceRedirects) };


    // deviceRules Field Functions 
    bool hasDeviceRules() const { return this->deviceRules_ != nullptr;};
    void deleteDeviceRules() { this->deviceRules_ = nullptr;};
    inline const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRules> & deviceRules() const { DARABONBA_PTR_GET_CONST(deviceRules_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRules>) };
    inline vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRules> deviceRules() { DARABONBA_PTR_GET(deviceRules_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRules>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDeviceRules(const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRules> & deviceRules) { DARABONBA_PTR_SET_VALUE(deviceRules_, deviceRules) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDeviceRules(vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRules> && deviceRules) { DARABONBA_PTR_SET_RVALUE(deviceRules_, deviceRules) };


    // disconnectKeepSession Field Functions 
    bool hasDisconnectKeepSession() const { return this->disconnectKeepSession_ != nullptr;};
    void deleteDisconnectKeepSession() { this->disconnectKeepSession_ = nullptr;};
    inline string disconnectKeepSession() const { DARABONBA_PTR_GET_DEFAULT(disconnectKeepSession_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDisconnectKeepSession(string disconnectKeepSession) { DARABONBA_PTR_SET_VALUE(disconnectKeepSession_, disconnectKeepSession) };


    // disconnectKeepSessionTime Field Functions 
    bool hasDisconnectKeepSessionTime() const { return this->disconnectKeepSessionTime_ != nullptr;};
    void deleteDisconnectKeepSessionTime() { this->disconnectKeepSessionTime_ = nullptr;};
    inline int32_t disconnectKeepSessionTime() const { DARABONBA_PTR_GET_DEFAULT(disconnectKeepSessionTime_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDisconnectKeepSessionTime(int32_t disconnectKeepSessionTime) { DARABONBA_PTR_SET_VALUE(disconnectKeepSessionTime_, disconnectKeepSessionTime) };


    // displayMode Field Functions 
    bool hasDisplayMode() const { return this->displayMode_ != nullptr;};
    void deleteDisplayMode() { this->displayMode_ = nullptr;};
    inline string displayMode() const { DARABONBA_PTR_GET_DEFAULT(displayMode_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDisplayMode(string displayMode) { DARABONBA_PTR_SET_VALUE(displayMode_, displayMode) };


    // domainRegisterValue Field Functions 
    bool hasDomainRegisterValue() const { return this->domainRegisterValue_ != nullptr;};
    void deleteDomainRegisterValue() { this->domainRegisterValue_ = nullptr;};
    inline string domainRegisterValue() const { DARABONBA_PTR_GET_DEFAULT(domainRegisterValue_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDomainRegisterValue(string domainRegisterValue) { DARABONBA_PTR_SET_VALUE(domainRegisterValue_, domainRegisterValue) };


    // domainResolveRule Field Functions 
    bool hasDomainResolveRule() const { return this->domainResolveRule_ != nullptr;};
    void deleteDomainResolveRule() { this->domainResolveRule_ = nullptr;};
    inline const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDomainResolveRule> & domainResolveRule() const { DARABONBA_PTR_GET_CONST(domainResolveRule_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDomainResolveRule>) };
    inline vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDomainResolveRule> domainResolveRule() { DARABONBA_PTR_GET(domainResolveRule_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDomainResolveRule>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDomainResolveRule(const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDomainResolveRule> & domainResolveRule) { DARABONBA_PTR_SET_VALUE(domainResolveRule_, domainResolveRule) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDomainResolveRule(vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDomainResolveRule> && domainResolveRule) { DARABONBA_PTR_SET_RVALUE(domainResolveRule_, domainResolveRule) };


    // domainResolveRuleType Field Functions 
    bool hasDomainResolveRuleType() const { return this->domainResolveRuleType_ != nullptr;};
    void deleteDomainResolveRuleType() { this->domainResolveRuleType_ = nullptr;};
    inline string domainResolveRuleType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveRuleType_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setDomainResolveRuleType(string domainResolveRuleType) { DARABONBA_PTR_SET_VALUE(domainResolveRuleType_, domainResolveRuleType) };


    // endUserApplyAdminCoordinate Field Functions 
    bool hasEndUserApplyAdminCoordinate() const { return this->endUserApplyAdminCoordinate_ != nullptr;};
    void deleteEndUserApplyAdminCoordinate() { this->endUserApplyAdminCoordinate_ = nullptr;};
    inline string endUserApplyAdminCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserApplyAdminCoordinate_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setEndUserApplyAdminCoordinate(string endUserApplyAdminCoordinate) { DARABONBA_PTR_SET_VALUE(endUserApplyAdminCoordinate_, endUserApplyAdminCoordinate) };


    // endUserGroupCoordinate Field Functions 
    bool hasEndUserGroupCoordinate() const { return this->endUserGroupCoordinate_ != nullptr;};
    void deleteEndUserGroupCoordinate() { this->endUserGroupCoordinate_ = nullptr;};
    inline string endUserGroupCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserGroupCoordinate_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setEndUserGroupCoordinate(string endUserGroupCoordinate) { DARABONBA_PTR_SET_VALUE(endUserGroupCoordinate_, endUserGroupCoordinate) };


    // fileTransferAddress Field Functions 
    bool hasFileTransferAddress() const { return this->fileTransferAddress_ != nullptr;};
    void deleteFileTransferAddress() { this->fileTransferAddress_ = nullptr;};
    inline string fileTransferAddress() const { DARABONBA_PTR_GET_DEFAULT(fileTransferAddress_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setFileTransferAddress(string fileTransferAddress) { DARABONBA_PTR_SET_VALUE(fileTransferAddress_, fileTransferAddress) };


    // fileTransferSpeed Field Functions 
    bool hasFileTransferSpeed() const { return this->fileTransferSpeed_ != nullptr;};
    void deleteFileTransferSpeed() { this->fileTransferSpeed_ = nullptr;};
    inline string fileTransferSpeed() const { DARABONBA_PTR_GET_DEFAULT(fileTransferSpeed_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setFileTransferSpeed(string fileTransferSpeed) { DARABONBA_PTR_SET_VALUE(fileTransferSpeed_, fileTransferSpeed) };


    // fileTransferSpeedLocation Field Functions 
    bool hasFileTransferSpeedLocation() const { return this->fileTransferSpeedLocation_ != nullptr;};
    void deleteFileTransferSpeedLocation() { this->fileTransferSpeedLocation_ = nullptr;};
    inline string fileTransferSpeedLocation() const { DARABONBA_PTR_GET_DEFAULT(fileTransferSpeedLocation_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setFileTransferSpeedLocation(string fileTransferSpeedLocation) { DARABONBA_PTR_SET_VALUE(fileTransferSpeedLocation_, fileTransferSpeedLocation) };


    // gpuAcceleration Field Functions 
    bool hasGpuAcceleration() const { return this->gpuAcceleration_ != nullptr;};
    void deleteGpuAcceleration() { this->gpuAcceleration_ = nullptr;};
    inline string gpuAcceleration() const { DARABONBA_PTR_GET_DEFAULT(gpuAcceleration_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setGpuAcceleration(string gpuAcceleration) { DARABONBA_PTR_SET_VALUE(gpuAcceleration_, gpuAcceleration) };


    // html5Access Field Functions 
    bool hasHtml5Access() const { return this->html5Access_ != nullptr;};
    void deleteHtml5Access() { this->html5Access_ = nullptr;};
    inline string html5Access() const { DARABONBA_PTR_GET_DEFAULT(html5Access_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setHtml5Access(string html5Access) { DARABONBA_PTR_SET_VALUE(html5Access_, html5Access) };


    // html5FileTransfer Field Functions 
    bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
    void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
    inline string html5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


    // internetCommunicationProtocol Field Functions 
    bool hasInternetCommunicationProtocol() const { return this->internetCommunicationProtocol_ != nullptr;};
    void deleteInternetCommunicationProtocol() { this->internetCommunicationProtocol_ = nullptr;};
    inline string internetCommunicationProtocol() const { DARABONBA_PTR_GET_DEFAULT(internetCommunicationProtocol_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setInternetCommunicationProtocol(string internetCommunicationProtocol) { DARABONBA_PTR_SET_VALUE(internetCommunicationProtocol_, internetCommunicationProtocol) };


    // internetPrinter Field Functions 
    bool hasInternetPrinter() const { return this->internetPrinter_ != nullptr;};
    void deleteInternetPrinter() { this->internetPrinter_ = nullptr;};
    inline string internetPrinter() const { DARABONBA_PTR_GET_DEFAULT(internetPrinter_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setInternetPrinter(string internetPrinter) { DARABONBA_PTR_SET_VALUE(internetPrinter_, internetPrinter) };


    // localDrive Field Functions 
    bool hasLocalDrive() const { return this->localDrive_ != nullptr;};
    void deleteLocalDrive() { this->localDrive_ = nullptr;};
    inline string localDrive() const { DARABONBA_PTR_GET_DEFAULT(localDrive_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setLocalDrive(string localDrive) { DARABONBA_PTR_SET_VALUE(localDrive_, localDrive) };


    // maxReconnectTime Field Functions 
    bool hasMaxReconnectTime() const { return this->maxReconnectTime_ != nullptr;};
    void deleteMaxReconnectTime() { this->maxReconnectTime_ = nullptr;};
    inline int32_t maxReconnectTime() const { DARABONBA_PTR_GET_DEFAULT(maxReconnectTime_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setMaxReconnectTime(int32_t maxReconnectTime) { DARABONBA_PTR_SET_VALUE(maxReconnectTime_, maxReconnectTime) };


    // memoryDownGradeDuration Field Functions 
    bool hasMemoryDownGradeDuration() const { return this->memoryDownGradeDuration_ != nullptr;};
    void deleteMemoryDownGradeDuration() { this->memoryDownGradeDuration_ = nullptr;};
    inline int32_t memoryDownGradeDuration() const { DARABONBA_PTR_GET_DEFAULT(memoryDownGradeDuration_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setMemoryDownGradeDuration(int32_t memoryDownGradeDuration) { DARABONBA_PTR_SET_VALUE(memoryDownGradeDuration_, memoryDownGradeDuration) };


    // memoryProcessors Field Functions 
    bool hasMemoryProcessors() const { return this->memoryProcessors_ != nullptr;};
    void deleteMemoryProcessors() { this->memoryProcessors_ = nullptr;};
    inline const vector<string> & memoryProcessors() const { DARABONBA_PTR_GET_CONST(memoryProcessors_, vector<string>) };
    inline vector<string> memoryProcessors() { DARABONBA_PTR_GET(memoryProcessors_, vector<string>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setMemoryProcessors(const vector<string> & memoryProcessors) { DARABONBA_PTR_SET_VALUE(memoryProcessors_, memoryProcessors) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setMemoryProcessors(vector<string> && memoryProcessors) { DARABONBA_PTR_SET_RVALUE(memoryProcessors_, memoryProcessors) };


    // memoryProtectedMode Field Functions 
    bool hasMemoryProtectedMode() const { return this->memoryProtectedMode_ != nullptr;};
    void deleteMemoryProtectedMode() { this->memoryProtectedMode_ = nullptr;};
    inline string memoryProtectedMode() const { DARABONBA_PTR_GET_DEFAULT(memoryProtectedMode_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setMemoryProtectedMode(string memoryProtectedMode) { DARABONBA_PTR_SET_VALUE(memoryProtectedMode_, memoryProtectedMode) };


    // memoryRateLimit Field Functions 
    bool hasMemoryRateLimit() const { return this->memoryRateLimit_ != nullptr;};
    void deleteMemoryRateLimit() { this->memoryRateLimit_ = nullptr;};
    inline int32_t memoryRateLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryRateLimit_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setMemoryRateLimit(int32_t memoryRateLimit) { DARABONBA_PTR_SET_VALUE(memoryRateLimit_, memoryRateLimit) };


    // memorySampleDuration Field Functions 
    bool hasMemorySampleDuration() const { return this->memorySampleDuration_ != nullptr;};
    void deleteMemorySampleDuration() { this->memorySampleDuration_ = nullptr;};
    inline int32_t memorySampleDuration() const { DARABONBA_PTR_GET_DEFAULT(memorySampleDuration_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setMemorySampleDuration(int32_t memorySampleDuration) { DARABONBA_PTR_SET_VALUE(memorySampleDuration_, memorySampleDuration) };


    // memorySingleRateLimit Field Functions 
    bool hasMemorySingleRateLimit() const { return this->memorySingleRateLimit_ != nullptr;};
    void deleteMemorySingleRateLimit() { this->memorySingleRateLimit_ = nullptr;};
    inline int32_t memorySingleRateLimit() const { DARABONBA_PTR_GET_DEFAULT(memorySingleRateLimit_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setMemorySingleRateLimit(int32_t memorySingleRateLimit) { DARABONBA_PTR_SET_VALUE(memorySingleRateLimit_, memorySingleRateLimit) };


    // mobileRestart Field Functions 
    bool hasMobileRestart() const { return this->mobileRestart_ != nullptr;};
    void deleteMobileRestart() { this->mobileRestart_ = nullptr;};
    inline string mobileRestart() const { DARABONBA_PTR_GET_DEFAULT(mobileRestart_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setMobileRestart(string mobileRestart) { DARABONBA_PTR_SET_VALUE(mobileRestart_, mobileRestart) };


    // mobileShutdown Field Functions 
    bool hasMobileShutdown() const { return this->mobileShutdown_ != nullptr;};
    void deleteMobileShutdown() { this->mobileShutdown_ = nullptr;};
    inline string mobileShutdown() const { DARABONBA_PTR_GET_DEFAULT(mobileShutdown_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setMobileShutdown(string mobileShutdown) { DARABONBA_PTR_SET_VALUE(mobileShutdown_, mobileShutdown) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netRedirect Field Functions 
    bool hasNetRedirect() const { return this->netRedirect_ != nullptr;};
    void deleteNetRedirect() { this->netRedirect_ = nullptr;};
    inline string netRedirect() const { DARABONBA_PTR_GET_DEFAULT(netRedirect_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setNetRedirect(string netRedirect) { DARABONBA_PTR_SET_VALUE(netRedirect_, netRedirect) };


    // netRedirectRule Field Functions 
    bool hasNetRedirectRule() const { return this->netRedirectRule_ != nullptr;};
    void deleteNetRedirectRule() { this->netRedirectRule_ = nullptr;};
    inline const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule> & netRedirectRule() const { DARABONBA_PTR_GET_CONST(netRedirectRule_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule>) };
    inline vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule> netRedirectRule() { DARABONBA_PTR_GET(netRedirectRule_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setNetRedirectRule(const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule> & netRedirectRule) { DARABONBA_PTR_SET_VALUE(netRedirectRule_, netRedirectRule) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setNetRedirectRule(vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule> && netRedirectRule) { DARABONBA_PTR_SET_RVALUE(netRedirectRule_, netRedirectRule) };


    // noOperationDisconnect Field Functions 
    bool hasNoOperationDisconnect() const { return this->noOperationDisconnect_ != nullptr;};
    void deleteNoOperationDisconnect() { this->noOperationDisconnect_ = nullptr;};
    inline string noOperationDisconnect() const { DARABONBA_PTR_GET_DEFAULT(noOperationDisconnect_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setNoOperationDisconnect(string noOperationDisconnect) { DARABONBA_PTR_SET_VALUE(noOperationDisconnect_, noOperationDisconnect) };


    // noOperationDisconnectTime Field Functions 
    bool hasNoOperationDisconnectTime() const { return this->noOperationDisconnectTime_ != nullptr;};
    void deleteNoOperationDisconnectTime() { this->noOperationDisconnectTime_ = nullptr;};
    inline int32_t noOperationDisconnectTime() const { DARABONBA_PTR_GET_DEFAULT(noOperationDisconnectTime_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setNoOperationDisconnectTime(int32_t noOperationDisconnectTime) { DARABONBA_PTR_SET_VALUE(noOperationDisconnectTime_, noOperationDisconnectTime) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // policyGroupType Field Functions 
    bool hasPolicyGroupType() const { return this->policyGroupType_ != nullptr;};
    void deletePolicyGroupType() { this->policyGroupType_ = nullptr;};
    inline string policyGroupType() const { DARABONBA_PTR_GET_DEFAULT(policyGroupType_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setPolicyGroupType(string policyGroupType) { DARABONBA_PTR_SET_VALUE(policyGroupType_, policyGroupType) };


    // policyStatus Field Functions 
    bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
    void deletePolicyStatus() { this->policyStatus_ = nullptr;};
    inline string policyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


    // printerRedirection Field Functions 
    bool hasPrinterRedirection() const { return this->printerRedirection_ != nullptr;};
    void deletePrinterRedirection() { this->printerRedirection_ = nullptr;};
    inline string printerRedirection() const { DARABONBA_PTR_GET_DEFAULT(printerRedirection_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setPrinterRedirection(string printerRedirection) { DARABONBA_PTR_SET_VALUE(printerRedirection_, printerRedirection) };


    // qualityEnhancement Field Functions 
    bool hasQualityEnhancement() const { return this->qualityEnhancement_ != nullptr;};
    void deleteQualityEnhancement() { this->qualityEnhancement_ = nullptr;};
    inline string qualityEnhancement() const { DARABONBA_PTR_GET_DEFAULT(qualityEnhancement_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setQualityEnhancement(string qualityEnhancement) { DARABONBA_PTR_SET_VALUE(qualityEnhancement_, qualityEnhancement) };


    // recordContent Field Functions 
    bool hasRecordContent() const { return this->recordContent_ != nullptr;};
    void deleteRecordContent() { this->recordContent_ = nullptr;};
    inline string recordContent() const { DARABONBA_PTR_GET_DEFAULT(recordContent_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordContent(string recordContent) { DARABONBA_PTR_SET_VALUE(recordContent_, recordContent) };


    // recordContentExpires Field Functions 
    bool hasRecordContentExpires() const { return this->recordContentExpires_ != nullptr;};
    void deleteRecordContentExpires() { this->recordContentExpires_ = nullptr;};
    inline int64_t recordContentExpires() const { DARABONBA_PTR_GET_DEFAULT(recordContentExpires_, 0L) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordContentExpires(int64_t recordContentExpires) { DARABONBA_PTR_SET_VALUE(recordContentExpires_, recordContentExpires) };


    // recordEventDuration Field Functions 
    bool hasRecordEventDuration() const { return this->recordEventDuration_ != nullptr;};
    void deleteRecordEventDuration() { this->recordEventDuration_ = nullptr;};
    inline int32_t recordEventDuration() const { DARABONBA_PTR_GET_DEFAULT(recordEventDuration_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordEventDuration(int32_t recordEventDuration) { DARABONBA_PTR_SET_VALUE(recordEventDuration_, recordEventDuration) };


    // recordEventFilePaths Field Functions 
    bool hasRecordEventFilePaths() const { return this->recordEventFilePaths_ != nullptr;};
    void deleteRecordEventFilePaths() { this->recordEventFilePaths_ = nullptr;};
    inline const vector<string> & recordEventFilePaths() const { DARABONBA_PTR_GET_CONST(recordEventFilePaths_, vector<string>) };
    inline vector<string> recordEventFilePaths() { DARABONBA_PTR_GET(recordEventFilePaths_, vector<string>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordEventFilePaths(const vector<string> & recordEventFilePaths) { DARABONBA_PTR_SET_VALUE(recordEventFilePaths_, recordEventFilePaths) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordEventFilePaths(vector<string> && recordEventFilePaths) { DARABONBA_PTR_SET_RVALUE(recordEventFilePaths_, recordEventFilePaths) };


    // recordEventRegisters Field Functions 
    bool hasRecordEventRegisters() const { return this->recordEventRegisters_ != nullptr;};
    void deleteRecordEventRegisters() { this->recordEventRegisters_ = nullptr;};
    inline const vector<string> & recordEventRegisters() const { DARABONBA_PTR_GET_CONST(recordEventRegisters_, vector<string>) };
    inline vector<string> recordEventRegisters() { DARABONBA_PTR_GET(recordEventRegisters_, vector<string>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordEventRegisters(const vector<string> & recordEventRegisters) { DARABONBA_PTR_SET_VALUE(recordEventRegisters_, recordEventRegisters) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordEventRegisters(vector<string> && recordEventRegisters) { DARABONBA_PTR_SET_RVALUE(recordEventRegisters_, recordEventRegisters) };


    // recording Field Functions 
    bool hasRecording() const { return this->recording_ != nullptr;};
    void deleteRecording() { this->recording_ = nullptr;};
    inline string recording() const { DARABONBA_PTR_GET_DEFAULT(recording_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecording(string recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };


    // recordingAudio Field Functions 
    bool hasRecordingAudio() const { return this->recordingAudio_ != nullptr;};
    void deleteRecordingAudio() { this->recordingAudio_ = nullptr;};
    inline string recordingAudio() const { DARABONBA_PTR_GET_DEFAULT(recordingAudio_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordingAudio(string recordingAudio) { DARABONBA_PTR_SET_VALUE(recordingAudio_, recordingAudio) };


    // recordingDuration Field Functions 
    bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
    void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
    inline int32_t recordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordingDuration(int32_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


    // recordingEndTime Field Functions 
    bool hasRecordingEndTime() const { return this->recordingEndTime_ != nullptr;};
    void deleteRecordingEndTime() { this->recordingEndTime_ = nullptr;};
    inline string recordingEndTime() const { DARABONBA_PTR_GET_DEFAULT(recordingEndTime_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordingEndTime(string recordingEndTime) { DARABONBA_PTR_SET_VALUE(recordingEndTime_, recordingEndTime) };


    // recordingExpires Field Functions 
    bool hasRecordingExpires() const { return this->recordingExpires_ != nullptr;};
    void deleteRecordingExpires() { this->recordingExpires_ = nullptr;};
    inline int64_t recordingExpires() const { DARABONBA_PTR_GET_DEFAULT(recordingExpires_, 0L) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordingExpires(int64_t recordingExpires) { DARABONBA_PTR_SET_VALUE(recordingExpires_, recordingExpires) };


    // recordingFps Field Functions 
    bool hasRecordingFps() const { return this->recordingFps_ != nullptr;};
    void deleteRecordingFps() { this->recordingFps_ = nullptr;};
    inline int64_t recordingFps() const { DARABONBA_PTR_GET_DEFAULT(recordingFps_, 0L) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordingFps(int64_t recordingFps) { DARABONBA_PTR_SET_VALUE(recordingFps_, recordingFps) };


    // recordingStartTime Field Functions 
    bool hasRecordingStartTime() const { return this->recordingStartTime_ != nullptr;};
    void deleteRecordingStartTime() { this->recordingStartTime_ = nullptr;};
    inline string recordingStartTime() const { DARABONBA_PTR_GET_DEFAULT(recordingStartTime_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordingStartTime(string recordingStartTime) { DARABONBA_PTR_SET_VALUE(recordingStartTime_, recordingStartTime) };


    // recordingUserNotify Field Functions 
    bool hasRecordingUserNotify() const { return this->recordingUserNotify_ != nullptr;};
    void deleteRecordingUserNotify() { this->recordingUserNotify_ = nullptr;};
    inline string recordingUserNotify() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotify_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordingUserNotify(string recordingUserNotify) { DARABONBA_PTR_SET_VALUE(recordingUserNotify_, recordingUserNotify) };


    // recordingUserNotifyMessage Field Functions 
    bool hasRecordingUserNotifyMessage() const { return this->recordingUserNotifyMessage_ != nullptr;};
    void deleteRecordingUserNotifyMessage() { this->recordingUserNotifyMessage_ = nullptr;};
    inline string recordingUserNotifyMessage() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotifyMessage_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRecordingUserNotifyMessage(string recordingUserNotifyMessage) { DARABONBA_PTR_SET_VALUE(recordingUserNotifyMessage_, recordingUserNotifyMessage) };


    // remoteCoordinate Field Functions 
    bool hasRemoteCoordinate() const { return this->remoteCoordinate_ != nullptr;};
    void deleteRemoteCoordinate() { this->remoteCoordinate_ = nullptr;};
    inline string remoteCoordinate() const { DARABONBA_PTR_GET_DEFAULT(remoteCoordinate_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setRemoteCoordinate(string remoteCoordinate) { DARABONBA_PTR_SET_VALUE(remoteCoordinate_, remoteCoordinate) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t resolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionModel Field Functions 
    bool hasResolutionModel() const { return this->resolutionModel_ != nullptr;};
    void deleteResolutionModel() { this->resolutionModel_ = nullptr;};
    inline string resolutionModel() const { DARABONBA_PTR_GET_DEFAULT(resolutionModel_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setResolutionModel(string resolutionModel) { DARABONBA_PTR_SET_VALUE(resolutionModel_, resolutionModel) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t resolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    // resourceGroupCount Field Functions 
    bool hasResourceGroupCount() const { return this->resourceGroupCount_ != nullptr;};
    void deleteResourceGroupCount() { this->resourceGroupCount_ = nullptr;};
    inline int32_t resourceGroupCount() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupCount_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setResourceGroupCount(int32_t resourceGroupCount) { DARABONBA_PTR_SET_VALUE(resourceGroupCount_, resourceGroupCount) };


    // safeMenu Field Functions 
    bool hasSafeMenu() const { return this->safeMenu_ != nullptr;};
    void deleteSafeMenu() { this->safeMenu_ = nullptr;};
    inline string safeMenu() const { DARABONBA_PTR_GET_DEFAULT(safeMenu_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setSafeMenu(string safeMenu) { DARABONBA_PTR_SET_VALUE(safeMenu_, safeMenu) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // scopeValue Field Functions 
    bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
    void deleteScopeValue() { this->scopeValue_ = nullptr;};
    inline const vector<string> & scopeValue() const { DARABONBA_PTR_GET_CONST(scopeValue_, vector<string>) };
    inline vector<string> scopeValue() { DARABONBA_PTR_GET(scopeValue_, vector<string>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setScopeValue(const vector<string> & scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setScopeValue(vector<string> && scopeValue) { DARABONBA_PTR_SET_RVALUE(scopeValue_, scopeValue) };


    // screenDisplayMode Field Functions 
    bool hasScreenDisplayMode() const { return this->screenDisplayMode_ != nullptr;};
    void deleteScreenDisplayMode() { this->screenDisplayMode_ = nullptr;};
    inline string screenDisplayMode() const { DARABONBA_PTR_GET_DEFAULT(screenDisplayMode_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setScreenDisplayMode(string screenDisplayMode) { DARABONBA_PTR_SET_VALUE(screenDisplayMode_, screenDisplayMode) };


    // smoothEnhancement Field Functions 
    bool hasSmoothEnhancement() const { return this->smoothEnhancement_ != nullptr;};
    void deleteSmoothEnhancement() { this->smoothEnhancement_ = nullptr;};
    inline string smoothEnhancement() const { DARABONBA_PTR_GET_DEFAULT(smoothEnhancement_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setSmoothEnhancement(string smoothEnhancement) { DARABONBA_PTR_SET_VALUE(smoothEnhancement_, smoothEnhancement) };


    // statusMonitor Field Functions 
    bool hasStatusMonitor() const { return this->statusMonitor_ != nullptr;};
    void deleteStatusMonitor() { this->statusMonitor_ = nullptr;};
    inline string statusMonitor() const { DARABONBA_PTR_GET_DEFAULT(statusMonitor_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setStatusMonitor(string statusMonitor) { DARABONBA_PTR_SET_VALUE(statusMonitor_, statusMonitor) };


    // streamingMode Field Functions 
    bool hasStreamingMode() const { return this->streamingMode_ != nullptr;};
    void deleteStreamingMode() { this->streamingMode_ = nullptr;};
    inline string streamingMode() const { DARABONBA_PTR_GET_DEFAULT(streamingMode_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setStreamingMode(string streamingMode) { DARABONBA_PTR_SET_VALUE(streamingMode_, streamingMode) };


    // targetFps Field Functions 
    bool hasTargetFps() const { return this->targetFps_ != nullptr;};
    void deleteTargetFps() { this->targetFps_ = nullptr;};
    inline int32_t targetFps() const { DARABONBA_PTR_GET_DEFAULT(targetFps_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setTargetFps(int32_t targetFps) { DARABONBA_PTR_SET_VALUE(targetFps_, targetFps) };


    // taskbar Field Functions 
    bool hasTaskbar() const { return this->taskbar_ != nullptr;};
    void deleteTaskbar() { this->taskbar_ = nullptr;};
    inline string taskbar() const { DARABONBA_PTR_GET_DEFAULT(taskbar_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setTaskbar(string taskbar) { DARABONBA_PTR_SET_VALUE(taskbar_, taskbar) };


    // usbRedirect Field Functions 
    bool hasUsbRedirect() const { return this->usbRedirect_ != nullptr;};
    void deleteUsbRedirect() { this->usbRedirect_ = nullptr;};
    inline string usbRedirect() const { DARABONBA_PTR_GET_DEFAULT(usbRedirect_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setUsbRedirect(string usbRedirect) { DARABONBA_PTR_SET_VALUE(usbRedirect_, usbRedirect) };


    // usbSupplyRedirectRule Field Functions 
    bool hasUsbSupplyRedirectRule() const { return this->usbSupplyRedirectRule_ != nullptr;};
    void deleteUsbSupplyRedirectRule() { this->usbSupplyRedirectRule_ = nullptr;};
    inline const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule> & usbSupplyRedirectRule() const { DARABONBA_PTR_GET_CONST(usbSupplyRedirectRule_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule>) };
    inline vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule> usbSupplyRedirectRule() { DARABONBA_PTR_GET(usbSupplyRedirectRule_, vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule>) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setUsbSupplyRedirectRule(const vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule> & usbSupplyRedirectRule) { DARABONBA_PTR_SET_VALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setUsbSupplyRedirectRule(vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule> && usbSupplyRedirectRule) { DARABONBA_PTR_SET_RVALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };


    // useTime Field Functions 
    bool hasUseTime() const { return this->useTime_ != nullptr;};
    void deleteUseTime() { this->useTime_ = nullptr;};
    inline string useTime() const { DARABONBA_PTR_GET_DEFAULT(useTime_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setUseTime(string useTime) { DARABONBA_PTR_SET_VALUE(useTime_, useTime) };


    // videoEncAvgKbps Field Functions 
    bool hasVideoEncAvgKbps() const { return this->videoEncAvgKbps_ != nullptr;};
    void deleteVideoEncAvgKbps() { this->videoEncAvgKbps_ = nullptr;};
    inline int32_t videoEncAvgKbps() const { DARABONBA_PTR_GET_DEFAULT(videoEncAvgKbps_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setVideoEncAvgKbps(int32_t videoEncAvgKbps) { DARABONBA_PTR_SET_VALUE(videoEncAvgKbps_, videoEncAvgKbps) };


    // videoEncMaxQP Field Functions 
    bool hasVideoEncMaxQP() const { return this->videoEncMaxQP_ != nullptr;};
    void deleteVideoEncMaxQP() { this->videoEncMaxQP_ = nullptr;};
    inline int32_t videoEncMaxQP() const { DARABONBA_PTR_GET_DEFAULT(videoEncMaxQP_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setVideoEncMaxQP(int32_t videoEncMaxQP) { DARABONBA_PTR_SET_VALUE(videoEncMaxQP_, videoEncMaxQP) };


    // videoEncMinQP Field Functions 
    bool hasVideoEncMinQP() const { return this->videoEncMinQP_ != nullptr;};
    void deleteVideoEncMinQP() { this->videoEncMinQP_ = nullptr;};
    inline int32_t videoEncMinQP() const { DARABONBA_PTR_GET_DEFAULT(videoEncMinQP_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setVideoEncMinQP(int32_t videoEncMinQP) { DARABONBA_PTR_SET_VALUE(videoEncMinQP_, videoEncMinQP) };


    // videoEncPeakKbps Field Functions 
    bool hasVideoEncPeakKbps() const { return this->videoEncPeakKbps_ != nullptr;};
    void deleteVideoEncPeakKbps() { this->videoEncPeakKbps_ = nullptr;};
    inline int32_t videoEncPeakKbps() const { DARABONBA_PTR_GET_DEFAULT(videoEncPeakKbps_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setVideoEncPeakKbps(int32_t videoEncPeakKbps) { DARABONBA_PTR_SET_VALUE(videoEncPeakKbps_, videoEncPeakKbps) };


    // videoEncPolicy Field Functions 
    bool hasVideoEncPolicy() const { return this->videoEncPolicy_ != nullptr;};
    void deleteVideoEncPolicy() { this->videoEncPolicy_ = nullptr;};
    inline string videoEncPolicy() const { DARABONBA_PTR_GET_DEFAULT(videoEncPolicy_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setVideoEncPolicy(string videoEncPolicy) { DARABONBA_PTR_SET_VALUE(videoEncPolicy_, videoEncPolicy) };


    // videoRedirect Field Functions 
    bool hasVideoRedirect() const { return this->videoRedirect_ != nullptr;};
    void deleteVideoRedirect() { this->videoRedirect_ = nullptr;};
    inline string videoRedirect() const { DARABONBA_PTR_GET_DEFAULT(videoRedirect_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setVideoRedirect(string videoRedirect) { DARABONBA_PTR_SET_VALUE(videoRedirect_, videoRedirect) };


    // visualQuality Field Functions 
    bool hasVisualQuality() const { return this->visualQuality_ != nullptr;};
    void deleteVisualQuality() { this->visualQuality_ = nullptr;};
    inline string visualQuality() const { DARABONBA_PTR_GET_DEFAULT(visualQuality_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setVisualQuality(string visualQuality) { DARABONBA_PTR_SET_VALUE(visualQuality_, visualQuality) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline string watermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWatermark(string watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


    // watermarkAntiCam Field Functions 
    bool hasWatermarkAntiCam() const { return this->watermarkAntiCam_ != nullptr;};
    void deleteWatermarkAntiCam() { this->watermarkAntiCam_ = nullptr;};
    inline string watermarkAntiCam() const { DARABONBA_PTR_GET_DEFAULT(watermarkAntiCam_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWatermarkAntiCam(string watermarkAntiCam) { DARABONBA_PTR_SET_VALUE(watermarkAntiCam_, watermarkAntiCam) };


    // watermarkColor Field Functions 
    bool hasWatermarkColor() const { return this->watermarkColor_ != nullptr;};
    void deleteWatermarkColor() { this->watermarkColor_ = nullptr;};
    inline int32_t watermarkColor() const { DARABONBA_PTR_GET_DEFAULT(watermarkColor_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWatermarkColor(int32_t watermarkColor) { DARABONBA_PTR_SET_VALUE(watermarkColor_, watermarkColor) };


    // watermarkCustomText Field Functions 
    bool hasWatermarkCustomText() const { return this->watermarkCustomText_ != nullptr;};
    void deleteWatermarkCustomText() { this->watermarkCustomText_ = nullptr;};
    inline string watermarkCustomText() const { DARABONBA_PTR_GET_DEFAULT(watermarkCustomText_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWatermarkCustomText(string watermarkCustomText) { DARABONBA_PTR_SET_VALUE(watermarkCustomText_, watermarkCustomText) };


    // watermarkDegree Field Functions 
    bool hasWatermarkDegree() const { return this->watermarkDegree_ != nullptr;};
    void deleteWatermarkDegree() { this->watermarkDegree_ = nullptr;};
    inline double watermarkDegree() const { DARABONBA_PTR_GET_DEFAULT(watermarkDegree_, 0.0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWatermarkDegree(double watermarkDegree) { DARABONBA_PTR_SET_VALUE(watermarkDegree_, watermarkDegree) };


    // watermarkFontSize Field Functions 
    bool hasWatermarkFontSize() const { return this->watermarkFontSize_ != nullptr;};
    void deleteWatermarkFontSize() { this->watermarkFontSize_ = nullptr;};
    inline int32_t watermarkFontSize() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontSize_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWatermarkFontSize(int32_t watermarkFontSize) { DARABONBA_PTR_SET_VALUE(watermarkFontSize_, watermarkFontSize) };


    // watermarkFontStyle Field Functions 
    bool hasWatermarkFontStyle() const { return this->watermarkFontStyle_ != nullptr;};
    void deleteWatermarkFontStyle() { this->watermarkFontStyle_ = nullptr;};
    inline string watermarkFontStyle() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontStyle_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWatermarkFontStyle(string watermarkFontStyle) { DARABONBA_PTR_SET_VALUE(watermarkFontStyle_, watermarkFontStyle) };


    // watermarkPower Field Functions 
    bool hasWatermarkPower() const { return this->watermarkPower_ != nullptr;};
    void deleteWatermarkPower() { this->watermarkPower_ = nullptr;};
    inline string watermarkPower() const { DARABONBA_PTR_GET_DEFAULT(watermarkPower_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWatermarkPower(string watermarkPower) { DARABONBA_PTR_SET_VALUE(watermarkPower_, watermarkPower) };


    // watermarkRowAmount Field Functions 
    bool hasWatermarkRowAmount() const { return this->watermarkRowAmount_ != nullptr;};
    void deleteWatermarkRowAmount() { this->watermarkRowAmount_ = nullptr;};
    inline int32_t watermarkRowAmount() const { DARABONBA_PTR_GET_DEFAULT(watermarkRowAmount_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWatermarkRowAmount(int32_t watermarkRowAmount) { DARABONBA_PTR_SET_VALUE(watermarkRowAmount_, watermarkRowAmount) };


    // watermarkSecurity Field Functions 
    bool hasWatermarkSecurity() const { return this->watermarkSecurity_ != nullptr;};
    void deleteWatermarkSecurity() { this->watermarkSecurity_ = nullptr;};
    inline string watermarkSecurity() const { DARABONBA_PTR_GET_DEFAULT(watermarkSecurity_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWatermarkSecurity(string watermarkSecurity) { DARABONBA_PTR_SET_VALUE(watermarkSecurity_, watermarkSecurity) };


    // watermarkTransparencyValue Field Functions 
    bool hasWatermarkTransparencyValue() const { return this->watermarkTransparencyValue_ != nullptr;};
    void deleteWatermarkTransparencyValue() { this->watermarkTransparencyValue_ = nullptr;};
    inline int32_t watermarkTransparencyValue() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparencyValue_, 0) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWatermarkTransparencyValue(int32_t watermarkTransparencyValue) { DARABONBA_PTR_SET_VALUE(watermarkTransparencyValue_, watermarkTransparencyValue) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string watermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


    // wyAssistant Field Functions 
    bool hasWyAssistant() const { return this->wyAssistant_ != nullptr;};
    void deleteWyAssistant() { this->wyAssistant_ = nullptr;};
    inline string wyAssistant() const { DARABONBA_PTR_GET_DEFAULT(wyAssistant_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroups& setWyAssistant(string wyAssistant) { DARABONBA_PTR_SET_VALUE(wyAssistant_, wyAssistant) };


  protected:
    // Indicates whether the admin permissions are granted to end users.
    // 
    // >  This parameter is in private preview and only available to specific users.
    std::shared_ptr<string> adminAccess_ = nullptr;
    // Indicates whether anti-screenshot is enabled.
    std::shared_ptr<string> appContentProtection_ = nullptr;
    // The client IP address whitelists.
    std::shared_ptr<vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules>> authorizeAccessPolicyRules_ = nullptr;
    // The security group rules.
    std::shared_ptr<vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules>> authorizeSecurityPolicyRules_ = nullptr;
    // Indicates whether on-premises webcam redirection is enabled.
    std::shared_ptr<string> cameraRedirect_ = nullptr;
    std::shared_ptr<string> clientControlMenu_ = nullptr;
    // The logon method control rules.
    std::shared_ptr<vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes>> clientTypes_ = nullptr;
    // The read/write permissions on the clipboard.
    std::shared_ptr<string> clipboard_ = nullptr;
    // Indicates whether color enhancement is enabled for design and 3D applications.
    std::shared_ptr<string> colorEnhancement_ = nullptr;
    std::shared_ptr<string> cpdDriveClipboard_ = nullptr;
    // The CPU underclocking duration. Valid values: 30 to 120. Unit: seconds.
    std::shared_ptr<int32_t> cpuDownGradeDuration_ = nullptr;
    // The CPU processors.
    std::shared_ptr<vector<string>> cpuProcessors_ = nullptr;
    // The CPU spike protection policy.
    std::shared_ptr<string> cpuProtectedMode_ = nullptr;
    // The overall CPU usage. Valid values: 70 to 90. Unit: percentage (%).
    std::shared_ptr<int32_t> cpuRateLimit_ = nullptr;
    // The overall CPU sampling duration. Valid values: 10 to 60. Unit: seconds.
    std::shared_ptr<int32_t> cpuSampleDuration_ = nullptr;
    // The single-CPU usage. Valid values: 70 to 100. Unit: %.
    std::shared_ptr<int32_t> cpuSingleRateLimit_ = nullptr;
    // The number of cloud computers that are associated with the policy.
    std::shared_ptr<int32_t> desktopCount_ = nullptr;
    // The number of cloud computer shares that are associated with the policy.
    std::shared_ptr<int32_t> desktopGroupCount_ = nullptr;
    // The device redirection rules.
    std::shared_ptr<vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRedirects>> deviceRedirects_ = nullptr;
    // The custom peripheral rules.
    std::shared_ptr<vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDeviceRules>> deviceRules_ = nullptr;
    // Indicates whether the session is retained after disconnection.
    // 
    // >  This parameter applies only to cloud application policies.
    std::shared_ptr<string> disconnectKeepSession_ = nullptr;
    // The retention period of the session after disconnection. Unit: seconds.
    // 
    // >  This parameter applies only to cloud application policies.
    std::shared_ptr<int32_t> disconnectKeepSessionTime_ = nullptr;
    // The display mode.
    std::shared_ptr<string> displayMode_ = nullptr;
    // The field where the domain resolution policy is applied.
    std::shared_ptr<string> domainRegisterValue_ = nullptr;
    // The domain resolution policies.
    std::shared_ptr<vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsDomainResolveRule>> domainResolveRule_ = nullptr;
    // Indicates whether domain name resolution is allowed.
    std::shared_ptr<string> domainResolveRuleType_ = nullptr;
    // Indicates whether end users are allowed to request administrator help.
    std::shared_ptr<string> endUserApplyAdminCoordinate_ = nullptr;
    // Indicates whether end users in the same office network can share cloud computers.
    std::shared_ptr<string> endUserGroupCoordinate_ = nullptr;
    std::shared_ptr<string> fileTransferAddress_ = nullptr;
    std::shared_ptr<string> fileTransferSpeed_ = nullptr;
    std::shared_ptr<string> fileTransferSpeedLocation_ = nullptr;
    // Indicates whether image quality control is enabled. For optimal computer performance and user experience in professional design scenarios, we recommend enabling this feature.
    std::shared_ptr<string> gpuAcceleration_ = nullptr;
    // The web client access policy.
    std::shared_ptr<string> html5Access_ = nullptr;
    // The file transfer feature on the web client.
    std::shared_ptr<string> html5FileTransfer_ = nullptr;
    // The network communication protocol.
    std::shared_ptr<string> internetCommunicationProtocol_ = nullptr;
    std::shared_ptr<string> internetPrinter_ = nullptr;
    // The read/write permissions on the on-premises drive.
    std::shared_ptr<string> localDrive_ = nullptr;
    // The maximum duration to retry reconnecting to cloud computers after an unexpected disconnection (non-human causes). Valid values: 30 to 7200. Unit: seconds.
    std::shared_ptr<int32_t> maxReconnectTime_ = nullptr;
    // The memory underclocking duration per process. Valid values: 30 to 120. Unit: seconds.
    std::shared_ptr<int32_t> memoryDownGradeDuration_ = nullptr;
    // The memory processors.
    std::shared_ptr<vector<string>> memoryProcessors_ = nullptr;
    // The memory spike protection policy.
    std::shared_ptr<string> memoryProtectedMode_ = nullptr;
    // The overall memory usage. Valid values: 70 to 90. Unit: %.
    std::shared_ptr<int32_t> memoryRateLimit_ = nullptr;
    // The overall memory sampling duration. Valid values: 30 to 60. Unit: seconds.
    std::shared_ptr<int32_t> memorySampleDuration_ = nullptr;
    // The memory usage per process. Valid values: 30 to 60. Unit: %.
    std::shared_ptr<int32_t> memorySingleRateLimit_ = nullptr;
    // Indicates whether the Restart button is displayed in the DesktopAssistant menu when end users connect to cloud computers from Android clients.
    // 
    // >  This feature applies to only mobile clients of version 7.4.0 or later.
    std::shared_ptr<string> mobileRestart_ = nullptr;
    // Indicates whether the Stop button is displayed in the DesktopAssistant menu when end users connect to cloud computers from Android clients.
    // 
    // >  This feature applies to only mobile clients of version 7.4.0 or later.
    std::shared_ptr<string> mobileShutdown_ = nullptr;
    // The policy name.
    std::shared_ptr<string> name_ = nullptr;
    // The network redirection policy.
    // 
    // >  This parameter is in private preview and only available to specific users.
    std::shared_ptr<string> netRedirect_ = nullptr;
    // The network redirection policies.
    // 
    // >  This parameter is in private preview and only available to specific users.
    std::shared_ptr<vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule>> netRedirectRule_ = nullptr;
    // Indicates whether a disconnection is enforced upon inactivity.
    // 
    // >  This parameter applies only to cloud application policies.
    std::shared_ptr<string> noOperationDisconnect_ = nullptr;
    // The duration of disconnection after inactivity. Unit: seconds.
    // 
    // >  This parameter applies only to cloud application policies.
    std::shared_ptr<int32_t> noOperationDisconnectTime_ = nullptr;
    // The policy ID.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The policy type.
    std::shared_ptr<string> policyGroupType_ = nullptr;
    // The status of the cloud computer policy.
    std::shared_ptr<string> policyStatus_ = nullptr;
    // The printer redirection policy.
    std::shared_ptr<string> printerRedirection_ = nullptr;
    // Indicates whether image quality enhancement is enabled for design and 3D applications.
    std::shared_ptr<string> qualityEnhancement_ = nullptr;
    // Indicates whether custom screen recording is enabled.
    std::shared_ptr<string> recordContent_ = nullptr;
    // The duration for which custom screen recordings are kept before they expire. Default value: 30 days.
    std::shared_ptr<int64_t> recordContentExpires_ = nullptr;
    // The duration of screen recording after the specified event is detected. Unit: minutes. Valid values: 10 to 60.
    std::shared_ptr<int32_t> recordEventDuration_ = nullptr;
    // The absolute paths to screen recording files.
    std::shared_ptr<vector<string>> recordEventFilePaths_ = nullptr;
    // The absolute paths to screen recording registries.
    std::shared_ptr<vector<string>> recordEventRegisters_ = nullptr;
    // Indicates whether screen recording is enabled.
    std::shared_ptr<string> recording_ = nullptr;
    // Indicates whether audio files generated on cloud computers are recorded.
    std::shared_ptr<string> recordingAudio_ = nullptr;
    // The length of the screen recording file. Unit: minutes. Screen recording files are split by the specified length and uploaded to OSS buckets. Once a file reaches 300 MB, the system prioritizes rolling updates for that file.
    std::shared_ptr<int32_t> recordingDuration_ = nullptr;
    // The end time of screen recording. The value is in the HH:MM:SS format. The value is meaningful only when you set Recording to period.
    std::shared_ptr<string> recordingEndTime_ = nullptr;
    // The retention period of the screen recording file. Valid values: 1 to 180. Unit: days.
    std::shared_ptr<int64_t> recordingExpires_ = nullptr;
    // The frame rate of screen recording. Unit: fps.
    std::shared_ptr<int64_t> recordingFps_ = nullptr;
    // The start time of screen recording. The value is in the HH:MM:SS format. The value is meaningful only when you set Recording to period.
    std::shared_ptr<string> recordingStartTime_ = nullptr;
    // Indicates whether to notify end users when screen recording is enabled.
    std::shared_ptr<string> recordingUserNotify_ = nullptr;
    // The notification sent to end users when screen recording is enabled.
    std::shared_ptr<string> recordingUserNotifyMessage_ = nullptr;
    // The keyboard and mouse control permissions during remote assistance.
    std::shared_ptr<string> remoteCoordinate_ = nullptr;
    // The height of the resolution. Unit: pixel.
    std::shared_ptr<int32_t> resolutionHeight_ = nullptr;
    // The resolution type.
    std::shared_ptr<string> resolutionModel_ = nullptr;
    // The width of the resolution. Unit: pixel.
    std::shared_ptr<int32_t> resolutionWidth_ = nullptr;
    // The number of resource groups that are associated with the policy.
    std::shared_ptr<int32_t> resourceGroupCount_ = nullptr;
    std::shared_ptr<string> safeMenu_ = nullptr;
    // The effective scope of the policy.
    std::shared_ptr<string> scope_ = nullptr;
    // The effective scopes specified by CIDR blocks.
    std::shared_ptr<vector<string>> scopeValue_ = nullptr;
    std::shared_ptr<string> screenDisplayMode_ = nullptr;
    // Indicates whether smoothness enhancement is enabled for daily office use.
    std::shared_ptr<string> smoothEnhancement_ = nullptr;
    // Indicates whether the metric status entry is displayed in the DesktopAssistant menu.
    std::shared_ptr<string> statusMonitor_ = nullptr;
    // The streaming mode.
    std::shared_ptr<string> streamingMode_ = nullptr;
    // The target frame rate. Valid values: 10 to 60. Unit: fps.
    std::shared_ptr<int32_t> targetFps_ = nullptr;
    // Indicates whether the application taskbar is displayed.
    // 
    // >  This parameter applies only to cloud application policies.
    std::shared_ptr<string> taskbar_ = nullptr;
    // The USB redirection policy.
    std::shared_ptr<string> usbRedirect_ = nullptr;
    // The USB redirection rules.
    std::shared_ptr<vector<Models::DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule>> usbSupplyRedirectRule_ = nullptr;
    std::shared_ptr<string> useTime_ = nullptr;
    // The average bitrate for video encoding. Unit: Kbit/s. Valid values: 1000 to 50000.
    std::shared_ptr<int32_t> videoEncAvgKbps_ = nullptr;
    // The maximum QP for video files. Higher QP values result in lower video quality. Valid values: 0 to 51.
    std::shared_ptr<int32_t> videoEncMaxQP_ = nullptr;
    // The minimum quantizer parameter (QP) for video files. A lower QP means better video quality. Valid values: 0 to 51.
    std::shared_ptr<int32_t> videoEncMinQP_ = nullptr;
    // The peak bitrate for video encoding. Unit: Kbit/s. Valid values: 1000 to 50000.
    std::shared_ptr<int32_t> videoEncPeakKbps_ = nullptr;
    // The video encoding policy.
    std::shared_ptr<string> videoEncPolicy_ = nullptr;
    // Indicates whether multimedia redirection is enabled.
    std::shared_ptr<string> videoRedirect_ = nullptr;
    // The image quality policy.
    std::shared_ptr<string> visualQuality_ = nullptr;
    // The watermark policy.
    std::shared_ptr<string> watermark_ = nullptr;
    // Indicates whether anti-screen capture is enabled for invisible watermarks.
    std::shared_ptr<string> watermarkAntiCam_ = nullptr;
    // The font color of the watermark. Valid values: 0 to 16777215.
    std::shared_ptr<int32_t> watermarkColor_ = nullptr;
    // If you set `WatermarkType` to `custom`, you must also specify `WatermarkCustomText`.
    std::shared_ptr<string> watermarkCustomText_ = nullptr;
    // The watermark rotation. Valid values: -10 to -30.
    std::shared_ptr<double> watermarkDegree_ = nullptr;
    // The font size of the watermark. Valid values: 10 to 20.
    std::shared_ptr<int32_t> watermarkFontSize_ = nullptr;
    // The font style of the watermark.
    std::shared_ptr<string> watermarkFontStyle_ = nullptr;
    // The enhancement level for invisible watermarks.
    std::shared_ptr<string> watermarkPower_ = nullptr;
    // The number of watermark rows.
    std::shared_ptr<int32_t> watermarkRowAmount_ = nullptr;
    // Indicates whether security priority is enabled for invisible watermarks.
    std::shared_ptr<string> watermarkSecurity_ = nullptr;
    // The watermark transparency. A higher value means the watermark is less transparent. Valid values: 10 to 100.
    std::shared_ptr<int32_t> watermarkTransparencyValue_ = nullptr;
    // The watermark type.
    std::shared_ptr<string> watermarkType_ = nullptr;
    // Indicates whether the Xiaoying AI Assistant entry is displayed in the DesktopAssistant menu.
    std::shared_ptr<string> wyAssistant_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
