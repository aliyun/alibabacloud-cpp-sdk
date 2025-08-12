// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICYRESPONSEBODYSECURITYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICYRESPONSEBODYSECURITYPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListSystemSecurityPolicyResponseBodySecurityPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemSecurityPolicyResponseBodySecurityPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyName, securityPolicyName_);
      DARABONBA_PTR_TO_JSON(TlsVersion, tlsVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemSecurityPolicyResponseBodySecurityPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyName, securityPolicyName_);
      DARABONBA_PTR_FROM_JSON(TlsVersion, tlsVersion_);
    };
    ListSystemSecurityPolicyResponseBodySecurityPolicies() = default ;
    ListSystemSecurityPolicyResponseBodySecurityPolicies(const ListSystemSecurityPolicyResponseBodySecurityPolicies &) = default ;
    ListSystemSecurityPolicyResponseBodySecurityPolicies(ListSystemSecurityPolicyResponseBodySecurityPolicies &&) = default ;
    ListSystemSecurityPolicyResponseBodySecurityPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemSecurityPolicyResponseBodySecurityPolicies() = default ;
    ListSystemSecurityPolicyResponseBodySecurityPolicies& operator=(const ListSystemSecurityPolicyResponseBodySecurityPolicies &) = default ;
    ListSystemSecurityPolicyResponseBodySecurityPolicies& operator=(ListSystemSecurityPolicyResponseBodySecurityPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ciphers_ != nullptr
        && this->securityPolicyId_ != nullptr && this->securityPolicyName_ != nullptr && this->tlsVersion_ != nullptr; };
    // ciphers Field Functions 
    bool hasCiphers() const { return this->ciphers_ != nullptr;};
    void deleteCiphers() { this->ciphers_ = nullptr;};
    inline string ciphers() const { DARABONBA_PTR_GET_DEFAULT(ciphers_, "") };
    inline ListSystemSecurityPolicyResponseBodySecurityPolicies& setCiphers(string ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline ListSystemSecurityPolicyResponseBodySecurityPolicies& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // securityPolicyName Field Functions 
    bool hasSecurityPolicyName() const { return this->securityPolicyName_ != nullptr;};
    void deleteSecurityPolicyName() { this->securityPolicyName_ = nullptr;};
    inline string securityPolicyName() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyName_, "") };
    inline ListSystemSecurityPolicyResponseBodySecurityPolicies& setSecurityPolicyName(string securityPolicyName) { DARABONBA_PTR_SET_VALUE(securityPolicyName_, securityPolicyName) };


    // tlsVersion Field Functions 
    bool hasTlsVersion() const { return this->tlsVersion_ != nullptr;};
    void deleteTlsVersion() { this->tlsVersion_ = nullptr;};
    inline string tlsVersion() const { DARABONBA_PTR_GET_DEFAULT(tlsVersion_, "") };
    inline ListSystemSecurityPolicyResponseBodySecurityPolicies& setTlsVersion(string tlsVersion) { DARABONBA_PTR_SET_VALUE(tlsVersion_, tlsVersion) };


  protected:
    // The cipher suite.
    std::shared_ptr<string> ciphers_ = nullptr;
    // The ID of the TLS security policy.
    std::shared_ptr<string> securityPolicyId_ = nullptr;
    // The name of the TLS security policy.
    std::shared_ptr<string> securityPolicyName_ = nullptr;
    // The TLS version.
    std::shared_ptr<string> tlsVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
