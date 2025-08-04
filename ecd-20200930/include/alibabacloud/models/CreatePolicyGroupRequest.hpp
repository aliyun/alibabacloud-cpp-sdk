// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePolicyGroupRequestAuthorizeAccessPolicyRule.hpp>
#include <alibabacloud/models/CreatePolicyGroupRequestAuthorizeSecurityPolicyRule.hpp>
#include <alibabacloud/models/CreatePolicyGroupRequestClientType.hpp>
#include <alibabacloud/models/CreatePolicyGroupRequestDeviceRedirects.hpp>
#include <alibabacloud/models/CreatePolicyGroupRequestDeviceRules.hpp>
#include <alibabacloud/models/CreatePolicyGroupRequestDomainResolveRule.hpp>
#include <alibabacloud/models/CreatePolicyGroupRequestUsbSupplyRedirectRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreatePolicyGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdminAccess, adminAccess_);
      DARABONBA_PTR_TO_JSON(AppContentProtection, appContentProtection_);
      DARABONBA_PTR_TO_JSON(AuthorizeAccessPolicyRule, authorizeAccessPolicyRule_);
      DARABONBA_PTR_TO_JSON(AuthorizeSecurityPolicyRule, authorizeSecurityPolicyRule_);
      DARABONBA_PTR_TO_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_TO_JSON(DeviceRedirects, deviceRedirects_);
      DARABONBA_PTR_TO_JSON(DeviceRules, deviceRules_);
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(DomainResolveRule, domainResolveRule_);
      DARABONBA_PTR_TO_JSON(DomainResolveRuleType, domainResolveRuleType_);
      DARABONBA_PTR_TO_JSON(EndUserApplyAdminCoordinate, endUserApplyAdminCoordinate_);
      DARABONBA_PTR_TO_JSON(EndUserGroupCoordinate, endUserGroupCoordinate_);
      DARABONBA_PTR_TO_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_TO_JSON(Html5Access, html5Access_);
      DARABONBA_PTR_TO_JSON(Html5FileTransfer, html5FileTransfer_);
      DARABONBA_PTR_TO_JSON(InternetCommunicationProtocol, internetCommunicationProtocol_);
      DARABONBA_PTR_TO_JSON(LocalDrive, localDrive_);
      DARABONBA_PTR_TO_JSON(MaxReconnectTime, maxReconnectTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetRedirect, netRedirect_);
      DARABONBA_PTR_TO_JSON(PreemptLogin, preemptLogin_);
      DARABONBA_PTR_TO_JSON(PreemptLoginUser, preemptLoginUser_);
      DARABONBA_PTR_TO_JSON(PrinterRedirection, printerRedirection_);
      DARABONBA_PTR_TO_JSON(RecordContent, recordContent_);
      DARABONBA_PTR_TO_JSON(RecordContentExpires, recordContentExpires_);
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
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(ScopeValue, scopeValue_);
      DARABONBA_PTR_TO_JSON(UsbRedirect, usbRedirect_);
      DARABONBA_PTR_TO_JSON(UsbSupplyRedirectRule, usbSupplyRedirectRule_);
      DARABONBA_PTR_TO_JSON(VideoRedirect, videoRedirect_);
      DARABONBA_PTR_TO_JSON(VisualQuality, visualQuality_);
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
      DARABONBA_PTR_TO_JSON(WatermarkAntiCam, watermarkAntiCam_);
      DARABONBA_PTR_TO_JSON(WatermarkColor, watermarkColor_);
      DARABONBA_PTR_TO_JSON(WatermarkDegree, watermarkDegree_);
      DARABONBA_PTR_TO_JSON(WatermarkFontSize, watermarkFontSize_);
      DARABONBA_PTR_TO_JSON(WatermarkFontStyle, watermarkFontStyle_);
      DARABONBA_PTR_TO_JSON(WatermarkPower, watermarkPower_);
      DARABONBA_PTR_TO_JSON(WatermarkRowAmount, watermarkRowAmount_);
      DARABONBA_PTR_TO_JSON(WatermarkSecurity, watermarkSecurity_);
      DARABONBA_PTR_TO_JSON(WatermarkTransparency, watermarkTransparency_);
      DARABONBA_PTR_TO_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
      DARABONBA_PTR_TO_JSON(WatermarkType, watermarkType_);
      DARABONBA_PTR_TO_JSON(WyAssistant, wyAssistant_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminAccess, adminAccess_);
      DARABONBA_PTR_FROM_JSON(AppContentProtection, appContentProtection_);
      DARABONBA_PTR_FROM_JSON(AuthorizeAccessPolicyRule, authorizeAccessPolicyRule_);
      DARABONBA_PTR_FROM_JSON(AuthorizeSecurityPolicyRule, authorizeSecurityPolicyRule_);
      DARABONBA_PTR_FROM_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_FROM_JSON(DeviceRedirects, deviceRedirects_);
      DARABONBA_PTR_FROM_JSON(DeviceRules, deviceRules_);
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(DomainResolveRule, domainResolveRule_);
      DARABONBA_PTR_FROM_JSON(DomainResolveRuleType, domainResolveRuleType_);
      DARABONBA_PTR_FROM_JSON(EndUserApplyAdminCoordinate, endUserApplyAdminCoordinate_);
      DARABONBA_PTR_FROM_JSON(EndUserGroupCoordinate, endUserGroupCoordinate_);
      DARABONBA_PTR_FROM_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_FROM_JSON(Html5Access, html5Access_);
      DARABONBA_PTR_FROM_JSON(Html5FileTransfer, html5FileTransfer_);
      DARABONBA_PTR_FROM_JSON(InternetCommunicationProtocol, internetCommunicationProtocol_);
      DARABONBA_PTR_FROM_JSON(LocalDrive, localDrive_);
      DARABONBA_PTR_FROM_JSON(MaxReconnectTime, maxReconnectTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetRedirect, netRedirect_);
      DARABONBA_PTR_FROM_JSON(PreemptLogin, preemptLogin_);
      DARABONBA_PTR_FROM_JSON(PreemptLoginUser, preemptLoginUser_);
      DARABONBA_PTR_FROM_JSON(PrinterRedirection, printerRedirection_);
      DARABONBA_PTR_FROM_JSON(RecordContent, recordContent_);
      DARABONBA_PTR_FROM_JSON(RecordContentExpires, recordContentExpires_);
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
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(ScopeValue, scopeValue_);
      DARABONBA_PTR_FROM_JSON(UsbRedirect, usbRedirect_);
      DARABONBA_PTR_FROM_JSON(UsbSupplyRedirectRule, usbSupplyRedirectRule_);
      DARABONBA_PTR_FROM_JSON(VideoRedirect, videoRedirect_);
      DARABONBA_PTR_FROM_JSON(VisualQuality, visualQuality_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
      DARABONBA_PTR_FROM_JSON(WatermarkAntiCam, watermarkAntiCam_);
      DARABONBA_PTR_FROM_JSON(WatermarkColor, watermarkColor_);
      DARABONBA_PTR_FROM_JSON(WatermarkDegree, watermarkDegree_);
      DARABONBA_PTR_FROM_JSON(WatermarkFontSize, watermarkFontSize_);
      DARABONBA_PTR_FROM_JSON(WatermarkFontStyle, watermarkFontStyle_);
      DARABONBA_PTR_FROM_JSON(WatermarkPower, watermarkPower_);
      DARABONBA_PTR_FROM_JSON(WatermarkRowAmount, watermarkRowAmount_);
      DARABONBA_PTR_FROM_JSON(WatermarkSecurity, watermarkSecurity_);
      DARABONBA_PTR_FROM_JSON(WatermarkTransparency, watermarkTransparency_);
      DARABONBA_PTR_FROM_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
      DARABONBA_PTR_FROM_JSON(WatermarkType, watermarkType_);
      DARABONBA_PTR_FROM_JSON(WyAssistant, wyAssistant_);
    };
    CreatePolicyGroupRequest() = default ;
    CreatePolicyGroupRequest(const CreatePolicyGroupRequest &) = default ;
    CreatePolicyGroupRequest(CreatePolicyGroupRequest &&) = default ;
    CreatePolicyGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyGroupRequest() = default ;
    CreatePolicyGroupRequest& operator=(const CreatePolicyGroupRequest &) = default ;
    CreatePolicyGroupRequest& operator=(CreatePolicyGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adminAccess_ != nullptr
        && this->appContentProtection_ != nullptr && this->authorizeAccessPolicyRule_ != nullptr && this->authorizeSecurityPolicyRule_ != nullptr && this->cameraRedirect_ != nullptr && this->clientType_ != nullptr
        && this->clipboard_ != nullptr && this->deviceRedirects_ != nullptr && this->deviceRules_ != nullptr && this->domainList_ != nullptr && this->domainResolveRule_ != nullptr
        && this->domainResolveRuleType_ != nullptr && this->endUserApplyAdminCoordinate_ != nullptr && this->endUserGroupCoordinate_ != nullptr && this->gpuAcceleration_ != nullptr && this->html5Access_ != nullptr
        && this->html5FileTransfer_ != nullptr && this->internetCommunicationProtocol_ != nullptr && this->localDrive_ != nullptr && this->maxReconnectTime_ != nullptr && this->name_ != nullptr
        && this->netRedirect_ != nullptr && this->preemptLogin_ != nullptr && this->preemptLoginUser_ != nullptr && this->printerRedirection_ != nullptr && this->recordContent_ != nullptr
        && this->recordContentExpires_ != nullptr && this->recording_ != nullptr && this->recordingAudio_ != nullptr && this->recordingDuration_ != nullptr && this->recordingEndTime_ != nullptr
        && this->recordingExpires_ != nullptr && this->recordingFps_ != nullptr && this->recordingStartTime_ != nullptr && this->recordingUserNotify_ != nullptr && this->recordingUserNotifyMessage_ != nullptr
        && this->regionId_ != nullptr && this->remoteCoordinate_ != nullptr && this->scope_ != nullptr && this->scopeValue_ != nullptr && this->usbRedirect_ != nullptr
        && this->usbSupplyRedirectRule_ != nullptr && this->videoRedirect_ != nullptr && this->visualQuality_ != nullptr && this->watermark_ != nullptr && this->watermarkAntiCam_ != nullptr
        && this->watermarkColor_ != nullptr && this->watermarkDegree_ != nullptr && this->watermarkFontSize_ != nullptr && this->watermarkFontStyle_ != nullptr && this->watermarkPower_ != nullptr
        && this->watermarkRowAmount_ != nullptr && this->watermarkSecurity_ != nullptr && this->watermarkTransparency_ != nullptr && this->watermarkTransparencyValue_ != nullptr && this->watermarkType_ != nullptr
        && this->wyAssistant_ != nullptr; };
    // adminAccess Field Functions 
    bool hasAdminAccess() const { return this->adminAccess_ != nullptr;};
    void deleteAdminAccess() { this->adminAccess_ = nullptr;};
    inline string adminAccess() const { DARABONBA_PTR_GET_DEFAULT(adminAccess_, "") };
    inline CreatePolicyGroupRequest& setAdminAccess(string adminAccess) { DARABONBA_PTR_SET_VALUE(adminAccess_, adminAccess) };


    // appContentProtection Field Functions 
    bool hasAppContentProtection() const { return this->appContentProtection_ != nullptr;};
    void deleteAppContentProtection() { this->appContentProtection_ = nullptr;};
    inline string appContentProtection() const { DARABONBA_PTR_GET_DEFAULT(appContentProtection_, "") };
    inline CreatePolicyGroupRequest& setAppContentProtection(string appContentProtection) { DARABONBA_PTR_SET_VALUE(appContentProtection_, appContentProtection) };


    // authorizeAccessPolicyRule Field Functions 
    bool hasAuthorizeAccessPolicyRule() const { return this->authorizeAccessPolicyRule_ != nullptr;};
    void deleteAuthorizeAccessPolicyRule() { this->authorizeAccessPolicyRule_ = nullptr;};
    inline const vector<CreatePolicyGroupRequestAuthorizeAccessPolicyRule> & authorizeAccessPolicyRule() const { DARABONBA_PTR_GET_CONST(authorizeAccessPolicyRule_, vector<CreatePolicyGroupRequestAuthorizeAccessPolicyRule>) };
    inline vector<CreatePolicyGroupRequestAuthorizeAccessPolicyRule> authorizeAccessPolicyRule() { DARABONBA_PTR_GET(authorizeAccessPolicyRule_, vector<CreatePolicyGroupRequestAuthorizeAccessPolicyRule>) };
    inline CreatePolicyGroupRequest& setAuthorizeAccessPolicyRule(const vector<CreatePolicyGroupRequestAuthorizeAccessPolicyRule> & authorizeAccessPolicyRule) { DARABONBA_PTR_SET_VALUE(authorizeAccessPolicyRule_, authorizeAccessPolicyRule) };
    inline CreatePolicyGroupRequest& setAuthorizeAccessPolicyRule(vector<CreatePolicyGroupRequestAuthorizeAccessPolicyRule> && authorizeAccessPolicyRule) { DARABONBA_PTR_SET_RVALUE(authorizeAccessPolicyRule_, authorizeAccessPolicyRule) };


    // authorizeSecurityPolicyRule Field Functions 
    bool hasAuthorizeSecurityPolicyRule() const { return this->authorizeSecurityPolicyRule_ != nullptr;};
    void deleteAuthorizeSecurityPolicyRule() { this->authorizeSecurityPolicyRule_ = nullptr;};
    inline const vector<CreatePolicyGroupRequestAuthorizeSecurityPolicyRule> & authorizeSecurityPolicyRule() const { DARABONBA_PTR_GET_CONST(authorizeSecurityPolicyRule_, vector<CreatePolicyGroupRequestAuthorizeSecurityPolicyRule>) };
    inline vector<CreatePolicyGroupRequestAuthorizeSecurityPolicyRule> authorizeSecurityPolicyRule() { DARABONBA_PTR_GET(authorizeSecurityPolicyRule_, vector<CreatePolicyGroupRequestAuthorizeSecurityPolicyRule>) };
    inline CreatePolicyGroupRequest& setAuthorizeSecurityPolicyRule(const vector<CreatePolicyGroupRequestAuthorizeSecurityPolicyRule> & authorizeSecurityPolicyRule) { DARABONBA_PTR_SET_VALUE(authorizeSecurityPolicyRule_, authorizeSecurityPolicyRule) };
    inline CreatePolicyGroupRequest& setAuthorizeSecurityPolicyRule(vector<CreatePolicyGroupRequestAuthorizeSecurityPolicyRule> && authorizeSecurityPolicyRule) { DARABONBA_PTR_SET_RVALUE(authorizeSecurityPolicyRule_, authorizeSecurityPolicyRule) };


    // cameraRedirect Field Functions 
    bool hasCameraRedirect() const { return this->cameraRedirect_ != nullptr;};
    void deleteCameraRedirect() { this->cameraRedirect_ = nullptr;};
    inline string cameraRedirect() const { DARABONBA_PTR_GET_DEFAULT(cameraRedirect_, "") };
    inline CreatePolicyGroupRequest& setCameraRedirect(string cameraRedirect) { DARABONBA_PTR_SET_VALUE(cameraRedirect_, cameraRedirect) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline const vector<CreatePolicyGroupRequestClientType> & clientType() const { DARABONBA_PTR_GET_CONST(clientType_, vector<CreatePolicyGroupRequestClientType>) };
    inline vector<CreatePolicyGroupRequestClientType> clientType() { DARABONBA_PTR_GET(clientType_, vector<CreatePolicyGroupRequestClientType>) };
    inline CreatePolicyGroupRequest& setClientType(const vector<CreatePolicyGroupRequestClientType> & clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };
    inline CreatePolicyGroupRequest& setClientType(vector<CreatePolicyGroupRequestClientType> && clientType) { DARABONBA_PTR_SET_RVALUE(clientType_, clientType) };


    // clipboard Field Functions 
    bool hasClipboard() const { return this->clipboard_ != nullptr;};
    void deleteClipboard() { this->clipboard_ = nullptr;};
    inline string clipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
    inline CreatePolicyGroupRequest& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


    // deviceRedirects Field Functions 
    bool hasDeviceRedirects() const { return this->deviceRedirects_ != nullptr;};
    void deleteDeviceRedirects() { this->deviceRedirects_ = nullptr;};
    inline const vector<CreatePolicyGroupRequestDeviceRedirects> & deviceRedirects() const { DARABONBA_PTR_GET_CONST(deviceRedirects_, vector<CreatePolicyGroupRequestDeviceRedirects>) };
    inline vector<CreatePolicyGroupRequestDeviceRedirects> deviceRedirects() { DARABONBA_PTR_GET(deviceRedirects_, vector<CreatePolicyGroupRequestDeviceRedirects>) };
    inline CreatePolicyGroupRequest& setDeviceRedirects(const vector<CreatePolicyGroupRequestDeviceRedirects> & deviceRedirects) { DARABONBA_PTR_SET_VALUE(deviceRedirects_, deviceRedirects) };
    inline CreatePolicyGroupRequest& setDeviceRedirects(vector<CreatePolicyGroupRequestDeviceRedirects> && deviceRedirects) { DARABONBA_PTR_SET_RVALUE(deviceRedirects_, deviceRedirects) };


    // deviceRules Field Functions 
    bool hasDeviceRules() const { return this->deviceRules_ != nullptr;};
    void deleteDeviceRules() { this->deviceRules_ = nullptr;};
    inline const vector<CreatePolicyGroupRequestDeviceRules> & deviceRules() const { DARABONBA_PTR_GET_CONST(deviceRules_, vector<CreatePolicyGroupRequestDeviceRules>) };
    inline vector<CreatePolicyGroupRequestDeviceRules> deviceRules() { DARABONBA_PTR_GET(deviceRules_, vector<CreatePolicyGroupRequestDeviceRules>) };
    inline CreatePolicyGroupRequest& setDeviceRules(const vector<CreatePolicyGroupRequestDeviceRules> & deviceRules) { DARABONBA_PTR_SET_VALUE(deviceRules_, deviceRules) };
    inline CreatePolicyGroupRequest& setDeviceRules(vector<CreatePolicyGroupRequestDeviceRules> && deviceRules) { DARABONBA_PTR_SET_RVALUE(deviceRules_, deviceRules) };


    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline string domainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
    inline CreatePolicyGroupRequest& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


    // domainResolveRule Field Functions 
    bool hasDomainResolveRule() const { return this->domainResolveRule_ != nullptr;};
    void deleteDomainResolveRule() { this->domainResolveRule_ = nullptr;};
    inline const vector<CreatePolicyGroupRequestDomainResolveRule> & domainResolveRule() const { DARABONBA_PTR_GET_CONST(domainResolveRule_, vector<CreatePolicyGroupRequestDomainResolveRule>) };
    inline vector<CreatePolicyGroupRequestDomainResolveRule> domainResolveRule() { DARABONBA_PTR_GET(domainResolveRule_, vector<CreatePolicyGroupRequestDomainResolveRule>) };
    inline CreatePolicyGroupRequest& setDomainResolveRule(const vector<CreatePolicyGroupRequestDomainResolveRule> & domainResolveRule) { DARABONBA_PTR_SET_VALUE(domainResolveRule_, domainResolveRule) };
    inline CreatePolicyGroupRequest& setDomainResolveRule(vector<CreatePolicyGroupRequestDomainResolveRule> && domainResolveRule) { DARABONBA_PTR_SET_RVALUE(domainResolveRule_, domainResolveRule) };


    // domainResolveRuleType Field Functions 
    bool hasDomainResolveRuleType() const { return this->domainResolveRuleType_ != nullptr;};
    void deleteDomainResolveRuleType() { this->domainResolveRuleType_ = nullptr;};
    inline string domainResolveRuleType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveRuleType_, "") };
    inline CreatePolicyGroupRequest& setDomainResolveRuleType(string domainResolveRuleType) { DARABONBA_PTR_SET_VALUE(domainResolveRuleType_, domainResolveRuleType) };


    // endUserApplyAdminCoordinate Field Functions 
    bool hasEndUserApplyAdminCoordinate() const { return this->endUserApplyAdminCoordinate_ != nullptr;};
    void deleteEndUserApplyAdminCoordinate() { this->endUserApplyAdminCoordinate_ = nullptr;};
    inline string endUserApplyAdminCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserApplyAdminCoordinate_, "") };
    inline CreatePolicyGroupRequest& setEndUserApplyAdminCoordinate(string endUserApplyAdminCoordinate) { DARABONBA_PTR_SET_VALUE(endUserApplyAdminCoordinate_, endUserApplyAdminCoordinate) };


    // endUserGroupCoordinate Field Functions 
    bool hasEndUserGroupCoordinate() const { return this->endUserGroupCoordinate_ != nullptr;};
    void deleteEndUserGroupCoordinate() { this->endUserGroupCoordinate_ = nullptr;};
    inline string endUserGroupCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserGroupCoordinate_, "") };
    inline CreatePolicyGroupRequest& setEndUserGroupCoordinate(string endUserGroupCoordinate) { DARABONBA_PTR_SET_VALUE(endUserGroupCoordinate_, endUserGroupCoordinate) };


    // gpuAcceleration Field Functions 
    bool hasGpuAcceleration() const { return this->gpuAcceleration_ != nullptr;};
    void deleteGpuAcceleration() { this->gpuAcceleration_ = nullptr;};
    inline string gpuAcceleration() const { DARABONBA_PTR_GET_DEFAULT(gpuAcceleration_, "") };
    inline CreatePolicyGroupRequest& setGpuAcceleration(string gpuAcceleration) { DARABONBA_PTR_SET_VALUE(gpuAcceleration_, gpuAcceleration) };


    // html5Access Field Functions 
    bool hasHtml5Access() const { return this->html5Access_ != nullptr;};
    void deleteHtml5Access() { this->html5Access_ = nullptr;};
    inline string html5Access() const { DARABONBA_PTR_GET_DEFAULT(html5Access_, "") };
    inline CreatePolicyGroupRequest& setHtml5Access(string html5Access) { DARABONBA_PTR_SET_VALUE(html5Access_, html5Access) };


    // html5FileTransfer Field Functions 
    bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
    void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
    inline string html5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
    inline CreatePolicyGroupRequest& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


    // internetCommunicationProtocol Field Functions 
    bool hasInternetCommunicationProtocol() const { return this->internetCommunicationProtocol_ != nullptr;};
    void deleteInternetCommunicationProtocol() { this->internetCommunicationProtocol_ = nullptr;};
    inline string internetCommunicationProtocol() const { DARABONBA_PTR_GET_DEFAULT(internetCommunicationProtocol_, "") };
    inline CreatePolicyGroupRequest& setInternetCommunicationProtocol(string internetCommunicationProtocol) { DARABONBA_PTR_SET_VALUE(internetCommunicationProtocol_, internetCommunicationProtocol) };


    // localDrive Field Functions 
    bool hasLocalDrive() const { return this->localDrive_ != nullptr;};
    void deleteLocalDrive() { this->localDrive_ = nullptr;};
    inline string localDrive() const { DARABONBA_PTR_GET_DEFAULT(localDrive_, "") };
    inline CreatePolicyGroupRequest& setLocalDrive(string localDrive) { DARABONBA_PTR_SET_VALUE(localDrive_, localDrive) };


    // maxReconnectTime Field Functions 
    bool hasMaxReconnectTime() const { return this->maxReconnectTime_ != nullptr;};
    void deleteMaxReconnectTime() { this->maxReconnectTime_ = nullptr;};
    inline int32_t maxReconnectTime() const { DARABONBA_PTR_GET_DEFAULT(maxReconnectTime_, 0) };
    inline CreatePolicyGroupRequest& setMaxReconnectTime(int32_t maxReconnectTime) { DARABONBA_PTR_SET_VALUE(maxReconnectTime_, maxReconnectTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePolicyGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netRedirect Field Functions 
    bool hasNetRedirect() const { return this->netRedirect_ != nullptr;};
    void deleteNetRedirect() { this->netRedirect_ = nullptr;};
    inline string netRedirect() const { DARABONBA_PTR_GET_DEFAULT(netRedirect_, "") };
    inline CreatePolicyGroupRequest& setNetRedirect(string netRedirect) { DARABONBA_PTR_SET_VALUE(netRedirect_, netRedirect) };


    // preemptLogin Field Functions 
    bool hasPreemptLogin() const { return this->preemptLogin_ != nullptr;};
    void deletePreemptLogin() { this->preemptLogin_ = nullptr;};
    inline string preemptLogin() const { DARABONBA_PTR_GET_DEFAULT(preemptLogin_, "") };
    inline CreatePolicyGroupRequest& setPreemptLogin(string preemptLogin) { DARABONBA_PTR_SET_VALUE(preemptLogin_, preemptLogin) };


    // preemptLoginUser Field Functions 
    bool hasPreemptLoginUser() const { return this->preemptLoginUser_ != nullptr;};
    void deletePreemptLoginUser() { this->preemptLoginUser_ = nullptr;};
    inline const vector<string> & preemptLoginUser() const { DARABONBA_PTR_GET_CONST(preemptLoginUser_, vector<string>) };
    inline vector<string> preemptLoginUser() { DARABONBA_PTR_GET(preemptLoginUser_, vector<string>) };
    inline CreatePolicyGroupRequest& setPreemptLoginUser(const vector<string> & preemptLoginUser) { DARABONBA_PTR_SET_VALUE(preemptLoginUser_, preemptLoginUser) };
    inline CreatePolicyGroupRequest& setPreemptLoginUser(vector<string> && preemptLoginUser) { DARABONBA_PTR_SET_RVALUE(preemptLoginUser_, preemptLoginUser) };


    // printerRedirection Field Functions 
    bool hasPrinterRedirection() const { return this->printerRedirection_ != nullptr;};
    void deletePrinterRedirection() { this->printerRedirection_ = nullptr;};
    inline string printerRedirection() const { DARABONBA_PTR_GET_DEFAULT(printerRedirection_, "") };
    inline CreatePolicyGroupRequest& setPrinterRedirection(string printerRedirection) { DARABONBA_PTR_SET_VALUE(printerRedirection_, printerRedirection) };


    // recordContent Field Functions 
    bool hasRecordContent() const { return this->recordContent_ != nullptr;};
    void deleteRecordContent() { this->recordContent_ = nullptr;};
    inline string recordContent() const { DARABONBA_PTR_GET_DEFAULT(recordContent_, "") };
    inline CreatePolicyGroupRequest& setRecordContent(string recordContent) { DARABONBA_PTR_SET_VALUE(recordContent_, recordContent) };


    // recordContentExpires Field Functions 
    bool hasRecordContentExpires() const { return this->recordContentExpires_ != nullptr;};
    void deleteRecordContentExpires() { this->recordContentExpires_ = nullptr;};
    inline int64_t recordContentExpires() const { DARABONBA_PTR_GET_DEFAULT(recordContentExpires_, 0L) };
    inline CreatePolicyGroupRequest& setRecordContentExpires(int64_t recordContentExpires) { DARABONBA_PTR_SET_VALUE(recordContentExpires_, recordContentExpires) };


    // recording Field Functions 
    bool hasRecording() const { return this->recording_ != nullptr;};
    void deleteRecording() { this->recording_ = nullptr;};
    inline string recording() const { DARABONBA_PTR_GET_DEFAULT(recording_, "") };
    inline CreatePolicyGroupRequest& setRecording(string recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };


    // recordingAudio Field Functions 
    bool hasRecordingAudio() const { return this->recordingAudio_ != nullptr;};
    void deleteRecordingAudio() { this->recordingAudio_ = nullptr;};
    inline string recordingAudio() const { DARABONBA_PTR_GET_DEFAULT(recordingAudio_, "") };
    inline CreatePolicyGroupRequest& setRecordingAudio(string recordingAudio) { DARABONBA_PTR_SET_VALUE(recordingAudio_, recordingAudio) };


    // recordingDuration Field Functions 
    bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
    void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
    inline int32_t recordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0) };
    inline CreatePolicyGroupRequest& setRecordingDuration(int32_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


    // recordingEndTime Field Functions 
    bool hasRecordingEndTime() const { return this->recordingEndTime_ != nullptr;};
    void deleteRecordingEndTime() { this->recordingEndTime_ = nullptr;};
    inline string recordingEndTime() const { DARABONBA_PTR_GET_DEFAULT(recordingEndTime_, "") };
    inline CreatePolicyGroupRequest& setRecordingEndTime(string recordingEndTime) { DARABONBA_PTR_SET_VALUE(recordingEndTime_, recordingEndTime) };


    // recordingExpires Field Functions 
    bool hasRecordingExpires() const { return this->recordingExpires_ != nullptr;};
    void deleteRecordingExpires() { this->recordingExpires_ = nullptr;};
    inline int64_t recordingExpires() const { DARABONBA_PTR_GET_DEFAULT(recordingExpires_, 0L) };
    inline CreatePolicyGroupRequest& setRecordingExpires(int64_t recordingExpires) { DARABONBA_PTR_SET_VALUE(recordingExpires_, recordingExpires) };


    // recordingFps Field Functions 
    bool hasRecordingFps() const { return this->recordingFps_ != nullptr;};
    void deleteRecordingFps() { this->recordingFps_ = nullptr;};
    inline int64_t recordingFps() const { DARABONBA_PTR_GET_DEFAULT(recordingFps_, 0L) };
    inline CreatePolicyGroupRequest& setRecordingFps(int64_t recordingFps) { DARABONBA_PTR_SET_VALUE(recordingFps_, recordingFps) };


    // recordingStartTime Field Functions 
    bool hasRecordingStartTime() const { return this->recordingStartTime_ != nullptr;};
    void deleteRecordingStartTime() { this->recordingStartTime_ = nullptr;};
    inline string recordingStartTime() const { DARABONBA_PTR_GET_DEFAULT(recordingStartTime_, "") };
    inline CreatePolicyGroupRequest& setRecordingStartTime(string recordingStartTime) { DARABONBA_PTR_SET_VALUE(recordingStartTime_, recordingStartTime) };


    // recordingUserNotify Field Functions 
    bool hasRecordingUserNotify() const { return this->recordingUserNotify_ != nullptr;};
    void deleteRecordingUserNotify() { this->recordingUserNotify_ = nullptr;};
    inline string recordingUserNotify() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotify_, "") };
    inline CreatePolicyGroupRequest& setRecordingUserNotify(string recordingUserNotify) { DARABONBA_PTR_SET_VALUE(recordingUserNotify_, recordingUserNotify) };


    // recordingUserNotifyMessage Field Functions 
    bool hasRecordingUserNotifyMessage() const { return this->recordingUserNotifyMessage_ != nullptr;};
    void deleteRecordingUserNotifyMessage() { this->recordingUserNotifyMessage_ = nullptr;};
    inline string recordingUserNotifyMessage() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotifyMessage_, "") };
    inline CreatePolicyGroupRequest& setRecordingUserNotifyMessage(string recordingUserNotifyMessage) { DARABONBA_PTR_SET_VALUE(recordingUserNotifyMessage_, recordingUserNotifyMessage) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePolicyGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteCoordinate Field Functions 
    bool hasRemoteCoordinate() const { return this->remoteCoordinate_ != nullptr;};
    void deleteRemoteCoordinate() { this->remoteCoordinate_ = nullptr;};
    inline string remoteCoordinate() const { DARABONBA_PTR_GET_DEFAULT(remoteCoordinate_, "") };
    inline CreatePolicyGroupRequest& setRemoteCoordinate(string remoteCoordinate) { DARABONBA_PTR_SET_VALUE(remoteCoordinate_, remoteCoordinate) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline CreatePolicyGroupRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // scopeValue Field Functions 
    bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
    void deleteScopeValue() { this->scopeValue_ = nullptr;};
    inline const vector<string> & scopeValue() const { DARABONBA_PTR_GET_CONST(scopeValue_, vector<string>) };
    inline vector<string> scopeValue() { DARABONBA_PTR_GET(scopeValue_, vector<string>) };
    inline CreatePolicyGroupRequest& setScopeValue(const vector<string> & scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };
    inline CreatePolicyGroupRequest& setScopeValue(vector<string> && scopeValue) { DARABONBA_PTR_SET_RVALUE(scopeValue_, scopeValue) };


    // usbRedirect Field Functions 
    bool hasUsbRedirect() const { return this->usbRedirect_ != nullptr;};
    void deleteUsbRedirect() { this->usbRedirect_ = nullptr;};
    inline string usbRedirect() const { DARABONBA_PTR_GET_DEFAULT(usbRedirect_, "") };
    inline CreatePolicyGroupRequest& setUsbRedirect(string usbRedirect) { DARABONBA_PTR_SET_VALUE(usbRedirect_, usbRedirect) };


    // usbSupplyRedirectRule Field Functions 
    bool hasUsbSupplyRedirectRule() const { return this->usbSupplyRedirectRule_ != nullptr;};
    void deleteUsbSupplyRedirectRule() { this->usbSupplyRedirectRule_ = nullptr;};
    inline const vector<CreatePolicyGroupRequestUsbSupplyRedirectRule> & usbSupplyRedirectRule() const { DARABONBA_PTR_GET_CONST(usbSupplyRedirectRule_, vector<CreatePolicyGroupRequestUsbSupplyRedirectRule>) };
    inline vector<CreatePolicyGroupRequestUsbSupplyRedirectRule> usbSupplyRedirectRule() { DARABONBA_PTR_GET(usbSupplyRedirectRule_, vector<CreatePolicyGroupRequestUsbSupplyRedirectRule>) };
    inline CreatePolicyGroupRequest& setUsbSupplyRedirectRule(const vector<CreatePolicyGroupRequestUsbSupplyRedirectRule> & usbSupplyRedirectRule) { DARABONBA_PTR_SET_VALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };
    inline CreatePolicyGroupRequest& setUsbSupplyRedirectRule(vector<CreatePolicyGroupRequestUsbSupplyRedirectRule> && usbSupplyRedirectRule) { DARABONBA_PTR_SET_RVALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };


    // videoRedirect Field Functions 
    bool hasVideoRedirect() const { return this->videoRedirect_ != nullptr;};
    void deleteVideoRedirect() { this->videoRedirect_ = nullptr;};
    inline string videoRedirect() const { DARABONBA_PTR_GET_DEFAULT(videoRedirect_, "") };
    inline CreatePolicyGroupRequest& setVideoRedirect(string videoRedirect) { DARABONBA_PTR_SET_VALUE(videoRedirect_, videoRedirect) };


    // visualQuality Field Functions 
    bool hasVisualQuality() const { return this->visualQuality_ != nullptr;};
    void deleteVisualQuality() { this->visualQuality_ = nullptr;};
    inline string visualQuality() const { DARABONBA_PTR_GET_DEFAULT(visualQuality_, "") };
    inline CreatePolicyGroupRequest& setVisualQuality(string visualQuality) { DARABONBA_PTR_SET_VALUE(visualQuality_, visualQuality) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline string watermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, "") };
    inline CreatePolicyGroupRequest& setWatermark(string watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


    // watermarkAntiCam Field Functions 
    bool hasWatermarkAntiCam() const { return this->watermarkAntiCam_ != nullptr;};
    void deleteWatermarkAntiCam() { this->watermarkAntiCam_ = nullptr;};
    inline string watermarkAntiCam() const { DARABONBA_PTR_GET_DEFAULT(watermarkAntiCam_, "") };
    inline CreatePolicyGroupRequest& setWatermarkAntiCam(string watermarkAntiCam) { DARABONBA_PTR_SET_VALUE(watermarkAntiCam_, watermarkAntiCam) };


    // watermarkColor Field Functions 
    bool hasWatermarkColor() const { return this->watermarkColor_ != nullptr;};
    void deleteWatermarkColor() { this->watermarkColor_ = nullptr;};
    inline int32_t watermarkColor() const { DARABONBA_PTR_GET_DEFAULT(watermarkColor_, 0) };
    inline CreatePolicyGroupRequest& setWatermarkColor(int32_t watermarkColor) { DARABONBA_PTR_SET_VALUE(watermarkColor_, watermarkColor) };


    // watermarkDegree Field Functions 
    bool hasWatermarkDegree() const { return this->watermarkDegree_ != nullptr;};
    void deleteWatermarkDegree() { this->watermarkDegree_ = nullptr;};
    inline double watermarkDegree() const { DARABONBA_PTR_GET_DEFAULT(watermarkDegree_, 0.0) };
    inline CreatePolicyGroupRequest& setWatermarkDegree(double watermarkDegree) { DARABONBA_PTR_SET_VALUE(watermarkDegree_, watermarkDegree) };


    // watermarkFontSize Field Functions 
    bool hasWatermarkFontSize() const { return this->watermarkFontSize_ != nullptr;};
    void deleteWatermarkFontSize() { this->watermarkFontSize_ = nullptr;};
    inline int32_t watermarkFontSize() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontSize_, 0) };
    inline CreatePolicyGroupRequest& setWatermarkFontSize(int32_t watermarkFontSize) { DARABONBA_PTR_SET_VALUE(watermarkFontSize_, watermarkFontSize) };


    // watermarkFontStyle Field Functions 
    bool hasWatermarkFontStyle() const { return this->watermarkFontStyle_ != nullptr;};
    void deleteWatermarkFontStyle() { this->watermarkFontStyle_ = nullptr;};
    inline string watermarkFontStyle() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontStyle_, "") };
    inline CreatePolicyGroupRequest& setWatermarkFontStyle(string watermarkFontStyle) { DARABONBA_PTR_SET_VALUE(watermarkFontStyle_, watermarkFontStyle) };


    // watermarkPower Field Functions 
    bool hasWatermarkPower() const { return this->watermarkPower_ != nullptr;};
    void deleteWatermarkPower() { this->watermarkPower_ = nullptr;};
    inline string watermarkPower() const { DARABONBA_PTR_GET_DEFAULT(watermarkPower_, "") };
    inline CreatePolicyGroupRequest& setWatermarkPower(string watermarkPower) { DARABONBA_PTR_SET_VALUE(watermarkPower_, watermarkPower) };


    // watermarkRowAmount Field Functions 
    bool hasWatermarkRowAmount() const { return this->watermarkRowAmount_ != nullptr;};
    void deleteWatermarkRowAmount() { this->watermarkRowAmount_ = nullptr;};
    inline int32_t watermarkRowAmount() const { DARABONBA_PTR_GET_DEFAULT(watermarkRowAmount_, 0) };
    inline CreatePolicyGroupRequest& setWatermarkRowAmount(int32_t watermarkRowAmount) { DARABONBA_PTR_SET_VALUE(watermarkRowAmount_, watermarkRowAmount) };


    // watermarkSecurity Field Functions 
    bool hasWatermarkSecurity() const { return this->watermarkSecurity_ != nullptr;};
    void deleteWatermarkSecurity() { this->watermarkSecurity_ = nullptr;};
    inline string watermarkSecurity() const { DARABONBA_PTR_GET_DEFAULT(watermarkSecurity_, "") };
    inline CreatePolicyGroupRequest& setWatermarkSecurity(string watermarkSecurity) { DARABONBA_PTR_SET_VALUE(watermarkSecurity_, watermarkSecurity) };


    // watermarkTransparency Field Functions 
    bool hasWatermarkTransparency() const { return this->watermarkTransparency_ != nullptr;};
    void deleteWatermarkTransparency() { this->watermarkTransparency_ = nullptr;};
    inline string watermarkTransparency() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparency_, "") };
    inline CreatePolicyGroupRequest& setWatermarkTransparency(string watermarkTransparency) { DARABONBA_PTR_SET_VALUE(watermarkTransparency_, watermarkTransparency) };


    // watermarkTransparencyValue Field Functions 
    bool hasWatermarkTransparencyValue() const { return this->watermarkTransparencyValue_ != nullptr;};
    void deleteWatermarkTransparencyValue() { this->watermarkTransparencyValue_ = nullptr;};
    inline int32_t watermarkTransparencyValue() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparencyValue_, 0) };
    inline CreatePolicyGroupRequest& setWatermarkTransparencyValue(int32_t watermarkTransparencyValue) { DARABONBA_PTR_SET_VALUE(watermarkTransparencyValue_, watermarkTransparencyValue) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string watermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline CreatePolicyGroupRequest& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


    // wyAssistant Field Functions 
    bool hasWyAssistant() const { return this->wyAssistant_ != nullptr;};
    void deleteWyAssistant() { this->wyAssistant_ = nullptr;};
    inline string wyAssistant() const { DARABONBA_PTR_GET_DEFAULT(wyAssistant_, "") };
    inline CreatePolicyGroupRequest& setWyAssistant(string wyAssistant) { DARABONBA_PTR_SET_VALUE(wyAssistant_, wyAssistant) };


  protected:
    // Specifies whether end users have the administrator permissions.
    // 
    // >  This parameter is in invitational preview for specific users and not available to the public.
    std::shared_ptr<string> adminAccess_ = nullptr;
    // Specifies whether to enable the anti-screenshot feature.
    // 
    // Valid values:
    // 
    // *   off: Anti-screenshot is disabled. This value is the default value.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   on: Anti-screenshot is enabled.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> appContentProtection_ = nullptr;
    // The client IP address whitelist. After you configure the whitelist, end users can access cloud computers only from the IP addresses in the whitelist.
    std::shared_ptr<vector<CreatePolicyGroupRequestAuthorizeAccessPolicyRule>> authorizeAccessPolicyRule_ = nullptr;
    // The security group rules.
    std::shared_ptr<vector<CreatePolicyGroupRequestAuthorizeSecurityPolicyRule>> authorizeSecurityPolicyRule_ = nullptr;
    // Specifies whether to enable the webcam redirection feature.
    // 
    // Valid values:
    // 
    // *   off: Webcam redirection is disabled.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   on: Webcam redirection is enabled. This value is the default value.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> cameraRedirect_ = nullptr;
    // The logon method control rules to limit the type of the Alibaba Cloud Workspace client used by end users to connect to cloud computers.
    std::shared_ptr<vector<CreatePolicyGroupRequestClientType>> clientType_ = nullptr;
    // The permissions on the clipboard.
    // 
    // Valid values:
    // 
    // *   read: specifies one-way transfer. You can copy files only from local devices to cloud computers.
    // *   readwrite: specifies two-way transfer. You can copy files between local devices and cloud computers.
    // *   write: specifies one-way transfer. You can only copy files from cloud computers to local devices.
    // *   off (default): disables both one-way and two-way transfer. Files cannot be copied between local devices and cloud computers.
    std::shared_ptr<string> clipboard_ = nullptr;
    // The device redirection rules.
    std::shared_ptr<vector<CreatePolicyGroupRequestDeviceRedirects>> deviceRedirects_ = nullptr;
    // The custom peripheral rules.
    std::shared_ptr<vector<CreatePolicyGroupRequestDeviceRules>> deviceRules_ = nullptr;
    // Specifies whether the access control for domain names is enabled. Domain names support wildcards (\\*). Separate multiple domain names with commas (,).
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> domainList_ = nullptr;
    // The details of the domain name resolution rule.
    std::shared_ptr<vector<CreatePolicyGroupRequestDomainResolveRule>> domainResolveRule_ = nullptr;
    // The type of the domain name resolution policy.
    // 
    // Valid values:
    // 
    // *   OFF
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   ON
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> domainResolveRuleType_ = nullptr;
    // Specifies whether to turn on the Contact Administrator for Help switch.
    // 
    // Valid values:
    // 
    // *   OFF
    // *   ON
    std::shared_ptr<string> endUserApplyAdminCoordinate_ = nullptr;
    // Specifies whether to turn on the User Stream Collaboration switch.
    // 
    // Valid values:
    // 
    // *   OFF
    // *   ON
    std::shared_ptr<string> endUserGroupCoordinate_ = nullptr;
    // Specifies whether to enable the Image Quality Control feature. If you have high requirements on the performance and user experience in scenarios such as professional design, we recommend that you enable this feature.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> gpuAcceleration_ = nullptr;
    // Specifies whether to allow web client access.
    // 
    // >  We recommend that you use the ClientType-related parameters to control the Alibaba Cloud Workspace client type for cloud computer logon.``
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
    // *   TCP (default): TCP
    // *   BOTH: TCP and UDP
    std::shared_ptr<string> internetCommunicationProtocol_ = nullptr;
    // The permissions on local disk mapping.
    // 
    // Valid values:
    // 
    // *   read: read-only. Local disk mapping is available on cloud computers. However, you can only read (copy) local files but cannot modify the files.
    // *   readwrite: read and write. Local disk mapping is available on cloud computers. You can read (copy) and write (modify) local files.
    // *   off (default): disabled. Local disk mapping is unavailable on cloud computers.
    std::shared_ptr<string> localDrive_ = nullptr;
    // The maximum retry period for reconnecting to cloud computers when the cloud computers are disconnected due to none-human reasons. Valid values: 30 to 7200. Unit: seconds.
    std::shared_ptr<int32_t> maxReconnectTime_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> name_ = nullptr;
    // Specifies whether to enable the network redirection feature.
    // 
    // > This feature is in invitational preview and is not available to the public.
    // 
    // Valid values:
    // 
    // *   off (default): The network redirection feature is disabled.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   on: The network redirection feature is enabled.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> netRedirect_ = nullptr;
    // The cloud computer preemption feature.
    // 
    // >  To ensure user experience and data security, when a cloud computer is used by an end user, other end users cannot connect to the cloud computer. By default, this parameter is set to `off`, which cannot be modified.
    // 
    // Valid values:
    // 
    // *   off (default): Multiple end users cannot connect to the same cloud computer at the same time.
    std::shared_ptr<string> preemptLogin_ = nullptr;
    // The usernames that are allowed to connect to the cloud computer in use. You can specify up to five usernames.
    // 
    // >  To ensure user experience and data security, other end users cannot connect to the cloud computer that is used by an end user.
    std::shared_ptr<vector<string>> preemptLoginUser_ = nullptr;
    // The policy for printer redirection.
    // 
    // Valid values:
    // 
    // *   off: Printer redirection is disabled.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   on: Printer redirection is enabled.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> printerRedirection_ = nullptr;
    // Specifies whether to enable the custom screen recording feature.
    // 
    // Valid values:
    // 
    // *   off: Custom screen recording is disabled. This value is the default value.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   on: Custom screen recording is enabled.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> recordContent_ = nullptr;
    // The duration in which the custom screen recording is valid. Default value: 30. Unit: days.
    std::shared_ptr<int64_t> recordContentExpires_ = nullptr;
    // Specifies whether to enable the screen recording feature.
    // 
    // Valid values:
    // 
    // *   byaction_cmd_ft: enables the operation-triggered screen recording upon command execution and file transfer.
    // *   ALLTIME: enables the whole-process screen recording. That is, the recording starts when cloud computers are connected and ends when the cloud computers are disconnected.
    // *   session: enables the screen recording for session lifecycle listening.
    // *   PERIOD: enables the interval-based screen recording. You must specify an interval between the start time and end time of this type of recording.
    // *   byaction_commands: enables the operation-triggered screen recording upon command execution.
    // *   OFF: disables the screen recording feature.
    // *   byaction_file_transfer: enables the operation-triggered screen recording upon file transfer.
    std::shared_ptr<string> recording_ = nullptr;
    // Specifies whether to record audio files generated from cloud computers.
    // 
    // Valid values:
    // 
    // *   off: records only video files.
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
    // The time when the screen recording ends. The value is in the HH:MM:SS format. The value is meaningful only when you set the `Recording` parameter to `PERIOD`.
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
    // The time when the screen recording starts. The value is in the HH:MM:SS format. The value is meaningful only when you set the `Recording` parameter to `PERIOD`.
    std::shared_ptr<string> recordingStartTime_ = nullptr;
    // Specifies whether to enable the screen recording notification feature after end users log on to the Alibaba Cloud Workspace client.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> recordingUserNotify_ = nullptr;
    // The notification content of screen recording. By default, this parameter is left empty.
    std::shared_ptr<string> recordingUserNotifyMessage_ = nullptr;
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the regions supported by Elastic Desktop Service (EDS).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The permission to control the keyboard and the mouse during remote assistance.
    // 
    // Valid values:
    // 
    // *    optionalControl: By default, this feature is disabled. You can enable it by applying permissions.
    // 
    // *   fullControl: The permission is granted.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   disableControl: The permission is revoked.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> remoteCoordinate_ = nullptr;
    // The effective scope of the policy.
    // 
    // Valid values:
    // 
    // *   IP: The policy takes effect based on the IP address.
    // *   GLOBAL: The policy takes effect globally.
    std::shared_ptr<string> scope_ = nullptr;
    // This parameter is required when the `Scope` parameter is set to `IP`.````
    std::shared_ptr<vector<string>> scopeValue_ = nullptr;
    // Specifies whether to enable USB redirection.
    // 
    // Valid values:
    // 
    // *   off: USB redirection is disabled. This value is the default value.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   on: USB redirection is enabled.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> usbRedirect_ = nullptr;
    // The USB redirection rules.
    std::shared_ptr<vector<CreatePolicyGroupRequestUsbSupplyRedirectRule>> usbSupplyRedirectRule_ = nullptr;
    // Specifies whether to enable the multimedia redirection switch.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> videoRedirect_ = nullptr;
    // The policy for image display quality.
    // 
    // Valid values:
    // 
    // *   high
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   low
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   lossless
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   medium: adaptive. This value is the default value.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> visualQuality_ = nullptr;
    // The watermarking feature.
    // 
    // Valid values:
    // 
    // *   blind: Invisible watermarks are applied.
    // *   off (default): The watermarking feature is disabled.
    // *   on: Visible watermarks are applied.
    std::shared_ptr<string> watermark_ = nullptr;
    // Specifies whether to enable the anti-screen photo feature for invisible watermarks.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> watermarkAntiCam_ = nullptr;
    // The font color in red, green, and blue (RGB) of the watermark. Valid values: 0 to 16777215.
    std::shared_ptr<int32_t> watermarkColor_ = nullptr;
    // The watermark rotation. Valid values: -10 to -30.
    std::shared_ptr<double> watermarkDegree_ = nullptr;
    // The watermark font size. Valid values: 10 to 20.
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
    // Specifies whether to enable the security priority feature for invisible watermarks.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> watermarkSecurity_ = nullptr;
    // The transparency of the watermark.
    // 
    // Valid values:
    // 
    // *   LIGHT
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DARK
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   MIDDLE
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> watermarkTransparency_ = nullptr;
    // The watermark opacity. A larger value indicates more opaque watermarks. Valid values: 10 to 100.
    std::shared_ptr<int32_t> watermarkTransparencyValue_ = nullptr;
    // The watermark content. You can select up to three items as the watermark content. Separate multiple items with commas (,).
    // 
    // >  If you set this parameter to `Custom`, specify `WatermarkCustomText`
    // 
    // Valid values:
    // 
    // *   EndUserId: the username.
    // *   Custom: the custom text.
    // *   DesktopIp: the IP address of the cloud computer.
    // *   ClientIp: the IP address of the Alibaba Cloud Workspace client.
    // *   HostName: the rightmost 15 digits of the cloud computer ID.
    // *   ClientTime: the current time displayed on the cloud computer.
    std::shared_ptr<string> watermarkType_ = nullptr;
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
