// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENATFIREWALLCONTROLPOLICYBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENATFIREWALLCONTROLPOLICYBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteNatFirewallControlPolicyBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNatFirewallControlPolicyBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclUuidList, aclUuidList_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNatFirewallControlPolicyBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclUuidList, aclUuidList_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
    };
    DeleteNatFirewallControlPolicyBatchRequest() = default ;
    DeleteNatFirewallControlPolicyBatchRequest(const DeleteNatFirewallControlPolicyBatchRequest &) = default ;
    DeleteNatFirewallControlPolicyBatchRequest(DeleteNatFirewallControlPolicyBatchRequest &&) = default ;
    DeleteNatFirewallControlPolicyBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNatFirewallControlPolicyBatchRequest() = default ;
    DeleteNatFirewallControlPolicyBatchRequest& operator=(const DeleteNatFirewallControlPolicyBatchRequest &) = default ;
    DeleteNatFirewallControlPolicyBatchRequest& operator=(DeleteNatFirewallControlPolicyBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclUuidList_ == nullptr
        && this->direction_ == nullptr && this->lang_ == nullptr && this->natGatewayId_ == nullptr; };
    // aclUuidList Field Functions 
    bool hasAclUuidList() const { return this->aclUuidList_ != nullptr;};
    void deleteAclUuidList() { this->aclUuidList_ = nullptr;};
    inline const vector<string> & getAclUuidList() const { DARABONBA_PTR_GET_CONST(aclUuidList_, vector<string>) };
    inline vector<string> getAclUuidList() { DARABONBA_PTR_GET(aclUuidList_, vector<string>) };
    inline DeleteNatFirewallControlPolicyBatchRequest& setAclUuidList(const vector<string> & aclUuidList) { DARABONBA_PTR_SET_VALUE(aclUuidList_, aclUuidList) };
    inline DeleteNatFirewallControlPolicyBatchRequest& setAclUuidList(vector<string> && aclUuidList) { DARABONBA_PTR_SET_RVALUE(aclUuidList_, aclUuidList) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DeleteNatFirewallControlPolicyBatchRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteNatFirewallControlPolicyBatchRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DeleteNatFirewallControlPolicyBatchRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


  protected:
    // The UUIDs of access control policies.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> aclUuidList_ {};
    // The direction of the traffic to which the access control policy applies. Valid values:
    // 
    // *   **out**: outbound traffic
    shared_ptr<string> direction_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The ID of the NAT gateway.
    // 
    // This parameter is required.
    shared_ptr<string> natGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
