// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL7GLOBALRULERESPONSEBODYGLOBALRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL7GLOBALRULERESPONSEBODYGLOBALRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeL7GlobalRuleResponseBodyGlobalRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL7GlobalRuleResponseBodyGlobalRules& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ActionDefault, actionDefault_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL7GlobalRuleResponseBodyGlobalRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ActionDefault, actionDefault_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    DescribeL7GlobalRuleResponseBodyGlobalRules() = default ;
    DescribeL7GlobalRuleResponseBodyGlobalRules(const DescribeL7GlobalRuleResponseBodyGlobalRules &) = default ;
    DescribeL7GlobalRuleResponseBodyGlobalRules(DescribeL7GlobalRuleResponseBodyGlobalRules &&) = default ;
    DescribeL7GlobalRuleResponseBodyGlobalRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL7GlobalRuleResponseBodyGlobalRules() = default ;
    DescribeL7GlobalRuleResponseBodyGlobalRules& operator=(const DescribeL7GlobalRuleResponseBodyGlobalRules &) = default ;
    DescribeL7GlobalRuleResponseBodyGlobalRules& operator=(DescribeL7GlobalRuleResponseBodyGlobalRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->actionDefault_ != nullptr && this->description_ != nullptr && this->enabled_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeL7GlobalRuleResponseBodyGlobalRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actionDefault Field Functions 
    bool hasActionDefault() const { return this->actionDefault_ != nullptr;};
    void deleteActionDefault() { this->actionDefault_ = nullptr;};
    inline string actionDefault() const { DARABONBA_PTR_GET_DEFAULT(actionDefault_, "") };
    inline DescribeL7GlobalRuleResponseBodyGlobalRules& setActionDefault(string actionDefault) { DARABONBA_PTR_SET_VALUE(actionDefault_, actionDefault) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeL7GlobalRuleResponseBodyGlobalRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline int64_t enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0L) };
    inline DescribeL7GlobalRuleResponseBodyGlobalRules& setEnabled(int64_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeL7GlobalRuleResponseBodyGlobalRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeL7GlobalRuleResponseBodyGlobalRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> actionDefault_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> enabled_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
