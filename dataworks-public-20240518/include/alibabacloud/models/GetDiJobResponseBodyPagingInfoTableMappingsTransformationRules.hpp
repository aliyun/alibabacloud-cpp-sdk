// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOTABLEMAPPINGSTRANSFORMATIONRULES_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOTABLEMAPPINGSTRANSFORMATIONRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleActionType, ruleActionType_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleTargetType, ruleTargetType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleActionType, ruleActionType_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleTargetType, ruleTargetType_);
    };
    GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules() = default ;
    GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules(const GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules &) = default ;
    GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules(GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules &&) = default ;
    GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules() = default ;
    GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules& operator=(const GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules &) = default ;
    GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules& operator=(GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleActionType_ == nullptr
        && return this->ruleName_ == nullptr && return this->ruleTargetType_ == nullptr; };
    // ruleActionType Field Functions 
    bool hasRuleActionType() const { return this->ruleActionType_ != nullptr;};
    void deleteRuleActionType() { this->ruleActionType_ = nullptr;};
    inline string ruleActionType() const { DARABONBA_PTR_GET_DEFAULT(ruleActionType_, "") };
    inline GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules& setRuleActionType(string ruleActionType) { DARABONBA_PTR_SET_VALUE(ruleActionType_, ruleActionType) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleTargetType Field Functions 
    bool hasRuleTargetType() const { return this->ruleTargetType_ != nullptr;};
    void deleteRuleTargetType() { this->ruleTargetType_ = nullptr;};
    inline string ruleTargetType() const { DARABONBA_PTR_GET_DEFAULT(ruleTargetType_, "") };
    inline GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules& setRuleTargetType(string ruleTargetType) { DARABONBA_PTR_SET_VALUE(ruleTargetType_, ruleTargetType) };


  protected:
    // The action type. Valid values:
    // 
    // *   DefinePrimaryKey
    // *   Rename
    // *   AddColumn
    // *   HandleDml
    std::shared_ptr<string> ruleActionType_ = nullptr;
    // The name of the rule. If the values of the RuleActionType parameter and the RuleTargetType parameter are the same for multiple transformation rules, you must make sure that the transformation rule names are unique.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the object on which the action is performed. Valid values:
    // 
    // *   Table
    // *   Schema
    // *   Database
    std::shared_ptr<string> ruleTargetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
