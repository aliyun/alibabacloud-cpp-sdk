// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICIESRESPONSEBODY_HPP_
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
  class ListSystemSecurityPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemSecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicies, securityPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemSecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicies, securityPolicies_);
    };
    ListSystemSecurityPoliciesResponseBody() = default ;
    ListSystemSecurityPoliciesResponseBody(const ListSystemSecurityPoliciesResponseBody &) = default ;
    ListSystemSecurityPoliciesResponseBody(ListSystemSecurityPoliciesResponseBody &&) = default ;
    ListSystemSecurityPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemSecurityPoliciesResponseBody() = default ;
    ListSystemSecurityPoliciesResponseBody& operator=(const ListSystemSecurityPoliciesResponseBody &) = default ;
    ListSystemSecurityPoliciesResponseBody& operator=(ListSystemSecurityPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
        DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_TO_JSON(TLSVersions, TLSVersions_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_FROM_JSON(TLSVersions, TLSVersions_);
      };
      SecurityPolicies() = default ;
      SecurityPolicies(const SecurityPolicies &) = default ;
      SecurityPolicies(SecurityPolicies &&) = default ;
      SecurityPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityPolicies() = default ;
      SecurityPolicies& operator=(const SecurityPolicies &) = default ;
      SecurityPolicies& operator=(SecurityPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ciphers_ == nullptr
        && this->securityPolicyId_ == nullptr && this->TLSVersions_ == nullptr; };
      // ciphers Field Functions 
      bool hasCiphers() const { return this->ciphers_ != nullptr;};
      void deleteCiphers() { this->ciphers_ = nullptr;};
      inline const vector<string> & getCiphers() const { DARABONBA_PTR_GET_CONST(ciphers_, vector<string>) };
      inline vector<string> getCiphers() { DARABONBA_PTR_GET(ciphers_, vector<string>) };
      inline SecurityPolicies& setCiphers(const vector<string> & ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };
      inline SecurityPolicies& setCiphers(vector<string> && ciphers) { DARABONBA_PTR_SET_RVALUE(ciphers_, ciphers) };


      // securityPolicyId Field Functions 
      bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
      void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
      inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
      inline SecurityPolicies& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


      // TLSVersions Field Functions 
      bool hasTLSVersions() const { return this->TLSVersions_ != nullptr;};
      void deleteTLSVersions() { this->TLSVersions_ = nullptr;};
      inline const vector<string> & getTLSVersions() const { DARABONBA_PTR_GET_CONST(TLSVersions_, vector<string>) };
      inline vector<string> getTLSVersions() { DARABONBA_PTR_GET(TLSVersions_, vector<string>) };
      inline SecurityPolicies& setTLSVersions(const vector<string> & TLSVersions) { DARABONBA_PTR_SET_VALUE(TLSVersions_, TLSVersions) };
      inline SecurityPolicies& setTLSVersions(vector<string> && TLSVersions) { DARABONBA_PTR_SET_RVALUE(TLSVersions_, TLSVersions) };


    protected:
      // The supported cipher suite.
      shared_ptr<vector<string>> ciphers_ {};
      // The ID of the security policy.
      shared_ptr<string> securityPolicyId_ {};
      // The supported TLS protocol versions.
      shared_ptr<vector<string>> TLSVersions_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityPolicies_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemSecurityPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityPolicies Field Functions 
    bool hasSecurityPolicies() const { return this->securityPolicies_ != nullptr;};
    void deleteSecurityPolicies() { this->securityPolicies_ = nullptr;};
    inline const vector<ListSystemSecurityPoliciesResponseBody::SecurityPolicies> & getSecurityPolicies() const { DARABONBA_PTR_GET_CONST(securityPolicies_, vector<ListSystemSecurityPoliciesResponseBody::SecurityPolicies>) };
    inline vector<ListSystemSecurityPoliciesResponseBody::SecurityPolicies> getSecurityPolicies() { DARABONBA_PTR_GET(securityPolicies_, vector<ListSystemSecurityPoliciesResponseBody::SecurityPolicies>) };
    inline ListSystemSecurityPoliciesResponseBody& setSecurityPolicies(const vector<ListSystemSecurityPoliciesResponseBody::SecurityPolicies> & securityPolicies) { DARABONBA_PTR_SET_VALUE(securityPolicies_, securityPolicies) };
    inline ListSystemSecurityPoliciesResponseBody& setSecurityPolicies(vector<ListSystemSecurityPoliciesResponseBody::SecurityPolicies> && securityPolicies) { DARABONBA_PTR_SET_RVALUE(securityPolicies_, securityPolicies) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The security policies.
    shared_ptr<vector<ListSystemSecurityPoliciesResponseBody::SecurityPolicies>> securityPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
