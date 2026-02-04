// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDCDNWAFRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDCDNWAFRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ModifyDcdnWafRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDcdnWafRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDcdnWafRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
    };
    ModifyDcdnWafRuleRequest() = default ;
    ModifyDcdnWafRuleRequest(const ModifyDcdnWafRuleRequest &) = default ;
    ModifyDcdnWafRuleRequest(ModifyDcdnWafRuleRequest &&) = default ;
    ModifyDcdnWafRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDcdnWafRuleRequest() = default ;
    ModifyDcdnWafRuleRequest& operator=(const ModifyDcdnWafRuleRequest &) = default ;
    ModifyDcdnWafRuleRequest& operator=(ModifyDcdnWafRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleConfig_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr; };
    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string getRuleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline ModifyDcdnWafRuleRequest& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ModifyDcdnWafRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyDcdnWafRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline ModifyDcdnWafRuleRequest& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


  protected:
    // The new configurations of the protection rule.
    // 
    // > After you modify the configurations of the protection rule, the previous configurations are overwritten.
    shared_ptr<string> ruleConfig_ {};
    // The ID of the protection rule. You can specify only one ID in each request.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ruleId_ {};
    // The new name of the protection rule.
    shared_ptr<string> ruleName_ {};
    // The new status of the protection rule. Valid values:
    // 
    // *   **on**
    // *   **off**
    shared_ptr<string> ruleStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
