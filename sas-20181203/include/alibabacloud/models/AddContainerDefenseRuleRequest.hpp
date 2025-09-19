// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONTAINERDEFENSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCONTAINERDEFENSERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddContainerDefenseRuleRequestScope.hpp>
#include <alibabacloud/models/AddContainerDefenseRuleRequestWhitelist.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddContainerDefenseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddContainerDefenseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, AddContainerDefenseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    AddContainerDefenseRuleRequest() = default ;
    AddContainerDefenseRuleRequest(const AddContainerDefenseRuleRequest &) = default ;
    AddContainerDefenseRuleRequest(AddContainerDefenseRuleRequest &&) = default ;
    AddContainerDefenseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddContainerDefenseRuleRequest() = default ;
    AddContainerDefenseRuleRequest& operator=(const AddContainerDefenseRuleRequest &) = default ;
    AddContainerDefenseRuleRequest& operator=(AddContainerDefenseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->ruleAction_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->ruleSwitch_ != nullptr && this->ruleType_ != nullptr
        && this->scope_ != nullptr && this->whitelist_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddContainerDefenseRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t ruleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline AddContainerDefenseRuleRequest& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline AddContainerDefenseRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline AddContainerDefenseRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t ruleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline AddContainerDefenseRuleRequest& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline AddContainerDefenseRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const vector<AddContainerDefenseRuleRequestScope> & scope() const { DARABONBA_PTR_GET_CONST(scope_, vector<AddContainerDefenseRuleRequestScope>) };
    inline vector<AddContainerDefenseRuleRequestScope> scope() { DARABONBA_PTR_GET(scope_, vector<AddContainerDefenseRuleRequestScope>) };
    inline AddContainerDefenseRuleRequest& setScope(const vector<AddContainerDefenseRuleRequestScope> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline AddContainerDefenseRuleRequest& setScope(vector<AddContainerDefenseRuleRequestScope> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const AddContainerDefenseRuleRequestWhitelist & whitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, AddContainerDefenseRuleRequestWhitelist) };
    inline AddContainerDefenseRuleRequestWhitelist whitelist() { DARABONBA_PTR_GET(whitelist_, AddContainerDefenseRuleRequestWhitelist) };
    inline AddContainerDefenseRuleRequest& setWhitelist(const AddContainerDefenseRuleRequestWhitelist & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline AddContainerDefenseRuleRequest& setWhitelist(AddContainerDefenseRuleRequestWhitelist && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


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
    std::shared_ptr<vector<AddContainerDefenseRuleRequestScope>> scope_ = nullptr;
    // The whitelist.
    std::shared_ptr<AddContainerDefenseRuleRequestWhitelist> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
