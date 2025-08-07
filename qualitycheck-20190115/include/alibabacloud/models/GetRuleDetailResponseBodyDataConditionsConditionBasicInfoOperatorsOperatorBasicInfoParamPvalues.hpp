// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORSOPERATORBASICINFOPARAMPVALUES_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORSOPERATORBASICINFOPARAMPVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues& obj) { 
      DARABONBA_PTR_TO_JSON(Pvalues, pvalues_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues& obj) { 
      DARABONBA_PTR_FROM_JSON(Pvalues, pvalues_);
    };
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues &&) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues& operator=(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues& operator=(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pvalues_ != nullptr; };
    // pvalues Field Functions 
    bool hasPvalues() const { return this->pvalues_ != nullptr;};
    void deletePvalues() { this->pvalues_ = nullptr;};
    inline const vector<string> & pvalues() const { DARABONBA_PTR_GET_CONST(pvalues_, vector<string>) };
    inline vector<string> pvalues() { DARABONBA_PTR_GET(pvalues_, vector<string>) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues& setPvalues(const vector<string> & pvalues) { DARABONBA_PTR_SET_VALUE(pvalues_, pvalues) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamPvalues& setPvalues(vector<string> && pvalues) { DARABONBA_PTR_SET_RVALUE(pvalues_, pvalues) };


  protected:
    std::shared_ptr<vector<string>> pvalues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
