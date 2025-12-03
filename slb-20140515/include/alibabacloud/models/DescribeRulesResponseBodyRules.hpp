// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRulesResponseBodyRulesRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeRulesResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribeRulesResponseBodyRules() = default ;
    DescribeRulesResponseBodyRules(const DescribeRulesResponseBodyRules &) = default ;
    DescribeRulesResponseBodyRules(DescribeRulesResponseBodyRules &&) = default ;
    DescribeRulesResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRulesResponseBodyRules() = default ;
    DescribeRulesResponseBodyRules& operator=(const DescribeRulesResponseBodyRules &) = default ;
    DescribeRulesResponseBodyRules& operator=(DescribeRulesResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rule_ == nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::DescribeRulesResponseBodyRulesRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::DescribeRulesResponseBodyRulesRule>) };
    inline vector<Models::DescribeRulesResponseBodyRulesRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::DescribeRulesResponseBodyRulesRule>) };
    inline DescribeRulesResponseBodyRules& setRule(const vector<Models::DescribeRulesResponseBodyRulesRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribeRulesResponseBodyRules& setRule(vector<Models::DescribeRulesResponseBodyRulesRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::DescribeRulesResponseBodyRulesRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
