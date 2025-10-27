// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYDETAILRESPONSEBODYSTRATEGYRISKTYPEWHITELISTQUERYRESULTLISTSUBTYPESCHECKDETAILSRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYDETAILRESPONSEBODYSTRATEGYRISKTYPEWHITELISTQUERYRESULTLISTSUBTYPESCHECKDETAILSRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRulesParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Optional, optional_);
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
      DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Optional, optional_);
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
      DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules() = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules(const DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules &) = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules(DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules &&) = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules() = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules& operator=(const DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules &) = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules& operator=(DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && return this->optional_ == nullptr && return this->paramList_ == nullptr && return this->ruleDesc_ == nullptr && return this->ruleId_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline int32_t defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, 0) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules& setDefaultValue(int32_t defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // optional Field Functions 
    bool hasOptional() const { return this->optional_ != nullptr;};
    void deleteOptional() { this->optional_ = nullptr;};
    inline int32_t optional() const { DARABONBA_PTR_GET_DEFAULT(optional_, 0) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules& setOptional(int32_t optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRulesParamList> & paramList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRulesParamList>) };
    inline vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRulesParamList> paramList() { DARABONBA_PTR_GET(paramList_, vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRulesParamList>) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules& setParamList(const vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRulesParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules& setParamList(vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRulesParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string ruleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The default value of the rule.
    std::shared_ptr<int32_t> defaultValue_ = nullptr;
    // Indicates whether the rule can be selected. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> optional_ = nullptr;
    // The rule parameters.
    std::shared_ptr<vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRulesParamList>> paramList_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> ruleDesc_ = nullptr;
    // The rule ID.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
