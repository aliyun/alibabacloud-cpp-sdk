// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNATFIREWALLCONTROLPOLICYPOSITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNATFIREWALLCONTROLPOLICYPOSITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyNatFirewallControlPolicyPositionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNatFirewallControlPolicyPositionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NewOrder, newOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNatFirewallControlPolicyPositionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NewOrder, newOrder_);
    };
    ModifyNatFirewallControlPolicyPositionRequest() = default ;
    ModifyNatFirewallControlPolicyPositionRequest(const ModifyNatFirewallControlPolicyPositionRequest &) = default ;
    ModifyNatFirewallControlPolicyPositionRequest(ModifyNatFirewallControlPolicyPositionRequest &&) = default ;
    ModifyNatFirewallControlPolicyPositionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNatFirewallControlPolicyPositionRequest() = default ;
    ModifyNatFirewallControlPolicyPositionRequest& operator=(const ModifyNatFirewallControlPolicyPositionRequest &) = default ;
    ModifyNatFirewallControlPolicyPositionRequest& operator=(ModifyNatFirewallControlPolicyPositionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclUuid_ == nullptr
        && return this->direction_ == nullptr && return this->lang_ == nullptr && return this->natGatewayId_ == nullptr && return this->newOrder_ == nullptr; };
    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string aclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline ModifyNatFirewallControlPolicyPositionRequest& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModifyNatFirewallControlPolicyPositionRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyNatFirewallControlPolicyPositionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ModifyNatFirewallControlPolicyPositionRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // newOrder Field Functions 
    bool hasNewOrder() const { return this->newOrder_ != nullptr;};
    void deleteNewOrder() { this->newOrder_ = nullptr;};
    inline int32_t newOrder() const { DARABONBA_PTR_GET_DEFAULT(newOrder_, 0) };
    inline ModifyNatFirewallControlPolicyPositionRequest& setNewOrder(int32_t newOrder) { DARABONBA_PTR_SET_VALUE(newOrder_, newOrder) };


  protected:
    // The UUID of the access control policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> aclUuid_ = nullptr;
    // The direction of the traffic to which the access control policy applies.
    // 
    // *   Set the value to **out**.
    std::shared_ptr<string> direction_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the NAT gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The new priority of the IPv4 access control policy. You must specify a numeric value for this parameter. The value 1 indicates the highest priority. A larger value indicates a lower priority.
    // 
    // > Make sure that the value of this parameter is within the priority range of existing IPv4 access control policies. Otherwise, an error occurs when you call this operation.
    // 
    // Before you call this operation, we recommend that you call the DescribeNatFirewallPolicyPriorUsed operation to query the priority range of the IPv4 access control policies in the specified traffic direction.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> newOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
