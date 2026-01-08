// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETVPCFIREWALLRULEHITCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETVPCFIREWALLRULEHITCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ResetVpcFirewallRuleHitCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetVpcFirewallRuleHitCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, ResetVpcFirewallRuleHitCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    ResetVpcFirewallRuleHitCountRequest() = default ;
    ResetVpcFirewallRuleHitCountRequest(const ResetVpcFirewallRuleHitCountRequest &) = default ;
    ResetVpcFirewallRuleHitCountRequest(ResetVpcFirewallRuleHitCountRequest &&) = default ;
    ResetVpcFirewallRuleHitCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetVpcFirewallRuleHitCountRequest() = default ;
    ResetVpcFirewallRuleHitCountRequest& operator=(const ResetVpcFirewallRuleHitCountRequest &) = default ;
    ResetVpcFirewallRuleHitCountRequest& operator=(ResetVpcFirewallRuleHitCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclUuid_ == nullptr
        && this->lang_ == nullptr; };
    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string getAclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline ResetVpcFirewallRuleHitCountRequest& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ResetVpcFirewallRuleHitCountRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the access control policy.
    // 
    // This parameter is required.
    shared_ptr<string> aclUuid_ {};
    // The natural language of the request and response. 
    // 
    // Valid values:
    // 
    // - **zh**: Chinese (default)
    // - **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
