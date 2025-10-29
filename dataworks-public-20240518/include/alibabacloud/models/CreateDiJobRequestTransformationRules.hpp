// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTTRANSFORMATIONRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTTRANSFORMATIONRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIJobRequestTransformationRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequestTransformationRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleActionType, ruleActionType_);
      DARABONBA_PTR_TO_JSON(RuleExpression, ruleExpression_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleTargetType, ruleTargetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequestTransformationRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleActionType, ruleActionType_);
      DARABONBA_PTR_FROM_JSON(RuleExpression, ruleExpression_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleTargetType, ruleTargetType_);
    };
    CreateDIJobRequestTransformationRules() = default ;
    CreateDIJobRequestTransformationRules(const CreateDIJobRequestTransformationRules &) = default ;
    CreateDIJobRequestTransformationRules(CreateDIJobRequestTransformationRules &&) = default ;
    CreateDIJobRequestTransformationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequestTransformationRules() = default ;
    CreateDIJobRequestTransformationRules& operator=(const CreateDIJobRequestTransformationRules &) = default ;
    CreateDIJobRequestTransformationRules& operator=(CreateDIJobRequestTransformationRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleActionType_ == nullptr
        && return this->ruleExpression_ == nullptr && return this->ruleName_ == nullptr && return this->ruleTargetType_ == nullptr; };
    // ruleActionType Field Functions 
    bool hasRuleActionType() const { return this->ruleActionType_ != nullptr;};
    void deleteRuleActionType() { this->ruleActionType_ = nullptr;};
    inline string ruleActionType() const { DARABONBA_PTR_GET_DEFAULT(ruleActionType_, "") };
    inline CreateDIJobRequestTransformationRules& setRuleActionType(string ruleActionType) { DARABONBA_PTR_SET_VALUE(ruleActionType_, ruleActionType) };


    // ruleExpression Field Functions 
    bool hasRuleExpression() const { return this->ruleExpression_ != nullptr;};
    void deleteRuleExpression() { this->ruleExpression_ = nullptr;};
    inline string ruleExpression() const { DARABONBA_PTR_GET_DEFAULT(ruleExpression_, "") };
    inline CreateDIJobRequestTransformationRules& setRuleExpression(string ruleExpression) { DARABONBA_PTR_SET_VALUE(ruleExpression_, ruleExpression) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateDIJobRequestTransformationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleTargetType Field Functions 
    bool hasRuleTargetType() const { return this->ruleTargetType_ != nullptr;};
    void deleteRuleTargetType() { this->ruleTargetType_ = nullptr;};
    inline string ruleTargetType() const { DARABONBA_PTR_GET_DEFAULT(ruleTargetType_, "") };
    inline CreateDIJobRequestTransformationRules& setRuleTargetType(string ruleTargetType) { DARABONBA_PTR_SET_VALUE(ruleTargetType_, ruleTargetType) };


  protected:
    std::shared_ptr<string> ruleActionType_ = nullptr;
    std::shared_ptr<string> ruleExpression_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> ruleTargetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
