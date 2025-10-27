// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKTYPERESPONSEBODYRISKTYPESSUBTYPESCHECKDETAILSRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKTYPERESPONSEBODYRISKTYPESSUBTYPESCHECKDETAILSRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules& obj) { 
      DARABONBA_PTR_TO_JSON(Optional, optional_);
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
      DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Optional, optional_);
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
      DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules() = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules(const DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules &) = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules(DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules &&) = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules() = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules& operator=(const DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules &) = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules& operator=(DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->optional_ == nullptr
        && return this->paramList_ == nullptr && return this->ruleDesc_ == nullptr && return this->ruleId_ == nullptr; };
    // optional Field Functions 
    bool hasOptional() const { return this->optional_ != nullptr;};
    void deleteOptional() { this->optional_ = nullptr;};
    inline int32_t optional() const { DARABONBA_PTR_GET_DEFAULT(optional_, 0) };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules& setOptional(int32_t optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList> & paramList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList>) };
    inline vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList> paramList() { DARABONBA_PTR_GET(paramList_, vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList>) };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules& setParamList(const vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules& setParamList(vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string ruleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // Indicates whether the baseline can be edited. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> optional_ = nullptr;
    // An array that consists of the parameters in the rule for the baseline.
    std::shared_ptr<vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList>> paramList_ = nullptr;
    // The description of the rule for the baseline.
    std::shared_ptr<string> ruleDesc_ = nullptr;
    // The ID of the rule for the baseline.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
