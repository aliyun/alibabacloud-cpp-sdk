// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENTERPOLICYLISTRESPONSEBODYDESCRIBEPOLICYGROUPSNETREDIRECTRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENTERPOLICYLISTRESPONSEBODYDESCRIBEPOLICYGROUPSNETREDIRECTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule() = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule(const DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule &) = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule(DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule &&) = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule() = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule& operator=(const DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule &) = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule& operator=(DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->policy_ == nullptr && return this->ruleType_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroupsNetRedirectRule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The redirection policy.
    std::shared_ptr<string> policy_ = nullptr;
    // The rule type.
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
