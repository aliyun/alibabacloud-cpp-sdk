// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPREQUEST_HPP_
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
      // The product ID (PID).
      shared_ptr<string> productId_ {};
      // Specifies whether to allow USB redirection.
      // 
      // Valid values:
      // 
      // *   1: allows USB redirection.
      // *   2: forbids USB redirection.
      shared_ptr<int64_t> usbRedirectType_ {};
      // The type of the USB redirection rule.
      // 
      // Valid values:
      // 
      // *   1: by device class
      // *   2: by device vendor
      shared_ptr<int64_t> usbRuleType_ {};
      // The vendor ID (VID). For more information, see [Valid USB VIDs](https://www.usb.org/sites/default/files/vendor_ids032322.pdf_1.pdf).
      shared_ptr<string> vendorId_ {};
    };

    class RevokeSecurityPolicyRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RevokeSecurityPolicyRule& obj) { 
        DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RevokeSecurityPolicyRule& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RevokeSecurityPolicyRule() = default ;
      RevokeSecurityPolicyRule(const RevokeSecurityPolicyRule &) = default ;
      RevokeSecurityPolicyRule(RevokeSecurityPolicyRule &&) = default ;
      RevokeSecurityPolicyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RevokeSecurityPolicyRule() = default ;
      RevokeSecurityPolicyRule& operator=(const RevokeSecurityPolicyRule &) = default ;
      RevokeSecurityPolicyRule& operator=(RevokeSecurityPolicyRule &&) = default ;
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
      inline RevokeSecurityPolicyRule& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RevokeSecurityPolicyRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline RevokeSecurityPolicyRule& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline RevokeSecurityPolicyRule& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline RevokeSecurityPolicyRule& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline RevokeSecurityPolicyRule& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RevokeSecurityPolicyRule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The object of the security group rule that you want to delete. The value is an IPv4 CIDR block.
      shared_ptr<string> cidrIp_ {};
      // The description of the security group rule that you want to delete.
      shared_ptr<string> description_ {};
      // The protocol type of the security group rule that you want to delete.
      // 
      // Valid values:
      // 
      // *   TCP
      // *   UDP
      // *   ALL
      // *   GRE
      // *   ICMP
      shared_ptr<string> ipProtocol_ {};
      // The authorization of the security group rule that you want to delete.
      // 
      // Valid values:
      // 
      // *   drop: denies all access requests. If no messages of access denied are returned, the requests timed out or failed.
      // *   accept (default): accepts all requests.
      shared_ptr<string> policy_ {};
      // The port range of the security group rule that you want to delete. The value range of this parameter varies based on the value of the IpProtocol parameter.
      // 
      // *   If the IpProtocol parameter is set to TCP or UDP, the port range is 1 to 65535. Separate the start port number and the end port number with a forward slash (/). Example: 1/200.
      // *   If the IpProtocol parameter is set to ICMP, set the value to -1/-1.
      // *   If the IpProtocol parameter is set to GRE, set the value to -1/-1.
      // *   If the IpProtocol parameter is set to ALL, set the value to -1/-1.
      // 
      // For more information about the common ports applied in EDS, see [Common ports](https://help.aliyun.com/document_detail/40724.html).
      shared_ptr<string> portRange_ {};
      // The priority of the security group rule that you want to delete. A smaller value indicates a higher priority. Valid values: 1 to 60. Default value: 1.
      shared_ptr<string> priority_ {};
      // The direction of the security group rule that you want to delete.
      // 
      // Valid values:
      // 
      // *   outflow: outbound
      // *   inflow: inbound
      shared_ptr<string> type_ {};
    };

    class RevokeAccessPolicyRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RevokeAccessPolicyRule& obj) { 
        DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
        DARABONBA_PTR_TO_JSON(Description, description_);
      };
      friend void from_json(const Darabonba::Json& j, RevokeAccessPolicyRule& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
      };
      RevokeAccessPolicyRule() = default ;
      RevokeAccessPolicyRule(const RevokeAccessPolicyRule &) = default ;
      RevokeAccessPolicyRule(RevokeAccessPolicyRule &&) = default ;
      RevokeAccessPolicyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RevokeAccessPolicyRule() = default ;
      RevokeAccessPolicyRule& operator=(const RevokeAccessPolicyRule &) = default ;
      RevokeAccessPolicyRule& operator=(RevokeAccessPolicyRule &&) = default ;
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
      inline RevokeAccessPolicyRule& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RevokeAccessPolicyRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    protected:
      // The client CIDR block that you want to delete. Specify an IPv4 CIDR block.
      shared_ptr<string> cidrIp_ {};
      // The description of the client IP address whitelist that you want to delete.
      shared_ptr<string> description_ {};
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
      // 
      // Valid values:
      // 
      // *   allow
      // *   block
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
      // The product ID (PID).
      shared_ptr<string> devicePid_ {};
      // The peripheral type.
      // 
      // Valid values:
      // 
      // *   usbKey: UKeys
      // *   other: other peripheral devices.
      // *   graphicsTablet: graphics tablets.
      // *   printer: printers.
      // *   cardReader: card readers.
      // *   scanner: scanners.
      // *   storage: storage devices.
      // *   camera: web cameras.
      // *   adb: Android Debug Bridge (ADB) device
      // *   networkInterfaceCard: NIC devices.
      shared_ptr<string> deviceType_ {};
      // The vendor ID (VID). For more information, see [Valid USB VIDs](https://www.usb.org/sites/default/files/vendor_ids032322.pdf_1.pdf).
      shared_ptr<string> deviceVid_ {};
      // The link optimization command.
      shared_ptr<string> optCommand_ {};
      shared_ptr<string> platforms_ {};
      // The redirection type.
      // 
      // Valid values:
      // 
      // *   deviceRedirect: device redirection
      // *   usbRedirect: USB redirection.
      // *   off: redirection disabled
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
      // 
      // Valid values:
      // 
      // *   printer
      // *   scanner
      // *   camera
      // *   adb: the Android Debug Bridge (ADB) device
      shared_ptr<string> deviceType_ {};
      // The redirection type.
      // 
      // Valid values:
      // 
      // *   deviceRedirect: device redirection
      // *   usbRedirect: USB redirection
      // *   off: redirection disabled
      shared_ptr<string> redirectType_ {};
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
      // The type of the Alibaba Cloud Workspace client.
      // 
      // >  If you do not specify the `ClientType` parameter, all types of the client are allowed by default.
      // 
      // Valid values:
      // 
      // *   html5: web client
      // *   android: Android client
      // *   windows: Windows client
      // *   ios: iOS client
      // *   macos: macOS client
      shared_ptr<string> clientType_ {};
      // Specifies whether to allow end users to use a specific type of the client to connect to cloud computers.
      // 
      // >  If you do not specify the `ClientType` parameter, all types of the client are allowed by default.
      // 
      // Valid values:
      // 
      // *   off
      // *   on
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
      // The object to which the security group rule applies. The value is an IPv4 CIDR block.
      shared_ptr<string> cidrIp_ {};
      // The description of the security group rule.
      shared_ptr<string> description_ {};
      // The protocol type of the security group rule.
      // 
      // Valid values:
      // 
      // *   UDP: the User Datagram Protocol (UDP) protocol.
      // *   TCP: the Transmission Control Protocol (TCP) protocol.
      // *   ALL: all protocols.
      // *   GRE: the Generic Routing Encapsulation (GRE) protocol.
      // *   ICMP: the Internet Control Message Protocol (ICMP) for (IPv4)
      shared_ptr<string> ipProtocol_ {};
      // The authorization of the security group rule.
      // 
      // Valid values:
      // 
      // *   drop: denies all access requests. If no messages of access denied are returned, the requests timed out or failed.
      // *   accept: accepts all requests.
      shared_ptr<string> policy_ {};
      // The port range of the security group rule. The value range of this parameter varies based on the value of the IpProtocol parameter.
      // 
      // *   If the IpProtocol parameter is set to TCP or UDP, the port range is 1 to 65535. Separate the start port number and the end port number with a forward slash (/). Example: 1/200.
      // *   If the IpProtocol parameter is set to ICMP, set the value to -1/-1.
      // *   If the IpProtocol parameter is set to GRE, set the value to -1/-1.
      // *   If the IpProtocol parameter is set to ALL, set the value to -1/-1.
      // 
      // For more information about the common ports applied in EDS, see [Common ports](https://help.aliyun.com/document_detail/40724.html).
      shared_ptr<string> portRange_ {};
      // The priority of the security group rule. A smaller value indicates a higher priority. Valid values: 1 to 60. Default value: 1
      shared_ptr<string> priority_ {};
      // The direction of the security group rule.
      // 
      // Valid values:
      // 
      // *   outflow: outbound
      // *   inflow: inbound
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
      // The client CIDR block. Specify an IPv4 CIDR block.
      // 
      // This parameter is required.
      shared_ptr<string> cidrIp_ {};
      // The description of the client IP address whitelist.
      shared_ptr<string> description_ {};
    };

    virtual bool empty() const override { return this->adminAccess_ == nullptr
        && this->appContentProtection_ == nullptr && this->authorizeAccessPolicyRule_ == nullptr && this->authorizeSecurityPolicyRule_ == nullptr && this->cameraRedirect_ == nullptr && this->clientType_ == nullptr
        && this->clipboard_ == nullptr && this->deviceRedirects_ == nullptr && this->deviceRules_ == nullptr && this->domainList_ == nullptr && this->domainResolveRule_ == nullptr
        && this->domainResolveRuleType_ == nullptr && this->endUserApplyAdminCoordinate_ == nullptr && this->endUserGroupCoordinate_ == nullptr && this->gpuAcceleration_ == nullptr && this->html5Access_ == nullptr
        && this->html5FileTransfer_ == nullptr && this->internetCommunicationProtocol_ == nullptr && this->localDrive_ == nullptr && this->maxReconnectTime_ == nullptr && this->name_ == nullptr
        && this->netRedirect_ == nullptr && this->policyGroupId_ == nullptr && this->preemptLogin_ == nullptr && this->preemptLoginUser_ == nullptr && this->printerRedirection_ == nullptr
        && this->recordContent_ == nullptr && this->recordContentExpires_ == nullptr && this->recording_ == nullptr && this->recordingAudio_ == nullptr && this->recordingDuration_ == nullptr
        && this->recordingEndTime_ == nullptr && this->recordingExpires_ == nullptr && this->recordingFps_ == nullptr && this->recordingStartTime_ == nullptr && this->recordingUserNotify_ == nullptr
        && this->recordingUserNotifyMessage_ == nullptr && this->regionId_ == nullptr && this->remoteCoordinate_ == nullptr && this->revokeAccessPolicyRule_ == nullptr && this->revokeSecurityPolicyRule_ == nullptr
        && this->scope_ == nullptr && this->scopeValue_ == nullptr && this->usbRedirect_ == nullptr && this->usbSupplyRedirectRule_ == nullptr && this->videoRedirect_ == nullptr
        && this->visualQuality_ == nullptr && this->watermark_ == nullptr && this->watermarkAntiCam_ == nullptr && this->watermarkColor_ == nullptr && this->watermarkDegree_ == nullptr
        && this->watermarkFontSize_ == nullptr && this->watermarkFontStyle_ == nullptr && this->watermarkPower_ == nullptr && this->watermarkRowAmount_ == nullptr && this->watermarkSecurity_ == nullptr
        && this->watermarkTransparency_ == nullptr && this->watermarkTransparencyValue_ == nullptr && this->watermarkType_ == nullptr && this->wyAssistant_ == nullptr; };
    // adminAccess Field Functions 
    bool hasAdminAccess() const { return this->adminAccess_ != nullptr;};
    void deleteAdminAccess() { this->adminAccess_ = nullptr;};
    inline string getAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(adminAccess_, "") };
    inline ModifyPolicyGroupRequest& setAdminAccess(string adminAccess) { DARABONBA_PTR_SET_VALUE(adminAccess_, adminAccess) };


    // appContentProtection Field Functions 
    bool hasAppContentProtection() const { return this->appContentProtection_ != nullptr;};
    void deleteAppContentProtection() { this->appContentProtection_ = nullptr;};
    inline string getAppContentProtection() const { DARABONBA_PTR_GET_DEFAULT(appContentProtection_, "") };
    inline ModifyPolicyGroupRequest& setAppContentProtection(string appContentProtection) { DARABONBA_PTR_SET_VALUE(appContentProtection_, appContentProtection) };


    // authorizeAccessPolicyRule Field Functions 
    bool hasAuthorizeAccessPolicyRule() const { return this->authorizeAccessPolicyRule_ != nullptr;};
    void deleteAuthorizeAccessPolicyRule() { this->authorizeAccessPolicyRule_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequest::AuthorizeAccessPolicyRule> & getAuthorizeAccessPolicyRule() const { DARABONBA_PTR_GET_CONST(authorizeAccessPolicyRule_, vector<ModifyPolicyGroupRequest::AuthorizeAccessPolicyRule>) };
    inline vector<ModifyPolicyGroupRequest::AuthorizeAccessPolicyRule> getAuthorizeAccessPolicyRule() { DARABONBA_PTR_GET(authorizeAccessPolicyRule_, vector<ModifyPolicyGroupRequest::AuthorizeAccessPolicyRule>) };
    inline ModifyPolicyGroupRequest& setAuthorizeAccessPolicyRule(const vector<ModifyPolicyGroupRequest::AuthorizeAccessPolicyRule> & authorizeAccessPolicyRule) { DARABONBA_PTR_SET_VALUE(authorizeAccessPolicyRule_, authorizeAccessPolicyRule) };
    inline ModifyPolicyGroupRequest& setAuthorizeAccessPolicyRule(vector<ModifyPolicyGroupRequest::AuthorizeAccessPolicyRule> && authorizeAccessPolicyRule) { DARABONBA_PTR_SET_RVALUE(authorizeAccessPolicyRule_, authorizeAccessPolicyRule) };


    // authorizeSecurityPolicyRule Field Functions 
    bool hasAuthorizeSecurityPolicyRule() const { return this->authorizeSecurityPolicyRule_ != nullptr;};
    void deleteAuthorizeSecurityPolicyRule() { this->authorizeSecurityPolicyRule_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequest::AuthorizeSecurityPolicyRule> & getAuthorizeSecurityPolicyRule() const { DARABONBA_PTR_GET_CONST(authorizeSecurityPolicyRule_, vector<ModifyPolicyGroupRequest::AuthorizeSecurityPolicyRule>) };
    inline vector<ModifyPolicyGroupRequest::AuthorizeSecurityPolicyRule> getAuthorizeSecurityPolicyRule() { DARABONBA_PTR_GET(authorizeSecurityPolicyRule_, vector<ModifyPolicyGroupRequest::AuthorizeSecurityPolicyRule>) };
    inline ModifyPolicyGroupRequest& setAuthorizeSecurityPolicyRule(const vector<ModifyPolicyGroupRequest::AuthorizeSecurityPolicyRule> & authorizeSecurityPolicyRule) { DARABONBA_PTR_SET_VALUE(authorizeSecurityPolicyRule_, authorizeSecurityPolicyRule) };
    inline ModifyPolicyGroupRequest& setAuthorizeSecurityPolicyRule(vector<ModifyPolicyGroupRequest::AuthorizeSecurityPolicyRule> && authorizeSecurityPolicyRule) { DARABONBA_PTR_SET_RVALUE(authorizeSecurityPolicyRule_, authorizeSecurityPolicyRule) };


    // cameraRedirect Field Functions 
    bool hasCameraRedirect() const { return this->cameraRedirect_ != nullptr;};
    void deleteCameraRedirect() { this->cameraRedirect_ = nullptr;};
    inline string getCameraRedirect() const { DARABONBA_PTR_GET_DEFAULT(cameraRedirect_, "") };
    inline ModifyPolicyGroupRequest& setCameraRedirect(string cameraRedirect) { DARABONBA_PTR_SET_VALUE(cameraRedirect_, cameraRedirect) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequest::ClientType> & getClientType() const { DARABONBA_PTR_GET_CONST(clientType_, vector<ModifyPolicyGroupRequest::ClientType>) };
    inline vector<ModifyPolicyGroupRequest::ClientType> getClientType() { DARABONBA_PTR_GET(clientType_, vector<ModifyPolicyGroupRequest::ClientType>) };
    inline ModifyPolicyGroupRequest& setClientType(const vector<ModifyPolicyGroupRequest::ClientType> & clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };
    inline ModifyPolicyGroupRequest& setClientType(vector<ModifyPolicyGroupRequest::ClientType> && clientType) { DARABONBA_PTR_SET_RVALUE(clientType_, clientType) };


    // clipboard Field Functions 
    bool hasClipboard() const { return this->clipboard_ != nullptr;};
    void deleteClipboard() { this->clipboard_ = nullptr;};
    inline string getClipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
    inline ModifyPolicyGroupRequest& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


    // deviceRedirects Field Functions 
    bool hasDeviceRedirects() const { return this->deviceRedirects_ != nullptr;};
    void deleteDeviceRedirects() { this->deviceRedirects_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequest::DeviceRedirects> & getDeviceRedirects() const { DARABONBA_PTR_GET_CONST(deviceRedirects_, vector<ModifyPolicyGroupRequest::DeviceRedirects>) };
    inline vector<ModifyPolicyGroupRequest::DeviceRedirects> getDeviceRedirects() { DARABONBA_PTR_GET(deviceRedirects_, vector<ModifyPolicyGroupRequest::DeviceRedirects>) };
    inline ModifyPolicyGroupRequest& setDeviceRedirects(const vector<ModifyPolicyGroupRequest::DeviceRedirects> & deviceRedirects) { DARABONBA_PTR_SET_VALUE(deviceRedirects_, deviceRedirects) };
    inline ModifyPolicyGroupRequest& setDeviceRedirects(vector<ModifyPolicyGroupRequest::DeviceRedirects> && deviceRedirects) { DARABONBA_PTR_SET_RVALUE(deviceRedirects_, deviceRedirects) };


    // deviceRules Field Functions 
    bool hasDeviceRules() const { return this->deviceRules_ != nullptr;};
    void deleteDeviceRules() { this->deviceRules_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequest::DeviceRules> & getDeviceRules() const { DARABONBA_PTR_GET_CONST(deviceRules_, vector<ModifyPolicyGroupRequest::DeviceRules>) };
    inline vector<ModifyPolicyGroupRequest::DeviceRules> getDeviceRules() { DARABONBA_PTR_GET(deviceRules_, vector<ModifyPolicyGroupRequest::DeviceRules>) };
    inline ModifyPolicyGroupRequest& setDeviceRules(const vector<ModifyPolicyGroupRequest::DeviceRules> & deviceRules) { DARABONBA_PTR_SET_VALUE(deviceRules_, deviceRules) };
    inline ModifyPolicyGroupRequest& setDeviceRules(vector<ModifyPolicyGroupRequest::DeviceRules> && deviceRules) { DARABONBA_PTR_SET_RVALUE(deviceRules_, deviceRules) };


    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline string getDomainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
    inline ModifyPolicyGroupRequest& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


    // domainResolveRule Field Functions 
    bool hasDomainResolveRule() const { return this->domainResolveRule_ != nullptr;};
    void deleteDomainResolveRule() { this->domainResolveRule_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequest::DomainResolveRule> & getDomainResolveRule() const { DARABONBA_PTR_GET_CONST(domainResolveRule_, vector<ModifyPolicyGroupRequest::DomainResolveRule>) };
    inline vector<ModifyPolicyGroupRequest::DomainResolveRule> getDomainResolveRule() { DARABONBA_PTR_GET(domainResolveRule_, vector<ModifyPolicyGroupRequest::DomainResolveRule>) };
    inline ModifyPolicyGroupRequest& setDomainResolveRule(const vector<ModifyPolicyGroupRequest::DomainResolveRule> & domainResolveRule) { DARABONBA_PTR_SET_VALUE(domainResolveRule_, domainResolveRule) };
    inline ModifyPolicyGroupRequest& setDomainResolveRule(vector<ModifyPolicyGroupRequest::DomainResolveRule> && domainResolveRule) { DARABONBA_PTR_SET_RVALUE(domainResolveRule_, domainResolveRule) };


    // domainResolveRuleType Field Functions 
    bool hasDomainResolveRuleType() const { return this->domainResolveRuleType_ != nullptr;};
    void deleteDomainResolveRuleType() { this->domainResolveRuleType_ = nullptr;};
    inline string getDomainResolveRuleType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveRuleType_, "") };
    inline ModifyPolicyGroupRequest& setDomainResolveRuleType(string domainResolveRuleType) { DARABONBA_PTR_SET_VALUE(domainResolveRuleType_, domainResolveRuleType) };


    // endUserApplyAdminCoordinate Field Functions 
    bool hasEndUserApplyAdminCoordinate() const { return this->endUserApplyAdminCoordinate_ != nullptr;};
    void deleteEndUserApplyAdminCoordinate() { this->endUserApplyAdminCoordinate_ = nullptr;};
    inline string getEndUserApplyAdminCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserApplyAdminCoordinate_, "") };
    inline ModifyPolicyGroupRequest& setEndUserApplyAdminCoordinate(string endUserApplyAdminCoordinate) { DARABONBA_PTR_SET_VALUE(endUserApplyAdminCoordinate_, endUserApplyAdminCoordinate) };


    // endUserGroupCoordinate Field Functions 
    bool hasEndUserGroupCoordinate() const { return this->endUserGroupCoordinate_ != nullptr;};
    void deleteEndUserGroupCoordinate() { this->endUserGroupCoordinate_ = nullptr;};
    inline string getEndUserGroupCoordinate() const { DARABONBA_PTR_GET_DEFAULT(endUserGroupCoordinate_, "") };
    inline ModifyPolicyGroupRequest& setEndUserGroupCoordinate(string endUserGroupCoordinate) { DARABONBA_PTR_SET_VALUE(endUserGroupCoordinate_, endUserGroupCoordinate) };


    // gpuAcceleration Field Functions 
    bool hasGpuAcceleration() const { return this->gpuAcceleration_ != nullptr;};
    void deleteGpuAcceleration() { this->gpuAcceleration_ = nullptr;};
    inline string getGpuAcceleration() const { DARABONBA_PTR_GET_DEFAULT(gpuAcceleration_, "") };
    inline ModifyPolicyGroupRequest& setGpuAcceleration(string gpuAcceleration) { DARABONBA_PTR_SET_VALUE(gpuAcceleration_, gpuAcceleration) };


    // html5Access Field Functions 
    bool hasHtml5Access() const { return this->html5Access_ != nullptr;};
    void deleteHtml5Access() { this->html5Access_ = nullptr;};
    inline string getHtml5Access() const { DARABONBA_PTR_GET_DEFAULT(html5Access_, "") };
    inline ModifyPolicyGroupRequest& setHtml5Access(string html5Access) { DARABONBA_PTR_SET_VALUE(html5Access_, html5Access) };


    // html5FileTransfer Field Functions 
    bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
    void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
    inline string getHtml5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
    inline ModifyPolicyGroupRequest& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


    // internetCommunicationProtocol Field Functions 
    bool hasInternetCommunicationProtocol() const { return this->internetCommunicationProtocol_ != nullptr;};
    void deleteInternetCommunicationProtocol() { this->internetCommunicationProtocol_ = nullptr;};
    inline string getInternetCommunicationProtocol() const { DARABONBA_PTR_GET_DEFAULT(internetCommunicationProtocol_, "") };
    inline ModifyPolicyGroupRequest& setInternetCommunicationProtocol(string internetCommunicationProtocol) { DARABONBA_PTR_SET_VALUE(internetCommunicationProtocol_, internetCommunicationProtocol) };


    // localDrive Field Functions 
    bool hasLocalDrive() const { return this->localDrive_ != nullptr;};
    void deleteLocalDrive() { this->localDrive_ = nullptr;};
    inline string getLocalDrive() const { DARABONBA_PTR_GET_DEFAULT(localDrive_, "") };
    inline ModifyPolicyGroupRequest& setLocalDrive(string localDrive) { DARABONBA_PTR_SET_VALUE(localDrive_, localDrive) };


    // maxReconnectTime Field Functions 
    bool hasMaxReconnectTime() const { return this->maxReconnectTime_ != nullptr;};
    void deleteMaxReconnectTime() { this->maxReconnectTime_ = nullptr;};
    inline int32_t getMaxReconnectTime() const { DARABONBA_PTR_GET_DEFAULT(maxReconnectTime_, 0) };
    inline ModifyPolicyGroupRequest& setMaxReconnectTime(int32_t maxReconnectTime) { DARABONBA_PTR_SET_VALUE(maxReconnectTime_, maxReconnectTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyPolicyGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netRedirect Field Functions 
    bool hasNetRedirect() const { return this->netRedirect_ != nullptr;};
    void deleteNetRedirect() { this->netRedirect_ = nullptr;};
    inline string getNetRedirect() const { DARABONBA_PTR_GET_DEFAULT(netRedirect_, "") };
    inline ModifyPolicyGroupRequest& setNetRedirect(string netRedirect) { DARABONBA_PTR_SET_VALUE(netRedirect_, netRedirect) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ModifyPolicyGroupRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // preemptLogin Field Functions 
    bool hasPreemptLogin() const { return this->preemptLogin_ != nullptr;};
    void deletePreemptLogin() { this->preemptLogin_ = nullptr;};
    inline string getPreemptLogin() const { DARABONBA_PTR_GET_DEFAULT(preemptLogin_, "") };
    inline ModifyPolicyGroupRequest& setPreemptLogin(string preemptLogin) { DARABONBA_PTR_SET_VALUE(preemptLogin_, preemptLogin) };


    // preemptLoginUser Field Functions 
    bool hasPreemptLoginUser() const { return this->preemptLoginUser_ != nullptr;};
    void deletePreemptLoginUser() { this->preemptLoginUser_ = nullptr;};
    inline const vector<string> & getPreemptLoginUser() const { DARABONBA_PTR_GET_CONST(preemptLoginUser_, vector<string>) };
    inline vector<string> getPreemptLoginUser() { DARABONBA_PTR_GET(preemptLoginUser_, vector<string>) };
    inline ModifyPolicyGroupRequest& setPreemptLoginUser(const vector<string> & preemptLoginUser) { DARABONBA_PTR_SET_VALUE(preemptLoginUser_, preemptLoginUser) };
    inline ModifyPolicyGroupRequest& setPreemptLoginUser(vector<string> && preemptLoginUser) { DARABONBA_PTR_SET_RVALUE(preemptLoginUser_, preemptLoginUser) };


    // printerRedirection Field Functions 
    bool hasPrinterRedirection() const { return this->printerRedirection_ != nullptr;};
    void deletePrinterRedirection() { this->printerRedirection_ = nullptr;};
    inline string getPrinterRedirection() const { DARABONBA_PTR_GET_DEFAULT(printerRedirection_, "") };
    inline ModifyPolicyGroupRequest& setPrinterRedirection(string printerRedirection) { DARABONBA_PTR_SET_VALUE(printerRedirection_, printerRedirection) };


    // recordContent Field Functions 
    bool hasRecordContent() const { return this->recordContent_ != nullptr;};
    void deleteRecordContent() { this->recordContent_ = nullptr;};
    inline string getRecordContent() const { DARABONBA_PTR_GET_DEFAULT(recordContent_, "") };
    inline ModifyPolicyGroupRequest& setRecordContent(string recordContent) { DARABONBA_PTR_SET_VALUE(recordContent_, recordContent) };


    // recordContentExpires Field Functions 
    bool hasRecordContentExpires() const { return this->recordContentExpires_ != nullptr;};
    void deleteRecordContentExpires() { this->recordContentExpires_ = nullptr;};
    inline int64_t getRecordContentExpires() const { DARABONBA_PTR_GET_DEFAULT(recordContentExpires_, 0L) };
    inline ModifyPolicyGroupRequest& setRecordContentExpires(int64_t recordContentExpires) { DARABONBA_PTR_SET_VALUE(recordContentExpires_, recordContentExpires) };


    // recording Field Functions 
    bool hasRecording() const { return this->recording_ != nullptr;};
    void deleteRecording() { this->recording_ = nullptr;};
    inline string getRecording() const { DARABONBA_PTR_GET_DEFAULT(recording_, "") };
    inline ModifyPolicyGroupRequest& setRecording(string recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };


    // recordingAudio Field Functions 
    bool hasRecordingAudio() const { return this->recordingAudio_ != nullptr;};
    void deleteRecordingAudio() { this->recordingAudio_ = nullptr;};
    inline string getRecordingAudio() const { DARABONBA_PTR_GET_DEFAULT(recordingAudio_, "") };
    inline ModifyPolicyGroupRequest& setRecordingAudio(string recordingAudio) { DARABONBA_PTR_SET_VALUE(recordingAudio_, recordingAudio) };


    // recordingDuration Field Functions 
    bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
    void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
    inline int32_t getRecordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0) };
    inline ModifyPolicyGroupRequest& setRecordingDuration(int32_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


    // recordingEndTime Field Functions 
    bool hasRecordingEndTime() const { return this->recordingEndTime_ != nullptr;};
    void deleteRecordingEndTime() { this->recordingEndTime_ = nullptr;};
    inline string getRecordingEndTime() const { DARABONBA_PTR_GET_DEFAULT(recordingEndTime_, "") };
    inline ModifyPolicyGroupRequest& setRecordingEndTime(string recordingEndTime) { DARABONBA_PTR_SET_VALUE(recordingEndTime_, recordingEndTime) };


    // recordingExpires Field Functions 
    bool hasRecordingExpires() const { return this->recordingExpires_ != nullptr;};
    void deleteRecordingExpires() { this->recordingExpires_ = nullptr;};
    inline int64_t getRecordingExpires() const { DARABONBA_PTR_GET_DEFAULT(recordingExpires_, 0L) };
    inline ModifyPolicyGroupRequest& setRecordingExpires(int64_t recordingExpires) { DARABONBA_PTR_SET_VALUE(recordingExpires_, recordingExpires) };


    // recordingFps Field Functions 
    bool hasRecordingFps() const { return this->recordingFps_ != nullptr;};
    void deleteRecordingFps() { this->recordingFps_ = nullptr;};
    inline int64_t getRecordingFps() const { DARABONBA_PTR_GET_DEFAULT(recordingFps_, 0L) };
    inline ModifyPolicyGroupRequest& setRecordingFps(int64_t recordingFps) { DARABONBA_PTR_SET_VALUE(recordingFps_, recordingFps) };


    // recordingStartTime Field Functions 
    bool hasRecordingStartTime() const { return this->recordingStartTime_ != nullptr;};
    void deleteRecordingStartTime() { this->recordingStartTime_ = nullptr;};
    inline string getRecordingStartTime() const { DARABONBA_PTR_GET_DEFAULT(recordingStartTime_, "") };
    inline ModifyPolicyGroupRequest& setRecordingStartTime(string recordingStartTime) { DARABONBA_PTR_SET_VALUE(recordingStartTime_, recordingStartTime) };


    // recordingUserNotify Field Functions 
    bool hasRecordingUserNotify() const { return this->recordingUserNotify_ != nullptr;};
    void deleteRecordingUserNotify() { this->recordingUserNotify_ = nullptr;};
    inline string getRecordingUserNotify() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotify_, "") };
    inline ModifyPolicyGroupRequest& setRecordingUserNotify(string recordingUserNotify) { DARABONBA_PTR_SET_VALUE(recordingUserNotify_, recordingUserNotify) };


    // recordingUserNotifyMessage Field Functions 
    bool hasRecordingUserNotifyMessage() const { return this->recordingUserNotifyMessage_ != nullptr;};
    void deleteRecordingUserNotifyMessage() { this->recordingUserNotifyMessage_ = nullptr;};
    inline string getRecordingUserNotifyMessage() const { DARABONBA_PTR_GET_DEFAULT(recordingUserNotifyMessage_, "") };
    inline ModifyPolicyGroupRequest& setRecordingUserNotifyMessage(string recordingUserNotifyMessage) { DARABONBA_PTR_SET_VALUE(recordingUserNotifyMessage_, recordingUserNotifyMessage) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPolicyGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteCoordinate Field Functions 
    bool hasRemoteCoordinate() const { return this->remoteCoordinate_ != nullptr;};
    void deleteRemoteCoordinate() { this->remoteCoordinate_ = nullptr;};
    inline string getRemoteCoordinate() const { DARABONBA_PTR_GET_DEFAULT(remoteCoordinate_, "") };
    inline ModifyPolicyGroupRequest& setRemoteCoordinate(string remoteCoordinate) { DARABONBA_PTR_SET_VALUE(remoteCoordinate_, remoteCoordinate) };


    // revokeAccessPolicyRule Field Functions 
    bool hasRevokeAccessPolicyRule() const { return this->revokeAccessPolicyRule_ != nullptr;};
    void deleteRevokeAccessPolicyRule() { this->revokeAccessPolicyRule_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequest::RevokeAccessPolicyRule> & getRevokeAccessPolicyRule() const { DARABONBA_PTR_GET_CONST(revokeAccessPolicyRule_, vector<ModifyPolicyGroupRequest::RevokeAccessPolicyRule>) };
    inline vector<ModifyPolicyGroupRequest::RevokeAccessPolicyRule> getRevokeAccessPolicyRule() { DARABONBA_PTR_GET(revokeAccessPolicyRule_, vector<ModifyPolicyGroupRequest::RevokeAccessPolicyRule>) };
    inline ModifyPolicyGroupRequest& setRevokeAccessPolicyRule(const vector<ModifyPolicyGroupRequest::RevokeAccessPolicyRule> & revokeAccessPolicyRule) { DARABONBA_PTR_SET_VALUE(revokeAccessPolicyRule_, revokeAccessPolicyRule) };
    inline ModifyPolicyGroupRequest& setRevokeAccessPolicyRule(vector<ModifyPolicyGroupRequest::RevokeAccessPolicyRule> && revokeAccessPolicyRule) { DARABONBA_PTR_SET_RVALUE(revokeAccessPolicyRule_, revokeAccessPolicyRule) };


    // revokeSecurityPolicyRule Field Functions 
    bool hasRevokeSecurityPolicyRule() const { return this->revokeSecurityPolicyRule_ != nullptr;};
    void deleteRevokeSecurityPolicyRule() { this->revokeSecurityPolicyRule_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequest::RevokeSecurityPolicyRule> & getRevokeSecurityPolicyRule() const { DARABONBA_PTR_GET_CONST(revokeSecurityPolicyRule_, vector<ModifyPolicyGroupRequest::RevokeSecurityPolicyRule>) };
    inline vector<ModifyPolicyGroupRequest::RevokeSecurityPolicyRule> getRevokeSecurityPolicyRule() { DARABONBA_PTR_GET(revokeSecurityPolicyRule_, vector<ModifyPolicyGroupRequest::RevokeSecurityPolicyRule>) };
    inline ModifyPolicyGroupRequest& setRevokeSecurityPolicyRule(const vector<ModifyPolicyGroupRequest::RevokeSecurityPolicyRule> & revokeSecurityPolicyRule) { DARABONBA_PTR_SET_VALUE(revokeSecurityPolicyRule_, revokeSecurityPolicyRule) };
    inline ModifyPolicyGroupRequest& setRevokeSecurityPolicyRule(vector<ModifyPolicyGroupRequest::RevokeSecurityPolicyRule> && revokeSecurityPolicyRule) { DARABONBA_PTR_SET_RVALUE(revokeSecurityPolicyRule_, revokeSecurityPolicyRule) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ModifyPolicyGroupRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // scopeValue Field Functions 
    bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
    void deleteScopeValue() { this->scopeValue_ = nullptr;};
    inline const vector<string> & getScopeValue() const { DARABONBA_PTR_GET_CONST(scopeValue_, vector<string>) };
    inline vector<string> getScopeValue() { DARABONBA_PTR_GET(scopeValue_, vector<string>) };
    inline ModifyPolicyGroupRequest& setScopeValue(const vector<string> & scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };
    inline ModifyPolicyGroupRequest& setScopeValue(vector<string> && scopeValue) { DARABONBA_PTR_SET_RVALUE(scopeValue_, scopeValue) };


    // usbRedirect Field Functions 
    bool hasUsbRedirect() const { return this->usbRedirect_ != nullptr;};
    void deleteUsbRedirect() { this->usbRedirect_ = nullptr;};
    inline string getUsbRedirect() const { DARABONBA_PTR_GET_DEFAULT(usbRedirect_, "") };
    inline ModifyPolicyGroupRequest& setUsbRedirect(string usbRedirect) { DARABONBA_PTR_SET_VALUE(usbRedirect_, usbRedirect) };


    // usbSupplyRedirectRule Field Functions 
    bool hasUsbSupplyRedirectRule() const { return this->usbSupplyRedirectRule_ != nullptr;};
    void deleteUsbSupplyRedirectRule() { this->usbSupplyRedirectRule_ = nullptr;};
    inline const vector<ModifyPolicyGroupRequest::UsbSupplyRedirectRule> & getUsbSupplyRedirectRule() const { DARABONBA_PTR_GET_CONST(usbSupplyRedirectRule_, vector<ModifyPolicyGroupRequest::UsbSupplyRedirectRule>) };
    inline vector<ModifyPolicyGroupRequest::UsbSupplyRedirectRule> getUsbSupplyRedirectRule() { DARABONBA_PTR_GET(usbSupplyRedirectRule_, vector<ModifyPolicyGroupRequest::UsbSupplyRedirectRule>) };
    inline ModifyPolicyGroupRequest& setUsbSupplyRedirectRule(const vector<ModifyPolicyGroupRequest::UsbSupplyRedirectRule> & usbSupplyRedirectRule) { DARABONBA_PTR_SET_VALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };
    inline ModifyPolicyGroupRequest& setUsbSupplyRedirectRule(vector<ModifyPolicyGroupRequest::UsbSupplyRedirectRule> && usbSupplyRedirectRule) { DARABONBA_PTR_SET_RVALUE(usbSupplyRedirectRule_, usbSupplyRedirectRule) };


    // videoRedirect Field Functions 
    bool hasVideoRedirect() const { return this->videoRedirect_ != nullptr;};
    void deleteVideoRedirect() { this->videoRedirect_ = nullptr;};
    inline string getVideoRedirect() const { DARABONBA_PTR_GET_DEFAULT(videoRedirect_, "") };
    inline ModifyPolicyGroupRequest& setVideoRedirect(string videoRedirect) { DARABONBA_PTR_SET_VALUE(videoRedirect_, videoRedirect) };


    // visualQuality Field Functions 
    bool hasVisualQuality() const { return this->visualQuality_ != nullptr;};
    void deleteVisualQuality() { this->visualQuality_ = nullptr;};
    inline string getVisualQuality() const { DARABONBA_PTR_GET_DEFAULT(visualQuality_, "") };
    inline ModifyPolicyGroupRequest& setVisualQuality(string visualQuality) { DARABONBA_PTR_SET_VALUE(visualQuality_, visualQuality) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline string getWatermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, "") };
    inline ModifyPolicyGroupRequest& setWatermark(string watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


    // watermarkAntiCam Field Functions 
    bool hasWatermarkAntiCam() const { return this->watermarkAntiCam_ != nullptr;};
    void deleteWatermarkAntiCam() { this->watermarkAntiCam_ = nullptr;};
    inline string getWatermarkAntiCam() const { DARABONBA_PTR_GET_DEFAULT(watermarkAntiCam_, "") };
    inline ModifyPolicyGroupRequest& setWatermarkAntiCam(string watermarkAntiCam) { DARABONBA_PTR_SET_VALUE(watermarkAntiCam_, watermarkAntiCam) };


    // watermarkColor Field Functions 
    bool hasWatermarkColor() const { return this->watermarkColor_ != nullptr;};
    void deleteWatermarkColor() { this->watermarkColor_ = nullptr;};
    inline int32_t getWatermarkColor() const { DARABONBA_PTR_GET_DEFAULT(watermarkColor_, 0) };
    inline ModifyPolicyGroupRequest& setWatermarkColor(int32_t watermarkColor) { DARABONBA_PTR_SET_VALUE(watermarkColor_, watermarkColor) };


    // watermarkDegree Field Functions 
    bool hasWatermarkDegree() const { return this->watermarkDegree_ != nullptr;};
    void deleteWatermarkDegree() { this->watermarkDegree_ = nullptr;};
    inline double getWatermarkDegree() const { DARABONBA_PTR_GET_DEFAULT(watermarkDegree_, 0.0) };
    inline ModifyPolicyGroupRequest& setWatermarkDegree(double watermarkDegree) { DARABONBA_PTR_SET_VALUE(watermarkDegree_, watermarkDegree) };


    // watermarkFontSize Field Functions 
    bool hasWatermarkFontSize() const { return this->watermarkFontSize_ != nullptr;};
    void deleteWatermarkFontSize() { this->watermarkFontSize_ = nullptr;};
    inline int32_t getWatermarkFontSize() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontSize_, 0) };
    inline ModifyPolicyGroupRequest& setWatermarkFontSize(int32_t watermarkFontSize) { DARABONBA_PTR_SET_VALUE(watermarkFontSize_, watermarkFontSize) };


    // watermarkFontStyle Field Functions 
    bool hasWatermarkFontStyle() const { return this->watermarkFontStyle_ != nullptr;};
    void deleteWatermarkFontStyle() { this->watermarkFontStyle_ = nullptr;};
    inline string getWatermarkFontStyle() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontStyle_, "") };
    inline ModifyPolicyGroupRequest& setWatermarkFontStyle(string watermarkFontStyle) { DARABONBA_PTR_SET_VALUE(watermarkFontStyle_, watermarkFontStyle) };


    // watermarkPower Field Functions 
    bool hasWatermarkPower() const { return this->watermarkPower_ != nullptr;};
    void deleteWatermarkPower() { this->watermarkPower_ = nullptr;};
    inline string getWatermarkPower() const { DARABONBA_PTR_GET_DEFAULT(watermarkPower_, "") };
    inline ModifyPolicyGroupRequest& setWatermarkPower(string watermarkPower) { DARABONBA_PTR_SET_VALUE(watermarkPower_, watermarkPower) };


    // watermarkRowAmount Field Functions 
    bool hasWatermarkRowAmount() const { return this->watermarkRowAmount_ != nullptr;};
    void deleteWatermarkRowAmount() { this->watermarkRowAmount_ = nullptr;};
    inline int32_t getWatermarkRowAmount() const { DARABONBA_PTR_GET_DEFAULT(watermarkRowAmount_, 0) };
    inline ModifyPolicyGroupRequest& setWatermarkRowAmount(int32_t watermarkRowAmount) { DARABONBA_PTR_SET_VALUE(watermarkRowAmount_, watermarkRowAmount) };


    // watermarkSecurity Field Functions 
    bool hasWatermarkSecurity() const { return this->watermarkSecurity_ != nullptr;};
    void deleteWatermarkSecurity() { this->watermarkSecurity_ = nullptr;};
    inline string getWatermarkSecurity() const { DARABONBA_PTR_GET_DEFAULT(watermarkSecurity_, "") };
    inline ModifyPolicyGroupRequest& setWatermarkSecurity(string watermarkSecurity) { DARABONBA_PTR_SET_VALUE(watermarkSecurity_, watermarkSecurity) };


    // watermarkTransparency Field Functions 
    bool hasWatermarkTransparency() const { return this->watermarkTransparency_ != nullptr;};
    void deleteWatermarkTransparency() { this->watermarkTransparency_ = nullptr;};
    inline string getWatermarkTransparency() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparency_, "") };
    inline ModifyPolicyGroupRequest& setWatermarkTransparency(string watermarkTransparency) { DARABONBA_PTR_SET_VALUE(watermarkTransparency_, watermarkTransparency) };


    // watermarkTransparencyValue Field Functions 
    bool hasWatermarkTransparencyValue() const { return this->watermarkTransparencyValue_ != nullptr;};
    void deleteWatermarkTransparencyValue() { this->watermarkTransparencyValue_ = nullptr;};
    inline int32_t getWatermarkTransparencyValue() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparencyValue_, 0) };
    inline ModifyPolicyGroupRequest& setWatermarkTransparencyValue(int32_t watermarkTransparencyValue) { DARABONBA_PTR_SET_VALUE(watermarkTransparencyValue_, watermarkTransparencyValue) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string getWatermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline ModifyPolicyGroupRequest& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


    // wyAssistant Field Functions 
    bool hasWyAssistant() const { return this->wyAssistant_ != nullptr;};
    void deleteWyAssistant() { this->wyAssistant_ = nullptr;};
    inline string getWyAssistant() const { DARABONBA_PTR_GET_DEFAULT(wyAssistant_, "") };
    inline ModifyPolicyGroupRequest& setWyAssistant(string wyAssistant) { DARABONBA_PTR_SET_VALUE(wyAssistant_, wyAssistant) };


  protected:
    // Specifies whether end users have the administrator permissions.
    // 
    // >  This parameter is in invitational preview for specific users and not available to the public.
    shared_ptr<string> adminAccess_ {};
    // Specifies whether to enable the anti-screenshot feature.
    // 
    // Valid values:
    // 
    // *   off (default)
    // *   on
    shared_ptr<string> appContentProtection_ {};
    // The client IP address whitelists.
    shared_ptr<vector<ModifyPolicyGroupRequest::AuthorizeAccessPolicyRule>> authorizeAccessPolicyRule_ {};
    // The security group rules.
    shared_ptr<vector<ModifyPolicyGroupRequest::AuthorizeSecurityPolicyRule>> authorizeSecurityPolicyRule_ {};
    // Specifies whether to enable the webcam redirection feature.
    // 
    // Valid values:
    // 
    // *   off
    // *   on (default)
    shared_ptr<string> cameraRedirect_ {};
    // The logon method control rules to limit the type of the Alibaba Cloud Workspace client used by end users to connect to cloud computers.
    shared_ptr<vector<ModifyPolicyGroupRequest::ClientType>> clientType_ {};
    // The permissions on the clipboard.
    // 
    // Valid values:
    // 
    // *   read: specifies one-way transfer. You can copy files only from local devices to cloud computers.
    // *   readwrite: specifies two-way transfer You can copy files between local devices and cloud computers.
    // *   write: specifies one-way transfer. You can only copy files from cloud computers to local devices.
    // *   off: disables both one-way and two-way transfer. Files cannot be copied between local devices and cloud computers.
    shared_ptr<string> clipboard_ {};
    // The device redirection rules.
    shared_ptr<vector<ModifyPolicyGroupRequest::DeviceRedirects>> deviceRedirects_ {};
    // The custom peripheral rules.
    shared_ptr<vector<ModifyPolicyGroupRequest::DeviceRules>> deviceRules_ {};
    // Specifies whether the access control for domain names is enabled. Domain names support wildcards (\\*). Separate multiple domain names with commas (,).
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    shared_ptr<string> domainList_ {};
    // The domain resolution rules.
    shared_ptr<vector<ModifyPolicyGroupRequest::DomainResolveRule>> domainResolveRule_ {};
    // The type of the domain name resolution rule.
    // 
    // Valid values:
    // 
    // *   OFF
    // *   ON
    shared_ptr<string> domainResolveRuleType_ {};
    // Specifies whether to turn on the Contact Administrator for Help switch.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    shared_ptr<string> endUserApplyAdminCoordinate_ {};
    // Specifies whether to turn on the User Stream Collaboration switch.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    shared_ptr<string> endUserGroupCoordinate_ {};
    // Specifies whether to enable the Image Quality Control feature for Graphic-based cloud computers. If you have high requirements on the performance and user experience in scenarios such as professional design, we recommend that you enable this feature.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    shared_ptr<string> gpuAcceleration_ {};
    // Specifies whether to allow web client access.
    // 
    // >  We recommend that you specify the ClientType-related parameters to control the Alibaba Cloud Workspace client type for cloud computer connection.``
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    shared_ptr<string> html5Access_ {};
    // The file transfer feature on the web client.
    // 
    // Valid values:
    // 
    // *   all: Files can be uploaded and downloaded between local computers and the web client.
    // *   download: Files on the web client can be downloaded to local computers.
    // *   upload: Files on local computers can be uploaded to the web client.
    // *   off (default): Files cannot be transferred between the web client and local computers.
    shared_ptr<string> html5FileTransfer_ {};
    // The protocol for network communication.
    // 
    // Valid values:
    // 
    // *   TCP (default): TCP
    // *   BOTH: TCP and UDP
    shared_ptr<string> internetCommunicationProtocol_ {};
    // The permissions on local disk mapping.
    // 
    // Valid values:
    // 
    // *   read: read-only. Local disk mapping is available on cloud computers. However, you can only read (copy) local files but cannot modify the files.
    // *   readwrite: read and write. Local disk mapping is available on cloud computers. You can read (copy) and write (modify) local files.
    // *   off (default): no permissions. Local disk mapping is unavailable on cloud computers.
    shared_ptr<string> localDrive_ {};
    // The maximum retry period for reconnecting to cloud computers when the cloud computers are disconnected due to none-human reasons. Valid values: 30 to 7200. Unit: seconds.
    shared_ptr<int32_t> maxReconnectTime_ {};
    // The name of the cloud computer policy.
    shared_ptr<string> name_ {};
    // Specifies whether to enable network redirection.
    // 
    // >  This parameter is in invitational preview for specific users and not available to the public.
    // 
    // Valid values:
    // 
    // *   off (default)
    // *   on
    shared_ptr<string> netRedirect_ {};
    // The ID of the cloud computer policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyGroupId_ {};
    // The cloud computer preemption feature.
    // 
    // >  To ensure user experience and data security, when a cloud computer is used by an end user, other end users cannot connect to the cloud computer. By default, this parameter is set to `off`, which cannot be modified.
    // 
    // Valid values:
    // 
    // *   off (default): Multiple end users cannot connect to the same cloud computer at the same time.
    shared_ptr<string> preemptLogin_ {};
    // The usernames that are allowed to connect to the cloud computer in use. You can specify up to five usernames.
    // 
    // >  To ensure user experience and data security, other end users cannot connect to the cloud computer that is used by an end user.
    shared_ptr<vector<string>> preemptLoginUser_ {};
    // The printer redirection feature.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    shared_ptr<string> printerRedirection_ {};
    // Specifies whether to enable the custom screen recording feature.
    // 
    // Valid values:
    // 
    // *   off (default)
    // *   on
    shared_ptr<string> recordContent_ {};
    // The duration in which the custom screen recording is valid. Default value: 30. Unit: days.
    shared_ptr<int64_t> recordContentExpires_ {};
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
    shared_ptr<string> recording_ {};
    // Specifies whether to record the audio files generated from cloud computers.
    // 
    // Valid values:
    // 
    // *   off: records only video files.
    // *   on: records video and audio files.
    shared_ptr<string> recordingAudio_ {};
    // The file length of the screen recording. Unit: minutes. Screen recording files are split based on the specified file length and uploaded to Object Storage Service (OSS) buckets. When a screen recording file reaches 300 MB in size, the system preferentially performs rolling update for the file.
    // 
    // Valid values:
    // 
    // *   10
    // *   20
    // *   30
    // *   60
    shared_ptr<int32_t> recordingDuration_ {};
    // The time when the screen recording stops. Specify the value in the HH:MM:SS format. The value is meaningful only when you set `Recording` to `PERIOD`.
    shared_ptr<string> recordingEndTime_ {};
    // The retention period of the screen recording file. Valid values: 1 to 180. Unit: days.
    shared_ptr<int64_t> recordingExpires_ {};
    // The frame rate of screen recording. Unit: fps.
    // 
    // Valid values:
    // 
    // *   2
    // *   5
    // *   10
    // *   15
    shared_ptr<int64_t> recordingFps_ {};
    // The time when the screen recording starts. Specify the value in the HH:MM:SS format. The value is meaningful only when you set the `Recording` parameter to `PERIOD`.
    shared_ptr<string> recordingStartTime_ {};
    // Specifies whether to enable the screen recording notification feature after end users log on to the Alibaba Cloud Workspace client.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    shared_ptr<string> recordingUserNotify_ {};
    // The notification content of screen recording. By default, this parameter is left empty.
    shared_ptr<string> recordingUserNotifyMessage_ {};
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the regions supported by Elastic Desktop Service (EDS).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The permissions on keyboard and mouse control during remote assistance.
    // 
    // Valid values:
    // 
    // *   optionalControl: By default, you are not granted the permissions. You can apply for the permissions.
    // *   fullControl: You are granted the full permissions.
    // *   disableControl: You are not granted the permissions.
    shared_ptr<string> remoteCoordinate_ {};
    // The client IP address whitelists that you want to delete.
    shared_ptr<vector<ModifyPolicyGroupRequest::RevokeAccessPolicyRule>> revokeAccessPolicyRule_ {};
    // The security group rules that you want to delete.
    shared_ptr<vector<ModifyPolicyGroupRequest::RevokeSecurityPolicyRule>> revokeSecurityPolicyRule_ {};
    // The effective scope of the policy.
    // 
    // Valid values:
    // 
    // *   IP: The policy takes effect based on the IP address.
    // *   GLOBAL: The policy takes effect globally.
    shared_ptr<string> scope_ {};
    // This parameter is required when the `Scope` parameter is set to `IP`.````
    shared_ptr<vector<string>> scopeValue_ {};
    // Specifies whether to enable the USB redirection feature.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    shared_ptr<string> usbRedirect_ {};
    // The USB redirection rules.
    shared_ptr<vector<ModifyPolicyGroupRequest::UsbSupplyRedirectRule>> usbSupplyRedirectRule_ {};
    // The multimedia redirection feature.
    shared_ptr<string> videoRedirect_ {};
    // The image display quality.
    // 
    // Valid values:
    // 
    // *   high: high-definition (HD)
    // *   low: smoothness
    // *   lossless: no quality loss
    // *   medium (default): scenario-specific adaptation
    shared_ptr<string> visualQuality_ {};
    // The watermarking feature.
    // 
    // Valid values:
    // 
    // *   blind: Invisible watermarks are applied.
    // *   off: The watermarking feature is disabled.
    // *   on: Visible watermarks are applied.
    shared_ptr<string> watermark_ {};
    // Specifies whether to enable the anti-screen photo feature for invisible watermarks.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    shared_ptr<string> watermarkAntiCam_ {};
    // The font color in red, green, and blue (RGB) of the watermark. Valid values: 0 to 16777215.
    shared_ptr<int32_t> watermarkColor_ {};
    // The watermark rotation. Valid values: -10 to -30.
    shared_ptr<double> watermarkDegree_ {};
    // The watermark font size. Valid values: 10 to 20.
    shared_ptr<int32_t> watermarkFontSize_ {};
    // The watermark font style.
    // 
    // Valid values:
    // 
    // *   plain
    // *   bold
    shared_ptr<string> watermarkFontStyle_ {};
    // The watermark enhancement feature.
    // 
    // Valid values:
    // 
    // *   high
    // *   low
    // *   medium
    shared_ptr<string> watermarkPower_ {};
    // The number of watermark rows.
    // 
    // >  This parameter is not available for public use.
    shared_ptr<int32_t> watermarkRowAmount_ {};
    // Specifies whether to enable the security priority feature for invisible watermarks.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    shared_ptr<string> watermarkSecurity_ {};
    // The watermark transparency.
    // 
    // Valid values:
    // 
    // *   LIGHT (default)
    // *   DARK
    // *   MIDDLE
    shared_ptr<string> watermarkTransparency_ {};
    // The watermark opacity. A larger value indicates more opaque watermarks. Valid values: 10 to 100.
    shared_ptr<int32_t> watermarkTransparencyValue_ {};
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
    shared_ptr<string> watermarkType_ {};
    // Specifies whether to display the Xiaoying AI Assistant entry in the DesktopAssistant menu.
    // 
    // Valid values:
    // 
    // *   off: does not display the Xiaoying AI Assistant entry in the DesktopAssistant menu.
    // *   on: displays the Xiaoying AI Assistant entry in the DesktopAssistant menu.
    shared_ptr<string> wyAssistant_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
