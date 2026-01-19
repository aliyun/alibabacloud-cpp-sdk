// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyInstanceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteVpcIpBlock, deleteVpcIpBlock_);
      DARABONBA_PTR_TO_JSON(EgressIpv6Enable, egressIpv6Enable_);
      DARABONBA_PTR_TO_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_TO_JSON(IPV6Enabled, IPV6Enabled_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IntranetSegments, intranetSegments_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(ToConnectVpcIpBlock, toConnectVpcIpBlock_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteVpcIpBlock, deleteVpcIpBlock_);
      DARABONBA_PTR_FROM_JSON(EgressIpv6Enable, egressIpv6Enable_);
      DARABONBA_PTR_FROM_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_FROM_JSON(IPV6Enabled, IPV6Enabled_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IntranetSegments, intranetSegments_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(ToConnectVpcIpBlock, toConnectVpcIpBlock_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
    };
    ModifyInstanceAttributeRequest() = default ;
    ModifyInstanceAttributeRequest(const ModifyInstanceAttributeRequest &) = default ;
    ModifyInstanceAttributeRequest(ModifyInstanceAttributeRequest &&) = default ;
    ModifyInstanceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAttributeRequest() = default ;
    ModifyInstanceAttributeRequest& operator=(const ModifyInstanceAttributeRequest &) = default ;
    ModifyInstanceAttributeRequest& operator=(ModifyInstanceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ToConnectVpcIpBlock : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ToConnectVpcIpBlock& obj) { 
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(Customized, customized_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ToConnectVpcIpBlock& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(Customized, customized_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ToConnectVpcIpBlock() = default ;
      ToConnectVpcIpBlock(const ToConnectVpcIpBlock &) = default ;
      ToConnectVpcIpBlock(ToConnectVpcIpBlock &&) = default ;
      ToConnectVpcIpBlock(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ToConnectVpcIpBlock() = default ;
      ToConnectVpcIpBlock& operator=(const ToConnectVpcIpBlock &) = default ;
      ToConnectVpcIpBlock& operator=(ToConnectVpcIpBlock &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->customized_ == nullptr && this->vswitchId_ == nullptr && this->zoneId_ == nullptr; };
      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline ToConnectVpcIpBlock& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // customized Field Functions 
      bool hasCustomized() const { return this->customized_ != nullptr;};
      void deleteCustomized() { this->customized_ = nullptr;};
      inline bool getCustomized() const { DARABONBA_PTR_GET_DEFAULT(customized_, false) };
      inline ToConnectVpcIpBlock& setCustomized(bool customized) { DARABONBA_PTR_SET_VALUE(customized_, customized) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline ToConnectVpcIpBlock& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ToConnectVpcIpBlock& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The CIDR block of the VSwitch.
      shared_ptr<string> cidrBlock_ {};
      // Specifies whether the CIDR block is a custom CIDR block.
      shared_ptr<bool> customized_ {};
      // The vSwitch ID.
      shared_ptr<string> vswitchId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->deleteVpcIpBlock_ == nullptr
        && this->egressIpv6Enable_ == nullptr && this->httpsPolicy_ == nullptr && this->IPV6Enabled_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->intranetSegments_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->toConnectVpcIpBlock_ == nullptr && this->token_ == nullptr
        && this->vpcSlbIntranetEnable_ == nullptr; };
    // deleteVpcIpBlock Field Functions 
    bool hasDeleteVpcIpBlock() const { return this->deleteVpcIpBlock_ != nullptr;};
    void deleteDeleteVpcIpBlock() { this->deleteVpcIpBlock_ = nullptr;};
    inline string getDeleteVpcIpBlock() const { DARABONBA_PTR_GET_DEFAULT(deleteVpcIpBlock_, "") };
    inline ModifyInstanceAttributeRequest& setDeleteVpcIpBlock(string deleteVpcIpBlock) { DARABONBA_PTR_SET_VALUE(deleteVpcIpBlock_, deleteVpcIpBlock) };


    // egressIpv6Enable Field Functions 
    bool hasEgressIpv6Enable() const { return this->egressIpv6Enable_ != nullptr;};
    void deleteEgressIpv6Enable() { this->egressIpv6Enable_ = nullptr;};
    inline string getEgressIpv6Enable() const { DARABONBA_PTR_GET_DEFAULT(egressIpv6Enable_, "") };
    inline ModifyInstanceAttributeRequest& setEgressIpv6Enable(string egressIpv6Enable) { DARABONBA_PTR_SET_VALUE(egressIpv6Enable_, egressIpv6Enable) };


    // httpsPolicy Field Functions 
    bool hasHttpsPolicy() const { return this->httpsPolicy_ != nullptr;};
    void deleteHttpsPolicy() { this->httpsPolicy_ = nullptr;};
    inline string getHttpsPolicy() const { DARABONBA_PTR_GET_DEFAULT(httpsPolicy_, "") };
    inline ModifyInstanceAttributeRequest& setHttpsPolicy(string httpsPolicy) { DARABONBA_PTR_SET_VALUE(httpsPolicy_, httpsPolicy) };


    // IPV6Enabled Field Functions 
    bool hasIPV6Enabled() const { return this->IPV6Enabled_ != nullptr;};
    void deleteIPV6Enabled() { this->IPV6Enabled_ = nullptr;};
    inline string getIPV6Enabled() const { DARABONBA_PTR_GET_DEFAULT(IPV6Enabled_, "") };
    inline ModifyInstanceAttributeRequest& setIPV6Enabled(string IPV6Enabled) { DARABONBA_PTR_SET_VALUE(IPV6Enabled_, IPV6Enabled) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceAttributeRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // intranetSegments Field Functions 
    bool hasIntranetSegments() const { return this->intranetSegments_ != nullptr;};
    void deleteIntranetSegments() { this->intranetSegments_ = nullptr;};
    inline string getIntranetSegments() const { DARABONBA_PTR_GET_DEFAULT(intranetSegments_, "") };
    inline ModifyInstanceAttributeRequest& setIntranetSegments(string intranetSegments) { DARABONBA_PTR_SET_VALUE(intranetSegments_, intranetSegments) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline ModifyInstanceAttributeRequest& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline ModifyInstanceAttributeRequest& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // toConnectVpcIpBlock Field Functions 
    bool hasToConnectVpcIpBlock() const { return this->toConnectVpcIpBlock_ != nullptr;};
    void deleteToConnectVpcIpBlock() { this->toConnectVpcIpBlock_ = nullptr;};
    inline const ModifyInstanceAttributeRequest::ToConnectVpcIpBlock & getToConnectVpcIpBlock() const { DARABONBA_PTR_GET_CONST(toConnectVpcIpBlock_, ModifyInstanceAttributeRequest::ToConnectVpcIpBlock) };
    inline ModifyInstanceAttributeRequest::ToConnectVpcIpBlock getToConnectVpcIpBlock() { DARABONBA_PTR_GET(toConnectVpcIpBlock_, ModifyInstanceAttributeRequest::ToConnectVpcIpBlock) };
    inline ModifyInstanceAttributeRequest& setToConnectVpcIpBlock(const ModifyInstanceAttributeRequest::ToConnectVpcIpBlock & toConnectVpcIpBlock) { DARABONBA_PTR_SET_VALUE(toConnectVpcIpBlock_, toConnectVpcIpBlock) };
    inline ModifyInstanceAttributeRequest& setToConnectVpcIpBlock(ModifyInstanceAttributeRequest::ToConnectVpcIpBlock && toConnectVpcIpBlock) { DARABONBA_PTR_SET_RVALUE(toConnectVpcIpBlock_, toConnectVpcIpBlock) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ModifyInstanceAttributeRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vpcSlbIntranetEnable Field Functions 
    bool hasVpcSlbIntranetEnable() const { return this->vpcSlbIntranetEnable_ != nullptr;};
    void deleteVpcSlbIntranetEnable() { this->vpcSlbIntranetEnable_ = nullptr;};
    inline string getVpcSlbIntranetEnable() const { DARABONBA_PTR_GET_DEFAULT(vpcSlbIntranetEnable_, "") };
    inline ModifyInstanceAttributeRequest& setVpcSlbIntranetEnable(string vpcSlbIntranetEnable) { DARABONBA_PTR_SET_VALUE(vpcSlbIntranetEnable_, vpcSlbIntranetEnable) };


  protected:
    // If delete VPC Ip block.
    shared_ptr<string> deleteVpcIpBlock_ {};
    // If enable outbound IPv6 Traffic.
    shared_ptr<string> egressIpv6Enable_ {};
    // The HTTPS policy.
    shared_ptr<string> httpsPolicy_ {};
    // If enable inbound IPv6 Traffic.
    shared_ptr<string> IPV6Enabled_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Instance Name
    shared_ptr<string> instanceName_ {};
    // Custom private CIDR block.
    shared_ptr<string> intranetSegments_ {};
    // Maintainable end time.
    shared_ptr<string> maintainEndTime_ {};
    // Maintainable start time.
    shared_ptr<string> maintainStartTime_ {};
    // The information about the CIDR block that API Gateway can use to access the virtual private cloud (VPC) of the backend service.
    shared_ptr<ModifyInstanceAttributeRequest::ToConnectVpcIpBlock> toConnectVpcIpBlock_ {};
    // The token of the request.
    shared_ptr<string> token_ {};
    // Specifies whether to enable the self-calling domain name.
    shared_ptr<string> vpcSlbIntranetEnable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
