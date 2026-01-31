// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTIFICATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTIFICATESRESPONSEBODY_HPP_
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
  class ListCertificatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertificatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateList, certificateList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertificatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateList, certificateList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCertificatesResponseBody() = default ;
    ListCertificatesResponseBody(const ListCertificatesResponseBody &) = default ;
    ListCertificatesResponseBody(ListCertificatesResponseBody &&) = default ;
    ListCertificatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertificatesResponseBody() = default ;
    ListCertificatesResponseBody& operator=(const ListCertificatesResponseBody &) = default ;
    ListCertificatesResponseBody& operator=(ListCertificatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertificateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertificateList& obj) { 
        DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
        DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
        DARABONBA_PTR_TO_JSON(CertificateSource, certificateSource_);
        DARABONBA_PTR_TO_JSON(CertificateStatus, certificateStatus_);
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(ExistPrivateKey, existPrivateKey_);
        DARABONBA_PTR_TO_JSON(FingerPrint, fingerPrint_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(KeySize, keySize_);
        DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_TO_JSON(Serial, serial_);
        DARABONBA_PTR_TO_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
        DARABONBA_PTR_TO_JSON(UsingProductList, usingProductList_);
      };
      friend void from_json(const Darabonba::Json& j, CertificateList& obj) { 
        DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
        DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
        DARABONBA_PTR_FROM_JSON(CertificateSource, certificateSource_);
        DARABONBA_PTR_FROM_JSON(CertificateStatus, certificateStatus_);
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(ExistPrivateKey, existPrivateKey_);
        DARABONBA_PTR_FROM_JSON(FingerPrint, fingerPrint_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(KeySize, keySize_);
        DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_FROM_JSON(Serial, serial_);
        DARABONBA_PTR_FROM_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
        DARABONBA_PTR_FROM_JSON(UsingProductList, usingProductList_);
      };
      CertificateList() = default ;
      CertificateList(const CertificateList &) = default ;
      CertificateList(CertificateList &&) = default ;
      CertificateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertificateList() = default ;
      CertificateList& operator=(const CertificateList &) = default ;
      CertificateList& operator=(CertificateList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->certIdentifier_ == nullptr && this->certificateId_ == nullptr && this->certificateName_ == nullptr && this->certificateSource_ == nullptr && this->certificateStatus_ == nullptr
        && this->commonName_ == nullptr && this->domain_ == nullptr && this->existPrivateKey_ == nullptr && this->fingerPrint_ == nullptr && this->instanceId_ == nullptr
        && this->issuer_ == nullptr && this->keySize_ == nullptr && this->notAfter_ == nullptr && this->notBefore_ == nullptr && this->serial_ == nullptr
        && this->subjectAlternativeNames_ == nullptr && this->usingProductList_ == nullptr; };
      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
      inline CertificateList& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // certIdentifier Field Functions 
      bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
      void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
      inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
      inline CertificateList& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


      // certificateId Field Functions 
      bool hasCertificateId() const { return this->certificateId_ != nullptr;};
      void deleteCertificateId() { this->certificateId_ = nullptr;};
      inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
      inline CertificateList& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


      // certificateName Field Functions 
      bool hasCertificateName() const { return this->certificateName_ != nullptr;};
      void deleteCertificateName() { this->certificateName_ = nullptr;};
      inline string getCertificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
      inline CertificateList& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


      // certificateSource Field Functions 
      bool hasCertificateSource() const { return this->certificateSource_ != nullptr;};
      void deleteCertificateSource() { this->certificateSource_ = nullptr;};
      inline string getCertificateSource() const { DARABONBA_PTR_GET_DEFAULT(certificateSource_, "") };
      inline CertificateList& setCertificateSource(string certificateSource) { DARABONBA_PTR_SET_VALUE(certificateSource_, certificateSource) };


      // certificateStatus Field Functions 
      bool hasCertificateStatus() const { return this->certificateStatus_ != nullptr;};
      void deleteCertificateStatus() { this->certificateStatus_ = nullptr;};
      inline string getCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateStatus_, "") };
      inline CertificateList& setCertificateStatus(string certificateStatus) { DARABONBA_PTR_SET_VALUE(certificateStatus_, certificateStatus) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline CertificateList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline CertificateList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // existPrivateKey Field Functions 
      bool hasExistPrivateKey() const { return this->existPrivateKey_ != nullptr;};
      void deleteExistPrivateKey() { this->existPrivateKey_ = nullptr;};
      inline bool getExistPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(existPrivateKey_, false) };
      inline CertificateList& setExistPrivateKey(bool existPrivateKey) { DARABONBA_PTR_SET_VALUE(existPrivateKey_, existPrivateKey) };


      // fingerPrint Field Functions 
      bool hasFingerPrint() const { return this->fingerPrint_ != nullptr;};
      void deleteFingerPrint() { this->fingerPrint_ = nullptr;};
      inline string getFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(fingerPrint_, "") };
      inline CertificateList& setFingerPrint(string fingerPrint) { DARABONBA_PTR_SET_VALUE(fingerPrint_, fingerPrint) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CertificateList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline CertificateList& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // keySize Field Functions 
      bool hasKeySize() const { return this->keySize_ != nullptr;};
      void deleteKeySize() { this->keySize_ = nullptr;};
      inline int32_t getKeySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
      inline CertificateList& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


      // notAfter Field Functions 
      bool hasNotAfter() const { return this->notAfter_ != nullptr;};
      void deleteNotAfter() { this->notAfter_ = nullptr;};
      inline int64_t getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, 0L) };
      inline CertificateList& setNotAfter(int64_t notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


      // notBefore Field Functions 
      bool hasNotBefore() const { return this->notBefore_ != nullptr;};
      void deleteNotBefore() { this->notBefore_ = nullptr;};
      inline int64_t getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, 0L) };
      inline CertificateList& setNotBefore(int64_t notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


      // serial Field Functions 
      bool hasSerial() const { return this->serial_ != nullptr;};
      void deleteSerial() { this->serial_ = nullptr;};
      inline string getSerial() const { DARABONBA_PTR_GET_DEFAULT(serial_, "") };
      inline CertificateList& setSerial(string serial) { DARABONBA_PTR_SET_VALUE(serial_, serial) };


      // subjectAlternativeNames Field Functions 
      bool hasSubjectAlternativeNames() const { return this->subjectAlternativeNames_ != nullptr;};
      void deleteSubjectAlternativeNames() { this->subjectAlternativeNames_ = nullptr;};
      inline const vector<string> & getSubjectAlternativeNames() const { DARABONBA_PTR_GET_CONST(subjectAlternativeNames_, vector<string>) };
      inline vector<string> getSubjectAlternativeNames() { DARABONBA_PTR_GET(subjectAlternativeNames_, vector<string>) };
      inline CertificateList& setSubjectAlternativeNames(const vector<string> & subjectAlternativeNames) { DARABONBA_PTR_SET_VALUE(subjectAlternativeNames_, subjectAlternativeNames) };
      inline CertificateList& setSubjectAlternativeNames(vector<string> && subjectAlternativeNames) { DARABONBA_PTR_SET_RVALUE(subjectAlternativeNames_, subjectAlternativeNames) };


      // usingProductList Field Functions 
      bool hasUsingProductList() const { return this->usingProductList_ != nullptr;};
      void deleteUsingProductList() { this->usingProductList_ = nullptr;};
      inline const vector<string> & getUsingProductList() const { DARABONBA_PTR_GET_CONST(usingProductList_, vector<string>) };
      inline vector<string> getUsingProductList() { DARABONBA_PTR_GET(usingProductList_, vector<string>) };
      inline CertificateList& setUsingProductList(const vector<string> & usingProductList) { DARABONBA_PTR_SET_VALUE(usingProductList_, usingProductList) };
      inline CertificateList& setUsingProductList(vector<string> && usingProductList) { DARABONBA_PTR_SET_RVALUE(usingProductList_, usingProductList) };


    protected:
      shared_ptr<string> algorithm_ {};
      shared_ptr<string> certIdentifier_ {};
      shared_ptr<string> certificateId_ {};
      shared_ptr<string> certificateName_ {};
      shared_ptr<string> certificateSource_ {};
      shared_ptr<string> certificateStatus_ {};
      shared_ptr<string> commonName_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<bool> existPrivateKey_ {};
      shared_ptr<string> fingerPrint_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> issuer_ {};
      shared_ptr<int32_t> keySize_ {};
      shared_ptr<int64_t> notAfter_ {};
      shared_ptr<int64_t> notBefore_ {};
      shared_ptr<string> serial_ {};
      shared_ptr<vector<string>> subjectAlternativeNames_ {};
      shared_ptr<vector<string>> usingProductList_ {};
    };

    virtual bool empty() const override { return this->certificateList_ == nullptr
        && this->currentPage_ == nullptr && this->requestId_ == nullptr && this->showSize_ == nullptr && this->totalCount_ == nullptr; };
    // certificateList Field Functions 
    bool hasCertificateList() const { return this->certificateList_ != nullptr;};
    void deleteCertificateList() { this->certificateList_ = nullptr;};
    inline const vector<ListCertificatesResponseBody::CertificateList> & getCertificateList() const { DARABONBA_PTR_GET_CONST(certificateList_, vector<ListCertificatesResponseBody::CertificateList>) };
    inline vector<ListCertificatesResponseBody::CertificateList> getCertificateList() { DARABONBA_PTR_GET(certificateList_, vector<ListCertificatesResponseBody::CertificateList>) };
    inline ListCertificatesResponseBody& setCertificateList(const vector<ListCertificatesResponseBody::CertificateList> & certificateList) { DARABONBA_PTR_SET_VALUE(certificateList_, certificateList) };
    inline ListCertificatesResponseBody& setCertificateList(vector<ListCertificatesResponseBody::CertificateList> && certificateList) { DARABONBA_PTR_SET_RVALUE(certificateList_, certificateList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCertificatesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCertificatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListCertificatesResponseBody& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCertificatesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListCertificatesResponseBody::CertificateList>> certificateList_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> showSize_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
