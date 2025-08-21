// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULERRULESRESPONSEBODYSCHEDULERRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULERRULESRESPONSEBODYSCHEDULERRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSchedulerRulesResponseBodySchedulerRulesParam.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSchedulerRulesResponseBodySchedulerRulesRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSchedulerRulesResponseBodySchedulerRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSchedulerRulesResponseBodySchedulerRules& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSchedulerRulesResponseBodySchedulerRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeSchedulerRulesResponseBodySchedulerRules() = default ;
    DescribeSchedulerRulesResponseBodySchedulerRules(const DescribeSchedulerRulesResponseBodySchedulerRules &) = default ;
    DescribeSchedulerRulesResponseBodySchedulerRules(DescribeSchedulerRulesResponseBodySchedulerRules &&) = default ;
    DescribeSchedulerRulesResponseBodySchedulerRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSchedulerRulesResponseBodySchedulerRules() = default ;
    DescribeSchedulerRulesResponseBodySchedulerRules& operator=(const DescribeSchedulerRulesResponseBodySchedulerRules &) = default ;
    DescribeSchedulerRulesResponseBodySchedulerRules& operator=(DescribeSchedulerRulesResponseBodySchedulerRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->param_ != nullptr && this->ruleName_ != nullptr && this->ruleType_ != nullptr && this->rules_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeSchedulerRulesResponseBodySchedulerRules& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const Models::DescribeSchedulerRulesResponseBodySchedulerRulesParam & param() const { DARABONBA_PTR_GET_CONST(param_, Models::DescribeSchedulerRulesResponseBodySchedulerRulesParam) };
    inline Models::DescribeSchedulerRulesResponseBodySchedulerRulesParam param() { DARABONBA_PTR_GET(param_, Models::DescribeSchedulerRulesResponseBodySchedulerRulesParam) };
    inline DescribeSchedulerRulesResponseBodySchedulerRules& setParam(const Models::DescribeSchedulerRulesResponseBodySchedulerRulesParam & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline DescribeSchedulerRulesResponseBodySchedulerRules& setParam(Models::DescribeSchedulerRulesResponseBodySchedulerRulesParam && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeSchedulerRulesResponseBodySchedulerRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeSchedulerRulesResponseBodySchedulerRules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeSchedulerRulesResponseBodySchedulerRulesRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeSchedulerRulesResponseBodySchedulerRulesRules>) };
    inline vector<Models::DescribeSchedulerRulesResponseBodySchedulerRulesRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeSchedulerRulesResponseBodySchedulerRulesRules>) };
    inline DescribeSchedulerRulesResponseBodySchedulerRules& setRules(const vector<Models::DescribeSchedulerRulesResponseBodySchedulerRulesRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeSchedulerRulesResponseBodySchedulerRules& setRules(vector<Models::DescribeSchedulerRulesResponseBodySchedulerRulesRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<string> cname_ = nullptr;
    std::shared_ptr<Models::DescribeSchedulerRulesResponseBodySchedulerRulesParam> param_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> ruleType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSchedulerRulesResponseBodySchedulerRulesRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
