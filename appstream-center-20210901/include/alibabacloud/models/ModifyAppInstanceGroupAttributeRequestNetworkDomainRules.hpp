// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTNETWORKDOMAINRULES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTNETWORKDOMAINRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupAttributeRequestNetworkDomainRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupAttributeRequestNetworkDomainRules& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupAttributeRequestNetworkDomainRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
    };
    ModifyAppInstanceGroupAttributeRequestNetworkDomainRules() = default ;
    ModifyAppInstanceGroupAttributeRequestNetworkDomainRules(const ModifyAppInstanceGroupAttributeRequestNetworkDomainRules &) = default ;
    ModifyAppInstanceGroupAttributeRequestNetworkDomainRules(ModifyAppInstanceGroupAttributeRequestNetworkDomainRules &&) = default ;
    ModifyAppInstanceGroupAttributeRequestNetworkDomainRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupAttributeRequestNetworkDomainRules() = default ;
    ModifyAppInstanceGroupAttributeRequestNetworkDomainRules& operator=(const ModifyAppInstanceGroupAttributeRequestNetworkDomainRules &) = default ;
    ModifyAppInstanceGroupAttributeRequestNetworkDomainRules& operator=(ModifyAppInstanceGroupAttributeRequestNetworkDomainRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->policy_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyAppInstanceGroupAttributeRequestNetworkDomainRules& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline ModifyAppInstanceGroupAttributeRequestNetworkDomainRules& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


  protected:
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The policy used for the domain name.
    // 
    // Valid values:
    // 
    // *   allow
    // *   block
    std::shared_ptr<string> policy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
