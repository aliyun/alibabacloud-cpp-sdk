// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertList, certList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertList, certList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCertResponseBody() = default ;
    ListCertResponseBody(const ListCertResponseBody &) = default ;
    ListCertResponseBody(ListCertResponseBody &&) = default ;
    ListCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertResponseBody() = default ;
    ListCertResponseBody& operator=(const ListCertResponseBody &) = default ;
    ListCertResponseBody& operator=(ListCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertList& obj) { 
        DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_TO_JSON(CertType, certType_);
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(ExistPrivateKey, existPrivateKey_);
        DARABONBA_PTR_TO_JSON(Identifier, identifier_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(Sans, sans_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(WhId, whId_);
        DARABONBA_PTR_TO_JSON(WhInstanceId, whInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, CertList& obj) { 
        DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_FROM_JSON(CertType, certType_);
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(ExistPrivateKey, existPrivateKey_);
        DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(Sans, sans_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(WhId, whId_);
        DARABONBA_PTR_FROM_JSON(WhInstanceId, whInstanceId_);
      };
      CertList() = default ;
      CertList(const CertList &) = default ;
      CertList(CertList &&) = default ;
      CertList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertList() = default ;
      CertList& operator=(const CertList &) = default ;
      CertList& operator=(CertList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->afterDate_ == nullptr
        && this->beforeDate_ == nullptr && this->certType_ == nullptr && this->commonName_ == nullptr && this->existPrivateKey_ == nullptr && this->identifier_ == nullptr
        && this->issuer_ == nullptr && this->sans_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr && this->whId_ == nullptr
        && this->whInstanceId_ == nullptr; };
      // afterDate Field Functions 
      bool hasAfterDate() const { return this->afterDate_ != nullptr;};
      void deleteAfterDate() { this->afterDate_ = nullptr;};
      inline int64_t getAfterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, 0L) };
      inline CertList& setAfterDate(int64_t afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


      // beforeDate Field Functions 
      bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
      void deleteBeforeDate() { this->beforeDate_ = nullptr;};
      inline int64_t getBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, 0L) };
      inline CertList& setBeforeDate(int64_t beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
      inline CertList& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline CertList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // existPrivateKey Field Functions 
      bool hasExistPrivateKey() const { return this->existPrivateKey_ != nullptr;};
      void deleteExistPrivateKey() { this->existPrivateKey_ = nullptr;};
      inline bool getExistPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(existPrivateKey_, false) };
      inline CertList& setExistPrivateKey(bool existPrivateKey) { DARABONBA_PTR_SET_VALUE(existPrivateKey_, existPrivateKey) };


      // identifier Field Functions 
      bool hasIdentifier() const { return this->identifier_ != nullptr;};
      void deleteIdentifier() { this->identifier_ = nullptr;};
      inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
      inline CertList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline CertList& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // sans Field Functions 
      bool hasSans() const { return this->sans_ != nullptr;};
      void deleteSans() { this->sans_ = nullptr;};
      inline string getSans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
      inline CertList& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline CertList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CertList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // whId Field Functions 
      bool hasWhId() const { return this->whId_ != nullptr;};
      void deleteWhId() { this->whId_ = nullptr;};
      inline int64_t getWhId() const { DARABONBA_PTR_GET_DEFAULT(whId_, 0L) };
      inline CertList& setWhId(int64_t whId) { DARABONBA_PTR_SET_VALUE(whId_, whId) };


      // whInstanceId Field Functions 
      bool hasWhInstanceId() const { return this->whInstanceId_ != nullptr;};
      void deleteWhInstanceId() { this->whInstanceId_ = nullptr;};
      inline string getWhInstanceId() const { DARABONBA_PTR_GET_DEFAULT(whInstanceId_, "") };
      inline CertList& setWhInstanceId(string whInstanceId) { DARABONBA_PTR_SET_VALUE(whInstanceId_, whInstanceId) };


    protected:
      // The expiration time of the certificate. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> afterDate_ {};
      // The issuance time of the certificate. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> beforeDate_ {};
      // 证书的类型 。取值：
      // 
      // - **CA**：表示CA证书。
      // - **CERT**：表示签发的证书。
      shared_ptr<string> certType_ {};
      // The domain name.
      shared_ptr<string> commonName_ {};
      // Indicates whether the certificate contains a private key. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> existPrivateKey_ {};
      // The unique identifier of the certificate.
      shared_ptr<string> identifier_ {};
      // The issuer of the certificate.
      shared_ptr<string> issuer_ {};
      // The domain names that are bound to the certificate. Multiple domain names are separated by commas.
      shared_ptr<string> sans_ {};
      // The source of the certificate. Valid values:
      // 
      // *   **upload**: uploaded certificate
      // *   **aliyun**: Alibaba Cloud certificate
      shared_ptr<string> sourceType_ {};
      // The status of the certificate. Valid values:
      // 
      // *   **ISSUE**: issued
      // *   **REVOKE**: revoked
      shared_ptr<string> status_ {};
      // The ID of the certificate repository.
      shared_ptr<int64_t> whId_ {};
      // The instance ID of the certificate repository.
      shared_ptr<string> whInstanceId_ {};
    };

    virtual bool empty() const override { return this->certList_ == nullptr
        && this->currentPage_ == nullptr && this->requestId_ == nullptr && this->showSize_ == nullptr && this->totalCount_ == nullptr; };
    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const vector<ListCertResponseBody::CertList> & getCertList() const { DARABONBA_PTR_GET_CONST(certList_, vector<ListCertResponseBody::CertList>) };
    inline vector<ListCertResponseBody::CertList> getCertList() { DARABONBA_PTR_GET(certList_, vector<ListCertResponseBody::CertList>) };
    inline ListCertResponseBody& setCertList(const vector<ListCertResponseBody::CertList> & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline ListCertResponseBody& setCertList(vector<ListCertResponseBody::CertList> && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListCertResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int64_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0L) };
    inline ListCertResponseBody& setShowSize(int64_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCertResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the certificates.
    shared_ptr<vector<ListCertResponseBody::CertList>> certList_ {};
    // The page number of the returned page. Default value: 1.
    shared_ptr<int64_t> currentPage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned per page. Default value: 50.
    shared_ptr<int64_t> showSize_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
