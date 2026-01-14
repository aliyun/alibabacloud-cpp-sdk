// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListSystemSecurityPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemSecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicies, securityPolicies_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemSecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicies, securityPolicies_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
        DARABONBA_PTR_TO_JSON(TlsVersions, tlsVersions_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_FROM_JSON(TlsVersions, tlsVersions_);
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
        && this->securityPolicyId_ == nullptr && this->tlsVersions_ == nullptr; };
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


      // tlsVersions Field Functions 
      bool hasTlsVersions() const { return this->tlsVersions_ != nullptr;};
      void deleteTlsVersions() { this->tlsVersions_ = nullptr;};
      inline const vector<string> & getTlsVersions() const { DARABONBA_PTR_GET_CONST(tlsVersions_, vector<string>) };
      inline vector<string> getTlsVersions() { DARABONBA_PTR_GET(tlsVersions_, vector<string>) };
      inline SecurityPolicies& setTlsVersions(const vector<string> & tlsVersions) { DARABONBA_PTR_SET_VALUE(tlsVersions_, tlsVersions) };
      inline SecurityPolicies& setTlsVersions(vector<string> && tlsVersions) { DARABONBA_PTR_SET_RVALUE(tlsVersions_, tlsVersions) };


    protected:
      // The supported cipher suites. The value of this parameter is determined by the value of **TLSVersions**.
      // 
      // The specified cipher suites must be supported by at least one value of **TLSVersions**. For example, if you set TLSVersions to **TLSv1.3**, you must specify cipher suites that are supported by **TLSv1.3**.
      // 
      // *   Valid values when TLSVersions is set to **TLSv1.0** or **TLSv1.1**:
      // 
      //     *   ECDHE-ECDSA-AES128-SHA
      //     *   ECDHE-ECDSA-AES256-SHA
      //     *   ECDHE-RSA-AES128-SHA
      //     *   ECDHE-RSA-AES256-SHA
      //     *   AES128-SHA
      //     *   AES256-SHA
      //     *   DES-CBC3-SHA
      // 
      // *   Valid values when TLSVersions is set to **TLSv1.2**:
      // 
      //     *   ECDHE-ECDSA-AES128-SHA
      //     *   ECDHE-ECDSA-AES256-SHA
      //     *   ECDHE-RSA-AES128-SHA
      //     *   ECDHE-RSA-AES256-SHA
      //     *   AES128-SHA
      //     *   AES256-SHA
      //     *   DES-CBC3-SHA
      //     *   ECDHE-ECDSA-AES128-GCM-SHA256
      //     *   ECDHE-ECDSA-AES256-GCM-SHA384
      //     *   ECDHE-ECDSA-AES128-SHA256
      //     *   ECDHE-ECDSA-AES256-SHA384
      //     *   ECDHE-RSA-AES128-GCM-SHA256
      //     *   ECDHE-RSA-AES256-GCM-SHA384
      //     *   ECDHE-RSA-AES128-SHA256
      //     *   ECDHE-RSA-AES256-SHA384
      //     *   AES128-GCM-SHA256
      //     *   AES256-GCM-SHA384
      //     *   AES128-SHA256
      //     *   AES256-SHA256
      // 
      // *   Valid values when TLSVersions is set to **TLSv1.3**:
      // 
      //     *   TLS_AES_128_GCM_SHA256
      //     *   TLS_AES_256_GCM_SHA384
      //     *   TLS_CHACHA20_POLY1305_SHA256
      //     *   TLS_AES_128_CCM_SHA256
      //     *   TLS_AES_128_CCM_8_SHA256
      shared_ptr<vector<string>> ciphers_ {};
      // The ID of the TLS security policy.
      shared_ptr<string> securityPolicyId_ {};
      // The supported TLS versions. Valid values: **TLSv1.0**, **TLSv1.1**, **TLSv1.2**, and **TLSv1.3**.
      shared_ptr<vector<string>> tlsVersions_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->securityPolicies_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSystemSecurityPoliciesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSystemSecurityPoliciesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


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


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSystemSecurityPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of TLS security policies.
    shared_ptr<vector<ListSystemSecurityPoliciesResponseBody::SecurityPolicies>> securityPolicies_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
