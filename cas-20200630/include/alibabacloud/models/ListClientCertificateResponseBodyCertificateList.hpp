// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTCERTIFICATERESPONSEBODYCERTIFICATELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTCERTIFICATERESPONSEBODYCERTIFICATELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListClientCertificateResponseBodyCertificateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientCertificateResponseBodyCertificateList& obj) { 
      DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(Days, days_);
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
      DARABONBA_PTR_TO_JSON(X509Certificate, x509Certificate_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientCertificateResponseBodyCertificateList& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(Days, days_);
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
      DARABONBA_PTR_FROM_JSON(X509Certificate, x509Certificate_);
    };
    ListClientCertificateResponseBodyCertificateList() = default ;
    ListClientCertificateResponseBodyCertificateList(const ListClientCertificateResponseBodyCertificateList &) = default ;
    ListClientCertificateResponseBodyCertificateList(ListClientCertificateResponseBodyCertificateList &&) = default ;
    ListClientCertificateResponseBodyCertificateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientCertificateResponseBodyCertificateList() = default ;
    ListClientCertificateResponseBodyCertificateList& operator=(const ListClientCertificateResponseBodyCertificateList &) = default ;
    ListClientCertificateResponseBodyCertificateList& operator=(ListClientCertificateResponseBodyCertificateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->afterDate_ != nullptr
        && this->algorithm_ != nullptr && this->beforeDate_ != nullptr && this->certificateType_ != nullptr && this->commonName_ != nullptr && this->countryCode_ != nullptr
        && this->days_ != nullptr && this->identifier_ != nullptr && this->keySize_ != nullptr && this->locality_ != nullptr && this->md5_ != nullptr
        && this->organization_ != nullptr && this->organizationUnit_ != nullptr && this->parentIdentifier_ != nullptr && this->sans_ != nullptr && this->serialNumber_ != nullptr
        && this->sha2_ != nullptr && this->signAlgorithm_ != nullptr && this->state_ != nullptr && this->status_ != nullptr && this->subjectDN_ != nullptr
        && this->x509Certificate_ != nullptr; };
    // afterDate Field Functions 
    bool hasAfterDate() const { return this->afterDate_ != nullptr;};
    void deleteAfterDate() { this->afterDate_ = nullptr;};
    inline int64_t afterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, 0L) };
    inline ListClientCertificateResponseBodyCertificateList& setAfterDate(int64_t afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // beforeDate Field Functions 
    bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
    void deleteBeforeDate() { this->beforeDate_ = nullptr;};
    inline int64_t beforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, 0L) };
    inline ListClientCertificateResponseBodyCertificateList& setBeforeDate(int64_t beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string certificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t days() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline ListClientCertificateResponseBodyCertificateList& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // keySize Field Functions 
    bool hasKeySize() const { return this->keySize_ != nullptr;};
    void deleteKeySize() { this->keySize_ = nullptr;};
    inline int32_t keySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
    inline ListClientCertificateResponseBodyCertificateList& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string locality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string organization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string organizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string parentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // sha2 Field Functions 
    bool hasSha2() const { return this->sha2_ != nullptr;};
    void deleteSha2() { this->sha2_ = nullptr;};
    inline string sha2() const { DARABONBA_PTR_GET_DEFAULT(sha2_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setSha2(string sha2) { DARABONBA_PTR_SET_VALUE(sha2_, sha2) };


    // signAlgorithm Field Functions 
    bool hasSignAlgorithm() const { return this->signAlgorithm_ != nullptr;};
    void deleteSignAlgorithm() { this->signAlgorithm_ = nullptr;};
    inline string signAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signAlgorithm_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setSignAlgorithm(string signAlgorithm) { DARABONBA_PTR_SET_VALUE(signAlgorithm_, signAlgorithm) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subjectDN Field Functions 
    bool hasSubjectDN() const { return this->subjectDN_ != nullptr;};
    void deleteSubjectDN() { this->subjectDN_ = nullptr;};
    inline string subjectDN() const { DARABONBA_PTR_GET_DEFAULT(subjectDN_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setSubjectDN(string subjectDN) { DARABONBA_PTR_SET_VALUE(subjectDN_, subjectDN) };


    // x509Certificate Field Functions 
    bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
    void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
    inline string x509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
    inline ListClientCertificateResponseBodyCertificateList& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


  protected:
    // The expiration date of the certificate. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> afterDate_ = nullptr;
    // The type of the encryption algorithm of the certificate. Valid values:
    // 
    // *   **RSA**: the Rivest-Shamir-Adleman (RSA) algorithm.
    // *   **ECC**: the elliptic curve cryptography (ECC) algorithm.
    // *   **SM2**: the SM2 algorithm, which is developed and approved by the State Cryptography Administration of China.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The issuance date of the certificate. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> beforeDate_ = nullptr;
    // The type of the certificate. Valid values:
    // 
    // *   **CLIENT**: client certificate
    // *   **SERVER**: server certificate
    std::shared_ptr<string> certificateType_ = nullptr;
    // The common name of the certificate.
    std::shared_ptr<string> commonName_ = nullptr;
    // The code of the country in which the organization is located. The organization is associated with the intermediate certificate from which the certificate is issued.
    // 
    // For more information about country codes, see the **"Country codes"** section of the [Manage company profiles](https://help.aliyun.com/document_detail/198289.html) topic.
    std::shared_ptr<string> countryCode_ = nullptr;
    // The validity period of the certificate. Unit: days.
    std::shared_ptr<int32_t> days_ = nullptr;
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
    // The unique identifier of the intermediate certificate from which the client certificate is issued.
    std::shared_ptr<string> parentIdentifier_ = nullptr;
    // The subject alternative name (SAN) extension of the certificate. The value indicates additional information, including the additional domain names or IP addresses that are associated with the certificate.
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
    // The status of the certificate. Valid values:
    // 
    // *   **ISSUE**: issued
    // *   **REVOKE**: revoked
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
    // The content of the certificate.
    std::shared_ptr<string> x509Certificate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
