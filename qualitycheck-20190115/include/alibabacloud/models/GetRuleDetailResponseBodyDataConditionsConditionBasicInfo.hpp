// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyDataConditionsConditionBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataConditionsConditionBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRange, checkRange_);
      DARABONBA_PTR_TO_JSON(ConditionInfoCid, conditionInfoCid_);
      DARABONBA_PTR_TO_JSON(OperLambda, operLambda_);
      DARABONBA_PTR_TO_JSON(Operators, operators_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataConditionsConditionBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRange, checkRange_);
      DARABONBA_PTR_FROM_JSON(ConditionInfoCid, conditionInfoCid_);
      DARABONBA_PTR_FROM_JSON(OperLambda, operLambda_);
      DARABONBA_PTR_FROM_JSON(Operators, operators_);
    };
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfo() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfo(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfo &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfo(GetRuleDetailResponseBodyDataConditionsConditionBasicInfo &&) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfo() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfo& operator=(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfo &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfo& operator=(GetRuleDetailResponseBodyDataConditionsConditionBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkRange_ != nullptr
        && this->conditionInfoCid_ != nullptr && this->operLambda_ != nullptr && this->operators_ != nullptr; };
    // checkRange Field Functions 
    bool hasCheckRange() const { return this->checkRange_ != nullptr;};
    void deleteCheckRange() { this->checkRange_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange & checkRange() const { DARABONBA_PTR_GET_CONST(checkRange_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange) };
    inline Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange checkRange() { DARABONBA_PTR_GET(checkRange_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfo& setCheckRange(const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange & checkRange) { DARABONBA_PTR_SET_VALUE(checkRange_, checkRange) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfo& setCheckRange(Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange && checkRange) { DARABONBA_PTR_SET_RVALUE(checkRange_, checkRange) };


    // conditionInfoCid Field Functions 
    bool hasConditionInfoCid() const { return this->conditionInfoCid_ != nullptr;};
    void deleteConditionInfoCid() { this->conditionInfoCid_ = nullptr;};
    inline string conditionInfoCid() const { DARABONBA_PTR_GET_DEFAULT(conditionInfoCid_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfo& setConditionInfoCid(string conditionInfoCid) { DARABONBA_PTR_SET_VALUE(conditionInfoCid_, conditionInfoCid) };


    // operLambda Field Functions 
    bool hasOperLambda() const { return this->operLambda_ != nullptr;};
    void deleteOperLambda() { this->operLambda_ = nullptr;};
    inline string operLambda() const { DARABONBA_PTR_GET_DEFAULT(operLambda_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfo& setOperLambda(string operLambda) { DARABONBA_PTR_SET_VALUE(operLambda_, operLambda) };


    // operators Field Functions 
    bool hasOperators() const { return this->operators_ != nullptr;};
    void deleteOperators() { this->operators_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators & operators() const { DARABONBA_PTR_GET_CONST(operators_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators) };
    inline Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators operators() { DARABONBA_PTR_GET(operators_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfo& setOperators(const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfo& setOperators(Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


  protected:
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoCheckRange> checkRange_ = nullptr;
    std::shared_ptr<string> conditionInfoCid_ = nullptr;
    std::shared_ptr<string> operLambda_ = nullptr;
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperators> operators_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
