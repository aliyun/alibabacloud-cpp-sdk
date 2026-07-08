// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWHCLIENTCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWHCLIENTCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateWHClientCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWHClientCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(Immediately, immediately_);
      DARABONBA_PTR_TO_JSON(Locality, locality_);
      DARABONBA_PTR_TO_JSON(Months, months_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_TO_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(SanType, sanType_);
      DARABONBA_PTR_TO_JSON(SanValue, sanValue_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Years, years_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWHClientCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(Immediately, immediately_);
      DARABONBA_PTR_FROM_JSON(Locality, locality_);
      DARABONBA_PTR_FROM_JSON(Months, months_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_FROM_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(SanType, sanType_);
      DARABONBA_PTR_FROM_JSON(SanValue, sanValue_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Years, years_);
    };
    CreateWHClientCertificateRequest() = default ;
    CreateWHClientCertificateRequest(const CreateWHClientCertificateRequest &) = default ;
    CreateWHClientCertificateRequest(CreateWHClientCertificateRequest &&) = default ;
    CreateWHClientCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWHClientCertificateRequest() = default ;
    CreateWHClientCertificateRequest& operator=(const CreateWHClientCertificateRequest &) = default ;
    CreateWHClientCertificateRequest& operator=(CreateWHClientCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterTime_ == nullptr
        && this->algorithm_ == nullptr && this->beforeTime_ == nullptr && this->commonName_ == nullptr && this->country_ == nullptr && this->csr_ == nullptr
        && this->days_ == nullptr && this->immediately_ == nullptr && this->locality_ == nullptr && this->months_ == nullptr && this->organization_ == nullptr
        && this->organizationUnit_ == nullptr && this->parentIdentifier_ == nullptr && this->sanType_ == nullptr && this->sanValue_ == nullptr && this->state_ == nullptr
        && this->years_ == nullptr; };
    // afterTime Field Functions 
    bool hasAfterTime() const { return this->afterTime_ != nullptr;};
    void deleteAfterTime() { this->afterTime_ = nullptr;};
    inline int64_t getAfterTime() const { DARABONBA_PTR_GET_DEFAULT(afterTime_, 0L) };
    inline CreateWHClientCertificateRequest& setAfterTime(int64_t afterTime) { DARABONBA_PTR_SET_VALUE(afterTime_, afterTime) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateWHClientCertificateRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // beforeTime Field Functions 
    bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
    void deleteBeforeTime() { this->beforeTime_ = nullptr;};
    inline int64_t getBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, 0L) };
    inline CreateWHClientCertificateRequest& setBeforeTime(int64_t beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateWHClientCertificateRequest& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline CreateWHClientCertificateRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string getCsr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateWHClientCertificateRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int64_t getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, 0L) };
    inline CreateWHClientCertificateRequest& setDays(int64_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // immediately Field Functions 
    bool hasImmediately() const { return this->immediately_ != nullptr;};
    void deleteImmediately() { this->immediately_ = nullptr;};
    inline int64_t getImmediately() const { DARABONBA_PTR_GET_DEFAULT(immediately_, 0L) };
    inline CreateWHClientCertificateRequest& setImmediately(int64_t immediately) { DARABONBA_PTR_SET_VALUE(immediately_, immediately) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string getLocality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline CreateWHClientCertificateRequest& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // months Field Functions 
    bool hasMonths() const { return this->months_ != nullptr;};
    void deleteMonths() { this->months_ = nullptr;};
    inline int64_t getMonths() const { DARABONBA_PTR_GET_DEFAULT(months_, 0L) };
    inline CreateWHClientCertificateRequest& setMonths(int64_t months) { DARABONBA_PTR_SET_VALUE(months_, months) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateWHClientCertificateRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string getOrganizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateWHClientCertificateRequest& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string getParentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline CreateWHClientCertificateRequest& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // sanType Field Functions 
    bool hasSanType() const { return this->sanType_ != nullptr;};
    void deleteSanType() { this->sanType_ = nullptr;};
    inline int64_t getSanType() const { DARABONBA_PTR_GET_DEFAULT(sanType_, 0L) };
    inline CreateWHClientCertificateRequest& setSanType(int64_t sanType) { DARABONBA_PTR_SET_VALUE(sanType_, sanType) };


    // sanValue Field Functions 
    bool hasSanValue() const { return this->sanValue_ != nullptr;};
    void deleteSanValue() { this->sanValue_ = nullptr;};
    inline string getSanValue() const { DARABONBA_PTR_GET_DEFAULT(sanValue_, "") };
    inline CreateWHClientCertificateRequest& setSanValue(string sanValue) { DARABONBA_PTR_SET_VALUE(sanValue_, sanValue) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateWHClientCertificateRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int64_t getYears() const { DARABONBA_PTR_GET_DEFAULT(years_, 0L) };
    inline CreateWHClientCertificateRequest& setYears(int64_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    // The expiration time of the client certificate, specified as a Unix timestamp in seconds.
    // 
    // > The `BeforeTime` and `AfterTime` parameters must be specified together or not at all.
    shared_ptr<int64_t> afterTime_ {};
    // The key algorithm for the client certificate. The format is `<encryption_algorithm>_<key_length>`. Valid values:
    // 
    // - **RSA_1024**: The corresponding signature algorithm is Sha256WithRSA.
    // 
    // - **RSA_2048**: The corresponding signature algorithm is Sha256WithRSA.
    // 
    // - **RSA_4096**: The corresponding signature algorithm is Sha256WithRSA.
    // 
    // - **ECC_256**: The corresponding signature algorithm is Sha256WithECDSA.
    // 
    // - **ECC_384**: The corresponding signature algorithm is Sha256WithECDSA.
    // 
    // - **ECC_512**: The corresponding signature algorithm is Sha256WithECDSA.
    // 
    // - **SM2_256**: The corresponding signature algorithm is SM3WithSM2.
    // 
    // The encryption algorithm of the client certificate must match that of the issuing subordinate CA certificate, but the key lengths can differ. For example, if the key algorithm of the subordinate CA certificate is RSA_2048, the key algorithm for the client certificate must be one of RSA_1024, RSA_2048, or RSA_4096.
    shared_ptr<string> algorithm_ {};
    // The issuance time of the client certificate, as a Unix timestamp in seconds. If omitted, this defaults to the time of the API call.
    // 
    // > The `BeforeTime` and `AfterTime` parameters must be specified together or not at all.
    shared_ptr<int64_t> beforeTime_ {};
    // The common name of the client certificate. Supports Chinese, English, and other characters.
    shared_ptr<string> commonName_ {};
    // The country where the organization is located.
    shared_ptr<string> country_ {};
    // The content of the certificate signing request (CSR). You can generate a CSR with tools like OpenSSL or Keytool.
    shared_ptr<string> csr_ {};
    // The validity period of the client certificate, in days.
    // 
    // You cannot leave the `Days`, `BeforeTime`, and `AfterTime` parameters all empty. The `BeforeTime` and `AfterTime` parameters must be specified together or not at all.
    // 
    // - If you specify the `Days` parameter, specifying `BeforeTime` and `AfterTime` is optional.
    // 
    // - If you do not specify the `Days` parameter, you must specify both `BeforeTime` and `AfterTime`.
    // 
    // > If you specify `Days`, `BeforeTime`, and `AfterTime` simultaneously, the `Days` parameter takes precedence in determining the validity period.
    shared_ptr<int64_t> days_ {};
    // Specifies which certificate content to return in the response.
    // 
    // - **0**: Does not return the certificate (default).
    // 
    // - **1**: Returns the certificate.
    // 
    // - **2**: Returns the certificate and its certificate chain.
    shared_ptr<int64_t> immediately_ {};
    // The city where the organization is located. Chinese, English, and other characters are supported.
    shared_ptr<string> locality_ {};
    // The validity period of the certificate, in months.
    shared_ptr<int64_t> months_ {};
    // The organization name associated with the root CA certificate, typically your company or enterprise name. Supports Chinese, English, and other characters.
    shared_ptr<string> organization_ {};
    // The name of the department or business unit within the organization.
    shared_ptr<string> organizationUnit_ {};
    // The unique identifier of the issuing subordinate CA certificate.
    // 
    // This parameter is required.
    shared_ptr<string> parentIdentifier_ {};
    // The type of the subject alternative name (SAN) for the client certificate. Valid values:
    // 
    // - **1**: email address.
    // 
    // - **2**: domain name.
    // 
    // - **6**: Uniform Resource Identifier (URI).
    // 
    // - **7**: IP address.
    shared_ptr<int64_t> sanType_ {};
    // The value of the SAN extension. To specify multiple values, separate them with commas (,).
    shared_ptr<string> sanValue_ {};
    // The province, municipality, or autonomous region where the organization is located. Chinese, English, and other characters are supported.
    shared_ptr<string> state_ {};
    // The validity period of the certificate, in years.
    shared_ptr<int64_t> years_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
