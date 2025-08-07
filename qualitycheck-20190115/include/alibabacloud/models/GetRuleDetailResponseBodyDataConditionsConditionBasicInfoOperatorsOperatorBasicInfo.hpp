// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORSOPERATORBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORSOPERATORBASICINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Oid, oid_);
      DARABONBA_PTR_TO_JSON(OperName, operName_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Oid, oid_);
      DARABONBA_PTR_FROM_JSON(OperName, operName_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo &&) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo& operator=(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo& operator=(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->oid_ != nullptr
        && this->operName_ != nullptr && this->param_ != nullptr && this->type_ != nullptr; };
    // oid Field Functions 
    bool hasOid() const { return this->oid_ != nullptr;};
    void deleteOid() { this->oid_ = nullptr;};
    inline string oid() const { DARABONBA_PTR_GET_DEFAULT(oid_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo& setOid(string oid) { DARABONBA_PTR_SET_VALUE(oid_, oid) };


    // operName Field Functions 
    bool hasOperName() const { return this->operName_ != nullptr;};
    void deleteOperName() { this->operName_ = nullptr;};
    inline string operName() const { DARABONBA_PTR_GET_DEFAULT(operName_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo& setOperName(string operName) { DARABONBA_PTR_SET_VALUE(operName_, operName) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam & param() const { DARABONBA_PTR_GET_CONST(param_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam) };
    inline Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam param() { DARABONBA_PTR_GET(param_, Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo& setParam(const Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo& setParam(Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> oid_ = nullptr;
    std::shared_ptr<string> operName_ = nullptr;
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParam> param_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
