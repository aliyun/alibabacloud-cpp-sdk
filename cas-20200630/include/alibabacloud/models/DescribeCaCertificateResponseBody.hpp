// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeCACertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCACertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Years, years_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCACertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Years, years_);
    };
    DescribeCACertificateResponseBody() = default ;
    DescribeCACertificateResponseBody(const DescribeCACertificateResponseBody &) = default ;
    DescribeCACertificateResponseBody(DescribeCACertificateResponseBody &&) = default ;
    DescribeCACertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCACertificateResponseBody() = default ;
    DescribeCACertificateResponseBody& operator=(const DescribeCACertificateResponseBody &) = default ;
    DescribeCACertificateResponseBody& operator=(DescribeCACertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Certificate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Certificate& obj) { 
        DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_TO_JSON(CaCertChain, caCertChain_);
        DARABONBA_PTR_TO_JSON(CertIssuedCount, certIssuedCount_);
        DARABONBA_PTR_TO_JSON(CertRemainingCount, certRemainingCount_);
        DARABONBA_PTR_TO_JSON(CertTotalCount, certTotalCount_);
        DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
        DARABONBA_PTR_TO_JSON(CrlDay, crlDay_);
        DARABONBA_PTR_TO_JSON(CrlStatus, crlStatus_);
        DARABONBA_PTR_TO_JSON(CrlUrl, crlUrl_);
        DARABONBA_PTR_TO_JSON(FullAlgorithm, fullAlgorithm_);
        DARABONBA_PTR_TO_JSON(Identifier, identifier_);
        DARABONBA_PTR_TO_JSON(IssuerType, issuerType_);
        DARABONBA_PTR_TO_JSON(KeyIndex, keyIndex_);
        DARABONBA_PTR_TO_JSON(KeySize, keySize_);
        DARABONBA_PTR_TO_JSON(Locality, locality_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(Organization, organization_);
        DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
        DARABONBA_PTR_TO_JSON(ParentIdentifier, parentIdentifier_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Sans, sans_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(Sha2, sha2_);
        DARABONBA_PTR_TO_JSON(SignAlgorithm, signAlgorithm_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubjectDN, subjectDN_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(X509Certificate, x509Certificate_);
        DARABONBA_PTR_TO_JSON(Years, years_);
      };
      friend void from_json(const Darabonba::Json& j, Certificate& obj) { 
        DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_FROM_JSON(CaCertChain, caCertChain_);
        DARABONBA_PTR_FROM_JSON(CertIssuedCount, certIssuedCount_);
        DARABONBA_PTR_FROM_JSON(CertRemainingCount, certRemainingCount_);
        DARABONBA_PTR_FROM_JSON(CertTotalCount, certTotalCount_);
        DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
        DARABONBA_PTR_FROM_JSON(CrlDay, crlDay_);
        DARABONBA_PTR_FROM_JSON(CrlStatus, crlStatus_);
        DARABONBA_PTR_FROM_JSON(CrlUrl, crlUrl_);
        DARABONBA_PTR_FROM_JSON(FullAlgorithm, fullAlgorithm_);
        DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
        DARABONBA_PTR_FROM_JSON(IssuerType, issuerType_);
        DARABONBA_PTR_FROM_JSON(KeyIndex, keyIndex_);
        DARABONBA_PTR_FROM_JSON(KeySize, keySize_);
        DARABONBA_PTR_FROM_JSON(Locality, locality_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(Organization, organization_);
        DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
        DARABONBA_PTR_FROM_JSON(ParentIdentifier, parentIdentifier_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Sans, sans_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(Sha2, sha2_);
        DARABONBA_PTR_FROM_JSON(SignAlgorithm, signAlgorithm_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubjectDN, subjectDN_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(X509Certificate, x509Certificate_);
        DARABONBA_PTR_FROM_JSON(Years, years_);
      };
      Certificate() = default ;
      Certificate(const Certificate &) = default ;
      Certificate(Certificate &&) = default ;
      Certificate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Certificate() = default ;
      Certificate& operator=(const Certificate &) = default ;
      Certificate& operator=(Certificate &&) = default ;
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

      virtual bool empty() const override { return this->afterDate_ == nullptr
        && this->algorithm_ == nullptr && this->beforeDate_ == nullptr && this->caCertChain_ == nullptr && this->certIssuedCount_ == nullptr && this->certRemainingCount_ == nullptr
        && this->certTotalCount_ == nullptr && this->certificateType_ == nullptr && this->clusterId_ == nullptr && this->commonName_ == nullptr && this->countryCode_ == nullptr
        && this->crlDay_ == nullptr && this->crlStatus_ == nullptr && this->crlUrl_ == nullptr && this->fullAlgorithm_ == nullptr && this->identifier_ == nullptr
        && this->issuerType_ == nullptr && this->keyIndex_ == nullptr && this->keySize_ == nullptr && this->locality_ == nullptr && this->md5_ == nullptr
        && this->organization_ == nullptr && this->organizationUnit_ == nullptr && this->parentIdentifier_ == nullptr && this->resourceGroupId_ == nullptr && this->sans_ == nullptr
        && this->serialNumber_ == nullptr && this->sha2_ == nullptr && this->signAlgorithm_ == nullptr && this->state_ == nullptr && this->status_ == nullptr
        && this->subjectDN_ == nullptr && this->tags_ == nullptr && this->x509Certificate_ == nullptr && this->years_ == nullptr; };
      // afterDate Field Functions 
      bool hasAfterDate() const { return this->afterDate_ != nullptr;};
      void deleteAfterDate() { this->afterDate_ = nullptr;};
      inline int64_t getAfterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, 0L) };
      inline Certificate& setAfterDate(int64_t afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
      inline Certificate& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // beforeDate Field Functions 
      bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
      void deleteBeforeDate() { this->beforeDate_ = nullptr;};
      inline int64_t getBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, 0L) };
      inline Certificate& setBeforeDate(int64_t beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


      // caCertChain Field Functions 
      bool hasCaCertChain() const { return this->caCertChain_ != nullptr;};
      void deleteCaCertChain() { this->caCertChain_ = nullptr;};
      inline string getCaCertChain() const { DARABONBA_PTR_GET_DEFAULT(caCertChain_, "") };
      inline Certificate& setCaCertChain(string caCertChain) { DARABONBA_PTR_SET_VALUE(caCertChain_, caCertChain) };


      // certIssuedCount Field Functions 
      bool hasCertIssuedCount() const { return this->certIssuedCount_ != nullptr;};
      void deleteCertIssuedCount() { this->certIssuedCount_ = nullptr;};
      inline int64_t getCertIssuedCount() const { DARABONBA_PTR_GET_DEFAULT(certIssuedCount_, 0L) };
      inline Certificate& setCertIssuedCount(int64_t certIssuedCount) { DARABONBA_PTR_SET_VALUE(certIssuedCount_, certIssuedCount) };


      // certRemainingCount Field Functions 
      bool hasCertRemainingCount() const { return this->certRemainingCount_ != nullptr;};
      void deleteCertRemainingCount() { this->certRemainingCount_ = nullptr;};
      inline int64_t getCertRemainingCount() const { DARABONBA_PTR_GET_DEFAULT(certRemainingCount_, 0L) };
      inline Certificate& setCertRemainingCount(int64_t certRemainingCount) { DARABONBA_PTR_SET_VALUE(certRemainingCount_, certRemainingCount) };


      // certTotalCount Field Functions 
      bool hasCertTotalCount() const { return this->certTotalCount_ != nullptr;};
      void deleteCertTotalCount() { this->certTotalCount_ = nullptr;};
      inline int64_t getCertTotalCount() const { DARABONBA_PTR_GET_DEFAULT(certTotalCount_, 0L) };
      inline Certificate& setCertTotalCount(int64_t certTotalCount) { DARABONBA_PTR_SET_VALUE(certTotalCount_, certTotalCount) };


      // certificateType Field Functions 
      bool hasCertificateType() const { return this->certificateType_ != nullptr;};
      void deleteCertificateType() { this->certificateType_ = nullptr;};
      inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
      inline Certificate& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Certificate& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline Certificate& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // countryCode Field Functions 
      bool hasCountryCode() const { return this->countryCode_ != nullptr;};
      void deleteCountryCode() { this->countryCode_ = nullptr;};
      inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
      inline Certificate& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


      // crlDay Field Functions 
      bool hasCrlDay() const { return this->crlDay_ != nullptr;};
      void deleteCrlDay() { this->crlDay_ = nullptr;};
      inline int32_t getCrlDay() const { DARABONBA_PTR_GET_DEFAULT(crlDay_, 0) };
      inline Certificate& setCrlDay(int32_t crlDay) { DARABONBA_PTR_SET_VALUE(crlDay_, crlDay) };


      // crlStatus Field Functions 
      bool hasCrlStatus() const { return this->crlStatus_ != nullptr;};
      void deleteCrlStatus() { this->crlStatus_ = nullptr;};
      inline string getCrlStatus() const { DARABONBA_PTR_GET_DEFAULT(crlStatus_, "") };
      inline Certificate& setCrlStatus(string crlStatus) { DARABONBA_PTR_SET_VALUE(crlStatus_, crlStatus) };


      // crlUrl Field Functions 
      bool hasCrlUrl() const { return this->crlUrl_ != nullptr;};
      void deleteCrlUrl() { this->crlUrl_ = nullptr;};
      inline string getCrlUrl() const { DARABONBA_PTR_GET_DEFAULT(crlUrl_, "") };
      inline Certificate& setCrlUrl(string crlUrl) { DARABONBA_PTR_SET_VALUE(crlUrl_, crlUrl) };


      // fullAlgorithm Field Functions 
      bool hasFullAlgorithm() const { return this->fullAlgorithm_ != nullptr;};
      void deleteFullAlgorithm() { this->fullAlgorithm_ = nullptr;};
      inline string getFullAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(fullAlgorithm_, "") };
      inline Certificate& setFullAlgorithm(string fullAlgorithm) { DARABONBA_PTR_SET_VALUE(fullAlgorithm_, fullAlgorithm) };


      // identifier Field Functions 
      bool hasIdentifier() const { return this->identifier_ != nullptr;};
      void deleteIdentifier() { this->identifier_ = nullptr;};
      inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
      inline Certificate& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


      // issuerType Field Functions 
      bool hasIssuerType() const { return this->issuerType_ != nullptr;};
      void deleteIssuerType() { this->issuerType_ = nullptr;};
      inline string getIssuerType() const { DARABONBA_PTR_GET_DEFAULT(issuerType_, "") };
      inline Certificate& setIssuerType(string issuerType) { DARABONBA_PTR_SET_VALUE(issuerType_, issuerType) };


      // keyIndex Field Functions 
      bool hasKeyIndex() const { return this->keyIndex_ != nullptr;};
      void deleteKeyIndex() { this->keyIndex_ = nullptr;};
      inline int32_t getKeyIndex() const { DARABONBA_PTR_GET_DEFAULT(keyIndex_, 0) };
      inline Certificate& setKeyIndex(int32_t keyIndex) { DARABONBA_PTR_SET_VALUE(keyIndex_, keyIndex) };


      // keySize Field Functions 
      bool hasKeySize() const { return this->keySize_ != nullptr;};
      void deleteKeySize() { this->keySize_ = nullptr;};
      inline int32_t getKeySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
      inline Certificate& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


      // locality Field Functions 
      bool hasLocality() const { return this->locality_ != nullptr;};
      void deleteLocality() { this->locality_ = nullptr;};
      inline string getLocality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
      inline Certificate& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Certificate& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // organization Field Functions 
      bool hasOrganization() const { return this->organization_ != nullptr;};
      void deleteOrganization() { this->organization_ = nullptr;};
      inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
      inline Certificate& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


      // organizationUnit Field Functions 
      bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
      void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
      inline string getOrganizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
      inline Certificate& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


      // parentIdentifier Field Functions 
      bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
      void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
      inline string getParentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
      inline Certificate& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Certificate& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // sans Field Functions 
      bool hasSans() const { return this->sans_ != nullptr;};
      void deleteSans() { this->sans_ = nullptr;};
      inline string getSans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
      inline Certificate& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline Certificate& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // sha2 Field Functions 
      bool hasSha2() const { return this->sha2_ != nullptr;};
      void deleteSha2() { this->sha2_ = nullptr;};
      inline string getSha2() const { DARABONBA_PTR_GET_DEFAULT(sha2_, "") };
      inline Certificate& setSha2(string sha2) { DARABONBA_PTR_SET_VALUE(sha2_, sha2) };


      // signAlgorithm Field Functions 
      bool hasSignAlgorithm() const { return this->signAlgorithm_ != nullptr;};
      void deleteSignAlgorithm() { this->signAlgorithm_ = nullptr;};
      inline string getSignAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signAlgorithm_, "") };
      inline Certificate& setSignAlgorithm(string signAlgorithm) { DARABONBA_PTR_SET_VALUE(signAlgorithm_, signAlgorithm) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Certificate& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Certificate& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subjectDN Field Functions 
      bool hasSubjectDN() const { return this->subjectDN_ != nullptr;};
      void deleteSubjectDN() { this->subjectDN_ = nullptr;};
      inline string getSubjectDN() const { DARABONBA_PTR_GET_DEFAULT(subjectDN_, "") };
      inline Certificate& setSubjectDN(string subjectDN) { DARABONBA_PTR_SET_VALUE(subjectDN_, subjectDN) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Certificate::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Certificate::Tags>) };
      inline vector<Certificate::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Certificate::Tags>) };
      inline Certificate& setTags(const vector<Certificate::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Certificate& setTags(vector<Certificate::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // x509Certificate Field Functions 
      bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
      void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
      inline string getX509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
      inline Certificate& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


      // years Field Functions 
      bool hasYears() const { return this->years_ != nullptr;};
      void deleteYears() { this->years_ = nullptr;};
      inline int32_t getYears() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
      inline Certificate& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


    protected:
      // The expiration date of the CA certificate. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> afterDate_ {};
      // The encryption algorithm of the CA certificate. Valid values:
      // 
      // *   **RSA**: the Rivest-Shamir-Adleman (RSA) algorithm.
      // *   **ECC**: the elliptic curve cryptography (ECC) algorithm.
      // *   **SM2**: the SM2 algorithm, which is developed and approved by the State Cryptography Administration of China.
      shared_ptr<string> algorithm_ {};
      // The issuance date of the CA certificate. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> beforeDate_ {};
      // CA certificate chain.
      shared_ptr<string> caCertChain_ {};
      // The number of certificates issued by private CA instances.
      shared_ptr<int64_t> certIssuedCount_ {};
      // The remaining number of assignable certificate quotas.
      shared_ptr<int64_t> certRemainingCount_ {};
      // The total number of purchased certificate quotas.
      shared_ptr<int64_t> certTotalCount_ {};
      // The type of the CA certificate. Valid values:
      // 
      // *   **ROOT**: root CA certificate
      // *   **SUB_ROOT**: intermediate CA certificate
      shared_ptr<string> certificateType_ {};
      shared_ptr<string> clusterId_ {};
      // The common name or abbreviation of the organization that is associated with the CA certificate.
      shared_ptr<string> commonName_ {};
      // The code of the country in which the organization is located.
      // 
      // For more information about country codes, see the **"Country codes"** section of the [Manage company profiles](https://help.aliyun.com/document_detail/198289.html) topic.
      shared_ptr<string> countryCode_ {};
      // CRL validity period: 1-365 days.
      shared_ptr<int32_t> crlDay_ {};
      // The status of the certificate revocation list (CRL) feature.
      shared_ptr<string> crlStatus_ {};
      // The address of the CRL.
      shared_ptr<string> crlUrl_ {};
      shared_ptr<string> fullAlgorithm_ {};
      // The unique identifier of the CA certificate.
      shared_ptr<string> identifier_ {};
      shared_ptr<string> issuerType_ {};
      shared_ptr<int32_t> keyIndex_ {};
      // The key length of the CA certificate.
      shared_ptr<int32_t> keySize_ {};
      // The name of the city in which the organization is located.
      shared_ptr<string> locality_ {};
      // The MD5 fingerprint of the CA certificate.
      shared_ptr<string> md5_ {};
      // The name of the organization that is associated with the CA certificate.
      shared_ptr<string> organization_ {};
      // The name of the department or branch in the organization that is associated with the CA certificate.
      shared_ptr<string> organizationUnit_ {};
      // The unique identifier of the root CA certificate from which the CA certificate is issued.
      // 
      // >  This parameter is returned only if the value of the **CertificateType** parameter is **SUB_ROOT**. The value SUB_ROOT indicates an intermediate CA certificate.
      shared_ptr<string> parentIdentifier_ {};
      shared_ptr<string> resourceGroupId_ {};
      // This parameter is deprecated.
      shared_ptr<string> sans_ {};
      // The serial number of the CA certificate.
      shared_ptr<string> serialNumber_ {};
      // The SHA-256 fingerprint of the CA certificate.
      shared_ptr<string> sha2_ {};
      // The signature algorithm of the CA certificate.
      shared_ptr<string> signAlgorithm_ {};
      // The name of the province, municipality, or autonomous region in which the organization is located.
      shared_ptr<string> state_ {};
      // The status of the CA certificate. Valid values:
      // 
      // *   **ISSUE**: The CA certificate is issued.
      // *   **REVOKE**: The CA certificate is revoked.
      shared_ptr<string> status_ {};
      // The user attribute of the CA certificate, which contains the following information:
      // 
      // *   **C**: the country code in which the organization is located
      // *   **O**: the name of the organization
      // *   **OU**: the name of the department or branch in the organization
      // *   **L**: the name of the city in which the organization is located
      // *   **ST**: the name of the province, municipality, or autonomous region in which the organization is located
      // *   **CN**: the common name or abbreviation of the organization
      shared_ptr<string> subjectDN_ {};
      shared_ptr<vector<Certificate::Tags>> tags_ {};
      // The content of the CA certificate.
      shared_ptr<string> x509Certificate_ {};
      shared_ptr<int32_t> years_ {};
    };

    virtual bool empty() const override { return this->certificate_ == nullptr
        && this->requestId_ == nullptr && this->years_ == nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline const DescribeCACertificateResponseBody::Certificate & getCertificate() const { DARABONBA_PTR_GET_CONST(certificate_, DescribeCACertificateResponseBody::Certificate) };
    inline DescribeCACertificateResponseBody::Certificate getCertificate() { DARABONBA_PTR_GET(certificate_, DescribeCACertificateResponseBody::Certificate) };
    inline DescribeCACertificateResponseBody& setCertificate(const DescribeCACertificateResponseBody::Certificate & certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };
    inline DescribeCACertificateResponseBody& setCertificate(DescribeCACertificateResponseBody::Certificate && certificate) { DARABONBA_PTR_SET_RVALUE(certificate_, certificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCACertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int32_t getYears() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
    inline DescribeCACertificateResponseBody& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    // The details about the CA certificate.
    shared_ptr<DescribeCACertificateResponseBody::Certificate> certificate_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The validity period of the CA certificate. Unit: years.
    shared_ptr<int32_t> years_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
