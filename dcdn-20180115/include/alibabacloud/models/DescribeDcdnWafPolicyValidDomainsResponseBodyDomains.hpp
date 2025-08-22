// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFPOLICYVALIDDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFPOLICYVALIDDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafPolicyValidDomainsResponseBodyDomainsPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafPolicyValidDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafPolicyValidDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafPolicyValidDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    DescribeDcdnWafPolicyValidDomainsResponseBodyDomains() = default ;
    DescribeDcdnWafPolicyValidDomainsResponseBodyDomains(const DescribeDcdnWafPolicyValidDomainsResponseBodyDomains &) = default ;
    DescribeDcdnWafPolicyValidDomainsResponseBodyDomains(DescribeDcdnWafPolicyValidDomainsResponseBodyDomains &&) = default ;
    DescribeDcdnWafPolicyValidDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafPolicyValidDomainsResponseBodyDomains() = default ;
    DescribeDcdnWafPolicyValidDomainsResponseBodyDomains& operator=(const DescribeDcdnWafPolicyValidDomainsResponseBodyDomains &) = default ;
    DescribeDcdnWafPolicyValidDomainsResponseBodyDomains& operator=(DescribeDcdnWafPolicyValidDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->policies_ != nullptr && this->policyId_ != nullptr && this->policyName_ != nullptr && this->policyType_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnWafPolicyValidDomainsResponseBodyDomains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<Models::DescribeDcdnWafPolicyValidDomainsResponseBodyDomainsPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<Models::DescribeDcdnWafPolicyValidDomainsResponseBodyDomainsPolicies>) };
    inline vector<Models::DescribeDcdnWafPolicyValidDomainsResponseBodyDomainsPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<Models::DescribeDcdnWafPolicyValidDomainsResponseBodyDomainsPolicies>) };
    inline DescribeDcdnWafPolicyValidDomainsResponseBodyDomains& setPolicies(const vector<Models::DescribeDcdnWafPolicyValidDomainsResponseBodyDomainsPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline DescribeDcdnWafPolicyValidDomainsResponseBodyDomains& setPolicies(vector<Models::DescribeDcdnWafPolicyValidDomainsResponseBodyDomainsPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DescribeDcdnWafPolicyValidDomainsResponseBodyDomains& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribeDcdnWafPolicyValidDomainsResponseBodyDomains& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DescribeDcdnWafPolicyValidDomainsResponseBodyDomains& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // The protected domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The policy that is bound to the domain name.
    std::shared_ptr<vector<Models::DescribeDcdnWafPolicyValidDomainsResponseBodyDomainsPolicies>> policies_ = nullptr;
    // The ID of the protection policy.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The name of the protection policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // Indicates whether the protection policy is the default policy. Valid values:
    // 
    // *   default: The protection policy is the default policy.
    // *   custom: The protection policy is not the default policy.
    std::shared_ptr<string> policyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
