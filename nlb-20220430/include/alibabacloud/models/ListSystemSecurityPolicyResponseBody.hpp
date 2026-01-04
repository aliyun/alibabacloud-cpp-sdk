// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListSystemSecurityPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemSecurityPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicies, securityPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemSecurityPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicies, securityPolicies_);
    };
    ListSystemSecurityPolicyResponseBody() = default ;
    ListSystemSecurityPolicyResponseBody(const ListSystemSecurityPolicyResponseBody &) = default ;
    ListSystemSecurityPolicyResponseBody(ListSystemSecurityPolicyResponseBody &&) = default ;
    ListSystemSecurityPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemSecurityPolicyResponseBody() = default ;
    ListSystemSecurityPolicyResponseBody& operator=(const ListSystemSecurityPolicyResponseBody &) = default ;
    ListSystemSecurityPolicyResponseBody& operator=(ListSystemSecurityPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
        DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_TO_JSON(SecurityPolicyName, securityPolicyName_);
        DARABONBA_PTR_TO_JSON(TlsVersion, tlsVersion_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyName, securityPolicyName_);
        DARABONBA_PTR_FROM_JSON(TlsVersion, tlsVersion_);
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
        && this->securityPolicyId_ == nullptr && this->securityPolicyName_ == nullptr && this->tlsVersion_ == nullptr; };
      // ciphers Field Functions 
      bool hasCiphers() const { return this->ciphers_ != nullptr;};
      void deleteCiphers() { this->ciphers_ = nullptr;};
      inline string getCiphers() const { DARABONBA_PTR_GET_DEFAULT(ciphers_, "") };
      inline SecurityPolicies& setCiphers(string ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };


      // securityPolicyId Field Functions 
      bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
      void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
      inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
      inline SecurityPolicies& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


      // securityPolicyName Field Functions 
      bool hasSecurityPolicyName() const { return this->securityPolicyName_ != nullptr;};
      void deleteSecurityPolicyName() { this->securityPolicyName_ = nullptr;};
      inline string getSecurityPolicyName() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyName_, "") };
      inline SecurityPolicies& setSecurityPolicyName(string securityPolicyName) { DARABONBA_PTR_SET_VALUE(securityPolicyName_, securityPolicyName) };


      // tlsVersion Field Functions 
      bool hasTlsVersion() const { return this->tlsVersion_ != nullptr;};
      void deleteTlsVersion() { this->tlsVersion_ = nullptr;};
      inline string getTlsVersion() const { DARABONBA_PTR_GET_DEFAULT(tlsVersion_, "") };
      inline SecurityPolicies& setTlsVersion(string tlsVersion) { DARABONBA_PTR_SET_VALUE(tlsVersion_, tlsVersion) };


    protected:
      // The cipher suite.
      shared_ptr<string> ciphers_ {};
      // The ID of the TLS security policy.
      shared_ptr<string> securityPolicyId_ {};
      // The name of the TLS security policy.
      shared_ptr<string> securityPolicyName_ {};
      // The TLS version.
      shared_ptr<string> tlsVersion_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityPolicies_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemSecurityPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityPolicies Field Functions 
    bool hasSecurityPolicies() const { return this->securityPolicies_ != nullptr;};
    void deleteSecurityPolicies() { this->securityPolicies_ = nullptr;};
    inline const vector<ListSystemSecurityPolicyResponseBody::SecurityPolicies> & getSecurityPolicies() const { DARABONBA_PTR_GET_CONST(securityPolicies_, vector<ListSystemSecurityPolicyResponseBody::SecurityPolicies>) };
    inline vector<ListSystemSecurityPolicyResponseBody::SecurityPolicies> getSecurityPolicies() { DARABONBA_PTR_GET(securityPolicies_, vector<ListSystemSecurityPolicyResponseBody::SecurityPolicies>) };
    inline ListSystemSecurityPolicyResponseBody& setSecurityPolicies(const vector<ListSystemSecurityPolicyResponseBody::SecurityPolicies> & securityPolicies) { DARABONBA_PTR_SET_VALUE(securityPolicies_, securityPolicies) };
    inline ListSystemSecurityPolicyResponseBody& setSecurityPolicies(vector<ListSystemSecurityPolicyResponseBody::SecurityPolicies> && securityPolicies) { DARABONBA_PTR_SET_RVALUE(securityPolicies_, securityPolicies) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // A list of TLS security policies.
    shared_ptr<vector<ListSystemSecurityPolicyResponseBody::SecurityPolicies>> securityPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
