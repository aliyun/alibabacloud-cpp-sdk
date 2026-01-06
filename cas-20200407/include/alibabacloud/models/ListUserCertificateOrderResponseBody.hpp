// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERCERTIFICATEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERCERTIFICATEORDERRESPONSEBODY_HPP_
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
  class ListUserCertificateOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserCertificateOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateOrderList, certificateOrderList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserCertificateOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateOrderList, certificateOrderList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUserCertificateOrderResponseBody() = default ;
    ListUserCertificateOrderResponseBody(const ListUserCertificateOrderResponseBody &) = default ;
    ListUserCertificateOrderResponseBody(ListUserCertificateOrderResponseBody &&) = default ;
    ListUserCertificateOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserCertificateOrderResponseBody() = default ;
    ListUserCertificateOrderResponseBody& operator=(const ListUserCertificateOrderResponseBody &) = default ;
    ListUserCertificateOrderResponseBody& operator=(ListUserCertificateOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertificateOrderList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertificateOrderList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, CertificateOrderList& obj) { 
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
      CertificateOrderList() = default ;
      CertificateOrderList(const CertificateOrderList &) = default ;
      CertificateOrderList(CertificateOrderList &&) = default ;
      CertificateOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertificateOrderList() = default ;
      CertificateOrderList& operator=(const CertificateOrderList &) = default ;
      CertificateOrderList& operator=(CertificateOrderList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->aliyunOrderId_ == nullptr && this->buyDate_ == nullptr && this->certEndTime_ == nullptr && this->certStartTime_ == nullptr && this->certType_ == nullptr
        && this->certificateId_ == nullptr && this->city_ == nullptr && this->commonName_ == nullptr && this->country_ == nullptr && this->domain_ == nullptr
        && this->domainCount_ == nullptr && this->domainType_ == nullptr && this->endDate_ == nullptr && this->expired_ == nullptr && this->fingerprint_ == nullptr
        && this->instanceId_ == nullptr && this->issuer_ == nullptr && this->name_ == nullptr && this->orderId_ == nullptr && this->orgName_ == nullptr
        && this->partnerOrderId_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr && this->province_ == nullptr && this->resourceGroupId_ == nullptr
        && this->rootBrand_ == nullptr && this->sans_ == nullptr && this->serialNo_ == nullptr && this->sha2_ == nullptr && this->sourceType_ == nullptr
        && this->startDate_ == nullptr && this->status_ == nullptr && this->trusteeStatus_ == nullptr && this->upload_ == nullptr && this->wildDomainCount_ == nullptr; };
      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
      inline CertificateOrderList& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // aliyunOrderId Field Functions 
      bool hasAliyunOrderId() const { return this->aliyunOrderId_ != nullptr;};
      void deleteAliyunOrderId() { this->aliyunOrderId_ = nullptr;};
      inline int64_t getAliyunOrderId() const { DARABONBA_PTR_GET_DEFAULT(aliyunOrderId_, 0L) };
      inline CertificateOrderList& setAliyunOrderId(int64_t aliyunOrderId) { DARABONBA_PTR_SET_VALUE(aliyunOrderId_, aliyunOrderId) };


      // buyDate Field Functions 
      bool hasBuyDate() const { return this->buyDate_ != nullptr;};
      void deleteBuyDate() { this->buyDate_ = nullptr;};
      inline int64_t getBuyDate() const { DARABONBA_PTR_GET_DEFAULT(buyDate_, 0L) };
      inline CertificateOrderList& setBuyDate(int64_t buyDate) { DARABONBA_PTR_SET_VALUE(buyDate_, buyDate) };


      // certEndTime Field Functions 
      bool hasCertEndTime() const { return this->certEndTime_ != nullptr;};
      void deleteCertEndTime() { this->certEndTime_ = nullptr;};
      inline int64_t getCertEndTime() const { DARABONBA_PTR_GET_DEFAULT(certEndTime_, 0L) };
      inline CertificateOrderList& setCertEndTime(int64_t certEndTime) { DARABONBA_PTR_SET_VALUE(certEndTime_, certEndTime) };


      // certStartTime Field Functions 
      bool hasCertStartTime() const { return this->certStartTime_ != nullptr;};
      void deleteCertStartTime() { this->certStartTime_ = nullptr;};
      inline int64_t getCertStartTime() const { DARABONBA_PTR_GET_DEFAULT(certStartTime_, 0L) };
      inline CertificateOrderList& setCertStartTime(int64_t certStartTime) { DARABONBA_PTR_SET_VALUE(certStartTime_, certStartTime) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
      inline CertificateOrderList& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // certificateId Field Functions 
      bool hasCertificateId() const { return this->certificateId_ != nullptr;};
      void deleteCertificateId() { this->certificateId_ = nullptr;};
      inline int64_t getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, 0L) };
      inline CertificateOrderList& setCertificateId(int64_t certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline CertificateOrderList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline CertificateOrderList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // country Field Functions 
      bool hasCountry() const { return this->country_ != nullptr;};
      void deleteCountry() { this->country_ = nullptr;};
      inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
      inline CertificateOrderList& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline CertificateOrderList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // domainCount Field Functions 
      bool hasDomainCount() const { return this->domainCount_ != nullptr;};
      void deleteDomainCount() { this->domainCount_ = nullptr;};
      inline int64_t getDomainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0L) };
      inline CertificateOrderList& setDomainCount(int64_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


      // domainType Field Functions 
      bool hasDomainType() const { return this->domainType_ != nullptr;};
      void deleteDomainType() { this->domainType_ = nullptr;};
      inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
      inline CertificateOrderList& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline CertificateOrderList& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // expired Field Functions 
      bool hasExpired() const { return this->expired_ != nullptr;};
      void deleteExpired() { this->expired_ = nullptr;};
      inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
      inline CertificateOrderList& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


      // fingerprint Field Functions 
      bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
      void deleteFingerprint() { this->fingerprint_ = nullptr;};
      inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
      inline CertificateOrderList& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CertificateOrderList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline CertificateOrderList& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CertificateOrderList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline CertificateOrderList& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // orgName Field Functions 
      bool hasOrgName() const { return this->orgName_ != nullptr;};
      void deleteOrgName() { this->orgName_ = nullptr;};
      inline string getOrgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
      inline CertificateOrderList& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


      // partnerOrderId Field Functions 
      bool hasPartnerOrderId() const { return this->partnerOrderId_ != nullptr;};
      void deletePartnerOrderId() { this->partnerOrderId_ = nullptr;};
      inline string getPartnerOrderId() const { DARABONBA_PTR_GET_DEFAULT(partnerOrderId_, "") };
      inline CertificateOrderList& setPartnerOrderId(string partnerOrderId) { DARABONBA_PTR_SET_VALUE(partnerOrderId_, partnerOrderId) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline CertificateOrderList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline CertificateOrderList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline CertificateOrderList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline CertificateOrderList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // rootBrand Field Functions 
      bool hasRootBrand() const { return this->rootBrand_ != nullptr;};
      void deleteRootBrand() { this->rootBrand_ = nullptr;};
      inline string getRootBrand() const { DARABONBA_PTR_GET_DEFAULT(rootBrand_, "") };
      inline CertificateOrderList& setRootBrand(string rootBrand) { DARABONBA_PTR_SET_VALUE(rootBrand_, rootBrand) };


      // sans Field Functions 
      bool hasSans() const { return this->sans_ != nullptr;};
      void deleteSans() { this->sans_ = nullptr;};
      inline string getSans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
      inline CertificateOrderList& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


      // serialNo Field Functions 
      bool hasSerialNo() const { return this->serialNo_ != nullptr;};
      void deleteSerialNo() { this->serialNo_ = nullptr;};
      inline string getSerialNo() const { DARABONBA_PTR_GET_DEFAULT(serialNo_, "") };
      inline CertificateOrderList& setSerialNo(string serialNo) { DARABONBA_PTR_SET_VALUE(serialNo_, serialNo) };


      // sha2 Field Functions 
      bool hasSha2() const { return this->sha2_ != nullptr;};
      void deleteSha2() { this->sha2_ = nullptr;};
      inline string getSha2() const { DARABONBA_PTR_GET_DEFAULT(sha2_, "") };
      inline CertificateOrderList& setSha2(string sha2) { DARABONBA_PTR_SET_VALUE(sha2_, sha2) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline CertificateOrderList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline CertificateOrderList& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CertificateOrderList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // trusteeStatus Field Functions 
      bool hasTrusteeStatus() const { return this->trusteeStatus_ != nullptr;};
      void deleteTrusteeStatus() { this->trusteeStatus_ = nullptr;};
      inline string getTrusteeStatus() const { DARABONBA_PTR_GET_DEFAULT(trusteeStatus_, "") };
      inline CertificateOrderList& setTrusteeStatus(string trusteeStatus) { DARABONBA_PTR_SET_VALUE(trusteeStatus_, trusteeStatus) };


      // upload Field Functions 
      bool hasUpload() const { return this->upload_ != nullptr;};
      void deleteUpload() { this->upload_ = nullptr;};
      inline bool getUpload() const { DARABONBA_PTR_GET_DEFAULT(upload_, false) };
      inline CertificateOrderList& setUpload(bool upload) { DARABONBA_PTR_SET_VALUE(upload_, upload) };


      // wildDomainCount Field Functions 
      bool hasWildDomainCount() const { return this->wildDomainCount_ != nullptr;};
      void deleteWildDomainCount() { this->wildDomainCount_ = nullptr;};
      inline int64_t getWildDomainCount() const { DARABONBA_PTR_GET_DEFAULT(wildDomainCount_, 0L) };
      inline CertificateOrderList& setWildDomainCount(int64_t wildDomainCount) { DARABONBA_PTR_SET_VALUE(wildDomainCount_, wildDomainCount) };


    protected:
      // The algorithm. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<string> algorithm_ {};
      // The ID of the Alibaba Cloud order. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<int64_t> aliyunOrderId_ {};
      // The time at which the order was placed. Unit: milliseconds. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<int64_t> buyDate_ {};
      // The time at which the certificate expires. Unit: milliseconds. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<int64_t> certEndTime_ {};
      // The time at which the certificate starts to take effect. Unit: milliseconds. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<int64_t> certStartTime_ {};
      // The type of the certificate. This parameter is returned only if OrderType is set to CPACK or BUY. Valid values:
      // 
      // *   **DV**: domain validated (DV) certificate
      // *   **EV**: extended validation (EV) certificate
      // *   **OV**: organization validated (OV) certificate **FREE**: free certificate, available only on the China site (aliyun.com)
      shared_ptr<string> certType_ {};
      // The ID of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<int64_t> certificateId_ {};
      // The city in which the organization is located. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> city_ {};
      // The parent domain name of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> commonName_ {};
      // The code of the country in which the organization is located. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> country_ {};
      // The domain name. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<string> domain_ {};
      // The total number of domain names that can be bound to the certificate. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<int64_t> domainCount_ {};
      // The type of the domain name. This parameter is returned only if OrderType is set to CPACK or BUY. Valid values:
      // 
      // *   **ONE**: single domain name
      // *   **MULTIPLE**: multiple domain names
      // *   **WILDCARD**: single wildcard domain name
      // *   **M_WILDCARD**: multiple wildcard domain names
      // *   **MIX**: hybrid domain name
      shared_ptr<string> domainType_ {};
      // The time at which the certificate expires. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> endDate_ {};
      // Indicates whether the certificate expires. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<bool> expired_ {};
      // The fingerprint of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> fingerprint_ {};
      // The ID of the resource.
      shared_ptr<string> instanceId_ {};
      // The issuer of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> issuer_ {};
      // The name of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> name_ {};
      // The order ID. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<int64_t> orderId_ {};
      // The name of the organization that is associated with the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> orgName_ {};
      // The ID of the third-party certificate authority (CA) order. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<string> partnerOrderId_ {};
      // The specification ID of the order. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<string> productCode_ {};
      // The specification name of the order. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<string> productName_ {};
      // The province or autonomous region in which the organization is located. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> province_ {};
      // The ID of the resource group. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> resourceGroupId_ {};
      // The brand of the certificate. Valid values: WoSign, CFCA, DigiCert, and vTrus. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<string> rootBrand_ {};
      // All domain names that are bound to the certificate. Multiple domain names are separated by commas (,). This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> sans_ {};
      // The serial number of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> serialNo_ {};
      // The SHA-2 value of the certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> sha2_ {};
      // The type of the order. This parameter is returned only if OrderType is set to CPACK or BUY. Valid values:
      // 
      // *   **cpack**: virtual resource order
      // *   **buy**: purchase order
      shared_ptr<string> sourceType_ {};
      // The time at which the certificate starts to take effect. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<string> startDate_ {};
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
      shared_ptr<string> status_ {};
      // The hosting status of the certificate. This parameter is returned only if OrderType is set to CPACK or BUY. Valid values:
      // 
      // *   **unTrustee**: not hosted
      // *   **trustee**: hosted
      shared_ptr<string> trusteeStatus_ {};
      // Indicates whether the certificate is an uploaded certificate. This parameter is returned only if OrderType is set to CERT or UPLOAD.
      shared_ptr<bool> upload_ {};
      // The number of wildcard domain names that can be bound to the certificate. This parameter is returned only if OrderType is set to CPACK or BUY.
      shared_ptr<int64_t> wildDomainCount_ {};
    };

    virtual bool empty() const override { return this->certificateOrderList_ == nullptr
        && this->currentPage_ == nullptr && this->requestId_ == nullptr && this->showSize_ == nullptr && this->totalCount_ == nullptr; };
    // certificateOrderList Field Functions 
    bool hasCertificateOrderList() const { return this->certificateOrderList_ != nullptr;};
    void deleteCertificateOrderList() { this->certificateOrderList_ = nullptr;};
    inline const vector<ListUserCertificateOrderResponseBody::CertificateOrderList> & getCertificateOrderList() const { DARABONBA_PTR_GET_CONST(certificateOrderList_, vector<ListUserCertificateOrderResponseBody::CertificateOrderList>) };
    inline vector<ListUserCertificateOrderResponseBody::CertificateOrderList> getCertificateOrderList() { DARABONBA_PTR_GET(certificateOrderList_, vector<ListUserCertificateOrderResponseBody::CertificateOrderList>) };
    inline ListUserCertificateOrderResponseBody& setCertificateOrderList(const vector<ListUserCertificateOrderResponseBody::CertificateOrderList> & certificateOrderList) { DARABONBA_PTR_SET_VALUE(certificateOrderList_, certificateOrderList) };
    inline ListUserCertificateOrderResponseBody& setCertificateOrderList(vector<ListUserCertificateOrderResponseBody::CertificateOrderList> && certificateOrderList) { DARABONBA_PTR_SET_RVALUE(certificateOrderList_, certificateOrderList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListUserCertificateOrderResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserCertificateOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int64_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0L) };
    inline ListUserCertificateOrderResponseBody& setShowSize(int64_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUserCertificateOrderResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The certificates and orders.
    shared_ptr<vector<ListUserCertificateOrderResponseBody::CertificateOrderList>> certificateOrderList_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> currentPage_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> showSize_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
