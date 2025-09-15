// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTRESPONSEBODYCERTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTRESPONSEBODYCERTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCertResponseBodyCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertResponseBodyCertList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListCertResponseBodyCertList& obj) { 
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
    ListCertResponseBodyCertList() = default ;
    ListCertResponseBodyCertList(const ListCertResponseBodyCertList &) = default ;
    ListCertResponseBodyCertList(ListCertResponseBodyCertList &&) = default ;
    ListCertResponseBodyCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertResponseBodyCertList() = default ;
    ListCertResponseBodyCertList& operator=(const ListCertResponseBodyCertList &) = default ;
    ListCertResponseBodyCertList& operator=(ListCertResponseBodyCertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->afterDate_ != nullptr
        && this->beforeDate_ != nullptr && this->certType_ != nullptr && this->commonName_ != nullptr && this->existPrivateKey_ != nullptr && this->identifier_ != nullptr
        && this->issuer_ != nullptr && this->sans_ != nullptr && this->sourceType_ != nullptr && this->status_ != nullptr && this->whId_ != nullptr
        && this->whInstanceId_ != nullptr; };
    // afterDate Field Functions 
    bool hasAfterDate() const { return this->afterDate_ != nullptr;};
    void deleteAfterDate() { this->afterDate_ = nullptr;};
    inline int64_t afterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, 0L) };
    inline ListCertResponseBodyCertList& setAfterDate(int64_t afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


    // beforeDate Field Functions 
    bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
    void deleteBeforeDate() { this->beforeDate_ = nullptr;};
    inline int64_t beforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, 0L) };
    inline ListCertResponseBodyCertList& setBeforeDate(int64_t beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline ListCertResponseBodyCertList& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline ListCertResponseBodyCertList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // existPrivateKey Field Functions 
    bool hasExistPrivateKey() const { return this->existPrivateKey_ != nullptr;};
    void deleteExistPrivateKey() { this->existPrivateKey_ = nullptr;};
    inline bool existPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(existPrivateKey_, false) };
    inline ListCertResponseBodyCertList& setExistPrivateKey(bool existPrivateKey) { DARABONBA_PTR_SET_VALUE(existPrivateKey_, existPrivateKey) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListCertResponseBodyCertList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline ListCertResponseBodyCertList& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline ListCertResponseBodyCertList& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListCertResponseBodyCertList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCertResponseBodyCertList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // whId Field Functions 
    bool hasWhId() const { return this->whId_ != nullptr;};
    void deleteWhId() { this->whId_ = nullptr;};
    inline int64_t whId() const { DARABONBA_PTR_GET_DEFAULT(whId_, 0L) };
    inline ListCertResponseBodyCertList& setWhId(int64_t whId) { DARABONBA_PTR_SET_VALUE(whId_, whId) };


    // whInstanceId Field Functions 
    bool hasWhInstanceId() const { return this->whInstanceId_ != nullptr;};
    void deleteWhInstanceId() { this->whInstanceId_ = nullptr;};
    inline string whInstanceId() const { DARABONBA_PTR_GET_DEFAULT(whInstanceId_, "") };
    inline ListCertResponseBodyCertList& setWhInstanceId(string whInstanceId) { DARABONBA_PTR_SET_VALUE(whInstanceId_, whInstanceId) };


  protected:
    // The expiration time of the certificate. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> afterDate_ = nullptr;
    // The issuance time of the certificate. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> beforeDate_ = nullptr;
    // 证书的类型 。取值：
    // 
    // - **CA**：表示CA证书。
    // - **CERT**：表示签发的证书。
    std::shared_ptr<string> certType_ = nullptr;
    // The domain name.
    std::shared_ptr<string> commonName_ = nullptr;
    // Indicates whether the certificate contains a private key. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> existPrivateKey_ = nullptr;
    // The unique identifier of the certificate.
    std::shared_ptr<string> identifier_ = nullptr;
    // The issuer of the certificate.
    std::shared_ptr<string> issuer_ = nullptr;
    // The domain names that are bound to the certificate. Multiple domain names are separated by commas.
    std::shared_ptr<string> sans_ = nullptr;
    // The source of the certificate. Valid values:
    // 
    // *   **upload**: uploaded certificate
    // *   **aliyun**: Alibaba Cloud certificate
    std::shared_ptr<string> sourceType_ = nullptr;
    // The status of the certificate. Valid values:
    // 
    // *   **ISSUE**: issued
    // *   **REVOKE**: revoked
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the certificate repository.
    std::shared_ptr<int64_t> whId_ = nullptr;
    // The instance ID of the certificate repository.
    std::shared_ptr<string> whInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
