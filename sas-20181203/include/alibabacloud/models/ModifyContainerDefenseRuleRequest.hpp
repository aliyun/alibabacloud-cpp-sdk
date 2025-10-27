// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTAINERDEFENSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTAINERDEFENSERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyContainerDefenseRuleRequestScope.hpp>
#include <alibabacloud/models/ModifyContainerDefenseRuleRequestWhitelist.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyContainerDefenseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyContainerDefenseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyContainerDefenseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    ModifyContainerDefenseRuleRequest() = default ;
    ModifyContainerDefenseRuleRequest(const ModifyContainerDefenseRuleRequest &) = default ;
    ModifyContainerDefenseRuleRequest(ModifyContainerDefenseRuleRequest &&) = default ;
    ModifyContainerDefenseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyContainerDefenseRuleRequest() = default ;
    ModifyContainerDefenseRuleRequest& operator=(const ModifyContainerDefenseRuleRequest &) = default ;
    ModifyContainerDefenseRuleRequest& operator=(ModifyContainerDefenseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->ruleAction_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->ruleSwitch_ == nullptr && return this->ruleType_ == nullptr
        && return this->scope_ == nullptr && return this->whitelist_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyContainerDefenseRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t ruleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline ModifyContainerDefenseRuleRequest& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ModifyContainerDefenseRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyContainerDefenseRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t ruleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline ModifyContainerDefenseRuleRequest& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline ModifyContainerDefenseRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const vector<ModifyContainerDefenseRuleRequestScope> & scope() const { DARABONBA_PTR_GET_CONST(scope_, vector<ModifyContainerDefenseRuleRequestScope>) };
    inline vector<ModifyContainerDefenseRuleRequestScope> scope() { DARABONBA_PTR_GET(scope_, vector<ModifyContainerDefenseRuleRequestScope>) };
    inline ModifyContainerDefenseRuleRequest& setScope(const vector<ModifyContainerDefenseRuleRequestScope> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline ModifyContainerDefenseRuleRequest& setScope(vector<ModifyContainerDefenseRuleRequestScope> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const ModifyContainerDefenseRuleRequestWhitelist & whitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, ModifyContainerDefenseRuleRequestWhitelist) };
    inline ModifyContainerDefenseRuleRequestWhitelist whitelist() { DARABONBA_PTR_GET(whitelist_, ModifyContainerDefenseRuleRequestWhitelist) };
    inline ModifyContainerDefenseRuleRequest& setWhitelist(const ModifyContainerDefenseRuleRequestWhitelist & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline ModifyContainerDefenseRuleRequest& setWhitelist(ModifyContainerDefenseRuleRequestWhitelist && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The action specified in the rule. Valid values:
    // 
    // *   **1**: alert
    // *   **2**: block
    std::shared_ptr<int32_t> ruleAction_ = nullptr;
    // The ID of the rule.
    // 
    // >  You can call the [ListContainerDefenseRule](https://help.aliyun.com/document_detail/2590599.html) operation to query the IDs of rules.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> ruleSwitch_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   1: system rule
    // *   2: custom rule
    std::shared_ptr<int32_t> ruleType_ = nullptr;
    // The effective scope of the rule.
    std::shared_ptr<vector<ModifyContainerDefenseRuleRequestScope>> scope_ = nullptr;
    // The whitelist.
    std::shared_ptr<ModifyContainerDefenseRuleRequestWhitelist> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
