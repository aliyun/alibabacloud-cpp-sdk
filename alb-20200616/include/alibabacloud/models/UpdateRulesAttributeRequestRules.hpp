// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULES_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActions.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRulesAttributeRequestRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRulesAttributeRequestRules& obj) { 
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RuleActions, ruleActions_);
      DARABONBA_PTR_TO_JSON(RuleConditions, ruleConditions_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRulesAttributeRequestRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RuleActions, ruleActions_);
      DARABONBA_PTR_FROM_JSON(RuleConditions, ruleConditions_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    UpdateRulesAttributeRequestRules() = default ;
    UpdateRulesAttributeRequestRules(const UpdateRulesAttributeRequestRules &) = default ;
    UpdateRulesAttributeRequestRules(UpdateRulesAttributeRequestRules &&) = default ;
    UpdateRulesAttributeRequestRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRulesAttributeRequestRules() = default ;
    UpdateRulesAttributeRequestRules& operator=(const UpdateRulesAttributeRequestRules &) = default ;
    UpdateRulesAttributeRequestRules& operator=(UpdateRulesAttributeRequestRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->priority_ != nullptr
        && this->ruleActions_ != nullptr && this->ruleConditions_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr; };
    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateRulesAttributeRequestRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // ruleActions Field Functions 
    bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
    void deleteRuleActions() { this->ruleActions_ = nullptr;};
    inline const vector<Models::UpdateRulesAttributeRequestRulesRuleActions> & ruleActions() const { DARABONBA_PTR_GET_CONST(ruleActions_, vector<Models::UpdateRulesAttributeRequestRulesRuleActions>) };
    inline vector<Models::UpdateRulesAttributeRequestRulesRuleActions> ruleActions() { DARABONBA_PTR_GET(ruleActions_, vector<Models::UpdateRulesAttributeRequestRulesRuleActions>) };
    inline UpdateRulesAttributeRequestRules& setRuleActions(const vector<Models::UpdateRulesAttributeRequestRulesRuleActions> & ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };
    inline UpdateRulesAttributeRequestRules& setRuleActions(vector<Models::UpdateRulesAttributeRequestRulesRuleActions> && ruleActions) { DARABONBA_PTR_SET_RVALUE(ruleActions_, ruleActions) };


    // ruleConditions Field Functions 
    bool hasRuleConditions() const { return this->ruleConditions_ != nullptr;};
    void deleteRuleConditions() { this->ruleConditions_ = nullptr;};
    inline const vector<Models::UpdateRulesAttributeRequestRulesRuleConditions> & ruleConditions() const { DARABONBA_PTR_GET_CONST(ruleConditions_, vector<Models::UpdateRulesAttributeRequestRulesRuleConditions>) };
    inline vector<Models::UpdateRulesAttributeRequestRulesRuleConditions> ruleConditions() { DARABONBA_PTR_GET(ruleConditions_, vector<Models::UpdateRulesAttributeRequestRulesRuleConditions>) };
    inline UpdateRulesAttributeRequestRules& setRuleConditions(const vector<Models::UpdateRulesAttributeRequestRulesRuleConditions> & ruleConditions) { DARABONBA_PTR_SET_VALUE(ruleConditions_, ruleConditions) };
    inline UpdateRulesAttributeRequestRules& setRuleConditions(vector<Models::UpdateRulesAttributeRequestRulesRuleConditions> && ruleConditions) { DARABONBA_PTR_SET_RVALUE(ruleConditions_, ruleConditions) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline UpdateRulesAttributeRequestRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateRulesAttributeRequestRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<vector<Models::UpdateRulesAttributeRequestRulesRuleActions>> ruleActions_ = nullptr;
    std::shared_ptr<vector<Models::UpdateRulesAttributeRequestRulesRuleConditions>> ruleConditions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
