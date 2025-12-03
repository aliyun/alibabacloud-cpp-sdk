// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODYRULESRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODYRULESRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule() = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule &) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule &&) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule() = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule& operator=(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule &) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule& operator=(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->url_ == nullptr && return this->VServerGroupId_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRulesRule& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the forwarding rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the forwarding rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The request URL.
    std::shared_ptr<string> url_ = nullptr;
    // The ID of the server group specified in the forwarding rule.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
