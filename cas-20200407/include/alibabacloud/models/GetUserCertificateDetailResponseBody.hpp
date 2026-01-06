// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCERTIFICATEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCERTIFICATEDETAILRESPONSEBODY_HPP_
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
  class GetUserCertificateDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserCertificateDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(BuyInAliyun, buyInAliyun_);
      DARABONBA_PTR_TO_JSON(Cert, cert_);
      DARABONBA_PTR_TO_JSON(CertChain, certChain_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Common, common_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(EncryptCert, encryptCert_);
      DARABONBA_PTR_TO_JSON(EncryptPrivateKey, encryptPrivateKey_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrgName, orgName_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Sans, sans_);
      DARABONBA_PTR_TO_JSON(SerialNo, serialNo_);
      DARABONBA_PTR_TO_JSON(Sha2, sha2_);
      DARABONBA_PTR_TO_JSON(SignCert, signCert_);
      DARABONBA_PTR_TO_JSON(SignPrivateKey, signPrivateKey_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserCertificateDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(BuyInAliyun, buyInAliyun_);
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
      DARABONBA_PTR_FROM_JSON(CertChain, certChain_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Common, common_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(EncryptCert, encryptCert_);
      DARABONBA_PTR_FROM_JSON(EncryptPrivateKey, encryptPrivateKey_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Sans, sans_);
      DARABONBA_PTR_FROM_JSON(SerialNo, serialNo_);
      DARABONBA_PTR_FROM_JSON(Sha2, sha2_);
      DARABONBA_PTR_FROM_JSON(SignCert, signCert_);
      DARABONBA_PTR_FROM_JSON(SignPrivateKey, signPrivateKey_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetUserCertificateDetailResponseBody() = default ;
    GetUserCertificateDetailResponseBody(const GetUserCertificateDetailResponseBody &) = default ;
    GetUserCertificateDetailResponseBody(GetUserCertificateDetailResponseBody &&) = default ;
    GetUserCertificateDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserCertificateDetailResponseBody() = default ;
    GetUserCertificateDetailResponseBody& operator=(const GetUserCertificateDetailResponseBody &) = default ;
    GetUserCertificateDetailResponseBody& operator=(GetUserCertificateDetailResponseBody &&) = default ;
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

    class CertChain : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertChain& obj) { 
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(IssuerCommonName, issuerCommonName_);
        DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_TO_JSON(RemainDay, remainDay_);
      };
      friend void from_json(const Darabonba::Json& j, CertChain& obj) { 
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(IssuerCommonName, issuerCommonName_);
        DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_FROM_JSON(RemainDay, remainDay_);
      };
      CertChain() = default ;
      CertChain(const CertChain &) = default ;
      CertChain(CertChain &&) = default ;
      CertChain(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertChain() = default ;
      CertChain& operator=(const CertChain &) = default ;
      CertChain& operator=(CertChain &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commonName_ == nullptr
        && this->issuerCommonName_ == nullptr && this->notAfter_ == nullptr && this->notBefore_ == nullptr && this->remainDay_ == nullptr; };
      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline CertChain& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // issuerCommonName Field Functions 
      bool hasIssuerCommonName() const { return this->issuerCommonName_ != nullptr;};
      void deleteIssuerCommonName() { this->issuerCommonName_ = nullptr;};
      inline string getIssuerCommonName() const { DARABONBA_PTR_GET_DEFAULT(issuerCommonName_, "") };
      inline CertChain& setIssuerCommonName(string issuerCommonName) { DARABONBA_PTR_SET_VALUE(issuerCommonName_, issuerCommonName) };


      // notAfter Field Functions 
      bool hasNotAfter() const { return this->notAfter_ != nullptr;};
      void deleteNotAfter() { this->notAfter_ = nullptr;};
      inline int64_t getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, 0L) };
      inline CertChain& setNotAfter(int64_t notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


      // notBefore Field Functions 
      bool hasNotBefore() const { return this->notBefore_ != nullptr;};
      void deleteNotBefore() { this->notBefore_ = nullptr;};
      inline int64_t getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, 0L) };
      inline CertChain& setNotBefore(int64_t notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


      // remainDay Field Functions 
      bool hasRemainDay() const { return this->remainDay_ != nullptr;};
      void deleteRemainDay() { this->remainDay_ = nullptr;};
      inline int32_t getRemainDay() const { DARABONBA_PTR_GET_DEFAULT(remainDay_, 0) };
      inline CertChain& setRemainDay(int32_t remainDay) { DARABONBA_PTR_SET_VALUE(remainDay_, remainDay) };


    protected:
      // The common name of the certificate.
      shared_ptr<string> commonName_ {};
      // The common name of the issuer.
      shared_ptr<string> issuerCommonName_ {};
      // The end of the validity period of the certificate.
      shared_ptr<int64_t> notAfter_ {};
      // The beginning of the validity period of the certificate.
      shared_ptr<int64_t> notBefore_ {};
      // The remaining days of the certificate validity period.
      shared_ptr<int32_t> remainDay_ {};
    };

    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->buyInAliyun_ == nullptr && this->cert_ == nullptr && this->certChain_ == nullptr && this->certIdentifier_ == nullptr && this->city_ == nullptr
        && this->common_ == nullptr && this->country_ == nullptr && this->encryptCert_ == nullptr && this->encryptPrivateKey_ == nullptr && this->endDate_ == nullptr
        && this->expired_ == nullptr && this->fingerprint_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->issuer_ == nullptr
        && this->key_ == nullptr && this->name_ == nullptr && this->notAfter_ == nullptr && this->notBefore_ == nullptr && this->orderId_ == nullptr
        && this->orgName_ == nullptr && this->province_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->sans_ == nullptr
        && this->serialNo_ == nullptr && this->sha2_ == nullptr && this->signCert_ == nullptr && this->signPrivateKey_ == nullptr && this->startDate_ == nullptr
        && this->tags_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline GetUserCertificateDetailResponseBody& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // buyInAliyun Field Functions 
    bool hasBuyInAliyun() const { return this->buyInAliyun_ != nullptr;};
    void deleteBuyInAliyun() { this->buyInAliyun_ = nullptr;};
    inline bool getBuyInAliyun() const { DARABONBA_PTR_GET_DEFAULT(buyInAliyun_, false) };
    inline GetUserCertificateDetailResponseBody& setBuyInAliyun(bool buyInAliyun) { DARABONBA_PTR_SET_VALUE(buyInAliyun_, buyInAliyun) };


    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline string getCert() const { DARABONBA_PTR_GET_DEFAULT(cert_, "") };
    inline GetUserCertificateDetailResponseBody& setCert(string cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };


    // certChain Field Functions 
    bool hasCertChain() const { return this->certChain_ != nullptr;};
    void deleteCertChain() { this->certChain_ = nullptr;};
    inline const vector<GetUserCertificateDetailResponseBody::CertChain> & getCertChain() const { DARABONBA_PTR_GET_CONST(certChain_, vector<GetUserCertificateDetailResponseBody::CertChain>) };
    inline vector<GetUserCertificateDetailResponseBody::CertChain> getCertChain() { DARABONBA_PTR_GET(certChain_, vector<GetUserCertificateDetailResponseBody::CertChain>) };
    inline GetUserCertificateDetailResponseBody& setCertChain(const vector<GetUserCertificateDetailResponseBody::CertChain> & certChain) { DARABONBA_PTR_SET_VALUE(certChain_, certChain) };
    inline GetUserCertificateDetailResponseBody& setCertChain(vector<GetUserCertificateDetailResponseBody::CertChain> && certChain) { DARABONBA_PTR_SET_RVALUE(certChain_, certChain) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline GetUserCertificateDetailResponseBody& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline GetUserCertificateDetailResponseBody& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // common Field Functions 
    bool hasCommon() const { return this->common_ != nullptr;};
    void deleteCommon() { this->common_ = nullptr;};
    inline string getCommon() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
    inline GetUserCertificateDetailResponseBody& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline GetUserCertificateDetailResponseBody& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // encryptCert Field Functions 
    bool hasEncryptCert() const { return this->encryptCert_ != nullptr;};
    void deleteEncryptCert() { this->encryptCert_ = nullptr;};
    inline string getEncryptCert() const { DARABONBA_PTR_GET_DEFAULT(encryptCert_, "") };
    inline GetUserCertificateDetailResponseBody& setEncryptCert(string encryptCert) { DARABONBA_PTR_SET_VALUE(encryptCert_, encryptCert) };


    // encryptPrivateKey Field Functions 
    bool hasEncryptPrivateKey() const { return this->encryptPrivateKey_ != nullptr;};
    void deleteEncryptPrivateKey() { this->encryptPrivateKey_ = nullptr;};
    inline string getEncryptPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(encryptPrivateKey_, "") };
    inline GetUserCertificateDetailResponseBody& setEncryptPrivateKey(string encryptPrivateKey) { DARABONBA_PTR_SET_VALUE(encryptPrivateKey_, encryptPrivateKey) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetUserCertificateDetailResponseBody& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline GetUserCertificateDetailResponseBody& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline GetUserCertificateDetailResponseBody& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetUserCertificateDetailResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetUserCertificateDetailResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline GetUserCertificateDetailResponseBody& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetUserCertificateDetailResponseBody& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetUserCertificateDetailResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline int64_t getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, 0L) };
    inline GetUserCertificateDetailResponseBody& setNotAfter(int64_t notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline int64_t getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, 0L) };
    inline GetUserCertificateDetailResponseBody& setNotBefore(int64_t notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetUserCertificateDetailResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string getOrgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline GetUserCertificateDetailResponseBody& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline GetUserCertificateDetailResponseBody& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserCertificateDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetUserCertificateDetailResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string getSans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline GetUserCertificateDetailResponseBody& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // serialNo Field Functions 
    bool hasSerialNo() const { return this->serialNo_ != nullptr;};
    void deleteSerialNo() { this->serialNo_ = nullptr;};
    inline string getSerialNo() const { DARABONBA_PTR_GET_DEFAULT(serialNo_, "") };
    inline GetUserCertificateDetailResponseBody& setSerialNo(string serialNo) { DARABONBA_PTR_SET_VALUE(serialNo_, serialNo) };


    // sha2 Field Functions 
    bool hasSha2() const { return this->sha2_ != nullptr;};
    void deleteSha2() { this->sha2_ = nullptr;};
    inline string getSha2() const { DARABONBA_PTR_GET_DEFAULT(sha2_, "") };
    inline GetUserCertificateDetailResponseBody& setSha2(string sha2) { DARABONBA_PTR_SET_VALUE(sha2_, sha2) };


    // signCert Field Functions 
    bool hasSignCert() const { return this->signCert_ != nullptr;};
    void deleteSignCert() { this->signCert_ = nullptr;};
    inline string getSignCert() const { DARABONBA_PTR_GET_DEFAULT(signCert_, "") };
    inline GetUserCertificateDetailResponseBody& setSignCert(string signCert) { DARABONBA_PTR_SET_VALUE(signCert_, signCert) };


    // signPrivateKey Field Functions 
    bool hasSignPrivateKey() const { return this->signPrivateKey_ != nullptr;};
    void deleteSignPrivateKey() { this->signPrivateKey_ = nullptr;};
    inline string getSignPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(signPrivateKey_, "") };
    inline GetUserCertificateDetailResponseBody& setSignPrivateKey(string signPrivateKey) { DARABONBA_PTR_SET_VALUE(signPrivateKey_, signPrivateKey) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetUserCertificateDetailResponseBody& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetUserCertificateDetailResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetUserCertificateDetailResponseBody::Tags>) };
    inline vector<GetUserCertificateDetailResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetUserCertificateDetailResponseBody::Tags>) };
    inline GetUserCertificateDetailResponseBody& setTags(const vector<GetUserCertificateDetailResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetUserCertificateDetailResponseBody& setTags(vector<GetUserCertificateDetailResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The algorithm.
    shared_ptr<string> algorithm_ {};
    // Indicates whether the certificate was purchased from Alibaba Cloud. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> buyInAliyun_ {};
    // The content of the certificate if the certificate does not use an SM algorithm. If certFilter is set to false, this parameter is returned. Otherwise, this parameter is not returned.
    shared_ptr<string> cert_ {};
    // The certificate chain.
    shared_ptr<vector<GetUserCertificateDetailResponseBody::CertChain>> certChain_ {};
    // The certificate identifier. The value is in the "Certificate ID-cn-hangzhou" format. For example, if the ID of the certificate is 123, the value of CertIdentifier is 123-cn-hangzhou.
    shared_ptr<string> certIdentifier_ {};
    // The city of the company or organization to which the certificate purchaser belongs.
    shared_ptr<string> city_ {};
    // The primary domain name that is bound to the certificate.
    shared_ptr<string> common_ {};
    // The country or region of the company or organization to which the certificate purchaser belongs.
    shared_ptr<string> country_ {};
    // The content of the encryption certificate if the certificate uses an SM algorithm and is encoded in the PEM format. If certFilter is set to false, this parameter is returned. Otherwise, this parameter is not returned.
    shared_ptr<string> encryptCert_ {};
    // The private key of the encryption certificate if the certificate uses an SM algorithm and is encoded in the PEM format. If certFilter is set to false, this parameter is returned. Otherwise, this parameter is not returned.
    shared_ptr<string> encryptPrivateKey_ {};
    // The expiration date of the certificate.
    shared_ptr<string> endDate_ {};
    // Indicates whether the certificate has expired. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> expired_ {};
    // The fingerprint of the certificate.
    shared_ptr<string> fingerprint_ {};
    // The ID of the certificate.
    shared_ptr<int64_t> id_ {};
    // The instance ID of the resource.
    shared_ptr<string> instanceId_ {};
    // The certificate authority (CA) that issued the certificate.
    shared_ptr<string> issuer_ {};
    // The private key of the certificate if the certificate does not use an SM algorithm. If certFilter is set to false, this parameter is returned. Otherwise, this parameter is not returned.
    shared_ptr<string> key_ {};
    // The name of the certificate.
    shared_ptr<string> name_ {};
    // The end of the validity period of the certificate.
    shared_ptr<int64_t> notAfter_ {};
    // The beginning of the validity period of the certificate.
    shared_ptr<int64_t> notBefore_ {};
    // The order ID.
    shared_ptr<int64_t> orderId_ {};
    // The name of the company or organization to which the certificate purchaser belongs.
    shared_ptr<string> orgName_ {};
    // The province of the company or organization to which the certificate purchaser belongs.
    shared_ptr<string> province_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // All domain names that are bound to the certificate.
    shared_ptr<string> sans_ {};
    // The serial number of the certificate.
    shared_ptr<string> serialNo_ {};
    // The SHA-2 value of the certificate.
    shared_ptr<string> sha2_ {};
    // The content of the signing certificate if the certificate uses an SM algorithm and is encoded in the PEM format. If certFilter is set to false, this parameter is returned. Otherwise, this parameter is not returned.
    shared_ptr<string> signCert_ {};
    // The private key of the signing certificate if the certificate uses an SM algorithm and is encoded in the PEM format. If certFilter is set to false, this parameter is returned. Otherwise, this parameter is not returned.
    shared_ptr<string> signPrivateKey_ {};
    // The issuance date of the certificate.
    shared_ptr<string> startDate_ {};
    shared_ptr<vector<GetUserCertificateDetailResponseBody::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
