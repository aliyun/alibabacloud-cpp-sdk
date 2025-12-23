// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCERTIFICATEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCERTIFICATEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUserCertificateDetailResponseBodyCertChain.hpp>
#include <alibabacloud/models/GetUserCertificateDetailResponseBodyTags.hpp>
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
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && return this->buyInAliyun_ == nullptr && return this->cert_ == nullptr && return this->certChain_ == nullptr && return this->certIdentifier_ == nullptr && return this->city_ == nullptr
        && return this->common_ == nullptr && return this->country_ == nullptr && return this->encryptCert_ == nullptr && return this->encryptPrivateKey_ == nullptr && return this->endDate_ == nullptr
        && return this->expired_ == nullptr && return this->fingerprint_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->issuer_ == nullptr
        && return this->key_ == nullptr && return this->name_ == nullptr && return this->notAfter_ == nullptr && return this->notBefore_ == nullptr && return this->orderId_ == nullptr
        && return this->orgName_ == nullptr && return this->province_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sans_ == nullptr
        && return this->serialNo_ == nullptr && return this->sha2_ == nullptr && return this->signCert_ == nullptr && return this->signPrivateKey_ == nullptr && return this->startDate_ == nullptr
        && return this->tags_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline GetUserCertificateDetailResponseBody& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // buyInAliyun Field Functions 
    bool hasBuyInAliyun() const { return this->buyInAliyun_ != nullptr;};
    void deleteBuyInAliyun() { this->buyInAliyun_ = nullptr;};
    inline bool buyInAliyun() const { DARABONBA_PTR_GET_DEFAULT(buyInAliyun_, false) };
    inline GetUserCertificateDetailResponseBody& setBuyInAliyun(bool buyInAliyun) { DARABONBA_PTR_SET_VALUE(buyInAliyun_, buyInAliyun) };


    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline string cert() const { DARABONBA_PTR_GET_DEFAULT(cert_, "") };
    inline GetUserCertificateDetailResponseBody& setCert(string cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };


    // certChain Field Functions 
    bool hasCertChain() const { return this->certChain_ != nullptr;};
    void deleteCertChain() { this->certChain_ = nullptr;};
    inline const vector<GetUserCertificateDetailResponseBodyCertChain> & certChain() const { DARABONBA_PTR_GET_CONST(certChain_, vector<GetUserCertificateDetailResponseBodyCertChain>) };
    inline vector<GetUserCertificateDetailResponseBodyCertChain> certChain() { DARABONBA_PTR_GET(certChain_, vector<GetUserCertificateDetailResponseBodyCertChain>) };
    inline GetUserCertificateDetailResponseBody& setCertChain(const vector<GetUserCertificateDetailResponseBodyCertChain> & certChain) { DARABONBA_PTR_SET_VALUE(certChain_, certChain) };
    inline GetUserCertificateDetailResponseBody& setCertChain(vector<GetUserCertificateDetailResponseBodyCertChain> && certChain) { DARABONBA_PTR_SET_RVALUE(certChain_, certChain) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline GetUserCertificateDetailResponseBody& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline GetUserCertificateDetailResponseBody& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // common Field Functions 
    bool hasCommon() const { return this->common_ != nullptr;};
    void deleteCommon() { this->common_ = nullptr;};
    inline string common() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
    inline GetUserCertificateDetailResponseBody& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline GetUserCertificateDetailResponseBody& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // encryptCert Field Functions 
    bool hasEncryptCert() const { return this->encryptCert_ != nullptr;};
    void deleteEncryptCert() { this->encryptCert_ = nullptr;};
    inline string encryptCert() const { DARABONBA_PTR_GET_DEFAULT(encryptCert_, "") };
    inline GetUserCertificateDetailResponseBody& setEncryptCert(string encryptCert) { DARABONBA_PTR_SET_VALUE(encryptCert_, encryptCert) };


    // encryptPrivateKey Field Functions 
    bool hasEncryptPrivateKey() const { return this->encryptPrivateKey_ != nullptr;};
    void deleteEncryptPrivateKey() { this->encryptPrivateKey_ = nullptr;};
    inline string encryptPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(encryptPrivateKey_, "") };
    inline GetUserCertificateDetailResponseBody& setEncryptPrivateKey(string encryptPrivateKey) { DARABONBA_PTR_SET_VALUE(encryptPrivateKey_, encryptPrivateKey) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetUserCertificateDetailResponseBody& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline GetUserCertificateDetailResponseBody& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline GetUserCertificateDetailResponseBody& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetUserCertificateDetailResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetUserCertificateDetailResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline GetUserCertificateDetailResponseBody& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetUserCertificateDetailResponseBody& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetUserCertificateDetailResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline int64_t notAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, 0L) };
    inline GetUserCertificateDetailResponseBody& setNotAfter(int64_t notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline int64_t notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, 0L) };
    inline GetUserCertificateDetailResponseBody& setNotBefore(int64_t notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetUserCertificateDetailResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string orgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline GetUserCertificateDetailResponseBody& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline GetUserCertificateDetailResponseBody& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserCertificateDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetUserCertificateDetailResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline GetUserCertificateDetailResponseBody& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // serialNo Field Functions 
    bool hasSerialNo() const { return this->serialNo_ != nullptr;};
    void deleteSerialNo() { this->serialNo_ = nullptr;};
    inline string serialNo() const { DARABONBA_PTR_GET_DEFAULT(serialNo_, "") };
    inline GetUserCertificateDetailResponseBody& setSerialNo(string serialNo) { DARABONBA_PTR_SET_VALUE(serialNo_, serialNo) };


    // sha2 Field Functions 
    bool hasSha2() const { return this->sha2_ != nullptr;};
    void deleteSha2() { this->sha2_ = nullptr;};
    inline string sha2() const { DARABONBA_PTR_GET_DEFAULT(sha2_, "") };
    inline GetUserCertificateDetailResponseBody& setSha2(string sha2) { DARABONBA_PTR_SET_VALUE(sha2_, sha2) };


    // signCert Field Functions 
    bool hasSignCert() const { return this->signCert_ != nullptr;};
    void deleteSignCert() { this->signCert_ = nullptr;};
    inline string signCert() const { DARABONBA_PTR_GET_DEFAULT(signCert_, "") };
    inline GetUserCertificateDetailResponseBody& setSignCert(string signCert) { DARABONBA_PTR_SET_VALUE(signCert_, signCert) };


    // signPrivateKey Field Functions 
    bool hasSignPrivateKey() const { return this->signPrivateKey_ != nullptr;};
    void deleteSignPrivateKey() { this->signPrivateKey_ = nullptr;};
    inline string signPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(signPrivateKey_, "") };
    inline GetUserCertificateDetailResponseBody& setSignPrivateKey(string signPrivateKey) { DARABONBA_PTR_SET_VALUE(signPrivateKey_, signPrivateKey) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetUserCertificateDetailResponseBody& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetUserCertificateDetailResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetUserCertificateDetailResponseBodyTags>) };
    inline vector<GetUserCertificateDetailResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetUserCertificateDetailResponseBodyTags>) };
    inline GetUserCertificateDetailResponseBody& setTags(const vector<GetUserCertificateDetailResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetUserCertificateDetailResponseBody& setTags(vector<GetUserCertificateDetailResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The algorithm.
    std::shared_ptr<string> algorithm_ = nullptr;
    // Indicates whether the certificate was purchased from Alibaba Cloud. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> buyInAliyun_ = nullptr;
    // The content of the certificate if the certificate does not use an SM algorithm. If certFilter is set to false, this parameter is returned. Otherwise, this parameter is not returned.
    std::shared_ptr<string> cert_ = nullptr;
    // The certificate chain.
    std::shared_ptr<vector<GetUserCertificateDetailResponseBodyCertChain>> certChain_ = nullptr;
    // The certificate identifier. The value is in the "Certificate ID-cn-hangzhou" format. For example, if the ID of the certificate is 123, the value of CertIdentifier is 123-cn-hangzhou.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The city of the company or organization to which the certificate purchaser belongs.
    std::shared_ptr<string> city_ = nullptr;
    // The primary domain name that is bound to the certificate.
    std::shared_ptr<string> common_ = nullptr;
    // The country or region of the company or organization to which the certificate purchaser belongs.
    std::shared_ptr<string> country_ = nullptr;
    // The content of the encryption certificate if the certificate uses an SM algorithm and is encoded in the PEM format. If certFilter is set to false, this parameter is returned. Otherwise, this parameter is not returned.
    std::shared_ptr<string> encryptCert_ = nullptr;
    // The private key of the encryption certificate if the certificate uses an SM algorithm and is encoded in the PEM format. If certFilter is set to false, this parameter is returned. Otherwise, this parameter is not returned.
    std::shared_ptr<string> encryptPrivateKey_ = nullptr;
    // The expiration date of the certificate.
    std::shared_ptr<string> endDate_ = nullptr;
    // Indicates whether the certificate has expired. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> expired_ = nullptr;
    // The fingerprint of the certificate.
    std::shared_ptr<string> fingerprint_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance ID of the resource.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> issuer_ = nullptr;
    // The private key of the certificate if the certificate does not use an SM algorithm. If certFilter is set to false, this parameter is returned. Otherwise, this parameter is not returned.
    std::shared_ptr<string> key_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> name_ = nullptr;
    // The end of the validity period of the certificate.
    std::shared_ptr<int64_t> notAfter_ = nullptr;
    // The beginning of the validity period of the certificate.
    std::shared_ptr<int64_t> notBefore_ = nullptr;
    // The order ID.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The name of the company or organization to which the certificate purchaser belongs.
    std::shared_ptr<string> orgName_ = nullptr;
    // The province of the company or organization to which the certificate purchaser belongs.
    std::shared_ptr<string> province_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // All domain names that are bound to the certificate.
    std::shared_ptr<string> sans_ = nullptr;
    // The serial number of the certificate.
    std::shared_ptr<string> serialNo_ = nullptr;
    // The SHA-2 value of the certificate.
    std::shared_ptr<string> sha2_ = nullptr;
    // The content of the signing certificate if the certificate uses an SM algorithm and is encoded in the PEM format. If certFilter is set to false, this parameter is returned. Otherwise, this parameter is not returned.
    std::shared_ptr<string> signCert_ = nullptr;
    // The private key of the signing certificate if the certificate uses an SM algorithm and is encoded in the PEM format. If certFilter is set to false, this parameter is returned. Otherwise, this parameter is not returned.
    std::shared_ptr<string> signPrivateKey_ = nullptr;
    // The issuance date of the certificate.
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<vector<GetUserCertificateDetailResponseBodyTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
