// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATELISTRESPONSEBODYCERTIFICATELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATELISTRESPONSEBODYCERTIFICATELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeCACertificateListResponseBodyCertificateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCACertificateListResponseBodyCertificateList& obj) { 
      DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(Gift, gift_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(KeySize, keySize_);
      DARABONBA_PTR_TO_JSON(Locality, locality_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_TO_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(Sans, sans_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Sha2, sha2_);
      DARABONBA_PTR_TO_JSON(SignAlgorithm, signAlgorithm_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubjectDN, subjectDN_);
      DARABONBA_PTR_TO_JSON(Trial, trial_);
      DARABONBA_PTR_TO_JSON(X509Certificate, x509Certificate_);
      DARABONBA_PTR_TO_JSON(Years, years_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCACertificateListResponseBodyCertificateList& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(Gift, gift_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(KeySize, keySize_);
      DARABONBA_PTR_FROM_JSON(Locality, locality_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_FROM_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(Sans, sans_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Sha2, sha2_);
      DARABONBA_PTR_FROM_JSON(SignAlgorithm, signAlgorithm_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubjectDN, subjectDN_);
      DARABONBA_PTR_FROM_JSON(Trial, trial_);
      DARABONBA_PTR_FROM_JSON(X509Certificate, x509Certificate_);
      DARABONBA_PTR_FROM_JSON(Years, years_);
    };
    DescribeCACertificateListResponseBodyCertificateList() = default ;
    DescribeCACertificateListResponseBodyCertificateList(const DescribeCACertificateListResponseBodyCertificateList &) = default ;
    DescribeCACertificateListResponseBodyCertificateList(DescribeCACertificateListResponseBodyCertificateList &&) = default ;
    DescribeCACertificateListResponseBodyCertificateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCACertificateListResponseBodyCertificateList() = default ;
    DescribeCACertificateListResponseBodyCertificateList& operator=(const DescribeCACertificateListResponseBodyCertificateList &) = default ;
    DescribeCACertificateListResponseBodyCertificateList& operator=(DescribeCACertificateListResponseBodyCertificateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->afterDate_ != nullptr
        && this->algorithm_ != nullptr && this->alias_ != nullptr && this->beforeDate_ != nullptr && this->certificateType_ != nullptr && this->commonName_ != nullptr
        && this->countryCode_ != nullptr && this->gift_ != nullptr && this->identifier_ != nullptr && this->keySize_ != nullptr && this->locality_ != nullptr
        && this->md5_ != nullptr && this->organization_ != nullptr && this->organizationUnit_ != nullptr && this->parentIdentifier_ != nullptr && this->sans_ != nullptr
        && this->serialNumber_ != nullptr && this->sha2_ != nullptr && this->signAlgorithm_ != nullptr && this->state_ != nullptr && this->status_ != nullptr
        && this->subjectDN_ != nullptr && this->trial_ != nullptr && this->x509Certificate_ != nullptr && this->years_ != nullptr; };
    // afterDate Field Functions 
    bool hasAfterDate() const { return this->afterDate_ != nullptr;};
    void deleteAfterDate() { this->afterDate_ = nullptr;};
    inline int64_t afterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, 0L) };
    inline DescribeCACertificateListResponseBodyCertificateList& setAfterDate(int64_t afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // beforeDate Field Functions 
    bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
    void deleteBeforeDate() { this->beforeDate_ = nullptr;};
    inline int64_t beforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, 0L) };
    inline DescribeCACertificateListResponseBodyCertificateList& setBeforeDate(int64_t beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string certificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // gift Field Functions 
    bool hasGift() const { return this->gift_ != nullptr;};
    void deleteGift() { this->gift_ = nullptr;};
    inline int32_t gift() const { DARABONBA_PTR_GET_DEFAULT(gift_, 0) };
    inline DescribeCACertificateListResponseBodyCertificateList& setGift(int32_t gift) { DARABONBA_PTR_SET_VALUE(gift_, gift) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // keySize Field Functions 
    bool hasKeySize() const { return this->keySize_ != nullptr;};
    void deleteKeySize() { this->keySize_ = nullptr;};
    inline int32_t keySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
    inline DescribeCACertificateListResponseBodyCertificateList& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string locality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string organization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string organizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string parentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // sha2 Field Functions 
    bool hasSha2() const { return this->sha2_ != nullptr;};
    void deleteSha2() { this->sha2_ = nullptr;};
    inline string sha2() const { DARABONBA_PTR_GET_DEFAULT(sha2_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setSha2(string sha2) { DARABONBA_PTR_SET_VALUE(sha2_, sha2) };


    // signAlgorithm Field Functions 
    bool hasSignAlgorithm() const { return this->signAlgorithm_ != nullptr;};
    void deleteSignAlgorithm() { this->signAlgorithm_ = nullptr;};
    inline string signAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signAlgorithm_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setSignAlgorithm(string signAlgorithm) { DARABONBA_PTR_SET_VALUE(signAlgorithm_, signAlgorithm) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subjectDN Field Functions 
    bool hasSubjectDN() const { return this->subjectDN_ != nullptr;};
    void deleteSubjectDN() { this->subjectDN_ = nullptr;};
    inline string subjectDN() const { DARABONBA_PTR_GET_DEFAULT(subjectDN_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setSubjectDN(string subjectDN) { DARABONBA_PTR_SET_VALUE(subjectDN_, subjectDN) };


    // trial Field Functions 
    bool hasTrial() const { return this->trial_ != nullptr;};
    void deleteTrial() { this->trial_ = nullptr;};
    inline int32_t trial() const { DARABONBA_PTR_GET_DEFAULT(trial_, 0) };
    inline DescribeCACertificateListResponseBodyCertificateList& setTrial(int32_t trial) { DARABONBA_PTR_SET_VALUE(trial_, trial) };


    // x509Certificate Field Functions 
    bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
    void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
    inline string x509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
    inline DescribeCACertificateListResponseBodyCertificateList& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int32_t years() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
    inline DescribeCACertificateListResponseBodyCertificateList& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    // The expiration date of the CA certificate. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> afterDate_ = nullptr;
    // The encryption algorithm of the CA certificate. Valid values:
    // 
    // *   **RSA**: the Rivest-Shamir-Adleman (RSA) algorithm.
    // *   **ECC**: the elliptic curve cryptography (ECC) algorithm.
    // *   **SM2**: the SM2 algorithm, which is developed and approved by the State Cryptography Administration of China.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The alias of the CA.
    std::shared_ptr<string> alias_ = nullptr;
    // The issuance date of the CA certificate. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> beforeDate_ = nullptr;
    // The type of the CA certificate. Valid values:
    // 
    // *   **ROOT**: a root CA certificate.
    // *   **SUB_ROOT**: an intermediate CA certificate.
    std::shared_ptr<string> certificateType_ = nullptr;
    // The common name or abbreviation of the organization that is associated with the CA certificate.
    std::shared_ptr<string> commonName_ = nullptr;
    // The code of the country in which the organization is located.
    // 
    // For more information about country codes, see the **"Country codes"** section of the [Manage company profiles](https://help.aliyun.com/document_detail/198289.html) topic.
    std::shared_ptr<string> countryCode_ = nullptr;
    std::shared_ptr<int32_t> gift_ = nullptr;
    // The unique identifier of the CA certificate.
    std::shared_ptr<string> identifier_ = nullptr;
    // The key length of the CA certificate.
    std::shared_ptr<int32_t> keySize_ = nullptr;
    // The name of the city in which the organization is located.
    std::shared_ptr<string> locality_ = nullptr;
    // The MD5 fingerprint of the CA certificate.
    std::shared_ptr<string> md5_ = nullptr;
    // The name of the organization that is associated with the CA certificate.
    std::shared_ptr<string> organization_ = nullptr;
    // The name of the department or branch in the organization that is associated with the CA certificate.
    std::shared_ptr<string> organizationUnit_ = nullptr;
    // The unique identifier of the root CA certificate from which the CA certificate is issued.
    // 
    // >  This parameter is returned only if the value of the **CertificateType** parameter is **SUB_ROOT**. The value SUB_ROOT indicates an intermediate CA certificate.
    std::shared_ptr<string> parentIdentifier_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> sans_ = nullptr;
    // The serial number of the CA certificate.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The SHA-256 fingerprint of the CA certificate.
    std::shared_ptr<string> sha2_ = nullptr;
    // The signature algorithm of the CA certificate.
    std::shared_ptr<string> signAlgorithm_ = nullptr;
    // The name of the province, municipality, or autonomous region in which the organization is located.
    std::shared_ptr<string> state_ = nullptr;
    // The status of the CA certificate. Valid values:
    // 
    // *   **ISSUE**: The CA certificate is issued.
    // *   **REVOKE**: The CA certificate is revoked.
    std::shared_ptr<string> status_ = nullptr;
    // The Distinguished Name (DN) attribute of the CA certificate, which indicates the user information of the certificate. The DN attribute contains the following information:
    // 
    // *   **C**: the code of the country in which the organization is located.
    // *   **O**: the name of the organization.
    // *   **OU**: the name of the department or branch in the organization.
    // *   **L**: the name of the city in which the organization is located.
    // *   **CN**: the common name or abbreviation of the organization.
    std::shared_ptr<string> subjectDN_ = nullptr;
    std::shared_ptr<int32_t> trial_ = nullptr;
    // The content of the CA certificate.
    std::shared_ptr<string> x509Certificate_ = nullptr;
    // The validity period of the CA certificate. Unit: years.
    std::shared_ptr<int32_t> years_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
