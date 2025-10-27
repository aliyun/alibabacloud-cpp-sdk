// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKFIXDETAILSRESPONSEBODYCHECKFIXDETAILSRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKFIXDETAILSRESPONSEBODYCHECKFIXDETAILSRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCheckFixDetailsResponseBodyCheckFixDetailsRulesParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Optional, optional_);
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
      DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(VarName, varName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Optional, optional_);
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
      DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(VarName, varName_);
    };
    DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules() = default ;
    DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules(const DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules &) = default ;
    DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules(DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules &&) = default ;
    DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules() = default ;
    DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& operator=(const DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules &) = default ;
    DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& operator=(DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->defaultValue_ == nullptr && return this->optional_ == nullptr && return this->paramList_ == nullptr && return this->ruleDesc_ == nullptr && return this->ruleId_ == nullptr
        && return this->value_ == nullptr && return this->varName_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline int32_t defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, 0) };
    inline DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& setDefaultValue(int32_t defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // optional Field Functions 
    bool hasOptional() const { return this->optional_ != nullptr;};
    void deleteOptional() { this->optional_ = nullptr;};
    inline int32_t optional() const { DARABONBA_PTR_GET_DEFAULT(optional_, 0) };
    inline DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& setOptional(int32_t optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<Models::DescribeCheckFixDetailsResponseBodyCheckFixDetailsRulesParamList> & paramList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Models::DescribeCheckFixDetailsResponseBodyCheckFixDetailsRulesParamList>) };
    inline vector<Models::DescribeCheckFixDetailsResponseBodyCheckFixDetailsRulesParamList> paramList() { DARABONBA_PTR_GET(paramList_, vector<Models::DescribeCheckFixDetailsResponseBodyCheckFixDetailsRulesParamList>) };
    inline DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& setParamList(const vector<Models::DescribeCheckFixDetailsResponseBodyCheckFixDetailsRulesParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& setParamList(vector<Models::DescribeCheckFixDetailsResponseBodyCheckFixDetailsRulesParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string ruleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int32_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
    inline DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // varName Field Functions 
    bool hasVarName() const { return this->varName_ != nullptr;};
    void deleteVarName() { this->varName_ = nullptr;};
    inline string varName() const { DARABONBA_PTR_GET_DEFAULT(varName_, "") };
    inline DescribeCheckFixDetailsResponseBodyCheckFixDetailsRules& setVarName(string varName) { DARABONBA_PTR_SET_VALUE(varName_, varName) };


  protected:
    // The ID of the risk item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The default value of the rule.
    std::shared_ptr<int32_t> defaultValue_ = nullptr;
    // Indicates whether the rule is optional. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> optional_ = nullptr;
    // An array that consists of the rule parameters.
    std::shared_ptr<vector<Models::DescribeCheckFixDetailsResponseBodyCheckFixDetailsRulesParamList>> paramList_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> ruleDesc_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The specified value of the rule parameter.
    std::shared_ptr<int32_t> value_ = nullptr;
    // The name of the variable.
    std::shared_ptr<string> varName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
