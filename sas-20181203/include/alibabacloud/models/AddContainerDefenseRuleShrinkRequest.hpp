// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONTAINERDEFENSERULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCONTAINERDEFENSERULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddContainerDefenseRuleShrinkRequestScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddContainerDefenseRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddContainerDefenseRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelistShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddContainerDefenseRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelistShrink_);
    };
    AddContainerDefenseRuleShrinkRequest() = default ;
    AddContainerDefenseRuleShrinkRequest(const AddContainerDefenseRuleShrinkRequest &) = default ;
    AddContainerDefenseRuleShrinkRequest(AddContainerDefenseRuleShrinkRequest &&) = default ;
    AddContainerDefenseRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddContainerDefenseRuleShrinkRequest() = default ;
    AddContainerDefenseRuleShrinkRequest& operator=(const AddContainerDefenseRuleShrinkRequest &) = default ;
    AddContainerDefenseRuleShrinkRequest& operator=(AddContainerDefenseRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->ruleAction_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->ruleSwitch_ != nullptr && this->ruleType_ != nullptr
        && this->scope_ != nullptr && this->whitelistShrink_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddContainerDefenseRuleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t ruleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline AddContainerDefenseRuleShrinkRequest& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline AddContainerDefenseRuleShrinkRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline AddContainerDefenseRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t ruleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline AddContainerDefenseRuleShrinkRequest& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline AddContainerDefenseRuleShrinkRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const vector<AddContainerDefenseRuleShrinkRequestScope> & scope() const { DARABONBA_PTR_GET_CONST(scope_, vector<AddContainerDefenseRuleShrinkRequestScope>) };
    inline vector<AddContainerDefenseRuleShrinkRequestScope> scope() { DARABONBA_PTR_GET(scope_, vector<AddContainerDefenseRuleShrinkRequestScope>) };
    inline AddContainerDefenseRuleShrinkRequest& setScope(const vector<AddContainerDefenseRuleShrinkRequestScope> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline AddContainerDefenseRuleShrinkRequest& setScope(vector<AddContainerDefenseRuleShrinkRequestScope> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    // whitelistShrink Field Functions 
    bool hasWhitelistShrink() const { return this->whitelistShrink_ != nullptr;};
    void deleteWhitelistShrink() { this->whitelistShrink_ = nullptr;};
    inline string whitelistShrink() const { DARABONBA_PTR_GET_DEFAULT(whitelistShrink_, "") };
    inline AddContainerDefenseRuleShrinkRequest& setWhitelistShrink(string whitelistShrink) { DARABONBA_PTR_SET_VALUE(whitelistShrink_, whitelistShrink) };


  protected:
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The action that is performed when the rule is hit. Valid values:
    // 
    // *   **1**: alert
    // *   **2**: block
    std::shared_ptr<int32_t> ruleAction_ = nullptr;
    // The ID of the rule. You do not need to manually specify the ID.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The switch of the rule. Valid values:
    // 
    // *   **0**: off
    // *   **1**: on
    std::shared_ptr<int32_t> ruleSwitch_ = nullptr;
    // The rule type. Valid values:
    // 
    // *   2: user-defined rules
    // 
    // > Only the value 2 is supported.
    std::shared_ptr<int32_t> ruleType_ = nullptr;
    // The scope.
    std::shared_ptr<vector<AddContainerDefenseRuleShrinkRequestScope>> scope_ = nullptr;
    // The whitelist.
    std::shared_ptr<string> whitelistShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
