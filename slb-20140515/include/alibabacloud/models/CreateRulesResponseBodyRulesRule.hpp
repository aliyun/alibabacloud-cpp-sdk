// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESRESPONSEBODYRULESRULE_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESRESPONSEBODYRULESRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateRulesResponseBodyRulesRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesResponseBodyRulesRule& obj) { 
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesResponseBodyRulesRule& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    CreateRulesResponseBodyRulesRule() = default ;
    CreateRulesResponseBodyRulesRule(const CreateRulesResponseBodyRulesRule &) = default ;
    CreateRulesResponseBodyRulesRule(CreateRulesResponseBodyRulesRule &&) = default ;
    CreateRulesResponseBodyRulesRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesResponseBodyRulesRule() = default ;
    CreateRulesResponseBodyRulesRule& operator=(const CreateRulesResponseBodyRulesRule &) = default ;
    CreateRulesResponseBodyRulesRule& operator=(CreateRulesResponseBodyRulesRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleId_ == nullptr
        && return this->ruleName_ == nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline CreateRulesResponseBodyRulesRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateRulesResponseBodyRulesRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The forwarding rule ID.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the forwarding rule.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
