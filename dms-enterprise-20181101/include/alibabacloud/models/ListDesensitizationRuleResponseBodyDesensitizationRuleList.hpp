// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDESENSITIZATIONRULERESPONSEBODYDESENSITIZATIONRULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDESENSITIZATIONRULERESPONSEBODYDESENSITIZATIONRULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDesensitizationRuleResponseBodyDesensitizationRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDesensitizationRuleResponseBodyDesensitizationRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(FuncParams, funcParams_);
      DARABONBA_PTR_TO_JSON(FuncSample, funcSample_);
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(LastModifierId, lastModifierId_);
      DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_TO_JSON(ReferenceCount, referenceCount_);
      DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDesensitizationRuleResponseBodyDesensitizationRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(FuncParams, funcParams_);
      DARABONBA_PTR_FROM_JSON(FuncSample, funcSample_);
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(LastModifierId, lastModifierId_);
      DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_FROM_JSON(ReferenceCount, referenceCount_);
      DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    ListDesensitizationRuleResponseBodyDesensitizationRuleList() = default ;
    ListDesensitizationRuleResponseBodyDesensitizationRuleList(const ListDesensitizationRuleResponseBodyDesensitizationRuleList &) = default ;
    ListDesensitizationRuleResponseBodyDesensitizationRuleList(ListDesensitizationRuleResponseBodyDesensitizationRuleList &&) = default ;
    ListDesensitizationRuleResponseBodyDesensitizationRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDesensitizationRuleResponseBodyDesensitizationRuleList() = default ;
    ListDesensitizationRuleResponseBodyDesensitizationRuleList& operator=(const ListDesensitizationRuleResponseBodyDesensitizationRuleList &) = default ;
    ListDesensitizationRuleResponseBodyDesensitizationRuleList& operator=(ListDesensitizationRuleResponseBodyDesensitizationRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->funcParams_ != nullptr
        && this->funcSample_ != nullptr && this->functionType_ != nullptr && this->lastModifierId_ != nullptr && this->lastModifierName_ != nullptr && this->referenceCount_ != nullptr
        && this->ruleDesc_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->ruleType_ != nullptr; };
    // funcParams Field Functions 
    bool hasFuncParams() const { return this->funcParams_ != nullptr;};
    void deleteFuncParams() { this->funcParams_ = nullptr;};
    inline string funcParams() const { DARABONBA_PTR_GET_DEFAULT(funcParams_, "") };
    inline ListDesensitizationRuleResponseBodyDesensitizationRuleList& setFuncParams(string funcParams) { DARABONBA_PTR_SET_VALUE(funcParams_, funcParams) };


    // funcSample Field Functions 
    bool hasFuncSample() const { return this->funcSample_ != nullptr;};
    void deleteFuncSample() { this->funcSample_ = nullptr;};
    inline string funcSample() const { DARABONBA_PTR_GET_DEFAULT(funcSample_, "") };
    inline ListDesensitizationRuleResponseBodyDesensitizationRuleList& setFuncSample(string funcSample) { DARABONBA_PTR_SET_VALUE(funcSample_, funcSample) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline ListDesensitizationRuleResponseBodyDesensitizationRuleList& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // lastModifierId Field Functions 
    bool hasLastModifierId() const { return this->lastModifierId_ != nullptr;};
    void deleteLastModifierId() { this->lastModifierId_ = nullptr;};
    inline string lastModifierId() const { DARABONBA_PTR_GET_DEFAULT(lastModifierId_, "") };
    inline ListDesensitizationRuleResponseBodyDesensitizationRuleList& setLastModifierId(string lastModifierId) { DARABONBA_PTR_SET_VALUE(lastModifierId_, lastModifierId) };


    // lastModifierName Field Functions 
    bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
    void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
    inline string lastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
    inline ListDesensitizationRuleResponseBodyDesensitizationRuleList& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


    // referenceCount Field Functions 
    bool hasReferenceCount() const { return this->referenceCount_ != nullptr;};
    void deleteReferenceCount() { this->referenceCount_ = nullptr;};
    inline int32_t referenceCount() const { DARABONBA_PTR_GET_DEFAULT(referenceCount_, 0) };
    inline ListDesensitizationRuleResponseBodyDesensitizationRuleList& setReferenceCount(int32_t referenceCount) { DARABONBA_PTR_SET_VALUE(referenceCount_, referenceCount) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string ruleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline ListDesensitizationRuleResponseBodyDesensitizationRuleList& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int32_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
    inline ListDesensitizationRuleResponseBodyDesensitizationRuleList& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListDesensitizationRuleResponseBodyDesensitizationRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ListDesensitizationRuleResponseBodyDesensitizationRuleList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The parameter.
    std::shared_ptr<string> funcParams_ = nullptr;
    // The example.
    std::shared_ptr<string> funcSample_ = nullptr;
    // The algorithm type.
    std::shared_ptr<string> functionType_ = nullptr;
    // The ID of the user who last modified the masking rule.
    std::shared_ptr<string> lastModifierId_ = nullptr;
    // The name of the user who last modified the masking rule.
    std::shared_ptr<string> lastModifierName_ = nullptr;
    // The number of times that the masking was used.
    std::shared_ptr<int32_t> referenceCount_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> ruleDesc_ = nullptr;
    // The ID of the masking rule.
    std::shared_ptr<int32_t> ruleId_ = nullptr;
    // The name of the masking rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The algorithm used for masking.
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
