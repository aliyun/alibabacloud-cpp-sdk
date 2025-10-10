// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESREQUESTRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESREQUESTRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActions.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleConditions.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRulesRequestRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesRequestRules& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RuleActions, ruleActions_);
      DARABONBA_PTR_TO_JSON(RuleConditions, ruleConditions_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesRequestRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RuleActions, ruleActions_);
      DARABONBA_PTR_FROM_JSON(RuleConditions, ruleConditions_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateRulesRequestRules() = default ;
    CreateRulesRequestRules(const CreateRulesRequestRules &) = default ;
    CreateRulesRequestRules(CreateRulesRequestRules &&) = default ;
    CreateRulesRequestRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesRequestRules() = default ;
    CreateRulesRequestRules& operator=(const CreateRulesRequestRules &) = default ;
    CreateRulesRequestRules& operator=(CreateRulesRequestRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->direction_ != nullptr
        && this->priority_ != nullptr && this->ruleActions_ != nullptr && this->ruleConditions_ != nullptr && this->ruleName_ != nullptr && this->tag_ != nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline CreateRulesRequestRules& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateRulesRequestRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // ruleActions Field Functions 
    bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
    void deleteRuleActions() { this->ruleActions_ = nullptr;};
    inline const vector<Models::CreateRulesRequestRulesRuleActions> & ruleActions() const { DARABONBA_PTR_GET_CONST(ruleActions_, vector<Models::CreateRulesRequestRulesRuleActions>) };
    inline vector<Models::CreateRulesRequestRulesRuleActions> ruleActions() { DARABONBA_PTR_GET(ruleActions_, vector<Models::CreateRulesRequestRulesRuleActions>) };
    inline CreateRulesRequestRules& setRuleActions(const vector<Models::CreateRulesRequestRulesRuleActions> & ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };
    inline CreateRulesRequestRules& setRuleActions(vector<Models::CreateRulesRequestRulesRuleActions> && ruleActions) { DARABONBA_PTR_SET_RVALUE(ruleActions_, ruleActions) };


    // ruleConditions Field Functions 
    bool hasRuleConditions() const { return this->ruleConditions_ != nullptr;};
    void deleteRuleConditions() { this->ruleConditions_ = nullptr;};
    inline const vector<Models::CreateRulesRequestRulesRuleConditions> & ruleConditions() const { DARABONBA_PTR_GET_CONST(ruleConditions_, vector<Models::CreateRulesRequestRulesRuleConditions>) };
    inline vector<Models::CreateRulesRequestRulesRuleConditions> ruleConditions() { DARABONBA_PTR_GET(ruleConditions_, vector<Models::CreateRulesRequestRulesRuleConditions>) };
    inline CreateRulesRequestRules& setRuleConditions(const vector<Models::CreateRulesRequestRulesRuleConditions> & ruleConditions) { DARABONBA_PTR_SET_VALUE(ruleConditions_, ruleConditions) };
    inline CreateRulesRequestRules& setRuleConditions(vector<Models::CreateRulesRequestRulesRuleConditions> && ruleConditions) { DARABONBA_PTR_SET_RVALUE(ruleConditions_, ruleConditions) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateRulesRequestRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::CreateRulesRequestRulesTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::CreateRulesRequestRulesTag>) };
    inline vector<Models::CreateRulesRequestRulesTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::CreateRulesRequestRulesTag>) };
    inline CreateRulesRequestRules& setTag(const vector<Models::CreateRulesRequestRulesTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateRulesRequestRules& setTag(vector<Models::CreateRulesRequestRulesTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<string> direction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateRulesRequestRulesRuleActions>> ruleActions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateRulesRequestRulesRuleConditions>> ruleConditions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<vector<Models::CreateRulesRequestRulesTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
