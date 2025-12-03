// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyInstanceAttributeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteVpcIpBlock, deleteVpcIpBlock_);
      DARABONBA_PTR_TO_JSON(EgressIpv6Enable, egressIpv6Enable_);
      DARABONBA_PTR_TO_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_TO_JSON(IPV6Enabled, IPV6Enabled_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IntranetSegments, intranetSegments_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(ToConnectVpcIpBlock, toConnectVpcIpBlockShrink_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteVpcIpBlock, deleteVpcIpBlock_);
      DARABONBA_PTR_FROM_JSON(EgressIpv6Enable, egressIpv6Enable_);
      DARABONBA_PTR_FROM_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_FROM_JSON(IPV6Enabled, IPV6Enabled_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IntranetSegments, intranetSegments_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(ToConnectVpcIpBlock, toConnectVpcIpBlockShrink_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
    };
    ModifyInstanceAttributeShrinkRequest() = default ;
    ModifyInstanceAttributeShrinkRequest(const ModifyInstanceAttributeShrinkRequest &) = default ;
    ModifyInstanceAttributeShrinkRequest(ModifyInstanceAttributeShrinkRequest &&) = default ;
    ModifyInstanceAttributeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAttributeShrinkRequest() = default ;
    ModifyInstanceAttributeShrinkRequest& operator=(const ModifyInstanceAttributeShrinkRequest &) = default ;
    ModifyInstanceAttributeShrinkRequest& operator=(ModifyInstanceAttributeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteVpcIpBlock_ == nullptr
        && return this->egressIpv6Enable_ == nullptr && return this->httpsPolicy_ == nullptr && return this->IPV6Enabled_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->intranetSegments_ == nullptr && return this->maintainEndTime_ == nullptr && return this->maintainStartTime_ == nullptr && return this->toConnectVpcIpBlockShrink_ == nullptr && return this->token_ == nullptr
        && return this->vpcSlbIntranetEnable_ == nullptr; };
    // deleteVpcIpBlock Field Functions 
    bool hasDeleteVpcIpBlock() const { return this->deleteVpcIpBlock_ != nullptr;};
    void deleteDeleteVpcIpBlock() { this->deleteVpcIpBlock_ = nullptr;};
    inline string deleteVpcIpBlock() const { DARABONBA_PTR_GET_DEFAULT(deleteVpcIpBlock_, "") };
    inline ModifyInstanceAttributeShrinkRequest& setDeleteVpcIpBlock(string deleteVpcIpBlock) { DARABONBA_PTR_SET_VALUE(deleteVpcIpBlock_, deleteVpcIpBlock) };


    // egressIpv6Enable Field Functions 
    bool hasEgressIpv6Enable() const { return this->egressIpv6Enable_ != nullptr;};
    void deleteEgressIpv6Enable() { this->egressIpv6Enable_ = nullptr;};
    inline string egressIpv6Enable() const { DARABONBA_PTR_GET_DEFAULT(egressIpv6Enable_, "") };
    inline ModifyInstanceAttributeShrinkRequest& setEgressIpv6Enable(string egressIpv6Enable) { DARABONBA_PTR_SET_VALUE(egressIpv6Enable_, egressIpv6Enable) };


    // httpsPolicy Field Functions 
    bool hasHttpsPolicy() const { return this->httpsPolicy_ != nullptr;};
    void deleteHttpsPolicy() { this->httpsPolicy_ = nullptr;};
    inline string httpsPolicy() const { DARABONBA_PTR_GET_DEFAULT(httpsPolicy_, "") };
    inline ModifyInstanceAttributeShrinkRequest& setHttpsPolicy(string httpsPolicy) { DARABONBA_PTR_SET_VALUE(httpsPolicy_, httpsPolicy) };


    // IPV6Enabled Field Functions 
    bool hasIPV6Enabled() const { return this->IPV6Enabled_ != nullptr;};
    void deleteIPV6Enabled() { this->IPV6Enabled_ = nullptr;};
    inline string IPV6Enabled() const { DARABONBA_PTR_GET_DEFAULT(IPV6Enabled_, "") };
    inline ModifyInstanceAttributeShrinkRequest& setIPV6Enabled(string IPV6Enabled) { DARABONBA_PTR_SET_VALUE(IPV6Enabled_, IPV6Enabled) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceAttributeShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceAttributeShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // intranetSegments Field Functions 
    bool hasIntranetSegments() const { return this->intranetSegments_ != nullptr;};
    void deleteIntranetSegments() { this->intranetSegments_ = nullptr;};
    inline string intranetSegments() const { DARABONBA_PTR_GET_DEFAULT(intranetSegments_, "") };
    inline ModifyInstanceAttributeShrinkRequest& setIntranetSegments(string intranetSegments) { DARABONBA_PTR_SET_VALUE(intranetSegments_, intranetSegments) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string maintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline ModifyInstanceAttributeShrinkRequest& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string maintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline ModifyInstanceAttributeShrinkRequest& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // toConnectVpcIpBlockShrink Field Functions 
    bool hasToConnectVpcIpBlockShrink() const { return this->toConnectVpcIpBlockShrink_ != nullptr;};
    void deleteToConnectVpcIpBlockShrink() { this->toConnectVpcIpBlockShrink_ = nullptr;};
    inline string toConnectVpcIpBlockShrink() const { DARABONBA_PTR_GET_DEFAULT(toConnectVpcIpBlockShrink_, "") };
    inline ModifyInstanceAttributeShrinkRequest& setToConnectVpcIpBlockShrink(string toConnectVpcIpBlockShrink) { DARABONBA_PTR_SET_VALUE(toConnectVpcIpBlockShrink_, toConnectVpcIpBlockShrink) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ModifyInstanceAttributeShrinkRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vpcSlbIntranetEnable Field Functions 
    bool hasVpcSlbIntranetEnable() const { return this->vpcSlbIntranetEnable_ != nullptr;};
    void deleteVpcSlbIntranetEnable() { this->vpcSlbIntranetEnable_ = nullptr;};
    inline string vpcSlbIntranetEnable() const { DARABONBA_PTR_GET_DEFAULT(vpcSlbIntranetEnable_, "") };
    inline ModifyInstanceAttributeShrinkRequest& setVpcSlbIntranetEnable(string vpcSlbIntranetEnable) { DARABONBA_PTR_SET_VALUE(vpcSlbIntranetEnable_, vpcSlbIntranetEnable) };


  protected:
    // If delete VPC Ip block.
    std::shared_ptr<string> deleteVpcIpBlock_ = nullptr;
    // If enable outbound IPv6 Traffic.
    std::shared_ptr<string> egressIpv6Enable_ = nullptr;
    // The HTTPS policy.
    std::shared_ptr<string> httpsPolicy_ = nullptr;
    // If enable inbound IPv6 Traffic.
    std::shared_ptr<string> IPV6Enabled_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Instance Name
    std::shared_ptr<string> instanceName_ = nullptr;
    // Custom private CIDR block.
    std::shared_ptr<string> intranetSegments_ = nullptr;
    // Maintainable end time.
    std::shared_ptr<string> maintainEndTime_ = nullptr;
    // Maintainable start time.
    std::shared_ptr<string> maintainStartTime_ = nullptr;
    // The information about the CIDR block that API Gateway can use to access the virtual private cloud (VPC) of the backend service.
    std::shared_ptr<string> toConnectVpcIpBlockShrink_ = nullptr;
    // The token of the request.
    std::shared_ptr<string> token_ = nullptr;
    // Specifies whether to enable the self-calling domain name.
    std::shared_ptr<string> vpcSlbIntranetEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
