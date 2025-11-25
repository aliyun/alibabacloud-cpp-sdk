// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODYSCHEDULERRULESCDNLINKAGERULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODYSCHEDULERRULESCDNLINKAGERULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule() = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule(const DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule &) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule(DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule &&) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule() = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule& operator=(const DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule &) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule& operator=(DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cname_ == nullptr
        && return this->param_ == nullptr && return this->ruleName_ == nullptr && return this->rules_ == nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam & param() const { DARABONBA_PTR_GET_CONST(param_, Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam) };
    inline Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam param() { DARABONBA_PTR_GET(param_, Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule& setParam(const Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule& setParam(Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules>) };
    inline vector<Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules>) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule& setRules(const vector<Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule& setRules(vector<Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<string> cname_ = nullptr;
    std::shared_ptr<Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParam> param_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
