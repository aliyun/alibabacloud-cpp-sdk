// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODYDESCRIBEPOLICYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODYDESCRIBEPOLICYGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules.hpp>
#include <alibabacloud/models/DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules.hpp>
#include <alibabacloud/models/DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes.hpp>
#include <alibabacloud/models/DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRedirects.hpp>
#include <alibabacloud/models/DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRules.hpp>
#include <alibabacloud/models/DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule.hpp>
#include <alibabacloud/models/DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule.hpp>
#include <alibabacloud/models/DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels.hpp>
#include <alibabacloud/models/DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePolicyGroupsResponseBodyDescribePolicyGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGroupsResponseBodyDescribePolicyGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AdminAccess, adminAccess_);
      DARABONBA_PTR_TO_JSON(AppContentProtection, appContentProtection_);
      DARABONBA_PTR_TO_JSON(AuthorizeAccessPolicyRules, authorizeAccessPolicyRules_);
      DARABONBA_PTR_TO_JSON(AuthorizeSecurityPolicyRules, authorizeSecurityPolicyRules_);
      DARABONBA_PTR_TO_JSON(AutoReconnect, autoReconnect_);
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
      DARABONBA_PTR_TO_JSON(DeviceConnectHint, deviceConnectHint_);
      DARABONBA_PTR_TO_JSON(DeviceRedirects, deviceRedirects_);
      DARABONBA_PTR_TO_JSON(DeviceRules, deviceRules_);
      DARABONBA_PTR_TO_JSON(DisplayMode, displayMode_);
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(DomainResolveRule, domainResolveRule_);
      DARABONBA_PTR_TO_JSON(DomainResolveRuleType, domainResolveRuleType_);
      DARABONBA_PTR_TO_JSON(EdsCount, edsCount_);
      DARABONBA_PTR_TO_JSON(EndUserApplyAdminCoordinate, endUserApplyAdminCoordinate_);
      DARABONBA_PTR_TO_JSON(EndUserGroupCoordinate, endUserGroupCoordinate_);
      DARABONBA_PTR_TO_JSON(FileMigrate, fileMigrate_);
      DARABONBA_PTR_TO_JSON(FileTransfer, fileTransfer_);
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
      DARABONBA_PTR_TO_JSON(MobileSafeMenu, mobileSafeMenu_);
      DARABONBA_PTR_TO_JSON(MobileShutdown, mobileShutdown_);
      DARABONBA_PTR_TO_JSON(MobileWuyingKeeper, mobileWuyingKeeper_);
      DARABONBA_PTR_TO_JSON(MobileWyAssistant, mobileWyAssistant_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetRedirect, netRedirect_);
      DARABONBA_PTR_TO_JSON(NetRedirectRule, netRedirectRule_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupType, policyGroupType_);
      DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_TO_JSON(PreemptLogin, preemptLogin_);
      DARABONBA_PTR_TO_JSON(PreemptLoginUsers, preemptLoginUsers_);
      DARABONBA_PTR_TO_JSON(PrinterRedirection, printerRedirection_);
      DARABONBA_PTR_TO_JSON(QualityEnhancement, qualityEnhancement_);
      DARABONBA_PTR_TO_JSON(RecordContent, recordContent_);
      DARABONBA_PTR_TO_JSON(RecordContentExpires, recordContentExpires_);
      DARABONBA_PTR_TO_JSON(RecordEventDuration, recordEventDuration_);
      DARABONBA_PTR_TO_JSON(RecordEventFileExts, recordEventFileExts_);
      DARABONBA_PTR_TO_JSON(RecordEventFilePaths, recordEventFilePaths_);
      DARABONBA_PTR_TO_JSON(RecordEventLevels, recordEventLevels_);
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
      DARABONBA_PTR_TO_JSON(ResetDesktop, resetDesktop_);
      DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_TO_JSON(ResolutionModel, resolutionModel_);
      DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_TO_JSON(ResourceGroupCount, resourceGroupCount_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(SafeMenu, safeMenu_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(ScopeValue, scopeValue_);
      DARABONBA_PTR_TO_JSON(ScreenDisplayMode, screenDisplayMode_);
      DARABONBA_PTR_TO_JSON(SmoothEnhancement, smoothEnhancement_);
      DARABONBA_PTR_TO_JSON(StatusMonitor, statusMonitor_);
      DARABONBA_PTR_TO_JSON(StreamingMode, streamingMode_);
      DARABONBA_PTR_TO_JSON(TargetFps, targetFps_);
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
      DARABONBA_PTR_TO_JSON(WatermarkTransparency, watermarkTransparency_);
      DARABONBA_PTR_TO_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
      DARABONBA_PTR_TO_JSON(WatermarkType, watermarkType_);
      DARABONBA_PTR_TO_JSON(WuyingKeeper, wuyingKeeper_);
      DARABONBA_PTR_TO_JSON(WyAssistant, wyAssistant_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGroupsResponseBodyDescribePolicyGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminAccess, adminAccess_);
      DARABONBA_PTR_FROM_JSON(AppContentProtection, appContentProtection_);
      DARABONBA_PTR_FROM_JSON(AuthorizeAccessPolicyRules, authorizeAccessPolicyRules_);
      DARABONBA_PTR_FROM_JSON(AuthorizeSecurityPolicyRules, authorizeSecurityPolicyRules_);
      DARABONBA_PTR_FROM_JSON(AutoReconnect, autoReconnect_);
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
      DARABONBA_PTR_FROM_JSON(DeviceConnectHint, deviceConnectHint_);
      DARABONBA_PTR_FROM_JSON(DeviceRedirects, deviceRedirects_);
      DARABONBA_PTR_FROM_JSON(DeviceRules, deviceRules_);
      DARABONBA_PTR_FROM_JSON(DisplayMode, displayMode_);
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(DomainResolveRule, domainResolveRule_);
      DARABONBA_PTR_FROM_JSON(DomainResolveRuleType, domainResolveRuleType_);
      DARABONBA_PTR_FROM_JSON(EdsCount, edsCount_);
      DARABONBA_PTR_FROM_JSON(EndUserApplyAdminCoordinate, endUserApplyAdminCoordinate_);
      DARABONBA_PTR_FROM_JSON(EndUserGroupCoordinate, endUserGroupCoordinate_);
      DARABONBA_PTR_FROM_JSON(FileMigrate, fileMigrate_);
      DARABONBA_PTR_FROM_JSON(FileTransfer, fileTransfer_);
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
      DARABONBA_PTR_FROM_JSON(MobileSafeMenu, mobileSafeMenu_);
      DARABONBA_PTR_FROM_JSON(MobileShutdown, mobileShutdown_);
      DARABONBA_PTR_FROM_JSON(MobileWuyingKeeper, mobileWuyingKeeper_);
      DARABONBA_PTR_FROM_JSON(MobileWyAssistant, mobileWyAssistant_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetRedirect, netRedirect_);
      DARABONBA_PTR_FROM_JSON(NetRedirectRule, netRedirectRule_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupType, policyGroupType_);
      DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_FROM_JSON(PreemptLogin, preemptLogin_);
      DARABONBA_PTR_FROM_JSON(PreemptLoginUsers, preemptLoginUsers_);
      DARABONBA_PTR_FROM_JSON(PrinterRedirection, printerRedirection_);
      DARABONBA_PTR_FROM_JSON(QualityEnhancement, qualityEnhancement_);
      DARABONBA_PTR_FROM_JSON(RecordContent, recordContent_);
      DARABONBA_PTR_FROM_JSON(RecordContentExpires, recordContentExpires_);
      DARABONBA_PTR_FROM_JSON(RecordEventDuration, recordEventDuration_);
      DARABONBA_PTR_FROM_JSON(RecordEventFileExts, recordEventFileExts_);
      DARABONBA_PTR_FROM_JSON(RecordEventFilePaths, recordEventFilePaths_);
      DARABONBA_PTR_FROM_JSON(RecordEventLevels, recordEventLevels_);
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
      DARABONBA_PTR_FROM_JSON(ResetDesktop, resetDesktop_);
      DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_FROM_JSON(ResolutionModel, resolutionModel_);
      DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupCount, resourceGroupCount_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(SafeMenu, safeMenu_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(ScopeValue, scopeValue_);
      DARABONBA_PTR_FROM_JSON(ScreenDisplayMode, screenDisplayMode_);
      DARABONBA_PTR_FROM_JSON(SmoothEnhancement, smoothEnhancement_);
      DARABONBA_PTR_FROM_JSON(StatusMonitor, statusMonitor_);
      DARABONBA_PTR_FROM_JSON(StreamingMode, streamingMode_);
      DARABONBA_PTR_FROM_JSON(TargetFps, targetFps_);
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
      DARABONBA_PTR_FROM_JSON(WatermarkTransparency, watermarkTransparency_);
      DARABONBA_PTR_FROM_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
      DARABONBA_PTR_FROM_JSON(WatermarkType, watermarkType_);
      DARABONBA_PTR_FROM_JSON(WuyingKeeper, wuyingKeeper_);
      DARABONBA_PTR_FROM_JSON(WyAssistant, wyAssistant_);
    };
    DescribePolicyGroupsResponseBodyDescribePolicyGroups() = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroups(const DescribePolicyGroupsResponseBodyDescribePolicyGroups &) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroups(DescribePolicyGroupsResponseBodyDescribePolicyGroups &&) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGroupsResponseBodyDescribePolicyGroups() = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroups& operator=(const DescribePolicyGroupsResponseBodyDescribePolicyGroups &) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroups& operator=(DescribePolicyGroupsResponseBodyDescribePolicyGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adminAccess_ != nullptr
        && this->appContentProtection_ != nullptr && this->authorizeAccessPolicyRules_ != nullptr && this->authorizeSecurityPolicyRules_ != nullptr && this->autoReconnect_ != nullptr && this->cameraRedirect_ != nullptr
        && this->clientControlMenu_ != nullptr && this->clientTypes_ != nullptr && this->clipboard_ != nullptr && this->colorEnhancement_ != nullptr && this->cpdDriveClipboard_ != nullptr
        && this->cpuDownGradeDuration_ != nullptr && this->cpuProcessors_ != nullptr && this->cpuProtectedMode_ != nullptr && this->cpuRateLimit_ != nullptr && this->cpuSampleDuration_ != nullptr
        && this->cpuSingleRateLimit_ != nullptr && this->desktopCount_ != nullptr && this->desktopGroupCount_ != nullptr && this->deviceConnectHint_ != nullptr && this->deviceRedirects_ != nullptr
        && this->deviceRules_ != nullptr && this->displayMode_ != nullptr && this->domainList_ != nullptr && this->domainResolveRule_ != nullptr && this->domainResolveRuleType_ != nullptr
        && this->edsCount_ != nullptr && this->endUserApplyAdminCoordinate_ != nullptr && this->endUserGroupCoordinate_ != nullptr && this->fileMigrate_ != nullptr && this->fileTransfer_ != nullptr
        && this->fileTransferAddress_ != nullptr && this->fileTransferSpeed_ != nullptr && this->fileTransferSpeedLocation_ != nullptr && this->gpuAcceleration_ != nullptr && this->html5Access_ != nullptr
        && this->html5FileTransfer_ != nullptr && this->internetCommunicationProtocol_ != nullptr && this->internetPrinter_ != nullptr && this->localDrive_ != nullptr && this->maxReconnectTime_ != nullptr
        && this->memoryDownGradeDuration_ != nullptr && this->memoryProcessors_ != nullptr && this->memoryProtectedMode_ != nullptr && this->memoryRateLimit_ != nullptr && this->memorySampleDuration_ != nullptr
        && this->memorySingleRateLimit_ != nullptr && this->mobileRestart_ != nullptr && this->mobileSafeMenu_ != nullptr && this->mobileShutdown_ != nullptr && this->mobileWuyingKeeper_ != nullptr
        && this->mobileWyAssistant_ != nullptr && this->name_ != nullptr && this->netRedirect_ != nullptr && this->netRedirectRule_ != nullptr && this->policyGroupId_ != nullptr
        && this->policyGroupType_ != nullptr && this->policyStatus_ != nullptr && this->preemptLogin_ != nullptr && this->preemptLoginUsers_ != nullptr && this->printerRedirection_ != nullptr
        && this->qualityEnhancement_ != nullptr && this->recordContent_ != nullptr && this->recordContentExpires_ != nullptr && this->recordEventDuration_ != nullptr && this->recordEventFileExts_ != nullptr
        && this->recordEventFilePaths_ != nullptr && this->recordEventLevels_ != nullptr && this->recordEventRegisters_ != nullptr && this->recording_ != nullptr && this->recordingAudio_ != nullptr
        && this->recordingDuration_ != nullptr && this->recordingEndTime_ != nullptr && this->recordingExpires_ != nullptr && this->recordingFps_ != nullptr && this->recordingStartTime_ != nullptr
        && this->recordingUserNotify_ != nullptr && this->recordingUserNotifyMessage_ != nullptr && this->remoteCoordinate_ != nullptr && this->resetDesktop_ != nullptr && this->resolutionHeight_ != nullptr
        && this->resolutionModel_ != nullptr && this->resolutionWidth_ != nullptr && this->resourceGroupCount_ != nullptr && this->resourceRegionId_ != nullptr && this->safeMenu_ != nullptr
        && this->scope_ != nullptr && this->scopeValue_ != nullptr && this->screenDisplayMode_ != nullptr && this->smoothEnhancement_ != nullptr && this->statusMonitor_ != nullptr
        && this->streamingMode_ != nullptr && this->targetFps_ != nullptr && this->usbRedirect_ != nullptr && this->usbSupplyRedirectRule_ != nullptr && this->useTime_ != nullptr
        && this->videoEncAvgKbps_ != nullptr && this->videoEncMaxQP_ != nullptr && this->videoEncMinQP_ != nullptr && this->videoEncPeakKbps_ != nullptr && this->videoEncPolicy_ != nullptr
        && this->videoRedirect_ != nullptr && this->visualQuality_ != nullptr && this->watermark_ != nullptr && this->watermarkAntiCam_ != nullptr && this->watermarkColor_ != nullptr
        && this->watermarkCustomText_ != nullptr && this->watermarkDegree_ != nullptr && this->watermarkFontSize_ != nullptr && this->watermarkFontStyle_ != nullptr && this->watermarkPower_ != nullptr
        && this->watermarkRowAmount_ != nullptr && this->watermarkSecurity_ != nullptr && this->watermarkTransparency_ != nullptr && this->watermarkTransparencyValue_ != nullptr && this->watermarkType_ != nullptr
        && this->wuyingKeeper_ != nullptr && this->wyAssistant_ != nullptr; };
    // adminAccess Field Functions 
    bool hasAdminAccess() const { return this->adminAccess_ != nullptr;};
    void deleteAdminAccess() { this->adminAccess_ = nullptr;};
    inline string adminAccess() const { DARABONBA_PTR_GET_DEFAULT(adminAccess_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setAdminAccess(string adminAccess) { DARABONBA_PTR_SET_VALUE(adminAccess_, adminAccess) };


    // appContentProtection Field Functions 
    bool hasAppContentProtection() const { return this->appContentProtection_ != nullptr;};
    void deleteAppContentProtection() { this->appContentProtection_ = nullptr;};
    inline string appContentProtection() const { DARABONBA_PTR_GET_DEFAULT(appContentProtection_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setAppContentProtection(string appContentProtection) { DARABONBA_PTR_SET_VALUE(appContentProtection_, appContentProtection) };


    // authorizeAccessPolicyRules Field Functions 
    bool hasAuthorizeAccessPolicyRules() const { return this->authorizeAccessPolicyRules_ != nullptr;};
    void deleteAuthorizeAccessPolicyRules() { this->authorizeAccessPolicyRules_ = nullptr;};
    inline const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules> & authorizeAccessPolicyRules() const { DARABONBA_PTR_GET_CONST(authorizeAccessPolicyRules_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules>) };
    inline vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules> authorizeAccessPolicyRules() { DARABONBA_PTR_GET(authorizeAccessPolicyRules_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setAuthorizeAccessPolicyRules(const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules> & authorizeAccessPolicyRules) { DARABONBA_PTR_SET_VALUE(authorizeAccessPolicyRules_, authorizeAccessPolicyRules) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setAuthorizeAccessPolicyRules(vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules> && authorizeAccessPolicyRules) { DARABONBA_PTR_SET_RVALUE(authorizeAccessPolicyRules_, authorizeAccessPolicyRules) };


    // authorizeSecurityPolicyRules Field Functions 
    bool hasAuthorizeSecurityPolicyRules() const { return this->authorizeSecurityPolicyRules_ != nullptr;};
    void deleteAuthorizeSecurityPolicyRules() { this->authorizeSecurityPolicyRules_ = nullptr;};
    inline const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules> & authorizeSecurityPolicyRules() const { DARABONBA_PTR_GET_CONST(authorizeSecurityPolicyRules_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules>) };
    inline vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules> authorizeSecurityPolicyRules() { DARABONBA_PTR_GET(authorizeSecurityPolicyRules_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setAuthorizeSecurityPolicyRules(const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules> & authorizeSecurityPolicyRules) { DARABONBA_PTR_SET_VALUE(authorizeSecurityPolicyRules_, authorizeSecurityPolicyRules) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setAuthorizeSecurityPolicyRules(vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules> && authorizeSecurityPolicyRules) { DARABONBA_PTR_SET_RVALUE(authorizeSecurityPolicyRules_, authorizeSecurityPolicyRules) };


    // autoReconnect Field Functions 
    bool hasAutoReconnect() const { return this->autoReconnect_ != nullptr;};
    void deleteAutoReconnect() { this->autoReconnect_ = nullptr;};
    inline string autoReconnect() const { DARABONBA_PTR_GET_DEFAULT(autoReconnect_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setAutoReconnect(string autoReconnect) { DARABONBA_PTR_SET_VALUE(autoReconnect_, autoReconnect) };


    // cameraRedirect Field Functions 
    bool hasCameraRedirect() const { return this->cameraRedirect_ != nullptr;};
    void deleteCameraRedirect() { this->cameraRedirect_ = nullptr;};
    inline string cameraRedirect() const { DARABONBA_PTR_GET_DEFAULT(cameraRedirect_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setCameraRedirect(string cameraRedirect) { DARABONBA_PTR_SET_VALUE(cameraRedirect_, cameraRedirect) };


    // clientControlMenu Field Functions 
    bool hasClientControlMenu() const { return this->clientControlMenu_ != nullptr;};
    void deleteClientControlMenu() { this->clientControlMenu_ = nullptr;};
    inline string clientControlMenu() const { DARABONBA_PTR_GET_DEFAULT(clientControlMenu_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setClientControlMenu(string clientControlMenu) { DARABONBA_PTR_SET_VALUE(clientControlMenu_, clientControlMenu) };


    // clientTypes Field Functions 
    bool hasClientTypes() const { return this->clientTypes_ != nullptr;};
    void deleteClientTypes() { this->clientTypes_ = nullptr;};
    inline const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes> & clientTypes() const { DARABONBA_PTR_GET_CONST(clientTypes_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes>) };
    inline vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes> clientTypes() { DARABONBA_PTR_GET(clientTypes_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setClientTypes(const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes> & clientTypes) { DARABONBA_PTR_SET_VALUE(clientTypes_, clientTypes) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setClientTypes(vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes> && clientTypes) { DARABONBA_PTR_SET_RVALUE(clientTypes_, clientTypes) };


    // clipboard Field Functions 
    bool hasClipboard() const { return this->clipboard_ != nullptr;};
    void deleteClipboard() { this->clipboard_ = nullptr;};
    inline string clipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


    // colorEnhancement Field Functions 
    bool hasColorEnhancement() const { return this->colorEnhancement_ != nullptr;};
    void deleteColorEnhancement() { this->colorEnhancement_ = nullptr;};
    inline string colorEnhancement() const { DARABONBA_PTR_GET_DEFAULT(colorEnhancement_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setColorEnhancement(string colorEnhancement) { DARABONBA_PTR_SET_VALUE(colorEnhancement_, colorEnhancement) };


    // cpdDriveClipboard Field Functions 
    bool hasCpdDriveClipboard() const { return this->cpdDriveClipboard_ != nullptr;};
    void deleteCpdDriveClipboard() { this->cpdDriveClipboard_ = nullptr;};
    inline string cpdDriveClipboard() const { DARABONBA_PTR_GET_DEFAULT(cpdDriveClipboard_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setCpdDriveClipboard(string cpdDriveClipboard) { DARABONBA_PTR_SET_VALUE(cpdDriveClipboard_, cpdDriveClipboard) };


    // cpuDownGradeDuration Field Functions 
    bool hasCpuDownGradeDuration() const { return this->cpuDownGradeDuration_ != nullptr;};
    void deleteCpuDownGradeDuration() { this->cpuDownGradeDuration_ = nullptr;};
    inline int32_t cpuDownGradeDuration() const { DARABONBA_PTR_GET_DEFAULT(cpuDownGradeDuration_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setCpuDownGradeDuration(int32_t cpuDownGradeDuration) { DARABONBA_PTR_SET_VALUE(cpuDownGradeDuration_, cpuDownGradeDuration) };


    // cpuProcessors Field Functions 
    bool hasCpuProcessors() const { return this->cpuProcessors_ != nullptr;};
    void deleteCpuProcessors() { this->cpuProcessors_ = nullptr;};
    inline const vector<string> & cpuProcessors() const { DARABONBA_PTR_GET_CONST(cpuProcessors_, vector<string>) };
    inline vector<string> cpuProcessors() { DARABONBA_PTR_GET(cpuProcessors_, vector<string>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setCpuProcessors(const vector<string> & cpuProcessors) { DARABONBA_PTR_SET_VALUE(cpuProcessors_, cpuProcessors) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setCpuProcessors(vector<string> && cpuProcessors) { DARABONBA_PTR_SET_RVALUE(cpuProcessors_, cpuProcessors) };


    // cpuProtectedMode Field Functions 
    bool hasCpuProtectedMode() const { return this->cpuProtectedMode_ != nullptr;};
    void deleteCpuProtectedMode() { this->cpuProtectedMode_ = nullptr;};
    inline string cpuProtectedMode() const { DARABONBA_PTR_GET_DEFAULT(cpuProtectedMode_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setCpuProtectedMode(string cpuProtectedMode) { DARABONBA_PTR_SET_VALUE(cpuProtectedMode_, cpuProtectedMode) };


    // cpuRateLimit Field Functions 
    bool hasCpuRateLimit() const { return this->cpuRateLimit_ != nullptr;};
    void deleteCpuRateLimit() { this->cpuRateLimit_ = nullptr;};
    inline int32_t cpuRateLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuRateLimit_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setCpuRateLimit(int32_t cpuRateLimit) { DARABONBA_PTR_SET_VALUE(cpuRateLimit_, cpuRateLimit) };


    // cpuSampleDuration Field Functions 
    bool hasCpuSampleDuration() const { return this->cpuSampleDuration_ != nullptr;};
    void deleteCpuSampleDuration() { this->cpuSampleDuration_ = nullptr;};
    inline int32_t cpuSampleDuration() const { DARABONBA_PTR_GET_DEFAULT(cpuSampleDuration_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setCpuSampleDuration(int32_t cpuSampleDuration) { DARABONBA_PTR_SET_VALUE(cpuSampleDuration_, cpuSampleDuration) };


    // cpuSingleRateLimit Field Functions 
    bool hasCpuSingleRateLimit() const { return this->cpuSingleRateLimit_ != nullptr;};
    void deleteCpuSingleRateLimit() { this->cpuSingleRateLimit_ = nullptr;};
    inline int32_t cpuSingleRateLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuSingleRateLimit_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setCpuSingleRateLimit(int32_t cpuSingleRateLimit) { DARABONBA_PTR_SET_VALUE(cpuSingleRateLimit_, cpuSingleRateLimit) };


    // desktopCount Field Functions 
    bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
    void deleteDesktopCount() { this->desktopCount_ = nullptr;};
    inline int32_t desktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setDesktopCount(int32_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


    // desktopGroupCount Field Functions 
    bool hasDesktopGroupCount() const { return this->desktopGroupCount_ != nullptr;};
    void deleteDesktopGroupCount() { this->desktopGroupCount_ = nullptr;};
    inline int32_t desktopGroupCount() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupCount_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setDesktopGroupCount(int32_t desktopGroupCount) { DARABONBA_PTR_SET_VALUE(desktopGroupCount_, desktopGroupCount) };


    // deviceConnectHint Field Functions 
    bool hasDeviceConnectHint() const { return this->deviceConnectHint_ != nullptr;};
    void deleteDeviceConnectHint() { this->deviceConnectHint_ = nullptr;};
    inline string deviceConnectHint() const { DARABONBA_PTR_GET_DEFAULT(deviceConnectHint_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setDeviceConnectHint(string deviceConnectHint) { DARABONBA_PTR_SET_VALUE(deviceConnectHint_, deviceConnectHint) };


    // deviceRedirects Field Functions 
    bool hasDeviceRedirects() const { return this->deviceRedirects_ != nullptr;};
    void deleteDeviceRedirects() { this->deviceRedirects_ = nullptr;};
    inline const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRedirects> & deviceRedirects() const { DARABONBA_PTR_GET_CONST(deviceRedirects_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRedirects>) };
    inline vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRedirects> deviceRedirects() { DARABONBA_PTR_GET(deviceRedirects_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRedirects>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setDeviceRedirects(const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRedirects> & deviceRedirects) { DARABONBA_PTR_SET_VALUE(deviceRedirects_, deviceRedirects) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setDeviceRedirects(vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRedirects> && deviceRedirects) { DARABONBA_PTR_SET_RVALUE(deviceRedirects_, deviceRedirects) };


    // deviceRules Field Functions 
    bool hasDeviceRules() const { return this->deviceRules_ != nullptr;};
    void deleteDeviceRules() { this->deviceRules_ = nullptr;};
    inline const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRules> & deviceRules() const { DARABONBA_PTR_GET_CONST(deviceRules_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRules>) };
    inline vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRules> deviceRules() { DARABONBA_PTR_GET(deviceRules_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRules>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setDeviceRules(const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRules> & deviceRules) { DARABONBA_PTR_SET_VALUE(deviceRules_, deviceRules) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setDeviceRules(vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRules> && deviceRules) { DARABONBA_PTR_SET_RVALUE(deviceRules_, deviceRules) };


    // displayMode Field Functions 
    bool hasDisplayMode() const { return this->displayMode_ != nullptr;};
    void deleteDisplayMode() { this->displayMode_ = nullptr;};
    inline string displayMode() const { DARABONBA_PTR_GET_DEFAULT(displayMode_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setDisplayMode(string displayMode) { DARABONBA_PTR_SET_VALUE(displayMode_, displayMode) };


    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline string domainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


    // domainResolveRule Field Functions 
    bool hasDomainResolveRule() const { return this->domainResolveRule_ != nullptr;};
    void deleteDomainResolveRule() { this->domainResolveRule_ = nullptr;};
    inline const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule> & domainResolveRule() const { DARABONBA_PTR_GET_CONST(domainResolveRule_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule>) };
    inline vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule> domainResolveRule() { DARABONBA_PTR_GET(domainResolveRule_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setDomainResolveRule(const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule> & domainResolveRule) { DARABONBA_PTR_SET_VALUE(domainResolveRule_, domainResolveRule) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setDomainResolveRule(vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule> && domainResolveRule) { DARABONBA_PTR_SET_RVALUE(domainResolveRule_, domainResolveRule) };


    // domainResolveRuleType Field Functions 
    bool hasDomainResolveRuleType() const { return this->domainResolveRuleType_ != nullptr;};
    void deleteDomainResolveRuleType() { this->domainResolveRuleType_ = nullptr;};
    inline string domainResolveRuleType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveRuleType_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setDomainResolveRuleType(string domainResolveRuleType) { DARABONBA_PTR_SET_VALUE(domainResolveRuleType_, domainResolveRuleType) };


    // edsCount Field Functions 
    bool hasEdsCount() const { return this->edsCount_ != nullptr;};
    void deleteEdsCount() { this->edsCount_ = nullptr;};
    inline int32_t edsCount() const { DARABONBA_PTR_GET_DEFAULT(edsCount_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setEdsCount(int32_t edsCount) { DARABONBA_PTR_SET_VALUE(edsCount_, edsCount) };


    // endUserApplyAdminCoordinate Field Functions 
    bool hasEndUserApplyAdminCoordinate() const { return this->endUserApplyAdminCoordinate_ != nullptr;};
    void deleteEndUserApplyAdminCoordinate() { this->endUserApplyAdminCoordinate_ = nullptr;};
    inline string endUserApplyAdminCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserApplyAdminCoordinate_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setEndUserApplyAdminCoordinate(string endUserApplyAdminCoordinate) { DARABONBA_PTR_SET_VALUE(endUserApplyAdminCoordinate_, endUserApplyAdminCoordinate) };


    // endUserGroupCoordinate Field Functions 
    bool hasEndUserGroupCoordinate() const { return this->endUserGroupCoordinate_ != nullptr;};
    void deleteEndUserGroupCoordinate() { this->endUserGroupCoordinate_ = nullptr;};
    inline string endUserGroupCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserGroupCoordinate_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setEndUserGroupCoordinate(string endUserGroupCoordinate) { DARABONBA_PTR_SET_VALUE(endUserGroupCoordinate_, endUserGroupCoordinate) };


    // fileMigrate Field Functions 
    bool hasFileMigrate() const { return this->fileMigrate_ != nullptr;};
    void deleteFileMigrate() { this->fileMigrate_ = nullptr;};
    inline string fileMigrate() const { DARABONBA_PTR_GET_DEFAULT(fileMigrate_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setFileMigrate(string fileMigrate) { DARABONBA_PTR_SET_VALUE(fileMigrate_, fileMigrate) };


    // fileTransfer Field Functions 
    bool hasFileTransfer() const { return this->fileTransfer_ != nullptr;};
    void deleteFileTransfer() { this->fileTransfer_ = nullptr;};
    inline string fileTransfer() const { DARABONBA_PTR_GET_DEFAULT(fileTransfer_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setFileTransfer(string fileTransfer) { DARABONBA_PTR_SET_VALUE(fileTransfer_, fileTransfer) };


    // fileTransferAddress Field Functions 
    bool hasFileTransferAddress() const { return this->fileTransferAddress_ != nullptr;};
    void deleteFileTransferAddress() { this->fileTransferAddress_ = nullptr;};
    inline string fileTransferAddress() const { DARABONBA_PTR_GET_DEFAULT(fileTransferAddress_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setFileTransferAddress(string fileTransferAddress) { DARABONBA_PTR_SET_VALUE(fileTransferAddress_, fileTransferAddress) };


    // fileTransferSpeed Field Functions 
    bool hasFileTransferSpeed() const { return this->fileTransferSpeed_ != nullptr;};
    void deleteFileTransferSpeed() { this->fileTransferSpeed_ = nullptr;};
    inline string fileTransferSpeed() const { DARABONBA_PTR_GET_DEFAULT(fileTransferSpeed_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setFileTransferSpeed(string fileTransferSpeed) { DARABONBA_PTR_SET_VALUE(fileTransferSpeed_, fileTransferSpeed) };


    // fileTransferSpeedLocation Field Functions 
    bool hasFileTransferSpeedLocation() const { return this->fileTransferSpeedLocation_ != nullptr;};
    void deleteFileTransferSpeedLocation() { this->fileTransferSpeedLocation_ = nullptr;};
    inline string fileTransferSpeedLocation() const { DARABONBA_PTR_GET_DEFAULT(fileTransferSpeedLocation_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setFileTransferSpeedLocation(string fileTransferSpeedLocation) { DARABONBA_PTR_SET_VALUE(fileTransferSpeedLocation_, fileTransferSpeedLocation) };


    // gpuAcceleration Field Functions 
    bool hasGpuAcceleration() const { return this->gpuAcceleration_ != nullptr;};
    void deleteGpuAcceleration() { this->gpuAcceleration_ = nullptr;};
    inline string gpuAcceleration() const { DARABONBA_PTR_GET_DEFAULT(gpuAcceleration_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setGpuAcceleration(string gpuAcceleration) { DARABONBA_PTR_SET_VALUE(gpuAcceleration_, gpuAcceleration) };


    // html5Access Field Functions 
    bool hasHtml5Access() const { return this->html5Access_ != nullptr;};
    void deleteHtml5Access() { this->html5Access_ = nullptr;};
    inline string html5Access() const { DARABONBA_PTR_GET_DEFAULT(html5Access_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setHtml5Access(string html5Access) { DARABONBA_PTR_SET_VALUE(html5Access_, html5Access) };


    // html5FileTransfer Field Functions 
    bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
    void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
    inline string html5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


    // internetCommunicationProtocol Field Functions 
    bool hasInternetCommunicationProtocol() const { return this->internetCommunicationProtocol_ != nullptr;};
    void deleteInternetCommunicationProtocol() { this->internetCommunicationProtocol_ = nullptr;};
    inline string internetCommunicationProtocol() const { DARABONBA_PTR_GET_DEFAULT(internetCommunicationProtocol_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setInternetCommunicationProtocol(string internetCommunicationProtocol) { DARABONBA_PTR_SET_VALUE(internetCommunicationProtocol_, internetCommunicationProtocol) };


    // internetPrinter Field Functions 
    bool hasInternetPrinter() const { return this->internetPrinter_ != nullptr;};
    void deleteInternetPrinter() { this->internetPrinter_ = nullptr;};
    inline string internetPrinter() const { DARABONBA_PTR_GET_DEFAULT(internetPrinter_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setInternetPrinter(string internetPrinter) { DARABONBA_PTR_SET_VALUE(internetPrinter_, internetPrinter) };


    // localDrive Field Functions 
    bool hasLocalDrive() const { return this->localDrive_ != nullptr;};
    void deleteLocalDrive() { this->localDrive_ = nullptr;};
    inline string localDrive() const { DARABONBA_PTR_GET_DEFAULT(localDrive_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setLocalDrive(string localDrive) { DARABONBA_PTR_SET_VALUE(localDrive_, localDrive) };


    // maxReconnectTime Field Functions 
    bool hasMaxReconnectTime() const { return this->maxReconnectTime_ != nullptr;};
    void deleteMaxReconnectTime() { this->maxReconnectTime_ = nullptr;};
    inline int32_t maxReconnectTime() const { DARABONBA_PTR_GET_DEFAULT(maxReconnectTime_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMaxReconnectTime(int32_t maxReconnectTime) { DARABONBA_PTR_SET_VALUE(maxReconnectTime_, maxReconnectTime) };


    // memoryDownGradeDuration Field Functions 
    bool hasMemoryDownGradeDuration() const { return this->memoryDownGradeDuration_ != nullptr;};
    void deleteMemoryDownGradeDuration() { this->memoryDownGradeDuration_ = nullptr;};
    inline int32_t memoryDownGradeDuration() const { DARABONBA_PTR_GET_DEFAULT(memoryDownGradeDuration_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMemoryDownGradeDuration(int32_t memoryDownGradeDuration) { DARABONBA_PTR_SET_VALUE(memoryDownGradeDuration_, memoryDownGradeDuration) };


    // memoryProcessors Field Functions 
    bool hasMemoryProcessors() const { return this->memoryProcessors_ != nullptr;};
    void deleteMemoryProcessors() { this->memoryProcessors_ = nullptr;};
    inline const vector<string> & memoryProcessors() const { DARABONBA_PTR_GET_CONST(memoryProcessors_, vector<string>) };
    inline vector<string> memoryProcessors() { DARABONBA_PTR_GET(memoryProcessors_, vector<string>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMemoryProcessors(const vector<string> & memoryProcessors) { DARABONBA_PTR_SET_VALUE(memoryProcessors_, memoryProcessors) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMemoryProcessors(vector<string> && memoryProcessors) { DARABONBA_PTR_SET_RVALUE(memoryProcessors_, memoryProcessors) };


    // memoryProtectedMode Field Functions 
    bool hasMemoryProtectedMode() const { return this->memoryProtectedMode_ != nullptr;};
    void deleteMemoryProtectedMode() { this->memoryProtectedMode_ = nullptr;};
    inline string memoryProtectedMode() const { DARABONBA_PTR_GET_DEFAULT(memoryProtectedMode_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMemoryProtectedMode(string memoryProtectedMode) { DARABONBA_PTR_SET_VALUE(memoryProtectedMode_, memoryProtectedMode) };


    // memoryRateLimit Field Functions 
    bool hasMemoryRateLimit() const { return this->memoryRateLimit_ != nullptr;};
    void deleteMemoryRateLimit() { this->memoryRateLimit_ = nullptr;};
    inline int32_t memoryRateLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryRateLimit_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMemoryRateLimit(int32_t memoryRateLimit) { DARABONBA_PTR_SET_VALUE(memoryRateLimit_, memoryRateLimit) };


    // memorySampleDuration Field Functions 
    bool hasMemorySampleDuration() const { return this->memorySampleDuration_ != nullptr;};
    void deleteMemorySampleDuration() { this->memorySampleDuration_ = nullptr;};
    inline int32_t memorySampleDuration() const { DARABONBA_PTR_GET_DEFAULT(memorySampleDuration_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMemorySampleDuration(int32_t memorySampleDuration) { DARABONBA_PTR_SET_VALUE(memorySampleDuration_, memorySampleDuration) };


    // memorySingleRateLimit Field Functions 
    bool hasMemorySingleRateLimit() const { return this->memorySingleRateLimit_ != nullptr;};
    void deleteMemorySingleRateLimit() { this->memorySingleRateLimit_ = nullptr;};
    inline int32_t memorySingleRateLimit() const { DARABONBA_PTR_GET_DEFAULT(memorySingleRateLimit_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMemorySingleRateLimit(int32_t memorySingleRateLimit) { DARABONBA_PTR_SET_VALUE(memorySingleRateLimit_, memorySingleRateLimit) };


    // mobileRestart Field Functions 
    bool hasMobileRestart() const { return this->mobileRestart_ != nullptr;};
    void deleteMobileRestart() { this->mobileRestart_ = nullptr;};
    inline string mobileRestart() const { DARABONBA_PTR_GET_DEFAULT(mobileRestart_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMobileRestart(string mobileRestart) { DARABONBA_PTR_SET_VALUE(mobileRestart_, mobileRestart) };


    // mobileSafeMenu Field Functions 
    bool hasMobileSafeMenu() const { return this->mobileSafeMenu_ != nullptr;};
    void deleteMobileSafeMenu() { this->mobileSafeMenu_ = nullptr;};
    inline string mobileSafeMenu() const { DARABONBA_PTR_GET_DEFAULT(mobileSafeMenu_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMobileSafeMenu(string mobileSafeMenu) { DARABONBA_PTR_SET_VALUE(mobileSafeMenu_, mobileSafeMenu) };


    // mobileShutdown Field Functions 
    bool hasMobileShutdown() const { return this->mobileShutdown_ != nullptr;};
    void deleteMobileShutdown() { this->mobileShutdown_ = nullptr;};
    inline string mobileShutdown() const { DARABONBA_PTR_GET_DEFAULT(mobileShutdown_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMobileShutdown(string mobileShutdown) { DARABONBA_PTR_SET_VALUE(mobileShutdown_, mobileShutdown) };


    // mobileWuyingKeeper Field Functions 
    bool hasMobileWuyingKeeper() const { return this->mobileWuyingKeeper_ != nullptr;};
    void deleteMobileWuyingKeeper() { this->mobileWuyingKeeper_ = nullptr;};
    inline string mobileWuyingKeeper() const { DARABONBA_PTR_GET_DEFAULT(mobileWuyingKeeper_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMobileWuyingKeeper(string mobileWuyingKeeper) { DARABONBA_PTR_SET_VALUE(mobileWuyingKeeper_, mobileWuyingKeeper) };


    // mobileWyAssistant Field Functions 
    bool hasMobileWyAssistant() const { return this->mobileWyAssistant_ != nullptr;};
    void deleteMobileWyAssistant() { this->mobileWyAssistant_ = nullptr;};
    inline string mobileWyAssistant() const { DARABONBA_PTR_GET_DEFAULT(mobileWyAssistant_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setMobileWyAssistant(string mobileWyAssistant) { DARABONBA_PTR_SET_VALUE(mobileWyAssistant_, mobileWyAssistant) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netRedirect Field Functions 
    bool hasNetRedirect() const { return this->netRedirect_ != nullptr;};
    void deleteNetRedirect() { this->netRedirect_ = nullptr;};
    inline string netRedirect() const { DARABONBA_PTR_GET_DEFAULT(netRedirect_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setNetRedirect(string netRedirect) { DARABONBA_PTR_SET_VALUE(netRedirect_, netRedirect) };


    // netRedirectRule Field Functions 
    bool hasNetRedirectRule() const { return this->netRedirectRule_ != nullptr;};
    void deleteNetRedirectRule() { this->netRedirectRule_ = nullptr;};
    inline const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule> & netRedirectRule() const { DARABONBA_PTR_GET_CONST(netRedirectRule_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule>) };
    inline vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule> netRedirectRule() { DARABONBA_PTR_GET(netRedirectRule_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setNetRedirectRule(const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule> & netRedirectRule) { DARABONBA_PTR_SET_VALUE(netRedirectRule_, netRedirectRule) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setNetRedirectRule(vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule> && netRedirectRule) { DARABONBA_PTR_SET_RVALUE(netRedirectRule_, netRedirectRule) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // policyGroupType Field Functions 
    bool hasPolicyGroupType() const { return this->policyGroupType_ != nullptr;};
    void deletePolicyGroupType() { this->policyGroupType_ = nullptr;};
    inline string policyGroupType() const { DARABONBA_PTR_GET_DEFAULT(policyGroupType_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setPolicyGroupType(string policyGroupType) { DARABONBA_PTR_SET_VALUE(policyGroupType_, policyGroupType) };


    // policyStatus Field Functions 
    bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
    void deletePolicyStatus() { this->policyStatus_ = nullptr;};
    inline string policyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


    // preemptLogin Field Functions 
    bool hasPreemptLogin() const { return this->preemptLogin_ != nullptr;};
    void deletePreemptLogin() { this->preemptLogin_ = nullptr;};
    inline string preemptLogin() const { DARABONBA_PTR_GET_DEFAULT(preemptLogin_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setPreemptLogin(string preemptLogin) { DARABONBA_PTR_SET_VALUE(preemptLogin_, preemptLogin) };


    // preemptLoginUsers Field Functions 
    bool hasPreemptLoginUsers() const { return this->preemptLoginUsers_ != nullptr;};
    void deletePreemptLoginUsers() { this->preemptLoginUsers_ = nullptr;};
    inline const vector<string> & preemptLoginUsers() const { DARABONBA_PTR_GET_CONST(preemptLoginUsers_, vector<string>) };
    inline vector<string> preemptLoginUsers() { DARABONBA_PTR_GET(preemptLoginUsers_, vector<string>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setPreemptLoginUsers(const vector<string> & preemptLoginUsers) { DARABONBA_PTR_SET_VALUE(preemptLoginUsers_, preemptLoginUsers) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setPreemptLoginUsers(vector<string> && preemptLoginUsers) { DARABONBA_PTR_SET_RVALUE(preemptLoginUsers_, preemptLoginUsers) };


    // printerRedirection Field Functions 
    bool hasPrinterRedirection() const { return this->printerRedirection_ != nullptr;};
    void deletePrinterRedirection() { this->printerRedirection_ = nullptr;};
    inline string printerRedirection() const { DARABONBA_PTR_GET_DEFAULT(printerRedirection_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setPrinterRedirection(string printerRedirection) { DARABONBA_PTR_SET_VALUE(printerRedirection_, printerRedirection) };


    // qualityEnhancement Field Functions 
    bool hasQualityEnhancement() const { return this->qualityEnhancement_ != nullptr;};
    void deleteQualityEnhancement() { this->qualityEnhancement_ = nullptr;};
    inline string qualityEnhancement() const { DARABONBA_PTR_GET_DEFAULT(qualityEnhancement_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setQualityEnhancement(string qualityEnhancement) { DARABONBA_PTR_SET_VALUE(qualityEnhancement_, qualityEnhancement) };


    // recordContent Field Functions 
    bool hasRecordContent() const { return this->recordContent_ != nullptr;};
    void deleteRecordContent() { this->recordContent_ = nullptr;};
    inline string recordContent() const { DARABONBA_PTR_GET_DEFAULT(recordContent_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordContent(string recordContent) { DARABONBA_PTR_SET_VALUE(recordContent_, recordContent) };


    // recordContentExpires Field Functions 
    bool hasRecordContentExpires() const { return this->recordContentExpires_ != nullptr;};
    void deleteRecordContentExpires() { this->recordContentExpires_ = nullptr;};
    inline int64_t recordContentExpires() const { DARABONBA_PTR_GET_DEFAULT(recordContentExpires_, 0L) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordContentExpires(int64_t recordContentExpires) { DARABONBA_PTR_SET_VALUE(recordContentExpires_, recordContentExpires) };


    // recordEventDuration Field Functions 
    bool hasRecordEventDuration() const { return this->recordEventDuration_ != nullptr;};
    void deleteRecordEventDuration() { this->recordEventDuration_ = nullptr;};
    inline int32_t recordEventDuration() const { DARABONBA_PTR_GET_DEFAULT(recordEventDuration_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordEventDuration(int32_t recordEventDuration) { DARABONBA_PTR_SET_VALUE(recordEventDuration_, recordEventDuration) };


    // recordEventFileExts Field Functions 
    bool hasRecordEventFileExts() const { return this->recordEventFileExts_ != nullptr;};
    void deleteRecordEventFileExts() { this->recordEventFileExts_ = nullptr;};
    inline const vector<string> & recordEventFileExts() const { DARABONBA_PTR_GET_CONST(recordEventFileExts_, vector<string>) };
    inline vector<string> recordEventFileExts() { DARABONBA_PTR_GET(recordEventFileExts_, vector<string>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordEventFileExts(const vector<string> & recordEventFileExts) { DARABONBA_PTR_SET_VALUE(recordEventFileExts_, recordEventFileExts) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordEventFileExts(vector<string> && recordEventFileExts) { DARABONBA_PTR_SET_RVALUE(recordEventFileExts_, recordEventFileExts) };


    // recordEventFilePaths Field Functions 
    bool hasRecordEventFilePaths() const { return this->recordEventFilePaths_ != nullptr;};
    void deleteRecordEventFilePaths() { this->recordEventFilePaths_ = nullptr;};
    inline const vector<string> & recordEventFilePaths() const { DARABONBA_PTR_GET_CONST(recordEventFilePaths_, vector<string>) };
    inline vector<string> recordEventFilePaths() { DARABONBA_PTR_GET(recordEventFilePaths_, vector<string>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordEventFilePaths(const vector<string> & recordEventFilePaths) { DARABONBA_PTR_SET_VALUE(recordEventFilePaths_, recordEventFilePaths) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordEventFilePaths(vector<string> && recordEventFilePaths) { DARABONBA_PTR_SET_RVALUE(recordEventFilePaths_, recordEventFilePaths) };


    // recordEventLevels Field Functions 
    bool hasRecordEventLevels() const { return this->recordEventLevels_ != nullptr;};
    void deleteRecordEventLevels() { this->recordEventLevels_ = nullptr;};
    inline const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels> & recordEventLevels() const { DARABONBA_PTR_GET_CONST(recordEventLevels_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels>) };
    inline vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels> recordEventLevels() { DARABONBA_PTR_GET(recordEventLevels_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordEventLevels(const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels> & recordEventLevels) { DARABONBA_PTR_SET_VALUE(recordEventLevels_, recordEventLevels) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordEventLevels(vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels> && recordEventLevels) { DARABONBA_PTR_SET_RVALUE(recordEventLevels_, recordEventLevels) };


    // recordEventRegisters Field Functions 
    bool hasRecordEventRegisters() const { return this->recordEventRegisters_ != nullptr;};
    void deleteRecordEventRegisters() { this->recordEventRegisters_ = nullptr;};
    inline const vector<string> & recordEventRegisters() const { DARABONBA_PTR_GET_CONST(recordEventRegisters_, vector<string>) };
    inline vector<string> recordEventRegisters() { DARABONBA_PTR_GET(recordEventRegisters_, vector<string>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordEventRegisters(const vector<string> & recordEventRegisters) { DARABONBA_PTR_SET_VALUE(recordEventRegisters_, recordEventRegisters) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordEventRegisters(vector<string> && recordEventRegisters) { DARABONBA_PTR_SET_RVALUE(recordEventRegisters_, recordEventRegisters) };


    // recording Field Functions 
    bool hasRecording() const { return this->recording_ != nullptr;};
    void deleteRecording() { this->recording_ = nullptr;};
    inline string recording() const { DARABONBA_PTR_GET_DEFAULT(recording_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecording(string recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };


    // recordingAudio Field Functions 
    bool hasRecordingAudio() const { return this->recordingAudio_ != nullptr;};
    void deleteRecordingAudio() { this->recordingAudio_ = nullptr;};
    inline string recordingAudio() const { DARABONBA_PTR_GET_DEFAULT(recordingAudio_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordingAudio(string recordingAudio) { DARABONBA_PTR_SET_VALUE(recordingAudio_, recordingAudio) };


    // recordingDuration Field Functions 
    bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
    void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
    inline int32_t recordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordingDuration(int32_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


    // recordingEndTime Field Functions 
    bool hasRecordingEndTime() const { return this->recordingEndTime_ != nullptr;};
    void deleteRecordingEndTime() { this->recordingEndTime_ = nullptr;};
    inline string recordingEndTime() const { DARABONBA_PTR_GET_DEFAULT(recordingEndTime_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordingEndTime(string recordingEndTime) { DARABONBA_PTR_SET_VALUE(recordingEndTime_, recordingEndTime) };


    // recordingExpires Field Functions 
    bool hasRecordingExpires() const { return this->recordingExpires_ != nullptr;};
    void deleteRecordingExpires() { this->recordingExpires_ = nullptr;};
    inline int64_t recordingExpires() const { DARABONBA_PTR_GET_DEFAULT(recordingExpires_, 0L) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordingExpires(int64_t recordingExpires) { DARABONBA_PTR_SET_VALUE(recordingExpires_, recordingExpires) };


    // recordingFps Field Functions 
    bool hasRecordingFps() const { return this->recordingFps_ != nullptr;};
    void deleteRecordingFps() { this->recordingFps_ = nullptr;};
    inline int64_t recordingFps() const { DARABONBA_PTR_GET_DEFAULT(recordingFps_, 0L) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordingFps(int64_t recordingFps) { DARABONBA_PTR_SET_VALUE(recordingFps_, recordingFps) };


    // recordingStartTime Field Functions 
    bool hasRecordingStartTime() const { return this->recordingStartTime_ != nullptr;};
    void deleteRecordingStartTime() { this->recordingStartTime_ = nullptr;};
    inline string recordingStartTime() const { DARABONBA_PTR_GET_DEFAULT(recordingStartTime_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordingStartTime(string recordingStartTime) { DARABONBA_PTR_SET_VALUE(recordingStartTime_, recordingStartTime) };


    // recordingUserNotify Field Functions 
    bool hasRecordingUserNotify() const { return this->recordingUserNotify_ != nullptr;};
    void deleteRecordingUserNotify() { this->recordingUserNotify_ = nullptr;};
    inline string recordingUserNotify() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotify_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordingUserNotify(string recordingUserNotify) { DARABONBA_PTR_SET_VALUE(recordingUserNotify_, recordingUserNotify) };


    // recordingUserNotifyMessage Field Functions 
    bool hasRecordingUserNotifyMessage() const { return this->recordingUserNotifyMessage_ != nullptr;};
    void deleteRecordingUserNotifyMessage() { this->recordingUserNotifyMessage_ = nullptr;};
    inline string recordingUserNotifyMessage() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotifyMessage_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRecordingUserNotifyMessage(string recordingUserNotifyMessage) { DARABONBA_PTR_SET_VALUE(recordingUserNotifyMessage_, recordingUserNotifyMessage) };


    // remoteCoordinate Field Functions 
    bool hasRemoteCoordinate() const { return this->remoteCoordinate_ != nullptr;};
    void deleteRemoteCoordinate() { this->remoteCoordinate_ = nullptr;};
    inline string remoteCoordinate() const { DARABONBA_PTR_GET_DEFAULT(remoteCoordinate_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setRemoteCoordinate(string remoteCoordinate) { DARABONBA_PTR_SET_VALUE(remoteCoordinate_, remoteCoordinate) };


    // resetDesktop Field Functions 
    bool hasResetDesktop() const { return this->resetDesktop_ != nullptr;};
    void deleteResetDesktop() { this->resetDesktop_ = nullptr;};
    inline string resetDesktop() const { DARABONBA_PTR_GET_DEFAULT(resetDesktop_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setResetDesktop(string resetDesktop) { DARABONBA_PTR_SET_VALUE(resetDesktop_, resetDesktop) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t resolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionModel Field Functions 
    bool hasResolutionModel() const { return this->resolutionModel_ != nullptr;};
    void deleteResolutionModel() { this->resolutionModel_ = nullptr;};
    inline string resolutionModel() const { DARABONBA_PTR_GET_DEFAULT(resolutionModel_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setResolutionModel(string resolutionModel) { DARABONBA_PTR_SET_VALUE(resolutionModel_, resolutionModel) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t resolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    // resourceGroupCount Field Functions 
    bool hasResourceGroupCount() const { return this->resourceGroupCount_ != nullptr;};
    void deleteResourceGroupCount() { this->resourceGroupCount_ = nullptr;};
    inline int32_t resourceGroupCount() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupCount_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setResourceGroupCount(int32_t resourceGroupCount) { DARABONBA_PTR_SET_VALUE(resourceGroupCount_, resourceGroupCount) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // safeMenu Field Functions 
    bool hasSafeMenu() const { return this->safeMenu_ != nullptr;};
    void deleteSafeMenu() { this->safeMenu_ = nullptr;};
    inline string safeMenu() const { DARABONBA_PTR_GET_DEFAULT(safeMenu_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setSafeMenu(string safeMenu) { DARABONBA_PTR_SET_VALUE(safeMenu_, safeMenu) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // scopeValue Field Functions 
    bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
    void deleteScopeValue() { this->scopeValue_ = nullptr;};
    inline const vector<string> & scopeValue() const { DARABONBA_PTR_GET_CONST(scopeValue_, vector<string>) };
    inline vector<string> scopeValue() { DARABONBA_PTR_GET(scopeValue_, vector<string>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setScopeValue(const vector<string> & scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setScopeValue(vector<string> && scopeValue) { DARABONBA_PTR_SET_RVALUE(scopeValue_, scopeValue) };


    // screenDisplayMode Field Functions 
    bool hasScreenDisplayMode() const { return this->screenDisplayMode_ != nullptr;};
    void deleteScreenDisplayMode() { this->screenDisplayMode_ = nullptr;};
    inline string screenDisplayMode() const { DARABONBA_PTR_GET_DEFAULT(screenDisplayMode_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setScreenDisplayMode(string screenDisplayMode) { DARABONBA_PTR_SET_VALUE(screenDisplayMode_, screenDisplayMode) };


    // smoothEnhancement Field Functions 
    bool hasSmoothEnhancement() const { return this->smoothEnhancement_ != nullptr;};
    void deleteSmoothEnhancement() { this->smoothEnhancement_ = nullptr;};
    inline string smoothEnhancement() const { DARABONBA_PTR_GET_DEFAULT(smoothEnhancement_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setSmoothEnhancement(string smoothEnhancement) { DARABONBA_PTR_SET_VALUE(smoothEnhancement_, smoothEnhancement) };


    // statusMonitor Field Functions 
    bool hasStatusMonitor() const { return this->statusMonitor_ != nullptr;};
    void deleteStatusMonitor() { this->statusMonitor_ = nullptr;};
    inline string statusMonitor() const { DARABONBA_PTR_GET_DEFAULT(statusMonitor_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setStatusMonitor(string statusMonitor) { DARABONBA_PTR_SET_VALUE(statusMonitor_, statusMonitor) };


    // streamingMode Field Functions 
    bool hasStreamingMode() const { return this->streamingMode_ != nullptr;};
    void deleteStreamingMode() { this->streamingMode_ = nullptr;};
    inline string streamingMode() const { DARABONBA_PTR_GET_DEFAULT(streamingMode_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setStreamingMode(string streamingMode) { DARABONBA_PTR_SET_VALUE(streamingMode_, streamingMode) };


    // targetFps Field Functions 
    bool hasTargetFps() const { return this->targetFps_ != nullptr;};
    void deleteTargetFps() { this->targetFps_ = nullptr;};
    inline int32_t targetFps() const { DARABONBA_PTR_GET_DEFAULT(targetFps_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setTargetFps(int32_t targetFps) { DARABONBA_PTR_SET_VALUE(targetFps_, targetFps) };


    // usbRedirect Field Functions 
    bool hasUsbRedirect() const { return this->usbRedirect_ != nullptr;};
    void deleteUsbRedirect() { this->usbRedirect_ = nullptr;};
    inline string usbRedirect() const { DARABONBA_PTR_GET_DEFAULT(usbRedirect_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setUsbRedirect(string usbRedirect) { DARABONBA_PTR_SET_VALUE(usbRedirect_, usbRedirect) };


    // usbSupplyRedirectRule Field Functions 
    bool hasUsbSupplyRedirectRule() const { return this->usbSupplyRedirectRule_ != nullptr;};
    void deleteUsbSupplyRedirectRule() { this->usbSupplyRedirectRule_ = nullptr;};
    inline const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule> & usbSupplyRedirectRule() const { DARABONBA_PTR_GET_CONST(usbSupplyRedirectRule_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule>) };
    inline vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule> usbSupplyRedirectRule() { DARABONBA_PTR_GET(usbSupplyRedirectRule_, vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule>) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setUsbSupplyRedirectRule(const vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule> & usbSupplyRedirectRule) { DARABONBA_PTR_SET_VALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setUsbSupplyRedirectRule(vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule> && usbSupplyRedirectRule) { DARABONBA_PTR_SET_RVALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };


    // useTime Field Functions 
    bool hasUseTime() const { return this->useTime_ != nullptr;};
    void deleteUseTime() { this->useTime_ = nullptr;};
    inline string useTime() const { DARABONBA_PTR_GET_DEFAULT(useTime_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setUseTime(string useTime) { DARABONBA_PTR_SET_VALUE(useTime_, useTime) };


    // videoEncAvgKbps Field Functions 
    bool hasVideoEncAvgKbps() const { return this->videoEncAvgKbps_ != nullptr;};
    void deleteVideoEncAvgKbps() { this->videoEncAvgKbps_ = nullptr;};
    inline int32_t videoEncAvgKbps() const { DARABONBA_PTR_GET_DEFAULT(videoEncAvgKbps_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setVideoEncAvgKbps(int32_t videoEncAvgKbps) { DARABONBA_PTR_SET_VALUE(videoEncAvgKbps_, videoEncAvgKbps) };


    // videoEncMaxQP Field Functions 
    bool hasVideoEncMaxQP() const { return this->videoEncMaxQP_ != nullptr;};
    void deleteVideoEncMaxQP() { this->videoEncMaxQP_ = nullptr;};
    inline int32_t videoEncMaxQP() const { DARABONBA_PTR_GET_DEFAULT(videoEncMaxQP_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setVideoEncMaxQP(int32_t videoEncMaxQP) { DARABONBA_PTR_SET_VALUE(videoEncMaxQP_, videoEncMaxQP) };


    // videoEncMinQP Field Functions 
    bool hasVideoEncMinQP() const { return this->videoEncMinQP_ != nullptr;};
    void deleteVideoEncMinQP() { this->videoEncMinQP_ = nullptr;};
    inline int32_t videoEncMinQP() const { DARABONBA_PTR_GET_DEFAULT(videoEncMinQP_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setVideoEncMinQP(int32_t videoEncMinQP) { DARABONBA_PTR_SET_VALUE(videoEncMinQP_, videoEncMinQP) };


    // videoEncPeakKbps Field Functions 
    bool hasVideoEncPeakKbps() const { return this->videoEncPeakKbps_ != nullptr;};
    void deleteVideoEncPeakKbps() { this->videoEncPeakKbps_ = nullptr;};
    inline int32_t videoEncPeakKbps() const { DARABONBA_PTR_GET_DEFAULT(videoEncPeakKbps_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setVideoEncPeakKbps(int32_t videoEncPeakKbps) { DARABONBA_PTR_SET_VALUE(videoEncPeakKbps_, videoEncPeakKbps) };


    // videoEncPolicy Field Functions 
    bool hasVideoEncPolicy() const { return this->videoEncPolicy_ != nullptr;};
    void deleteVideoEncPolicy() { this->videoEncPolicy_ = nullptr;};
    inline string videoEncPolicy() const { DARABONBA_PTR_GET_DEFAULT(videoEncPolicy_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setVideoEncPolicy(string videoEncPolicy) { DARABONBA_PTR_SET_VALUE(videoEncPolicy_, videoEncPolicy) };


    // videoRedirect Field Functions 
    bool hasVideoRedirect() const { return this->videoRedirect_ != nullptr;};
    void deleteVideoRedirect() { this->videoRedirect_ = nullptr;};
    inline string videoRedirect() const { DARABONBA_PTR_GET_DEFAULT(videoRedirect_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setVideoRedirect(string videoRedirect) { DARABONBA_PTR_SET_VALUE(videoRedirect_, videoRedirect) };


    // visualQuality Field Functions 
    bool hasVisualQuality() const { return this->visualQuality_ != nullptr;};
    void deleteVisualQuality() { this->visualQuality_ = nullptr;};
    inline string visualQuality() const { DARABONBA_PTR_GET_DEFAULT(visualQuality_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setVisualQuality(string visualQuality) { DARABONBA_PTR_SET_VALUE(visualQuality_, visualQuality) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline string watermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermark(string watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


    // watermarkAntiCam Field Functions 
    bool hasWatermarkAntiCam() const { return this->watermarkAntiCam_ != nullptr;};
    void deleteWatermarkAntiCam() { this->watermarkAntiCam_ = nullptr;};
    inline string watermarkAntiCam() const { DARABONBA_PTR_GET_DEFAULT(watermarkAntiCam_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermarkAntiCam(string watermarkAntiCam) { DARABONBA_PTR_SET_VALUE(watermarkAntiCam_, watermarkAntiCam) };


    // watermarkColor Field Functions 
    bool hasWatermarkColor() const { return this->watermarkColor_ != nullptr;};
    void deleteWatermarkColor() { this->watermarkColor_ = nullptr;};
    inline int32_t watermarkColor() const { DARABONBA_PTR_GET_DEFAULT(watermarkColor_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermarkColor(int32_t watermarkColor) { DARABONBA_PTR_SET_VALUE(watermarkColor_, watermarkColor) };


    // watermarkCustomText Field Functions 
    bool hasWatermarkCustomText() const { return this->watermarkCustomText_ != nullptr;};
    void deleteWatermarkCustomText() { this->watermarkCustomText_ = nullptr;};
    inline string watermarkCustomText() const { DARABONBA_PTR_GET_DEFAULT(watermarkCustomText_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermarkCustomText(string watermarkCustomText) { DARABONBA_PTR_SET_VALUE(watermarkCustomText_, watermarkCustomText) };


    // watermarkDegree Field Functions 
    bool hasWatermarkDegree() const { return this->watermarkDegree_ != nullptr;};
    void deleteWatermarkDegree() { this->watermarkDegree_ = nullptr;};
    inline double watermarkDegree() const { DARABONBA_PTR_GET_DEFAULT(watermarkDegree_, 0.0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermarkDegree(double watermarkDegree) { DARABONBA_PTR_SET_VALUE(watermarkDegree_, watermarkDegree) };


    // watermarkFontSize Field Functions 
    bool hasWatermarkFontSize() const { return this->watermarkFontSize_ != nullptr;};
    void deleteWatermarkFontSize() { this->watermarkFontSize_ = nullptr;};
    inline int32_t watermarkFontSize() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontSize_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermarkFontSize(int32_t watermarkFontSize) { DARABONBA_PTR_SET_VALUE(watermarkFontSize_, watermarkFontSize) };


    // watermarkFontStyle Field Functions 
    bool hasWatermarkFontStyle() const { return this->watermarkFontStyle_ != nullptr;};
    void deleteWatermarkFontStyle() { this->watermarkFontStyle_ = nullptr;};
    inline string watermarkFontStyle() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontStyle_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermarkFontStyle(string watermarkFontStyle) { DARABONBA_PTR_SET_VALUE(watermarkFontStyle_, watermarkFontStyle) };


    // watermarkPower Field Functions 
    bool hasWatermarkPower() const { return this->watermarkPower_ != nullptr;};
    void deleteWatermarkPower() { this->watermarkPower_ = nullptr;};
    inline string watermarkPower() const { DARABONBA_PTR_GET_DEFAULT(watermarkPower_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermarkPower(string watermarkPower) { DARABONBA_PTR_SET_VALUE(watermarkPower_, watermarkPower) };


    // watermarkRowAmount Field Functions 
    bool hasWatermarkRowAmount() const { return this->watermarkRowAmount_ != nullptr;};
    void deleteWatermarkRowAmount() { this->watermarkRowAmount_ = nullptr;};
    inline int32_t watermarkRowAmount() const { DARABONBA_PTR_GET_DEFAULT(watermarkRowAmount_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermarkRowAmount(int32_t watermarkRowAmount) { DARABONBA_PTR_SET_VALUE(watermarkRowAmount_, watermarkRowAmount) };


    // watermarkSecurity Field Functions 
    bool hasWatermarkSecurity() const { return this->watermarkSecurity_ != nullptr;};
    void deleteWatermarkSecurity() { this->watermarkSecurity_ = nullptr;};
    inline string watermarkSecurity() const { DARABONBA_PTR_GET_DEFAULT(watermarkSecurity_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermarkSecurity(string watermarkSecurity) { DARABONBA_PTR_SET_VALUE(watermarkSecurity_, watermarkSecurity) };


    // watermarkTransparency Field Functions 
    bool hasWatermarkTransparency() const { return this->watermarkTransparency_ != nullptr;};
    void deleteWatermarkTransparency() { this->watermarkTransparency_ = nullptr;};
    inline string watermarkTransparency() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparency_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermarkTransparency(string watermarkTransparency) { DARABONBA_PTR_SET_VALUE(watermarkTransparency_, watermarkTransparency) };


    // watermarkTransparencyValue Field Functions 
    bool hasWatermarkTransparencyValue() const { return this->watermarkTransparencyValue_ != nullptr;};
    void deleteWatermarkTransparencyValue() { this->watermarkTransparencyValue_ = nullptr;};
    inline int32_t watermarkTransparencyValue() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparencyValue_, 0) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermarkTransparencyValue(int32_t watermarkTransparencyValue) { DARABONBA_PTR_SET_VALUE(watermarkTransparencyValue_, watermarkTransparencyValue) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string watermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


    // wuyingKeeper Field Functions 
    bool hasWuyingKeeper() const { return this->wuyingKeeper_ != nullptr;};
    void deleteWuyingKeeper() { this->wuyingKeeper_ = nullptr;};
    inline string wuyingKeeper() const { DARABONBA_PTR_GET_DEFAULT(wuyingKeeper_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWuyingKeeper(string wuyingKeeper) { DARABONBA_PTR_SET_VALUE(wuyingKeeper_, wuyingKeeper) };


    // wyAssistant Field Functions 
    bool hasWyAssistant() const { return this->wyAssistant_ != nullptr;};
    void deleteWyAssistant() { this->wyAssistant_ = nullptr;};
    inline string wyAssistant() const { DARABONBA_PTR_GET_DEFAULT(wyAssistant_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroups& setWyAssistant(string wyAssistant) { DARABONBA_PTR_SET_VALUE(wyAssistant_, wyAssistant) };


  protected:
    // Indicates whether end users are granted the administrator permissions.
    // 
    // >  This parameter is in invitational preview for specific users and not available to the public.
    std::shared_ptr<string> adminAccess_ = nullptr;
    // Indicates whether the anti-screenshot feature is enabled.
    // 
    // Valid values:
    // 
    // *   off (default)
    // *   on
    std::shared_ptr<string> appContentProtection_ = nullptr;
    // The client IP address whitelist. End users can access cloud computers only from the IP addresses in the whitelist.
    std::shared_ptr<vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeAccessPolicyRules>> authorizeAccessPolicyRules_ = nullptr;
    // The security group rules.
    std::shared_ptr<vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsAuthorizeSecurityPolicyRules>> authorizeSecurityPolicyRules_ = nullptr;
    std::shared_ptr<string> autoReconnect_ = nullptr;
    // Indicates whether the webcam redirection feature is enabled.
    // 
    // Valid values:
    // 
    // *   off
    // *   on (default)
    std::shared_ptr<string> cameraRedirect_ = nullptr;
    std::shared_ptr<string> clientControlMenu_ = nullptr;
    // The logon method control rules to limit the type of the Alibaba Cloud Workspace client used by end users to connect to cloud computers.
    std::shared_ptr<vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes>> clientTypes_ = nullptr;
    // The permissions on the clipboard.
    // 
    // Valid values:
    // 
    // *   read: specifies one-way transfer. You can copy files only from local devices to cloud computers.
    // *   readwrite: specifies two-way transfer. You can copy files between local devices and cloud computers.
    // *   write: specifies one-way transfer. You can only copy files from cloud computers to local devices.
    // *   off: disables both one-way and two-way transfer. Files cannot be copied between local devices and cloud computers.
    std::shared_ptr<string> clipboard_ = nullptr;
    // Indicates whether the Color Enhancement switch is turned on in design and 3D scenarios.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> colorEnhancement_ = nullptr;
    std::shared_ptr<string> cpdDriveClipboard_ = nullptr;
    // The CPU underclocking duration. Valid values: 30 to 120. Unit: seconds.
    std::shared_ptr<int32_t> cpuDownGradeDuration_ = nullptr;
    // The process whitelist that is not restricted by the CPU usage limit.
    std::shared_ptr<vector<string>> cpuProcessors_ = nullptr;
    // Indicates whether the CPU spike protection switch is turned on.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> cpuProtectedMode_ = nullptr;
    // The overall CPU usage. Valid values: 70 to 90. Unit: percentage (%).
    std::shared_ptr<int32_t> cpuRateLimit_ = nullptr;
    // The overall CPU sampling duration. Valid values: 10 to 60. Unit: seconds.
    std::shared_ptr<int32_t> cpuSampleDuration_ = nullptr;
    // The single-CPU usage. Valid values: 70 to 100. Unit: %.
    std::shared_ptr<int32_t> cpuSingleRateLimit_ = nullptr;
    // The number of cloud computers bound with this policy.
    std::shared_ptr<int32_t> desktopCount_ = nullptr;
    // The number of shared cloud computers bound with this policy.
    std::shared_ptr<int32_t> desktopGroupCount_ = nullptr;
    std::shared_ptr<string> deviceConnectHint_ = nullptr;
    // The device redirection rules.
    std::shared_ptr<vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRedirects>> deviceRedirects_ = nullptr;
    // The custom peripheral rules.
    std::shared_ptr<vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDeviceRules>> deviceRules_ = nullptr;
    // The display mode.
    // 
    // Valid values:
    // 
    // *   clientCustom: suitable for user-defined scenarios.
    // *   adminOffice: suitable for daily office scenarios.
    // *   adminDesign: suitable for 3D application scenarios.
    // *   adminCustom: administrator-customized scenarios
    std::shared_ptr<string> displayMode_ = nullptr;
    // Specifies whether to enable the access control for domain names. Domain names support wildcards (\\*). Separate multiple domain names with commas (,).
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> domainList_ = nullptr;
    // The domain name resolution rules.
    std::shared_ptr<vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule>> domainResolveRule_ = nullptr;
    // Indicates whether the switch for domain name resolution is turned on.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> domainResolveRuleType_ = nullptr;
    // The number of cloud computers that are associated with the policy. The number of cloud computers that are associated only with custom policies is returned.
    std::shared_ptr<int32_t> edsCount_ = nullptr;
    // Indicates whether the Contact Administrator for Help switch is turned on.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> endUserApplyAdminCoordinate_ = nullptr;
    // Indicates whether the User Stream Collaboration switch is turned on.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> endUserGroupCoordinate_ = nullptr;
    std::shared_ptr<string> fileMigrate_ = nullptr;
    // Transfers files.
    std::shared_ptr<string> fileTransfer_ = nullptr;
    std::shared_ptr<string> fileTransferAddress_ = nullptr;
    std::shared_ptr<string> fileTransferSpeed_ = nullptr;
    std::shared_ptr<string> fileTransferSpeedLocation_ = nullptr;
    // Indicates whether the Image Quality Control feature is enabled. If you have high requirements on the performance and user experience in scenarios such as professional design, we recommend that you enable this feature.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> gpuAcceleration_ = nullptr;
    // Specifies whether to allow web client access.
    // 
    // Valid values:
    // 
    // *   off (default)
    // *   on
    std::shared_ptr<string> html5Access_ = nullptr;
    // The file transfer feature on the web client.
    // 
    // Valid values:
    // 
    // *   all: Files can be uploaded and downloaded between local computers and the web client.
    // *   download: Files on the web client can be downloaded to local computers.
    // *   upload: Files on local computers can be uploaded to the web client.
    // *   off (default): Files cannot be transferred between the web client and local computers.
    std::shared_ptr<string> html5FileTransfer_ = nullptr;
    // The protocol for network communication.
    // 
    // Valid values:
    // 
    // *   TCP (default): TCP.
    // *   BOTH: TCP and UDP.
    std::shared_ptr<string> internetCommunicationProtocol_ = nullptr;
    std::shared_ptr<string> internetPrinter_ = nullptr;
    // The permissions on local disk mapping.
    // 
    // Valid values:
    // 
    // *   read: read-only. Local disk mapping is available on cloud computers. However, you can only read (copy) local files but cannot modify the files.
    // *   readwrite: read and write. Local disk mapping is available on cloud computers. You can read (copy) and write (modify) local files.
    // *   off (default): none.
    std::shared_ptr<string> localDrive_ = nullptr;
    // The maximum retry period for reconnecting to cloud computers when the cloud computers are disconnected due to none-human reasons. Valid values: 30 to 7200. Unit: seconds.
    std::shared_ptr<int32_t> maxReconnectTime_ = nullptr;
    // The memory underclocking duration for a single process. Valid values: 30 to 120. Unit: seconds.
    std::shared_ptr<int32_t> memoryDownGradeDuration_ = nullptr;
    // The whitelist of processes that are not restricted by the memory usage limit.
    std::shared_ptr<vector<string>> memoryProcessors_ = nullptr;
    // Indicates whether the memory spike protection switch is turned on.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> memoryProtectedMode_ = nullptr;
    // The overall memory usage. Valid values: 70 to 90. Unit: %.
    std::shared_ptr<int32_t> memoryRateLimit_ = nullptr;
    // The overall memory sampling duration. Valid values: 30 to 60. Unit: seconds.
    std::shared_ptr<int32_t> memorySampleDuration_ = nullptr;
    // The memory usage of a single process. Valid values: 30 to 60. Unit: %.
    std::shared_ptr<int32_t> memorySingleRateLimit_ = nullptr;
    // Specifies whether to display the restart button in the DesktopAssistant when the cloud computer is accessed from the Alibaba Cloud Workspace mobile clients (including the Android client and the iOS client).
    // 
    // > Mobile clients of V7.4 and higher versions required.
    // 
    // Valid values:
    // 
    // - off: not provided.
    // - on: provided.
    std::shared_ptr<string> mobileRestart_ = nullptr;
    std::shared_ptr<string> mobileSafeMenu_ = nullptr;
    // Specifies whether to display the shut down button in the DesktopAssistant when the cloud computer is accessed from the Alibaba Cloud Workspace mobile clients (including the Android client and the iOS client).
    // 
    // > Mobile clients of V7.4 and higher versions required.
    // 
    // Valid values:
    // 
    // - off: not provided.
    // - on: provided.
    std::shared_ptr<string> mobileShutdown_ = nullptr;
    std::shared_ptr<string> mobileWuyingKeeper_ = nullptr;
    std::shared_ptr<string> mobileWyAssistant_ = nullptr;
    // The name of the cloud computer policy.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the network redirection feature is enabled.
    // 
    // >  This parameter is in invitational preview for specific users and not available to the public.
    // 
    // Valid values:
    // 
    // *   off (default)
    // *   on
    std::shared_ptr<string> netRedirect_ = nullptr;
    // The network redirection rule.
    // 
    // >  This parameter is in invitational preview for specific users and not available to the public.
    std::shared_ptr<vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule>> netRedirectRule_ = nullptr;
    // The ID of the cloud computer policy.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The type of the cloud computer policy.
    // 
    // Valid values:
    // 
    // *   SYSTEM
    // *   CUSTOM
    std::shared_ptr<string> policyGroupType_ = nullptr;
    // The status of the cloud computer policy.
    // 
    // Valid values:
    // 
    // *   AVAILABLE
    // *   CREATING
    std::shared_ptr<string> policyStatus_ = nullptr;
    // The cloud computer preemption feature.
    // 
    // >  To ensure user experience and data security, when a cloud computer is used by an end user, other end users cannot connect to the cloud computer. By default, this parameter is set to `off`, which cannot be modified.
    // 
    // Valid values:
    // 
    // *   off: Preemption is not allowed.
    std::shared_ptr<string> preemptLogin_ = nullptr;
    // The usernames that can preempt to connect to the cloud computer.
    std::shared_ptr<vector<string>> preemptLoginUsers_ = nullptr;
    // Indicates whether the printer redirection feature is enabled.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> printerRedirection_ = nullptr;
    // Indicates whether the Image Quality Enhancement switch is turned on for design and 3D scenarios.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> qualityEnhancement_ = nullptr;
    // Indicates whether the custom screen recording feature is enabled.
    // 
    // Valid values:
    // 
    // *   off (default)
    // *   on
    std::shared_ptr<string> recordContent_ = nullptr;
    // The period when the custom screen recording can be retained before expiration. Default value: 30 days.
    std::shared_ptr<int64_t> recordContentExpires_ = nullptr;
    // The recording duration since a target event is detected by the screen recording audit policy. Unit: Minute. Valid values: 10-60.
    std::shared_ptr<int32_t> recordEventDuration_ = nullptr;
    std::shared_ptr<vector<string>> recordEventFileExts_ = nullptr;
    // The array of absolute paths of the monitored files in the screen recording audit policy.
    std::shared_ptr<vector<string>> recordEventFilePaths_ = nullptr;
    std::shared_ptr<vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels>> recordEventLevels_ = nullptr;
    // The array of absolute paths of the monitored registry entries in the screen recording audit policy.
    std::shared_ptr<vector<string>> recordEventRegisters_ = nullptr;
    // Indicates whether the screen recording feature is enabled.
    // 
    // Valid values:
    // 
    // *   byaction_cmd_ft: enables the operation-triggered screen recording upon command execution and file transfer.
    // *   ALLTIME: enables the whole-process screen recording. That is, the recording starts when cloud computers are connected and ends when the cloud computers are disconnected.
    // *   PERIOD: enables the interval-based screen recording. You must specify an interval between the start time and end time of this type of recording.
    // *   byaction_commands: enables the operation-triggered screen recording upon command execution.
    // *   OFF: disables the screen recording feature.
    // *   byaction_file_transfer: enables the operation-triggered screen recording upon file transfer.
    std::shared_ptr<string> recording_ = nullptr;
    // Indicates whether audio files generated from cloud computers are recorded.
    // 
    // Valid values:
    // 
    // *   off (default): records only video files.
    // *   on: records video and audio files.
    std::shared_ptr<string> recordingAudio_ = nullptr;
    // The file length of the screen recording. Unit: minutes. Screen recording files are split based on the specified file length and uploaded to Object Storage Service (OSS) buckets. When a screen recording file reaches 300 MB in size, the system preferentially performs rolling update for the file.
    // 
    // Valid values:
    // 
    // *   10
    // *   20
    // *   30
    // *   60
    std::shared_ptr<int32_t> recordingDuration_ = nullptr;
    // The time when the screen recording ended. The value is in the HH:MM:SS format. The value takes effect only when Recording is set to PERIOD.
    std::shared_ptr<string> recordingEndTime_ = nullptr;
    // The retention period of the screen recording file. Valid values: 1 to 180. Unit: days.
    std::shared_ptr<int64_t> recordingExpires_ = nullptr;
    // The frame rate of screen recording. Unit: fps.
    // 
    // Valid values:
    // 
    // *   2
    // *   5
    // *   10
    // *   15
    std::shared_ptr<int64_t> recordingFps_ = nullptr;
    // The time when the screen recording was started. The value is in the HH:MM:SS format. The value takes effect only when Recording is set to PERIOD.
    std::shared_ptr<string> recordingStartTime_ = nullptr;
    // Indicates whether the screen recording notification feature is enabled after end users log on to the Alibaba Cloud Workspace client.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> recordingUserNotify_ = nullptr;
    // The notification content of screen recording. By default, this parameter is left empty.
    std::shared_ptr<string> recordingUserNotifyMessage_ = nullptr;
    // The permissions on keyboard and mouse control during remote assistance.
    // 
    // Valid values:
    // 
    // *   optionalControl: By default, you are not granted the permissions. You can apply for the permissions.
    // *   fullControl: You are granted the full permissions.
    // *   disableControl: You are not granted the permissions.
    std::shared_ptr<string> remoteCoordinate_ = nullptr;
    // Resets the cloud computer.
    std::shared_ptr<string> resetDesktop_ = nullptr;
    std::shared_ptr<int32_t> resolutionHeight_ = nullptr;
    std::shared_ptr<string> resolutionModel_ = nullptr;
    std::shared_ptr<int32_t> resolutionWidth_ = nullptr;
    // The number of resource groups bound with this policy.
    std::shared_ptr<int32_t> resourceGroupCount_ = nullptr;
    // The region of the cloud computer policy.
    // 
    // > The value of a region-less policy is `center`.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    std::shared_ptr<string> safeMenu_ = nullptr;
    // The effective scope of the policy.
    // 
    // Valid values:
    // 
    // *   IP: The policy takes effect based on the IP address.
    // *   GLOBAL: The policy takes effect globally.
    std::shared_ptr<string> scope_ = nullptr;
    // This parameter is required when the `Scope` parameter is set to `IP`.````
    std::shared_ptr<vector<string>> scopeValue_ = nullptr;
    std::shared_ptr<string> screenDisplayMode_ = nullptr;
    // Indicates whether the Smooth Enhancement switch is turned on.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> smoothEnhancement_ = nullptr;
    // Specifies whether to provide the Metrics function in the DesktopAssistant. Valid values:
    // 
    // - off: not provided.
    // - on: provided.
    std::shared_ptr<string> statusMonitor_ = nullptr;
    // The streaming mode.
    // 
    // Valid values:
    // 
    // *   intelligent: suitable for daily office scenarios (Intelligent Mode).
    // *   smooth: suitable for design and 3D application scenarios (Smooth Mode).
    std::shared_ptr<string> streamingMode_ = nullptr;
    // The destination frame rate. Valid values: 10 to 60. Unit: fps.
    std::shared_ptr<int32_t> targetFps_ = nullptr;
    // Indicates whether the USB redirection feature is enabled.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> usbRedirect_ = nullptr;
    // The USB redirection rule.
    std::shared_ptr<vector<Models::DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule>> usbSupplyRedirectRule_ = nullptr;
    std::shared_ptr<string> useTime_ = nullptr;
    // The average bitrate for video encoding. Valid values: 1000 to 50000.
    std::shared_ptr<int32_t> videoEncAvgKbps_ = nullptr;
    // The maximum quantizer parameter (QP) of video files. A larger QP value indicates worse video quality. Valid values: 0 to 51.
    std::shared_ptr<int32_t> videoEncMaxQP_ = nullptr;
    // The minimum quantizer parameter (QP) of video files. A smaller QP value indicates higher video quality. Valid values: 0 to 51.
    std::shared_ptr<int32_t> videoEncMinQP_ = nullptr;
    // The peak bitrate for video encoding. Valid values: 1000 to 50000.
    std::shared_ptr<int32_t> videoEncPeakKbps_ = nullptr;
    // The video encoding feature.
    // 
    // Valid values:
    // 
    // *   qualityFirst: The priority given to the image quality.
    // *   bandwidthFirst: The priority given to the bitrate.
    std::shared_ptr<string> videoEncPolicy_ = nullptr;
    // Indicates whether the multimedia redirection feature is enabled.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> videoRedirect_ = nullptr;
    // The image display quality.
    // 
    // Valid values:
    // 
    // *   high: high-definition (HD)
    // *   low: fluent
    // *   medium (default): adaptive
    // *   lossless: no quality loss
    std::shared_ptr<string> visualQuality_ = nullptr;
    // The watermarking feature.
    // 
    // Valid values:
    // 
    // *   blind: Invisible watermarks are applied.
    // *   off: The watermarking feature is disabled.
    // *   on: Visible watermarks are applied.
    std::shared_ptr<string> watermark_ = nullptr;
    // Indicates whether the anti-screen photo feature is enabled for invisible watermarks.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> watermarkAntiCam_ = nullptr;
    // The font color in red, green, and blue (RGB) of the watermark. Valid values: 0 to 16777215.
    std::shared_ptr<int32_t> watermarkColor_ = nullptr;
    // If you set `WatermarkType` to `custom`, you must also specify `WatermarkCustomText`.
    std::shared_ptr<string> watermarkCustomText_ = nullptr;
    // The slope of the watermark. Valid values: -10 to -30.
    std::shared_ptr<double> watermarkDegree_ = nullptr;
    // The font size of the watermark. Valid values: 10 to 20.
    std::shared_ptr<int32_t> watermarkFontSize_ = nullptr;
    // The watermark font style.
    // 
    // Valid values:
    // 
    // *   plain
    // *   bold
    std::shared_ptr<string> watermarkFontStyle_ = nullptr;
    // The watermark enhancement feature.
    // 
    // Valid values:
    // 
    // *   high
    // *   low
    // *   medium
    std::shared_ptr<string> watermarkPower_ = nullptr;
    // The number of watermark rows.
    // 
    // >  This parameter is not available for public use.
    std::shared_ptr<int32_t> watermarkRowAmount_ = nullptr;
    // Indicates whether the security priority feature is enabled for invisible watermarks.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> watermarkSecurity_ = nullptr;
    // The watermark transparency.
    // 
    // Valid values:
    // 
    // *   LIGHT
    // *   DARK
    // *   MIDDLE
    std::shared_ptr<string> watermarkTransparency_ = nullptr;
    // The watermark transparency. A greater value indicates that the watermark is less transparent. Valid values: 10 to 100.
    std::shared_ptr<int32_t> watermarkTransparencyValue_ = nullptr;
    // The watermark content.
    // 
    // Valid values:
    // 
    // *   EndUserId: the username.
    // *   Custom
    // *   DesktopIp: the IP address of the cloud computer.
    // *   ClientIp: the IP address of the Alibaba Cloud Workspace client.
    // *   HostName: the rightmost 15 digits of the cloud computer ID.
    // *   ClientTime: the current time displayed on the cloud computer.
    std::shared_ptr<string> watermarkType_ = nullptr;
    std::shared_ptr<string> wuyingKeeper_ = nullptr;
    // Specifies whether to provide the AI Assistant function in the DesktopAssistant when the cloud computer is accessed from the Alibaba Cloud Workspace desktop clients (including the Windows client and the macOS client).
    // 
    // > Desktop clients of V7.7 and higher versions required.
    // 
    // Valid values:
    // 
    // - off: the AI Aisstant function is not provided.
    // - on: the AI Aisstant function is provided.
    std::shared_ptr<string> wyAssistant_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
