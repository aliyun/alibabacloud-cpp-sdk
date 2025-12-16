// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPCAANDEXTERNALCACERTIFICATELISTRESPONSEBODYCERTIFICATELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPCAANDEXTERNALCACERTIFICATELISTRESPONSEBODYCERTIFICATELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribePcaAndExternalCACertificateListResponseBodyCertificateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePcaAndExternalCACertificateListResponseBodyCertificateList& obj) { 
      DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
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
      DARABONBA_PTR_TO_JSON(Years, years_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePcaAndExternalCACertificateListResponseBodyCertificateList& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
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
      DARABONBA_PTR_FROM_JSON(Years, years_);
    };
    DescribePcaAndExternalCACertificateListResponseBodyCertificateList() = default ;
    DescribePcaAndExternalCACertificateListResponseBodyCertificateList(const DescribePcaAndExternalCACertificateListResponseBodyCertificateList &) = default ;
    DescribePcaAndExternalCACertificateListResponseBodyCertificateList(DescribePcaAndExternalCACertificateListResponseBodyCertificateList &&) = default ;
    DescribePcaAndExternalCACertificateListResponseBodyCertificateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePcaAndExternalCACertificateListResponseBodyCertificateList() = default ;
    DescribePcaAndExternalCACertificateListResponseBodyCertificateList& operator=(const DescribePcaAndExternalCACertificateListResponseBodyCertificateList &) = default ;
    DescribePcaAndExternalCACertificateListResponseBodyCertificateList& operator=(DescribePcaAndExternalCACertificateListResponseBodyCertificateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterDate_ == nullptr
        && return this->algorithm_ == nullptr && return this->beforeDate_ == nullptr && return this->certificateType_ == nullptr && return this->commonName_ == nullptr && return this->countryCode_ == nullptr
        && return this->identifier_ == nullptr && return this->keySize_ == nullptr && return this->locality_ == nullptr && return this->md5_ == nullptr && return this->organization_ == nullptr
        && return this->organizationUnit_ == nullptr && return this->parentIdentifier_ == nullptr && return this->sans_ == nullptr && return this->serialNumber_ == nullptr && return this->sha2_ == nullptr
        && return this->signAlgorithm_ == nullptr && return this->state_ == nullptr && return this->status_ == nullptr && return this->subjectDN_ == nullptr && return this->x509Certificate_ == nullptr
        && return this->years_ == nullptr; };
    // afterDate Field Functions 
    bool hasAfterDate() const { return this->afterDate_ != nullptr;};
    void deleteAfterDate() { this->afterDate_ = nullptr;};
    inline int64_t afterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, 0L) };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setAfterDate(int64_t afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // beforeDate Field Functions 
    bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
    void deleteBeforeDate() { this->beforeDate_ = nullptr;};
    inline int64_t beforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, 0L) };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setBeforeDate(int64_t beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string certificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // keySize Field Functions 
    bool hasKeySize() const { return this->keySize_ != nullptr;};
    void deleteKeySize() { this->keySize_ = nullptr;};
    inline int32_t keySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string locality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string organization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string organizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string parentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // sha2 Field Functions 
    bool hasSha2() const { return this->sha2_ != nullptr;};
    void deleteSha2() { this->sha2_ = nullptr;};
    inline string sha2() const { DARABONBA_PTR_GET_DEFAULT(sha2_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setSha2(string sha2) { DARABONBA_PTR_SET_VALUE(sha2_, sha2) };


    // signAlgorithm Field Functions 
    bool hasSignAlgorithm() const { return this->signAlgorithm_ != nullptr;};
    void deleteSignAlgorithm() { this->signAlgorithm_ = nullptr;};
    inline string signAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signAlgorithm_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setSignAlgorithm(string signAlgorithm) { DARABONBA_PTR_SET_VALUE(signAlgorithm_, signAlgorithm) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subjectDN Field Functions 
    bool hasSubjectDN() const { return this->subjectDN_ != nullptr;};
    void deleteSubjectDN() { this->subjectDN_ = nullptr;};
    inline string subjectDN() const { DARABONBA_PTR_GET_DEFAULT(subjectDN_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setSubjectDN(string subjectDN) { DARABONBA_PTR_SET_VALUE(subjectDN_, subjectDN) };


    // x509Certificate Field Functions 
    bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
    void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
    inline string x509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int32_t years() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
    inline DescribePcaAndExternalCACertificateListResponseBodyCertificateList& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    std::shared_ptr<int64_t> afterDate_ = nullptr;
    std::shared_ptr<string> algorithm_ = nullptr;
    std::shared_ptr<int64_t> beforeDate_ = nullptr;
    std::shared_ptr<string> certificateType_ = nullptr;
    std::shared_ptr<string> commonName_ = nullptr;
    std::shared_ptr<string> countryCode_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<int32_t> keySize_ = nullptr;
    std::shared_ptr<string> locality_ = nullptr;
    std::shared_ptr<string> md5_ = nullptr;
    std::shared_ptr<string> organization_ = nullptr;
    std::shared_ptr<string> organizationUnit_ = nullptr;
    std::shared_ptr<string> parentIdentifier_ = nullptr;
    std::shared_ptr<string> sans_ = nullptr;
    std::shared_ptr<string> serialNumber_ = nullptr;
    std::shared_ptr<string> sha2_ = nullptr;
    std::shared_ptr<string> signAlgorithm_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subjectDN_ = nullptr;
    std::shared_ptr<string> x509Certificate_ = nullptr;
    std::shared_ptr<int32_t> years_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
