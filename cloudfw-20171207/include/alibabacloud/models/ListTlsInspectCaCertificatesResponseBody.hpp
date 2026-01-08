// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTLSINSPECTCACERTIFICATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTLSINSPECTCACERTIFICATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListTlsInspectCACertificatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTlsInspectCACertificatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTlsInspectCACertificatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTlsInspectCACertificatesResponseBody() = default ;
    ListTlsInspectCACertificatesResponseBody(const ListTlsInspectCACertificatesResponseBody &) = default ;
    ListTlsInspectCACertificatesResponseBody(ListTlsInspectCACertificatesResponseBody &&) = default ;
    ListTlsInspectCACertificatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTlsInspectCACertificatesResponseBody() = default ;
    ListTlsInspectCACertificatesResponseBody& operator=(const ListTlsInspectCACertificatesResponseBody &) = default ;
    ListTlsInspectCACertificatesResponseBody& operator=(ListTlsInspectCACertificatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Certificates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
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
      Certificates() = default ;
      Certificates(const Certificates &) = default ;
      Certificates(Certificates &&) = default ;
      Certificates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Certificates() = default ;
      Certificates& operator=(const Certificates &) = default ;
      Certificates& operator=(Certificates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->aliasName_ == nullptr && this->caCertId_ == nullptr && this->caCertType_ == nullptr && this->expirationTime_ == nullptr && this->keySize_ == nullptr
        && this->parentCaCertId_ == nullptr && this->signAlgorithm_ == nullptr && this->status_ == nullptr; };
      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
      inline Certificates& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline Certificates& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // caCertId Field Functions 
      bool hasCaCertId() const { return this->caCertId_ != nullptr;};
      void deleteCaCertId() { this->caCertId_ = nullptr;};
      inline string getCaCertId() const { DARABONBA_PTR_GET_DEFAULT(caCertId_, "") };
      inline Certificates& setCaCertId(string caCertId) { DARABONBA_PTR_SET_VALUE(caCertId_, caCertId) };


      // caCertType Field Functions 
      bool hasCaCertType() const { return this->caCertType_ != nullptr;};
      void deleteCaCertType() { this->caCertType_ = nullptr;};
      inline string getCaCertType() const { DARABONBA_PTR_GET_DEFAULT(caCertType_, "") };
      inline Certificates& setCaCertType(string caCertType) { DARABONBA_PTR_SET_VALUE(caCertType_, caCertType) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
      inline Certificates& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // keySize Field Functions 
      bool hasKeySize() const { return this->keySize_ != nullptr;};
      void deleteKeySize() { this->keySize_ = nullptr;};
      inline int32_t getKeySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
      inline Certificates& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


      // parentCaCertId Field Functions 
      bool hasParentCaCertId() const { return this->parentCaCertId_ != nullptr;};
      void deleteParentCaCertId() { this->parentCaCertId_ = nullptr;};
      inline string getParentCaCertId() const { DARABONBA_PTR_GET_DEFAULT(parentCaCertId_, "") };
      inline Certificates& setParentCaCertId(string parentCaCertId) { DARABONBA_PTR_SET_VALUE(parentCaCertId_, parentCaCertId) };


      // signAlgorithm Field Functions 
      bool hasSignAlgorithm() const { return this->signAlgorithm_ != nullptr;};
      void deleteSignAlgorithm() { this->signAlgorithm_ = nullptr;};
      inline string getSignAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signAlgorithm_, "") };
      inline Certificates& setSignAlgorithm(string signAlgorithm) { DARABONBA_PTR_SET_VALUE(signAlgorithm_, signAlgorithm) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Certificates& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> algorithm_ {};
      shared_ptr<string> aliasName_ {};
      shared_ptr<string> caCertId_ {};
      shared_ptr<string> caCertType_ {};
      shared_ptr<int64_t> expirationTime_ {};
      shared_ptr<int32_t> keySize_ {};
      shared_ptr<string> parentCaCertId_ {};
      shared_ptr<string> signAlgorithm_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->certificates_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<ListTlsInspectCACertificatesResponseBody::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<ListTlsInspectCACertificatesResponseBody::Certificates>) };
    inline vector<ListTlsInspectCACertificatesResponseBody::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<ListTlsInspectCACertificatesResponseBody::Certificates>) };
    inline ListTlsInspectCACertificatesResponseBody& setCertificates(const vector<ListTlsInspectCACertificatesResponseBody::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline ListTlsInspectCACertificatesResponseBody& setCertificates(vector<ListTlsInspectCACertificatesResponseBody::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTlsInspectCACertificatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTlsInspectCACertificatesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListTlsInspectCACertificatesResponseBody::Certificates>> certificates_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
