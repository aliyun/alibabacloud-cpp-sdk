// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyPolicyGroupRequestAuthorizeAccessPolicyRule.hpp>
#include <alibabacloud/models/ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule.hpp>
#include <alibabacloud/models/ModifyPolicyGroupRequestClientType.hpp>
#include <alibabacloud/models/ModifyPolicyGroupRequestDeviceRedirects.hpp>
#include <alibabacloud/models/ModifyPolicyGroupRequestDeviceRules.hpp>
#include <alibabacloud/models/ModifyPolicyGroupRequestDomainResolveRule.hpp>
#include <alibabacloud/models/ModifyPolicyGroupRequestRevokeAccessPolicyRule.hpp>
#include <alibabacloud/models/ModifyPolicyGroupRequestRevokeSecurityPolicyRule.hpp>
#include <alibabacloud/models/ModifyPolicyGroupRequestUsbSupplyRedirectRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyPolicyGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolicyGroupRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
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
      DARABONBA_PTR_TO_JSON(RevokeAccessPolicyRule, revokeAccessPolicyRule_);
      DARABONBA_PTR_TO_JSON(RevokeSecurityPolicyRule, revokeSecurityPolicyRule_);
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
    friend void from_json(const Darabonba::Json& j, ModifyPolicyGroupRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
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
      DARABONBA_PTR_FROM_JSON(RevokeAccessPolicyRule, revokeAccessPolicyRule_);
      DARABONBA_PTR_FROM_JSON(RevokeSecurityPolicyRule, revokeSecurityPolicyRule_);
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
    ModifyPolicyGroupRequest() = default ;
    ModifyPolicyGroupRequest(const ModifyPolicyGroupRequest &) = default ;
    ModifyPolicyGroupRequest(ModifyPolicyGroupRequest &&) = default ;
    ModifyPolicyGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolicyGroupRequest() = default ;
    ModifyPolicyGroupRequest& operator=(const ModifyPolicyGroupRequest &) = default ;
    ModifyPolicyGroupRequest& operator=(ModifyPolicyGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminAccess_ == nullptr
        && return this->appContentProtection_ == nullptr && return this->authorizeAccessPolicyRule_ == nullptr && return this->authorizeSecurityPolicyRule_ == nullptr && return this->cameraRedirect_ == nullptr && return this->clientType_ == nullptr
        && return this->clipboard_ == nullptr && return this->deviceRedirects_ == nullptr && return this->deviceRules_ == nullptr && return this->domainList_ == nullptr && return this->domainResolveRule_ == nullptr
        && return this->domainResolveRuleType_ == nullptr && return this->endUserApplyAdminCoordinate_ == nullptr && return this->endUserGroupCoordinate_ == nullptr && return this->gpuAcceleration_ == nullptr && return this->html5Access_ == nullptr
        && return this->html5FileTransfer_ == nullptr && return this->internetCommunicationProtocol_ == nullptr && return this->localDrive_ == nullptr && return this->maxReconnectTime_ == nullptr && return this->name_ == nullptr
        && return this->netRedirect_ == nullptr && return this->policyGroupId_ == nullptr && return this->preemptLogin_ == nullptr && return this->preemptLoginUser_ == nullptr && return this->printerRedirection_ == nullptr
        && return this->recordContent_ == nullptr && return this->recordContentExpires_ == nullptr && return this->recording_ == nullptr && return this->recordingAudio_ == nullptr && return this->recordingDuration_ == nullptr
        && return this->recordingEndTime_ == nullptr && return this->recordingExpires_ == nullptr && return this->recordingFps_ == nullptr && return this->recordingStartTime_ == nullptr && return this->recordingUserNotify_ == nullptr
        && return this->recordingUserNotifyMessage_ == nullptr && return this->regionId_ == nullptr && return this->remoteCoordinate_ == nullptr && return this->revokeAccessPolicyRule_ == nullptr && return this->revokeSecurityPolicyRule_ == nullptr
        && return this->scope_ == nullptr && return this->scopeValue_ == nullptr && return this->usbRedirect_ == nullptr && return this->usbSupplyRedirectRule_ == nullptr && return this->videoRedirect_ == nullptr
        && return this->visualQuality_ == nullptr && return this->watermark_ == nullptr && return this->watermarkAntiCam_ == nullptr && return this->watermarkColor_ == nullptr && return this->watermarkDegree_ == nullptr
        && return this->watermarkFontSize_ == nullptr && return this->watermarkFontStyle_ == nullptr && return this->watermarkPower_ == nullptr && return this->watermarkRowAmount_ == nullptr && return this->watermarkSecurity_ == nullptr
        && return this->watermarkTransparency_ == nullptr && return this->watermarkTransparencyValue_ == nullptr && return this->watermarkType_ == nullptr && return this->wyAssistant_ == nullptr; };
    // adminAccess Field Functions 
    bool hasAdminAccess() const { return this->adminAccess_ != nullptr;};
    void deleteAdminAccess() { this->adminAccess_ = nullptr;};
    inline string adminAccess() const { DARABONBA_PTR_GET_DEFAULT(adminAccess_, "") };
    inline ModifyPolicyGroupRequest& setAdminAccess(string adminAccess) { DARABONBA_PTR_SET_VALUE(adminAccess_, adminAccess) };


    // appContentProtection Field Functions 
    bool hasAppContentProtection() const { return this->appContentProtection_ != nullptr;};
    void deleteAppContentProtection() { this->appContentProtection_ = nullptr;};
    inline string appContentProtection() const { DARABONBA_PTR_GET_DEFAULT(appContentProtection_, "") };
    inline ModifyPolicyGroupRequest& setAppContentProtection(string appContentProtection) { DARABONBA_PTR_SET_VALUE(appContentProtection_, appContentProtection) };


    // authorizeAccessPolicyRule Field Functions 
    bool hasAuthorizeAccessPolicyRule() const { return this->authorizeAccessPolicyRule_ != nullptr;};
    void deleteAuthorizeAccessPolicyRule() { this->authorizeAccessPolicyRule_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequestAuthorizeAccessPolicyRule> & authorizeAccessPolicyRule() const { DARABONBA_PTR_GET_CONST(authorizeAccessPolicyRule_, vector<ModifyPolicyGroupRequestAuthorizeAccessPolicyRule>) };
    inline vector<ModifyPolicyGroupRequestAuthorizeAccessPolicyRule> authorizeAccessPolicyRule() { DARABONBA_PTR_GET(authorizeAccessPolicyRule_, vector<ModifyPolicyGroupRequestAuthorizeAccessPolicyRule>) };
    inline ModifyPolicyGroupRequest& setAuthorizeAccessPolicyRule(const vector<ModifyPolicyGroupRequestAuthorizeAccessPolicyRule> & authorizeAccessPolicyRule) { DARABONBA_PTR_SET_VALUE(authorizeAccessPolicyRule_, authorizeAccessPolicyRule) };
    inline ModifyPolicyGroupRequest& setAuthorizeAccessPolicyRule(vector<ModifyPolicyGroupRequestAuthorizeAccessPolicyRule> && authorizeAccessPolicyRule) { DARABONBA_PTR_SET_RVALUE(authorizeAccessPolicyRule_, authorizeAccessPolicyRule) };


    // authorizeSecurityPolicyRule Field Functions 
    bool hasAuthorizeSecurityPolicyRule() const { return this->authorizeSecurityPolicyRule_ != nullptr;};
    void deleteAuthorizeSecurityPolicyRule() { this->authorizeSecurityPolicyRule_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule> & authorizeSecurityPolicyRule() const { DARABONBA_PTR_GET_CONST(authorizeSecurityPolicyRule_, vector<ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule>) };
    inline vector<ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule> authorizeSecurityPolicyRule() { DARABONBA_PTR_GET(authorizeSecurityPolicyRule_, vector<ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule>) };
    inline ModifyPolicyGroupRequest& setAuthorizeSecurityPolicyRule(const vector<ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule> & authorizeSecurityPolicyRule) { DARABONBA_PTR_SET_VALUE(authorizeSecurityPolicyRule_, authorizeSecurityPolicyRule) };
    inline ModifyPolicyGroupRequest& setAuthorizeSecurityPolicyRule(vector<ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule> && authorizeSecurityPolicyRule) { DARABONBA_PTR_SET_RVALUE(authorizeSecurityPolicyRule_, authorizeSecurityPolicyRule) };


    // cameraRedirect Field Functions 
    bool hasCameraRedirect() const { return this->cameraRedirect_ != nullptr;};
    void deleteCameraRedirect() { this->cameraRedirect_ = nullptr;};
    inline string cameraRedirect() const { DARABONBA_PTR_GET_DEFAULT(cameraRedirect_, "") };
    inline ModifyPolicyGroupRequest& setCameraRedirect(string cameraRedirect) { DARABONBA_PTR_SET_VALUE(cameraRedirect_, cameraRedirect) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequestClientType> & clientType() const { DARABONBA_PTR_GET_CONST(clientType_, vector<ModifyPolicyGroupRequestClientType>) };
    inline vector<ModifyPolicyGroupRequestClientType> clientType() { DARABONBA_PTR_GET(clientType_, vector<ModifyPolicyGroupRequestClientType>) };
    inline ModifyPolicyGroupRequest& setClientType(const vector<ModifyPolicyGroupRequestClientType> & clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };
    inline ModifyPolicyGroupRequest& setClientType(vector<ModifyPolicyGroupRequestClientType> && clientType) { DARABONBA_PTR_SET_RVALUE(clientType_, clientType) };


    // clipboard Field Functions 
    bool hasClipboard() const { return this->clipboard_ != nullptr;};
    void deleteClipboard() { this->clipboard_ = nullptr;};
    inline string clipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
    inline ModifyPolicyGroupRequest& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


    // deviceRedirects Field Functions 
    bool hasDeviceRedirects() const { return this->deviceRedirects_ != nullptr;};
    void deleteDeviceRedirects() { this->deviceRedirects_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequestDeviceRedirects> & deviceRedirects() const { DARABONBA_PTR_GET_CONST(deviceRedirects_, vector<ModifyPolicyGroupRequestDeviceRedirects>) };
    inline vector<ModifyPolicyGroupRequestDeviceRedirects> deviceRedirects() { DARABONBA_PTR_GET(deviceRedirects_, vector<ModifyPolicyGroupRequestDeviceRedirects>) };
    inline ModifyPolicyGroupRequest& setDeviceRedirects(const vector<ModifyPolicyGroupRequestDeviceRedirects> & deviceRedirects) { DARABONBA_PTR_SET_VALUE(deviceRedirects_, deviceRedirects) };
    inline ModifyPolicyGroupRequest& setDeviceRedirects(vector<ModifyPolicyGroupRequestDeviceRedirects> && deviceRedirects) { DARABONBA_PTR_SET_RVALUE(deviceRedirects_, deviceRedirects) };


    // deviceRules Field Functions 
    bool hasDeviceRules() const { return this->deviceRules_ != nullptr;};
    void deleteDeviceRules() { this->deviceRules_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequestDeviceRules> & deviceRules() const { DARABONBA_PTR_GET_CONST(deviceRules_, vector<ModifyPolicyGroupRequestDeviceRules>) };
    inline vector<ModifyPolicyGroupRequestDeviceRules> deviceRules() { DARABONBA_PTR_GET(deviceRules_, vector<ModifyPolicyGroupRequestDeviceRules>) };
    inline ModifyPolicyGroupRequest& setDeviceRules(const vector<ModifyPolicyGroupRequestDeviceRules> & deviceRules) { DARABONBA_PTR_SET_VALUE(deviceRules_, deviceRules) };
    inline ModifyPolicyGroupRequest& setDeviceRules(vector<ModifyPolicyGroupRequestDeviceRules> && deviceRules) { DARABONBA_PTR_SET_RVALUE(deviceRules_, deviceRules) };


    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline string domainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
    inline ModifyPolicyGroupRequest& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


    // domainResolveRule Field Functions 
    bool hasDomainResolveRule() const { return this->domainResolveRule_ != nullptr;};
    void deleteDomainResolveRule() { this->domainResolveRule_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequestDomainResolveRule> & domainResolveRule() const { DARABONBA_PTR_GET_CONST(domainResolveRule_, vector<ModifyPolicyGroupRequestDomainResolveRule>) };
    inline vector<ModifyPolicyGroupRequestDomainResolveRule> domainResolveRule() { DARABONBA_PTR_GET(domainResolveRule_, vector<ModifyPolicyGroupRequestDomainResolveRule>) };
    inline ModifyPolicyGroupRequest& setDomainResolveRule(const vector<ModifyPolicyGroupRequestDomainResolveRule> & domainResolveRule) { DARABONBA_PTR_SET_VALUE(domainResolveRule_, domainResolveRule) };
    inline ModifyPolicyGroupRequest& setDomainResolveRule(vector<ModifyPolicyGroupRequestDomainResolveRule> && domainResolveRule) { DARABONBA_PTR_SET_RVALUE(domainResolveRule_, domainResolveRule) };


    // domainResolveRuleType Field Functions 
    bool hasDomainResolveRuleType() const { return this->domainResolveRuleType_ != nullptr;};
    void deleteDomainResolveRuleType() { this->domainResolveRuleType_ = nullptr;};
    inline string domainResolveRuleType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveRuleType_, "") };
    inline ModifyPolicyGroupRequest& setDomainResolveRuleType(string domainResolveRuleType) { DARABONBA_PTR_SET_VALUE(domainResolveRuleType_, domainResolveRuleType) };


    // endUserApplyAdminCoordinate Field Functions 
    bool hasEndUserApplyAdminCoordinate() const { return this->endUserApplyAdminCoordinate_ != nullptr;};
    void deleteEndUserApplyAdminCoordinate() { this->endUserApplyAdminCoordinate_ = nullptr;};
    inline string endUserApplyAdminCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserApplyAdminCoordinate_, "") };
    inline ModifyPolicyGroupRequest& setEndUserApplyAdminCoordinate(string endUserApplyAdminCoordinate) { DARABONBA_PTR_SET_VALUE(endUserApplyAdminCoordinate_, endUserApplyAdminCoordinate) };


    // endUserGroupCoordinate Field Functions 
    bool hasEndUserGroupCoordinate() const { return this->endUserGroupCoordinate_ != nullptr;};
    void deleteEndUserGroupCoordinate() { this->endUserGroupCoordinate_ = nullptr;};
    inline string endUserGroupCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserGroupCoordinate_, "") };
    inline ModifyPolicyGroupRequest& setEndUserGroupCoordinate(string endUserGroupCoordinate) { DARABONBA_PTR_SET_VALUE(endUserGroupCoordinate_, endUserGroupCoordinate) };


    // gpuAcceleration Field Functions 
    bool hasGpuAcceleration() const { return this->gpuAcceleration_ != nullptr;};
    void deleteGpuAcceleration() { this->gpuAcceleration_ = nullptr;};
    inline string gpuAcceleration() const { DARABONBA_PTR_GET_DEFAULT(gpuAcceleration_, "") };
    inline ModifyPolicyGroupRequest& setGpuAcceleration(string gpuAcceleration) { DARABONBA_PTR_SET_VALUE(gpuAcceleration_, gpuAcceleration) };


    // html5Access Field Functions 
    bool hasHtml5Access() const { return this->html5Access_ != nullptr;};
    void deleteHtml5Access() { this->html5Access_ = nullptr;};
    inline string html5Access() const { DARABONBA_PTR_GET_DEFAULT(html5Access_, "") };
    inline ModifyPolicyGroupRequest& setHtml5Access(string html5Access) { DARABONBA_PTR_SET_VALUE(html5Access_, html5Access) };


    // html5FileTransfer Field Functions 
    bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
    void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
    inline string html5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
    inline ModifyPolicyGroupRequest& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


    // internetCommunicationProtocol Field Functions 
    bool hasInternetCommunicationProtocol() const { return this->internetCommunicationProtocol_ != nullptr;};
    void deleteInternetCommunicationProtocol() { this->internetCommunicationProtocol_ = nullptr;};
    inline string internetCommunicationProtocol() const { DARABONBA_PTR_GET_DEFAULT(internetCommunicationProtocol_, "") };
    inline ModifyPolicyGroupRequest& setInternetCommunicationProtocol(string internetCommunicationProtocol) { DARABONBA_PTR_SET_VALUE(internetCommunicationProtocol_, internetCommunicationProtocol) };


    // localDrive Field Functions 
    bool hasLocalDrive() const { return this->localDrive_ != nullptr;};
    void deleteLocalDrive() { this->localDrive_ = nullptr;};
    inline string localDrive() const { DARABONBA_PTR_GET_DEFAULT(localDrive_, "") };
    inline ModifyPolicyGroupRequest& setLocalDrive(string localDrive) { DARABONBA_PTR_SET_VALUE(localDrive_, localDrive) };


    // maxReconnectTime Field Functions 
    bool hasMaxReconnectTime() const { return this->maxReconnectTime_ != nullptr;};
    void deleteMaxReconnectTime() { this->maxReconnectTime_ = nullptr;};
    inline int32_t maxReconnectTime() const { DARABONBA_PTR_GET_DEFAULT(maxReconnectTime_, 0) };
    inline ModifyPolicyGroupRequest& setMaxReconnectTime(int32_t maxReconnectTime) { DARABONBA_PTR_SET_VALUE(maxReconnectTime_, maxReconnectTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyPolicyGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netRedirect Field Functions 
    bool hasNetRedirect() const { return this->netRedirect_ != nullptr;};
    void deleteNetRedirect() { this->netRedirect_ = nullptr;};
    inline string netRedirect() const { DARABONBA_PTR_GET_DEFAULT(netRedirect_, "") };
    inline ModifyPolicyGroupRequest& setNetRedirect(string netRedirect) { DARABONBA_PTR_SET_VALUE(netRedirect_, netRedirect) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ModifyPolicyGroupRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // preemptLogin Field Functions 
    bool hasPreemptLogin() const { return this->preemptLogin_ != nullptr;};
    void deletePreemptLogin() { this->preemptLogin_ = nullptr;};
    inline string preemptLogin() const { DARABONBA_PTR_GET_DEFAULT(preemptLogin_, "") };
    inline ModifyPolicyGroupRequest& setPreemptLogin(string preemptLogin) { DARABONBA_PTR_SET_VALUE(preemptLogin_, preemptLogin) };


    // preemptLoginUser Field Functions 
    bool hasPreemptLoginUser() const { return this->preemptLoginUser_ != nullptr;};
    void deletePreemptLoginUser() { this->preemptLoginUser_ = nullptr;};
    inline const vector<string> & preemptLoginUser() const { DARABONBA_PTR_GET_CONST(preemptLoginUser_, vector<string>) };
    inline vector<string> preemptLoginUser() { DARABONBA_PTR_GET(preemptLoginUser_, vector<string>) };
    inline ModifyPolicyGroupRequest& setPreemptLoginUser(const vector<string> & preemptLoginUser) { DARABONBA_PTR_SET_VALUE(preemptLoginUser_, preemptLoginUser) };
    inline ModifyPolicyGroupRequest& setPreemptLoginUser(vector<string> && preemptLoginUser) { DARABONBA_PTR_SET_RVALUE(preemptLoginUser_, preemptLoginUser) };


    // printerRedirection Field Functions 
    bool hasPrinterRedirection() const { return this->printerRedirection_ != nullptr;};
    void deletePrinterRedirection() { this->printerRedirection_ = nullptr;};
    inline string printerRedirection() const { DARABONBA_PTR_GET_DEFAULT(printerRedirection_, "") };
    inline ModifyPolicyGroupRequest& setPrinterRedirection(string printerRedirection) { DARABONBA_PTR_SET_VALUE(printerRedirection_, printerRedirection) };


    // recordContent Field Functions 
    bool hasRecordContent() const { return this->recordContent_ != nullptr;};
    void deleteRecordContent() { this->recordContent_ = nullptr;};
    inline string recordContent() const { DARABONBA_PTR_GET_DEFAULT(recordContent_, "") };
    inline ModifyPolicyGroupRequest& setRecordContent(string recordContent) { DARABONBA_PTR_SET_VALUE(recordContent_, recordContent) };


    // recordContentExpires Field Functions 
    bool hasRecordContentExpires() const { return this->recordContentExpires_ != nullptr;};
    void deleteRecordContentExpires() { this->recordContentExpires_ = nullptr;};
    inline int64_t recordContentExpires() const { DARABONBA_PTR_GET_DEFAULT(recordContentExpires_, 0L) };
    inline ModifyPolicyGroupRequest& setRecordContentExpires(int64_t recordContentExpires) { DARABONBA_PTR_SET_VALUE(recordContentExpires_, recordContentExpires) };


    // recording Field Functions 
    bool hasRecording() const { return this->recording_ != nullptr;};
    void deleteRecording() { this->recording_ = nullptr;};
    inline string recording() const { DARABONBA_PTR_GET_DEFAULT(recording_, "") };
    inline ModifyPolicyGroupRequest& setRecording(string recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };


    // recordingAudio Field Functions 
    bool hasRecordingAudio() const { return this->recordingAudio_ != nullptr;};
    void deleteRecordingAudio() { this->recordingAudio_ = nullptr;};
    inline string recordingAudio() const { DARABONBA_PTR_GET_DEFAULT(recordingAudio_, "") };
    inline ModifyPolicyGroupRequest& setRecordingAudio(string recordingAudio) { DARABONBA_PTR_SET_VALUE(recordingAudio_, recordingAudio) };


    // recordingDuration Field Functions 
    bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
    void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
    inline int32_t recordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0) };
    inline ModifyPolicyGroupRequest& setRecordingDuration(int32_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


    // recordingEndTime Field Functions 
    bool hasRecordingEndTime() const { return this->recordingEndTime_ != nullptr;};
    void deleteRecordingEndTime() { this->recordingEndTime_ = nullptr;};
    inline string recordingEndTime() const { DARABONBA_PTR_GET_DEFAULT(recordingEndTime_, "") };
    inline ModifyPolicyGroupRequest& setRecordingEndTime(string recordingEndTime) { DARABONBA_PTR_SET_VALUE(recordingEndTime_, recordingEndTime) };


    // recordingExpires Field Functions 
    bool hasRecordingExpires() const { return this->recordingExpires_ != nullptr;};
    void deleteRecordingExpires() { this->recordingExpires_ = nullptr;};
    inline int64_t recordingExpires() const { DARABONBA_PTR_GET_DEFAULT(recordingExpires_, 0L) };
    inline ModifyPolicyGroupRequest& setRecordingExpires(int64_t recordingExpires) { DARABONBA_PTR_SET_VALUE(recordingExpires_, recordingExpires) };


    // recordingFps Field Functions 
    bool hasRecordingFps() const { return this->recordingFps_ != nullptr;};
    void deleteRecordingFps() { this->recordingFps_ = nullptr;};
    inline int64_t recordingFps() const { DARABONBA_PTR_GET_DEFAULT(recordingFps_, 0L) };
    inline ModifyPolicyGroupRequest& setRecordingFps(int64_t recordingFps) { DARABONBA_PTR_SET_VALUE(recordingFps_, recordingFps) };


    // recordingStartTime Field Functions 
    bool hasRecordingStartTime() const { return this->recordingStartTime_ != nullptr;};
    void deleteRecordingStartTime() { this->recordingStartTime_ = nullptr;};
    inline string recordingStartTime() const { DARABONBA_PTR_GET_DEFAULT(recordingStartTime_, "") };
    inline ModifyPolicyGroupRequest& setRecordingStartTime(string recordingStartTime) { DARABONBA_PTR_SET_VALUE(recordingStartTime_, recordingStartTime) };


    // recordingUserNotify Field Functions 
    bool hasRecordingUserNotify() const { return this->recordingUserNotify_ != nullptr;};
    void deleteRecordingUserNotify() { this->recordingUserNotify_ = nullptr;};
    inline string recordingUserNotify() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotify_, "") };
    inline ModifyPolicyGroupRequest& setRecordingUserNotify(string recordingUserNotify) { DARABONBA_PTR_SET_VALUE(recordingUserNotify_, recordingUserNotify) };


    // recordingUserNotifyMessage Field Functions 
    bool hasRecordingUserNotifyMessage() const { return this->recordingUserNotifyMessage_ != nullptr;};
    void deleteRecordingUserNotifyMessage() { this->recordingUserNotifyMessage_ = nullptr;};
    inline string recordingUserNotifyMessage() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotifyMessage_, "") };
    inline ModifyPolicyGroupRequest& setRecordingUserNotifyMessage(string recordingUserNotifyMessage) { DARABONBA_PTR_SET_VALUE(recordingUserNotifyMessage_, recordingUserNotifyMessage) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPolicyGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteCoordinate Field Functions 
    bool hasRemoteCoordinate() const { return this->remoteCoordinate_ != nullptr;};
    void deleteRemoteCoordinate() { this->remoteCoordinate_ = nullptr;};
    inline string remoteCoordinate() const { DARABONBA_PTR_GET_DEFAULT(remoteCoordinate_, "") };
    inline ModifyPolicyGroupRequest& setRemoteCoordinate(string remoteCoordinate) { DARABONBA_PTR_SET_VALUE(remoteCoordinate_, remoteCoordinate) };


    // revokeAccessPolicyRule Field Functions 
    bool hasRevokeAccessPolicyRule() const { return this->revokeAccessPolicyRule_ != nullptr;};
    void deleteRevokeAccessPolicyRule() { this->revokeAccessPolicyRule_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequestRevokeAccessPolicyRule> & revokeAccessPolicyRule() const { DARABONBA_PTR_GET_CONST(revokeAccessPolicyRule_, vector<ModifyPolicyGroupRequestRevokeAccessPolicyRule>) };
    inline vector<ModifyPolicyGroupRequestRevokeAccessPolicyRule> revokeAccessPolicyRule() { DARABONBA_PTR_GET(revokeAccessPolicyRule_, vector<ModifyPolicyGroupRequestRevokeAccessPolicyRule>) };
    inline ModifyPolicyGroupRequest& setRevokeAccessPolicyRule(const vector<ModifyPolicyGroupRequestRevokeAccessPolicyRule> & revokeAccessPolicyRule) { DARABONBA_PTR_SET_VALUE(revokeAccessPolicyRule_, revokeAccessPolicyRule) };
    inline ModifyPolicyGroupRequest& setRevokeAccessPolicyRule(vector<ModifyPolicyGroupRequestRevokeAccessPolicyRule> && revokeAccessPolicyRule) { DARABONBA_PTR_SET_RVALUE(revokeAccessPolicyRule_, revokeAccessPolicyRule) };


    // revokeSecurityPolicyRule Field Functions 
    bool hasRevokeSecurityPolicyRule() const { return this->revokeSecurityPolicyRule_ != nullptr;};
    void deleteRevokeSecurityPolicyRule() { this->revokeSecurityPolicyRule_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequestRevokeSecurityPolicyRule> & revokeSecurityPolicyRule() const { DARABONBA_PTR_GET_CONST(revokeSecurityPolicyRule_, vector<ModifyPolicyGroupRequestRevokeSecurityPolicyRule>) };
    inline vector<ModifyPolicyGroupRequestRevokeSecurityPolicyRule> revokeSecurityPolicyRule() { DARABONBA_PTR_GET(revokeSecurityPolicyRule_, vector<ModifyPolicyGroupRequestRevokeSecurityPolicyRule>) };
    inline ModifyPolicyGroupRequest& setRevokeSecurityPolicyRule(const vector<ModifyPolicyGroupRequestRevokeSecurityPolicyRule> & revokeSecurityPolicyRule) { DARABONBA_PTR_SET_VALUE(revokeSecurityPolicyRule_, revokeSecurityPolicyRule) };
    inline ModifyPolicyGroupRequest& setRevokeSecurityPolicyRule(vector<ModifyPolicyGroupRequestRevokeSecurityPolicyRule> && revokeSecurityPolicyRule) { DARABONBA_PTR_SET_RVALUE(revokeSecurityPolicyRule_, revokeSecurityPolicyRule) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ModifyPolicyGroupRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // scopeValue Field Functions 
    bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
    void deleteScopeValue() { this->scopeValue_ = nullptr;};
    inline const vector<string> & scopeValue() const { DARABONBA_PTR_GET_CONST(scopeValue_, vector<string>) };
    inline vector<string> scopeValue() { DARABONBA_PTR_GET(scopeValue_, vector<string>) };
    inline ModifyPolicyGroupRequest& setScopeValue(const vector<string> & scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };
    inline ModifyPolicyGroupRequest& setScopeValue(vector<string> && scopeValue) { DARABONBA_PTR_SET_RVALUE(scopeValue_, scopeValue) };


    // usbRedirect Field Functions 
    bool hasUsbRedirect() const { return this->usbRedirect_ != nullptr;};
    void deleteUsbRedirect() { this->usbRedirect_ = nullptr;};
    inline string usbRedirect() const { DARABONBA_PTR_GET_DEFAULT(usbRedirect_, "") };
    inline ModifyPolicyGroupRequest& setUsbRedirect(string usbRedirect) { DARABONBA_PTR_SET_VALUE(usbRedirect_, usbRedirect) };


    // usbSupplyRedirectRule Field Functions 
    bool hasUsbSupplyRedirectRule() const { return this->usbSupplyRedirectRule_ != nullptr;};
    void deleteUsbSupplyRedirectRule() { this->usbSupplyRedirectRule_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequestUsbSupplyRedirectRule> & usbSupplyRedirectRule() const { DARABONBA_PTR_GET_CONST(usbSupplyRedirectRule_, vector<ModifyPolicyGroupRequestUsbSupplyRedirectRule>) };
    inline vector<ModifyPolicyGroupRequestUsbSupplyRedirectRule> usbSupplyRedirectRule() { DARABONBA_PTR_GET(usbSupplyRedirectRule_, vector<ModifyPolicyGroupRequestUsbSupplyRedirectRule>) };
    inline ModifyPolicyGroupRequest& setUsbSupplyRedirectRule(const vector<ModifyPolicyGroupRequestUsbSupplyRedirectRule> & usbSupplyRedirectRule) { DARABONBA_PTR_SET_VALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };
    inline ModifyPolicyGroupRequest& setUsbSupplyRedirectRule(vector<ModifyPolicyGroupRequestUsbSupplyRedirectRule> && usbSupplyRedirectRule) { DARABONBA_PTR_SET_RVALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };


    // videoRedirect Field Functions 
    bool hasVideoRedirect() const { return this->videoRedirect_ != nullptr;};
    void deleteVideoRedirect() { this->videoRedirect_ = nullptr;};
    inline string videoRedirect() const { DARABONBA_PTR_GET_DEFAULT(videoRedirect_, "") };
    inline ModifyPolicyGroupRequest& setVideoRedirect(string videoRedirect) { DARABONBA_PTR_SET_VALUE(videoRedirect_, videoRedirect) };


    // visualQuality Field Functions 
    bool hasVisualQuality() const { return this->visualQuality_ != nullptr;};
    void deleteVisualQuality() { this->visualQuality_ = nullptr;};
    inline string visualQuality() const { DARABONBA_PTR_GET_DEFAULT(visualQuality_, "") };
    inline ModifyPolicyGroupRequest& setVisualQuality(string visualQuality) { DARABONBA_PTR_SET_VALUE(visualQuality_, visualQuality) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline string watermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, "") };
    inline ModifyPolicyGroupRequest& setWatermark(string watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


    // watermarkAntiCam Field Functions 
    bool hasWatermarkAntiCam() const { return this->watermarkAntiCam_ != nullptr;};
    void deleteWatermarkAntiCam() { this->watermarkAntiCam_ = nullptr;};
    inline string watermarkAntiCam() const { DARABONBA_PTR_GET_DEFAULT(watermarkAntiCam_, "") };
    inline ModifyPolicyGroupRequest& setWatermarkAntiCam(string watermarkAntiCam) { DARABONBA_PTR_SET_VALUE(watermarkAntiCam_, watermarkAntiCam) };


    // watermarkColor Field Functions 
    bool hasWatermarkColor() const { return this->watermarkColor_ != nullptr;};
    void deleteWatermarkColor() { this->watermarkColor_ = nullptr;};
    inline int32_t watermarkColor() const { DARABONBA_PTR_GET_DEFAULT(watermarkColor_, 0) };
    inline ModifyPolicyGroupRequest& setWatermarkColor(int32_t watermarkColor) { DARABONBA_PTR_SET_VALUE(watermarkColor_, watermarkColor) };


    // watermarkDegree Field Functions 
    bool hasWatermarkDegree() const { return this->watermarkDegree_ != nullptr;};
    void deleteWatermarkDegree() { this->watermarkDegree_ = nullptr;};
    inline double watermarkDegree() const { DARABONBA_PTR_GET_DEFAULT(watermarkDegree_, 0.0) };
    inline ModifyPolicyGroupRequest& setWatermarkDegree(double watermarkDegree) { DARABONBA_PTR_SET_VALUE(watermarkDegree_, watermarkDegree) };


    // watermarkFontSize Field Functions 
    bool hasWatermarkFontSize() const { return this->watermarkFontSize_ != nullptr;};
    void deleteWatermarkFontSize() { this->watermarkFontSize_ = nullptr;};
    inline int32_t watermarkFontSize() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontSize_, 0) };
    inline ModifyPolicyGroupRequest& setWatermarkFontSize(int32_t watermarkFontSize) { DARABONBA_PTR_SET_VALUE(watermarkFontSize_, watermarkFontSize) };


    // watermarkFontStyle Field Functions 
    bool hasWatermarkFontStyle() const { return this->watermarkFontStyle_ != nullptr;};
    void deleteWatermarkFontStyle() { this->watermarkFontStyle_ = nullptr;};
    inline string watermarkFontStyle() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontStyle_, "") };
    inline ModifyPolicyGroupRequest& setWatermarkFontStyle(string watermarkFontStyle) { DARABONBA_PTR_SET_VALUE(watermarkFontStyle_, watermarkFontStyle) };


    // watermarkPower Field Functions 
    bool hasWatermarkPower() const { return this->watermarkPower_ != nullptr;};
    void deleteWatermarkPower() { this->watermarkPower_ = nullptr;};
    inline string watermarkPower() const { DARABONBA_PTR_GET_DEFAULT(watermarkPower_, "") };
    inline ModifyPolicyGroupRequest& setWatermarkPower(string watermarkPower) { DARABONBA_PTR_SET_VALUE(watermarkPower_, watermarkPower) };


    // watermarkRowAmount Field Functions 
    bool hasWatermarkRowAmount() const { return this->watermarkRowAmount_ != nullptr;};
    void deleteWatermarkRowAmount() { this->watermarkRowAmount_ = nullptr;};
    inline int32_t watermarkRowAmount() const { DARABONBA_PTR_GET_DEFAULT(watermarkRowAmount_, 0) };
    inline ModifyPolicyGroupRequest& setWatermarkRowAmount(int32_t watermarkRowAmount) { DARABONBA_PTR_SET_VALUE(watermarkRowAmount_, watermarkRowAmount) };


    // watermarkSecurity Field Functions 
    bool hasWatermarkSecurity() const { return this->watermarkSecurity_ != nullptr;};
    void deleteWatermarkSecurity() { this->watermarkSecurity_ = nullptr;};
    inline string watermarkSecurity() const { DARABONBA_PTR_GET_DEFAULT(watermarkSecurity_, "") };
    inline ModifyPolicyGroupRequest& setWatermarkSecurity(string watermarkSecurity) { DARABONBA_PTR_SET_VALUE(watermarkSecurity_, watermarkSecurity) };


    // watermarkTransparency Field Functions 
    bool hasWatermarkTransparency() const { return this->watermarkTransparency_ != nullptr;};
    void deleteWatermarkTransparency() { this->watermarkTransparency_ = nullptr;};
    inline string watermarkTransparency() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparency_, "") };
    inline ModifyPolicyGroupRequest& setWatermarkTransparency(string watermarkTransparency) { DARABONBA_PTR_SET_VALUE(watermarkTransparency_, watermarkTransparency) };


    // watermarkTransparencyValue Field Functions 
    bool hasWatermarkTransparencyValue() const { return this->watermarkTransparencyValue_ != nullptr;};
    void deleteWatermarkTransparencyValue() { this->watermarkTransparencyValue_ = nullptr;};
    inline int32_t watermarkTransparencyValue() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparencyValue_, 0) };
    inline ModifyPolicyGroupRequest& setWatermarkTransparencyValue(int32_t watermarkTransparencyValue) { DARABONBA_PTR_SET_VALUE(watermarkTransparencyValue_, watermarkTransparencyValue) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string watermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline ModifyPolicyGroupRequest& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


    // wyAssistant Field Functions 
    bool hasWyAssistant() const { return this->wyAssistant_ != nullptr;};
    void deleteWyAssistant() { this->wyAssistant_ = nullptr;};
    inline string wyAssistant() const { DARABONBA_PTR_GET_DEFAULT(wyAssistant_, "") };
    inline ModifyPolicyGroupRequest& setWyAssistant(string wyAssistant) { DARABONBA_PTR_SET_VALUE(wyAssistant_, wyAssistant) };


  protected:
    // Specifies whether end users have the administrator permissions.
    // 
    // >  This parameter is in invitational preview for specific users and not available to the public.
    std::shared_ptr<string> adminAccess_ = nullptr;
    // Specifies whether to enable the anti-screenshot feature.
    // 
    // Valid values:
    // 
    // *   off (default)
    // *   on
    std::shared_ptr<string> appContentProtection_ = nullptr;
    // The client IP address whitelists.
    std::shared_ptr<vector<ModifyPolicyGroupRequestAuthorizeAccessPolicyRule>> authorizeAccessPolicyRule_ = nullptr;
    // The security group rules.
    std::shared_ptr<vector<ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule>> authorizeSecurityPolicyRule_ = nullptr;
    // Specifies whether to enable the webcam redirection feature.
    // 
    // Valid values:
    // 
    // *   off
    // *   on (default)
    std::shared_ptr<string> cameraRedirect_ = nullptr;
    // The logon method control rules to limit the type of the Alibaba Cloud Workspace client used by end users to connect to cloud computers.
    std::shared_ptr<vector<ModifyPolicyGroupRequestClientType>> clientType_ = nullptr;
    // The permissions on the clipboard.
    // 
    // Valid values:
    // 
    // *   read: specifies one-way transfer. You can copy files only from local devices to cloud computers.
    // *   readwrite: specifies two-way transfer You can copy files between local devices and cloud computers.
    // *   write: specifies one-way transfer. You can only copy files from cloud computers to local devices.
    // *   off: disables both one-way and two-way transfer. Files cannot be copied between local devices and cloud computers.
    std::shared_ptr<string> clipboard_ = nullptr;
    // The device redirection rules.
    std::shared_ptr<vector<ModifyPolicyGroupRequestDeviceRedirects>> deviceRedirects_ = nullptr;
    // The custom peripheral rules.
    std::shared_ptr<vector<ModifyPolicyGroupRequestDeviceRules>> deviceRules_ = nullptr;
    // Specifies whether the access control for domain names is enabled. Domain names support wildcards (\\*). Separate multiple domain names with commas (,).
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> domainList_ = nullptr;
    // The domain resolution rules.
    std::shared_ptr<vector<ModifyPolicyGroupRequestDomainResolveRule>> domainResolveRule_ = nullptr;
    // The type of the domain name resolution rule.
    // 
    // Valid values:
    // 
    // *   OFF
    // *   ON
    std::shared_ptr<string> domainResolveRuleType_ = nullptr;
    // Specifies whether to turn on the Contact Administrator for Help switch.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> endUserApplyAdminCoordinate_ = nullptr;
    // Specifies whether to turn on the User Stream Collaboration switch.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> endUserGroupCoordinate_ = nullptr;
    // Specifies whether to enable the Image Quality Control feature for Graphic-based cloud computers. If you have high requirements on the performance and user experience in scenarios such as professional design, we recommend that you enable this feature.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> gpuAcceleration_ = nullptr;
    // Specifies whether to allow web client access.
    // 
    // >  We recommend that you specify the ClientType-related parameters to control the Alibaba Cloud Workspace client type for cloud computer connection.``
    // 
    // Valid values:
    // 
    // *   off
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
    // *   off (default): no permissions. Local disk mapping is unavailable on cloud computers.
    std::shared_ptr<string> localDrive_ = nullptr;
    // The maximum retry period for reconnecting to cloud computers when the cloud computers are disconnected due to none-human reasons. Valid values: 30 to 7200. Unit: seconds.
    std::shared_ptr<int32_t> maxReconnectTime_ = nullptr;
    // The name of the cloud computer policy.
    std::shared_ptr<string> name_ = nullptr;
    // Specifies whether to enable network redirection.
    // 
    // >  This parameter is in invitational preview for specific users and not available to the public.
    // 
    // Valid values:
    // 
    // *   off (default)
    // *   on
    std::shared_ptr<string> netRedirect_ = nullptr;
    // The ID of the cloud computer policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyGroupId_ = nullptr;
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
    // The printer redirection feature.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> printerRedirection_ = nullptr;
    // Specifies whether to enable the custom screen recording feature.
    // 
    // Valid values:
    // 
    // *   off (default)
    // *   on
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
    // Specifies whether to record the audio files generated from cloud computers.
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
    // The time when the screen recording stops. Specify the value in the HH:MM:SS format. The value is meaningful only when you set `Recording` to `PERIOD`.
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
    // The time when the screen recording starts. Specify the value in the HH:MM:SS format. The value is meaningful only when you set the `Recording` parameter to `PERIOD`.
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
    // The permissions on keyboard and mouse control during remote assistance.
    // 
    // Valid values:
    // 
    // *   optionalControl: By default, you are not granted the permissions. You can apply for the permissions.
    // *   fullControl: You are granted the full permissions.
    // *   disableControl: You are not granted the permissions.
    std::shared_ptr<string> remoteCoordinate_ = nullptr;
    // The client IP address whitelists that you want to delete.
    std::shared_ptr<vector<ModifyPolicyGroupRequestRevokeAccessPolicyRule>> revokeAccessPolicyRule_ = nullptr;
    // The security group rules that you want to delete.
    std::shared_ptr<vector<ModifyPolicyGroupRequestRevokeSecurityPolicyRule>> revokeSecurityPolicyRule_ = nullptr;
    // The effective scope of the policy.
    // 
    // Valid values:
    // 
    // *   IP: The policy takes effect based on the IP address.
    // *   GLOBAL: The policy takes effect globally.
    std::shared_ptr<string> scope_ = nullptr;
    // This parameter is required when the `Scope` parameter is set to `IP`.````
    std::shared_ptr<vector<string>> scopeValue_ = nullptr;
    // Specifies whether to enable the USB redirection feature.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> usbRedirect_ = nullptr;
    // The USB redirection rules.
    std::shared_ptr<vector<ModifyPolicyGroupRequestUsbSupplyRedirectRule>> usbSupplyRedirectRule_ = nullptr;
    // The multimedia redirection feature.
    std::shared_ptr<string> videoRedirect_ = nullptr;
    // The image display quality.
    // 
    // Valid values:
    // 
    // *   high: high-definition (HD)
    // *   low: smoothness
    // *   lossless: no quality loss
    // *   medium (default): scenario-specific adaptation
    std::shared_ptr<string> visualQuality_ = nullptr;
    // The watermarking feature.
    // 
    // Valid values:
    // 
    // *   blind: Invisible watermarks are applied.
    // *   off: The watermarking feature is disabled.
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
    // The watermark transparency.
    // 
    // Valid values:
    // 
    // *   LIGHT (default)
    // *   DARK
    // *   MIDDLE
    std::shared_ptr<string> watermarkTransparency_ = nullptr;
    // The watermark opacity. A larger value indicates more opaque watermarks. Valid values: 10 to 100.
    std::shared_ptr<int32_t> watermarkTransparencyValue_ = nullptr;
    // The watermark content. You can select up to three items as the watermark content. Separate multiple items with commas (,).
    // 
    // >  If you set this parameter to `Custom`, you must specify `WatermarkCustomText`.
    // 
    // Valid values:
    // 
    // *   EndUserId: the username
    // *   Custom: the custom text
    // *   DesktopIp: the IP address of the cloud computer
    // *   ClientIp: the IP address of the Alibaba Cloud Workspace client
    // *   HostName: the rightmost 15 digits of the cloud computer ID
    // *   ClientTime: the current time displayed on the cloud computer
    std::shared_ptr<string> watermarkType_ = nullptr;
    // Specifies whether to display the Xiaoying AI Assistant entry in the DesktopAssistant menu.
    // 
    // Valid values:
    // 
    // *   off: does not display the Xiaoying AI Assistant entry in the DesktopAssistant menu.
    // *   on: displays the Xiaoying AI Assistant entry in the DesktopAssistant menu.
    std::shared_ptr<string> wyAssistant_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
