// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIPSRULESTODEFAULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIPSRULESTODEFAULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyIpsRulesToDefaultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIpsRulesToDefaultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackApp, attackApp_);
      DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIpsRulesToDefaultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackApp, attackApp_);
      DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    ModifyIpsRulesToDefaultRequest() = default ;
    ModifyIpsRulesToDefaultRequest(const ModifyIpsRulesToDefaultRequest &) = default ;
    ModifyIpsRulesToDefaultRequest(ModifyIpsRulesToDefaultRequest &&) = default ;
    ModifyIpsRulesToDefaultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIpsRulesToDefaultRequest() = default ;
    ModifyIpsRulesToDefaultRequest& operator=(const ModifyIpsRulesToDefaultRequest &) = default ;
    ModifyIpsRulesToDefaultRequest& operator=(ModifyIpsRulesToDefaultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackApp_ == nullptr
        && this->firewallType_ == nullptr && this->lang_ == nullptr && this->ruleType_ == nullptr && this->rules_ == nullptr && this->sourceIp_ == nullptr; };
    // attackApp Field Functions 
    bool hasAttackApp() const { return this->attackApp_ != nullptr;};
    void deleteAttackApp() { this->attackApp_ = nullptr;};
    inline string getAttackApp() const { DARABONBA_PTR_GET_DEFAULT(attackApp_, "") };
    inline ModifyIpsRulesToDefaultRequest& setAttackApp(string attackApp) { DARABONBA_PTR_SET_VALUE(attackApp_, attackApp) };


    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline string getFirewallType() const { DARABONBA_PTR_GET_DEFAULT(firewallType_, "") };
    inline ModifyIpsRulesToDefaultRequest& setFirewallType(string firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyIpsRulesToDefaultRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ModifyIpsRulesToDefaultRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline ModifyIpsRulesToDefaultRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyIpsRulesToDefaultRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    shared_ptr<string> attackApp_ {};
    shared_ptr<string> firewallType_ {};
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<string> ruleType_ {};
    shared_ptr<string> rules_ {};
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
