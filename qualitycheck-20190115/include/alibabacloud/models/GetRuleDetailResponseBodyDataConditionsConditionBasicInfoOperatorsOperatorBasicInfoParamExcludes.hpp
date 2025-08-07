// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORSOPERATORBASICINFOPARAMEXCLUDES_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATACONDITIONSCONDITIONBASICINFOOPERATORSOPERATORBASICINFOPARAMEXCLUDES_HPP_
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
  class GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes& obj) { 
      DARABONBA_PTR_TO_JSON(Excludes, excludes_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes& obj) { 
      DARABONBA_PTR_FROM_JSON(Excludes, excludes_);
    };
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes &&) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes() = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes& operator=(const GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes &) = default ;
    GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes& operator=(GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->excludes_ != nullptr; };
    // excludes Field Functions 
    bool hasExcludes() const { return this->excludes_ != nullptr;};
    void deleteExcludes() { this->excludes_ = nullptr;};
    inline const vector<string> & excludes() const { DARABONBA_PTR_GET_CONST(excludes_, vector<string>) };
    inline vector<string> excludes() { DARABONBA_PTR_GET(excludes_, vector<string>) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes& setExcludes(const vector<string> & excludes) { DARABONBA_PTR_SET_VALUE(excludes_, excludes) };
    inline GetRuleDetailResponseBodyDataConditionsConditionBasicInfoOperatorsOperatorBasicInfoParamExcludes& setExcludes(vector<string> && excludes) { DARABONBA_PTR_SET_RVALUE(excludes_, excludes) };


  protected:
    std::shared_ptr<vector<string>> excludes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
