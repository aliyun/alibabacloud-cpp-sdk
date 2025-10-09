// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTTABLEMAPPINGSTRANSFORMATIONRULES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTTABLEMAPPINGSTRANSFORMATIONRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDIJobRequestTableMappingsTransformationRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIJobRequestTableMappingsTransformationRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleActionType, ruleActionType_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleTargetType, ruleTargetType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIJobRequestTableMappingsTransformationRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleActionType, ruleActionType_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleTargetType, ruleTargetType_);
    };
    UpdateDIJobRequestTableMappingsTransformationRules() = default ;
    UpdateDIJobRequestTableMappingsTransformationRules(const UpdateDIJobRequestTableMappingsTransformationRules &) = default ;
    UpdateDIJobRequestTableMappingsTransformationRules(UpdateDIJobRequestTableMappingsTransformationRules &&) = default ;
    UpdateDIJobRequestTableMappingsTransformationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIJobRequestTableMappingsTransformationRules() = default ;
    UpdateDIJobRequestTableMappingsTransformationRules& operator=(const UpdateDIJobRequestTableMappingsTransformationRules &) = default ;
    UpdateDIJobRequestTableMappingsTransformationRules& operator=(UpdateDIJobRequestTableMappingsTransformationRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleActionType_ != nullptr
        && this->ruleName_ != nullptr && this->ruleTargetType_ != nullptr; };
    // ruleActionType Field Functions 
    bool hasRuleActionType() const { return this->ruleActionType_ != nullptr;};
    void deleteRuleActionType() { this->ruleActionType_ = nullptr;};
    inline string ruleActionType() const { DARABONBA_PTR_GET_DEFAULT(ruleActionType_, "") };
    inline UpdateDIJobRequestTableMappingsTransformationRules& setRuleActionType(string ruleActionType) { DARABONBA_PTR_SET_VALUE(ruleActionType_, ruleActionType) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateDIJobRequestTableMappingsTransformationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleTargetType Field Functions 
    bool hasRuleTargetType() const { return this->ruleTargetType_ != nullptr;};
    void deleteRuleTargetType() { this->ruleTargetType_ = nullptr;};
    inline string ruleTargetType() const { DARABONBA_PTR_GET_DEFAULT(ruleTargetType_, "") };
    inline UpdateDIJobRequestTableMappingsTransformationRules& setRuleTargetType(string ruleTargetType) { DARABONBA_PTR_SET_VALUE(ruleTargetType_, ruleTargetType) };


  protected:
    std::shared_ptr<string> ruleActionType_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> ruleTargetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
