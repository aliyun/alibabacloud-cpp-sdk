// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCALINGRULESRESPONSEBODYDATARULELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSCALINGRULESRESPONSEBODYDATARULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetScalingRulesResponseBodyDataRuleListRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetScalingRulesResponseBodyDataRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScalingRulesResponseBodyDataRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, GetScalingRulesResponseBodyDataRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    GetScalingRulesResponseBodyDataRuleList() = default ;
    GetScalingRulesResponseBodyDataRuleList(const GetScalingRulesResponseBodyDataRuleList &) = default ;
    GetScalingRulesResponseBodyDataRuleList(GetScalingRulesResponseBodyDataRuleList &&) = default ;
    GetScalingRulesResponseBodyDataRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScalingRulesResponseBodyDataRuleList() = default ;
    GetScalingRulesResponseBodyDataRuleList& operator=(const GetScalingRulesResponseBodyDataRuleList &) = default ;
    GetScalingRulesResponseBodyDataRuleList& operator=(GetScalingRulesResponseBodyDataRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rule_ == nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::GetScalingRulesResponseBodyDataRuleListRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::GetScalingRulesResponseBodyDataRuleListRule>) };
    inline vector<Models::GetScalingRulesResponseBodyDataRuleListRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::GetScalingRulesResponseBodyDataRuleListRule>) };
    inline GetScalingRulesResponseBodyDataRuleList& setRule(const vector<Models::GetScalingRulesResponseBodyDataRuleListRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline GetScalingRulesResponseBodyDataRuleList& setRule(vector<Models::GetScalingRulesResponseBodyDataRuleListRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::GetScalingRulesResponseBodyDataRuleListRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
