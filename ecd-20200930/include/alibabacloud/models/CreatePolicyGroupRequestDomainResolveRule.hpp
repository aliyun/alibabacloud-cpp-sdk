// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUESTDOMAINRESOLVERULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUESTDOMAINRESOLVERULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreatePolicyGroupRequestDomainResolveRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyGroupRequestDomainResolveRule& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyGroupRequestDomainResolveRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
    };
    CreatePolicyGroupRequestDomainResolveRule() = default ;
    CreatePolicyGroupRequestDomainResolveRule(const CreatePolicyGroupRequestDomainResolveRule &) = default ;
    CreatePolicyGroupRequestDomainResolveRule(CreatePolicyGroupRequestDomainResolveRule &&) = default ;
    CreatePolicyGroupRequestDomainResolveRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyGroupRequestDomainResolveRule() = default ;
    CreatePolicyGroupRequestDomainResolveRule& operator=(const CreatePolicyGroupRequestDomainResolveRule &) = default ;
    CreatePolicyGroupRequestDomainResolveRule& operator=(CreatePolicyGroupRequestDomainResolveRule &&) = default ;
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
    inline CreatePolicyGroupRequestDomainResolveRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreatePolicyGroupRequestDomainResolveRule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreatePolicyGroupRequestDomainResolveRule& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


  protected:
    // The description of domain name resolution rule.
    std::shared_ptr<string> description_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // Specifies whether to allow the domain name resolution rule.
    // 
    // Valid values:
    // 
    // *   allow: allows the rule.
    // *   block: denies the rule.
    std::shared_ptr<string> policy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
