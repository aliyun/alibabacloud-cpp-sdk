// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules() = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules(const DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules &) = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules(DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules &&) = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules() = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules& operator=(const DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules &) = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules& operator=(DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rule_ == nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule>) };
    inline vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule>) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules& setRule(const vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules& setRule(vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyRulesRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
