// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICIESRESPONSEBODYSECURITYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICIESRESPONSEBODYSECURITYPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListSystemSecurityPoliciesResponseBodySecurityPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemSecurityPoliciesResponseBodySecurityPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(TLSVersions, TLSVersions_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemSecurityPoliciesResponseBodySecurityPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(TLSVersions, TLSVersions_);
    };
    ListSystemSecurityPoliciesResponseBodySecurityPolicies() = default ;
    ListSystemSecurityPoliciesResponseBodySecurityPolicies(const ListSystemSecurityPoliciesResponseBodySecurityPolicies &) = default ;
    ListSystemSecurityPoliciesResponseBodySecurityPolicies(ListSystemSecurityPoliciesResponseBodySecurityPolicies &&) = default ;
    ListSystemSecurityPoliciesResponseBodySecurityPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemSecurityPoliciesResponseBodySecurityPolicies() = default ;
    ListSystemSecurityPoliciesResponseBodySecurityPolicies& operator=(const ListSystemSecurityPoliciesResponseBodySecurityPolicies &) = default ;
    ListSystemSecurityPoliciesResponseBodySecurityPolicies& operator=(ListSystemSecurityPoliciesResponseBodySecurityPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ciphers_ != nullptr
        && this->securityPolicyId_ != nullptr && this->TLSVersions_ != nullptr; };
    // ciphers Field Functions 
    bool hasCiphers() const { return this->ciphers_ != nullptr;};
    void deleteCiphers() { this->ciphers_ = nullptr;};
    inline const vector<string> & ciphers() const { DARABONBA_PTR_GET_CONST(ciphers_, vector<string>) };
    inline vector<string> ciphers() { DARABONBA_PTR_GET(ciphers_, vector<string>) };
    inline ListSystemSecurityPoliciesResponseBodySecurityPolicies& setCiphers(const vector<string> & ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };
    inline ListSystemSecurityPoliciesResponseBodySecurityPolicies& setCiphers(vector<string> && ciphers) { DARABONBA_PTR_SET_RVALUE(ciphers_, ciphers) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline ListSystemSecurityPoliciesResponseBodySecurityPolicies& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // TLSVersions Field Functions 
    bool hasTLSVersions() const { return this->TLSVersions_ != nullptr;};
    void deleteTLSVersions() { this->TLSVersions_ = nullptr;};
    inline const vector<string> & TLSVersions() const { DARABONBA_PTR_GET_CONST(TLSVersions_, vector<string>) };
    inline vector<string> TLSVersions() { DARABONBA_PTR_GET(TLSVersions_, vector<string>) };
    inline ListSystemSecurityPoliciesResponseBodySecurityPolicies& setTLSVersions(const vector<string> & TLSVersions) { DARABONBA_PTR_SET_VALUE(TLSVersions_, TLSVersions) };
    inline ListSystemSecurityPoliciesResponseBodySecurityPolicies& setTLSVersions(vector<string> && TLSVersions) { DARABONBA_PTR_SET_RVALUE(TLSVersions_, TLSVersions) };


  protected:
    // The supported cipher suite.
    std::shared_ptr<vector<string>> ciphers_ = nullptr;
    // The ID of the security policy.
    std::shared_ptr<string> securityPolicyId_ = nullptr;
    // The supported TLS protocol versions.
    std::shared_ptr<vector<string>> TLSVersions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
