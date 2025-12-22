// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREVOKECERTIFICATERESPONSEBODYCERTIFICATELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTREVOKECERTIFICATERESPONSEBODYCERTIFICATELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListRevokeCertificateResponseBodyCertificateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRevokeCertificateResponseBodyCertificateList& obj) { 
      DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(KeySize, keySize_);
      DARABONBA_PTR_TO_JSON(Locality, locality_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_TO_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(RevokeDate, revokeDate_);
      DARABONBA_PTR_TO_JSON(Sans, sans_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Sha2, sha2_);
      DARABONBA_PTR_TO_JSON(SignAlgorithm, signAlgorithm_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubjectDN, subjectDN_);
    };
    friend void from_json(const Darabonba::Json& j, ListRevokeCertificateResponseBodyCertificateList& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(KeySize, keySize_);
      DARABONBA_PTR_FROM_JSON(Locality, locality_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_FROM_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(RevokeDate, revokeDate_);
      DARABONBA_PTR_FROM_JSON(Sans, sans_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Sha2, sha2_);
      DARABONBA_PTR_FROM_JSON(SignAlgorithm, signAlgorithm_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubjectDN, subjectDN_);
    };
    ListRevokeCertificateResponseBodyCertificateList() = default ;
    ListRevokeCertificateResponseBodyCertificateList(const ListRevokeCertificateResponseBodyCertificateList &) = default ;
    ListRevokeCertificateResponseBodyCertificateList(ListRevokeCertificateResponseBodyCertificateList &&) = default ;
    ListRevokeCertificateResponseBodyCertificateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRevokeCertificateResponseBodyCertificateList() = default ;
    ListRevokeCertificateResponseBodyCertificateList& operator=(const ListRevokeCertificateResponseBodyCertificateList &) = default ;
    ListRevokeCertificateResponseBodyCertificateList& operator=(ListRevokeCertificateResponseBodyCertificateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterDate_ == nullptr
        && return this->algorithm_ == nullptr && return this->beforeDate_ == nullptr && return this->certificateType_ == nullptr && return this->commonName_ == nullptr && return this->countryCode_ == nullptr
        && return this->customIdentifier_ == nullptr && return this->identifier_ == nullptr && return this->keySize_ == nullptr && return this->locality_ == nullptr && return this->md5_ == nullptr
        && return this->organization_ == nullptr && return this->organizationUnit_ == nullptr && return this->parentIdentifier_ == nullptr && return this->revokeDate_ == nullptr && return this->sans_ == nullptr
        && return this->serialNumber_ == nullptr && return this->sha2_ == nullptr && return this->signAlgorithm_ == nullptr && return this->state_ == nullptr && return this->status_ == nullptr
        && return this->subjectDN_ == nullptr; };
    // afterDate Field Functions 
    bool hasAfterDate() const { return this->afterDate_ != nullptr;};
    void deleteAfterDate() { this->afterDate_ = nullptr;};
    inline string afterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setAfterDate(string afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // beforeDate Field Functions 
    bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
    void deleteBeforeDate() { this->beforeDate_ = nullptr;};
    inline string beforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setBeforeDate(string beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string certificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // customIdentifier Field Functions 
    bool hasCustomIdentifier() const { return this->customIdentifier_ != nullptr;};
    void deleteCustomIdentifier() { this->customIdentifier_ = nullptr;};
    inline string customIdentifier() const { DARABONBA_PTR_GET_DEFAULT(customIdentifier_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setCustomIdentifier(string customIdentifier) { DARABONBA_PTR_SET_VALUE(customIdentifier_, customIdentifier) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // keySize Field Functions 
    bool hasKeySize() const { return this->keySize_ != nullptr;};
    void deleteKeySize() { this->keySize_ = nullptr;};
    inline int32_t keySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
    inline ListRevokeCertificateResponseBodyCertificateList& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string locality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string organization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string organizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string parentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // revokeDate Field Functions 
    bool hasRevokeDate() const { return this->revokeDate_ != nullptr;};
    void deleteRevokeDate() { this->revokeDate_ = nullptr;};
    inline string revokeDate() const { DARABONBA_PTR_GET_DEFAULT(revokeDate_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setRevokeDate(string revokeDate) { DARABONBA_PTR_SET_VALUE(revokeDate_, revokeDate) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // sha2 Field Functions 
    bool hasSha2() const { return this->sha2_ != nullptr;};
    void deleteSha2() { this->sha2_ = nullptr;};
    inline string sha2() const { DARABONBA_PTR_GET_DEFAULT(sha2_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setSha2(string sha2) { DARABONBA_PTR_SET_VALUE(sha2_, sha2) };


    // signAlgorithm Field Functions 
    bool hasSignAlgorithm() const { return this->signAlgorithm_ != nullptr;};
    void deleteSignAlgorithm() { this->signAlgorithm_ = nullptr;};
    inline string signAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signAlgorithm_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setSignAlgorithm(string signAlgorithm) { DARABONBA_PTR_SET_VALUE(signAlgorithm_, signAlgorithm) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subjectDN Field Functions 
    bool hasSubjectDN() const { return this->subjectDN_ != nullptr;};
    void deleteSubjectDN() { this->subjectDN_ = nullptr;};
    inline string subjectDN() const { DARABONBA_PTR_GET_DEFAULT(subjectDN_, "") };
    inline ListRevokeCertificateResponseBodyCertificateList& setSubjectDN(string subjectDN) { DARABONBA_PTR_SET_VALUE(subjectDN_, subjectDN) };


  protected:
    // The expiration date of the certificate. The date is in the `yyyy-MM-ddT00:00Z` format. For example, the value `2021-12-31T00:00Z` indicates December 31, 2021.
    std::shared_ptr<string> afterDate_ = nullptr;
    // The type of the encryption algorithm of the certificate. Valid values:
    // 
    // *   **RSA**: the Rivest-Shamir-Adleman (RSA) algorithm.
    // *   **ECC**: the elliptic curve cryptography (ECC) algorithm.
    // *   **SM2**: the SM2 algorithm, which is developed and approved by the State Cryptography Administration of China.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The issuance date of the certificate. The date is in the `yyyy-MM-ddT00:00Z` format. For example, the value `2021-01-01T00:00Z` indicates January 1, 2021.
    std::shared_ptr<string> beforeDate_ = nullptr;
    // The type of the certificate.
    std::shared_ptr<string> certificateType_ = nullptr;
    // The common name of the certificate.
    std::shared_ptr<string> commonName_ = nullptr;
    // The code of the country in which the organization is located. The organization is associated with the intermediate certificate from which the certificate is issued.
    // 
    // For more information about country codes, see the **"Country codes"** section of the [Manage company profiles](https://help.aliyun.com/document_detail/198289.html) topic.
    std::shared_ptr<string> countryCode_ = nullptr;
    std::shared_ptr<string> customIdentifier_ = nullptr;
    // The unique identifier of the certificate.
    std::shared_ptr<string> identifier_ = nullptr;
    // The key length of the certificate.
    std::shared_ptr<int32_t> keySize_ = nullptr;
    // The name of the city in which the organization is located. The organization is associated with the intermediate certificate from which the certificate is issued.
    std::shared_ptr<string> locality_ = nullptr;
    // The MD5 fingerprint of the certificate.
    std::shared_ptr<string> md5_ = nullptr;
    // The name of the organization. The organization is associated with the intermediate certificate from which the certificate is issued.
    std::shared_ptr<string> organization_ = nullptr;
    // The name of the department in the organization. The organization is associated with the intermediate certificate authority (CA) certificate from which the certificate is issued.
    std::shared_ptr<string> organizationUnit_ = nullptr;
    // The identifier of the root certificate.
    std::shared_ptr<string> parentIdentifier_ = nullptr;
    // The date on which the certificate was revoked. The value is in the `yyyy-MM-ddT00:00Z` format. For example, the value `2021-09-01T00:00Z` indicates September 1, 2021.
    std::shared_ptr<string> revokeDate_ = nullptr;
    // The subject alternative name (SAN) extension of the certificate.
    // 
    // The value is a string that consists of JSON arrays. Each element in a JSON array is a JSON struct that corresponds to a SAN extension. A SAN extension struct contains the following parameters:
    // 
    // *   **Type**: the type of the extension. Data type: integer. Valid values:
    // 
    //     *   **1**: an email address
    //     *   **2**: a domain name
    //     *   **6**: a Uniform Resource Identifier (URI)
    //     *   **7**: an IP address
    // 
    // *   **Value**: the value of the extension. Data type: string.
    std::shared_ptr<string> sans_ = nullptr;
    // The serial number of the certificate.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The SHA-256 fingerprint of the certificate.
    std::shared_ptr<string> sha2_ = nullptr;
    // The signature algorithm of the certificate.
    std::shared_ptr<string> signAlgorithm_ = nullptr;
    // The name of the province, municipality, or autonomous region in which the organization is located. The organization is associated with the intermediate certificate from which the certificate is issued.
    std::shared_ptr<string> state_ = nullptr;
    // The status.
    std::shared_ptr<string> status_ = nullptr;
    // The distinguished name (DN) extension of the certificate, which indicates the user of the certificate. The DN extension includes the following information:
    // 
    // *   **C**: the country
    // *   **O**: the organization
    // *   **OU**: the department
    // *   **L**: the city
    // *   **ST**: the province, municipality, or autonomous region
    // *   **CN**: the common name
    std::shared_ptr<string> subjectDN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
