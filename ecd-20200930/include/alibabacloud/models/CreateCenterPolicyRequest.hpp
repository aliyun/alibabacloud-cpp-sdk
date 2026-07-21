// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENTERPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECENTERPOLICYREQUEST_HPP_
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
  class CreateCenterPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenterPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcademicProxy, academicProxy_);
      DARABONBA_PTR_TO_JSON(AdminAccess, adminAccess_);
      DARABONBA_PTR_TO_JSON(AdminKeyboardOnFullScreen, adminKeyboardOnFullScreen_);
      DARABONBA_PTR_TO_JSON(AdminKeyboardOnWindows, adminKeyboardOnWindows_);
      DARABONBA_PTR_TO_JSON(AppContentProtection, appContentProtection_);
      DARABONBA_PTR_TO_JSON(AuthorizeAccessPolicyRule, authorizeAccessPolicyRule_);
      DARABONBA_PTR_TO_JSON(AuthorizeSecurityPolicyRule, authorizeSecurityPolicyRule_);
      DARABONBA_PTR_TO_JSON(AutoReconnect, autoReconnect_);
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_TO_JSON(ClientControlMenu, clientControlMenu_);
      DARABONBA_PTR_TO_JSON(ClientCreateSnapshot, clientCreateSnapshot_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_TO_JSON(ClipboardGraineds, clipboardGraineds_);
      DARABONBA_PTR_TO_JSON(ClipboardScope, clipboardScope_);
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
      DARABONBA_PTR_TO_JSON(DeviceConnectHint, deviceConnectHint_);
      DARABONBA_PTR_TO_JSON(DeviceRedirects, deviceRedirects_);
      DARABONBA_PTR_TO_JSON(DeviceRules, deviceRules_);
      DARABONBA_PTR_TO_JSON(DisconnectKeepSession, disconnectKeepSession_);
      DARABONBA_PTR_TO_JSON(DisconnectKeepSessionTime, disconnectKeepSessionTime_);
      DARABONBA_PTR_TO_JSON(DiskOverload, diskOverload_);
      DARABONBA_PTR_TO_JSON(DisplayMode, displayMode_);
      DARABONBA_PTR_TO_JSON(DomainResolveRule, domainResolveRule_);
      DARABONBA_PTR_TO_JSON(DomainResolveRuleType, domainResolveRuleType_);
      DARABONBA_PTR_TO_JSON(EnableSessionRateLimiting, enableSessionRateLimiting_);
      DARABONBA_PTR_TO_JSON(EndUserApplyAdminCoordinate, endUserApplyAdminCoordinate_);
      DARABONBA_PTR_TO_JSON(EndUserGroupCoordinate, endUserGroupCoordinate_);
      DARABONBA_PTR_TO_JSON(ExternalDrive, externalDrive_);
      DARABONBA_PTR_TO_JSON(FileMigrate, fileMigrate_);
      DARABONBA_PTR_TO_JSON(FileTransferAddress, fileTransferAddress_);
      DARABONBA_PTR_TO_JSON(FileTransferInSize, fileTransferInSize_);
      DARABONBA_PTR_TO_JSON(FileTransferInUnit, fileTransferInUnit_);
      DARABONBA_PTR_TO_JSON(FileTransferOutSize, fileTransferOutSize_);
      DARABONBA_PTR_TO_JSON(FileTransferOutUnit, fileTransferOutUnit_);
      DARABONBA_PTR_TO_JSON(FileTransferSizeLimit, fileTransferSizeLimit_);
      DARABONBA_PTR_TO_JSON(FileTransferSpeed, fileTransferSpeed_);
      DARABONBA_PTR_TO_JSON(FileTransferSpeedLocation, fileTransferSpeedLocation_);
      DARABONBA_PTR_TO_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_TO_JSON(HoverConfigMsg, hoverConfigMsg_);
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
      DARABONBA_PTR_TO_JSON(NoOperationDisconnect, noOperationDisconnect_);
      DARABONBA_PTR_TO_JSON(NoOperationDisconnectTime, noOperationDisconnectTime_);
      DARABONBA_PTR_TO_JSON(PortProxy, portProxy_);
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
      DARABONBA_PTR_TO_JSON(ResolutionDpi, resolutionDpi_);
      DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_TO_JSON(ResolutionModel, resolutionModel_);
      DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
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
      DARABONBA_PTR_TO_JSON(WatermarkShadow, watermarkShadow_);
      DARABONBA_PTR_TO_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
      DARABONBA_PTR_TO_JSON(WatermarkType, watermarkType_);
      DARABONBA_PTR_TO_JSON(WuyingKeeper, wuyingKeeper_);
      DARABONBA_PTR_TO_JSON(WyAssistant, wyAssistant_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenterPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcademicProxy, academicProxy_);
      DARABONBA_PTR_FROM_JSON(AdminAccess, adminAccess_);
      DARABONBA_PTR_FROM_JSON(AdminKeyboardOnFullScreen, adminKeyboardOnFullScreen_);
      DARABONBA_PTR_FROM_JSON(AdminKeyboardOnWindows, adminKeyboardOnWindows_);
      DARABONBA_PTR_FROM_JSON(AppContentProtection, appContentProtection_);
      DARABONBA_PTR_FROM_JSON(AuthorizeAccessPolicyRule, authorizeAccessPolicyRule_);
      DARABONBA_PTR_FROM_JSON(AuthorizeSecurityPolicyRule, authorizeSecurityPolicyRule_);
      DARABONBA_PTR_FROM_JSON(AutoReconnect, autoReconnect_);
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_FROM_JSON(ClientControlMenu, clientControlMenu_);
      DARABONBA_PTR_FROM_JSON(ClientCreateSnapshot, clientCreateSnapshot_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_FROM_JSON(ClipboardGraineds, clipboardGraineds_);
      DARABONBA_PTR_FROM_JSON(ClipboardScope, clipboardScope_);
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
      DARABONBA_PTR_FROM_JSON(DeviceConnectHint, deviceConnectHint_);
      DARABONBA_PTR_FROM_JSON(DeviceRedirects, deviceRedirects_);
      DARABONBA_PTR_FROM_JSON(DeviceRules, deviceRules_);
      DARABONBA_PTR_FROM_JSON(DisconnectKeepSession, disconnectKeepSession_);
      DARABONBA_PTR_FROM_JSON(DisconnectKeepSessionTime, disconnectKeepSessionTime_);
      DARABONBA_PTR_FROM_JSON(DiskOverload, diskOverload_);
      DARABONBA_PTR_FROM_JSON(DisplayMode, displayMode_);
      DARABONBA_PTR_FROM_JSON(DomainResolveRule, domainResolveRule_);
      DARABONBA_PTR_FROM_JSON(DomainResolveRuleType, domainResolveRuleType_);
      DARABONBA_PTR_FROM_JSON(EnableSessionRateLimiting, enableSessionRateLimiting_);
      DARABONBA_PTR_FROM_JSON(EndUserApplyAdminCoordinate, endUserApplyAdminCoordinate_);
      DARABONBA_PTR_FROM_JSON(EndUserGroupCoordinate, endUserGroupCoordinate_);
      DARABONBA_PTR_FROM_JSON(ExternalDrive, externalDrive_);
      DARABONBA_PTR_FROM_JSON(FileMigrate, fileMigrate_);
      DARABONBA_PTR_FROM_JSON(FileTransferAddress, fileTransferAddress_);
      DARABONBA_PTR_FROM_JSON(FileTransferInSize, fileTransferInSize_);
      DARABONBA_PTR_FROM_JSON(FileTransferInUnit, fileTransferInUnit_);
      DARABONBA_PTR_FROM_JSON(FileTransferOutSize, fileTransferOutSize_);
      DARABONBA_PTR_FROM_JSON(FileTransferOutUnit, fileTransferOutUnit_);
      DARABONBA_PTR_FROM_JSON(FileTransferSizeLimit, fileTransferSizeLimit_);
      DARABONBA_PTR_FROM_JSON(FileTransferSpeed, fileTransferSpeed_);
      DARABONBA_PTR_FROM_JSON(FileTransferSpeedLocation, fileTransferSpeedLocation_);
      DARABONBA_PTR_FROM_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_FROM_JSON(HoverConfigMsg, hoverConfigMsg_);
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
      DARABONBA_PTR_FROM_JSON(NoOperationDisconnect, noOperationDisconnect_);
      DARABONBA_PTR_FROM_JSON(NoOperationDisconnectTime, noOperationDisconnectTime_);
      DARABONBA_PTR_FROM_JSON(PortProxy, portProxy_);
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
      DARABONBA_PTR_FROM_JSON(ResolutionDpi, resolutionDpi_);
      DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_FROM_JSON(ResolutionModel, resolutionModel_);
      DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
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
      DARABONBA_PTR_FROM_JSON(WatermarkShadow, watermarkShadow_);
      DARABONBA_PTR_FROM_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
      DARABONBA_PTR_FROM_JSON(WatermarkType, watermarkType_);
      DARABONBA_PTR_FROM_JSON(WuyingKeeper, wuyingKeeper_);
      DARABONBA_PTR_FROM_JSON(WyAssistant, wyAssistant_);
    };
    CreateCenterPolicyRequest() = default ;
    CreateCenterPolicyRequest(const CreateCenterPolicyRequest &) = default ;
    CreateCenterPolicyRequest(CreateCenterPolicyRequest &&) = default ;
    CreateCenterPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenterPolicyRequest() = default ;
    CreateCenterPolicyRequest& operator=(const CreateCenterPolicyRequest &) = default ;
    CreateCenterPolicyRequest& operator=(CreateCenterPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsbSupplyRedirectRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsbSupplyRedirectRule& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(UsbRedirectType, usbRedirectType_);
        DARABONBA_PTR_TO_JSON(UsbRuleType, usbRuleType_);
        DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
      };
      friend void from_json(const Darabonba::Json& j, UsbSupplyRedirectRule& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
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
        && this->productId_ == nullptr && this->usbRedirectType_ == nullptr && this->usbRuleType_ == nullptr && this->vendorId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UsbSupplyRedirectRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline UsbSupplyRedirectRule& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // usbRedirectType Field Functions 
      bool hasUsbRedirectType() const { return this->usbRedirectType_ != nullptr;};
      void deleteUsbRedirectType() { this->usbRedirectType_ = nullptr;};
      inline string getUsbRedirectType() const { DARABONBA_PTR_GET_DEFAULT(usbRedirectType_, "") };
      inline UsbSupplyRedirectRule& setUsbRedirectType(string usbRedirectType) { DARABONBA_PTR_SET_VALUE(usbRedirectType_, usbRedirectType) };


      // usbRuleType Field Functions 
      bool hasUsbRuleType() const { return this->usbRuleType_ != nullptr;};
      void deleteUsbRuleType() { this->usbRuleType_ = nullptr;};
      inline string getUsbRuleType() const { DARABONBA_PTR_GET_DEFAULT(usbRuleType_, "") };
      inline UsbSupplyRedirectRule& setUsbRuleType(string usbRuleType) { DARABONBA_PTR_SET_VALUE(usbRuleType_, usbRuleType) };


      // vendorId Field Functions 
      bool hasVendorId() const { return this->vendorId_ != nullptr;};
      void deleteVendorId() { this->vendorId_ = nullptr;};
      inline string getVendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
      inline UsbSupplyRedirectRule& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


    protected:
      // The rule description.
      shared_ptr<string> description_ {};
      // The product ID.
      shared_ptr<string> productId_ {};
      // The USB redirection type.
      shared_ptr<string> usbRedirectType_ {};
      // The USB redirection rule type.
      shared_ptr<string> usbRuleType_ {};
      // The vendor ID. See [Valid USB Vendor IDs (VIDs)](https://www.usb.org/sites/default/files/vendor_ids032322.pdf_1.pdf).
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
      // The event level.
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
      // The domain name.
      shared_ptr<string> domain_ {};
      // The redirection policy.
      shared_ptr<string> policy_ {};
      // The rule type.
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
      // The vendor ID. See [Valid USB Vendor IDs (VIDs)](https://www.usb.org/sites/default/files/vendor_ids032322.pdf_1.pdf).
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
      // The device type.
      shared_ptr<string> deviceType_ {};
      // The redirection type.
      shared_ptr<string> redirectType_ {};
    };

    class ClipboardGraineds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClipboardGraineds& obj) { 
        DARABONBA_PTR_TO_JSON(ClipboardSize, clipboardSize_);
        DARABONBA_PTR_TO_JSON(ClipboardSizeUnit, clipboardSizeUnit_);
        DARABONBA_PTR_TO_JSON(ClipboardType, clipboardType_);
        DARABONBA_PTR_TO_JSON(GrainedType, grainedType_);
        DARABONBA_PTR_TO_JSON(InClipboardSize, inClipboardSize_);
        DARABONBA_PTR_TO_JSON(InClipboardSizeUnit, inClipboardSizeUnit_);
        DARABONBA_PTR_TO_JSON(OutClipboardSize, outClipboardSize_);
        DARABONBA_PTR_TO_JSON(OutClipboardSizeUnit, outClipboardSizeUnit_);
      };
      friend void from_json(const Darabonba::Json& j, ClipboardGraineds& obj) { 
        DARABONBA_PTR_FROM_JSON(ClipboardSize, clipboardSize_);
        DARABONBA_PTR_FROM_JSON(ClipboardSizeUnit, clipboardSizeUnit_);
        DARABONBA_PTR_FROM_JSON(ClipboardType, clipboardType_);
        DARABONBA_PTR_FROM_JSON(GrainedType, grainedType_);
        DARABONBA_PTR_FROM_JSON(InClipboardSize, inClipboardSize_);
        DARABONBA_PTR_FROM_JSON(InClipboardSizeUnit, inClipboardSizeUnit_);
        DARABONBA_PTR_FROM_JSON(OutClipboardSize, outClipboardSize_);
        DARABONBA_PTR_FROM_JSON(OutClipboardSizeUnit, outClipboardSizeUnit_);
      };
      ClipboardGraineds() = default ;
      ClipboardGraineds(const ClipboardGraineds &) = default ;
      ClipboardGraineds(ClipboardGraineds &&) = default ;
      ClipboardGraineds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClipboardGraineds() = default ;
      ClipboardGraineds& operator=(const ClipboardGraineds &) = default ;
      ClipboardGraineds& operator=(ClipboardGraineds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clipboardSize_ == nullptr
        && this->clipboardSizeUnit_ == nullptr && this->clipboardType_ == nullptr && this->grainedType_ == nullptr && this->inClipboardSize_ == nullptr && this->inClipboardSizeUnit_ == nullptr
        && this->outClipboardSize_ == nullptr && this->outClipboardSizeUnit_ == nullptr; };
      // clipboardSize Field Functions 
      bool hasClipboardSize() const { return this->clipboardSize_ != nullptr;};
      void deleteClipboardSize() { this->clipboardSize_ = nullptr;};
      inline int32_t getClipboardSize() const { DARABONBA_PTR_GET_DEFAULT(clipboardSize_, 0) };
      inline ClipboardGraineds& setClipboardSize(int32_t clipboardSize) { DARABONBA_PTR_SET_VALUE(clipboardSize_, clipboardSize) };


      // clipboardSizeUnit Field Functions 
      bool hasClipboardSizeUnit() const { return this->clipboardSizeUnit_ != nullptr;};
      void deleteClipboardSizeUnit() { this->clipboardSizeUnit_ = nullptr;};
      inline string getClipboardSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(clipboardSizeUnit_, "") };
      inline ClipboardGraineds& setClipboardSizeUnit(string clipboardSizeUnit) { DARABONBA_PTR_SET_VALUE(clipboardSizeUnit_, clipboardSizeUnit) };


      // clipboardType Field Functions 
      bool hasClipboardType() const { return this->clipboardType_ != nullptr;};
      void deleteClipboardType() { this->clipboardType_ = nullptr;};
      inline string getClipboardType() const { DARABONBA_PTR_GET_DEFAULT(clipboardType_, "") };
      inline ClipboardGraineds& setClipboardType(string clipboardType) { DARABONBA_PTR_SET_VALUE(clipboardType_, clipboardType) };


      // grainedType Field Functions 
      bool hasGrainedType() const { return this->grainedType_ != nullptr;};
      void deleteGrainedType() { this->grainedType_ = nullptr;};
      inline string getGrainedType() const { DARABONBA_PTR_GET_DEFAULT(grainedType_, "") };
      inline ClipboardGraineds& setGrainedType(string grainedType) { DARABONBA_PTR_SET_VALUE(grainedType_, grainedType) };


      // inClipboardSize Field Functions 
      bool hasInClipboardSize() const { return this->inClipboardSize_ != nullptr;};
      void deleteInClipboardSize() { this->inClipboardSize_ = nullptr;};
      inline int32_t getInClipboardSize() const { DARABONBA_PTR_GET_DEFAULT(inClipboardSize_, 0) };
      inline ClipboardGraineds& setInClipboardSize(int32_t inClipboardSize) { DARABONBA_PTR_SET_VALUE(inClipboardSize_, inClipboardSize) };


      // inClipboardSizeUnit Field Functions 
      bool hasInClipboardSizeUnit() const { return this->inClipboardSizeUnit_ != nullptr;};
      void deleteInClipboardSizeUnit() { this->inClipboardSizeUnit_ = nullptr;};
      inline string getInClipboardSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(inClipboardSizeUnit_, "") };
      inline ClipboardGraineds& setInClipboardSizeUnit(string inClipboardSizeUnit) { DARABONBA_PTR_SET_VALUE(inClipboardSizeUnit_, inClipboardSizeUnit) };


      // outClipboardSize Field Functions 
      bool hasOutClipboardSize() const { return this->outClipboardSize_ != nullptr;};
      void deleteOutClipboardSize() { this->outClipboardSize_ = nullptr;};
      inline int32_t getOutClipboardSize() const { DARABONBA_PTR_GET_DEFAULT(outClipboardSize_, 0) };
      inline ClipboardGraineds& setOutClipboardSize(int32_t outClipboardSize) { DARABONBA_PTR_SET_VALUE(outClipboardSize_, outClipboardSize) };


      // outClipboardSizeUnit Field Functions 
      bool hasOutClipboardSizeUnit() const { return this->outClipboardSizeUnit_ != nullptr;};
      void deleteOutClipboardSizeUnit() { this->outClipboardSizeUnit_ = nullptr;};
      inline string getOutClipboardSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(outClipboardSizeUnit_, "") };
      inline ClipboardGraineds& setOutClipboardSizeUnit(string outClipboardSizeUnit) { DARABONBA_PTR_SET_VALUE(outClipboardSizeUnit_, outClipboardSizeUnit) };


    protected:
      shared_ptr<int32_t> clipboardSize_ {};
      shared_ptr<string> clipboardSizeUnit_ {};
      shared_ptr<string> clipboardType_ {};
      shared_ptr<string> grainedType_ {};
      shared_ptr<int32_t> inClipboardSize_ {};
      shared_ptr<string> inClipboardSizeUnit_ {};
      shared_ptr<int32_t> outClipboardSize_ {};
      shared_ptr<string> outClipboardSizeUnit_ {};
    };

    class ClientType : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientType& obj) { 
        DARABONBA_PTR_TO_JSON(ClientType, clientType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ClientType& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ClientType() = default ;
      ClientType(const ClientType &) = default ;
      ClientType(ClientType &&) = default ;
      ClientType(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientType() = default ;
      ClientType& operator=(const ClientType &) = default ;
      ClientType& operator=(ClientType &&) = default ;
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
      inline ClientType& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ClientType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The client type for logon method control.
      shared_ptr<string> clientType_ {};
      // The logon method control setting that specifies whether a specific type of client is allowed to log on to the cloud desktop.
      // 
      // > If you do not configure the `ClientType` parameters, all types of clients are allowed to log on to the cloud desktop by default.
      shared_ptr<string> status_ {};
    };

    class AuthorizeSecurityPolicyRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizeSecurityPolicyRule& obj) { 
        DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizeSecurityPolicyRule& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AuthorizeSecurityPolicyRule() = default ;
      AuthorizeSecurityPolicyRule(const AuthorizeSecurityPolicyRule &) = default ;
      AuthorizeSecurityPolicyRule(AuthorizeSecurityPolicyRule &&) = default ;
      AuthorizeSecurityPolicyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizeSecurityPolicyRule() = default ;
      AuthorizeSecurityPolicyRule& operator=(const AuthorizeSecurityPolicyRule &) = default ;
      AuthorizeSecurityPolicyRule& operator=(AuthorizeSecurityPolicyRule &&) = default ;
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
      inline AuthorizeSecurityPolicyRule& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AuthorizeSecurityPolicyRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline AuthorizeSecurityPolicyRule& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline AuthorizeSecurityPolicyRule& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline AuthorizeSecurityPolicyRule& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline AuthorizeSecurityPolicyRule& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AuthorizeSecurityPolicyRule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The target of the security group control rule. An IPv4 CIDR block in CIDR notation.
      shared_ptr<string> cidrIp_ {};
      // The description of the security group control rule.
      shared_ptr<string> description_ {};
      // The protocol type of the security group control rule.
      shared_ptr<string> ipProtocol_ {};
      // The authorization policy of the security group control rule.
      shared_ptr<string> policy_ {};
      // The port range of the security group control rule. The port range is determined by the value of IpProtocol:
      // 
      // - TCP or UDP: Valid values: 1 to 65535. Separate the start port and end port with a forward slash (/). Example: 1/200.
      // - ICMP: -1/-1.
      // - GRE: -1/-1.
      // - If IpProtocol is set to all: -1/-1.
      // 
      // For common ports of typical applications, see [Common ports](https://help.aliyun.com/document_detail/40724.html).
      shared_ptr<string> portRange_ {};
      // The priority of the security group control rule. A smaller value indicates a higher priority.    
      // Valid values: 1 to 60.    
      // Default value: 1.
      shared_ptr<string> priority_ {};
      // The direction of the security group control rule.
      shared_ptr<string> type_ {};
    };

    class AuthorizeAccessPolicyRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizeAccessPolicyRule& obj) { 
        DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
        DARABONBA_PTR_TO_JSON(Description, description_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizeAccessPolicyRule& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
      };
      AuthorizeAccessPolicyRule() = default ;
      AuthorizeAccessPolicyRule(const AuthorizeAccessPolicyRule &) = default ;
      AuthorizeAccessPolicyRule(AuthorizeAccessPolicyRule &&) = default ;
      AuthorizeAccessPolicyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizeAccessPolicyRule() = default ;
      AuthorizeAccessPolicyRule& operator=(const AuthorizeAccessPolicyRule &) = default ;
      AuthorizeAccessPolicyRule& operator=(AuthorizeAccessPolicyRule &&) = default ;
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
      inline AuthorizeAccessPolicyRule& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AuthorizeAccessPolicyRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    protected:
      // The client access IP CIDR block. An IPv4 CIDR block in CIDR notation.
      shared_ptr<string> cidrIp_ {};
      // The description of the client IP whitelist entry.
      shared_ptr<string> description_ {};
    };

    virtual bool empty() const override { return this->academicProxy_ == nullptr
        && this->adminAccess_ == nullptr && this->adminKeyboardOnFullScreen_ == nullptr && this->adminKeyboardOnWindows_ == nullptr && this->appContentProtection_ == nullptr && this->authorizeAccessPolicyRule_ == nullptr
        && this->authorizeSecurityPolicyRule_ == nullptr && this->autoReconnect_ == nullptr && this->businessChannel_ == nullptr && this->businessType_ == nullptr && this->cameraRedirect_ == nullptr
        && this->clientControlMenu_ == nullptr && this->clientCreateSnapshot_ == nullptr && this->clientType_ == nullptr && this->clipboard_ == nullptr && this->clipboardGraineds_ == nullptr
        && this->clipboardScope_ == nullptr && this->colorEnhancement_ == nullptr && this->cpdDriveClipboard_ == nullptr && this->cpuDownGradeDuration_ == nullptr && this->cpuOverload_ == nullptr
        && this->cpuProcessors_ == nullptr && this->cpuProtectedMode_ == nullptr && this->cpuRateLimit_ == nullptr && this->cpuSampleDuration_ == nullptr && this->cpuSingleRateLimit_ == nullptr
        && this->description_ == nullptr && this->deviceConnectHint_ == nullptr && this->deviceRedirects_ == nullptr && this->deviceRules_ == nullptr && this->disconnectKeepSession_ == nullptr
        && this->disconnectKeepSessionTime_ == nullptr && this->diskOverload_ == nullptr && this->displayMode_ == nullptr && this->domainResolveRule_ == nullptr && this->domainResolveRuleType_ == nullptr
        && this->enableSessionRateLimiting_ == nullptr && this->endUserApplyAdminCoordinate_ == nullptr && this->endUserGroupCoordinate_ == nullptr && this->externalDrive_ == nullptr && this->fileMigrate_ == nullptr
        && this->fileTransferAddress_ == nullptr && this->fileTransferInSize_ == nullptr && this->fileTransferInUnit_ == nullptr && this->fileTransferOutSize_ == nullptr && this->fileTransferOutUnit_ == nullptr
        && this->fileTransferSizeLimit_ == nullptr && this->fileTransferSpeed_ == nullptr && this->fileTransferSpeedLocation_ == nullptr && this->gpuAcceleration_ == nullptr && this->hoverConfigMsg_ == nullptr
        && this->html5FileTransfer_ == nullptr && this->internetCommunicationProtocol_ == nullptr && this->internetPrinter_ == nullptr && this->keyboardControl_ == nullptr && this->localDrive_ == nullptr
        && this->maxReconnectTime_ == nullptr && this->memoryDownGradeDuration_ == nullptr && this->memoryOverload_ == nullptr && this->memoryProcessors_ == nullptr && this->memoryProtectedMode_ == nullptr
        && this->memoryRateLimit_ == nullptr && this->memorySampleDuration_ == nullptr && this->memorySingleRateLimit_ == nullptr && this->mobileRestart_ == nullptr && this->mobileSafeMenu_ == nullptr
        && this->mobileShutdown_ == nullptr && this->mobileWuyingKeeper_ == nullptr && this->mobileWyAssistant_ == nullptr && this->modelLibrary_ == nullptr && this->multiScreen_ == nullptr
        && this->name_ == nullptr && this->netRedirect_ == nullptr && this->netRedirectRule_ == nullptr && this->noOperationDisconnect_ == nullptr && this->noOperationDisconnectTime_ == nullptr
        && this->portProxy_ == nullptr && this->printerRedirect_ == nullptr && this->qualityEnhancement_ == nullptr && this->recordEventDuration_ == nullptr && this->recordEventFileExts_ == nullptr
        && this->recordEventFilePaths_ == nullptr && this->recordEventLevels_ == nullptr && this->recordEventRegisters_ == nullptr && this->recordEvents_ == nullptr && this->recording_ == nullptr
        && this->recordingAudio_ == nullptr && this->recordingDuration_ == nullptr && this->recordingEndTime_ == nullptr && this->recordingExpires_ == nullptr && this->recordingFps_ == nullptr
        && this->recordingStartTime_ == nullptr && this->recordingUserNotify_ == nullptr && this->recordingUserNotifyMessage_ == nullptr && this->regionId_ == nullptr && this->remoteCoordinate_ == nullptr
        && this->resetDesktop_ == nullptr && this->resolutionDpi_ == nullptr && this->resolutionHeight_ == nullptr && this->resolutionModel_ == nullptr && this->resolutionWidth_ == nullptr
        && this->resourceType_ == nullptr && this->safeMenu_ == nullptr && this->scope_ == nullptr && this->scopeValue_ == nullptr && this->screenDisplayMode_ == nullptr
        && this->sessionMaxRateKbps_ == nullptr && this->smoothEnhancement_ == nullptr && this->statusMonitor_ == nullptr && this->streamingMode_ == nullptr && this->targetFps_ == nullptr
        && this->taskbar_ == nullptr && this->usbRedirect_ == nullptr && this->usbSupplyRedirectRule_ == nullptr && this->useTime_ == nullptr && this->videoEncAvgKbps_ == nullptr
        && this->videoEncMaxQP_ == nullptr && this->videoEncMinQP_ == nullptr && this->videoEncPeakKbps_ == nullptr && this->videoEncPolicy_ == nullptr && this->videoRedirect_ == nullptr
        && this->visualQuality_ == nullptr && this->watermark_ == nullptr && this->watermarkAntiCam_ == nullptr && this->watermarkColor_ == nullptr && this->watermarkColumnAmount_ == nullptr
        && this->watermarkCustomText_ == nullptr && this->watermarkDegree_ == nullptr && this->watermarkFontSize_ == nullptr && this->watermarkFontStyle_ == nullptr && this->watermarkPower_ == nullptr
        && this->watermarkRowAmount_ == nullptr && this->watermarkSecurity_ == nullptr && this->watermarkShadow_ == nullptr && this->watermarkTransparencyValue_ == nullptr && this->watermarkType_ == nullptr
        && this->wuyingKeeper_ == nullptr && this->wyAssistant_ == nullptr; };
    // academicProxy Field Functions 
    bool hasAcademicProxy() const { return this->academicProxy_ != nullptr;};
    void deleteAcademicProxy() { this->academicProxy_ = nullptr;};
    inline string getAcademicProxy() const { DARABONBA_PTR_GET_DEFAULT(academicProxy_, "") };
    inline CreateCenterPolicyRequest& setAcademicProxy(string academicProxy) { DARABONBA_PTR_SET_VALUE(academicProxy_, academicProxy) };


    // adminAccess Field Functions 
    bool hasAdminAccess() const { return this->adminAccess_ != nullptr;};
    void deleteAdminAccess() { this->adminAccess_ = nullptr;};
    inline string getAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(adminAccess_, "") };
    inline CreateCenterPolicyRequest& setAdminAccess(string adminAccess) { DARABONBA_PTR_SET_VALUE(adminAccess_, adminAccess) };


    // adminKeyboardOnFullScreen Field Functions 
    bool hasAdminKeyboardOnFullScreen() const { return this->adminKeyboardOnFullScreen_ != nullptr;};
    void deleteAdminKeyboardOnFullScreen() { this->adminKeyboardOnFullScreen_ = nullptr;};
    inline string getAdminKeyboardOnFullScreen() const { DARABONBA_PTR_GET_DEFAULT(adminKeyboardOnFullScreen_, "") };
    inline CreateCenterPolicyRequest& setAdminKeyboardOnFullScreen(string adminKeyboardOnFullScreen) { DARABONBA_PTR_SET_VALUE(adminKeyboardOnFullScreen_, adminKeyboardOnFullScreen) };


    // adminKeyboardOnWindows Field Functions 
    bool hasAdminKeyboardOnWindows() const { return this->adminKeyboardOnWindows_ != nullptr;};
    void deleteAdminKeyboardOnWindows() { this->adminKeyboardOnWindows_ = nullptr;};
    inline string getAdminKeyboardOnWindows() const { DARABONBA_PTR_GET_DEFAULT(adminKeyboardOnWindows_, "") };
    inline CreateCenterPolicyRequest& setAdminKeyboardOnWindows(string adminKeyboardOnWindows) { DARABONBA_PTR_SET_VALUE(adminKeyboardOnWindows_, adminKeyboardOnWindows) };


    // appContentProtection Field Functions 
    bool hasAppContentProtection() const { return this->appContentProtection_ != nullptr;};
    void deleteAppContentProtection() { this->appContentProtection_ = nullptr;};
    inline string getAppContentProtection() const { DARABONBA_PTR_GET_DEFAULT(appContentProtection_, "") };
    inline CreateCenterPolicyRequest& setAppContentProtection(string appContentProtection) { DARABONBA_PTR_SET_VALUE(appContentProtection_, appContentProtection) };


    // authorizeAccessPolicyRule Field Functions 
    bool hasAuthorizeAccessPolicyRule() const { return this->authorizeAccessPolicyRule_ != nullptr;};
    void deleteAuthorizeAccessPolicyRule() { this->authorizeAccessPolicyRule_ = nullptr;};
    inline const vector<CreateCenterPolicyRequest::AuthorizeAccessPolicyRule> & getAuthorizeAccessPolicyRule() const { DARABONBA_PTR_GET_CONST(authorizeAccessPolicyRule_, vector<CreateCenterPolicyRequest::AuthorizeAccessPolicyRule>) };
    inline vector<CreateCenterPolicyRequest::AuthorizeAccessPolicyRule> getAuthorizeAccessPolicyRule() { DARABONBA_PTR_GET(authorizeAccessPolicyRule_, vector<CreateCenterPolicyRequest::AuthorizeAccessPolicyRule>) };
    inline CreateCenterPolicyRequest& setAuthorizeAccessPolicyRule(const vector<CreateCenterPolicyRequest::AuthorizeAccessPolicyRule> & authorizeAccessPolicyRule) { DARABONBA_PTR_SET_VALUE(authorizeAccessPolicyRule_, authorizeAccessPolicyRule) };
    inline CreateCenterPolicyRequest& setAuthorizeAccessPolicyRule(vector<CreateCenterPolicyRequest::AuthorizeAccessPolicyRule> && authorizeAccessPolicyRule) { DARABONBA_PTR_SET_RVALUE(authorizeAccessPolicyRule_, authorizeAccessPolicyRule) };


    // authorizeSecurityPolicyRule Field Functions 
    bool hasAuthorizeSecurityPolicyRule() const { return this->authorizeSecurityPolicyRule_ != nullptr;};
    void deleteAuthorizeSecurityPolicyRule() { this->authorizeSecurityPolicyRule_ = nullptr;};
    inline const vector<CreateCenterPolicyRequest::AuthorizeSecurityPolicyRule> & getAuthorizeSecurityPolicyRule() const { DARABONBA_PTR_GET_CONST(authorizeSecurityPolicyRule_, vector<CreateCenterPolicyRequest::AuthorizeSecurityPolicyRule>) };
    inline vector<CreateCenterPolicyRequest::AuthorizeSecurityPolicyRule> getAuthorizeSecurityPolicyRule() { DARABONBA_PTR_GET(authorizeSecurityPolicyRule_, vector<CreateCenterPolicyRequest::AuthorizeSecurityPolicyRule>) };
    inline CreateCenterPolicyRequest& setAuthorizeSecurityPolicyRule(const vector<CreateCenterPolicyRequest::AuthorizeSecurityPolicyRule> & authorizeSecurityPolicyRule) { DARABONBA_PTR_SET_VALUE(authorizeSecurityPolicyRule_, authorizeSecurityPolicyRule) };
    inline CreateCenterPolicyRequest& setAuthorizeSecurityPolicyRule(vector<CreateCenterPolicyRequest::AuthorizeSecurityPolicyRule> && authorizeSecurityPolicyRule) { DARABONBA_PTR_SET_RVALUE(authorizeSecurityPolicyRule_, authorizeSecurityPolicyRule) };


    // autoReconnect Field Functions 
    bool hasAutoReconnect() const { return this->autoReconnect_ != nullptr;};
    void deleteAutoReconnect() { this->autoReconnect_ = nullptr;};
    inline string getAutoReconnect() const { DARABONBA_PTR_GET_DEFAULT(autoReconnect_, "") };
    inline CreateCenterPolicyRequest& setAutoReconnect(string autoReconnect) { DARABONBA_PTR_SET_VALUE(autoReconnect_, autoReconnect) };


    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline CreateCenterPolicyRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline int32_t getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, 0) };
    inline CreateCenterPolicyRequest& setBusinessType(int32_t businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // cameraRedirect Field Functions 
    bool hasCameraRedirect() const { return this->cameraRedirect_ != nullptr;};
    void deleteCameraRedirect() { this->cameraRedirect_ = nullptr;};
    inline string getCameraRedirect() const { DARABONBA_PTR_GET_DEFAULT(cameraRedirect_, "") };
    inline CreateCenterPolicyRequest& setCameraRedirect(string cameraRedirect) { DARABONBA_PTR_SET_VALUE(cameraRedirect_, cameraRedirect) };


    // clientControlMenu Field Functions 
    bool hasClientControlMenu() const { return this->clientControlMenu_ != nullptr;};
    void deleteClientControlMenu() { this->clientControlMenu_ = nullptr;};
    inline string getClientControlMenu() const { DARABONBA_PTR_GET_DEFAULT(clientControlMenu_, "") };
    inline CreateCenterPolicyRequest& setClientControlMenu(string clientControlMenu) { DARABONBA_PTR_SET_VALUE(clientControlMenu_, clientControlMenu) };


    // clientCreateSnapshot Field Functions 
    bool hasClientCreateSnapshot() const { return this->clientCreateSnapshot_ != nullptr;};
    void deleteClientCreateSnapshot() { this->clientCreateSnapshot_ = nullptr;};
    inline string getClientCreateSnapshot() const { DARABONBA_PTR_GET_DEFAULT(clientCreateSnapshot_, "") };
    inline CreateCenterPolicyRequest& setClientCreateSnapshot(string clientCreateSnapshot) { DARABONBA_PTR_SET_VALUE(clientCreateSnapshot_, clientCreateSnapshot) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline const vector<CreateCenterPolicyRequest::ClientType> & getClientType() const { DARABONBA_PTR_GET_CONST(clientType_, vector<CreateCenterPolicyRequest::ClientType>) };
    inline vector<CreateCenterPolicyRequest::ClientType> getClientType() { DARABONBA_PTR_GET(clientType_, vector<CreateCenterPolicyRequest::ClientType>) };
    inline CreateCenterPolicyRequest& setClientType(const vector<CreateCenterPolicyRequest::ClientType> & clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };
    inline CreateCenterPolicyRequest& setClientType(vector<CreateCenterPolicyRequest::ClientType> && clientType) { DARABONBA_PTR_SET_RVALUE(clientType_, clientType) };


    // clipboard Field Functions 
    bool hasClipboard() const { return this->clipboard_ != nullptr;};
    void deleteClipboard() { this->clipboard_ = nullptr;};
    inline string getClipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
    inline CreateCenterPolicyRequest& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


    // clipboardGraineds Field Functions 
    bool hasClipboardGraineds() const { return this->clipboardGraineds_ != nullptr;};
    void deleteClipboardGraineds() { this->clipboardGraineds_ = nullptr;};
    inline const vector<CreateCenterPolicyRequest::ClipboardGraineds> & getClipboardGraineds() const { DARABONBA_PTR_GET_CONST(clipboardGraineds_, vector<CreateCenterPolicyRequest::ClipboardGraineds>) };
    inline vector<CreateCenterPolicyRequest::ClipboardGraineds> getClipboardGraineds() { DARABONBA_PTR_GET(clipboardGraineds_, vector<CreateCenterPolicyRequest::ClipboardGraineds>) };
    inline CreateCenterPolicyRequest& setClipboardGraineds(const vector<CreateCenterPolicyRequest::ClipboardGraineds> & clipboardGraineds) { DARABONBA_PTR_SET_VALUE(clipboardGraineds_, clipboardGraineds) };
    inline CreateCenterPolicyRequest& setClipboardGraineds(vector<CreateCenterPolicyRequest::ClipboardGraineds> && clipboardGraineds) { DARABONBA_PTR_SET_RVALUE(clipboardGraineds_, clipboardGraineds) };


    // clipboardScope Field Functions 
    bool hasClipboardScope() const { return this->clipboardScope_ != nullptr;};
    void deleteClipboardScope() { this->clipboardScope_ = nullptr;};
    inline string getClipboardScope() const { DARABONBA_PTR_GET_DEFAULT(clipboardScope_, "") };
    inline CreateCenterPolicyRequest& setClipboardScope(string clipboardScope) { DARABONBA_PTR_SET_VALUE(clipboardScope_, clipboardScope) };


    // colorEnhancement Field Functions 
    bool hasColorEnhancement() const { return this->colorEnhancement_ != nullptr;};
    void deleteColorEnhancement() { this->colorEnhancement_ = nullptr;};
    inline string getColorEnhancement() const { DARABONBA_PTR_GET_DEFAULT(colorEnhancement_, "") };
    inline CreateCenterPolicyRequest& setColorEnhancement(string colorEnhancement) { DARABONBA_PTR_SET_VALUE(colorEnhancement_, colorEnhancement) };


    // cpdDriveClipboard Field Functions 
    bool hasCpdDriveClipboard() const { return this->cpdDriveClipboard_ != nullptr;};
    void deleteCpdDriveClipboard() { this->cpdDriveClipboard_ = nullptr;};
    inline string getCpdDriveClipboard() const { DARABONBA_PTR_GET_DEFAULT(cpdDriveClipboard_, "") };
    inline CreateCenterPolicyRequest& setCpdDriveClipboard(string cpdDriveClipboard) { DARABONBA_PTR_SET_VALUE(cpdDriveClipboard_, cpdDriveClipboard) };


    // cpuDownGradeDuration Field Functions 
    bool hasCpuDownGradeDuration() const { return this->cpuDownGradeDuration_ != nullptr;};
    void deleteCpuDownGradeDuration() { this->cpuDownGradeDuration_ = nullptr;};
    inline int32_t getCpuDownGradeDuration() const { DARABONBA_PTR_GET_DEFAULT(cpuDownGradeDuration_, 0) };
    inline CreateCenterPolicyRequest& setCpuDownGradeDuration(int32_t cpuDownGradeDuration) { DARABONBA_PTR_SET_VALUE(cpuDownGradeDuration_, cpuDownGradeDuration) };


    // cpuOverload Field Functions 
    bool hasCpuOverload() const { return this->cpuOverload_ != nullptr;};
    void deleteCpuOverload() { this->cpuOverload_ = nullptr;};
    inline string getCpuOverload() const { DARABONBA_PTR_GET_DEFAULT(cpuOverload_, "") };
    inline CreateCenterPolicyRequest& setCpuOverload(string cpuOverload) { DARABONBA_PTR_SET_VALUE(cpuOverload_, cpuOverload) };


    // cpuProcessors Field Functions 
    bool hasCpuProcessors() const { return this->cpuProcessors_ != nullptr;};
    void deleteCpuProcessors() { this->cpuProcessors_ = nullptr;};
    inline const vector<string> & getCpuProcessors() const { DARABONBA_PTR_GET_CONST(cpuProcessors_, vector<string>) };
    inline vector<string> getCpuProcessors() { DARABONBA_PTR_GET(cpuProcessors_, vector<string>) };
    inline CreateCenterPolicyRequest& setCpuProcessors(const vector<string> & cpuProcessors) { DARABONBA_PTR_SET_VALUE(cpuProcessors_, cpuProcessors) };
    inline CreateCenterPolicyRequest& setCpuProcessors(vector<string> && cpuProcessors) { DARABONBA_PTR_SET_RVALUE(cpuProcessors_, cpuProcessors) };


    // cpuProtectedMode Field Functions 
    bool hasCpuProtectedMode() const { return this->cpuProtectedMode_ != nullptr;};
    void deleteCpuProtectedMode() { this->cpuProtectedMode_ = nullptr;};
    inline string getCpuProtectedMode() const { DARABONBA_PTR_GET_DEFAULT(cpuProtectedMode_, "") };
    inline CreateCenterPolicyRequest& setCpuProtectedMode(string cpuProtectedMode) { DARABONBA_PTR_SET_VALUE(cpuProtectedMode_, cpuProtectedMode) };


    // cpuRateLimit Field Functions 
    bool hasCpuRateLimit() const { return this->cpuRateLimit_ != nullptr;};
    void deleteCpuRateLimit() { this->cpuRateLimit_ = nullptr;};
    inline int32_t getCpuRateLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuRateLimit_, 0) };
    inline CreateCenterPolicyRequest& setCpuRateLimit(int32_t cpuRateLimit) { DARABONBA_PTR_SET_VALUE(cpuRateLimit_, cpuRateLimit) };


    // cpuSampleDuration Field Functions 
    bool hasCpuSampleDuration() const { return this->cpuSampleDuration_ != nullptr;};
    void deleteCpuSampleDuration() { this->cpuSampleDuration_ = nullptr;};
    inline int32_t getCpuSampleDuration() const { DARABONBA_PTR_GET_DEFAULT(cpuSampleDuration_, 0) };
    inline CreateCenterPolicyRequest& setCpuSampleDuration(int32_t cpuSampleDuration) { DARABONBA_PTR_SET_VALUE(cpuSampleDuration_, cpuSampleDuration) };


    // cpuSingleRateLimit Field Functions 
    bool hasCpuSingleRateLimit() const { return this->cpuSingleRateLimit_ != nullptr;};
    void deleteCpuSingleRateLimit() { this->cpuSingleRateLimit_ = nullptr;};
    inline int32_t getCpuSingleRateLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuSingleRateLimit_, 0) };
    inline CreateCenterPolicyRequest& setCpuSingleRateLimit(int32_t cpuSingleRateLimit) { DARABONBA_PTR_SET_VALUE(cpuSingleRateLimit_, cpuSingleRateLimit) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCenterPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceConnectHint Field Functions 
    bool hasDeviceConnectHint() const { return this->deviceConnectHint_ != nullptr;};
    void deleteDeviceConnectHint() { this->deviceConnectHint_ = nullptr;};
    inline string getDeviceConnectHint() const { DARABONBA_PTR_GET_DEFAULT(deviceConnectHint_, "") };
    inline CreateCenterPolicyRequest& setDeviceConnectHint(string deviceConnectHint) { DARABONBA_PTR_SET_VALUE(deviceConnectHint_, deviceConnectHint) };


    // deviceRedirects Field Functions 
    bool hasDeviceRedirects() const { return this->deviceRedirects_ != nullptr;};
    void deleteDeviceRedirects() { this->deviceRedirects_ = nullptr;};
    inline const vector<CreateCenterPolicyRequest::DeviceRedirects> & getDeviceRedirects() const { DARABONBA_PTR_GET_CONST(deviceRedirects_, vector<CreateCenterPolicyRequest::DeviceRedirects>) };
    inline vector<CreateCenterPolicyRequest::DeviceRedirects> getDeviceRedirects() { DARABONBA_PTR_GET(deviceRedirects_, vector<CreateCenterPolicyRequest::DeviceRedirects>) };
    inline CreateCenterPolicyRequest& setDeviceRedirects(const vector<CreateCenterPolicyRequest::DeviceRedirects> & deviceRedirects) { DARABONBA_PTR_SET_VALUE(deviceRedirects_, deviceRedirects) };
    inline CreateCenterPolicyRequest& setDeviceRedirects(vector<CreateCenterPolicyRequest::DeviceRedirects> && deviceRedirects) { DARABONBA_PTR_SET_RVALUE(deviceRedirects_, deviceRedirects) };


    // deviceRules Field Functions 
    bool hasDeviceRules() const { return this->deviceRules_ != nullptr;};
    void deleteDeviceRules() { this->deviceRules_ = nullptr;};
    inline const vector<CreateCenterPolicyRequest::DeviceRules> & getDeviceRules() const { DARABONBA_PTR_GET_CONST(deviceRules_, vector<CreateCenterPolicyRequest::DeviceRules>) };
    inline vector<CreateCenterPolicyRequest::DeviceRules> getDeviceRules() { DARABONBA_PTR_GET(deviceRules_, vector<CreateCenterPolicyRequest::DeviceRules>) };
    inline CreateCenterPolicyRequest& setDeviceRules(const vector<CreateCenterPolicyRequest::DeviceRules> & deviceRules) { DARABONBA_PTR_SET_VALUE(deviceRules_, deviceRules) };
    inline CreateCenterPolicyRequest& setDeviceRules(vector<CreateCenterPolicyRequest::DeviceRules> && deviceRules) { DARABONBA_PTR_SET_RVALUE(deviceRules_, deviceRules) };


    // disconnectKeepSession Field Functions 
    bool hasDisconnectKeepSession() const { return this->disconnectKeepSession_ != nullptr;};
    void deleteDisconnectKeepSession() { this->disconnectKeepSession_ = nullptr;};
    inline string getDisconnectKeepSession() const { DARABONBA_PTR_GET_DEFAULT(disconnectKeepSession_, "") };
    inline CreateCenterPolicyRequest& setDisconnectKeepSession(string disconnectKeepSession) { DARABONBA_PTR_SET_VALUE(disconnectKeepSession_, disconnectKeepSession) };


    // disconnectKeepSessionTime Field Functions 
    bool hasDisconnectKeepSessionTime() const { return this->disconnectKeepSessionTime_ != nullptr;};
    void deleteDisconnectKeepSessionTime() { this->disconnectKeepSessionTime_ = nullptr;};
    inline int32_t getDisconnectKeepSessionTime() const { DARABONBA_PTR_GET_DEFAULT(disconnectKeepSessionTime_, 0) };
    inline CreateCenterPolicyRequest& setDisconnectKeepSessionTime(int32_t disconnectKeepSessionTime) { DARABONBA_PTR_SET_VALUE(disconnectKeepSessionTime_, disconnectKeepSessionTime) };


    // diskOverload Field Functions 
    bool hasDiskOverload() const { return this->diskOverload_ != nullptr;};
    void deleteDiskOverload() { this->diskOverload_ = nullptr;};
    inline string getDiskOverload() const { DARABONBA_PTR_GET_DEFAULT(diskOverload_, "") };
    inline CreateCenterPolicyRequest& setDiskOverload(string diskOverload) { DARABONBA_PTR_SET_VALUE(diskOverload_, diskOverload) };


    // displayMode Field Functions 
    bool hasDisplayMode() const { return this->displayMode_ != nullptr;};
    void deleteDisplayMode() { this->displayMode_ = nullptr;};
    inline string getDisplayMode() const { DARABONBA_PTR_GET_DEFAULT(displayMode_, "") };
    inline CreateCenterPolicyRequest& setDisplayMode(string displayMode) { DARABONBA_PTR_SET_VALUE(displayMode_, displayMode) };


    // domainResolveRule Field Functions 
    bool hasDomainResolveRule() const { return this->domainResolveRule_ != nullptr;};
    void deleteDomainResolveRule() { this->domainResolveRule_ = nullptr;};
    inline const vector<CreateCenterPolicyRequest::DomainResolveRule> & getDomainResolveRule() const { DARABONBA_PTR_GET_CONST(domainResolveRule_, vector<CreateCenterPolicyRequest::DomainResolveRule>) };
    inline vector<CreateCenterPolicyRequest::DomainResolveRule> getDomainResolveRule() { DARABONBA_PTR_GET(domainResolveRule_, vector<CreateCenterPolicyRequest::DomainResolveRule>) };
    inline CreateCenterPolicyRequest& setDomainResolveRule(const vector<CreateCenterPolicyRequest::DomainResolveRule> & domainResolveRule) { DARABONBA_PTR_SET_VALUE(domainResolveRule_, domainResolveRule) };
    inline CreateCenterPolicyRequest& setDomainResolveRule(vector<CreateCenterPolicyRequest::DomainResolveRule> && domainResolveRule) { DARABONBA_PTR_SET_RVALUE(domainResolveRule_, domainResolveRule) };


    // domainResolveRuleType Field Functions 
    bool hasDomainResolveRuleType() const { return this->domainResolveRuleType_ != nullptr;};
    void deleteDomainResolveRuleType() { this->domainResolveRuleType_ = nullptr;};
    inline string getDomainResolveRuleType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveRuleType_, "") };
    inline CreateCenterPolicyRequest& setDomainResolveRuleType(string domainResolveRuleType) { DARABONBA_PTR_SET_VALUE(domainResolveRuleType_, domainResolveRuleType) };


    // enableSessionRateLimiting Field Functions 
    bool hasEnableSessionRateLimiting() const { return this->enableSessionRateLimiting_ != nullptr;};
    void deleteEnableSessionRateLimiting() { this->enableSessionRateLimiting_ = nullptr;};
    inline string getEnableSessionRateLimiting() const { DARABONBA_PTR_GET_DEFAULT(enableSessionRateLimiting_, "") };
    inline CreateCenterPolicyRequest& setEnableSessionRateLimiting(string enableSessionRateLimiting) { DARABONBA_PTR_SET_VALUE(enableSessionRateLimiting_, enableSessionRateLimiting) };


    // endUserApplyAdminCoordinate Field Functions 
    bool hasEndUserApplyAdminCoordinate() const { return this->endUserApplyAdminCoordinate_ != nullptr;};
    void deleteEndUserApplyAdminCoordinate() { this->endUserApplyAdminCoordinate_ = nullptr;};
    inline string getEndUserApplyAdminCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserApplyAdminCoordinate_, "") };
    inline CreateCenterPolicyRequest& setEndUserApplyAdminCoordinate(string endUserApplyAdminCoordinate) { DARABONBA_PTR_SET_VALUE(endUserApplyAdminCoordinate_, endUserApplyAdminCoordinate) };


    // endUserGroupCoordinate Field Functions 
    bool hasEndUserGroupCoordinate() const { return this->endUserGroupCoordinate_ != nullptr;};
    void deleteEndUserGroupCoordinate() { this->endUserGroupCoordinate_ = nullptr;};
    inline string getEndUserGroupCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserGroupCoordinate_, "") };
    inline CreateCenterPolicyRequest& setEndUserGroupCoordinate(string endUserGroupCoordinate) { DARABONBA_PTR_SET_VALUE(endUserGroupCoordinate_, endUserGroupCoordinate) };


    // externalDrive Field Functions 
    bool hasExternalDrive() const { return this->externalDrive_ != nullptr;};
    void deleteExternalDrive() { this->externalDrive_ = nullptr;};
    inline string getExternalDrive() const { DARABONBA_PTR_GET_DEFAULT(externalDrive_, "") };
    inline CreateCenterPolicyRequest& setExternalDrive(string externalDrive) { DARABONBA_PTR_SET_VALUE(externalDrive_, externalDrive) };


    // fileMigrate Field Functions 
    bool hasFileMigrate() const { return this->fileMigrate_ != nullptr;};
    void deleteFileMigrate() { this->fileMigrate_ = nullptr;};
    inline string getFileMigrate() const { DARABONBA_PTR_GET_DEFAULT(fileMigrate_, "") };
    inline CreateCenterPolicyRequest& setFileMigrate(string fileMigrate) { DARABONBA_PTR_SET_VALUE(fileMigrate_, fileMigrate) };


    // fileTransferAddress Field Functions 
    bool hasFileTransferAddress() const { return this->fileTransferAddress_ != nullptr;};
    void deleteFileTransferAddress() { this->fileTransferAddress_ = nullptr;};
    inline string getFileTransferAddress() const { DARABONBA_PTR_GET_DEFAULT(fileTransferAddress_, "") };
    inline CreateCenterPolicyRequest& setFileTransferAddress(string fileTransferAddress) { DARABONBA_PTR_SET_VALUE(fileTransferAddress_, fileTransferAddress) };


    // fileTransferInSize Field Functions 
    bool hasFileTransferInSize() const { return this->fileTransferInSize_ != nullptr;};
    void deleteFileTransferInSize() { this->fileTransferInSize_ = nullptr;};
    inline int32_t getFileTransferInSize() const { DARABONBA_PTR_GET_DEFAULT(fileTransferInSize_, 0) };
    inline CreateCenterPolicyRequest& setFileTransferInSize(int32_t fileTransferInSize) { DARABONBA_PTR_SET_VALUE(fileTransferInSize_, fileTransferInSize) };


    // fileTransferInUnit Field Functions 
    bool hasFileTransferInUnit() const { return this->fileTransferInUnit_ != nullptr;};
    void deleteFileTransferInUnit() { this->fileTransferInUnit_ = nullptr;};
    inline string getFileTransferInUnit() const { DARABONBA_PTR_GET_DEFAULT(fileTransferInUnit_, "") };
    inline CreateCenterPolicyRequest& setFileTransferInUnit(string fileTransferInUnit) { DARABONBA_PTR_SET_VALUE(fileTransferInUnit_, fileTransferInUnit) };


    // fileTransferOutSize Field Functions 
    bool hasFileTransferOutSize() const { return this->fileTransferOutSize_ != nullptr;};
    void deleteFileTransferOutSize() { this->fileTransferOutSize_ = nullptr;};
    inline int32_t getFileTransferOutSize() const { DARABONBA_PTR_GET_DEFAULT(fileTransferOutSize_, 0) };
    inline CreateCenterPolicyRequest& setFileTransferOutSize(int32_t fileTransferOutSize) { DARABONBA_PTR_SET_VALUE(fileTransferOutSize_, fileTransferOutSize) };


    // fileTransferOutUnit Field Functions 
    bool hasFileTransferOutUnit() const { return this->fileTransferOutUnit_ != nullptr;};
    void deleteFileTransferOutUnit() { this->fileTransferOutUnit_ = nullptr;};
    inline string getFileTransferOutUnit() const { DARABONBA_PTR_GET_DEFAULT(fileTransferOutUnit_, "") };
    inline CreateCenterPolicyRequest& setFileTransferOutUnit(string fileTransferOutUnit) { DARABONBA_PTR_SET_VALUE(fileTransferOutUnit_, fileTransferOutUnit) };


    // fileTransferSizeLimit Field Functions 
    bool hasFileTransferSizeLimit() const { return this->fileTransferSizeLimit_ != nullptr;};
    void deleteFileTransferSizeLimit() { this->fileTransferSizeLimit_ = nullptr;};
    inline string getFileTransferSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(fileTransferSizeLimit_, "") };
    inline CreateCenterPolicyRequest& setFileTransferSizeLimit(string fileTransferSizeLimit) { DARABONBA_PTR_SET_VALUE(fileTransferSizeLimit_, fileTransferSizeLimit) };


    // fileTransferSpeed Field Functions 
    bool hasFileTransferSpeed() const { return this->fileTransferSpeed_ != nullptr;};
    void deleteFileTransferSpeed() { this->fileTransferSpeed_ = nullptr;};
    inline string getFileTransferSpeed() const { DARABONBA_PTR_GET_DEFAULT(fileTransferSpeed_, "") };
    inline CreateCenterPolicyRequest& setFileTransferSpeed(string fileTransferSpeed) { DARABONBA_PTR_SET_VALUE(fileTransferSpeed_, fileTransferSpeed) };


    // fileTransferSpeedLocation Field Functions 
    bool hasFileTransferSpeedLocation() const { return this->fileTransferSpeedLocation_ != nullptr;};
    void deleteFileTransferSpeedLocation() { this->fileTransferSpeedLocation_ = nullptr;};
    inline string getFileTransferSpeedLocation() const { DARABONBA_PTR_GET_DEFAULT(fileTransferSpeedLocation_, "") };
    inline CreateCenterPolicyRequest& setFileTransferSpeedLocation(string fileTransferSpeedLocation) { DARABONBA_PTR_SET_VALUE(fileTransferSpeedLocation_, fileTransferSpeedLocation) };


    // gpuAcceleration Field Functions 
    bool hasGpuAcceleration() const { return this->gpuAcceleration_ != nullptr;};
    void deleteGpuAcceleration() { this->gpuAcceleration_ = nullptr;};
    inline string getGpuAcceleration() const { DARABONBA_PTR_GET_DEFAULT(gpuAcceleration_, "") };
    inline CreateCenterPolicyRequest& setGpuAcceleration(string gpuAcceleration) { DARABONBA_PTR_SET_VALUE(gpuAcceleration_, gpuAcceleration) };


    // hoverConfigMsg Field Functions 
    bool hasHoverConfigMsg() const { return this->hoverConfigMsg_ != nullptr;};
    void deleteHoverConfigMsg() { this->hoverConfigMsg_ = nullptr;};
    inline string getHoverConfigMsg() const { DARABONBA_PTR_GET_DEFAULT(hoverConfigMsg_, "") };
    inline CreateCenterPolicyRequest& setHoverConfigMsg(string hoverConfigMsg) { DARABONBA_PTR_SET_VALUE(hoverConfigMsg_, hoverConfigMsg) };


    // html5FileTransfer Field Functions 
    bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
    void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
    inline string getHtml5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
    inline CreateCenterPolicyRequest& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


    // internetCommunicationProtocol Field Functions 
    bool hasInternetCommunicationProtocol() const { return this->internetCommunicationProtocol_ != nullptr;};
    void deleteInternetCommunicationProtocol() { this->internetCommunicationProtocol_ = nullptr;};
    inline string getInternetCommunicationProtocol() const { DARABONBA_PTR_GET_DEFAULT(internetCommunicationProtocol_, "") };
    inline CreateCenterPolicyRequest& setInternetCommunicationProtocol(string internetCommunicationProtocol) { DARABONBA_PTR_SET_VALUE(internetCommunicationProtocol_, internetCommunicationProtocol) };


    // internetPrinter Field Functions 
    bool hasInternetPrinter() const { return this->internetPrinter_ != nullptr;};
    void deleteInternetPrinter() { this->internetPrinter_ = nullptr;};
    inline string getInternetPrinter() const { DARABONBA_PTR_GET_DEFAULT(internetPrinter_, "") };
    inline CreateCenterPolicyRequest& setInternetPrinter(string internetPrinter) { DARABONBA_PTR_SET_VALUE(internetPrinter_, internetPrinter) };


    // keyboardControl Field Functions 
    bool hasKeyboardControl() const { return this->keyboardControl_ != nullptr;};
    void deleteKeyboardControl() { this->keyboardControl_ = nullptr;};
    inline string getKeyboardControl() const { DARABONBA_PTR_GET_DEFAULT(keyboardControl_, "") };
    inline CreateCenterPolicyRequest& setKeyboardControl(string keyboardControl) { DARABONBA_PTR_SET_VALUE(keyboardControl_, keyboardControl) };


    // localDrive Field Functions 
    bool hasLocalDrive() const { return this->localDrive_ != nullptr;};
    void deleteLocalDrive() { this->localDrive_ = nullptr;};
    inline string getLocalDrive() const { DARABONBA_PTR_GET_DEFAULT(localDrive_, "") };
    inline CreateCenterPolicyRequest& setLocalDrive(string localDrive) { DARABONBA_PTR_SET_VALUE(localDrive_, localDrive) };


    // maxReconnectTime Field Functions 
    bool hasMaxReconnectTime() const { return this->maxReconnectTime_ != nullptr;};
    void deleteMaxReconnectTime() { this->maxReconnectTime_ = nullptr;};
    inline int32_t getMaxReconnectTime() const { DARABONBA_PTR_GET_DEFAULT(maxReconnectTime_, 0) };
    inline CreateCenterPolicyRequest& setMaxReconnectTime(int32_t maxReconnectTime) { DARABONBA_PTR_SET_VALUE(maxReconnectTime_, maxReconnectTime) };


    // memoryDownGradeDuration Field Functions 
    bool hasMemoryDownGradeDuration() const { return this->memoryDownGradeDuration_ != nullptr;};
    void deleteMemoryDownGradeDuration() { this->memoryDownGradeDuration_ = nullptr;};
    inline int32_t getMemoryDownGradeDuration() const { DARABONBA_PTR_GET_DEFAULT(memoryDownGradeDuration_, 0) };
    inline CreateCenterPolicyRequest& setMemoryDownGradeDuration(int32_t memoryDownGradeDuration) { DARABONBA_PTR_SET_VALUE(memoryDownGradeDuration_, memoryDownGradeDuration) };


    // memoryOverload Field Functions 
    bool hasMemoryOverload() const { return this->memoryOverload_ != nullptr;};
    void deleteMemoryOverload() { this->memoryOverload_ = nullptr;};
    inline string getMemoryOverload() const { DARABONBA_PTR_GET_DEFAULT(memoryOverload_, "") };
    inline CreateCenterPolicyRequest& setMemoryOverload(string memoryOverload) { DARABONBA_PTR_SET_VALUE(memoryOverload_, memoryOverload) };


    // memoryProcessors Field Functions 
    bool hasMemoryProcessors() const { return this->memoryProcessors_ != nullptr;};
    void deleteMemoryProcessors() { this->memoryProcessors_ = nullptr;};
    inline const vector<string> & getMemoryProcessors() const { DARABONBA_PTR_GET_CONST(memoryProcessors_, vector<string>) };
    inline vector<string> getMemoryProcessors() { DARABONBA_PTR_GET(memoryProcessors_, vector<string>) };
    inline CreateCenterPolicyRequest& setMemoryProcessors(const vector<string> & memoryProcessors) { DARABONBA_PTR_SET_VALUE(memoryProcessors_, memoryProcessors) };
    inline CreateCenterPolicyRequest& setMemoryProcessors(vector<string> && memoryProcessors) { DARABONBA_PTR_SET_RVALUE(memoryProcessors_, memoryProcessors) };


    // memoryProtectedMode Field Functions 
    bool hasMemoryProtectedMode() const { return this->memoryProtectedMode_ != nullptr;};
    void deleteMemoryProtectedMode() { this->memoryProtectedMode_ = nullptr;};
    inline string getMemoryProtectedMode() const { DARABONBA_PTR_GET_DEFAULT(memoryProtectedMode_, "") };
    inline CreateCenterPolicyRequest& setMemoryProtectedMode(string memoryProtectedMode) { DARABONBA_PTR_SET_VALUE(memoryProtectedMode_, memoryProtectedMode) };


    // memoryRateLimit Field Functions 
    bool hasMemoryRateLimit() const { return this->memoryRateLimit_ != nullptr;};
    void deleteMemoryRateLimit() { this->memoryRateLimit_ = nullptr;};
    inline int32_t getMemoryRateLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryRateLimit_, 0) };
    inline CreateCenterPolicyRequest& setMemoryRateLimit(int32_t memoryRateLimit) { DARABONBA_PTR_SET_VALUE(memoryRateLimit_, memoryRateLimit) };


    // memorySampleDuration Field Functions 
    bool hasMemorySampleDuration() const { return this->memorySampleDuration_ != nullptr;};
    void deleteMemorySampleDuration() { this->memorySampleDuration_ = nullptr;};
    inline int32_t getMemorySampleDuration() const { DARABONBA_PTR_GET_DEFAULT(memorySampleDuration_, 0) };
    inline CreateCenterPolicyRequest& setMemorySampleDuration(int32_t memorySampleDuration) { DARABONBA_PTR_SET_VALUE(memorySampleDuration_, memorySampleDuration) };


    // memorySingleRateLimit Field Functions 
    bool hasMemorySingleRateLimit() const { return this->memorySingleRateLimit_ != nullptr;};
    void deleteMemorySingleRateLimit() { this->memorySingleRateLimit_ = nullptr;};
    inline int32_t getMemorySingleRateLimit() const { DARABONBA_PTR_GET_DEFAULT(memorySingleRateLimit_, 0) };
    inline CreateCenterPolicyRequest& setMemorySingleRateLimit(int32_t memorySingleRateLimit) { DARABONBA_PTR_SET_VALUE(memorySingleRateLimit_, memorySingleRateLimit) };


    // mobileRestart Field Functions 
    bool hasMobileRestart() const { return this->mobileRestart_ != nullptr;};
    void deleteMobileRestart() { this->mobileRestart_ = nullptr;};
    inline string getMobileRestart() const { DARABONBA_PTR_GET_DEFAULT(mobileRestart_, "") };
    inline CreateCenterPolicyRequest& setMobileRestart(string mobileRestart) { DARABONBA_PTR_SET_VALUE(mobileRestart_, mobileRestart) };


    // mobileSafeMenu Field Functions 
    bool hasMobileSafeMenu() const { return this->mobileSafeMenu_ != nullptr;};
    void deleteMobileSafeMenu() { this->mobileSafeMenu_ = nullptr;};
    inline string getMobileSafeMenu() const { DARABONBA_PTR_GET_DEFAULT(mobileSafeMenu_, "") };
    inline CreateCenterPolicyRequest& setMobileSafeMenu(string mobileSafeMenu) { DARABONBA_PTR_SET_VALUE(mobileSafeMenu_, mobileSafeMenu) };


    // mobileShutdown Field Functions 
    bool hasMobileShutdown() const { return this->mobileShutdown_ != nullptr;};
    void deleteMobileShutdown() { this->mobileShutdown_ = nullptr;};
    inline string getMobileShutdown() const { DARABONBA_PTR_GET_DEFAULT(mobileShutdown_, "") };
    inline CreateCenterPolicyRequest& setMobileShutdown(string mobileShutdown) { DARABONBA_PTR_SET_VALUE(mobileShutdown_, mobileShutdown) };


    // mobileWuyingKeeper Field Functions 
    bool hasMobileWuyingKeeper() const { return this->mobileWuyingKeeper_ != nullptr;};
    void deleteMobileWuyingKeeper() { this->mobileWuyingKeeper_ = nullptr;};
    inline string getMobileWuyingKeeper() const { DARABONBA_PTR_GET_DEFAULT(mobileWuyingKeeper_, "") };
    inline CreateCenterPolicyRequest& setMobileWuyingKeeper(string mobileWuyingKeeper) { DARABONBA_PTR_SET_VALUE(mobileWuyingKeeper_, mobileWuyingKeeper) };


    // mobileWyAssistant Field Functions 
    bool hasMobileWyAssistant() const { return this->mobileWyAssistant_ != nullptr;};
    void deleteMobileWyAssistant() { this->mobileWyAssistant_ = nullptr;};
    inline string getMobileWyAssistant() const { DARABONBA_PTR_GET_DEFAULT(mobileWyAssistant_, "") };
    inline CreateCenterPolicyRequest& setMobileWyAssistant(string mobileWyAssistant) { DARABONBA_PTR_SET_VALUE(mobileWyAssistant_, mobileWyAssistant) };


    // modelLibrary Field Functions 
    bool hasModelLibrary() const { return this->modelLibrary_ != nullptr;};
    void deleteModelLibrary() { this->modelLibrary_ = nullptr;};
    inline string getModelLibrary() const { DARABONBA_PTR_GET_DEFAULT(modelLibrary_, "") };
    inline CreateCenterPolicyRequest& setModelLibrary(string modelLibrary) { DARABONBA_PTR_SET_VALUE(modelLibrary_, modelLibrary) };


    // multiScreen Field Functions 
    bool hasMultiScreen() const { return this->multiScreen_ != nullptr;};
    void deleteMultiScreen() { this->multiScreen_ = nullptr;};
    inline string getMultiScreen() const { DARABONBA_PTR_GET_DEFAULT(multiScreen_, "") };
    inline CreateCenterPolicyRequest& setMultiScreen(string multiScreen) { DARABONBA_PTR_SET_VALUE(multiScreen_, multiScreen) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCenterPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netRedirect Field Functions 
    bool hasNetRedirect() const { return this->netRedirect_ != nullptr;};
    void deleteNetRedirect() { this->netRedirect_ = nullptr;};
    inline string getNetRedirect() const { DARABONBA_PTR_GET_DEFAULT(netRedirect_, "") };
    inline CreateCenterPolicyRequest& setNetRedirect(string netRedirect) { DARABONBA_PTR_SET_VALUE(netRedirect_, netRedirect) };


    // netRedirectRule Field Functions 
    bool hasNetRedirectRule() const { return this->netRedirectRule_ != nullptr;};
    void deleteNetRedirectRule() { this->netRedirectRule_ = nullptr;};
    inline const vector<CreateCenterPolicyRequest::NetRedirectRule> & getNetRedirectRule() const { DARABONBA_PTR_GET_CONST(netRedirectRule_, vector<CreateCenterPolicyRequest::NetRedirectRule>) };
    inline vector<CreateCenterPolicyRequest::NetRedirectRule> getNetRedirectRule() { DARABONBA_PTR_GET(netRedirectRule_, vector<CreateCenterPolicyRequest::NetRedirectRule>) };
    inline CreateCenterPolicyRequest& setNetRedirectRule(const vector<CreateCenterPolicyRequest::NetRedirectRule> & netRedirectRule) { DARABONBA_PTR_SET_VALUE(netRedirectRule_, netRedirectRule) };
    inline CreateCenterPolicyRequest& setNetRedirectRule(vector<CreateCenterPolicyRequest::NetRedirectRule> && netRedirectRule) { DARABONBA_PTR_SET_RVALUE(netRedirectRule_, netRedirectRule) };


    // noOperationDisconnect Field Functions 
    bool hasNoOperationDisconnect() const { return this->noOperationDisconnect_ != nullptr;};
    void deleteNoOperationDisconnect() { this->noOperationDisconnect_ = nullptr;};
    inline string getNoOperationDisconnect() const { DARABONBA_PTR_GET_DEFAULT(noOperationDisconnect_, "") };
    inline CreateCenterPolicyRequest& setNoOperationDisconnect(string noOperationDisconnect) { DARABONBA_PTR_SET_VALUE(noOperationDisconnect_, noOperationDisconnect) };


    // noOperationDisconnectTime Field Functions 
    bool hasNoOperationDisconnectTime() const { return this->noOperationDisconnectTime_ != nullptr;};
    void deleteNoOperationDisconnectTime() { this->noOperationDisconnectTime_ = nullptr;};
    inline int32_t getNoOperationDisconnectTime() const { DARABONBA_PTR_GET_DEFAULT(noOperationDisconnectTime_, 0) };
    inline CreateCenterPolicyRequest& setNoOperationDisconnectTime(int32_t noOperationDisconnectTime) { DARABONBA_PTR_SET_VALUE(noOperationDisconnectTime_, noOperationDisconnectTime) };


    // portProxy Field Functions 
    bool hasPortProxy() const { return this->portProxy_ != nullptr;};
    void deletePortProxy() { this->portProxy_ = nullptr;};
    inline string getPortProxy() const { DARABONBA_PTR_GET_DEFAULT(portProxy_, "") };
    inline CreateCenterPolicyRequest& setPortProxy(string portProxy) { DARABONBA_PTR_SET_VALUE(portProxy_, portProxy) };


    // printerRedirect Field Functions 
    bool hasPrinterRedirect() const { return this->printerRedirect_ != nullptr;};
    void deletePrinterRedirect() { this->printerRedirect_ = nullptr;};
    inline string getPrinterRedirect() const { DARABONBA_PTR_GET_DEFAULT(printerRedirect_, "") };
    inline CreateCenterPolicyRequest& setPrinterRedirect(string printerRedirect) { DARABONBA_PTR_SET_VALUE(printerRedirect_, printerRedirect) };


    // qualityEnhancement Field Functions 
    bool hasQualityEnhancement() const { return this->qualityEnhancement_ != nullptr;};
    void deleteQualityEnhancement() { this->qualityEnhancement_ = nullptr;};
    inline string getQualityEnhancement() const { DARABONBA_PTR_GET_DEFAULT(qualityEnhancement_, "") };
    inline CreateCenterPolicyRequest& setQualityEnhancement(string qualityEnhancement) { DARABONBA_PTR_SET_VALUE(qualityEnhancement_, qualityEnhancement) };


    // recordEventDuration Field Functions 
    bool hasRecordEventDuration() const { return this->recordEventDuration_ != nullptr;};
    void deleteRecordEventDuration() { this->recordEventDuration_ = nullptr;};
    inline int32_t getRecordEventDuration() const { DARABONBA_PTR_GET_DEFAULT(recordEventDuration_, 0) };
    inline CreateCenterPolicyRequest& setRecordEventDuration(int32_t recordEventDuration) { DARABONBA_PTR_SET_VALUE(recordEventDuration_, recordEventDuration) };


    // recordEventFileExts Field Functions 
    bool hasRecordEventFileExts() const { return this->recordEventFileExts_ != nullptr;};
    void deleteRecordEventFileExts() { this->recordEventFileExts_ = nullptr;};
    inline const vector<string> & getRecordEventFileExts() const { DARABONBA_PTR_GET_CONST(recordEventFileExts_, vector<string>) };
    inline vector<string> getRecordEventFileExts() { DARABONBA_PTR_GET(recordEventFileExts_, vector<string>) };
    inline CreateCenterPolicyRequest& setRecordEventFileExts(const vector<string> & recordEventFileExts) { DARABONBA_PTR_SET_VALUE(recordEventFileExts_, recordEventFileExts) };
    inline CreateCenterPolicyRequest& setRecordEventFileExts(vector<string> && recordEventFileExts) { DARABONBA_PTR_SET_RVALUE(recordEventFileExts_, recordEventFileExts) };


    // recordEventFilePaths Field Functions 
    bool hasRecordEventFilePaths() const { return this->recordEventFilePaths_ != nullptr;};
    void deleteRecordEventFilePaths() { this->recordEventFilePaths_ = nullptr;};
    inline const vector<string> & getRecordEventFilePaths() const { DARABONBA_PTR_GET_CONST(recordEventFilePaths_, vector<string>) };
    inline vector<string> getRecordEventFilePaths() { DARABONBA_PTR_GET(recordEventFilePaths_, vector<string>) };
    inline CreateCenterPolicyRequest& setRecordEventFilePaths(const vector<string> & recordEventFilePaths) { DARABONBA_PTR_SET_VALUE(recordEventFilePaths_, recordEventFilePaths) };
    inline CreateCenterPolicyRequest& setRecordEventFilePaths(vector<string> && recordEventFilePaths) { DARABONBA_PTR_SET_RVALUE(recordEventFilePaths_, recordEventFilePaths) };


    // recordEventLevels Field Functions 
    bool hasRecordEventLevels() const { return this->recordEventLevels_ != nullptr;};
    void deleteRecordEventLevels() { this->recordEventLevels_ = nullptr;};
    inline const vector<CreateCenterPolicyRequest::RecordEventLevels> & getRecordEventLevels() const { DARABONBA_PTR_GET_CONST(recordEventLevels_, vector<CreateCenterPolicyRequest::RecordEventLevels>) };
    inline vector<CreateCenterPolicyRequest::RecordEventLevels> getRecordEventLevels() { DARABONBA_PTR_GET(recordEventLevels_, vector<CreateCenterPolicyRequest::RecordEventLevels>) };
    inline CreateCenterPolicyRequest& setRecordEventLevels(const vector<CreateCenterPolicyRequest::RecordEventLevels> & recordEventLevels) { DARABONBA_PTR_SET_VALUE(recordEventLevels_, recordEventLevels) };
    inline CreateCenterPolicyRequest& setRecordEventLevels(vector<CreateCenterPolicyRequest::RecordEventLevels> && recordEventLevels) { DARABONBA_PTR_SET_RVALUE(recordEventLevels_, recordEventLevels) };


    // recordEventRegisters Field Functions 
    bool hasRecordEventRegisters() const { return this->recordEventRegisters_ != nullptr;};
    void deleteRecordEventRegisters() { this->recordEventRegisters_ = nullptr;};
    inline const vector<string> & getRecordEventRegisters() const { DARABONBA_PTR_GET_CONST(recordEventRegisters_, vector<string>) };
    inline vector<string> getRecordEventRegisters() { DARABONBA_PTR_GET(recordEventRegisters_, vector<string>) };
    inline CreateCenterPolicyRequest& setRecordEventRegisters(const vector<string> & recordEventRegisters) { DARABONBA_PTR_SET_VALUE(recordEventRegisters_, recordEventRegisters) };
    inline CreateCenterPolicyRequest& setRecordEventRegisters(vector<string> && recordEventRegisters) { DARABONBA_PTR_SET_RVALUE(recordEventRegisters_, recordEventRegisters) };


    // recordEvents Field Functions 
    bool hasRecordEvents() const { return this->recordEvents_ != nullptr;};
    void deleteRecordEvents() { this->recordEvents_ = nullptr;};
    inline const vector<string> & getRecordEvents() const { DARABONBA_PTR_GET_CONST(recordEvents_, vector<string>) };
    inline vector<string> getRecordEvents() { DARABONBA_PTR_GET(recordEvents_, vector<string>) };
    inline CreateCenterPolicyRequest& setRecordEvents(const vector<string> & recordEvents) { DARABONBA_PTR_SET_VALUE(recordEvents_, recordEvents) };
    inline CreateCenterPolicyRequest& setRecordEvents(vector<string> && recordEvents) { DARABONBA_PTR_SET_RVALUE(recordEvents_, recordEvents) };


    // recording Field Functions 
    bool hasRecording() const { return this->recording_ != nullptr;};
    void deleteRecording() { this->recording_ = nullptr;};
    inline string getRecording() const { DARABONBA_PTR_GET_DEFAULT(recording_, "") };
    inline CreateCenterPolicyRequest& setRecording(string recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };


    // recordingAudio Field Functions 
    bool hasRecordingAudio() const { return this->recordingAudio_ != nullptr;};
    void deleteRecordingAudio() { this->recordingAudio_ = nullptr;};
    inline string getRecordingAudio() const { DARABONBA_PTR_GET_DEFAULT(recordingAudio_, "") };
    inline CreateCenterPolicyRequest& setRecordingAudio(string recordingAudio) { DARABONBA_PTR_SET_VALUE(recordingAudio_, recordingAudio) };


    // recordingDuration Field Functions 
    bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
    void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
    inline int32_t getRecordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0) };
    inline CreateCenterPolicyRequest& setRecordingDuration(int32_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


    // recordingEndTime Field Functions 
    bool hasRecordingEndTime() const { return this->recordingEndTime_ != nullptr;};
    void deleteRecordingEndTime() { this->recordingEndTime_ = nullptr;};
    inline string getRecordingEndTime() const { DARABONBA_PTR_GET_DEFAULT(recordingEndTime_, "") };
    inline CreateCenterPolicyRequest& setRecordingEndTime(string recordingEndTime) { DARABONBA_PTR_SET_VALUE(recordingEndTime_, recordingEndTime) };


    // recordingExpires Field Functions 
    bool hasRecordingExpires() const { return this->recordingExpires_ != nullptr;};
    void deleteRecordingExpires() { this->recordingExpires_ = nullptr;};
    inline int32_t getRecordingExpires() const { DARABONBA_PTR_GET_DEFAULT(recordingExpires_, 0) };
    inline CreateCenterPolicyRequest& setRecordingExpires(int32_t recordingExpires) { DARABONBA_PTR_SET_VALUE(recordingExpires_, recordingExpires) };


    // recordingFps Field Functions 
    bool hasRecordingFps() const { return this->recordingFps_ != nullptr;};
    void deleteRecordingFps() { this->recordingFps_ = nullptr;};
    inline string getRecordingFps() const { DARABONBA_PTR_GET_DEFAULT(recordingFps_, "") };
    inline CreateCenterPolicyRequest& setRecordingFps(string recordingFps) { DARABONBA_PTR_SET_VALUE(recordingFps_, recordingFps) };


    // recordingStartTime Field Functions 
    bool hasRecordingStartTime() const { return this->recordingStartTime_ != nullptr;};
    void deleteRecordingStartTime() { this->recordingStartTime_ = nullptr;};
    inline string getRecordingStartTime() const { DARABONBA_PTR_GET_DEFAULT(recordingStartTime_, "") };
    inline CreateCenterPolicyRequest& setRecordingStartTime(string recordingStartTime) { DARABONBA_PTR_SET_VALUE(recordingStartTime_, recordingStartTime) };


    // recordingUserNotify Field Functions 
    bool hasRecordingUserNotify() const { return this->recordingUserNotify_ != nullptr;};
    void deleteRecordingUserNotify() { this->recordingUserNotify_ = nullptr;};
    inline string getRecordingUserNotify() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotify_, "") };
    inline CreateCenterPolicyRequest& setRecordingUserNotify(string recordingUserNotify) { DARABONBA_PTR_SET_VALUE(recordingUserNotify_, recordingUserNotify) };


    // recordingUserNotifyMessage Field Functions 
    bool hasRecordingUserNotifyMessage() const { return this->recordingUserNotifyMessage_ != nullptr;};
    void deleteRecordingUserNotifyMessage() { this->recordingUserNotifyMessage_ = nullptr;};
    inline string getRecordingUserNotifyMessage() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotifyMessage_, "") };
    inline CreateCenterPolicyRequest& setRecordingUserNotifyMessage(string recordingUserNotifyMessage) { DARABONBA_PTR_SET_VALUE(recordingUserNotifyMessage_, recordingUserNotifyMessage) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCenterPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteCoordinate Field Functions 
    bool hasRemoteCoordinate() const { return this->remoteCoordinate_ != nullptr;};
    void deleteRemoteCoordinate() { this->remoteCoordinate_ = nullptr;};
    inline string getRemoteCoordinate() const { DARABONBA_PTR_GET_DEFAULT(remoteCoordinate_, "") };
    inline CreateCenterPolicyRequest& setRemoteCoordinate(string remoteCoordinate) { DARABONBA_PTR_SET_VALUE(remoteCoordinate_, remoteCoordinate) };


    // resetDesktop Field Functions 
    bool hasResetDesktop() const { return this->resetDesktop_ != nullptr;};
    void deleteResetDesktop() { this->resetDesktop_ = nullptr;};
    inline string getResetDesktop() const { DARABONBA_PTR_GET_DEFAULT(resetDesktop_, "") };
    inline CreateCenterPolicyRequest& setResetDesktop(string resetDesktop) { DARABONBA_PTR_SET_VALUE(resetDesktop_, resetDesktop) };


    // resolutionDpi Field Functions 
    bool hasResolutionDpi() const { return this->resolutionDpi_ != nullptr;};
    void deleteResolutionDpi() { this->resolutionDpi_ = nullptr;};
    inline int32_t getResolutionDpi() const { DARABONBA_PTR_GET_DEFAULT(resolutionDpi_, 0) };
    inline CreateCenterPolicyRequest& setResolutionDpi(int32_t resolutionDpi) { DARABONBA_PTR_SET_VALUE(resolutionDpi_, resolutionDpi) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t getResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline CreateCenterPolicyRequest& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionModel Field Functions 
    bool hasResolutionModel() const { return this->resolutionModel_ != nullptr;};
    void deleteResolutionModel() { this->resolutionModel_ = nullptr;};
    inline string getResolutionModel() const { DARABONBA_PTR_GET_DEFAULT(resolutionModel_, "") };
    inline CreateCenterPolicyRequest& setResolutionModel(string resolutionModel) { DARABONBA_PTR_SET_VALUE(resolutionModel_, resolutionModel) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t getResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline CreateCenterPolicyRequest& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateCenterPolicyRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // safeMenu Field Functions 
    bool hasSafeMenu() const { return this->safeMenu_ != nullptr;};
    void deleteSafeMenu() { this->safeMenu_ = nullptr;};
    inline string getSafeMenu() const { DARABONBA_PTR_GET_DEFAULT(safeMenu_, "") };
    inline CreateCenterPolicyRequest& setSafeMenu(string safeMenu) { DARABONBA_PTR_SET_VALUE(safeMenu_, safeMenu) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline CreateCenterPolicyRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // scopeValue Field Functions 
    bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
    void deleteScopeValue() { this->scopeValue_ = nullptr;};
    inline const vector<string> & getScopeValue() const { DARABONBA_PTR_GET_CONST(scopeValue_, vector<string>) };
    inline vector<string> getScopeValue() { DARABONBA_PTR_GET(scopeValue_, vector<string>) };
    inline CreateCenterPolicyRequest& setScopeValue(const vector<string> & scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };
    inline CreateCenterPolicyRequest& setScopeValue(vector<string> && scopeValue) { DARABONBA_PTR_SET_RVALUE(scopeValue_, scopeValue) };


    // screenDisplayMode Field Functions 
    bool hasScreenDisplayMode() const { return this->screenDisplayMode_ != nullptr;};
    void deleteScreenDisplayMode() { this->screenDisplayMode_ = nullptr;};
    inline string getScreenDisplayMode() const { DARABONBA_PTR_GET_DEFAULT(screenDisplayMode_, "") };
    inline CreateCenterPolicyRequest& setScreenDisplayMode(string screenDisplayMode) { DARABONBA_PTR_SET_VALUE(screenDisplayMode_, screenDisplayMode) };


    // sessionMaxRateKbps Field Functions 
    bool hasSessionMaxRateKbps() const { return this->sessionMaxRateKbps_ != nullptr;};
    void deleteSessionMaxRateKbps() { this->sessionMaxRateKbps_ = nullptr;};
    inline int32_t getSessionMaxRateKbps() const { DARABONBA_PTR_GET_DEFAULT(sessionMaxRateKbps_, 0) };
    inline CreateCenterPolicyRequest& setSessionMaxRateKbps(int32_t sessionMaxRateKbps) { DARABONBA_PTR_SET_VALUE(sessionMaxRateKbps_, sessionMaxRateKbps) };


    // smoothEnhancement Field Functions 
    bool hasSmoothEnhancement() const { return this->smoothEnhancement_ != nullptr;};
    void deleteSmoothEnhancement() { this->smoothEnhancement_ = nullptr;};
    inline string getSmoothEnhancement() const { DARABONBA_PTR_GET_DEFAULT(smoothEnhancement_, "") };
    inline CreateCenterPolicyRequest& setSmoothEnhancement(string smoothEnhancement) { DARABONBA_PTR_SET_VALUE(smoothEnhancement_, smoothEnhancement) };


    // statusMonitor Field Functions 
    bool hasStatusMonitor() const { return this->statusMonitor_ != nullptr;};
    void deleteStatusMonitor() { this->statusMonitor_ = nullptr;};
    inline string getStatusMonitor() const { DARABONBA_PTR_GET_DEFAULT(statusMonitor_, "") };
    inline CreateCenterPolicyRequest& setStatusMonitor(string statusMonitor) { DARABONBA_PTR_SET_VALUE(statusMonitor_, statusMonitor) };


    // streamingMode Field Functions 
    bool hasStreamingMode() const { return this->streamingMode_ != nullptr;};
    void deleteStreamingMode() { this->streamingMode_ = nullptr;};
    inline string getStreamingMode() const { DARABONBA_PTR_GET_DEFAULT(streamingMode_, "") };
    inline CreateCenterPolicyRequest& setStreamingMode(string streamingMode) { DARABONBA_PTR_SET_VALUE(streamingMode_, streamingMode) };


    // targetFps Field Functions 
    bool hasTargetFps() const { return this->targetFps_ != nullptr;};
    void deleteTargetFps() { this->targetFps_ = nullptr;};
    inline int32_t getTargetFps() const { DARABONBA_PTR_GET_DEFAULT(targetFps_, 0) };
    inline CreateCenterPolicyRequest& setTargetFps(int32_t targetFps) { DARABONBA_PTR_SET_VALUE(targetFps_, targetFps) };


    // taskbar Field Functions 
    bool hasTaskbar() const { return this->taskbar_ != nullptr;};
    void deleteTaskbar() { this->taskbar_ = nullptr;};
    inline string getTaskbar() const { DARABONBA_PTR_GET_DEFAULT(taskbar_, "") };
    inline CreateCenterPolicyRequest& setTaskbar(string taskbar) { DARABONBA_PTR_SET_VALUE(taskbar_, taskbar) };


    // usbRedirect Field Functions 
    bool hasUsbRedirect() const { return this->usbRedirect_ != nullptr;};
    void deleteUsbRedirect() { this->usbRedirect_ = nullptr;};
    inline string getUsbRedirect() const { DARABONBA_PTR_GET_DEFAULT(usbRedirect_, "") };
    inline CreateCenterPolicyRequest& setUsbRedirect(string usbRedirect) { DARABONBA_PTR_SET_VALUE(usbRedirect_, usbRedirect) };


    // usbSupplyRedirectRule Field Functions 
    bool hasUsbSupplyRedirectRule() const { return this->usbSupplyRedirectRule_ != nullptr;};
    void deleteUsbSupplyRedirectRule() { this->usbSupplyRedirectRule_ = nullptr;};
    inline const vector<CreateCenterPolicyRequest::UsbSupplyRedirectRule> & getUsbSupplyRedirectRule() const { DARABONBA_PTR_GET_CONST(usbSupplyRedirectRule_, vector<CreateCenterPolicyRequest::UsbSupplyRedirectRule>) };
    inline vector<CreateCenterPolicyRequest::UsbSupplyRedirectRule> getUsbSupplyRedirectRule() { DARABONBA_PTR_GET(usbSupplyRedirectRule_, vector<CreateCenterPolicyRequest::UsbSupplyRedirectRule>) };
    inline CreateCenterPolicyRequest& setUsbSupplyRedirectRule(const vector<CreateCenterPolicyRequest::UsbSupplyRedirectRule> & usbSupplyRedirectRule) { DARABONBA_PTR_SET_VALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };
    inline CreateCenterPolicyRequest& setUsbSupplyRedirectRule(vector<CreateCenterPolicyRequest::UsbSupplyRedirectRule> && usbSupplyRedirectRule) { DARABONBA_PTR_SET_RVALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };


    // useTime Field Functions 
    bool hasUseTime() const { return this->useTime_ != nullptr;};
    void deleteUseTime() { this->useTime_ = nullptr;};
    inline string getUseTime() const { DARABONBA_PTR_GET_DEFAULT(useTime_, "") };
    inline CreateCenterPolicyRequest& setUseTime(string useTime) { DARABONBA_PTR_SET_VALUE(useTime_, useTime) };


    // videoEncAvgKbps Field Functions 
    bool hasVideoEncAvgKbps() const { return this->videoEncAvgKbps_ != nullptr;};
    void deleteVideoEncAvgKbps() { this->videoEncAvgKbps_ = nullptr;};
    inline int32_t getVideoEncAvgKbps() const { DARABONBA_PTR_GET_DEFAULT(videoEncAvgKbps_, 0) };
    inline CreateCenterPolicyRequest& setVideoEncAvgKbps(int32_t videoEncAvgKbps) { DARABONBA_PTR_SET_VALUE(videoEncAvgKbps_, videoEncAvgKbps) };


    // videoEncMaxQP Field Functions 
    bool hasVideoEncMaxQP() const { return this->videoEncMaxQP_ != nullptr;};
    void deleteVideoEncMaxQP() { this->videoEncMaxQP_ = nullptr;};
    inline int32_t getVideoEncMaxQP() const { DARABONBA_PTR_GET_DEFAULT(videoEncMaxQP_, 0) };
    inline CreateCenterPolicyRequest& setVideoEncMaxQP(int32_t videoEncMaxQP) { DARABONBA_PTR_SET_VALUE(videoEncMaxQP_, videoEncMaxQP) };


    // videoEncMinQP Field Functions 
    bool hasVideoEncMinQP() const { return this->videoEncMinQP_ != nullptr;};
    void deleteVideoEncMinQP() { this->videoEncMinQP_ = nullptr;};
    inline int32_t getVideoEncMinQP() const { DARABONBA_PTR_GET_DEFAULT(videoEncMinQP_, 0) };
    inline CreateCenterPolicyRequest& setVideoEncMinQP(int32_t videoEncMinQP) { DARABONBA_PTR_SET_VALUE(videoEncMinQP_, videoEncMinQP) };


    // videoEncPeakKbps Field Functions 
    bool hasVideoEncPeakKbps() const { return this->videoEncPeakKbps_ != nullptr;};
    void deleteVideoEncPeakKbps() { this->videoEncPeakKbps_ = nullptr;};
    inline int32_t getVideoEncPeakKbps() const { DARABONBA_PTR_GET_DEFAULT(videoEncPeakKbps_, 0) };
    inline CreateCenterPolicyRequest& setVideoEncPeakKbps(int32_t videoEncPeakKbps) { DARABONBA_PTR_SET_VALUE(videoEncPeakKbps_, videoEncPeakKbps) };


    // videoEncPolicy Field Functions 
    bool hasVideoEncPolicy() const { return this->videoEncPolicy_ != nullptr;};
    void deleteVideoEncPolicy() { this->videoEncPolicy_ = nullptr;};
    inline string getVideoEncPolicy() const { DARABONBA_PTR_GET_DEFAULT(videoEncPolicy_, "") };
    inline CreateCenterPolicyRequest& setVideoEncPolicy(string videoEncPolicy) { DARABONBA_PTR_SET_VALUE(videoEncPolicy_, videoEncPolicy) };


    // videoRedirect Field Functions 
    bool hasVideoRedirect() const { return this->videoRedirect_ != nullptr;};
    void deleteVideoRedirect() { this->videoRedirect_ = nullptr;};
    inline string getVideoRedirect() const { DARABONBA_PTR_GET_DEFAULT(videoRedirect_, "") };
    inline CreateCenterPolicyRequest& setVideoRedirect(string videoRedirect) { DARABONBA_PTR_SET_VALUE(videoRedirect_, videoRedirect) };


    // visualQuality Field Functions 
    bool hasVisualQuality() const { return this->visualQuality_ != nullptr;};
    void deleteVisualQuality() { this->visualQuality_ = nullptr;};
    inline string getVisualQuality() const { DARABONBA_PTR_GET_DEFAULT(visualQuality_, "") };
    inline CreateCenterPolicyRequest& setVisualQuality(string visualQuality) { DARABONBA_PTR_SET_VALUE(visualQuality_, visualQuality) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline string getWatermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, "") };
    inline CreateCenterPolicyRequest& setWatermark(string watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


    // watermarkAntiCam Field Functions 
    bool hasWatermarkAntiCam() const { return this->watermarkAntiCam_ != nullptr;};
    void deleteWatermarkAntiCam() { this->watermarkAntiCam_ = nullptr;};
    inline string getWatermarkAntiCam() const { DARABONBA_PTR_GET_DEFAULT(watermarkAntiCam_, "") };
    inline CreateCenterPolicyRequest& setWatermarkAntiCam(string watermarkAntiCam) { DARABONBA_PTR_SET_VALUE(watermarkAntiCam_, watermarkAntiCam) };


    // watermarkColor Field Functions 
    bool hasWatermarkColor() const { return this->watermarkColor_ != nullptr;};
    void deleteWatermarkColor() { this->watermarkColor_ = nullptr;};
    inline int32_t getWatermarkColor() const { DARABONBA_PTR_GET_DEFAULT(watermarkColor_, 0) };
    inline CreateCenterPolicyRequest& setWatermarkColor(int32_t watermarkColor) { DARABONBA_PTR_SET_VALUE(watermarkColor_, watermarkColor) };


    // watermarkColumnAmount Field Functions 
    bool hasWatermarkColumnAmount() const { return this->watermarkColumnAmount_ != nullptr;};
    void deleteWatermarkColumnAmount() { this->watermarkColumnAmount_ = nullptr;};
    inline int32_t getWatermarkColumnAmount() const { DARABONBA_PTR_GET_DEFAULT(watermarkColumnAmount_, 0) };
    inline CreateCenterPolicyRequest& setWatermarkColumnAmount(int32_t watermarkColumnAmount) { DARABONBA_PTR_SET_VALUE(watermarkColumnAmount_, watermarkColumnAmount) };


    // watermarkCustomText Field Functions 
    bool hasWatermarkCustomText() const { return this->watermarkCustomText_ != nullptr;};
    void deleteWatermarkCustomText() { this->watermarkCustomText_ = nullptr;};
    inline string getWatermarkCustomText() const { DARABONBA_PTR_GET_DEFAULT(watermarkCustomText_, "") };
    inline CreateCenterPolicyRequest& setWatermarkCustomText(string watermarkCustomText) { DARABONBA_PTR_SET_VALUE(watermarkCustomText_, watermarkCustomText) };


    // watermarkDegree Field Functions 
    bool hasWatermarkDegree() const { return this->watermarkDegree_ != nullptr;};
    void deleteWatermarkDegree() { this->watermarkDegree_ = nullptr;};
    inline double getWatermarkDegree() const { DARABONBA_PTR_GET_DEFAULT(watermarkDegree_, 0.0) };
    inline CreateCenterPolicyRequest& setWatermarkDegree(double watermarkDegree) { DARABONBA_PTR_SET_VALUE(watermarkDegree_, watermarkDegree) };


    // watermarkFontSize Field Functions 
    bool hasWatermarkFontSize() const { return this->watermarkFontSize_ != nullptr;};
    void deleteWatermarkFontSize() { this->watermarkFontSize_ = nullptr;};
    inline int32_t getWatermarkFontSize() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontSize_, 0) };
    inline CreateCenterPolicyRequest& setWatermarkFontSize(int32_t watermarkFontSize) { DARABONBA_PTR_SET_VALUE(watermarkFontSize_, watermarkFontSize) };


    // watermarkFontStyle Field Functions 
    bool hasWatermarkFontStyle() const { return this->watermarkFontStyle_ != nullptr;};
    void deleteWatermarkFontStyle() { this->watermarkFontStyle_ = nullptr;};
    inline string getWatermarkFontStyle() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontStyle_, "") };
    inline CreateCenterPolicyRequest& setWatermarkFontStyle(string watermarkFontStyle) { DARABONBA_PTR_SET_VALUE(watermarkFontStyle_, watermarkFontStyle) };


    // watermarkPower Field Functions 
    bool hasWatermarkPower() const { return this->watermarkPower_ != nullptr;};
    void deleteWatermarkPower() { this->watermarkPower_ = nullptr;};
    inline string getWatermarkPower() const { DARABONBA_PTR_GET_DEFAULT(watermarkPower_, "") };
    inline CreateCenterPolicyRequest& setWatermarkPower(string watermarkPower) { DARABONBA_PTR_SET_VALUE(watermarkPower_, watermarkPower) };


    // watermarkRowAmount Field Functions 
    bool hasWatermarkRowAmount() const { return this->watermarkRowAmount_ != nullptr;};
    void deleteWatermarkRowAmount() { this->watermarkRowAmount_ = nullptr;};
    inline int32_t getWatermarkRowAmount() const { DARABONBA_PTR_GET_DEFAULT(watermarkRowAmount_, 0) };
    inline CreateCenterPolicyRequest& setWatermarkRowAmount(int32_t watermarkRowAmount) { DARABONBA_PTR_SET_VALUE(watermarkRowAmount_, watermarkRowAmount) };


    // watermarkSecurity Field Functions 
    bool hasWatermarkSecurity() const { return this->watermarkSecurity_ != nullptr;};
    void deleteWatermarkSecurity() { this->watermarkSecurity_ = nullptr;};
    inline string getWatermarkSecurity() const { DARABONBA_PTR_GET_DEFAULT(watermarkSecurity_, "") };
    inline CreateCenterPolicyRequest& setWatermarkSecurity(string watermarkSecurity) { DARABONBA_PTR_SET_VALUE(watermarkSecurity_, watermarkSecurity) };


    // watermarkShadow Field Functions 
    bool hasWatermarkShadow() const { return this->watermarkShadow_ != nullptr;};
    void deleteWatermarkShadow() { this->watermarkShadow_ = nullptr;};
    inline string getWatermarkShadow() const { DARABONBA_PTR_GET_DEFAULT(watermarkShadow_, "") };
    inline CreateCenterPolicyRequest& setWatermarkShadow(string watermarkShadow) { DARABONBA_PTR_SET_VALUE(watermarkShadow_, watermarkShadow) };


    // watermarkTransparencyValue Field Functions 
    bool hasWatermarkTransparencyValue() const { return this->watermarkTransparencyValue_ != nullptr;};
    void deleteWatermarkTransparencyValue() { this->watermarkTransparencyValue_ = nullptr;};
    inline int32_t getWatermarkTransparencyValue() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparencyValue_, 0) };
    inline CreateCenterPolicyRequest& setWatermarkTransparencyValue(int32_t watermarkTransparencyValue) { DARABONBA_PTR_SET_VALUE(watermarkTransparencyValue_, watermarkTransparencyValue) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string getWatermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline CreateCenterPolicyRequest& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


    // wuyingKeeper Field Functions 
    bool hasWuyingKeeper() const { return this->wuyingKeeper_ != nullptr;};
    void deleteWuyingKeeper() { this->wuyingKeeper_ = nullptr;};
    inline string getWuyingKeeper() const { DARABONBA_PTR_GET_DEFAULT(wuyingKeeper_, "") };
    inline CreateCenterPolicyRequest& setWuyingKeeper(string wuyingKeeper) { DARABONBA_PTR_SET_VALUE(wuyingKeeper_, wuyingKeeper) };


    // wyAssistant Field Functions 
    bool hasWyAssistant() const { return this->wyAssistant_ != nullptr;};
    void deleteWyAssistant() { this->wyAssistant_ = nullptr;};
    inline string getWyAssistant() const { DARABONBA_PTR_GET_DEFAULT(wyAssistant_, "") };
    inline CreateCenterPolicyRequest& setWyAssistant(string wyAssistant) { DARABONBA_PTR_SET_VALUE(wyAssistant_, wyAssistant) };


  protected:
    shared_ptr<string> academicProxy_ {};
    // Specifies whether users have administrator permissions after logging on to the cloud desktop.
    // 
    // > This feature is in invitational preview and is not publicly available.
    shared_ptr<string> adminAccess_ {};
    shared_ptr<string> adminKeyboardOnFullScreen_ {};
    shared_ptr<string> adminKeyboardOnWindows_ {};
    // Specifies whether to enable the anti-screenshot feature.
    shared_ptr<string> appContentProtection_ {};
    // The client IP whitelist. After configuration, only IP addresses within the whitelisted CIDR blocks can access the cloud desktop.
    shared_ptr<vector<CreateCenterPolicyRequest::AuthorizeAccessPolicyRule>> authorizeAccessPolicyRule_ {};
    // The list of security group control rules.
    shared_ptr<vector<CreateCenterPolicyRequest::AuthorizeSecurityPolicyRule>> authorizeSecurityPolicyRule_ {};
    // The client auto-reconnect switch.
    shared_ptr<string> autoReconnect_ {};
    shared_ptr<string> businessChannel_ {};
    // The business type.
    // 
    // This parameter is required.
    shared_ptr<int32_t> businessType_ {};
    // The local camera redirection setting. This parameter takes effect only when no local camera redirection policy is specified in DeviceRedirects.
    shared_ptr<string> cameraRedirect_ {};
    shared_ptr<string> clientControlMenu_ {};
    shared_ptr<string> clientCreateSnapshot_ {};
    // The list of logon method control rules. This parameter controls which clients can access the cloud desktop.
    shared_ptr<vector<CreateCenterPolicyRequest::ClientType>> clientType_ {};
    // The clipboard permission.
    shared_ptr<string> clipboard_ {};
    // The clipboard fine-grained control configuration.
    shared_ptr<vector<CreateCenterPolicyRequest::ClipboardGraineds>> clipboardGraineds_ {};
    // The scope in which the clipboard policy takes effect.
    shared_ptr<string> clipboardScope_ {};
    // Specifies whether color enhancement is enabled for design and 3D application common scenarios.
    shared_ptr<string> colorEnhancement_ {};
    shared_ptr<string> cpdDriveClipboard_ {};
    // The CPU throttling duration. Valid values: 30 to 120. Unit: seconds.
    shared_ptr<int32_t> cpuDownGradeDuration_ {};
    shared_ptr<string> cpuOverload_ {};
    // The process name.
    shared_ptr<vector<string>> cpuProcessors_ {};
    // The CPU protection mode switch.
    shared_ptr<string> cpuProtectedMode_ {};
    // The overall CPU usage percentage. Valid values: 70 to 90.
    shared_ptr<int32_t> cpuRateLimit_ {};
    // The overall CPU sampling duration. Valid values: 10 to 60. Unit: seconds.
    shared_ptr<int32_t> cpuSampleDuration_ {};
    // The single-core CPU usage percentage. Valid values: 70 to 100.
    shared_ptr<int32_t> cpuSingleRateLimit_ {};
    shared_ptr<string> description_ {};
    // The peripheral connection notification control.
    shared_ptr<string> deviceConnectHint_ {};
    // The list of device redirection rules.
    shared_ptr<vector<CreateCenterPolicyRequest::DeviceRedirects>> deviceRedirects_ {};
    // The list of custom peripheral rules.
    shared_ptr<vector<CreateCenterPolicyRequest::DeviceRules>> deviceRules_ {};
    // The session retention after disconnection setting.
    // > This parameter applies only to cloud application policies.
    shared_ptr<string> disconnectKeepSession_ {};
    // The session retention duration after disconnection. Valid values: 30 to 7200. Unit: seconds.
    // 
    // > This parameter applies only to cloud application policies.
    shared_ptr<int32_t> disconnectKeepSessionTime_ {};
    shared_ptr<string> diskOverload_ {};
    // The display mode.
    shared_ptr<string> displayMode_ {};
    // The domain name resolution policy.
    shared_ptr<vector<CreateCenterPolicyRequest::DomainResolveRule>> domainResolveRule_ {};
    // The domain name resolution policy type.
    shared_ptr<string> domainResolveRuleType_ {};
    // The session bandwidth throttling setting.
    shared_ptr<string> enableSessionRateLimiting_ {};
    // The setting for users to request administrator assistance.
    shared_ptr<string> endUserApplyAdminCoordinate_ {};
    // The setting for users within the same office network to share cloud desktops.
    shared_ptr<string> endUserGroupCoordinate_ {};
    shared_ptr<string> externalDrive_ {};
    // The file migration setting.
    shared_ptr<string> fileMigrate_ {};
    shared_ptr<string> fileTransferAddress_ {};
    shared_ptr<int32_t> fileTransferInSize_ {};
    shared_ptr<string> fileTransferInUnit_ {};
    shared_ptr<int32_t> fileTransferOutSize_ {};
    shared_ptr<string> fileTransferOutUnit_ {};
    shared_ptr<string> fileTransferSizeLimit_ {};
    shared_ptr<string> fileTransferSpeed_ {};
    shared_ptr<string> fileTransferSpeedLocation_ {};
    // Specifies whether to enable the image quality policy for GPU-accelerated cloud desktops. Enable this policy when high performance and user experience are required, such as in professional design scenarios.
    shared_ptr<string> gpuAcceleration_ {};
    shared_ptr<string> hoverConfigMsg_ {};
    // The file transfer policy for the web client.
    shared_ptr<string> html5FileTransfer_ {};
    // The network communication protocol.
    shared_ptr<string> internetCommunicationProtocol_ {};
    shared_ptr<string> internetPrinter_ {};
    shared_ptr<string> keyboardControl_ {};
    // The local disk mapping permission.
    shared_ptr<string> localDrive_ {};
    // The maximum reconnection retry time when the cloud desktop is disconnected due to objective reasons. Valid values: 30 to 7200. Unit: seconds.
    shared_ptr<int32_t> maxReconnectTime_ {};
    // The single-process memory throttling duration. Valid values: 30 to 120. Unit: seconds.
    shared_ptr<int32_t> memoryDownGradeDuration_ {};
    shared_ptr<string> memoryOverload_ {};
    // The process name.
    shared_ptr<vector<string>> memoryProcessors_ {};
    // The memory protection mode switch.
    shared_ptr<string> memoryProtectedMode_ {};
    // The overall memory usage percentage. Valid values: 70 to 90.
    shared_ptr<int32_t> memoryRateLimit_ {};
    // The overall memory sampling duration. Valid values: 30 to 60. Unit: seconds.
    shared_ptr<int32_t> memorySampleDuration_ {};
    // The single-process memory usage percentage. Valid values: 30 to 60.
    shared_ptr<int32_t> memorySingleRateLimit_ {};
    // Specifies whether to provide the restart button in the cloud desktop floating ball when connecting through mobile clients (Android client<props="china"> and iOS client).
    // 
    // > This parameter applies only to mobile clients V7.4 or later.
    shared_ptr<string> mobileRestart_ {};
    // The mobile Windows security control switch.
    shared_ptr<string> mobileSafeMenu_ {};
    // Specifies whether to provide the shutdown button in the cloud desktop floating ball when connecting through mobile clients (Android client<props="china"> and iOS client).
    // 
    // > This parameter applies only to mobile clients V7.4 or later.
    shared_ptr<string> mobileShutdown_ {};
    // The mobile WUYING Manager switch.
    shared_ptr<string> mobileWuyingKeeper_ {};
    // The mobile AI assistant switch.
    shared_ptr<string> mobileWyAssistant_ {};
    shared_ptr<string> modelLibrary_ {};
    shared_ptr<string> multiScreen_ {};
    // The policy name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // Specifies whether to enable network redirection.
    // 
    // > This feature is in invitational preview and is not publicly available.
    shared_ptr<string> netRedirect_ {};
    // The network redirection policy details.
    // 
    // > This feature is in invitational preview and is not publicly available.
    // >
    shared_ptr<vector<CreateCenterPolicyRequest::NetRedirectRule>> netRedirectRule_ {};
    // The no-operation disconnect setting.
    // > This parameter applies only to cloud application policies.
    shared_ptr<string> noOperationDisconnect_ {};
    // The no-operation disconnect duration. Valid values: 120 to 7200. Unit: seconds.
    // 
    // > This parameter applies only to cloud application policies.
    shared_ptr<int32_t> noOperationDisconnectTime_ {};
    shared_ptr<string> portProxy_ {};
    // The printer redirection policy. This parameter takes effect only when no printer redirection policy is specified in DeviceRedirects.
    shared_ptr<string> printerRedirect_ {};
    // Specifies whether image quality enhancement is enabled for design and 3D application common scenarios.
    shared_ptr<string> qualityEnhancement_ {};
    // The recording duration after an event is detected in screen recording audit. Unit: minutes. Valid values: 10 to 60.
    shared_ptr<int32_t> recordEventDuration_ {};
    // The screen recording event file name extensions.
    shared_ptr<vector<string>> recordEventFileExts_ {};
    // The absolute paths for file monitoring in screen recording audit.
    shared_ptr<vector<string>> recordEventFilePaths_ {};
    // The screen recording event levels.
    shared_ptr<vector<CreateCenterPolicyRequest::RecordEventLevels>> recordEventLevels_ {};
    // The absolute paths for registry monitoring in screen recording audit.
    shared_ptr<vector<string>> recordEventRegisters_ {};
    // The list of screen recording events.
    shared_ptr<vector<string>> recordEvents_ {};
    // Specifies whether to enable screen recording.
    shared_ptr<string> recording_ {};
    // The option for recording cloud desktop audio.
    shared_ptr<string> recordingAudio_ {};
    // The duration of each recording file segment, in minutes. Recording files are automatically split and uploaded to the storage space based on the specified duration. Files are rolled over when they reach 300 MB. Valid values: 10 to 60.
    shared_ptr<int32_t> recordingDuration_ {};
    // The recording end time in the format of HH:MM:SS. This parameter is meaningful only when `Recording` is set to `PERIOD`.
    shared_ptr<string> recordingEndTime_ {};
    // The retention period of recording files. Valid values: 1 to 180. Unit: days.
    shared_ptr<int32_t> recordingExpires_ {};
    // The recording frame rate. Unit: FPS (frames per second).
    shared_ptr<string> recordingFps_ {};
    // The recording start time in the format of HH:MM:SS. This parameter is meaningful only when `Recording` is set to `PERIOD`.
    shared_ptr<string> recordingStartTime_ {};
    // Specifies whether to notify end users that screen recording is enabled.
    shared_ptr<string> recordingUserNotify_ {};
    // The notification message displayed to end users about screen recording being enabled.
    shared_ptr<string> recordingUserNotifyMessage_ {};
    // The region ID. This feature is region-independent. Set this parameter to cn-shanghai.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The keyboard and mouse control permission during remote assistance.
    shared_ptr<string> remoteCoordinate_ {};
    // The cloud desktop reset setting.
    shared_ptr<string> resetDesktop_ {};
    shared_ptr<int32_t> resolutionDpi_ {};
    // The resolution height. Unit: pixels. Valid values for cloud applications: 500 to 50000. Valid values for Cloud Desktop: 480 to 4096.
    shared_ptr<int32_t> resolutionHeight_ {};
    // The resolution type.
    shared_ptr<string> resolutionModel_ {};
    // The resolution width. Unit: pixels. Valid values for cloud applications: 500 to 50000. Valid values for Cloud Desktop: 640 to 4096.
    shared_ptr<int32_t> resolutionWidth_ {};
    // The resource type.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> safeMenu_ {};
    // The scope in which the policy takes effect.
    shared_ptr<string> scope_ {};
    // This parameter is required when `Scope` is set to `IP`. This parameter takes effect only when `Scope` is set to `IP`.
    shared_ptr<vector<string>> scopeValue_ {};
    shared_ptr<string> screenDisplayMode_ {};
    // The maximum value for session bandwidth throttling. Unit: Kbps. Valid values: 2000 to 100000.
    shared_ptr<int32_t> sessionMaxRateKbps_ {};
    // Specifies whether to enable smoothness enhancement for daily office scenarios.
    shared_ptr<string> smoothEnhancement_ {};
    // Specifies whether to provide the status monitoring entry in the cloud desktop floating ball.
    shared_ptr<string> statusMonitor_ {};
    // The streaming mode adaptation scenario.
    shared_ptr<string> streamingMode_ {};
    // The target frame rate. Valid values: 10 to 60.
    shared_ptr<int32_t> targetFps_ {};
    // The application taskbar.
    // > This parameter applies only to cloud application policies.
    shared_ptr<string> taskbar_ {};
    // The USB redirection setting.
    shared_ptr<string> usbRedirect_ {};
    // The USB redirection rules.
    shared_ptr<vector<CreateCenterPolicyRequest::UsbSupplyRedirectRule>> usbSupplyRedirectRule_ {};
    shared_ptr<string> useTime_ {};
    // The average bitrate for video encoding. Unit: Kbps. Valid values: 1000 to 50000.
    shared_ptr<int32_t> videoEncAvgKbps_ {};
    // The maximum QP for video encoding, which represents the lowest quality. Valid values: 0 to 51.
    shared_ptr<int32_t> videoEncMaxQP_ {};
    // The minimum QP for video encoding, which represents the highest quality. Valid values: 0 to 51.
    shared_ptr<int32_t> videoEncMinQP_ {};
    // The peak bitrate for video encoding. Unit: Kbps. Valid values: 1000 to 50000.
    shared_ptr<int32_t> videoEncPeakKbps_ {};
    // The video encoding policy.
    shared_ptr<string> videoEncPolicy_ {};
    // The multimedia redirection setting.
    shared_ptr<string> videoRedirect_ {};
    // The image display quality policy.
    shared_ptr<string> visualQuality_ {};
    // The watermark setting.
    shared_ptr<string> watermark_ {};
    // The invisible watermark anti-photography feature.
    shared_ptr<string> watermarkAntiCam_ {};
    // The watermark font color. Valid values: 0 to 16777215.
    shared_ptr<int32_t> watermarkColor_ {};
    // The number of watermark columns. Valid values: 3 to 10.
    shared_ptr<int32_t> watermarkColumnAmount_ {};
    // If you set `WatermarkType` to `custom`, you must also specify the custom text content by using the `WatermarkCustomText` parameter.
    shared_ptr<string> watermarkCustomText_ {};
    // The watermark tilt angle. Valid values: -10 to -30.
    shared_ptr<double> watermarkDegree_ {};
    // The watermark font size. Valid values: 10 to 20.
    shared_ptr<int32_t> watermarkFontSize_ {};
    // The watermark font style.
    shared_ptr<string> watermarkFontStyle_ {};
    // The invisible watermark enhancement feature.
    shared_ptr<string> watermarkPower_ {};
    // The number of watermark rows. Valid values: 3 to 10.
    shared_ptr<int32_t> watermarkRowAmount_ {};
    // The security priority rule for invisible watermarks.
    shared_ptr<string> watermarkSecurity_ {};
    shared_ptr<string> watermarkShadow_ {};
    // The watermark opacity. A larger value indicates lower transparency. Valid values: 10 to 100.
    shared_ptr<int32_t> watermarkTransparencyValue_ {};
    // The watermark type. You can select up to three types, separated by commas (,).
    // 
    // > If you set this parameter to `custom`, you must also specify the custom text content by using the `WatermarkCustomText` parameter.
    shared_ptr<string> watermarkType_ {};
    // The WUYING Manager switch.
    shared_ptr<string> wuyingKeeper_ {};
    // Specifies whether to provide the WUYING AI Assistant entry in the cloud desktop floating ball when connecting through desktop clients (including Windows and macOS clients).
    // 
    // > This parameter applies only to desktop clients V7.7 or later.
    shared_ptr<string> wyAssistant_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
