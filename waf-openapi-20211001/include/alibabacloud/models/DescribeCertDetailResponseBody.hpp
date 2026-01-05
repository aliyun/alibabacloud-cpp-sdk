// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTDETAILRESPONSEBODY_HPP_
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
  class DescribeCertDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertDetail, certDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertDetail, certDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCertDetailResponseBody() = default ;
    DescribeCertDetailResponseBody(const DescribeCertDetailResponseBody &) = default ;
    DescribeCertDetailResponseBody(DescribeCertDetailResponseBody &&) = default ;
    DescribeCertDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertDetailResponseBody() = default ;
    DescribeCertDetailResponseBody& operator=(const DescribeCertDetailResponseBody &) = default ;
    DescribeCertDetailResponseBody& operator=(DescribeCertDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_TO_JSON(CertName, certName_);
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Sans, sans_);
      };
      friend void from_json(const Darabonba::Json& j, CertDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_FROM_JSON(CertName, certName_);
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Sans, sans_);
      };
      CertDetail() = default ;
      CertDetail(const CertDetail &) = default ;
      CertDetail(CertDetail &&) = default ;
      CertDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertDetail() = default ;
      CertDetail& operator=(const CertDetail &) = default ;
      CertDetail& operator=(CertDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->afterDate_ == nullptr
        && this->beforeDate_ == nullptr && this->certIdentifier_ == nullptr && this->certName_ == nullptr && this->commonName_ == nullptr && this->domain_ == nullptr
        && this->sans_ == nullptr; };
      // afterDate Field Functions 
      bool hasAfterDate() const { return this->afterDate_ != nullptr;};
      void deleteAfterDate() { this->afterDate_ = nullptr;};
      inline int64_t getAfterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, 0L) };
      inline CertDetail& setAfterDate(int64_t afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


      // beforeDate Field Functions 
      bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
      void deleteBeforeDate() { this->beforeDate_ = nullptr;};
      inline int64_t getBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, 0L) };
      inline CertDetail& setBeforeDate(int64_t beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


      // certIdentifier Field Functions 
      bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
      void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
      inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
      inline CertDetail& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


      // certName Field Functions 
      bool hasCertName() const { return this->certName_ != nullptr;};
      void deleteCertName() { this->certName_ = nullptr;};
      inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
      inline CertDetail& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline CertDetail& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline CertDetail& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // sans Field Functions 
      bool hasSans() const { return this->sans_ != nullptr;};
      void deleteSans() { this->sans_ = nullptr;};
      inline const vector<string> & getSans() const { DARABONBA_PTR_GET_CONST(sans_, vector<string>) };
      inline vector<string> getSans() { DARABONBA_PTR_GET(sans_, vector<string>) };
      inline CertDetail& setSans(const vector<string> & sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };
      inline CertDetail& setSans(vector<string> && sans) { DARABONBA_PTR_SET_RVALUE(sans_, sans) };


    protected:
      // The time when the certificate expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> afterDate_ {};
      // The time when the certificate was issued. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> beforeDate_ {};
      // The ID of the certificate.
      shared_ptr<string> certIdentifier_ {};
      // The name of the certificate.
      shared_ptr<string> certName_ {};
      // The primary domain name, which is a common name.
      shared_ptr<string> commonName_ {};
      // The domain name that is associated with the certificate.
      shared_ptr<string> domain_ {};
      // The other domain names that are associated with the certificate.
      shared_ptr<vector<string>> sans_ {};
    };

    virtual bool empty() const override { return this->certDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // certDetail Field Functions 
    bool hasCertDetail() const { return this->certDetail_ != nullptr;};
    void deleteCertDetail() { this->certDetail_ = nullptr;};
    inline const DescribeCertDetailResponseBody::CertDetail & getCertDetail() const { DARABONBA_PTR_GET_CONST(certDetail_, DescribeCertDetailResponseBody::CertDetail) };
    inline DescribeCertDetailResponseBody::CertDetail getCertDetail() { DARABONBA_PTR_GET(certDetail_, DescribeCertDetailResponseBody::CertDetail) };
    inline DescribeCertDetailResponseBody& setCertDetail(const DescribeCertDetailResponseBody::CertDetail & certDetail) { DARABONBA_PTR_SET_VALUE(certDetail_, certDetail) };
    inline DescribeCertDetailResponseBody& setCertDetail(DescribeCertDetailResponseBody::CertDetail && certDetail) { DARABONBA_PTR_SET_RVALUE(certDetail_, certDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCertDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the certificate.
    shared_ptr<DescribeCertDetailResponseBody::CertDetail> certDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
