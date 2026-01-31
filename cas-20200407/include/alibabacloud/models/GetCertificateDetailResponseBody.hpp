// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATEDETAILRESPONSEBODY_HPP_
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
  class GetCertificateDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificateDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertificateChainList, certificateChainList_);
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Serial, serial_);
      DARABONBA_PTR_TO_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UsingProductList, usingProductList_);
    };
    friend void from_json(const Darabonba::Json& j, GetCertificateDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertificateChainList, certificateChainList_);
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Serial, serial_);
      DARABONBA_PTR_FROM_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UsingProductList, usingProductList_);
    };
    GetCertificateDetailResponseBody() = default ;
    GetCertificateDetailResponseBody(const GetCertificateDetailResponseBody &) = default ;
    GetCertificateDetailResponseBody(GetCertificateDetailResponseBody &&) = default ;
    GetCertificateDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificateDetailResponseBody() = default ;
    GetCertificateDetailResponseBody& operator=(const GetCertificateDetailResponseBody &) = default ;
    GetCertificateDetailResponseBody& operator=(GetCertificateDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      shared_ptr<string> tagKey_ {};
      shared_ptr<string> tagValue_ {};
    };

    class CertificateChainList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertificateChainList& obj) { 
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_TO_JSON(RemainDay, remainDay_);
        DARABONBA_PTR_TO_JSON(Subject, subject_);
      };
      friend void from_json(const Darabonba::Json& j, CertificateChainList& obj) { 
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_FROM_JSON(RemainDay, remainDay_);
        DARABONBA_PTR_FROM_JSON(Subject, subject_);
      };
      CertificateChainList() = default ;
      CertificateChainList(const CertificateChainList &) = default ;
      CertificateChainList(CertificateChainList &&) = default ;
      CertificateChainList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertificateChainList() = default ;
      CertificateChainList& operator=(const CertificateChainList &) = default ;
      CertificateChainList& operator=(CertificateChainList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->issuer_ == nullptr
        && this->notAfter_ == nullptr && this->notBefore_ == nullptr && this->remainDay_ == nullptr && this->subject_ == nullptr; };
      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline CertificateChainList& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // notAfter Field Functions 
      bool hasNotAfter() const { return this->notAfter_ != nullptr;};
      void deleteNotAfter() { this->notAfter_ = nullptr;};
      inline int64_t getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, 0L) };
      inline CertificateChainList& setNotAfter(int64_t notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


      // notBefore Field Functions 
      bool hasNotBefore() const { return this->notBefore_ != nullptr;};
      void deleteNotBefore() { this->notBefore_ = nullptr;};
      inline int64_t getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, 0L) };
      inline CertificateChainList& setNotBefore(int64_t notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


      // remainDay Field Functions 
      bool hasRemainDay() const { return this->remainDay_ != nullptr;};
      void deleteRemainDay() { this->remainDay_ = nullptr;};
      inline int32_t getRemainDay() const { DARABONBA_PTR_GET_DEFAULT(remainDay_, 0) };
      inline CertificateChainList& setRemainDay(int32_t remainDay) { DARABONBA_PTR_SET_VALUE(remainDay_, remainDay) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
      inline CertificateChainList& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    protected:
      shared_ptr<string> issuer_ {};
      shared_ptr<int64_t> notAfter_ {};
      shared_ptr<int64_t> notBefore_ {};
      shared_ptr<int32_t> remainDay_ {};
      shared_ptr<string> subject_ {};
    };

    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->certIdentifier_ == nullptr && this->certificateChainList_ == nullptr && this->certificateId_ == nullptr && this->certificateName_ == nullptr && this->certificateSource_ == nullptr
        && this->certificateStatus_ == nullptr && this->commonName_ == nullptr && this->domain_ == nullptr && this->existPrivateKey_ == nullptr && this->fingerPrint_ == nullptr
        && this->instanceId_ == nullptr && this->issuer_ == nullptr && this->keySize_ == nullptr && this->notAfter_ == nullptr && this->notBefore_ == nullptr
        && this->requestId_ == nullptr && this->serial_ == nullptr && this->subjectAlternativeNames_ == nullptr && this->tags_ == nullptr && this->usingProductList_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline GetCertificateDetailResponseBody& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline GetCertificateDetailResponseBody& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certificateChainList Field Functions 
    bool hasCertificateChainList() const { return this->certificateChainList_ != nullptr;};
    void deleteCertificateChainList() { this->certificateChainList_ = nullptr;};
    inline const vector<GetCertificateDetailResponseBody::CertificateChainList> & getCertificateChainList() const { DARABONBA_PTR_GET_CONST(certificateChainList_, vector<GetCertificateDetailResponseBody::CertificateChainList>) };
    inline vector<GetCertificateDetailResponseBody::CertificateChainList> getCertificateChainList() { DARABONBA_PTR_GET(certificateChainList_, vector<GetCertificateDetailResponseBody::CertificateChainList>) };
    inline GetCertificateDetailResponseBody& setCertificateChainList(const vector<GetCertificateDetailResponseBody::CertificateChainList> & certificateChainList) { DARABONBA_PTR_SET_VALUE(certificateChainList_, certificateChainList) };
    inline GetCertificateDetailResponseBody& setCertificateChainList(vector<GetCertificateDetailResponseBody::CertificateChainList> && certificateChainList) { DARABONBA_PTR_SET_RVALUE(certificateChainList_, certificateChainList) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline int32_t getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, 0) };
    inline GetCertificateDetailResponseBody& setCertificateId(int32_t certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // certificateName Field Functions 
    bool hasCertificateName() const { return this->certificateName_ != nullptr;};
    void deleteCertificateName() { this->certificateName_ = nullptr;};
    inline string getCertificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
    inline GetCertificateDetailResponseBody& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


    // certificateSource Field Functions 
    bool hasCertificateSource() const { return this->certificateSource_ != nullptr;};
    void deleteCertificateSource() { this->certificateSource_ = nullptr;};
    inline string getCertificateSource() const { DARABONBA_PTR_GET_DEFAULT(certificateSource_, "") };
    inline GetCertificateDetailResponseBody& setCertificateSource(string certificateSource) { DARABONBA_PTR_SET_VALUE(certificateSource_, certificateSource) };


    // certificateStatus Field Functions 
    bool hasCertificateStatus() const { return this->certificateStatus_ != nullptr;};
    void deleteCertificateStatus() { this->certificateStatus_ = nullptr;};
    inline string getCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateStatus_, "") };
    inline GetCertificateDetailResponseBody& setCertificateStatus(string certificateStatus) { DARABONBA_PTR_SET_VALUE(certificateStatus_, certificateStatus) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline GetCertificateDetailResponseBody& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetCertificateDetailResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // existPrivateKey Field Functions 
    bool hasExistPrivateKey() const { return this->existPrivateKey_ != nullptr;};
    void deleteExistPrivateKey() { this->existPrivateKey_ = nullptr;};
    inline bool getExistPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(existPrivateKey_, false) };
    inline GetCertificateDetailResponseBody& setExistPrivateKey(bool existPrivateKey) { DARABONBA_PTR_SET_VALUE(existPrivateKey_, existPrivateKey) };


    // fingerPrint Field Functions 
    bool hasFingerPrint() const { return this->fingerPrint_ != nullptr;};
    void deleteFingerPrint() { this->fingerPrint_ = nullptr;};
    inline string getFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(fingerPrint_, "") };
    inline GetCertificateDetailResponseBody& setFingerPrint(string fingerPrint) { DARABONBA_PTR_SET_VALUE(fingerPrint_, fingerPrint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCertificateDetailResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline GetCertificateDetailResponseBody& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // keySize Field Functions 
    bool hasKeySize() const { return this->keySize_ != nullptr;};
    void deleteKeySize() { this->keySize_ = nullptr;};
    inline int32_t getKeySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
    inline GetCertificateDetailResponseBody& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline int64_t getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, 0L) };
    inline GetCertificateDetailResponseBody& setNotAfter(int64_t notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline int64_t getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, 0L) };
    inline GetCertificateDetailResponseBody& setNotBefore(int64_t notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCertificateDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serial Field Functions 
    bool hasSerial() const { return this->serial_ != nullptr;};
    void deleteSerial() { this->serial_ = nullptr;};
    inline string getSerial() const { DARABONBA_PTR_GET_DEFAULT(serial_, "") };
    inline GetCertificateDetailResponseBody& setSerial(string serial) { DARABONBA_PTR_SET_VALUE(serial_, serial) };


    // subjectAlternativeNames Field Functions 
    bool hasSubjectAlternativeNames() const { return this->subjectAlternativeNames_ != nullptr;};
    void deleteSubjectAlternativeNames() { this->subjectAlternativeNames_ = nullptr;};
    inline const vector<string> & getSubjectAlternativeNames() const { DARABONBA_PTR_GET_CONST(subjectAlternativeNames_, vector<string>) };
    inline vector<string> getSubjectAlternativeNames() { DARABONBA_PTR_GET(subjectAlternativeNames_, vector<string>) };
    inline GetCertificateDetailResponseBody& setSubjectAlternativeNames(const vector<string> & subjectAlternativeNames) { DARABONBA_PTR_SET_VALUE(subjectAlternativeNames_, subjectAlternativeNames) };
    inline GetCertificateDetailResponseBody& setSubjectAlternativeNames(vector<string> && subjectAlternativeNames) { DARABONBA_PTR_SET_RVALUE(subjectAlternativeNames_, subjectAlternativeNames) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetCertificateDetailResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetCertificateDetailResponseBody::Tags>) };
    inline vector<GetCertificateDetailResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetCertificateDetailResponseBody::Tags>) };
    inline GetCertificateDetailResponseBody& setTags(const vector<GetCertificateDetailResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetCertificateDetailResponseBody& setTags(vector<GetCertificateDetailResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // usingProductList Field Functions 
    bool hasUsingProductList() const { return this->usingProductList_ != nullptr;};
    void deleteUsingProductList() { this->usingProductList_ = nullptr;};
    inline const vector<string> & getUsingProductList() const { DARABONBA_PTR_GET_CONST(usingProductList_, vector<string>) };
    inline vector<string> getUsingProductList() { DARABONBA_PTR_GET(usingProductList_, vector<string>) };
    inline GetCertificateDetailResponseBody& setUsingProductList(const vector<string> & usingProductList) { DARABONBA_PTR_SET_VALUE(usingProductList_, usingProductList) };
    inline GetCertificateDetailResponseBody& setUsingProductList(vector<string> && usingProductList) { DARABONBA_PTR_SET_RVALUE(usingProductList_, usingProductList) };


  protected:
    shared_ptr<string> algorithm_ {};
    shared_ptr<string> certIdentifier_ {};
    shared_ptr<vector<GetCertificateDetailResponseBody::CertificateChainList>> certificateChainList_ {};
    shared_ptr<int32_t> certificateId_ {};
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
    shared_ptr<string> requestId_ {};
    shared_ptr<string> serial_ {};
    shared_ptr<vector<string>> subjectAlternativeNames_ {};
    shared_ptr<vector<GetCertificateDetailResponseBody::Tags>> tags_ {};
    shared_ptr<vector<string>> usingProductList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
