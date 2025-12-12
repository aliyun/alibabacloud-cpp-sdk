// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATARULES_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATARULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataRulesRuleBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyDataRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleBasicInfo, ruleBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleBasicInfo, ruleBasicInfo_);
    };
    GetRuleDetailResponseBodyDataRules() = default ;
    GetRuleDetailResponseBodyDataRules(const GetRuleDetailResponseBodyDataRules &) = default ;
    GetRuleDetailResponseBodyDataRules(GetRuleDetailResponseBodyDataRules &&) = default ;
    GetRuleDetailResponseBodyDataRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataRules() = default ;
    GetRuleDetailResponseBodyDataRules& operator=(const GetRuleDetailResponseBodyDataRules &) = default ;
    GetRuleDetailResponseBodyDataRules& operator=(GetRuleDetailResponseBodyDataRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleBasicInfo_ == nullptr; };
    // ruleBasicInfo Field Functions 
    bool hasRuleBasicInfo() const { return this->ruleBasicInfo_ != nullptr;};
    void deleteRuleBasicInfo() { this->ruleBasicInfo_ = nullptr;};
    inline const vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfo> & ruleBasicInfo() const { DARABONBA_PTR_GET_CONST(ruleBasicInfo_, vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfo>) };
    inline vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfo> ruleBasicInfo() { DARABONBA_PTR_GET(ruleBasicInfo_, vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfo>) };
    inline GetRuleDetailResponseBodyDataRules& setRuleBasicInfo(const vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfo> & ruleBasicInfo) { DARABONBA_PTR_SET_VALUE(ruleBasicInfo_, ruleBasicInfo) };
    inline GetRuleDetailResponseBodyDataRules& setRuleBasicInfo(vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfo> && ruleBasicInfo) { DARABONBA_PTR_SET_RVALUE(ruleBasicInfo_, ruleBasicInfo) };


  protected:
    std::shared_ptr<vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfo>> ruleBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
