// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClientCertificateRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateClientCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(EnableCrl, enableCrl_);
      DARABONBA_PTR_TO_JSON(Immediately, immediately_);
      DARABONBA_PTR_TO_JSON(Locality, locality_);
      DARABONBA_PTR_TO_JSON(Months, months_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_TO_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SanType, sanType_);
      DARABONBA_PTR_TO_JSON(SanValue, sanValue_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Years, years_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(EnableCrl, enableCrl_);
      DARABONBA_PTR_FROM_JSON(Immediately, immediately_);
      DARABONBA_PTR_FROM_JSON(Locality, locality_);
      DARABONBA_PTR_FROM_JSON(Months, months_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_FROM_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SanType, sanType_);
      DARABONBA_PTR_FROM_JSON(SanValue, sanValue_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Years, years_);
    };
    CreateClientCertificateRequest() = default ;
    CreateClientCertificateRequest(const CreateClientCertificateRequest &) = default ;
    CreateClientCertificateRequest(CreateClientCertificateRequest &&) = default ;
    CreateClientCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientCertificateRequest() = default ;
    CreateClientCertificateRequest& operator=(const CreateClientCertificateRequest &) = default ;
    CreateClientCertificateRequest& operator=(CreateClientCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterTime_ == nullptr
        && return this->algorithm_ == nullptr && return this->beforeTime_ == nullptr && return this->commonName_ == nullptr && return this->country_ == nullptr && return this->customIdentifier_ == nullptr
        && return this->days_ == nullptr && return this->enableCrl_ == nullptr && return this->immediately_ == nullptr && return this->locality_ == nullptr && return this->months_ == nullptr
        && return this->organization_ == nullptr && return this->organizationUnit_ == nullptr && return this->parentIdentifier_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sanType_ == nullptr
        && return this->sanValue_ == nullptr && return this->state_ == nullptr && return this->tags_ == nullptr && return this->years_ == nullptr; };
    // afterTime Field Functions 
    bool hasAfterTime() const { return this->afterTime_ != nullptr;};
    void deleteAfterTime() { this->afterTime_ = nullptr;};
    inline int64_t afterTime() const { DARABONBA_PTR_GET_DEFAULT(afterTime_, 0L) };
    inline CreateClientCertificateRequest& setAfterTime(int64_t afterTime) { DARABONBA_PTR_SET_VALUE(afterTime_, afterTime) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateClientCertificateRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // beforeTime Field Functions 
    bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
    void deleteBeforeTime() { this->beforeTime_ = nullptr;};
    inline int64_t beforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, 0L) };
    inline CreateClientCertificateRequest& setBeforeTime(int64_t beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateClientCertificateRequest& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline CreateClientCertificateRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // customIdentifier Field Functions 
    bool hasCustomIdentifier() const { return this->customIdentifier_ != nullptr;};
    void deleteCustomIdentifier() { this->customIdentifier_ = nullptr;};
    inline string customIdentifier() const { DARABONBA_PTR_GET_DEFAULT(customIdentifier_, "") };
    inline CreateClientCertificateRequest& setCustomIdentifier(string customIdentifier) { DARABONBA_PTR_SET_VALUE(customIdentifier_, customIdentifier) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t days() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline CreateClientCertificateRequest& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // enableCrl Field Functions 
    bool hasEnableCrl() const { return this->enableCrl_ != nullptr;};
    void deleteEnableCrl() { this->enableCrl_ = nullptr;};
    inline int64_t enableCrl() const { DARABONBA_PTR_GET_DEFAULT(enableCrl_, 0L) };
    inline CreateClientCertificateRequest& setEnableCrl(int64_t enableCrl) { DARABONBA_PTR_SET_VALUE(enableCrl_, enableCrl) };


    // immediately Field Functions 
    bool hasImmediately() const { return this->immediately_ != nullptr;};
    void deleteImmediately() { this->immediately_ = nullptr;};
    inline int32_t immediately() const { DARABONBA_PTR_GET_DEFAULT(immediately_, 0) };
    inline CreateClientCertificateRequest& setImmediately(int32_t immediately) { DARABONBA_PTR_SET_VALUE(immediately_, immediately) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string locality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline CreateClientCertificateRequest& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // months Field Functions 
    bool hasMonths() const { return this->months_ != nullptr;};
    void deleteMonths() { this->months_ = nullptr;};
    inline int32_t months() const { DARABONBA_PTR_GET_DEFAULT(months_, 0) };
    inline CreateClientCertificateRequest& setMonths(int32_t months) { DARABONBA_PTR_SET_VALUE(months_, months) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string organization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateClientCertificateRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string organizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateClientCertificateRequest& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string parentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline CreateClientCertificateRequest& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClientCertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sanType Field Functions 
    bool hasSanType() const { return this->sanType_ != nullptr;};
    void deleteSanType() { this->sanType_ = nullptr;};
    inline int32_t sanType() const { DARABONBA_PTR_GET_DEFAULT(sanType_, 0) };
    inline CreateClientCertificateRequest& setSanType(int32_t sanType) { DARABONBA_PTR_SET_VALUE(sanType_, sanType) };


    // sanValue Field Functions 
    bool hasSanValue() const { return this->sanValue_ != nullptr;};
    void deleteSanValue() { this->sanValue_ = nullptr;};
    inline string sanValue() const { DARABONBA_PTR_GET_DEFAULT(sanValue_, "") };
    inline CreateClientCertificateRequest& setSanValue(string sanValue) { DARABONBA_PTR_SET_VALUE(sanValue_, sanValue) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateClientCertificateRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateClientCertificateRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateClientCertificateRequestTags>) };
    inline vector<CreateClientCertificateRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateClientCertificateRequestTags>) };
    inline CreateClientCertificateRequest& setTags(const vector<CreateClientCertificateRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateClientCertificateRequest& setTags(vector<CreateClientCertificateRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int32_t years() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
    inline CreateClientCertificateRequest& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    // The expiration time of the client certificate. This value is a UNIX timestamp. Unit: seconds.
    // 
    // >  The **BeforeTime** and **AfterTime** parameters must be both empty or both specified.
    std::shared_ptr<int64_t> afterTime_ = nullptr;
    // The key algorithm of the client certificate. The key algorithm is in the `<Encryption algorithm>_<Key length>` format. Valid values:
    // 
    // *   **RSA_1024**: The signature algorithm is Sha256WithRSA.
    // *   **RSA_2048**: The signature algorithm is Sha256WithRSA.
    // *   **RSA_4096**: The signature algorithm is Sha256WithRSA.
    // *   **ECC_256**: The signature algorithm is Sha256WithECDSA.
    // *   **ECC_384**: The signature algorithm is Sha256WithECDSA.
    // *   **ECC_512**: The signature algorithm is Sha256WithECDSA.
    // *   **SM2_256**: The signature algorithm is SM3WithSM2.
    // 
    // The encryption algorithm of the client certificate must be the same with the encryption algorithm of the intermediate certificate authority (CA) certificate. The key length can be different. For example, if the key algorithm of the intermediate CA certificate is RSA_2048, the key algorithm of the client certificate must be RSA_1024, RSA_2048, or RSA_4096.
    // 
    // > You can call the [DescribeCACertificate] operation to query the key algorithm of an intermediate CA certificate.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The issuance time of the client certificate. This value is a UNIX timestamp. The default value is the time when you call this operation. Unit: seconds.
    // 
    // >  The **BeforeTime** and **AfterTime** parameters must be both empty or both specified.
    std::shared_ptr<int64_t> beforeTime_ = nullptr;
    // The name of the client certificate user. In most cases, the user of a client certificate is an individual, a company, an organization, or an application. We recommend that you enter the common name of a user. Examples: Bob, Alibaba, Alibaba Cloud password platform, and Tmall Genie.
    std::shared_ptr<string> commonName_ = nullptr;
    // The country in which the organization is located. Default value: CN.
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> customIdentifier_ = nullptr;
    // The validity period of the client certificate. Unit: day. You must specify at least one of the **Days**, **BeforeTime**, and **AfterTime** parameters. The **BeforeTime** and **AfterTime** parameters must be both empty or both specified. The following list describes how to specify these parameters:
    // 
    // *   If you specify the **Days** parameter, you can specify both the **BeforeTime** and **AfterTime** parameters or leave them both empty.
    // *   If you do not specify the **Days** parameter, you must specify both the **BeforeTime** and **AfterTime** parameters.
    // 
    // > 
    // 
    // *   If you specify the **Days**, **BeforeTime**, and **AfterTime** parameters at the same time, the validity period of the client certificate is determined by the value of the **Days** parameter.
    // 
    // *   The validity period of the client certificate cannot exceed the validity period of the intermediate CA certificate. You can call the [DescribeCACertificate](https://help.aliyun.com/document_detail/465954.html) operation to query the validity period of an intermediate CA certificate.
    std::shared_ptr<int32_t> days_ = nullptr;
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
    // The validity period of the client certificate. Unit: months.
    std::shared_ptr<int32_t> months_ = nullptr;
    // The name of the organization. Default value: Alibaba Inc.
    std::shared_ptr<string> organization_ = nullptr;
    // The name of the department. Default value: Aliyun CDN.
    std::shared_ptr<string> organizationUnit_ = nullptr;
    // The unique identifier of the intermediate CA certificate from which the server certificate is issued.
    // 
    // > You can call the [DescribeCACertificateList] operation to query the unique identifier of an intermediate CA certificate.
    std::shared_ptr<string> parentIdentifier_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of the Subject Alternative Name (SAN) extension that is supported by the client certificate. Valid values:
    // 
    // *   **1**: an email address
    // *   **6**: a Uniform Resource Identifier (URI)
    std::shared_ptr<int32_t> sanType_ = nullptr;
    // The content of the extension. You can specify multiple SAN extensions. If you want to specify multiple SAN extensions, separate them with commas (,).
    std::shared_ptr<string> sanValue_ = nullptr;
    // The province, municipality, or autonomous region in which the organization is located. The value can contain letters. The default value is the name of the province, municipality, or autonomous region in which the organization is located. The organization is associated with the intermediate CA certificate from which the certificate is issued.
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<vector<CreateClientCertificateRequestTags>> tags_ = nullptr;
    // The validity period of the client certificate. Unit: years.
    std::shared_ptr<int32_t> years_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
