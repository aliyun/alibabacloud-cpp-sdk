// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETNATFIREWALLRULEHITCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETNATFIREWALLRULEHITCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ResetNatFirewallRuleHitCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetNatFirewallRuleHitCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetNatFirewallRuleHitCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
    };
    ResetNatFirewallRuleHitCountRequest() = default ;
    ResetNatFirewallRuleHitCountRequest(const ResetNatFirewallRuleHitCountRequest &) = default ;
    ResetNatFirewallRuleHitCountRequest(ResetNatFirewallRuleHitCountRequest &&) = default ;
    ResetNatFirewallRuleHitCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetNatFirewallRuleHitCountRequest() = default ;
    ResetNatFirewallRuleHitCountRequest& operator=(const ResetNatFirewallRuleHitCountRequest &) = default ;
    ResetNatFirewallRuleHitCountRequest& operator=(ResetNatFirewallRuleHitCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclUuid_ == nullptr
        && return this->lang_ == nullptr && return this->natGatewayId_ == nullptr; };
    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string aclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline ResetNatFirewallRuleHitCountRequest& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ResetNatFirewallRuleHitCountRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ResetNatFirewallRuleHitCountRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


  protected:
    // The UUID of the access control policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> aclUuid_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the NAT gateway.
    std::shared_ptr<string> natGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
