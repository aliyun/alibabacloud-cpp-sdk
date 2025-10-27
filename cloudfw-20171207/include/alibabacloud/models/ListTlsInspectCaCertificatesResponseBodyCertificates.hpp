// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTLSINSPECTCACERTIFICATESRESPONSEBODYCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_LISTTLSINSPECTCACERTIFICATESRESPONSEBODYCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListTlsInspectCACertificatesResponseBodyCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTlsInspectCACertificatesResponseBodyCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(CaCertId, caCertId_);
      DARABONBA_PTR_TO_JSON(CaCertType, caCertType_);
      DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(KeySize, keySize_);
      DARABONBA_PTR_TO_JSON(ParentCaCertId, parentCaCertId_);
      DARABONBA_PTR_TO_JSON(SignAlgorithm, signAlgorithm_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListTlsInspectCACertificatesResponseBodyCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(CaCertId, caCertId_);
      DARABONBA_PTR_FROM_JSON(CaCertType, caCertType_);
      DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(KeySize, keySize_);
      DARABONBA_PTR_FROM_JSON(ParentCaCertId, parentCaCertId_);
      DARABONBA_PTR_FROM_JSON(SignAlgorithm, signAlgorithm_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListTlsInspectCACertificatesResponseBodyCertificates() = default ;
    ListTlsInspectCACertificatesResponseBodyCertificates(const ListTlsInspectCACertificatesResponseBodyCertificates &) = default ;
    ListTlsInspectCACertificatesResponseBodyCertificates(ListTlsInspectCACertificatesResponseBodyCertificates &&) = default ;
    ListTlsInspectCACertificatesResponseBodyCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTlsInspectCACertificatesResponseBodyCertificates() = default ;
    ListTlsInspectCACertificatesResponseBodyCertificates& operator=(const ListTlsInspectCACertificatesResponseBodyCertificates &) = default ;
    ListTlsInspectCACertificatesResponseBodyCertificates& operator=(ListTlsInspectCACertificatesResponseBodyCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && return this->aliasName_ == nullptr && return this->caCertId_ == nullptr && return this->caCertType_ == nullptr && return this->expirationTime_ == nullptr && return this->keySize_ == nullptr
        && return this->parentCaCertId_ == nullptr && return this->signAlgorithm_ == nullptr && return this->status_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline ListTlsInspectCACertificatesResponseBodyCertificates& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline ListTlsInspectCACertificatesResponseBodyCertificates& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // caCertId Field Functions 
    bool hasCaCertId() const { return this->caCertId_ != nullptr;};
    void deleteCaCertId() { this->caCertId_ = nullptr;};
    inline string caCertId() const { DARABONBA_PTR_GET_DEFAULT(caCertId_, "") };
    inline ListTlsInspectCACertificatesResponseBodyCertificates& setCaCertId(string caCertId) { DARABONBA_PTR_SET_VALUE(caCertId_, caCertId) };


    // caCertType Field Functions 
    bool hasCaCertType() const { return this->caCertType_ != nullptr;};
    void deleteCaCertType() { this->caCertType_ = nullptr;};
    inline string caCertType() const { DARABONBA_PTR_GET_DEFAULT(caCertType_, "") };
    inline ListTlsInspectCACertificatesResponseBodyCertificates& setCaCertType(string caCertType) { DARABONBA_PTR_SET_VALUE(caCertType_, caCertType) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline int64_t expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
    inline ListTlsInspectCACertificatesResponseBodyCertificates& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // keySize Field Functions 
    bool hasKeySize() const { return this->keySize_ != nullptr;};
    void deleteKeySize() { this->keySize_ = nullptr;};
    inline int32_t keySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
    inline ListTlsInspectCACertificatesResponseBodyCertificates& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


    // parentCaCertId Field Functions 
    bool hasParentCaCertId() const { return this->parentCaCertId_ != nullptr;};
    void deleteParentCaCertId() { this->parentCaCertId_ = nullptr;};
    inline string parentCaCertId() const { DARABONBA_PTR_GET_DEFAULT(parentCaCertId_, "") };
    inline ListTlsInspectCACertificatesResponseBodyCertificates& setParentCaCertId(string parentCaCertId) { DARABONBA_PTR_SET_VALUE(parentCaCertId_, parentCaCertId) };


    // signAlgorithm Field Functions 
    bool hasSignAlgorithm() const { return this->signAlgorithm_ != nullptr;};
    void deleteSignAlgorithm() { this->signAlgorithm_ = nullptr;};
    inline string signAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signAlgorithm_, "") };
    inline ListTlsInspectCACertificatesResponseBodyCertificates& setSignAlgorithm(string signAlgorithm) { DARABONBA_PTR_SET_VALUE(signAlgorithm_, signAlgorithm) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTlsInspectCACertificatesResponseBodyCertificates& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> algorithm_ = nullptr;
    std::shared_ptr<string> aliasName_ = nullptr;
    std::shared_ptr<string> caCertId_ = nullptr;
    std::shared_ptr<string> caCertType_ = nullptr;
    std::shared_ptr<int64_t> expirationTime_ = nullptr;
    std::shared_ptr<int32_t> keySize_ = nullptr;
    std::shared_ptr<string> parentCaCertId_ = nullptr;
    std::shared_ptr<string> signAlgorithm_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
