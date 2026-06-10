// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePolicyGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DescribePolicyGroups, describePolicyGroups_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DescribePolicyGroups, describePolicyGroups_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePolicyGroupsResponseBody() = default ;
    DescribePolicyGroupsResponseBody(const DescribePolicyGroupsResponseBody &) = default ;
    DescribePolicyGroupsResponseBody(DescribePolicyGroupsResponseBody &&) = default ;
    DescribePolicyGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGroupsResponseBody() = default ;
    DescribePolicyGroupsResponseBody& operator=(const DescribePolicyGroupsResponseBody &) = default ;
    DescribePolicyGroupsResponseBody& operator=(DescribePolicyGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DescribePolicyGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DescribePolicyGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AcademicProxy, academicProxy_);
        DARABONBA_PTR_TO_JSON(AdminAccess, adminAccess_);
        DARABONBA_PTR_TO_JSON(AdminKeyboardOnFullScreen, adminKeyboardOnFullScreen_);
        DARABONBA_PTR_TO_JSON(AdminKeyboardOnWindows, adminKeyboardOnWindows_);
        DARABONBA_PTR_TO_JSON(AppContentProtection, appContentProtection_);
        DARABONBA_PTR_TO_JSON(AuthorizeAccessPolicyRules, authorizeAccessPolicyRules_);
        DARABONBA_PTR_TO_JSON(AuthorizeSecurityPolicyRules, authorizeSecurityPolicyRules_);
        DARABONBA_PTR_TO_JSON(AutoReconnect, autoReconnect_);
        DARABONBA_PTR_TO_JSON(CameraRedirect, cameraRedirect_);
        DARABONBA_PTR_TO_JSON(ClientControlMenu, clientControlMenu_);
        DARABONBA_PTR_TO_JSON(ClientCreateSnapshot, clientCreateSnapshot_);
        DARABONBA_PTR_TO_JSON(ClientHibernate, clientHibernate_);
        DARABONBA_PTR_TO_JSON(ClientRestart, clientRestart_);
        DARABONBA_PTR_TO_JSON(ClientShutdown, clientShutdown_);
        DARABONBA_PTR_TO_JSON(ClientTypes, clientTypes_);
        DARABONBA_PTR_TO_JSON(Clipboard, clipboard_);
        DARABONBA_PTR_TO_JSON(ColorEnhancement, colorEnhancement_);
        DARABONBA_PTR_TO_JSON(CpdDriveClipboard, cpdDriveClipboard_);
        DARABONBA_PTR_TO_JSON(CpuDownGradeDuration, cpuDownGradeDuration_);
        DARABONBA_PTR_TO_JSON(CpuOverload, cpuOverload_);
        DARABONBA_PTR_TO_JSON(CpuProcessors, cpuProcessors_);
        DARABONBA_PTR_TO_JSON(CpuProtectedMode, cpuProtectedMode_);
        DARABONBA_PTR_TO_JSON(CpuRateLimit, cpuRateLimit_);
        DARABONBA_PTR_TO_JSON(CpuSampleDuration, cpuSampleDuration_);
        DARABONBA_PTR_TO_JSON(CpuSingleRateLimit, cpuSingleRateLimit_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DesktopCount, desktopCount_);
        DARABONBA_PTR_TO_JSON(DesktopGroupCount, desktopGroupCount_);
        DARABONBA_PTR_TO_JSON(DeviceConnectHint, deviceConnectHint_);
        DARABONBA_PTR_TO_JSON(DeviceRedirects, deviceRedirects_);
        DARABONBA_PTR_TO_JSON(DeviceRules, deviceRules_);
        DARABONBA_PTR_TO_JSON(DiskOverload, diskOverload_);
        DARABONBA_PTR_TO_JSON(DisplayMode, displayMode_);
        DARABONBA_PTR_TO_JSON(DomainList, domainList_);
        DARABONBA_PTR_TO_JSON(DomainResolveRule, domainResolveRule_);
        DARABONBA_PTR_TO_JSON(DomainResolveRuleType, domainResolveRuleType_);
        DARABONBA_PTR_TO_JSON(EdsCount, edsCount_);
        DARABONBA_PTR_TO_JSON(EndUserApplyAdminCoordinate, endUserApplyAdminCoordinate_);
        DARABONBA_PTR_TO_JSON(EndUserCount, endUserCount_);
        DARABONBA_PTR_TO_JSON(EndUserGroupCoordinate, endUserGroupCoordinate_);
        DARABONBA_PTR_TO_JSON(ExternalDrive, externalDrive_);
        DARABONBA_PTR_TO_JSON(FileMigrate, fileMigrate_);
        DARABONBA_PTR_TO_JSON(FileTransfer, fileTransfer_);
        DARABONBA_PTR_TO_JSON(FileTransferAddress, fileTransferAddress_);
        DARABONBA_PTR_TO_JSON(FileTransferSpeed, fileTransferSpeed_);
        DARABONBA_PTR_TO_JSON(FileTransferSpeedLocation, fileTransferSpeedLocation_);
        DARABONBA_PTR_TO_JSON(GpuAcceleration, gpuAcceleration_);
        DARABONBA_PTR_TO_JSON(HoverConfigMsg, hoverConfigMsg_);
        DARABONBA_PTR_TO_JSON(HoverHibernate, hoverHibernate_);
        DARABONBA_PTR_TO_JSON(HoverRestart, hoverRestart_);
        DARABONBA_PTR_TO_JSON(HoverShutdown, hoverShutdown_);
        DARABONBA_PTR_TO_JSON(Html5Access, html5Access_);
        DARABONBA_PTR_TO_JSON(Html5FileTransfer, html5FileTransfer_);
        DARABONBA_PTR_TO_JSON(InternetCommunicationProtocol, internetCommunicationProtocol_);
        DARABONBA_PTR_TO_JSON(InternetPrinter, internetPrinter_);
        DARABONBA_PTR_TO_JSON(KeyboardControl, keyboardControl_);
        DARABONBA_PTR_TO_JSON(LocalDrive, localDrive_);
        DARABONBA_PTR_TO_JSON(MaxReconnectTime, maxReconnectTime_);
        DARABONBA_PTR_TO_JSON(MemoryDownGradeDuration, memoryDownGradeDuration_);
        DARABONBA_PTR_TO_JSON(MemoryOverload, memoryOverload_);
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
        DARABONBA_PTR_TO_JSON(ModelLibrary, modelLibrary_);
        DARABONBA_PTR_TO_JSON(MultiScreen, multiScreen_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NetRedirect, netRedirect_);
        DARABONBA_PTR_TO_JSON(NetRedirectRule, netRedirectRule_);
        DARABONBA_PTR_TO_JSON(NetworkPrinter, networkPrinter_);
        DARABONBA_PTR_TO_JSON(OrganizationCount, organizationCount_);
        DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_TO_JSON(PolicyGroupType, policyGroupType_);
        DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
        DARABONBA_PTR_TO_JSON(PortProxy, portProxy_);
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
        DARABONBA_PTR_TO_JSON(ResolutionDpi, resolutionDpi_);
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
        DARABONBA_PTR_TO_JSON(WatermarkShadow, watermarkShadow_);
        DARABONBA_PTR_TO_JSON(WatermarkTransparency, watermarkTransparency_);
        DARABONBA_PTR_TO_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
        DARABONBA_PTR_TO_JSON(WatermarkType, watermarkType_);
        DARABONBA_PTR_TO_JSON(WuyingKeeper, wuyingKeeper_);
        DARABONBA_PTR_TO_JSON(WyAssistant, wyAssistant_);
      };
      friend void from_json(const Darabonba::Json& j, DescribePolicyGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AcademicProxy, academicProxy_);
        DARABONBA_PTR_FROM_JSON(AdminAccess, adminAccess_);
        DARABONBA_PTR_FROM_JSON(AdminKeyboardOnFullScreen, adminKeyboardOnFullScreen_);
        DARABONBA_PTR_FROM_JSON(AdminKeyboardOnWindows, adminKeyboardOnWindows_);
        DARABONBA_PTR_FROM_JSON(AppContentProtection, appContentProtection_);
        DARABONBA_PTR_FROM_JSON(AuthorizeAccessPolicyRules, authorizeAccessPolicyRules_);
        DARABONBA_PTR_FROM_JSON(AuthorizeSecurityPolicyRules, authorizeSecurityPolicyRules_);
        DARABONBA_PTR_FROM_JSON(AutoReconnect, autoReconnect_);
        DARABONBA_PTR_FROM_JSON(CameraRedirect, cameraRedirect_);
        DARABONBA_PTR_FROM_JSON(ClientControlMenu, clientControlMenu_);
        DARABONBA_PTR_FROM_JSON(ClientCreateSnapshot, clientCreateSnapshot_);
        DARABONBA_PTR_FROM_JSON(ClientHibernate, clientHibernate_);
        DARABONBA_PTR_FROM_JSON(ClientRestart, clientRestart_);
        DARABONBA_PTR_FROM_JSON(ClientShutdown, clientShutdown_);
        DARABONBA_PTR_FROM_JSON(ClientTypes, clientTypes_);
        DARABONBA_PTR_FROM_JSON(Clipboard, clipboard_);
        DARABONBA_PTR_FROM_JSON(ColorEnhancement, colorEnhancement_);
        DARABONBA_PTR_FROM_JSON(CpdDriveClipboard, cpdDriveClipboard_);
        DARABONBA_PTR_FROM_JSON(CpuDownGradeDuration, cpuDownGradeDuration_);
        DARABONBA_PTR_FROM_JSON(CpuOverload, cpuOverload_);
        DARABONBA_PTR_FROM_JSON(CpuProcessors, cpuProcessors_);
        DARABONBA_PTR_FROM_JSON(CpuProtectedMode, cpuProtectedMode_);
        DARABONBA_PTR_FROM_JSON(CpuRateLimit, cpuRateLimit_);
        DARABONBA_PTR_FROM_JSON(CpuSampleDuration, cpuSampleDuration_);
        DARABONBA_PTR_FROM_JSON(CpuSingleRateLimit, cpuSingleRateLimit_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DesktopCount, desktopCount_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupCount, desktopGroupCount_);
        DARABONBA_PTR_FROM_JSON(DeviceConnectHint, deviceConnectHint_);
        DARABONBA_PTR_FROM_JSON(DeviceRedirects, deviceRedirects_);
        DARABONBA_PTR_FROM_JSON(DeviceRules, deviceRules_);
        DARABONBA_PTR_FROM_JSON(DiskOverload, diskOverload_);
        DARABONBA_PTR_FROM_JSON(DisplayMode, displayMode_);
        DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
        DARABONBA_PTR_FROM_JSON(DomainResolveRule, domainResolveRule_);
        DARABONBA_PTR_FROM_JSON(DomainResolveRuleType, domainResolveRuleType_);
        DARABONBA_PTR_FROM_JSON(EdsCount, edsCount_);
        DARABONBA_PTR_FROM_JSON(EndUserApplyAdminCoordinate, endUserApplyAdminCoordinate_);
        DARABONBA_PTR_FROM_JSON(EndUserCount, endUserCount_);
        DARABONBA_PTR_FROM_JSON(EndUserGroupCoordinate, endUserGroupCoordinate_);
        DARABONBA_PTR_FROM_JSON(ExternalDrive, externalDrive_);
        DARABONBA_PTR_FROM_JSON(FileMigrate, fileMigrate_);
        DARABONBA_PTR_FROM_JSON(FileTransfer, fileTransfer_);
        DARABONBA_PTR_FROM_JSON(FileTransferAddress, fileTransferAddress_);
        DARABONBA_PTR_FROM_JSON(FileTransferSpeed, fileTransferSpeed_);
        DARABONBA_PTR_FROM_JSON(FileTransferSpeedLocation, fileTransferSpeedLocation_);
        DARABONBA_PTR_FROM_JSON(GpuAcceleration, gpuAcceleration_);
        DARABONBA_PTR_FROM_JSON(HoverConfigMsg, hoverConfigMsg_);
        DARABONBA_PTR_FROM_JSON(HoverHibernate, hoverHibernate_);
        DARABONBA_PTR_FROM_JSON(HoverRestart, hoverRestart_);
        DARABONBA_PTR_FROM_JSON(HoverShutdown, hoverShutdown_);
        DARABONBA_PTR_FROM_JSON(Html5Access, html5Access_);
        DARABONBA_PTR_FROM_JSON(Html5FileTransfer, html5FileTransfer_);
        DARABONBA_PTR_FROM_JSON(InternetCommunicationProtocol, internetCommunicationProtocol_);
        DARABONBA_PTR_FROM_JSON(InternetPrinter, internetPrinter_);
        DARABONBA_PTR_FROM_JSON(KeyboardControl, keyboardControl_);
        DARABONBA_PTR_FROM_JSON(LocalDrive, localDrive_);
        DARABONBA_PTR_FROM_JSON(MaxReconnectTime, maxReconnectTime_);
        DARABONBA_PTR_FROM_JSON(MemoryDownGradeDuration, memoryDownGradeDuration_);
        DARABONBA_PTR_FROM_JSON(MemoryOverload, memoryOverload_);
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
        DARABONBA_PTR_FROM_JSON(ModelLibrary, modelLibrary_);
        DARABONBA_PTR_FROM_JSON(MultiScreen, multiScreen_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NetRedirect, netRedirect_);
        DARABONBA_PTR_FROM_JSON(NetRedirectRule, netRedirectRule_);
        DARABONBA_PTR_FROM_JSON(NetworkPrinter, networkPrinter_);
        DARABONBA_PTR_FROM_JSON(OrganizationCount, organizationCount_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupType, policyGroupType_);
        DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
        DARABONBA_PTR_FROM_JSON(PortProxy, portProxy_);
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
        DARABONBA_PTR_FROM_JSON(ResolutionDpi, resolutionDpi_);
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
        DARABONBA_PTR_FROM_JSON(WatermarkShadow, watermarkShadow_);
        DARABONBA_PTR_FROM_JSON(WatermarkTransparency, watermarkTransparency_);
        DARABONBA_PTR_FROM_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
        DARABONBA_PTR_FROM_JSON(WatermarkType, watermarkType_);
        DARABONBA_PTR_FROM_JSON(WuyingKeeper, wuyingKeeper_);
        DARABONBA_PTR_FROM_JSON(WyAssistant, wyAssistant_);
      };
      DescribePolicyGroups() = default ;
      DescribePolicyGroups(const DescribePolicyGroups &) = default ;
      DescribePolicyGroups(DescribePolicyGroups &&) = default ;
      DescribePolicyGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DescribePolicyGroups() = default ;
      DescribePolicyGroups& operator=(const DescribePolicyGroups &) = default ;
      DescribePolicyGroups& operator=(DescribePolicyGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsbSupplyRedirectRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsbSupplyRedirectRule& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DeviceClass, deviceClass_);
          DARABONBA_PTR_TO_JSON(DeviceSubclass, deviceSubclass_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(UsbRedirectType, usbRedirectType_);
          DARABONBA_PTR_TO_JSON(UsbRuleType, usbRuleType_);
          DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
        };
        friend void from_json(const Darabonba::Json& j, UsbSupplyRedirectRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DeviceClass, deviceClass_);
          DARABONBA_PTR_FROM_JSON(DeviceSubclass, deviceSubclass_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(UsbRedirectType, usbRedirectType_);
          DARABONBA_PTR_FROM_JSON(UsbRuleType, usbRuleType_);
          DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
        };
        UsbSupplyRedirectRule() = default ;
        UsbSupplyRedirectRule(const UsbSupplyRedirectRule &) = default ;
        UsbSupplyRedirectRule(UsbSupplyRedirectRule &&) = default ;
        UsbSupplyRedirectRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsbSupplyRedirectRule() = default ;
        UsbSupplyRedirectRule& operator=(const UsbSupplyRedirectRule &) = default ;
        UsbSupplyRedirectRule& operator=(UsbSupplyRedirectRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->deviceClass_ == nullptr && this->deviceSubclass_ == nullptr && this->productId_ == nullptr && this->usbRedirectType_ == nullptr && this->usbRuleType_ == nullptr
        && this->vendorId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline UsbSupplyRedirectRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // deviceClass Field Functions 
        bool hasDeviceClass() const { return this->deviceClass_ != nullptr;};
        void deleteDeviceClass() { this->deviceClass_ = nullptr;};
        inline string getDeviceClass() const { DARABONBA_PTR_GET_DEFAULT(deviceClass_, "") };
        inline UsbSupplyRedirectRule& setDeviceClass(string deviceClass) { DARABONBA_PTR_SET_VALUE(deviceClass_, deviceClass) };


        // deviceSubclass Field Functions 
        bool hasDeviceSubclass() const { return this->deviceSubclass_ != nullptr;};
        void deleteDeviceSubclass() { this->deviceSubclass_ = nullptr;};
        inline string getDeviceSubclass() const { DARABONBA_PTR_GET_DEFAULT(deviceSubclass_, "") };
        inline UsbSupplyRedirectRule& setDeviceSubclass(string deviceSubclass) { DARABONBA_PTR_SET_VALUE(deviceSubclass_, deviceSubclass) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline UsbSupplyRedirectRule& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // usbRedirectType Field Functions 
        bool hasUsbRedirectType() const { return this->usbRedirectType_ != nullptr;};
        void deleteUsbRedirectType() { this->usbRedirectType_ = nullptr;};
        inline int64_t getUsbRedirectType() const { DARABONBA_PTR_GET_DEFAULT(usbRedirectType_, 0L) };
        inline UsbSupplyRedirectRule& setUsbRedirectType(int64_t usbRedirectType) { DARABONBA_PTR_SET_VALUE(usbRedirectType_, usbRedirectType) };


        // usbRuleType Field Functions 
        bool hasUsbRuleType() const { return this->usbRuleType_ != nullptr;};
        void deleteUsbRuleType() { this->usbRuleType_ = nullptr;};
        inline int64_t getUsbRuleType() const { DARABONBA_PTR_GET_DEFAULT(usbRuleType_, 0L) };
        inline UsbSupplyRedirectRule& setUsbRuleType(int64_t usbRuleType) { DARABONBA_PTR_SET_VALUE(usbRuleType_, usbRuleType) };


        // vendorId Field Functions 
        bool hasVendorId() const { return this->vendorId_ != nullptr;};
        void deleteVendorId() { this->vendorId_ = nullptr;};
        inline string getVendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
        inline UsbSupplyRedirectRule& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


      protected:
        // The rule description.
        shared_ptr<string> description_ {};
        // The device class. This parameter is required when `usbRuleType` is set to 1. For more information, see [Defined Class Codes](https://www.usb.org/defined-class-codes).
        shared_ptr<string> deviceClass_ {};
        // The device subclass. This parameter is required when `usbRuleType` is set to 1. For more information, see [Defined Class Codes](https://www.usb.org/defined-class-codes).
        shared_ptr<string> deviceSubclass_ {};
        // The product ID.
        shared_ptr<string> productId_ {};
        // The USB redirection type.
        shared_ptr<int64_t> usbRedirectType_ {};
        // The USB redirection rule type.
        shared_ptr<int64_t> usbRuleType_ {};
        // The vendor ID. For more information, see [Valid USB Vendor IDs (VIDs)](https://www.usb.org/sites/default/files/vendor_ids032322.pdf_1.pdf).
        shared_ptr<string> vendorId_ {};
      };

      class RecordEventLevels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordEventLevels& obj) { 
          DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
        };
        friend void from_json(const Darabonba::Json& j, RecordEventLevels& obj) { 
          DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        };
        RecordEventLevels() = default ;
        RecordEventLevels(const RecordEventLevels &) = default ;
        RecordEventLevels(RecordEventLevels &&) = default ;
        RecordEventLevels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordEventLevels() = default ;
        RecordEventLevels& operator=(const RecordEventLevels &) = default ;
        RecordEventLevels& operator=(RecordEventLevels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventLevel_ == nullptr
        && this->eventType_ == nullptr; };
        // eventLevel Field Functions 
        bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
        void deleteEventLevel() { this->eventLevel_ = nullptr;};
        inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
        inline RecordEventLevels& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline RecordEventLevels& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      protected:
        // The event severity.
        shared_ptr<string> eventLevel_ {};
        // The event type.
        shared_ptr<string> eventType_ {};
      };

      class NetRedirectRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetRedirectRule& obj) { 
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
          DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        };
        friend void from_json(const Darabonba::Json& j, NetRedirectRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
          DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        };
        NetRedirectRule() = default ;
        NetRedirectRule(const NetRedirectRule &) = default ;
        NetRedirectRule(NetRedirectRule &&) = default ;
        NetRedirectRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetRedirectRule() = default ;
        NetRedirectRule& operator=(const NetRedirectRule &) = default ;
        NetRedirectRule& operator=(NetRedirectRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domain_ == nullptr
        && this->policy_ == nullptr && this->ruleType_ == nullptr; };
        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline NetRedirectRule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline NetRedirectRule& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
        inline NetRedirectRule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      protected:
        // The policy content.
        shared_ptr<string> domain_ {};
        // The policy type.
        shared_ptr<string> policy_ {};
        // The policy type.
        shared_ptr<string> ruleType_ {};
      };

      class DomainResolveRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainResolveRule& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
        };
        friend void from_json(const Darabonba::Json& j, DomainResolveRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
        };
        DomainResolveRule() = default ;
        DomainResolveRule(const DomainResolveRule &) = default ;
        DomainResolveRule(DomainResolveRule &&) = default ;
        DomainResolveRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainResolveRule() = default ;
        DomainResolveRule& operator=(const DomainResolveRule &) = default ;
        DomainResolveRule& operator=(DomainResolveRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->domain_ == nullptr && this->policy_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DomainResolveRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline DomainResolveRule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline DomainResolveRule& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      protected:
        // The policy description.
        shared_ptr<string> description_ {};
        // The domain name.
        shared_ptr<string> domain_ {};
        // The resolution policy.
        shared_ptr<string> policy_ {};
      };

      class DeviceRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceRules& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_TO_JSON(DevicePid, devicePid_);
          DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
          DARABONBA_PTR_TO_JSON(DeviceVid, deviceVid_);
          DARABONBA_PTR_TO_JSON(OptCommand, optCommand_);
          DARABONBA_PTR_TO_JSON(Platforms, platforms_);
          DARABONBA_PTR_TO_JSON(RedirectType, redirectType_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceRules& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_FROM_JSON(DevicePid, devicePid_);
          DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
          DARABONBA_PTR_FROM_JSON(DeviceVid, deviceVid_);
          DARABONBA_PTR_FROM_JSON(OptCommand, optCommand_);
          DARABONBA_PTR_FROM_JSON(Platforms, platforms_);
          DARABONBA_PTR_FROM_JSON(RedirectType, redirectType_);
        };
        DeviceRules() = default ;
        DeviceRules(const DeviceRules &) = default ;
        DeviceRules(DeviceRules &&) = default ;
        DeviceRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceRules() = default ;
        DeviceRules& operator=(const DeviceRules &) = default ;
        DeviceRules& operator=(DeviceRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->devicePid_ == nullptr && this->deviceType_ == nullptr && this->deviceVid_ == nullptr && this->optCommand_ == nullptr && this->platforms_ == nullptr
        && this->redirectType_ == nullptr; };
        // deviceName Field Functions 
        bool hasDeviceName() const { return this->deviceName_ != nullptr;};
        void deleteDeviceName() { this->deviceName_ = nullptr;};
        inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
        inline DeviceRules& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


        // devicePid Field Functions 
        bool hasDevicePid() const { return this->devicePid_ != nullptr;};
        void deleteDevicePid() { this->devicePid_ = nullptr;};
        inline string getDevicePid() const { DARABONBA_PTR_GET_DEFAULT(devicePid_, "") };
        inline DeviceRules& setDevicePid(string devicePid) { DARABONBA_PTR_SET_VALUE(devicePid_, devicePid) };


        // deviceType Field Functions 
        bool hasDeviceType() const { return this->deviceType_ != nullptr;};
        void deleteDeviceType() { this->deviceType_ = nullptr;};
        inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
        inline DeviceRules& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


        // deviceVid Field Functions 
        bool hasDeviceVid() const { return this->deviceVid_ != nullptr;};
        void deleteDeviceVid() { this->deviceVid_ = nullptr;};
        inline string getDeviceVid() const { DARABONBA_PTR_GET_DEFAULT(deviceVid_, "") };
        inline DeviceRules& setDeviceVid(string deviceVid) { DARABONBA_PTR_SET_VALUE(deviceVid_, deviceVid) };


        // optCommand Field Functions 
        bool hasOptCommand() const { return this->optCommand_ != nullptr;};
        void deleteOptCommand() { this->optCommand_ = nullptr;};
        inline string getOptCommand() const { DARABONBA_PTR_GET_DEFAULT(optCommand_, "") };
        inline DeviceRules& setOptCommand(string optCommand) { DARABONBA_PTR_SET_VALUE(optCommand_, optCommand) };


        // platforms Field Functions 
        bool hasPlatforms() const { return this->platforms_ != nullptr;};
        void deletePlatforms() { this->platforms_ = nullptr;};
        inline string getPlatforms() const { DARABONBA_PTR_GET_DEFAULT(platforms_, "") };
        inline DeviceRules& setPlatforms(string platforms) { DARABONBA_PTR_SET_VALUE(platforms_, platforms) };


        // redirectType Field Functions 
        bool hasRedirectType() const { return this->redirectType_ != nullptr;};
        void deleteRedirectType() { this->redirectType_ = nullptr;};
        inline string getRedirectType() const { DARABONBA_PTR_GET_DEFAULT(redirectType_, "") };
        inline DeviceRules& setRedirectType(string redirectType) { DARABONBA_PTR_SET_VALUE(redirectType_, redirectType) };


      protected:
        // The device name.
        shared_ptr<string> deviceName_ {};
        // The product ID.
        shared_ptr<string> devicePid_ {};
        // The peripheral type.
        shared_ptr<string> deviceType_ {};
        // The vendor ID. For more information, see [Valid USB Vendor IDs (VIDs)](https://www.usb.org/sites/default/files/vendor_ids032322.pdf_1.pdf).
        shared_ptr<string> deviceVid_ {};
        // The link optimization command.
        shared_ptr<string> optCommand_ {};
        shared_ptr<string> platforms_ {};
        // The redirection type.
        shared_ptr<string> redirectType_ {};
      };

      class DeviceRedirects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceRedirects& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
          DARABONBA_PTR_TO_JSON(RedirectType, redirectType_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceRedirects& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
          DARABONBA_PTR_FROM_JSON(RedirectType, redirectType_);
        };
        DeviceRedirects() = default ;
        DeviceRedirects(const DeviceRedirects &) = default ;
        DeviceRedirects(DeviceRedirects &&) = default ;
        DeviceRedirects(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceRedirects() = default ;
        DeviceRedirects& operator=(const DeviceRedirects &) = default ;
        DeviceRedirects& operator=(DeviceRedirects &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceType_ == nullptr
        && this->redirectType_ == nullptr; };
        // deviceType Field Functions 
        bool hasDeviceType() const { return this->deviceType_ != nullptr;};
        void deleteDeviceType() { this->deviceType_ = nullptr;};
        inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
        inline DeviceRedirects& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


        // redirectType Field Functions 
        bool hasRedirectType() const { return this->redirectType_ != nullptr;};
        void deleteRedirectType() { this->redirectType_ = nullptr;};
        inline string getRedirectType() const { DARABONBA_PTR_GET_DEFAULT(redirectType_, "") };
        inline DeviceRedirects& setRedirectType(string redirectType) { DARABONBA_PTR_SET_VALUE(redirectType_, redirectType) };


      protected:
        // The peripheral type.
        shared_ptr<string> deviceType_ {};
        // The redirection type.
        // 
        // - usbRedirect: USB redirection.
        // 
        // - deviceRedirect: Device redirection.
        // 
        // - off: Disabled.
        shared_ptr<string> redirectType_ {};
      };

      class ClientTypes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClientTypes& obj) { 
          DARABONBA_PTR_TO_JSON(ClientType, clientType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ClientTypes& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ClientTypes() = default ;
        ClientTypes(const ClientTypes &) = default ;
        ClientTypes(ClientTypes &&) = default ;
        ClientTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClientTypes() = default ;
        ClientTypes& operator=(const ClientTypes &) = default ;
        ClientTypes& operator=(ClientTypes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientType_ == nullptr
        && this->status_ == nullptr; };
        // clientType Field Functions 
        bool hasClientType() const { return this->clientType_ != nullptr;};
        void deleteClientType() { this->clientType_ = nullptr;};
        inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
        inline ClientTypes& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ClientTypes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The client type.
        shared_ptr<string> clientType_ {};
        // Whether a specific client type is allowed to connect to the cloud computer.
        shared_ptr<string> status_ {};
      };

      class AuthorizeSecurityPolicyRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthorizeSecurityPolicyRules& obj) { 
          DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
          DARABONBA_PTR_TO_JSON(PortRange, portRange_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorizeSecurityPolicyRules& obj) { 
          DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
          DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        AuthorizeSecurityPolicyRules() = default ;
        AuthorizeSecurityPolicyRules(const AuthorizeSecurityPolicyRules &) = default ;
        AuthorizeSecurityPolicyRules(AuthorizeSecurityPolicyRules &&) = default ;
        AuthorizeSecurityPolicyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthorizeSecurityPolicyRules() = default ;
        AuthorizeSecurityPolicyRules& operator=(const AuthorizeSecurityPolicyRules &) = default ;
        AuthorizeSecurityPolicyRules& operator=(AuthorizeSecurityPolicyRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cidrIp_ == nullptr
        && this->description_ == nullptr && this->ipProtocol_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr && this->priority_ == nullptr
        && this->type_ == nullptr; };
        // cidrIp Field Functions 
        bool hasCidrIp() const { return this->cidrIp_ != nullptr;};
        void deleteCidrIp() { this->cidrIp_ = nullptr;};
        inline string getCidrIp() const { DARABONBA_PTR_GET_DEFAULT(cidrIp_, "") };
        inline AuthorizeSecurityPolicyRules& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AuthorizeSecurityPolicyRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ipProtocol Field Functions 
        bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
        void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
        inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
        inline AuthorizeSecurityPolicyRules& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline AuthorizeSecurityPolicyRules& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        // portRange Field Functions 
        bool hasPortRange() const { return this->portRange_ != nullptr;};
        void deletePortRange() { this->portRange_ = nullptr;};
        inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
        inline AuthorizeSecurityPolicyRules& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
        inline AuthorizeSecurityPolicyRules& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AuthorizeSecurityPolicyRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The target of the security group control rule. The value is an IPv4 CIDR block.
        shared_ptr<string> cidrIp_ {};
        // The description of the security group control rule.
        shared_ptr<string> description_ {};
        // The protocol type of the security group control rule.
        shared_ptr<string> ipProtocol_ {};
        // The authorization policy of the security group control rule.
        shared_ptr<string> policy_ {};
        // The port range of the security group control rule.
        shared_ptr<string> portRange_ {};
        // The priority of the security group control rule. A smaller number indicates a higher priority.
        shared_ptr<string> priority_ {};
        // The rule direction of the security group control rule.
        shared_ptr<string> type_ {};
      };

      class AuthorizeAccessPolicyRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthorizeAccessPolicyRules& obj) { 
          DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
          DARABONBA_PTR_TO_JSON(Description, description_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorizeAccessPolicyRules& obj) { 
          DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
        };
        AuthorizeAccessPolicyRules() = default ;
        AuthorizeAccessPolicyRules(const AuthorizeAccessPolicyRules &) = default ;
        AuthorizeAccessPolicyRules(AuthorizeAccessPolicyRules &&) = default ;
        AuthorizeAccessPolicyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthorizeAccessPolicyRules() = default ;
        AuthorizeAccessPolicyRules& operator=(const AuthorizeAccessPolicyRules &) = default ;
        AuthorizeAccessPolicyRules& operator=(AuthorizeAccessPolicyRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cidrIp_ == nullptr
        && this->description_ == nullptr; };
        // cidrIp Field Functions 
        bool hasCidrIp() const { return this->cidrIp_ != nullptr;};
        void deleteCidrIp() { this->cidrIp_ = nullptr;};
        inline string getCidrIp() const { DARABONBA_PTR_GET_DEFAULT(cidrIp_, "") };
        inline AuthorizeAccessPolicyRules& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AuthorizeAccessPolicyRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      protected:
        // The client-accessible IP address segment. The value is an IPv4 CIDR block.
        shared_ptr<string> cidrIp_ {};
        // The remarks for the client-accessible CIDR block.
        shared_ptr<string> description_ {};
      };

      virtual bool empty() const override { return this->academicProxy_ == nullptr
        && this->adminAccess_ == nullptr && this->adminKeyboardOnFullScreen_ == nullptr && this->adminKeyboardOnWindows_ == nullptr && this->appContentProtection_ == nullptr && this->authorizeAccessPolicyRules_ == nullptr
        && this->authorizeSecurityPolicyRules_ == nullptr && this->autoReconnect_ == nullptr && this->cameraRedirect_ == nullptr && this->clientControlMenu_ == nullptr && this->clientCreateSnapshot_ == nullptr
        && this->clientHibernate_ == nullptr && this->clientRestart_ == nullptr && this->clientShutdown_ == nullptr && this->clientTypes_ == nullptr && this->clipboard_ == nullptr
        && this->colorEnhancement_ == nullptr && this->cpdDriveClipboard_ == nullptr && this->cpuDownGradeDuration_ == nullptr && this->cpuOverload_ == nullptr && this->cpuProcessors_ == nullptr
        && this->cpuProtectedMode_ == nullptr && this->cpuRateLimit_ == nullptr && this->cpuSampleDuration_ == nullptr && this->cpuSingleRateLimit_ == nullptr && this->description_ == nullptr
        && this->desktopCount_ == nullptr && this->desktopGroupCount_ == nullptr && this->deviceConnectHint_ == nullptr && this->deviceRedirects_ == nullptr && this->deviceRules_ == nullptr
        && this->diskOverload_ == nullptr && this->displayMode_ == nullptr && this->domainList_ == nullptr && this->domainResolveRule_ == nullptr && this->domainResolveRuleType_ == nullptr
        && this->edsCount_ == nullptr && this->endUserApplyAdminCoordinate_ == nullptr && this->endUserCount_ == nullptr && this->endUserGroupCoordinate_ == nullptr && this->externalDrive_ == nullptr
        && this->fileMigrate_ == nullptr && this->fileTransfer_ == nullptr && this->fileTransferAddress_ == nullptr && this->fileTransferSpeed_ == nullptr && this->fileTransferSpeedLocation_ == nullptr
        && this->gpuAcceleration_ == nullptr && this->hoverConfigMsg_ == nullptr && this->hoverHibernate_ == nullptr && this->hoverRestart_ == nullptr && this->hoverShutdown_ == nullptr
        && this->html5Access_ == nullptr && this->html5FileTransfer_ == nullptr && this->internetCommunicationProtocol_ == nullptr && this->internetPrinter_ == nullptr && this->keyboardControl_ == nullptr
        && this->localDrive_ == nullptr && this->maxReconnectTime_ == nullptr && this->memoryDownGradeDuration_ == nullptr && this->memoryOverload_ == nullptr && this->memoryProcessors_ == nullptr
        && this->memoryProtectedMode_ == nullptr && this->memoryRateLimit_ == nullptr && this->memorySampleDuration_ == nullptr && this->memorySingleRateLimit_ == nullptr && this->mobileRestart_ == nullptr
        && this->mobileSafeMenu_ == nullptr && this->mobileShutdown_ == nullptr && this->mobileWuyingKeeper_ == nullptr && this->mobileWyAssistant_ == nullptr && this->modelLibrary_ == nullptr
        && this->multiScreen_ == nullptr && this->name_ == nullptr && this->netRedirect_ == nullptr && this->netRedirectRule_ == nullptr && this->networkPrinter_ == nullptr
        && this->organizationCount_ == nullptr && this->policyGroupId_ == nullptr && this->policyGroupType_ == nullptr && this->policyStatus_ == nullptr && this->portProxy_ == nullptr
        && this->preemptLogin_ == nullptr && this->preemptLoginUsers_ == nullptr && this->printerRedirection_ == nullptr && this->qualityEnhancement_ == nullptr && this->recordContent_ == nullptr
        && this->recordContentExpires_ == nullptr && this->recordEventDuration_ == nullptr && this->recordEventFileExts_ == nullptr && this->recordEventFilePaths_ == nullptr && this->recordEventLevels_ == nullptr
        && this->recordEventRegisters_ == nullptr && this->recording_ == nullptr && this->recordingAudio_ == nullptr && this->recordingDuration_ == nullptr && this->recordingEndTime_ == nullptr
        && this->recordingExpires_ == nullptr && this->recordingFps_ == nullptr && this->recordingStartTime_ == nullptr && this->recordingUserNotify_ == nullptr && this->recordingUserNotifyMessage_ == nullptr
        && this->remoteCoordinate_ == nullptr && this->resetDesktop_ == nullptr && this->resolutionDpi_ == nullptr && this->resolutionHeight_ == nullptr && this->resolutionModel_ == nullptr
        && this->resolutionWidth_ == nullptr && this->resourceGroupCount_ == nullptr && this->resourceRegionId_ == nullptr && this->safeMenu_ == nullptr && this->scope_ == nullptr
        && this->scopeValue_ == nullptr && this->screenDisplayMode_ == nullptr && this->smoothEnhancement_ == nullptr && this->statusMonitor_ == nullptr && this->streamingMode_ == nullptr
        && this->targetFps_ == nullptr && this->usbRedirect_ == nullptr && this->usbSupplyRedirectRule_ == nullptr && this->useTime_ == nullptr && this->videoEncAvgKbps_ == nullptr
        && this->videoEncMaxQP_ == nullptr && this->videoEncMinQP_ == nullptr && this->videoEncPeakKbps_ == nullptr && this->videoEncPolicy_ == nullptr && this->videoRedirect_ == nullptr
        && this->visualQuality_ == nullptr && this->watermark_ == nullptr && this->watermarkAntiCam_ == nullptr && this->watermarkColor_ == nullptr && this->watermarkCustomText_ == nullptr
        && this->watermarkDegree_ == nullptr && this->watermarkFontSize_ == nullptr && this->watermarkFontStyle_ == nullptr && this->watermarkPower_ == nullptr && this->watermarkRowAmount_ == nullptr
        && this->watermarkSecurity_ == nullptr && this->watermarkShadow_ == nullptr && this->watermarkTransparency_ == nullptr && this->watermarkTransparencyValue_ == nullptr && this->watermarkType_ == nullptr
        && this->wuyingKeeper_ == nullptr && this->wyAssistant_ == nullptr; };
      // academicProxy Field Functions 
      bool hasAcademicProxy() const { return this->academicProxy_ != nullptr;};
      void deleteAcademicProxy() { this->academicProxy_ = nullptr;};
      inline string getAcademicProxy() const { DARABONBA_PTR_GET_DEFAULT(academicProxy_, "") };
      inline DescribePolicyGroups& setAcademicProxy(string academicProxy) { DARABONBA_PTR_SET_VALUE(academicProxy_, academicProxy) };


      // adminAccess Field Functions 
      bool hasAdminAccess() const { return this->adminAccess_ != nullptr;};
      void deleteAdminAccess() { this->adminAccess_ = nullptr;};
      inline string getAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(adminAccess_, "") };
      inline DescribePolicyGroups& setAdminAccess(string adminAccess) { DARABONBA_PTR_SET_VALUE(adminAccess_, adminAccess) };


      // adminKeyboardOnFullScreen Field Functions 
      bool hasAdminKeyboardOnFullScreen() const { return this->adminKeyboardOnFullScreen_ != nullptr;};
      void deleteAdminKeyboardOnFullScreen() { this->adminKeyboardOnFullScreen_ = nullptr;};
      inline string getAdminKeyboardOnFullScreen() const { DARABONBA_PTR_GET_DEFAULT(adminKeyboardOnFullScreen_, "") };
      inline DescribePolicyGroups& setAdminKeyboardOnFullScreen(string adminKeyboardOnFullScreen) { DARABONBA_PTR_SET_VALUE(adminKeyboardOnFullScreen_, adminKeyboardOnFullScreen) };


      // adminKeyboardOnWindows Field Functions 
      bool hasAdminKeyboardOnWindows() const { return this->adminKeyboardOnWindows_ != nullptr;};
      void deleteAdminKeyboardOnWindows() { this->adminKeyboardOnWindows_ = nullptr;};
      inline string getAdminKeyboardOnWindows() const { DARABONBA_PTR_GET_DEFAULT(adminKeyboardOnWindows_, "") };
      inline DescribePolicyGroups& setAdminKeyboardOnWindows(string adminKeyboardOnWindows) { DARABONBA_PTR_SET_VALUE(adminKeyboardOnWindows_, adminKeyboardOnWindows) };


      // appContentProtection Field Functions 
      bool hasAppContentProtection() const { return this->appContentProtection_ != nullptr;};
      void deleteAppContentProtection() { this->appContentProtection_ = nullptr;};
      inline string getAppContentProtection() const { DARABONBA_PTR_GET_DEFAULT(appContentProtection_, "") };
      inline DescribePolicyGroups& setAppContentProtection(string appContentProtection) { DARABONBA_PTR_SET_VALUE(appContentProtection_, appContentProtection) };


      // authorizeAccessPolicyRules Field Functions 
      bool hasAuthorizeAccessPolicyRules() const { return this->authorizeAccessPolicyRules_ != nullptr;};
      void deleteAuthorizeAccessPolicyRules() { this->authorizeAccessPolicyRules_ = nullptr;};
      inline const vector<DescribePolicyGroups::AuthorizeAccessPolicyRules> & getAuthorizeAccessPolicyRules() const { DARABONBA_PTR_GET_CONST(authorizeAccessPolicyRules_, vector<DescribePolicyGroups::AuthorizeAccessPolicyRules>) };
      inline vector<DescribePolicyGroups::AuthorizeAccessPolicyRules> getAuthorizeAccessPolicyRules() { DARABONBA_PTR_GET(authorizeAccessPolicyRules_, vector<DescribePolicyGroups::AuthorizeAccessPolicyRules>) };
      inline DescribePolicyGroups& setAuthorizeAccessPolicyRules(const vector<DescribePolicyGroups::AuthorizeAccessPolicyRules> & authorizeAccessPolicyRules) { DARABONBA_PTR_SET_VALUE(authorizeAccessPolicyRules_, authorizeAccessPolicyRules) };
      inline DescribePolicyGroups& setAuthorizeAccessPolicyRules(vector<DescribePolicyGroups::AuthorizeAccessPolicyRules> && authorizeAccessPolicyRules) { DARABONBA_PTR_SET_RVALUE(authorizeAccessPolicyRules_, authorizeAccessPolicyRules) };


      // authorizeSecurityPolicyRules Field Functions 
      bool hasAuthorizeSecurityPolicyRules() const { return this->authorizeSecurityPolicyRules_ != nullptr;};
      void deleteAuthorizeSecurityPolicyRules() { this->authorizeSecurityPolicyRules_ = nullptr;};
      inline const vector<DescribePolicyGroups::AuthorizeSecurityPolicyRules> & getAuthorizeSecurityPolicyRules() const { DARABONBA_PTR_GET_CONST(authorizeSecurityPolicyRules_, vector<DescribePolicyGroups::AuthorizeSecurityPolicyRules>) };
      inline vector<DescribePolicyGroups::AuthorizeSecurityPolicyRules> getAuthorizeSecurityPolicyRules() { DARABONBA_PTR_GET(authorizeSecurityPolicyRules_, vector<DescribePolicyGroups::AuthorizeSecurityPolicyRules>) };
      inline DescribePolicyGroups& setAuthorizeSecurityPolicyRules(const vector<DescribePolicyGroups::AuthorizeSecurityPolicyRules> & authorizeSecurityPolicyRules) { DARABONBA_PTR_SET_VALUE(authorizeSecurityPolicyRules_, authorizeSecurityPolicyRules) };
      inline DescribePolicyGroups& setAuthorizeSecurityPolicyRules(vector<DescribePolicyGroups::AuthorizeSecurityPolicyRules> && authorizeSecurityPolicyRules) { DARABONBA_PTR_SET_RVALUE(authorizeSecurityPolicyRules_, authorizeSecurityPolicyRules) };


      // autoReconnect Field Functions 
      bool hasAutoReconnect() const { return this->autoReconnect_ != nullptr;};
      void deleteAutoReconnect() { this->autoReconnect_ = nullptr;};
      inline string getAutoReconnect() const { DARABONBA_PTR_GET_DEFAULT(autoReconnect_, "") };
      inline DescribePolicyGroups& setAutoReconnect(string autoReconnect) { DARABONBA_PTR_SET_VALUE(autoReconnect_, autoReconnect) };


      // cameraRedirect Field Functions 
      bool hasCameraRedirect() const { return this->cameraRedirect_ != nullptr;};
      void deleteCameraRedirect() { this->cameraRedirect_ = nullptr;};
      inline string getCameraRedirect() const { DARABONBA_PTR_GET_DEFAULT(cameraRedirect_, "") };
      inline DescribePolicyGroups& setCameraRedirect(string cameraRedirect) { DARABONBA_PTR_SET_VALUE(cameraRedirect_, cameraRedirect) };


      // clientControlMenu Field Functions 
      bool hasClientControlMenu() const { return this->clientControlMenu_ != nullptr;};
      void deleteClientControlMenu() { this->clientControlMenu_ = nullptr;};
      inline string getClientControlMenu() const { DARABONBA_PTR_GET_DEFAULT(clientControlMenu_, "") };
      inline DescribePolicyGroups& setClientControlMenu(string clientControlMenu) { DARABONBA_PTR_SET_VALUE(clientControlMenu_, clientControlMenu) };


      // clientCreateSnapshot Field Functions 
      bool hasClientCreateSnapshot() const { return this->clientCreateSnapshot_ != nullptr;};
      void deleteClientCreateSnapshot() { this->clientCreateSnapshot_ = nullptr;};
      inline string getClientCreateSnapshot() const { DARABONBA_PTR_GET_DEFAULT(clientCreateSnapshot_, "") };
      inline DescribePolicyGroups& setClientCreateSnapshot(string clientCreateSnapshot) { DARABONBA_PTR_SET_VALUE(clientCreateSnapshot_, clientCreateSnapshot) };


      // clientHibernate Field Functions 
      bool hasClientHibernate() const { return this->clientHibernate_ != nullptr;};
      void deleteClientHibernate() { this->clientHibernate_ = nullptr;};
      inline string getClientHibernate() const { DARABONBA_PTR_GET_DEFAULT(clientHibernate_, "") };
      inline DescribePolicyGroups& setClientHibernate(string clientHibernate) { DARABONBA_PTR_SET_VALUE(clientHibernate_, clientHibernate) };


      // clientRestart Field Functions 
      bool hasClientRestart() const { return this->clientRestart_ != nullptr;};
      void deleteClientRestart() { this->clientRestart_ = nullptr;};
      inline string getClientRestart() const { DARABONBA_PTR_GET_DEFAULT(clientRestart_, "") };
      inline DescribePolicyGroups& setClientRestart(string clientRestart) { DARABONBA_PTR_SET_VALUE(clientRestart_, clientRestart) };


      // clientShutdown Field Functions 
      bool hasClientShutdown() const { return this->clientShutdown_ != nullptr;};
      void deleteClientShutdown() { this->clientShutdown_ = nullptr;};
      inline string getClientShutdown() const { DARABONBA_PTR_GET_DEFAULT(clientShutdown_, "") };
      inline DescribePolicyGroups& setClientShutdown(string clientShutdown) { DARABONBA_PTR_SET_VALUE(clientShutdown_, clientShutdown) };


      // clientTypes Field Functions 
      bool hasClientTypes() const { return this->clientTypes_ != nullptr;};
      void deleteClientTypes() { this->clientTypes_ = nullptr;};
      inline const vector<DescribePolicyGroups::ClientTypes> & getClientTypes() const { DARABONBA_PTR_GET_CONST(clientTypes_, vector<DescribePolicyGroups::ClientTypes>) };
      inline vector<DescribePolicyGroups::ClientTypes> getClientTypes() { DARABONBA_PTR_GET(clientTypes_, vector<DescribePolicyGroups::ClientTypes>) };
      inline DescribePolicyGroups& setClientTypes(const vector<DescribePolicyGroups::ClientTypes> & clientTypes) { DARABONBA_PTR_SET_VALUE(clientTypes_, clientTypes) };
      inline DescribePolicyGroups& setClientTypes(vector<DescribePolicyGroups::ClientTypes> && clientTypes) { DARABONBA_PTR_SET_RVALUE(clientTypes_, clientTypes) };


      // clipboard Field Functions 
      bool hasClipboard() const { return this->clipboard_ != nullptr;};
      void deleteClipboard() { this->clipboard_ = nullptr;};
      inline string getClipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
      inline DescribePolicyGroups& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


      // colorEnhancement Field Functions 
      bool hasColorEnhancement() const { return this->colorEnhancement_ != nullptr;};
      void deleteColorEnhancement() { this->colorEnhancement_ = nullptr;};
      inline string getColorEnhancement() const { DARABONBA_PTR_GET_DEFAULT(colorEnhancement_, "") };
      inline DescribePolicyGroups& setColorEnhancement(string colorEnhancement) { DARABONBA_PTR_SET_VALUE(colorEnhancement_, colorEnhancement) };


      // cpdDriveClipboard Field Functions 
      bool hasCpdDriveClipboard() const { return this->cpdDriveClipboard_ != nullptr;};
      void deleteCpdDriveClipboard() { this->cpdDriveClipboard_ = nullptr;};
      inline string getCpdDriveClipboard() const { DARABONBA_PTR_GET_DEFAULT(cpdDriveClipboard_, "") };
      inline DescribePolicyGroups& setCpdDriveClipboard(string cpdDriveClipboard) { DARABONBA_PTR_SET_VALUE(cpdDriveClipboard_, cpdDriveClipboard) };


      // cpuDownGradeDuration Field Functions 
      bool hasCpuDownGradeDuration() const { return this->cpuDownGradeDuration_ != nullptr;};
      void deleteCpuDownGradeDuration() { this->cpuDownGradeDuration_ = nullptr;};
      inline int32_t getCpuDownGradeDuration() const { DARABONBA_PTR_GET_DEFAULT(cpuDownGradeDuration_, 0) };
      inline DescribePolicyGroups& setCpuDownGradeDuration(int32_t cpuDownGradeDuration) { DARABONBA_PTR_SET_VALUE(cpuDownGradeDuration_, cpuDownGradeDuration) };


      // cpuOverload Field Functions 
      bool hasCpuOverload() const { return this->cpuOverload_ != nullptr;};
      void deleteCpuOverload() { this->cpuOverload_ = nullptr;};
      inline string getCpuOverload() const { DARABONBA_PTR_GET_DEFAULT(cpuOverload_, "") };
      inline DescribePolicyGroups& setCpuOverload(string cpuOverload) { DARABONBA_PTR_SET_VALUE(cpuOverload_, cpuOverload) };


      // cpuProcessors Field Functions 
      bool hasCpuProcessors() const { return this->cpuProcessors_ != nullptr;};
      void deleteCpuProcessors() { this->cpuProcessors_ = nullptr;};
      inline const vector<string> & getCpuProcessors() const { DARABONBA_PTR_GET_CONST(cpuProcessors_, vector<string>) };
      inline vector<string> getCpuProcessors() { DARABONBA_PTR_GET(cpuProcessors_, vector<string>) };
      inline DescribePolicyGroups& setCpuProcessors(const vector<string> & cpuProcessors) { DARABONBA_PTR_SET_VALUE(cpuProcessors_, cpuProcessors) };
      inline DescribePolicyGroups& setCpuProcessors(vector<string> && cpuProcessors) { DARABONBA_PTR_SET_RVALUE(cpuProcessors_, cpuProcessors) };


      // cpuProtectedMode Field Functions 
      bool hasCpuProtectedMode() const { return this->cpuProtectedMode_ != nullptr;};
      void deleteCpuProtectedMode() { this->cpuProtectedMode_ = nullptr;};
      inline string getCpuProtectedMode() const { DARABONBA_PTR_GET_DEFAULT(cpuProtectedMode_, "") };
      inline DescribePolicyGroups& setCpuProtectedMode(string cpuProtectedMode) { DARABONBA_PTR_SET_VALUE(cpuProtectedMode_, cpuProtectedMode) };


      // cpuRateLimit Field Functions 
      bool hasCpuRateLimit() const { return this->cpuRateLimit_ != nullptr;};
      void deleteCpuRateLimit() { this->cpuRateLimit_ = nullptr;};
      inline int32_t getCpuRateLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuRateLimit_, 0) };
      inline DescribePolicyGroups& setCpuRateLimit(int32_t cpuRateLimit) { DARABONBA_PTR_SET_VALUE(cpuRateLimit_, cpuRateLimit) };


      // cpuSampleDuration Field Functions 
      bool hasCpuSampleDuration() const { return this->cpuSampleDuration_ != nullptr;};
      void deleteCpuSampleDuration() { this->cpuSampleDuration_ = nullptr;};
      inline int32_t getCpuSampleDuration() const { DARABONBA_PTR_GET_DEFAULT(cpuSampleDuration_, 0) };
      inline DescribePolicyGroups& setCpuSampleDuration(int32_t cpuSampleDuration) { DARABONBA_PTR_SET_VALUE(cpuSampleDuration_, cpuSampleDuration) };


      // cpuSingleRateLimit Field Functions 
      bool hasCpuSingleRateLimit() const { return this->cpuSingleRateLimit_ != nullptr;};
      void deleteCpuSingleRateLimit() { this->cpuSingleRateLimit_ = nullptr;};
      inline int32_t getCpuSingleRateLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuSingleRateLimit_, 0) };
      inline DescribePolicyGroups& setCpuSingleRateLimit(int32_t cpuSingleRateLimit) { DARABONBA_PTR_SET_VALUE(cpuSingleRateLimit_, cpuSingleRateLimit) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DescribePolicyGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // desktopCount Field Functions 
      bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
      void deleteDesktopCount() { this->desktopCount_ = nullptr;};
      inline int32_t getDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0) };
      inline DescribePolicyGroups& setDesktopCount(int32_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


      // desktopGroupCount Field Functions 
      bool hasDesktopGroupCount() const { return this->desktopGroupCount_ != nullptr;};
      void deleteDesktopGroupCount() { this->desktopGroupCount_ = nullptr;};
      inline int32_t getDesktopGroupCount() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupCount_, 0) };
      inline DescribePolicyGroups& setDesktopGroupCount(int32_t desktopGroupCount) { DARABONBA_PTR_SET_VALUE(desktopGroupCount_, desktopGroupCount) };


      // deviceConnectHint Field Functions 
      bool hasDeviceConnectHint() const { return this->deviceConnectHint_ != nullptr;};
      void deleteDeviceConnectHint() { this->deviceConnectHint_ = nullptr;};
      inline string getDeviceConnectHint() const { DARABONBA_PTR_GET_DEFAULT(deviceConnectHint_, "") };
      inline DescribePolicyGroups& setDeviceConnectHint(string deviceConnectHint) { DARABONBA_PTR_SET_VALUE(deviceConnectHint_, deviceConnectHint) };


      // deviceRedirects Field Functions 
      bool hasDeviceRedirects() const { return this->deviceRedirects_ != nullptr;};
      void deleteDeviceRedirects() { this->deviceRedirects_ = nullptr;};
      inline const vector<DescribePolicyGroups::DeviceRedirects> & getDeviceRedirects() const { DARABONBA_PTR_GET_CONST(deviceRedirects_, vector<DescribePolicyGroups::DeviceRedirects>) };
      inline vector<DescribePolicyGroups::DeviceRedirects> getDeviceRedirects() { DARABONBA_PTR_GET(deviceRedirects_, vector<DescribePolicyGroups::DeviceRedirects>) };
      inline DescribePolicyGroups& setDeviceRedirects(const vector<DescribePolicyGroups::DeviceRedirects> & deviceRedirects) { DARABONBA_PTR_SET_VALUE(deviceRedirects_, deviceRedirects) };
      inline DescribePolicyGroups& setDeviceRedirects(vector<DescribePolicyGroups::DeviceRedirects> && deviceRedirects) { DARABONBA_PTR_SET_RVALUE(deviceRedirects_, deviceRedirects) };


      // deviceRules Field Functions 
      bool hasDeviceRules() const { return this->deviceRules_ != nullptr;};
      void deleteDeviceRules() { this->deviceRules_ = nullptr;};
      inline const vector<DescribePolicyGroups::DeviceRules> & getDeviceRules() const { DARABONBA_PTR_GET_CONST(deviceRules_, vector<DescribePolicyGroups::DeviceRules>) };
      inline vector<DescribePolicyGroups::DeviceRules> getDeviceRules() { DARABONBA_PTR_GET(deviceRules_, vector<DescribePolicyGroups::DeviceRules>) };
      inline DescribePolicyGroups& setDeviceRules(const vector<DescribePolicyGroups::DeviceRules> & deviceRules) { DARABONBA_PTR_SET_VALUE(deviceRules_, deviceRules) };
      inline DescribePolicyGroups& setDeviceRules(vector<DescribePolicyGroups::DeviceRules> && deviceRules) { DARABONBA_PTR_SET_RVALUE(deviceRules_, deviceRules) };


      // diskOverload Field Functions 
      bool hasDiskOverload() const { return this->diskOverload_ != nullptr;};
      void deleteDiskOverload() { this->diskOverload_ = nullptr;};
      inline string getDiskOverload() const { DARABONBA_PTR_GET_DEFAULT(diskOverload_, "") };
      inline DescribePolicyGroups& setDiskOverload(string diskOverload) { DARABONBA_PTR_SET_VALUE(diskOverload_, diskOverload) };


      // displayMode Field Functions 
      bool hasDisplayMode() const { return this->displayMode_ != nullptr;};
      void deleteDisplayMode() { this->displayMode_ = nullptr;};
      inline string getDisplayMode() const { DARABONBA_PTR_GET_DEFAULT(displayMode_, "") };
      inline DescribePolicyGroups& setDisplayMode(string displayMode) { DARABONBA_PTR_SET_VALUE(displayMode_, displayMode) };


      // domainList Field Functions 
      bool hasDomainList() const { return this->domainList_ != nullptr;};
      void deleteDomainList() { this->domainList_ = nullptr;};
      inline string getDomainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
      inline DescribePolicyGroups& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


      // domainResolveRule Field Functions 
      bool hasDomainResolveRule() const { return this->domainResolveRule_ != nullptr;};
      void deleteDomainResolveRule() { this->domainResolveRule_ = nullptr;};
      inline const vector<DescribePolicyGroups::DomainResolveRule> & getDomainResolveRule() const { DARABONBA_PTR_GET_CONST(domainResolveRule_, vector<DescribePolicyGroups::DomainResolveRule>) };
      inline vector<DescribePolicyGroups::DomainResolveRule> getDomainResolveRule() { DARABONBA_PTR_GET(domainResolveRule_, vector<DescribePolicyGroups::DomainResolveRule>) };
      inline DescribePolicyGroups& setDomainResolveRule(const vector<DescribePolicyGroups::DomainResolveRule> & domainResolveRule) { DARABONBA_PTR_SET_VALUE(domainResolveRule_, domainResolveRule) };
      inline DescribePolicyGroups& setDomainResolveRule(vector<DescribePolicyGroups::DomainResolveRule> && domainResolveRule) { DARABONBA_PTR_SET_RVALUE(domainResolveRule_, domainResolveRule) };


      // domainResolveRuleType Field Functions 
      bool hasDomainResolveRuleType() const { return this->domainResolveRuleType_ != nullptr;};
      void deleteDomainResolveRuleType() { this->domainResolveRuleType_ = nullptr;};
      inline string getDomainResolveRuleType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveRuleType_, "") };
      inline DescribePolicyGroups& setDomainResolveRuleType(string domainResolveRuleType) { DARABONBA_PTR_SET_VALUE(domainResolveRuleType_, domainResolveRuleType) };


      // edsCount Field Functions 
      bool hasEdsCount() const { return this->edsCount_ != nullptr;};
      void deleteEdsCount() { this->edsCount_ = nullptr;};
      inline int32_t getEdsCount() const { DARABONBA_PTR_GET_DEFAULT(edsCount_, 0) };
      inline DescribePolicyGroups& setEdsCount(int32_t edsCount) { DARABONBA_PTR_SET_VALUE(edsCount_, edsCount) };


      // endUserApplyAdminCoordinate Field Functions 
      bool hasEndUserApplyAdminCoordinate() const { return this->endUserApplyAdminCoordinate_ != nullptr;};
      void deleteEndUserApplyAdminCoordinate() { this->endUserApplyAdminCoordinate_ = nullptr;};
      inline string getEndUserApplyAdminCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserApplyAdminCoordinate_, "") };
      inline DescribePolicyGroups& setEndUserApplyAdminCoordinate(string endUserApplyAdminCoordinate) { DARABONBA_PTR_SET_VALUE(endUserApplyAdminCoordinate_, endUserApplyAdminCoordinate) };


      // endUserCount Field Functions 
      bool hasEndUserCount() const { return this->endUserCount_ != nullptr;};
      void deleteEndUserCount() { this->endUserCount_ = nullptr;};
      inline string getEndUserCount() const { DARABONBA_PTR_GET_DEFAULT(endUserCount_, "") };
      inline DescribePolicyGroups& setEndUserCount(string endUserCount) { DARABONBA_PTR_SET_VALUE(endUserCount_, endUserCount) };


      // endUserGroupCoordinate Field Functions 
      bool hasEndUserGroupCoordinate() const { return this->endUserGroupCoordinate_ != nullptr;};
      void deleteEndUserGroupCoordinate() { this->endUserGroupCoordinate_ = nullptr;};
      inline string getEndUserGroupCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserGroupCoordinate_, "") };
      inline DescribePolicyGroups& setEndUserGroupCoordinate(string endUserGroupCoordinate) { DARABONBA_PTR_SET_VALUE(endUserGroupCoordinate_, endUserGroupCoordinate) };


      // externalDrive Field Functions 
      bool hasExternalDrive() const { return this->externalDrive_ != nullptr;};
      void deleteExternalDrive() { this->externalDrive_ = nullptr;};
      inline string getExternalDrive() const { DARABONBA_PTR_GET_DEFAULT(externalDrive_, "") };
      inline DescribePolicyGroups& setExternalDrive(string externalDrive) { DARABONBA_PTR_SET_VALUE(externalDrive_, externalDrive) };


      // fileMigrate Field Functions 
      bool hasFileMigrate() const { return this->fileMigrate_ != nullptr;};
      void deleteFileMigrate() { this->fileMigrate_ = nullptr;};
      inline string getFileMigrate() const { DARABONBA_PTR_GET_DEFAULT(fileMigrate_, "") };
      inline DescribePolicyGroups& setFileMigrate(string fileMigrate) { DARABONBA_PTR_SET_VALUE(fileMigrate_, fileMigrate) };


      // fileTransfer Field Functions 
      bool hasFileTransfer() const { return this->fileTransfer_ != nullptr;};
      void deleteFileTransfer() { this->fileTransfer_ = nullptr;};
      inline string getFileTransfer() const { DARABONBA_PTR_GET_DEFAULT(fileTransfer_, "") };
      inline DescribePolicyGroups& setFileTransfer(string fileTransfer) { DARABONBA_PTR_SET_VALUE(fileTransfer_, fileTransfer) };


      // fileTransferAddress Field Functions 
      bool hasFileTransferAddress() const { return this->fileTransferAddress_ != nullptr;};
      void deleteFileTransferAddress() { this->fileTransferAddress_ = nullptr;};
      inline string getFileTransferAddress() const { DARABONBA_PTR_GET_DEFAULT(fileTransferAddress_, "") };
      inline DescribePolicyGroups& setFileTransferAddress(string fileTransferAddress) { DARABONBA_PTR_SET_VALUE(fileTransferAddress_, fileTransferAddress) };


      // fileTransferSpeed Field Functions 
      bool hasFileTransferSpeed() const { return this->fileTransferSpeed_ != nullptr;};
      void deleteFileTransferSpeed() { this->fileTransferSpeed_ = nullptr;};
      inline string getFileTransferSpeed() const { DARABONBA_PTR_GET_DEFAULT(fileTransferSpeed_, "") };
      inline DescribePolicyGroups& setFileTransferSpeed(string fileTransferSpeed) { DARABONBA_PTR_SET_VALUE(fileTransferSpeed_, fileTransferSpeed) };


      // fileTransferSpeedLocation Field Functions 
      bool hasFileTransferSpeedLocation() const { return this->fileTransferSpeedLocation_ != nullptr;};
      void deleteFileTransferSpeedLocation() { this->fileTransferSpeedLocation_ = nullptr;};
      inline string getFileTransferSpeedLocation() const { DARABONBA_PTR_GET_DEFAULT(fileTransferSpeedLocation_, "") };
      inline DescribePolicyGroups& setFileTransferSpeedLocation(string fileTransferSpeedLocation) { DARABONBA_PTR_SET_VALUE(fileTransferSpeedLocation_, fileTransferSpeedLocation) };


      // gpuAcceleration Field Functions 
      bool hasGpuAcceleration() const { return this->gpuAcceleration_ != nullptr;};
      void deleteGpuAcceleration() { this->gpuAcceleration_ = nullptr;};
      inline string getGpuAcceleration() const { DARABONBA_PTR_GET_DEFAULT(gpuAcceleration_, "") };
      inline DescribePolicyGroups& setGpuAcceleration(string gpuAcceleration) { DARABONBA_PTR_SET_VALUE(gpuAcceleration_, gpuAcceleration) };


      // hoverConfigMsg Field Functions 
      bool hasHoverConfigMsg() const { return this->hoverConfigMsg_ != nullptr;};
      void deleteHoverConfigMsg() { this->hoverConfigMsg_ = nullptr;};
      inline string getHoverConfigMsg() const { DARABONBA_PTR_GET_DEFAULT(hoverConfigMsg_, "") };
      inline DescribePolicyGroups& setHoverConfigMsg(string hoverConfigMsg) { DARABONBA_PTR_SET_VALUE(hoverConfigMsg_, hoverConfigMsg) };


      // hoverHibernate Field Functions 
      bool hasHoverHibernate() const { return this->hoverHibernate_ != nullptr;};
      void deleteHoverHibernate() { this->hoverHibernate_ = nullptr;};
      inline string getHoverHibernate() const { DARABONBA_PTR_GET_DEFAULT(hoverHibernate_, "") };
      inline DescribePolicyGroups& setHoverHibernate(string hoverHibernate) { DARABONBA_PTR_SET_VALUE(hoverHibernate_, hoverHibernate) };


      // hoverRestart Field Functions 
      bool hasHoverRestart() const { return this->hoverRestart_ != nullptr;};
      void deleteHoverRestart() { this->hoverRestart_ = nullptr;};
      inline string getHoverRestart() const { DARABONBA_PTR_GET_DEFAULT(hoverRestart_, "") };
      inline DescribePolicyGroups& setHoverRestart(string hoverRestart) { DARABONBA_PTR_SET_VALUE(hoverRestart_, hoverRestart) };


      // hoverShutdown Field Functions 
      bool hasHoverShutdown() const { return this->hoverShutdown_ != nullptr;};
      void deleteHoverShutdown() { this->hoverShutdown_ = nullptr;};
      inline string getHoverShutdown() const { DARABONBA_PTR_GET_DEFAULT(hoverShutdown_, "") };
      inline DescribePolicyGroups& setHoverShutdown(string hoverShutdown) { DARABONBA_PTR_SET_VALUE(hoverShutdown_, hoverShutdown) };


      // html5Access Field Functions 
      bool hasHtml5Access() const { return this->html5Access_ != nullptr;};
      void deleteHtml5Access() { this->html5Access_ = nullptr;};
      inline string getHtml5Access() const { DARABONBA_PTR_GET_DEFAULT(html5Access_, "") };
      inline DescribePolicyGroups& setHtml5Access(string html5Access) { DARABONBA_PTR_SET_VALUE(html5Access_, html5Access) };


      // html5FileTransfer Field Functions 
      bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
      void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
      inline string getHtml5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
      inline DescribePolicyGroups& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


      // internetCommunicationProtocol Field Functions 
      bool hasInternetCommunicationProtocol() const { return this->internetCommunicationProtocol_ != nullptr;};
      void deleteInternetCommunicationProtocol() { this->internetCommunicationProtocol_ = nullptr;};
      inline string getInternetCommunicationProtocol() const { DARABONBA_PTR_GET_DEFAULT(internetCommunicationProtocol_, "") };
      inline DescribePolicyGroups& setInternetCommunicationProtocol(string internetCommunicationProtocol) { DARABONBA_PTR_SET_VALUE(internetCommunicationProtocol_, internetCommunicationProtocol) };


      // internetPrinter Field Functions 
      bool hasInternetPrinter() const { return this->internetPrinter_ != nullptr;};
      void deleteInternetPrinter() { this->internetPrinter_ = nullptr;};
      inline string getInternetPrinter() const { DARABONBA_PTR_GET_DEFAULT(internetPrinter_, "") };
      inline DescribePolicyGroups& setInternetPrinter(string internetPrinter) { DARABONBA_PTR_SET_VALUE(internetPrinter_, internetPrinter) };


      // keyboardControl Field Functions 
      bool hasKeyboardControl() const { return this->keyboardControl_ != nullptr;};
      void deleteKeyboardControl() { this->keyboardControl_ = nullptr;};
      inline string getKeyboardControl() const { DARABONBA_PTR_GET_DEFAULT(keyboardControl_, "") };
      inline DescribePolicyGroups& setKeyboardControl(string keyboardControl) { DARABONBA_PTR_SET_VALUE(keyboardControl_, keyboardControl) };


      // localDrive Field Functions 
      bool hasLocalDrive() const { return this->localDrive_ != nullptr;};
      void deleteLocalDrive() { this->localDrive_ = nullptr;};
      inline string getLocalDrive() const { DARABONBA_PTR_GET_DEFAULT(localDrive_, "") };
      inline DescribePolicyGroups& setLocalDrive(string localDrive) { DARABONBA_PTR_SET_VALUE(localDrive_, localDrive) };


      // maxReconnectTime Field Functions 
      bool hasMaxReconnectTime() const { return this->maxReconnectTime_ != nullptr;};
      void deleteMaxReconnectTime() { this->maxReconnectTime_ = nullptr;};
      inline int32_t getMaxReconnectTime() const { DARABONBA_PTR_GET_DEFAULT(maxReconnectTime_, 0) };
      inline DescribePolicyGroups& setMaxReconnectTime(int32_t maxReconnectTime) { DARABONBA_PTR_SET_VALUE(maxReconnectTime_, maxReconnectTime) };


      // memoryDownGradeDuration Field Functions 
      bool hasMemoryDownGradeDuration() const { return this->memoryDownGradeDuration_ != nullptr;};
      void deleteMemoryDownGradeDuration() { this->memoryDownGradeDuration_ = nullptr;};
      inline int32_t getMemoryDownGradeDuration() const { DARABONBA_PTR_GET_DEFAULT(memoryDownGradeDuration_, 0) };
      inline DescribePolicyGroups& setMemoryDownGradeDuration(int32_t memoryDownGradeDuration) { DARABONBA_PTR_SET_VALUE(memoryDownGradeDuration_, memoryDownGradeDuration) };


      // memoryOverload Field Functions 
      bool hasMemoryOverload() const { return this->memoryOverload_ != nullptr;};
      void deleteMemoryOverload() { this->memoryOverload_ = nullptr;};
      inline string getMemoryOverload() const { DARABONBA_PTR_GET_DEFAULT(memoryOverload_, "") };
      inline DescribePolicyGroups& setMemoryOverload(string memoryOverload) { DARABONBA_PTR_SET_VALUE(memoryOverload_, memoryOverload) };


      // memoryProcessors Field Functions 
      bool hasMemoryProcessors() const { return this->memoryProcessors_ != nullptr;};
      void deleteMemoryProcessors() { this->memoryProcessors_ = nullptr;};
      inline const vector<string> & getMemoryProcessors() const { DARABONBA_PTR_GET_CONST(memoryProcessors_, vector<string>) };
      inline vector<string> getMemoryProcessors() { DARABONBA_PTR_GET(memoryProcessors_, vector<string>) };
      inline DescribePolicyGroups& setMemoryProcessors(const vector<string> & memoryProcessors) { DARABONBA_PTR_SET_VALUE(memoryProcessors_, memoryProcessors) };
      inline DescribePolicyGroups& setMemoryProcessors(vector<string> && memoryProcessors) { DARABONBA_PTR_SET_RVALUE(memoryProcessors_, memoryProcessors) };


      // memoryProtectedMode Field Functions 
      bool hasMemoryProtectedMode() const { return this->memoryProtectedMode_ != nullptr;};
      void deleteMemoryProtectedMode() { this->memoryProtectedMode_ = nullptr;};
      inline string getMemoryProtectedMode() const { DARABONBA_PTR_GET_DEFAULT(memoryProtectedMode_, "") };
      inline DescribePolicyGroups& setMemoryProtectedMode(string memoryProtectedMode) { DARABONBA_PTR_SET_VALUE(memoryProtectedMode_, memoryProtectedMode) };


      // memoryRateLimit Field Functions 
      bool hasMemoryRateLimit() const { return this->memoryRateLimit_ != nullptr;};
      void deleteMemoryRateLimit() { this->memoryRateLimit_ = nullptr;};
      inline int32_t getMemoryRateLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryRateLimit_, 0) };
      inline DescribePolicyGroups& setMemoryRateLimit(int32_t memoryRateLimit) { DARABONBA_PTR_SET_VALUE(memoryRateLimit_, memoryRateLimit) };


      // memorySampleDuration Field Functions 
      bool hasMemorySampleDuration() const { return this->memorySampleDuration_ != nullptr;};
      void deleteMemorySampleDuration() { this->memorySampleDuration_ = nullptr;};
      inline int32_t getMemorySampleDuration() const { DARABONBA_PTR_GET_DEFAULT(memorySampleDuration_, 0) };
      inline DescribePolicyGroups& setMemorySampleDuration(int32_t memorySampleDuration) { DARABONBA_PTR_SET_VALUE(memorySampleDuration_, memorySampleDuration) };


      // memorySingleRateLimit Field Functions 
      bool hasMemorySingleRateLimit() const { return this->memorySingleRateLimit_ != nullptr;};
      void deleteMemorySingleRateLimit() { this->memorySingleRateLimit_ = nullptr;};
      inline int32_t getMemorySingleRateLimit() const { DARABONBA_PTR_GET_DEFAULT(memorySingleRateLimit_, 0) };
      inline DescribePolicyGroups& setMemorySingleRateLimit(int32_t memorySingleRateLimit) { DARABONBA_PTR_SET_VALUE(memorySingleRateLimit_, memorySingleRateLimit) };


      // mobileRestart Field Functions 
      bool hasMobileRestart() const { return this->mobileRestart_ != nullptr;};
      void deleteMobileRestart() { this->mobileRestart_ = nullptr;};
      inline string getMobileRestart() const { DARABONBA_PTR_GET_DEFAULT(mobileRestart_, "") };
      inline DescribePolicyGroups& setMobileRestart(string mobileRestart) { DARABONBA_PTR_SET_VALUE(mobileRestart_, mobileRestart) };


      // mobileSafeMenu Field Functions 
      bool hasMobileSafeMenu() const { return this->mobileSafeMenu_ != nullptr;};
      void deleteMobileSafeMenu() { this->mobileSafeMenu_ = nullptr;};
      inline string getMobileSafeMenu() const { DARABONBA_PTR_GET_DEFAULT(mobileSafeMenu_, "") };
      inline DescribePolicyGroups& setMobileSafeMenu(string mobileSafeMenu) { DARABONBA_PTR_SET_VALUE(mobileSafeMenu_, mobileSafeMenu) };


      // mobileShutdown Field Functions 
      bool hasMobileShutdown() const { return this->mobileShutdown_ != nullptr;};
      void deleteMobileShutdown() { this->mobileShutdown_ = nullptr;};
      inline string getMobileShutdown() const { DARABONBA_PTR_GET_DEFAULT(mobileShutdown_, "") };
      inline DescribePolicyGroups& setMobileShutdown(string mobileShutdown) { DARABONBA_PTR_SET_VALUE(mobileShutdown_, mobileShutdown) };


      // mobileWuyingKeeper Field Functions 
      bool hasMobileWuyingKeeper() const { return this->mobileWuyingKeeper_ != nullptr;};
      void deleteMobileWuyingKeeper() { this->mobileWuyingKeeper_ = nullptr;};
      inline string getMobileWuyingKeeper() const { DARABONBA_PTR_GET_DEFAULT(mobileWuyingKeeper_, "") };
      inline DescribePolicyGroups& setMobileWuyingKeeper(string mobileWuyingKeeper) { DARABONBA_PTR_SET_VALUE(mobileWuyingKeeper_, mobileWuyingKeeper) };


      // mobileWyAssistant Field Functions 
      bool hasMobileWyAssistant() const { return this->mobileWyAssistant_ != nullptr;};
      void deleteMobileWyAssistant() { this->mobileWyAssistant_ = nullptr;};
      inline string getMobileWyAssistant() const { DARABONBA_PTR_GET_DEFAULT(mobileWyAssistant_, "") };
      inline DescribePolicyGroups& setMobileWyAssistant(string mobileWyAssistant) { DARABONBA_PTR_SET_VALUE(mobileWyAssistant_, mobileWyAssistant) };


      // modelLibrary Field Functions 
      bool hasModelLibrary() const { return this->modelLibrary_ != nullptr;};
      void deleteModelLibrary() { this->modelLibrary_ = nullptr;};
      inline string getModelLibrary() const { DARABONBA_PTR_GET_DEFAULT(modelLibrary_, "") };
      inline DescribePolicyGroups& setModelLibrary(string modelLibrary) { DARABONBA_PTR_SET_VALUE(modelLibrary_, modelLibrary) };


      // multiScreen Field Functions 
      bool hasMultiScreen() const { return this->multiScreen_ != nullptr;};
      void deleteMultiScreen() { this->multiScreen_ = nullptr;};
      inline string getMultiScreen() const { DARABONBA_PTR_GET_DEFAULT(multiScreen_, "") };
      inline DescribePolicyGroups& setMultiScreen(string multiScreen) { DARABONBA_PTR_SET_VALUE(multiScreen_, multiScreen) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DescribePolicyGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // netRedirect Field Functions 
      bool hasNetRedirect() const { return this->netRedirect_ != nullptr;};
      void deleteNetRedirect() { this->netRedirect_ = nullptr;};
      inline string getNetRedirect() const { DARABONBA_PTR_GET_DEFAULT(netRedirect_, "") };
      inline DescribePolicyGroups& setNetRedirect(string netRedirect) { DARABONBA_PTR_SET_VALUE(netRedirect_, netRedirect) };


      // netRedirectRule Field Functions 
      bool hasNetRedirectRule() const { return this->netRedirectRule_ != nullptr;};
      void deleteNetRedirectRule() { this->netRedirectRule_ = nullptr;};
      inline const vector<DescribePolicyGroups::NetRedirectRule> & getNetRedirectRule() const { DARABONBA_PTR_GET_CONST(netRedirectRule_, vector<DescribePolicyGroups::NetRedirectRule>) };
      inline vector<DescribePolicyGroups::NetRedirectRule> getNetRedirectRule() { DARABONBA_PTR_GET(netRedirectRule_, vector<DescribePolicyGroups::NetRedirectRule>) };
      inline DescribePolicyGroups& setNetRedirectRule(const vector<DescribePolicyGroups::NetRedirectRule> & netRedirectRule) { DARABONBA_PTR_SET_VALUE(netRedirectRule_, netRedirectRule) };
      inline DescribePolicyGroups& setNetRedirectRule(vector<DescribePolicyGroups::NetRedirectRule> && netRedirectRule) { DARABONBA_PTR_SET_RVALUE(netRedirectRule_, netRedirectRule) };


      // networkPrinter Field Functions 
      bool hasNetworkPrinter() const { return this->networkPrinter_ != nullptr;};
      void deleteNetworkPrinter() { this->networkPrinter_ = nullptr;};
      inline string getNetworkPrinter() const { DARABONBA_PTR_GET_DEFAULT(networkPrinter_, "") };
      inline DescribePolicyGroups& setNetworkPrinter(string networkPrinter) { DARABONBA_PTR_SET_VALUE(networkPrinter_, networkPrinter) };


      // organizationCount Field Functions 
      bool hasOrganizationCount() const { return this->organizationCount_ != nullptr;};
      void deleteOrganizationCount() { this->organizationCount_ = nullptr;};
      inline string getOrganizationCount() const { DARABONBA_PTR_GET_DEFAULT(organizationCount_, "") };
      inline DescribePolicyGroups& setOrganizationCount(string organizationCount) { DARABONBA_PTR_SET_VALUE(organizationCount_, organizationCount) };


      // policyGroupId Field Functions 
      bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
      void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
      inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
      inline DescribePolicyGroups& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


      // policyGroupType Field Functions 
      bool hasPolicyGroupType() const { return this->policyGroupType_ != nullptr;};
      void deletePolicyGroupType() { this->policyGroupType_ = nullptr;};
      inline string getPolicyGroupType() const { DARABONBA_PTR_GET_DEFAULT(policyGroupType_, "") };
      inline DescribePolicyGroups& setPolicyGroupType(string policyGroupType) { DARABONBA_PTR_SET_VALUE(policyGroupType_, policyGroupType) };


      // policyStatus Field Functions 
      bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
      void deletePolicyStatus() { this->policyStatus_ = nullptr;};
      inline string getPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
      inline DescribePolicyGroups& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


      // portProxy Field Functions 
      bool hasPortProxy() const { return this->portProxy_ != nullptr;};
      void deletePortProxy() { this->portProxy_ = nullptr;};
      inline string getPortProxy() const { DARABONBA_PTR_GET_DEFAULT(portProxy_, "") };
      inline DescribePolicyGroups& setPortProxy(string portProxy) { DARABONBA_PTR_SET_VALUE(portProxy_, portProxy) };


      // preemptLogin Field Functions 
      bool hasPreemptLogin() const { return this->preemptLogin_ != nullptr;};
      void deletePreemptLogin() { this->preemptLogin_ = nullptr;};
      inline string getPreemptLogin() const { DARABONBA_PTR_GET_DEFAULT(preemptLogin_, "") };
      inline DescribePolicyGroups& setPreemptLogin(string preemptLogin) { DARABONBA_PTR_SET_VALUE(preemptLogin_, preemptLogin) };


      // preemptLoginUsers Field Functions 
      bool hasPreemptLoginUsers() const { return this->preemptLoginUsers_ != nullptr;};
      void deletePreemptLoginUsers() { this->preemptLoginUsers_ = nullptr;};
      inline const vector<string> & getPreemptLoginUsers() const { DARABONBA_PTR_GET_CONST(preemptLoginUsers_, vector<string>) };
      inline vector<string> getPreemptLoginUsers() { DARABONBA_PTR_GET(preemptLoginUsers_, vector<string>) };
      inline DescribePolicyGroups& setPreemptLoginUsers(const vector<string> & preemptLoginUsers) { DARABONBA_PTR_SET_VALUE(preemptLoginUsers_, preemptLoginUsers) };
      inline DescribePolicyGroups& setPreemptLoginUsers(vector<string> && preemptLoginUsers) { DARABONBA_PTR_SET_RVALUE(preemptLoginUsers_, preemptLoginUsers) };


      // printerRedirection Field Functions 
      bool hasPrinterRedirection() const { return this->printerRedirection_ != nullptr;};
      void deletePrinterRedirection() { this->printerRedirection_ = nullptr;};
      inline string getPrinterRedirection() const { DARABONBA_PTR_GET_DEFAULT(printerRedirection_, "") };
      inline DescribePolicyGroups& setPrinterRedirection(string printerRedirection) { DARABONBA_PTR_SET_VALUE(printerRedirection_, printerRedirection) };


      // qualityEnhancement Field Functions 
      bool hasQualityEnhancement() const { return this->qualityEnhancement_ != nullptr;};
      void deleteQualityEnhancement() { this->qualityEnhancement_ = nullptr;};
      inline string getQualityEnhancement() const { DARABONBA_PTR_GET_DEFAULT(qualityEnhancement_, "") };
      inline DescribePolicyGroups& setQualityEnhancement(string qualityEnhancement) { DARABONBA_PTR_SET_VALUE(qualityEnhancement_, qualityEnhancement) };


      // recordContent Field Functions 
      bool hasRecordContent() const { return this->recordContent_ != nullptr;};
      void deleteRecordContent() { this->recordContent_ = nullptr;};
      inline string getRecordContent() const { DARABONBA_PTR_GET_DEFAULT(recordContent_, "") };
      inline DescribePolicyGroups& setRecordContent(string recordContent) { DARABONBA_PTR_SET_VALUE(recordContent_, recordContent) };


      // recordContentExpires Field Functions 
      bool hasRecordContentExpires() const { return this->recordContentExpires_ != nullptr;};
      void deleteRecordContentExpires() { this->recordContentExpires_ = nullptr;};
      inline int64_t getRecordContentExpires() const { DARABONBA_PTR_GET_DEFAULT(recordContentExpires_, 0L) };
      inline DescribePolicyGroups& setRecordContentExpires(int64_t recordContentExpires) { DARABONBA_PTR_SET_VALUE(recordContentExpires_, recordContentExpires) };


      // recordEventDuration Field Functions 
      bool hasRecordEventDuration() const { return this->recordEventDuration_ != nullptr;};
      void deleteRecordEventDuration() { this->recordEventDuration_ = nullptr;};
      inline int32_t getRecordEventDuration() const { DARABONBA_PTR_GET_DEFAULT(recordEventDuration_, 0) };
      inline DescribePolicyGroups& setRecordEventDuration(int32_t recordEventDuration) { DARABONBA_PTR_SET_VALUE(recordEventDuration_, recordEventDuration) };


      // recordEventFileExts Field Functions 
      bool hasRecordEventFileExts() const { return this->recordEventFileExts_ != nullptr;};
      void deleteRecordEventFileExts() { this->recordEventFileExts_ = nullptr;};
      inline const vector<string> & getRecordEventFileExts() const { DARABONBA_PTR_GET_CONST(recordEventFileExts_, vector<string>) };
      inline vector<string> getRecordEventFileExts() { DARABONBA_PTR_GET(recordEventFileExts_, vector<string>) };
      inline DescribePolicyGroups& setRecordEventFileExts(const vector<string> & recordEventFileExts) { DARABONBA_PTR_SET_VALUE(recordEventFileExts_, recordEventFileExts) };
      inline DescribePolicyGroups& setRecordEventFileExts(vector<string> && recordEventFileExts) { DARABONBA_PTR_SET_RVALUE(recordEventFileExts_, recordEventFileExts) };


      // recordEventFilePaths Field Functions 
      bool hasRecordEventFilePaths() const { return this->recordEventFilePaths_ != nullptr;};
      void deleteRecordEventFilePaths() { this->recordEventFilePaths_ = nullptr;};
      inline const vector<string> & getRecordEventFilePaths() const { DARABONBA_PTR_GET_CONST(recordEventFilePaths_, vector<string>) };
      inline vector<string> getRecordEventFilePaths() { DARABONBA_PTR_GET(recordEventFilePaths_, vector<string>) };
      inline DescribePolicyGroups& setRecordEventFilePaths(const vector<string> & recordEventFilePaths) { DARABONBA_PTR_SET_VALUE(recordEventFilePaths_, recordEventFilePaths) };
      inline DescribePolicyGroups& setRecordEventFilePaths(vector<string> && recordEventFilePaths) { DARABONBA_PTR_SET_RVALUE(recordEventFilePaths_, recordEventFilePaths) };


      // recordEventLevels Field Functions 
      bool hasRecordEventLevels() const { return this->recordEventLevels_ != nullptr;};
      void deleteRecordEventLevels() { this->recordEventLevels_ = nullptr;};
      inline const vector<DescribePolicyGroups::RecordEventLevels> & getRecordEventLevels() const { DARABONBA_PTR_GET_CONST(recordEventLevels_, vector<DescribePolicyGroups::RecordEventLevels>) };
      inline vector<DescribePolicyGroups::RecordEventLevels> getRecordEventLevels() { DARABONBA_PTR_GET(recordEventLevels_, vector<DescribePolicyGroups::RecordEventLevels>) };
      inline DescribePolicyGroups& setRecordEventLevels(const vector<DescribePolicyGroups::RecordEventLevels> & recordEventLevels) { DARABONBA_PTR_SET_VALUE(recordEventLevels_, recordEventLevels) };
      inline DescribePolicyGroups& setRecordEventLevels(vector<DescribePolicyGroups::RecordEventLevels> && recordEventLevels) { DARABONBA_PTR_SET_RVALUE(recordEventLevels_, recordEventLevels) };


      // recordEventRegisters Field Functions 
      bool hasRecordEventRegisters() const { return this->recordEventRegisters_ != nullptr;};
      void deleteRecordEventRegisters() { this->recordEventRegisters_ = nullptr;};
      inline const vector<string> & getRecordEventRegisters() const { DARABONBA_PTR_GET_CONST(recordEventRegisters_, vector<string>) };
      inline vector<string> getRecordEventRegisters() { DARABONBA_PTR_GET(recordEventRegisters_, vector<string>) };
      inline DescribePolicyGroups& setRecordEventRegisters(const vector<string> & recordEventRegisters) { DARABONBA_PTR_SET_VALUE(recordEventRegisters_, recordEventRegisters) };
      inline DescribePolicyGroups& setRecordEventRegisters(vector<string> && recordEventRegisters) { DARABONBA_PTR_SET_RVALUE(recordEventRegisters_, recordEventRegisters) };


      // recording Field Functions 
      bool hasRecording() const { return this->recording_ != nullptr;};
      void deleteRecording() { this->recording_ = nullptr;};
      inline string getRecording() const { DARABONBA_PTR_GET_DEFAULT(recording_, "") };
      inline DescribePolicyGroups& setRecording(string recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };


      // recordingAudio Field Functions 
      bool hasRecordingAudio() const { return this->recordingAudio_ != nullptr;};
      void deleteRecordingAudio() { this->recordingAudio_ = nullptr;};
      inline string getRecordingAudio() const { DARABONBA_PTR_GET_DEFAULT(recordingAudio_, "") };
      inline DescribePolicyGroups& setRecordingAudio(string recordingAudio) { DARABONBA_PTR_SET_VALUE(recordingAudio_, recordingAudio) };


      // recordingDuration Field Functions 
      bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
      void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
      inline int32_t getRecordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0) };
      inline DescribePolicyGroups& setRecordingDuration(int32_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


      // recordingEndTime Field Functions 
      bool hasRecordingEndTime() const { return this->recordingEndTime_ != nullptr;};
      void deleteRecordingEndTime() { this->recordingEndTime_ = nullptr;};
      inline string getRecordingEndTime() const { DARABONBA_PTR_GET_DEFAULT(recordingEndTime_, "") };
      inline DescribePolicyGroups& setRecordingEndTime(string recordingEndTime) { DARABONBA_PTR_SET_VALUE(recordingEndTime_, recordingEndTime) };


      // recordingExpires Field Functions 
      bool hasRecordingExpires() const { return this->recordingExpires_ != nullptr;};
      void deleteRecordingExpires() { this->recordingExpires_ = nullptr;};
      inline int64_t getRecordingExpires() const { DARABONBA_PTR_GET_DEFAULT(recordingExpires_, 0L) };
      inline DescribePolicyGroups& setRecordingExpires(int64_t recordingExpires) { DARABONBA_PTR_SET_VALUE(recordingExpires_, recordingExpires) };


      // recordingFps Field Functions 
      bool hasRecordingFps() const { return this->recordingFps_ != nullptr;};
      void deleteRecordingFps() { this->recordingFps_ = nullptr;};
      inline int64_t getRecordingFps() const { DARABONBA_PTR_GET_DEFAULT(recordingFps_, 0L) };
      inline DescribePolicyGroups& setRecordingFps(int64_t recordingFps) { DARABONBA_PTR_SET_VALUE(recordingFps_, recordingFps) };


      // recordingStartTime Field Functions 
      bool hasRecordingStartTime() const { return this->recordingStartTime_ != nullptr;};
      void deleteRecordingStartTime() { this->recordingStartTime_ = nullptr;};
      inline string getRecordingStartTime() const { DARABONBA_PTR_GET_DEFAULT(recordingStartTime_, "") };
      inline DescribePolicyGroups& setRecordingStartTime(string recordingStartTime) { DARABONBA_PTR_SET_VALUE(recordingStartTime_, recordingStartTime) };


      // recordingUserNotify Field Functions 
      bool hasRecordingUserNotify() const { return this->recordingUserNotify_ != nullptr;};
      void deleteRecordingUserNotify() { this->recordingUserNotify_ = nullptr;};
      inline string getRecordingUserNotify() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotify_, "") };
      inline DescribePolicyGroups& setRecordingUserNotify(string recordingUserNotify) { DARABONBA_PTR_SET_VALUE(recordingUserNotify_, recordingUserNotify) };


      // recordingUserNotifyMessage Field Functions 
      bool hasRecordingUserNotifyMessage() const { return this->recordingUserNotifyMessage_ != nullptr;};
      void deleteRecordingUserNotifyMessage() { this->recordingUserNotifyMessage_ = nullptr;};
      inline string getRecordingUserNotifyMessage() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotifyMessage_, "") };
      inline DescribePolicyGroups& setRecordingUserNotifyMessage(string recordingUserNotifyMessage) { DARABONBA_PTR_SET_VALUE(recordingUserNotifyMessage_, recordingUserNotifyMessage) };


      // remoteCoordinate Field Functions 
      bool hasRemoteCoordinate() const { return this->remoteCoordinate_ != nullptr;};
      void deleteRemoteCoordinate() { this->remoteCoordinate_ = nullptr;};
      inline string getRemoteCoordinate() const { DARABONBA_PTR_GET_DEFAULT(remoteCoordinate_, "") };
      inline DescribePolicyGroups& setRemoteCoordinate(string remoteCoordinate) { DARABONBA_PTR_SET_VALUE(remoteCoordinate_, remoteCoordinate) };


      // resetDesktop Field Functions 
      bool hasResetDesktop() const { return this->resetDesktop_ != nullptr;};
      void deleteResetDesktop() { this->resetDesktop_ = nullptr;};
      inline string getResetDesktop() const { DARABONBA_PTR_GET_DEFAULT(resetDesktop_, "") };
      inline DescribePolicyGroups& setResetDesktop(string resetDesktop) { DARABONBA_PTR_SET_VALUE(resetDesktop_, resetDesktop) };


      // resolutionDpi Field Functions 
      bool hasResolutionDpi() const { return this->resolutionDpi_ != nullptr;};
      void deleteResolutionDpi() { this->resolutionDpi_ = nullptr;};
      inline int32_t getResolutionDpi() const { DARABONBA_PTR_GET_DEFAULT(resolutionDpi_, 0) };
      inline DescribePolicyGroups& setResolutionDpi(int32_t resolutionDpi) { DARABONBA_PTR_SET_VALUE(resolutionDpi_, resolutionDpi) };


      // resolutionHeight Field Functions 
      bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
      void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
      inline int32_t getResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
      inline DescribePolicyGroups& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


      // resolutionModel Field Functions 
      bool hasResolutionModel() const { return this->resolutionModel_ != nullptr;};
      void deleteResolutionModel() { this->resolutionModel_ = nullptr;};
      inline string getResolutionModel() const { DARABONBA_PTR_GET_DEFAULT(resolutionModel_, "") };
      inline DescribePolicyGroups& setResolutionModel(string resolutionModel) { DARABONBA_PTR_SET_VALUE(resolutionModel_, resolutionModel) };


      // resolutionWidth Field Functions 
      bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
      void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
      inline int32_t getResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
      inline DescribePolicyGroups& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


      // resourceGroupCount Field Functions 
      bool hasResourceGroupCount() const { return this->resourceGroupCount_ != nullptr;};
      void deleteResourceGroupCount() { this->resourceGroupCount_ = nullptr;};
      inline int32_t getResourceGroupCount() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupCount_, 0) };
      inline DescribePolicyGroups& setResourceGroupCount(int32_t resourceGroupCount) { DARABONBA_PTR_SET_VALUE(resourceGroupCount_, resourceGroupCount) };


      // resourceRegionId Field Functions 
      bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
      void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
      inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
      inline DescribePolicyGroups& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


      // safeMenu Field Functions 
      bool hasSafeMenu() const { return this->safeMenu_ != nullptr;};
      void deleteSafeMenu() { this->safeMenu_ = nullptr;};
      inline string getSafeMenu() const { DARABONBA_PTR_GET_DEFAULT(safeMenu_, "") };
      inline DescribePolicyGroups& setSafeMenu(string safeMenu) { DARABONBA_PTR_SET_VALUE(safeMenu_, safeMenu) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline DescribePolicyGroups& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // scopeValue Field Functions 
      bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
      void deleteScopeValue() { this->scopeValue_ = nullptr;};
      inline const vector<string> & getScopeValue() const { DARABONBA_PTR_GET_CONST(scopeValue_, vector<string>) };
      inline vector<string> getScopeValue() { DARABONBA_PTR_GET(scopeValue_, vector<string>) };
      inline DescribePolicyGroups& setScopeValue(const vector<string> & scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };
      inline DescribePolicyGroups& setScopeValue(vector<string> && scopeValue) { DARABONBA_PTR_SET_RVALUE(scopeValue_, scopeValue) };


      // screenDisplayMode Field Functions 
      bool hasScreenDisplayMode() const { return this->screenDisplayMode_ != nullptr;};
      void deleteScreenDisplayMode() { this->screenDisplayMode_ = nullptr;};
      inline string getScreenDisplayMode() const { DARABONBA_PTR_GET_DEFAULT(screenDisplayMode_, "") };
      inline DescribePolicyGroups& setScreenDisplayMode(string screenDisplayMode) { DARABONBA_PTR_SET_VALUE(screenDisplayMode_, screenDisplayMode) };


      // smoothEnhancement Field Functions 
      bool hasSmoothEnhancement() const { return this->smoothEnhancement_ != nullptr;};
      void deleteSmoothEnhancement() { this->smoothEnhancement_ = nullptr;};
      inline string getSmoothEnhancement() const { DARABONBA_PTR_GET_DEFAULT(smoothEnhancement_, "") };
      inline DescribePolicyGroups& setSmoothEnhancement(string smoothEnhancement) { DARABONBA_PTR_SET_VALUE(smoothEnhancement_, smoothEnhancement) };


      // statusMonitor Field Functions 
      bool hasStatusMonitor() const { return this->statusMonitor_ != nullptr;};
      void deleteStatusMonitor() { this->statusMonitor_ = nullptr;};
      inline string getStatusMonitor() const { DARABONBA_PTR_GET_DEFAULT(statusMonitor_, "") };
      inline DescribePolicyGroups& setStatusMonitor(string statusMonitor) { DARABONBA_PTR_SET_VALUE(statusMonitor_, statusMonitor) };


      // streamingMode Field Functions 
      bool hasStreamingMode() const { return this->streamingMode_ != nullptr;};
      void deleteStreamingMode() { this->streamingMode_ = nullptr;};
      inline string getStreamingMode() const { DARABONBA_PTR_GET_DEFAULT(streamingMode_, "") };
      inline DescribePolicyGroups& setStreamingMode(string streamingMode) { DARABONBA_PTR_SET_VALUE(streamingMode_, streamingMode) };


      // targetFps Field Functions 
      bool hasTargetFps() const { return this->targetFps_ != nullptr;};
      void deleteTargetFps() { this->targetFps_ = nullptr;};
      inline int32_t getTargetFps() const { DARABONBA_PTR_GET_DEFAULT(targetFps_, 0) };
      inline DescribePolicyGroups& setTargetFps(int32_t targetFps) { DARABONBA_PTR_SET_VALUE(targetFps_, targetFps) };


      // usbRedirect Field Functions 
      bool hasUsbRedirect() const { return this->usbRedirect_ != nullptr;};
      void deleteUsbRedirect() { this->usbRedirect_ = nullptr;};
      inline string getUsbRedirect() const { DARABONBA_PTR_GET_DEFAULT(usbRedirect_, "") };
      inline DescribePolicyGroups& setUsbRedirect(string usbRedirect) { DARABONBA_PTR_SET_VALUE(usbRedirect_, usbRedirect) };


      // usbSupplyRedirectRule Field Functions 
      bool hasUsbSupplyRedirectRule() const { return this->usbSupplyRedirectRule_ != nullptr;};
      void deleteUsbSupplyRedirectRule() { this->usbSupplyRedirectRule_ = nullptr;};
      inline const vector<DescribePolicyGroups::UsbSupplyRedirectRule> & getUsbSupplyRedirectRule() const { DARABONBA_PTR_GET_CONST(usbSupplyRedirectRule_, vector<DescribePolicyGroups::UsbSupplyRedirectRule>) };
      inline vector<DescribePolicyGroups::UsbSupplyRedirectRule> getUsbSupplyRedirectRule() { DARABONBA_PTR_GET(usbSupplyRedirectRule_, vector<DescribePolicyGroups::UsbSupplyRedirectRule>) };
      inline DescribePolicyGroups& setUsbSupplyRedirectRule(const vector<DescribePolicyGroups::UsbSupplyRedirectRule> & usbSupplyRedirectRule) { DARABONBA_PTR_SET_VALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };
      inline DescribePolicyGroups& setUsbSupplyRedirectRule(vector<DescribePolicyGroups::UsbSupplyRedirectRule> && usbSupplyRedirectRule) { DARABONBA_PTR_SET_RVALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };


      // useTime Field Functions 
      bool hasUseTime() const { return this->useTime_ != nullptr;};
      void deleteUseTime() { this->useTime_ = nullptr;};
      inline string getUseTime() const { DARABONBA_PTR_GET_DEFAULT(useTime_, "") };
      inline DescribePolicyGroups& setUseTime(string useTime) { DARABONBA_PTR_SET_VALUE(useTime_, useTime) };


      // videoEncAvgKbps Field Functions 
      bool hasVideoEncAvgKbps() const { return this->videoEncAvgKbps_ != nullptr;};
      void deleteVideoEncAvgKbps() { this->videoEncAvgKbps_ = nullptr;};
      inline int32_t getVideoEncAvgKbps() const { DARABONBA_PTR_GET_DEFAULT(videoEncAvgKbps_, 0) };
      inline DescribePolicyGroups& setVideoEncAvgKbps(int32_t videoEncAvgKbps) { DARABONBA_PTR_SET_VALUE(videoEncAvgKbps_, videoEncAvgKbps) };


      // videoEncMaxQP Field Functions 
      bool hasVideoEncMaxQP() const { return this->videoEncMaxQP_ != nullptr;};
      void deleteVideoEncMaxQP() { this->videoEncMaxQP_ = nullptr;};
      inline int32_t getVideoEncMaxQP() const { DARABONBA_PTR_GET_DEFAULT(videoEncMaxQP_, 0) };
      inline DescribePolicyGroups& setVideoEncMaxQP(int32_t videoEncMaxQP) { DARABONBA_PTR_SET_VALUE(videoEncMaxQP_, videoEncMaxQP) };


      // videoEncMinQP Field Functions 
      bool hasVideoEncMinQP() const { return this->videoEncMinQP_ != nullptr;};
      void deleteVideoEncMinQP() { this->videoEncMinQP_ = nullptr;};
      inline int32_t getVideoEncMinQP() const { DARABONBA_PTR_GET_DEFAULT(videoEncMinQP_, 0) };
      inline DescribePolicyGroups& setVideoEncMinQP(int32_t videoEncMinQP) { DARABONBA_PTR_SET_VALUE(videoEncMinQP_, videoEncMinQP) };


      // videoEncPeakKbps Field Functions 
      bool hasVideoEncPeakKbps() const { return this->videoEncPeakKbps_ != nullptr;};
      void deleteVideoEncPeakKbps() { this->videoEncPeakKbps_ = nullptr;};
      inline int32_t getVideoEncPeakKbps() const { DARABONBA_PTR_GET_DEFAULT(videoEncPeakKbps_, 0) };
      inline DescribePolicyGroups& setVideoEncPeakKbps(int32_t videoEncPeakKbps) { DARABONBA_PTR_SET_VALUE(videoEncPeakKbps_, videoEncPeakKbps) };


      // videoEncPolicy Field Functions 
      bool hasVideoEncPolicy() const { return this->videoEncPolicy_ != nullptr;};
      void deleteVideoEncPolicy() { this->videoEncPolicy_ = nullptr;};
      inline string getVideoEncPolicy() const { DARABONBA_PTR_GET_DEFAULT(videoEncPolicy_, "") };
      inline DescribePolicyGroups& setVideoEncPolicy(string videoEncPolicy) { DARABONBA_PTR_SET_VALUE(videoEncPolicy_, videoEncPolicy) };


      // videoRedirect Field Functions 
      bool hasVideoRedirect() const { return this->videoRedirect_ != nullptr;};
      void deleteVideoRedirect() { this->videoRedirect_ = nullptr;};
      inline string getVideoRedirect() const { DARABONBA_PTR_GET_DEFAULT(videoRedirect_, "") };
      inline DescribePolicyGroups& setVideoRedirect(string videoRedirect) { DARABONBA_PTR_SET_VALUE(videoRedirect_, videoRedirect) };


      // visualQuality Field Functions 
      bool hasVisualQuality() const { return this->visualQuality_ != nullptr;};
      void deleteVisualQuality() { this->visualQuality_ = nullptr;};
      inline string getVisualQuality() const { DARABONBA_PTR_GET_DEFAULT(visualQuality_, "") };
      inline DescribePolicyGroups& setVisualQuality(string visualQuality) { DARABONBA_PTR_SET_VALUE(visualQuality_, visualQuality) };


      // watermark Field Functions 
      bool hasWatermark() const { return this->watermark_ != nullptr;};
      void deleteWatermark() { this->watermark_ = nullptr;};
      inline string getWatermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, "") };
      inline DescribePolicyGroups& setWatermark(string watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


      // watermarkAntiCam Field Functions 
      bool hasWatermarkAntiCam() const { return this->watermarkAntiCam_ != nullptr;};
      void deleteWatermarkAntiCam() { this->watermarkAntiCam_ = nullptr;};
      inline string getWatermarkAntiCam() const { DARABONBA_PTR_GET_DEFAULT(watermarkAntiCam_, "") };
      inline DescribePolicyGroups& setWatermarkAntiCam(string watermarkAntiCam) { DARABONBA_PTR_SET_VALUE(watermarkAntiCam_, watermarkAntiCam) };


      // watermarkColor Field Functions 
      bool hasWatermarkColor() const { return this->watermarkColor_ != nullptr;};
      void deleteWatermarkColor() { this->watermarkColor_ = nullptr;};
      inline int32_t getWatermarkColor() const { DARABONBA_PTR_GET_DEFAULT(watermarkColor_, 0) };
      inline DescribePolicyGroups& setWatermarkColor(int32_t watermarkColor) { DARABONBA_PTR_SET_VALUE(watermarkColor_, watermarkColor) };


      // watermarkCustomText Field Functions 
      bool hasWatermarkCustomText() const { return this->watermarkCustomText_ != nullptr;};
      void deleteWatermarkCustomText() { this->watermarkCustomText_ = nullptr;};
      inline string getWatermarkCustomText() const { DARABONBA_PTR_GET_DEFAULT(watermarkCustomText_, "") };
      inline DescribePolicyGroups& setWatermarkCustomText(string watermarkCustomText) { DARABONBA_PTR_SET_VALUE(watermarkCustomText_, watermarkCustomText) };


      // watermarkDegree Field Functions 
      bool hasWatermarkDegree() const { return this->watermarkDegree_ != nullptr;};
      void deleteWatermarkDegree() { this->watermarkDegree_ = nullptr;};
      inline double getWatermarkDegree() const { DARABONBA_PTR_GET_DEFAULT(watermarkDegree_, 0.0) };
      inline DescribePolicyGroups& setWatermarkDegree(double watermarkDegree) { DARABONBA_PTR_SET_VALUE(watermarkDegree_, watermarkDegree) };


      // watermarkFontSize Field Functions 
      bool hasWatermarkFontSize() const { return this->watermarkFontSize_ != nullptr;};
      void deleteWatermarkFontSize() { this->watermarkFontSize_ = nullptr;};
      inline int32_t getWatermarkFontSize() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontSize_, 0) };
      inline DescribePolicyGroups& setWatermarkFontSize(int32_t watermarkFontSize) { DARABONBA_PTR_SET_VALUE(watermarkFontSize_, watermarkFontSize) };


      // watermarkFontStyle Field Functions 
      bool hasWatermarkFontStyle() const { return this->watermarkFontStyle_ != nullptr;};
      void deleteWatermarkFontStyle() { this->watermarkFontStyle_ = nullptr;};
      inline string getWatermarkFontStyle() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontStyle_, "") };
      inline DescribePolicyGroups& setWatermarkFontStyle(string watermarkFontStyle) { DARABONBA_PTR_SET_VALUE(watermarkFontStyle_, watermarkFontStyle) };


      // watermarkPower Field Functions 
      bool hasWatermarkPower() const { return this->watermarkPower_ != nullptr;};
      void deleteWatermarkPower() { this->watermarkPower_ = nullptr;};
      inline string getWatermarkPower() const { DARABONBA_PTR_GET_DEFAULT(watermarkPower_, "") };
      inline DescribePolicyGroups& setWatermarkPower(string watermarkPower) { DARABONBA_PTR_SET_VALUE(watermarkPower_, watermarkPower) };


      // watermarkRowAmount Field Functions 
      bool hasWatermarkRowAmount() const { return this->watermarkRowAmount_ != nullptr;};
      void deleteWatermarkRowAmount() { this->watermarkRowAmount_ = nullptr;};
      inline int32_t getWatermarkRowAmount() const { DARABONBA_PTR_GET_DEFAULT(watermarkRowAmount_, 0) };
      inline DescribePolicyGroups& setWatermarkRowAmount(int32_t watermarkRowAmount) { DARABONBA_PTR_SET_VALUE(watermarkRowAmount_, watermarkRowAmount) };


      // watermarkSecurity Field Functions 
      bool hasWatermarkSecurity() const { return this->watermarkSecurity_ != nullptr;};
      void deleteWatermarkSecurity() { this->watermarkSecurity_ = nullptr;};
      inline string getWatermarkSecurity() const { DARABONBA_PTR_GET_DEFAULT(watermarkSecurity_, "") };
      inline DescribePolicyGroups& setWatermarkSecurity(string watermarkSecurity) { DARABONBA_PTR_SET_VALUE(watermarkSecurity_, watermarkSecurity) };


      // watermarkShadow Field Functions 
      bool hasWatermarkShadow() const { return this->watermarkShadow_ != nullptr;};
      void deleteWatermarkShadow() { this->watermarkShadow_ = nullptr;};
      inline string getWatermarkShadow() const { DARABONBA_PTR_GET_DEFAULT(watermarkShadow_, "") };
      inline DescribePolicyGroups& setWatermarkShadow(string watermarkShadow) { DARABONBA_PTR_SET_VALUE(watermarkShadow_, watermarkShadow) };


      // watermarkTransparency Field Functions 
      bool hasWatermarkTransparency() const { return this->watermarkTransparency_ != nullptr;};
      void deleteWatermarkTransparency() { this->watermarkTransparency_ = nullptr;};
      inline string getWatermarkTransparency() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparency_, "") };
      inline DescribePolicyGroups& setWatermarkTransparency(string watermarkTransparency) { DARABONBA_PTR_SET_VALUE(watermarkTransparency_, watermarkTransparency) };


      // watermarkTransparencyValue Field Functions 
      bool hasWatermarkTransparencyValue() const { return this->watermarkTransparencyValue_ != nullptr;};
      void deleteWatermarkTransparencyValue() { this->watermarkTransparencyValue_ = nullptr;};
      inline int32_t getWatermarkTransparencyValue() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparencyValue_, 0) };
      inline DescribePolicyGroups& setWatermarkTransparencyValue(int32_t watermarkTransparencyValue) { DARABONBA_PTR_SET_VALUE(watermarkTransparencyValue_, watermarkTransparencyValue) };


      // watermarkType Field Functions 
      bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
      void deleteWatermarkType() { this->watermarkType_ = nullptr;};
      inline string getWatermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
      inline DescribePolicyGroups& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


      // wuyingKeeper Field Functions 
      bool hasWuyingKeeper() const { return this->wuyingKeeper_ != nullptr;};
      void deleteWuyingKeeper() { this->wuyingKeeper_ = nullptr;};
      inline string getWuyingKeeper() const { DARABONBA_PTR_GET_DEFAULT(wuyingKeeper_, "") };
      inline DescribePolicyGroups& setWuyingKeeper(string wuyingKeeper) { DARABONBA_PTR_SET_VALUE(wuyingKeeper_, wuyingKeeper) };


      // wyAssistant Field Functions 
      bool hasWyAssistant() const { return this->wyAssistant_ != nullptr;};
      void deleteWyAssistant() { this->wyAssistant_ = nullptr;};
      inline string getWyAssistant() const { DARABONBA_PTR_GET_DEFAULT(wyAssistant_, "") };
      inline DescribePolicyGroups& setWyAssistant(string wyAssistant) { DARABONBA_PTR_SET_VALUE(wyAssistant_, wyAssistant) };


    protected:
      shared_ptr<string> academicProxy_ {};
      // Whether end users have administrative permission after connecting to the cloud computer.
      // 
      // > This feature is in invitational preview and is not publicly available.
      shared_ptr<string> adminAccess_ {};
      shared_ptr<string> adminKeyboardOnFullScreen_ {};
      shared_ptr<string> adminKeyboardOnWindows_ {};
      // Whether to enable the anti-screenshot feature.
      shared_ptr<string> appContentProtection_ {};
      // The client IP address whitelist. Only IP addresses within the whitelisted CIDR blocks can access the cloud computer.
      shared_ptr<vector<DescribePolicyGroups::AuthorizeAccessPolicyRules>> authorizeAccessPolicyRules_ {};
      // The security group control rules.
      shared_ptr<vector<DescribePolicyGroups::AuthorizeSecurityPolicyRules>> authorizeSecurityPolicyRules_ {};
      // The automatic client reconnection configuration.
      shared_ptr<string> autoReconnect_ {};
      // Whether to enable local camera redirection.
      shared_ptr<string> cameraRedirect_ {};
      shared_ptr<string> clientControlMenu_ {};
      shared_ptr<string> clientCreateSnapshot_ {};
      shared_ptr<string> clientHibernate_ {};
      shared_ptr<string> clientRestart_ {};
      shared_ptr<string> clientShutdown_ {};
      // The logon method control list. Controls which clients can access the cloud computer.
      shared_ptr<vector<DescribePolicyGroups::ClientTypes>> clientTypes_ {};
      // The clipboard permissions.
      shared_ptr<string> clipboard_ {};
      // Whether to enable color enhancement for design and 3D application scenarios.
      shared_ptr<string> colorEnhancement_ {};
      shared_ptr<string> cpdDriveClipboard_ {};
      // The CPU downclocking duration in seconds. Valid values: 30 to 120.
      shared_ptr<int32_t> cpuDownGradeDuration_ {};
      shared_ptr<string> cpuOverload_ {};
      // The process whitelist exempt from CPU usage limits.
      shared_ptr<vector<string>> cpuProcessors_ {};
      // The CPU protection mode switch.
      shared_ptr<string> cpuProtectedMode_ {};
      // The overall CPU usage percentage. Valid values: 70 to 90.
      shared_ptr<int32_t> cpuRateLimit_ {};
      // The overall CPU sampling duration in seconds. Valid values: 10 to 60.
      shared_ptr<int32_t> cpuSampleDuration_ {};
      // The single-core CPU usage percentage. Valid values: 70 to 100.
      shared_ptr<int32_t> cpuSingleRateLimit_ {};
      shared_ptr<string> description_ {};
      // The number of cloud computers associated with this policy.
      shared_ptr<int32_t> desktopCount_ {};
      // The number of cloud computer pools associated with this policy.
      shared_ptr<int32_t> desktopGroupCount_ {};
      shared_ptr<string> deviceConnectHint_ {};
      // The device redirection rule list.
      shared_ptr<vector<DescribePolicyGroups::DeviceRedirects>> deviceRedirects_ {};
      // The custom peripheral rule list.
      shared_ptr<vector<DescribePolicyGroups::DeviceRules>> deviceRules_ {};
      shared_ptr<string> diskOverload_ {};
      // The display mode.
      shared_ptr<string> displayMode_ {};
      // The access control for domain names. Wildcards (\\*) are supported. Separate multiple domain names with commas (,).
      shared_ptr<string> domainList_ {};
      // The domain name resolution policy list.
      shared_ptr<vector<DescribePolicyGroups::DomainResolveRule>> domainResolveRule_ {};
      // The domain name resolution policy switch.
      shared_ptr<string> domainResolveRuleType_ {};
      // The total number of cloud computers and cloud computer pools associated with this policy. This value is returned only for custom policies.
      shared_ptr<int32_t> edsCount_ {};
      // The switch for users to request administrator assistance.
      shared_ptr<string> endUserApplyAdminCoordinate_ {};
      shared_ptr<string> endUserCount_ {};
      // The switch for stream collaboration between users.
      shared_ptr<string> endUserGroupCoordinate_ {};
      shared_ptr<string> externalDrive_ {};
      shared_ptr<string> fileMigrate_ {};
      // File transfer.
      shared_ptr<string> fileTransfer_ {};
      shared_ptr<string> fileTransferAddress_ {};
      shared_ptr<string> fileTransferSpeed_ {};
      shared_ptr<string> fileTransferSpeedLocation_ {};
      // Whether to enable the image quality policy for graphics-specification cloud computers. Enable this policy if you have high requirements for cloud computer performance and user experience, such as in professional design scenarios.
      shared_ptr<string> gpuAcceleration_ {};
      shared_ptr<string> hoverConfigMsg_ {};
      shared_ptr<string> hoverHibernate_ {};
      shared_ptr<string> hoverRestart_ {};
      shared_ptr<string> hoverShutdown_ {};
      // The web client access policy.
      shared_ptr<string> html5Access_ {};
      // The file transfer policy for the web client.
      shared_ptr<string> html5FileTransfer_ {};
      // The network communication protocol.
      shared_ptr<string> internetCommunicationProtocol_ {};
      shared_ptr<string> internetPrinter_ {};
      shared_ptr<string> keyboardControl_ {};
      // The local disk mapping permissions.
      shared_ptr<string> localDrive_ {};
      // The maximum retry time for reconnecting to the cloud computer after a disconnection caused by objective reasons. Valid values: 30 to 7200 seconds.
      shared_ptr<int32_t> maxReconnectTime_ {};
      // The memory downclocking duration per process in seconds. Valid values: 30 to 120.
      shared_ptr<int32_t> memoryDownGradeDuration_ {};
      shared_ptr<string> memoryOverload_ {};
      // The process whitelist exempt from memory usage limits.
      shared_ptr<vector<string>> memoryProcessors_ {};
      // The memory protection mode switch.
      shared_ptr<string> memoryProtectedMode_ {};
      // The overall memory usage percentage. Valid values: 70 to 90.
      shared_ptr<int32_t> memoryRateLimit_ {};
      // The overall memory sampling duration in seconds. Valid values: 30 to 60.
      shared_ptr<int32_t> memorySampleDuration_ {};
      // The memory usage percentage per worker. Valid values: 30 to 60.
      shared_ptr<int32_t> memorySingleRateLimit_ {};
      // Whether to display the restart button in the floating ball when accessing the cloud computer from mobile clients (including Android and iOS clients).
      // 
      // > Applies only to mobile clients of V7.4 or later.
      shared_ptr<string> mobileRestart_ {};
      // The Windows security control switch for mobile clients.
      shared_ptr<string> mobileSafeMenu_ {};
      // Whether to display the shutdown button in the floating ball when accessing the cloud computer from mobile clients (including Android and iOS clients).
      // 
      // > Applies only to mobile clients of V7.4 or later.
      shared_ptr<string> mobileShutdown_ {};
      // The WUYING Keeper switch for mobile clients.
      shared_ptr<string> mobileWuyingKeeper_ {};
      // The Xiaoying AI Assistant switch for mobile clients.
      shared_ptr<string> mobileWyAssistant_ {};
      shared_ptr<string> modelLibrary_ {};
      shared_ptr<string> multiScreen_ {};
      // The cloud computer policy name.
      shared_ptr<string> name_ {};
      // Network redirection.
      // 
      // > This feature is in invitational preview and is not publicly available.
      shared_ptr<string> netRedirect_ {};
      // The network redirection policy list.
      // 
      // > This feature is in invitational preview and is not publicly available.
      shared_ptr<vector<DescribePolicyGroups::NetRedirectRule>> netRedirectRule_ {};
      shared_ptr<string> networkPrinter_ {};
      shared_ptr<string> organizationCount_ {};
      // The cloud computer policy ID.
      shared_ptr<string> policyGroupId_ {};
      // The cloud computer policy type.
      shared_ptr<string> policyGroupType_ {};
      // The status of the cloud computer policy.
      shared_ptr<string> policyStatus_ {};
      shared_ptr<string> portProxy_ {};
      // The cloud computer preemption policy.
      // 
      // > To ensure user experience and data security for end users currently using a cloud computer, mutual preemption between multiple users is not allowed. This parameter defaults to `off` and cannot be modified.
      shared_ptr<string> preemptLogin_ {};
      // The usernames of users who can preempt the cloud computer.
      shared_ptr<vector<string>> preemptLoginUsers_ {};
      // The printer redirection policy.
      shared_ptr<string> printerRedirection_ {};
      // Whether to enable image quality enhancement for design and 3D application scenarios.
      shared_ptr<string> qualityEnhancement_ {};
      // Whether to enable custom screen recording.
      shared_ptr<string> recordContent_ {};
      // The expiration time for custom screen recording files. Default value: 30 days.
      shared_ptr<int64_t> recordContentExpires_ {};
      // The screen recording duration after an event is detected in screen recording audit. Unit: minutes. Valid values: 10 to 60.
      shared_ptr<int32_t> recordEventDuration_ {};
      // The screen recording event suffix.
      shared_ptr<vector<string>> recordEventFileExts_ {};
      // The list of absolute paths for file monitoring in screen recording audit.
      shared_ptr<vector<string>> recordEventFilePaths_ {};
      // The screen recording event severity switch.
      shared_ptr<vector<DescribePolicyGroups::RecordEventLevels>> recordEventLevels_ {};
      // The list of absolute paths for registry monitoring in screen recording audit.
      shared_ptr<vector<string>> recordEventRegisters_ {};
      // Whether to enable screen recording.
      shared_ptr<string> recording_ {};
      // The option to record audio from the cloud computer.
      shared_ptr<string> recordingAudio_ {};
      // The screen recording file viewing duration in minutes. Recording files are automatically split based on this duration and uploaded to the bucket. When a file reaches 300 MB, it is preferentially rolled over.
      shared_ptr<int32_t> recordingDuration_ {};
      // The screen recording end time in HH:MM:SS format. This parameter takes effect only when Recording is set to PERIOD.
      shared_ptr<string> recordingEndTime_ {};
      // The retention period for screen recording files. Valid values: 1 to 180 days.
      shared_ptr<int64_t> recordingExpires_ {};
      // The screen recording frame rate. Unit: FPS (frames per second).
      shared_ptr<int64_t> recordingFps_ {};
      // The screen recording start time in HH:MM:SS format. This parameter takes effect only when Recording is set to PERIOD.
      shared_ptr<string> recordingStartTime_ {};
      // The screen recording client notification feature.
      shared_ptr<string> recordingUserNotify_ {};
      // The screen recording client notification message. Leave empty by default.
      shared_ptr<string> recordingUserNotifyMessage_ {};
      // The keyboard and mouse control permissions during remote assistance.
      shared_ptr<string> remoteCoordinate_ {};
      // Resets the cloud computer.
      shared_ptr<string> resetDesktop_ {};
      shared_ptr<int32_t> resolutionDpi_ {};
      shared_ptr<int32_t> resolutionHeight_ {};
      shared_ptr<string> resolutionModel_ {};
      shared_ptr<int32_t> resolutionWidth_ {};
      // The number of resource groups associated with this policy.
      shared_ptr<int32_t> resourceGroupCount_ {};
      // The region to which the cloud computer policy belongs.
      // 
      // > For region-less policies, this value is `center`.
      shared_ptr<string> resourceRegionId_ {};
      shared_ptr<string> safeMenu_ {};
      // The effective scope of the policy.
      shared_ptr<string> scope_ {};
      // Specify this parameter when `Scope` is set to `IP`. This parameter takes effect only when `Scope` is set to `IP`.
      shared_ptr<vector<string>> scopeValue_ {};
      shared_ptr<string> screenDisplayMode_ {};
      // Whether to enable smoothness enhancement for daily office scenarios.
      shared_ptr<string> smoothEnhancement_ {};
      // Whether to provide the status monitoring feature in the floating ball when accessing the cloud computer.
      shared_ptr<string> statusMonitor_ {};
      // The streaming mode adaptation scenario.
      shared_ptr<string> streamingMode_ {};
      // The target frame rate. Valid values: 10 to 60.
      shared_ptr<int32_t> targetFps_ {};
      // USB redirection.
      shared_ptr<string> usbRedirect_ {};
      // The USB redirection rule.
      shared_ptr<vector<DescribePolicyGroups::UsbSupplyRedirectRule>> usbSupplyRedirectRule_ {};
      shared_ptr<string> useTime_ {};
      // The average bitrate for video encoding. Valid values: 1000 to 50000.
      shared_ptr<int32_t> videoEncAvgKbps_ {};
      // The maximum quantization parameter (QP) for video encoding, representing the lowest quality. Valid values: 0 to 51.
      shared_ptr<int32_t> videoEncMaxQP_ {};
      // The minimum quantization parameter (QP) for video encoding, representing the highest quality. Valid values: 0 to 51.
      shared_ptr<int32_t> videoEncMinQP_ {};
      // The peak bitrate for video encoding. Valid values: 1000 to 50000.
      shared_ptr<int32_t> videoEncPeakKbps_ {};
      // The video encoding policy.
      shared_ptr<string> videoEncPolicy_ {};
      // Multimedia redirection.
      shared_ptr<string> videoRedirect_ {};
      // The image display quality policy.
      shared_ptr<string> visualQuality_ {};
      // Watermark.
      shared_ptr<string> watermark_ {};
      // The blind watermark anti-photo feature.
      shared_ptr<string> watermarkAntiCam_ {};
      // The watermark font color in RGB format. Valid values: 0 to 16777215.
      shared_ptr<int32_t> watermarkColor_ {};
      // If you set `WatermarkType` to `custom`, you must also specify `WatermarkCustomText`.
      shared_ptr<string> watermarkCustomText_ {};
      // The watermark tilt angle. Valid values: -10 to -30.
      shared_ptr<double> watermarkDegree_ {};
      // The watermark font size. Valid values: 10 to 20.
      shared_ptr<int32_t> watermarkFontSize_ {};
      // The watermark font style.
      shared_ptr<string> watermarkFontStyle_ {};
      // The blind watermark enhancement feature.
      shared_ptr<string> watermarkPower_ {};
      // The number of watermark rows.
      // 
      // > This parameter is not publicly available.
      shared_ptr<int32_t> watermarkRowAmount_ {};
      // The blind watermark security priority rule.
      shared_ptr<string> watermarkSecurity_ {};
      shared_ptr<string> watermarkShadow_ {};
      // The watermark transparency level.
      shared_ptr<string> watermarkTransparency_ {};
      // The watermark transparency. A higher value means lower transparency. Valid values: 10 to 100.
      shared_ptr<int32_t> watermarkTransparencyValue_ {};
      // The watermark type.
      shared_ptr<string> watermarkType_ {};
      shared_ptr<string> wuyingKeeper_ {};
      // Whether to provide the WUYING AI Assistant feature in the floating ball when accessing the cloud computer.
      shared_ptr<string> wyAssistant_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->describePolicyGroups_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribePolicyGroupsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // describePolicyGroups Field Functions 
    bool hasDescribePolicyGroups() const { return this->describePolicyGroups_ != nullptr;};
    void deleteDescribePolicyGroups() { this->describePolicyGroups_ = nullptr;};
    inline const vector<DescribePolicyGroupsResponseBody::DescribePolicyGroups> & getDescribePolicyGroups() const { DARABONBA_PTR_GET_CONST(describePolicyGroups_, vector<DescribePolicyGroupsResponseBody::DescribePolicyGroups>) };
    inline vector<DescribePolicyGroupsResponseBody::DescribePolicyGroups> getDescribePolicyGroups() { DARABONBA_PTR_GET(describePolicyGroups_, vector<DescribePolicyGroupsResponseBody::DescribePolicyGroups>) };
    inline DescribePolicyGroupsResponseBody& setDescribePolicyGroups(const vector<DescribePolicyGroupsResponseBody::DescribePolicyGroups> & describePolicyGroups) { DARABONBA_PTR_SET_VALUE(describePolicyGroups_, describePolicyGroups) };
    inline DescribePolicyGroupsResponseBody& setDescribePolicyGroups(vector<DescribePolicyGroupsResponseBody::DescribePolicyGroups> && describePolicyGroups) { DARABONBA_PTR_SET_RVALUE(describePolicyGroups_, describePolicyGroups) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePolicyGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePolicyGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePolicyGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolicyGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> count_ {};
    // The detailed information about the cloud computer policies.
    shared_ptr<vector<DescribePolicyGroupsResponseBody::DescribePolicyGroups>> describePolicyGroups_ {};
    // The pagination token for the next query. If NextToken is empty, no further pages exist.
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
