// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERCERTIFICATEORDERRESPONSEBODYCERTIFICATEORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERCERTIFICATEORDERRESPONSEBODYCERTIFICATEORDERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListUserCertificateOrderResponseBodyCertificateOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserCertificateOrderResponseBodyCertificateOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(AliyunOrderId, aliyunOrderId_);
      DARABONBA_PTR_TO_JSON(BuyDate, buyDate_);
      DARABONBA_PTR_TO_JSON(CertEndTime, certEndTime_);
      DARABONBA_PTR_TO_JSON(CertStartTime, certStartTime_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrgName, orgName_);
      DARABONBA_PTR_TO_JSON(PartnerOrderId, partnerOrderId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RootBrand, rootBrand_);
      DARABONBA_PTR_TO_JSON(Sans, sans_);
      DARABONBA_PTR_TO_JSON(SerialNo, serialNo_);
      DARABONBA_PTR_TO_JSON(Sha2, sha2_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TrusteeStatus, trusteeStatus_);
      DARABONBA_PTR_TO_JSON(Upload, upload_);
      DARABONBA_PTR_TO_JSON(WildDomainCount, wildDomainCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserCertificateOrderResponseBodyCertificateOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(AliyunOrderId, aliyunOrderId_);
      DARABONBA_PTR_FROM_JSON(BuyDate, buyDate_);
      DARABONBA_PTR_FROM_JSON(CertEndTime, certEndTime_);
      DARABONBA_PTR_FROM_JSON(CertStartTime, certStartTime_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
      DARABONBA_PTR_FROM_JSON(PartnerOrderId, partnerOrderId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RootBrand, rootBrand_);
      DARABONBA_PTR_FROM_JSON(Sans, sans_);
      DARABONBA_PTR_FROM_JSON(SerialNo, serialNo_);
      DARABONBA_PTR_FROM_JSON(Sha2, sha2_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TrusteeStatus, trusteeStatus_);
      DARABONBA_PTR_FROM_JSON(Upload, upload_);
      DARABONBA_PTR_FROM_JSON(WildDomainCount, wildDomainCount_);
    };
    ListUserCertificateOrderResponseBodyCertificateOrderList() = default ;
    ListUserCertificateOrderResponseBodyCertificateOrderList(const ListUserCertificateOrderResponseBodyCertificateOrderList &) = default ;
    ListUserCertificateOrderResponseBodyCertificateOrderList(ListUserCertificateOrderResponseBodyCertificateOrderList &&) = default ;
    ListUserCertificateOrderResponseBodyCertificateOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserCertificateOrderResponseBodyCertificateOrderList() = default ;
    ListUserCertificateOrderResponseBodyCertificateOrderList& operator=(const ListUserCertificateOrderResponseBodyCertificateOrderList &) = default ;
    ListUserCertificateOrderResponseBodyCertificateOrderList& operator=(ListUserCertificateOrderResponseBodyCertificateOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithm_ != nullptr
        && this->aliyunOrderId_ != nullptr && this->buyDate_ != nullptr && this->certEndTime_ != nullptr && this->certStartTime_ != nullptr && this->certType_ != nullptr
        && this->certificateId_ != nullptr && this->city_ != nullptr && this->commonName_ != nullptr && this->country_ != nullptr && this->domain_ != nullptr
        && this->domainCount_ != nullptr && this->domainType_ != nullptr && this->endDate_ != nullptr && this->expired_ != nullptr && this->fingerprint_ != nullptr
        && this->instanceId_ != nullptr && this->issuer_ != nullptr && this->name_ != nullptr && this->orderId_ != nullptr && this->orgName_ != nullptr
        && this->partnerOrderId_ != nullptr && this->productCode_ != nullptr && this->productName_ != nullptr && this->province_ != nullptr && this->resourceGroupId_ != nullptr
        && this->rootBrand_ != nullptr && this->sans_ != nullptr && this->serialNo_ != nullptr && this->sha2_ != nullptr && this->sourceType_ != nullptr
        && this->startDate_ != nullptr && this->status_ != nullptr && this->trusteeStatus_ != nullptr && this->upload_ != nullptr && this->wildDomainCount_ != nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // aliyunOrderId Field Functions 
    bool hasAliyunOrderId() const { return this->aliyunOrderId_ != nullptr;};
    void deleteAliyunOrderId() { this->aliyunOrderId_ = nullptr;};
    inline int64_t aliyunOrderId() const { DARABONBA_PTR_GET_DEFAULT(aliyunOrderId_, 0L) };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setAliyunOrderId(int64_t aliyunOrderId) { DARABONBA_PTR_SET_VALUE(aliyunOrderId_, aliyunOrderId) };


    // buyDate Field Functions 
    bool hasBuyDate() const { return this->buyDate_ != nullptr;};
    void deleteBuyDate() { this->buyDate_ = nullptr;};
    inline int64_t buyDate() const { DARABONBA_PTR_GET_DEFAULT(buyDate_, 0L) };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setBuyDate(int64_t buyDate) { DARABONBA_PTR_SET_VALUE(buyDate_, buyDate) };


    // certEndTime Field Functions 
    bool hasCertEndTime() const { return this->certEndTime_ != nullptr;};
    void deleteCertEndTime() { this->certEndTime_ = nullptr;};
    inline int64_t certEndTime() const { DARABONBA_PTR_GET_DEFAULT(certEndTime_, 0L) };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setCertEndTime(int64_t certEndTime) { DARABONBA_PTR_SET_VALUE(certEndTime_, certEndTime) };


    // certStartTime Field Functions 
    bool hasCertStartTime() const { return this->certStartTime_ != nullptr;};
    void deleteCertStartTime() { this->certStartTime_ = nullptr;};
    inline int64_t certStartTime() const { DARABONBA_PTR_GET_DEFAULT(certStartTime_, 0L) };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setCertStartTime(int64_t certStartTime) { DARABONBA_PTR_SET_VALUE(certStartTime_, certStartTime) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline int64_t certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, 0L) };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setCertificateId(int64_t certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainCount Field Functions 
    bool hasDomainCount() const { return this->domainCount_ != nullptr;};
    void deleteDomainCount() { this->domainCount_ = nullptr;};
    inline int64_t domainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0L) };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setDomainCount(int64_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string orgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


    // partnerOrderId Field Functions 
    bool hasPartnerOrderId() const { return this->partnerOrderId_ != nullptr;};
    void deletePartnerOrderId() { this->partnerOrderId_ = nullptr;};
    inline string partnerOrderId() const { DARABONBA_PTR_GET_DEFAULT(partnerOrderId_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setPartnerOrderId(string partnerOrderId) { DARABONBA_PTR_SET_VALUE(partnerOrderId_, partnerOrderId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rootBrand Field Functions 
    bool hasRootBrand() const { return this->rootBrand_ != nullptr;};
    void deleteRootBrand() { this->rootBrand_ = nullptr;};
    inline string rootBrand() const { DARABONBA_PTR_GET_DEFAULT(rootBrand_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setRootBrand(string rootBrand) { DARABONBA_PTR_SET_VALUE(rootBrand_, rootBrand) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // serialNo Field Functions 
    bool hasSerialNo() const { return this->serialNo_ != nullptr;};
    void deleteSerialNo() { this->serialNo_ = nullptr;};
    inline string serialNo() const { DARABONBA_PTR_GET_DEFAULT(serialNo_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setSerialNo(string serialNo) { DARABONBA_PTR_SET_VALUE(serialNo_, serialNo) };


    // sha2 Field Functions 
    bool hasSha2() const { return this->sha2_ != nullptr;};
    void deleteSha2() { this->sha2_ = nullptr;};
    inline string sha2() const { DARABONBA_PTR_GET_DEFAULT(sha2_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setSha2(string sha2) { DARABONBA_PTR_SET_VALUE(sha2_, sha2) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trusteeStatus Field Functions 
    bool hasTrusteeStatus() const { return this->trusteeStatus_ != nullptr;};
    void deleteTrusteeStatus() { this->trusteeStatus_ = nullptr;};
    inline string trusteeStatus() const { DARABONBA_PTR_GET_DEFAULT(trusteeStatus_, "") };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setTrusteeStatus(string trusteeStatus) { DARABONBA_PTR_SET_VALUE(trusteeStatus_, trusteeStatus) };


    // upload Field Functions 
    bool hasUpload() const { return this->upload_ != nullptr;};
    void deleteUpload() { this->upload_ = nullptr;};
    inline bool upload() const { DARABONBA_PTR_GET_DEFAULT(upload_, false) };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setUpload(bool upload) { DARABONBA_PTR_SET_VALUE(upload_, upload) };


    // wildDomainCount Field Functions 
    bool hasWildDomainCount() const { return this->wildDomainCount_ != nullptr;};
    void deleteWildDomainCount() { this->wildDomainCount_ = nullptr;};
    inline int64_t wildDomainCount() const { DARABONBA_PTR_GET_DEFAULT(wildDomainCount_, 0L) };
    inline ListUserCertificateOrderResponseBodyCertificateOrderList& setWildDomainCount(int64_t wildDomainCount) { DARABONBA_PTR_SET_VALUE(wildDomainCount_, wildDomainCount) };


  protected:
    // The algorithm. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The ID of the Alibaba Cloud order. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<int64_t> aliyunOrderId_ = nullptr;
    // The time at which the order was placed. Unit: milliseconds. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<int64_t> buyDate_ = nullptr;
    // The time at which the certificate expires. Unit: milliseconds. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<int64_t> certEndTime_ = nullptr;
    // The time at which the certificate starts to take effect. Unit: milliseconds. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<int64_t> certStartTime_ = nullptr;
    // The type of the certificate. This parameter is returned only if OrderType is set to CPACK or BUY. Valid values:
    // 
    // *   **DV**: domain validated (DV) certificate
    // *   **EV**: extended validation (EV) certificate
    // *   **OV**: organization validated (OV) certificate **FREE**: free certificate, available only on the China site (aliyun.com)
    std::shared_ptr<string> certType_ = nullptr;
    // The ID of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<int64_t> certificateId_ = nullptr;
    // The city in which the organization is located. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> city_ = nullptr;
    // The parent domain name of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> commonName_ = nullptr;
    // The code of the country in which the organization is located. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> country_ = nullptr;
    // The domain name. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<string> domain_ = nullptr;
    // The total number of domain names that can be bound to the certificate. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<int64_t> domainCount_ = nullptr;
    // The type of the domain name. This parameter is returned only if OrderType is set to CPACK or BUY. Valid values:
    // 
    // *   **ONE**: single domain name
    // *   **MULTIPLE**: multiple domain names
    // *   **WILDCARD**: single wildcard domain name
    // *   **M_WILDCARD**: multiple wildcard domain names
    // *   **MIX**: hybrid domain name
    std::shared_ptr<string> domainType_ = nullptr;
    // The time at which the certificate expires. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> endDate_ = nullptr;
    // Indicates whether the certificate expires. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<bool> expired_ = nullptr;
    // The fingerprint of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> fingerprint_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The issuer of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> issuer_ = nullptr;
    // The name of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> name_ = nullptr;
    // The order ID. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The name of the organization that is associated with the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> orgName_ = nullptr;
    // The ID of the third-party certificate authority (CA) order. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<string> partnerOrderId_ = nullptr;
    // The specification ID of the order. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<string> productCode_ = nullptr;
    // The specification name of the order. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<string> productName_ = nullptr;
    // The province or autonomous region in which the organization is located. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> province_ = nullptr;
    // The ID of the resource group. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The brand of the certificate. Valid values: WoSign, CFCA, DigiCert, and vTrus. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<string> rootBrand_ = nullptr;
    // All domain names that are bound to the certificate. Multiple domain names are separated by commas (,). This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> sans_ = nullptr;
    // The serial number of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> serialNo_ = nullptr;
    // The SHA-2 value of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> sha2_ = nullptr;
    // The type of the order. This parameter is returned only if OrderType is set to CPACK or BUY. Valid values:
    // 
    // *   **cpack**: virtual resource order
    // *   **buy**: purchase order
    std::shared_ptr<string> sourceType_ = nullptr;
    // The time at which the certificate starts to take effect. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<string> startDate_ = nullptr;
    // The certificate status of the order. This parameter is returned only if OrderType is set to CPACK or BUY. Valid values:
    // 
    // *   **PAYED**: pending application
    // *   **CHECKING**: reviewing
    // *   **CHECKED_FAIL**: review failed
    // *   **ISSUED**: issued
    // *   **WILLEXPIRED**: about to expire
    // *   **EXPIRED**: expired
    // *   **NOTACTIVATED**: not activated
    // *   **REVOKED**: revoked
    std::shared_ptr<string> status_ = nullptr;
    // The hosting status of the certificate. This parameter is returned only if OrderType is set to CPACK or BUY. Valid values:
    // 
    // *   **unTrustee**: not hosted
    // *   **trustee**: hosted
    std::shared_ptr<string> trusteeStatus_ = nullptr;
    // Indicates whether the certificate is an uploaded certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
    std::shared_ptr<bool> upload_ = nullptr;
    // The number of wildcard domain names that can be bound to the certificate. This parameter is returned only if OrderType is set to CPACK or BUY.
    std::shared_ptr<int64_t> wildDomainCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
