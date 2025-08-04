// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODYDESCRIBEPOLICYGROUPSDOMAINRESOLVERULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODYDESCRIBEPOLICYGROUPSDOMAINRESOLVERULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
    };
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule() = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule(const DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule &) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule(DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule &&) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule() = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule& operator=(const DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule &) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule& operator=(DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->domain_ != nullptr && this->policy_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsDomainResolveRule& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


  protected:
    // The rule description.
    std::shared_ptr<string> description_ = nullptr;
    // The destination domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // Indicates whether the domain name resolution rule is allowed.
    // 
    // Valid values:
    // 
    // *   allow
    // *   block
    std::shared_ptr<string> policy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
