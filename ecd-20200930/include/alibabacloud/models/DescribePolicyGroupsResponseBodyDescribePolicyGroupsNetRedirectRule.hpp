// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODYDESCRIBEPOLICYGROUPSNETREDIRECTRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODYDESCRIBEPOLICYGROUPSNETREDIRECTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule() = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule(const DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule &) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule(DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule &&) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule() = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule& operator=(const DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule &) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule& operator=(DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->policy_ != nullptr && this->ruleType_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsNetRedirectRule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The rule content.
    std::shared_ptr<string> domain_ = nullptr;
    // Indicates whether the rule is allowed.
    // 
    // Valid values:
    // 
    // *   allow
    // *   block
    std::shared_ptr<string> policy_ = nullptr;
    // The rule type.
    // 
    // Valid values:
    // 
    // *   prc: process
    // *   domain: domain name
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
