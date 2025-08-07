// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVERCERTIFICATEWITHCSRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVERCERTIFICATEWITHCSRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateServerCertificateWithCsrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServerCertificateWithCsrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EnableCrl, enableCrl_);
      DARABONBA_PTR_TO_JSON(Immediately, immediately_);
      DARABONBA_PTR_TO_JSON(Locality, locality_);
      DARABONBA_PTR_TO_JSON(Months, months_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_TO_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Years, years_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServerCertificateWithCsrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EnableCrl, enableCrl_);
      DARABONBA_PTR_FROM_JSON(Immediately, immediately_);
      DARABONBA_PTR_FROM_JSON(Locality, locality_);
      DARABONBA_PTR_FROM_JSON(Months, months_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_FROM_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Years, years_);
    };
    CreateServerCertificateWithCsrRequest() = default ;
    CreateServerCertificateWithCsrRequest(const CreateServerCertificateWithCsrRequest &) = default ;
    CreateServerCertificateWithCsrRequest(CreateServerCertificateWithCsrRequest &&) = default ;
    CreateServerCertificateWithCsrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServerCertificateWithCsrRequest() = default ;
    CreateServerCertificateWithCsrRequest& operator=(const CreateServerCertificateWithCsrRequest &) = default ;
    CreateServerCertificateWithCsrRequest& operator=(CreateServerCertificateWithCsrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->afterTime_ != nullptr
        && this->algorithm_ != nullptr && this->beforeTime_ != nullptr && this->commonName_ != nullptr && this->country_ != nullptr && this->csr_ != nullptr
        && this->days_ != nullptr && this->domain_ != nullptr && this->enableCrl_ != nullptr && this->immediately_ != nullptr && this->locality_ != nullptr
        && this->months_ != nullptr && this->organization_ != nullptr && this->organizationUnit_ != nullptr && this->parentIdentifier_ != nullptr && this->state_ != nullptr
        && this->years_ != nullptr; };
    // afterTime Field Functions 
    bool hasAfterTime() const { return this->afterTime_ != nullptr;};
    void deleteAfterTime() { this->afterTime_ = nullptr;};
    inline int64_t afterTime() const { DARABONBA_PTR_GET_DEFAULT(afterTime_, 0L) };
    inline CreateServerCertificateWithCsrRequest& setAfterTime(int64_t afterTime) { DARABONBA_PTR_SET_VALUE(afterTime_, afterTime) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateServerCertificateWithCsrRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // beforeTime Field Functions 
    bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
    void deleteBeforeTime() { this->beforeTime_ = nullptr;};
    inline int64_t beforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, 0L) };
    inline CreateServerCertificateWithCsrRequest& setBeforeTime(int64_t beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateServerCertificateWithCsrRequest& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline CreateServerCertificateWithCsrRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string csr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateServerCertificateWithCsrRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t days() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline CreateServerCertificateWithCsrRequest& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateServerCertificateWithCsrRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enableCrl Field Functions 
    bool hasEnableCrl() const { return this->enableCrl_ != nullptr;};
    void deleteEnableCrl() { this->enableCrl_ = nullptr;};
    inline int64_t enableCrl() const { DARABONBA_PTR_GET_DEFAULT(enableCrl_, 0L) };
    inline CreateServerCertificateWithCsrRequest& setEnableCrl(int64_t enableCrl) { DARABONBA_PTR_SET_VALUE(enableCrl_, enableCrl) };


    // immediately Field Functions 
    bool hasImmediately() const { return this->immediately_ != nullptr;};
    void deleteImmediately() { this->immediately_ = nullptr;};
    inline int32_t immediately() const { DARABONBA_PTR_GET_DEFAULT(immediately_, 0) };
    inline CreateServerCertificateWithCsrRequest& setImmediately(int32_t immediately) { DARABONBA_PTR_SET_VALUE(immediately_, immediately) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string locality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline CreateServerCertificateWithCsrRequest& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // months Field Functions 
    bool hasMonths() const { return this->months_ != nullptr;};
    void deleteMonths() { this->months_ = nullptr;};
    inline int32_t months() const { DARABONBA_PTR_GET_DEFAULT(months_, 0) };
    inline CreateServerCertificateWithCsrRequest& setMonths(int32_t months) { DARABONBA_PTR_SET_VALUE(months_, months) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string organization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateServerCertificateWithCsrRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string organizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateServerCertificateWithCsrRequest& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string parentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline CreateServerCertificateWithCsrRequest& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateServerCertificateWithCsrRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int32_t years() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
    inline CreateServerCertificateWithCsrRequest& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    // The expiration time of the server certificate. This value is a UNIX timestamp. Unit: seconds.
    // 
    // >  The **BeforeTime** and **AfterTime** parameters must be both empty or both specified.
    std::shared_ptr<int64_t> afterTime_ = nullptr;
    // The key algorithm of the server certificate. The key algorithm is in the `<Encryption algorithm>_<Key length>` format. Valid values:
    // 
    // *   **RSA_1024**: The signature algorithm is Sha256WithRSA.
    // *   **RSA_2048**: The signature algorithm is Sha256WithRSA.
    // *   **RSA_4096**: The signature algorithm is Sha256WithRSA.
    // *   **ECC_256**: The signature algorithm is Sha256WithECDSA.
    // *   **ECC_384**: The signature algorithm is Sha256WithECDSA.
    // *   **ECC_512**: The signature algorithm is Sha256WithECDSA.
    // *   **SM2_256**: The signature algorithm is SM3WithSM2.
    // 
    // The encryption algorithm of the server certificate must be the same as the encryption algorithm of the intermediate CA certificate. The key length can be different. For example, if the key algorithm of the intermediate CA certificate is RSA_2048, the key algorithm of the server certificate must be RSA_1024, RSA_2048, or RSA_4096.
    // 
    // >  You can call the [DescribeCACertificate](https://help.aliyun.com/document_detail/328096.html) operation to query the key algorithm of an intermediate CA certificate.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The issuance time of the server certificate. This value is a UNIX timestamp. The default value is the time when you call this operation. Unit: seconds.
    // 
    // >  The **BeforeTime** and **AfterTime** parameters must be both empty or both specified.
    std::shared_ptr<int64_t> beforeTime_ = nullptr;
    // The name of the certificate user. The user of a server certificate is a server. We recommend that you enter the domain name or IP address of the server.
    std::shared_ptr<string> commonName_ = nullptr;
    // The code of the country in which the organization is located, such as CN or US.
    std::shared_ptr<string> country_ = nullptr;
    // The content of the CSR.
    // 
    // You can generate a CSR by using the OpenSSL tool or the Keytool tool. For more information, see [How do I create a CSR file?](https://help.aliyun.com/document_detail/42218.html)
    // 
    // This parameter is required.
    std::shared_ptr<string> csr_ = nullptr;
    // The validity period of the server certificate. Unit: days.
    // 
    // You must specify at least one of the **Days**, **BeforeTime**, and **AfterTime** parameters. The **BeforeTime** and **AfterTime** parameters must be both empty or both specified. The following list describes how to specify these parameters:
    // 
    // *   If you specify the **Days** parameter, you can specify both the **BeforeTime** and **AfterTime** parameters or leave them both empty.********
    // *   If you do not specify the **Days** parameter, you must specify both the **BeforeTime** and **AfterTime** parameters.
    // 
    // > 
    // 
    // *   If you specify the **Days**, **BeforeTime**, and **AfterTime** parameters at the same time, the validity period of the server certificate is determined by the value of the **Days** parameter.
    // *   The validity period of the server certificate cannot exceed the validity period of the intermediate CA certificate. You can call the [DescribeCACertificate](https://help.aliyun.com/document_detail/328096.html) operation to query the validity period of an intermediate CA certificate.
    std::shared_ptr<int32_t> days_ = nullptr;
    // The additional domain names or additional IP addresses of the server certificate. After you add additional domain names and additional IP addresses to a certificate, you can apply the certificate to the domain names and IP addresses.
    // 
    // You can specify multiple domain names and IP addresses. If you specify multiple domain names and IP addresses, separate them with commas (,).
    std::shared_ptr<string> domain_ = nullptr;
    // include the CRL address.
    // 
    // - 0- No
    // - 1- Yes
    std::shared_ptr<int64_t> enableCrl_ = nullptr;
    // Specifies whether to return the certificate. Valid values:
    // 
    // *   **0**: does not return the certificate. This is the default value.
    // *   **1**: returns the certificate.
    // *   **2**: returns the certificate and the certificate chain of the certificate.
    std::shared_ptr<int32_t> immediately_ = nullptr;
    // The name of the city in which the organization is located. The value can contain letters. The default value is the name of the city in which the organization is located. The organization is associated with the intermediate CA certificate from which the certificate is issued.
    std::shared_ptr<string> locality_ = nullptr;
    // The validity period of the server certificate. Unit: months.
    std::shared_ptr<int32_t> months_ = nullptr;
    // The name of the organization. Default value: Alibaba Inc.
    std::shared_ptr<string> organization_ = nullptr;
    // The name of the department. Default value: Aliyun CDN.
    std::shared_ptr<string> organizationUnit_ = nullptr;
    // The unique identifier of the intermediate CA certificate from which the server certificate is issued.
    // 
    // >  You can call the [DescribeCACertificateList](https://help.aliyun.com/document_detail/328095.html) operation to query the unique identifier of an intermediate CA certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> parentIdentifier_ = nullptr;
    // The province, municipality, or autonomous region in which the organization is located. The value can contain letters. The default value is the name of the province, municipality, or autonomous region in which the organization is located. The organization is associated with the intermediate CA certificate from which the certificate is issued.
    std::shared_ptr<string> state_ = nullptr;
    // The validity period of the server certificate. Unit: years.
    std::shared_ptr<int32_t> years_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
