// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPSVSERVERGROUPASSOCIATEDOBJECTSRULESRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPSVSERVERGROUPASSOCIATEDOBJECTSRULESRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule() = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule(const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule(DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule &&) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule() = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule& operator=(const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule& operator=(DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->url_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The requested domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the forwarding rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the forwarding rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The request URL.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
