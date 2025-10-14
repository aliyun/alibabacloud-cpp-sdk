// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGROOMRULESRESPONSEBODYWAITINGROOMRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGROOMRULESRESPONSEBODYWAITINGROOMRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWaitingRoomRulesResponseBodyWaitingRoomRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingRoomRulesResponseBodyWaitingRoomRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(WaitingRoomRuleId, waitingRoomRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingRoomRulesResponseBodyWaitingRoomRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomRuleId, waitingRoomRuleId_);
    };
    ListWaitingRoomRulesResponseBodyWaitingRoomRules() = default ;
    ListWaitingRoomRulesResponseBodyWaitingRoomRules(const ListWaitingRoomRulesResponseBodyWaitingRoomRules &) = default ;
    ListWaitingRoomRulesResponseBodyWaitingRoomRules(ListWaitingRoomRulesResponseBodyWaitingRoomRules &&) = default ;
    ListWaitingRoomRulesResponseBodyWaitingRoomRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingRoomRulesResponseBodyWaitingRoomRules() = default ;
    ListWaitingRoomRulesResponseBodyWaitingRoomRules& operator=(const ListWaitingRoomRulesResponseBodyWaitingRoomRules &) = default ;
    ListWaitingRoomRulesResponseBodyWaitingRoomRules& operator=(ListWaitingRoomRulesResponseBodyWaitingRoomRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rule_ == nullptr
        && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr && return this->waitingRoomRuleId_ == nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline ListWaitingRoomRulesResponseBodyWaitingRoomRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline ListWaitingRoomRulesResponseBodyWaitingRoomRules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListWaitingRoomRulesResponseBodyWaitingRoomRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // waitingRoomRuleId Field Functions 
    bool hasWaitingRoomRuleId() const { return this->waitingRoomRuleId_ != nullptr;};
    void deleteWaitingRoomRuleId() { this->waitingRoomRuleId_ = nullptr;};
    inline int64_t waitingRoomRuleId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomRuleId_, 0L) };
    inline ListWaitingRoomRulesResponseBodyWaitingRoomRules& setWaitingRoomRuleId(int64_t waitingRoomRuleId) { DARABONBA_PTR_SET_VALUE(waitingRoomRuleId_, waitingRoomRuleId) };


  protected:
    // Rule content, using conditional expressions to match user requests. This parameter does not need to be set when adding global configuration. There are two usage scenarios:
    // - Match all incoming requests: set the value to true
    // - Match specific requests: set the value to a custom expression, e.g., (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter does not need to be set when adding global configuration. Value range:
    // - on: enabled.
    // - off: disabled.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter does not need to be set when adding global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule ID.
    std::shared_ptr<int64_t> waitingRoomRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
