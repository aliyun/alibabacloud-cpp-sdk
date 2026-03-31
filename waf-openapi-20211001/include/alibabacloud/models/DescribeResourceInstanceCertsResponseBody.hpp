// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEINSTANCECERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEINSTANCECERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourceInstanceCertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceInstanceCertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certs, certs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceInstanceCertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certs, certs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeResourceInstanceCertsResponseBody() = default ;
    DescribeResourceInstanceCertsResponseBody(const DescribeResourceInstanceCertsResponseBody &) = default ;
    DescribeResourceInstanceCertsResponseBody(DescribeResourceInstanceCertsResponseBody &&) = default ;
    DescribeResourceInstanceCertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceInstanceCertsResponseBody() = default ;
    DescribeResourceInstanceCertsResponseBody& operator=(const DescribeResourceInstanceCertsResponseBody &) = default ;
    DescribeResourceInstanceCertsResponseBody& operator=(DescribeResourceInstanceCertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Certs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Certs& obj) { 
        DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_TO_JSON(CertName, certName_);
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(IsChainCompleted, isChainCompleted_);
      };
      friend void from_json(const Darabonba::Json& j, Certs& obj) { 
        DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_FROM_JSON(CertName, certName_);
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(IsChainCompleted, isChainCompleted_);
      };
      Certs() = default ;
      Certs(const Certs &) = default ;
      Certs(Certs &&) = default ;
      Certs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Certs() = default ;
      Certs& operator=(const Certs &) = default ;
      Certs& operator=(Certs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->afterDate_ == nullptr
        && this->beforeDate_ == nullptr && this->certIdentifier_ == nullptr && this->certName_ == nullptr && this->commonName_ == nullptr && this->domain_ == nullptr
        && this->isChainCompleted_ == nullptr; };
      // afterDate Field Functions 
      bool hasAfterDate() const { return this->afterDate_ != nullptr;};
      void deleteAfterDate() { this->afterDate_ = nullptr;};
      inline int64_t getAfterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, 0L) };
      inline Certs& setAfterDate(int64_t afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


      // beforeDate Field Functions 
      bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
      void deleteBeforeDate() { this->beforeDate_ = nullptr;};
      inline int64_t getBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, 0L) };
      inline Certs& setBeforeDate(int64_t beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


      // certIdentifier Field Functions 
      bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
      void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
      inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
      inline Certs& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


      // certName Field Functions 
      bool hasCertName() const { return this->certName_ != nullptr;};
      void deleteCertName() { this->certName_ = nullptr;};
      inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
      inline Certs& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline Certs& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Certs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // isChainCompleted Field Functions 
      bool hasIsChainCompleted() const { return this->isChainCompleted_ != nullptr;};
      void deleteIsChainCompleted() { this->isChainCompleted_ = nullptr;};
      inline bool getIsChainCompleted() const { DARABONBA_PTR_GET_DEFAULT(isChainCompleted_, false) };
      inline Certs& setIsChainCompleted(bool isChainCompleted) { DARABONBA_PTR_SET_VALUE(isChainCompleted_, isChainCompleted) };


    protected:
      // The time when the certificate expires.
      shared_ptr<int64_t> afterDate_ {};
      // The time when the certificate was issued.
      shared_ptr<int64_t> beforeDate_ {};
      // The globally unique ID of the certificate. The value is in the "Certificate ID-cn-hangzhou" format. For example, if the ID of the certificate is 123, the value of CertIdentifier is 123-cn-hangzhou.
      shared_ptr<string> certIdentifier_ {};
      // The name of the certificate.
      shared_ptr<string> certName_ {};
      // The common name.
      shared_ptr<string> commonName_ {};
      // The domain name for which the certificate is issued.
      shared_ptr<string> domain_ {};
      // Indicates whether the certificate chain is complete.
      shared_ptr<bool> isChainCompleted_ {};
    };

    virtual bool empty() const override { return this->certs_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // certs Field Functions 
    bool hasCerts() const { return this->certs_ != nullptr;};
    void deleteCerts() { this->certs_ = nullptr;};
    inline const vector<DescribeResourceInstanceCertsResponseBody::Certs> & getCerts() const { DARABONBA_PTR_GET_CONST(certs_, vector<DescribeResourceInstanceCertsResponseBody::Certs>) };
    inline vector<DescribeResourceInstanceCertsResponseBody::Certs> getCerts() { DARABONBA_PTR_GET(certs_, vector<DescribeResourceInstanceCertsResponseBody::Certs>) };
    inline DescribeResourceInstanceCertsResponseBody& setCerts(const vector<DescribeResourceInstanceCertsResponseBody::Certs> & certs) { DARABONBA_PTR_SET_VALUE(certs_, certs) };
    inline DescribeResourceInstanceCertsResponseBody& setCerts(vector<DescribeResourceInstanceCertsResponseBody::Certs> && certs) { DARABONBA_PTR_SET_RVALUE(certs_, certs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceInstanceCertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeResourceInstanceCertsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The certificates.
    shared_ptr<vector<DescribeResourceInstanceCertsResponseBody::Certs>> certs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
