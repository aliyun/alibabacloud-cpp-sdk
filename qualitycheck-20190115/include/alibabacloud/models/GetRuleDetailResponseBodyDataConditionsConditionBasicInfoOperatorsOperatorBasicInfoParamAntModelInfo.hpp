// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORSOPERATORBASICINFOPARAMANTMODELINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORSOPERATORBASICINFOPARAMANTMODELINFO_HPP_
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
  class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AntModelInfo, antModelInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AntModelInfo, antModelInfo_);
    };
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo &&) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo& operator=(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo& operator=(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->antModelInfo_ != nullptr; };
    // antModelInfo Field Functions 
    bool hasAntModelInfo() const { return this->antModelInfo_ != nullptr;};
    void deleteAntModelInfo() { this->antModelInfo_ = nullptr;};
    inline const vector<string> & antModelInfo() const { DARABONBA_PTR_GET_CONST(antModelInfo_, vector<string>) };
    inline vector<string> antModelInfo() { DARABONBA_PTR_GET(antModelInfo_, vector<string>) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo& setAntModelInfo(const vector<string> & antModelInfo) { DARABONBA_PTR_SET_VALUE(antModelInfo_, antModelInfo) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamAntModelInfo& setAntModelInfo(vector<string> && antModelInfo) { DARABONBA_PTR_SET_RVALUE(antModelInfo_, antModelInfo) };


  protected:
    std::shared_ptr<vector<string>> antModelInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
