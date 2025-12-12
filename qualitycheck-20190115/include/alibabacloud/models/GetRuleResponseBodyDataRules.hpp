// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODYDATARULES_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODYDATARULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRuleResponseBodyDataRulesRuleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleResponseBodyDataRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBodyDataRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleInfo, ruleInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBodyDataRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleInfo, ruleInfo_);
    };
    GetRuleResponseBodyDataRules() = default ;
    GetRuleResponseBodyDataRules(const GetRuleResponseBodyDataRules &) = default ;
    GetRuleResponseBodyDataRules(GetRuleResponseBodyDataRules &&) = default ;
    GetRuleResponseBodyDataRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBodyDataRules() = default ;
    GetRuleResponseBodyDataRules& operator=(const GetRuleResponseBodyDataRules &) = default ;
    GetRuleResponseBodyDataRules& operator=(GetRuleResponseBodyDataRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleInfo_ == nullptr; };
    // ruleInfo Field Functions 
    bool hasRuleInfo() const { return this->ruleInfo_ != nullptr;};
    void deleteRuleInfo() { this->ruleInfo_ = nullptr;};
    inline const vector<Models::GetRuleResponseBodyDataRulesRuleInfo> & ruleInfo() const { DARABONBA_PTR_GET_CONST(ruleInfo_, vector<Models::GetRuleResponseBodyDataRulesRuleInfo>) };
    inline vector<Models::GetRuleResponseBodyDataRulesRuleInfo> ruleInfo() { DARABONBA_PTR_GET(ruleInfo_, vector<Models::GetRuleResponseBodyDataRulesRuleInfo>) };
    inline GetRuleResponseBodyDataRules& setRuleInfo(const vector<Models::GetRuleResponseBodyDataRulesRuleInfo> & ruleInfo) { DARABONBA_PTR_SET_VALUE(ruleInfo_, ruleInfo) };
    inline GetRuleResponseBodyDataRules& setRuleInfo(vector<Models::GetRuleResponseBodyDataRulesRuleInfo> && ruleInfo) { DARABONBA_PTR_SET_RVALUE(ruleInfo_, ruleInfo) };


  protected:
    std::shared_ptr<vector<Models::GetRuleResponseBodyDataRulesRuleInfo>> ruleInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
