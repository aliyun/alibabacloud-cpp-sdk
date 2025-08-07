// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORS_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators& obj) { 
      DARABONBA_PTR_TO_JSON(OperatorBasicInfo, operatorBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators& obj) { 
      DARABONBA_PTR_FROM_JSON(OperatorBasicInfo, operatorBasicInfo_);
    };
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators &&) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators& operator=(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators& operator=(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operatorBasicInfo_ != nullptr; };
    // operatorBasicInfo Field Functions 
    bool hasOperatorBasicInfo() const { return this->operatorBasicInfo_ != nullptr;};
    void deleteOperatorBasicInfo() { this->operatorBasicInfo_ = nullptr;};
    inline const vector<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo> & operatorBasicInfo() const { DARABONBA_PTR_GET_CONST(operatorBasicInfo_, vector<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo>) };
    inline vector<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo> operatorBasicInfo() { DARABONBA_PTR_GET(operatorBasicInfo_, vector<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo>) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators& setOperatorBasicInfo(const vector<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo> & operatorBasicInfo) { DARABONBA_PTR_SET_VALUE(operatorBasicInfo_, operatorBasicInfo) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators& setOperatorBasicInfo(vector<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo> && operatorBasicInfo) { DARABONBA_PTR_SET_RVALUE(operatorBasicInfo_, operatorBasicInfo) };


  protected:
    std::shared_ptr<vector<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo>> operatorBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
