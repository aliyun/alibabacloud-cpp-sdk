// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBCACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBCACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSubCACertificateRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateSubCACertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubCACertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(CrlDay, crlDay_);
      DARABONBA_PTR_TO_JSON(EnableCrl, enableCrl_);
      DARABONBA_PTR_TO_JSON(ExtendedKeyUsages, extendedKeyUsages_);
      DARABONBA_PTR_TO_JSON(Locality, locality_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_TO_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(PathLenConstraint, pathLenConstraint_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Years, years_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubCACertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(CrlDay, crlDay_);
      DARABONBA_PTR_FROM_JSON(EnableCrl, enableCrl_);
      DARABONBA_PTR_FROM_JSON(ExtendedKeyUsages, extendedKeyUsages_);
      DARABONBA_PTR_FROM_JSON(Locality, locality_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_FROM_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(PathLenConstraint, pathLenConstraint_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Years, years_);
    };
    CreateSubCACertificateRequest() = default ;
    CreateSubCACertificateRequest(const CreateSubCACertificateRequest &) = default ;
    CreateSubCACertificateRequest(CreateSubCACertificateRequest &&) = default ;
    CreateSubCACertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubCACertificateRequest() = default ;
    CreateSubCACertificateRequest& operator=(const CreateSubCACertificateRequest &) = default ;
    CreateSubCACertificateRequest& operator=(CreateSubCACertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && return this->clientToken_ == nullptr && return this->commonName_ == nullptr && return this->countryCode_ == nullptr && return this->crlDay_ == nullptr && return this->enableCrl_ == nullptr
        && return this->extendedKeyUsages_ == nullptr && return this->locality_ == nullptr && return this->organization_ == nullptr && return this->organizationUnit_ == nullptr && return this->parentIdentifier_ == nullptr
        && return this->pathLenConstraint_ == nullptr && return this->resourceGroupId_ == nullptr && return this->state_ == nullptr && return this->tags_ == nullptr && return this->years_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateSubCACertificateRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSubCACertificateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateSubCACertificateRequest& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline CreateSubCACertificateRequest& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // crlDay Field Functions 
    bool hasCrlDay() const { return this->crlDay_ != nullptr;};
    void deleteCrlDay() { this->crlDay_ = nullptr;};
    inline int32_t crlDay() const { DARABONBA_PTR_GET_DEFAULT(crlDay_, 0) };
    inline CreateSubCACertificateRequest& setCrlDay(int32_t crlDay) { DARABONBA_PTR_SET_VALUE(crlDay_, crlDay) };


    // enableCrl Field Functions 
    bool hasEnableCrl() const { return this->enableCrl_ != nullptr;};
    void deleteEnableCrl() { this->enableCrl_ = nullptr;};
    inline bool enableCrl() const { DARABONBA_PTR_GET_DEFAULT(enableCrl_, false) };
    inline CreateSubCACertificateRequest& setEnableCrl(bool enableCrl) { DARABONBA_PTR_SET_VALUE(enableCrl_, enableCrl) };


    // extendedKeyUsages Field Functions 
    bool hasExtendedKeyUsages() const { return this->extendedKeyUsages_ != nullptr;};
    void deleteExtendedKeyUsages() { this->extendedKeyUsages_ = nullptr;};
    inline const vector<string> & extendedKeyUsages() const { DARABONBA_PTR_GET_CONST(extendedKeyUsages_, vector<string>) };
    inline vector<string> extendedKeyUsages() { DARABONBA_PTR_GET(extendedKeyUsages_, vector<string>) };
    inline CreateSubCACertificateRequest& setExtendedKeyUsages(const vector<string> & extendedKeyUsages) { DARABONBA_PTR_SET_VALUE(extendedKeyUsages_, extendedKeyUsages) };
    inline CreateSubCACertificateRequest& setExtendedKeyUsages(vector<string> && extendedKeyUsages) { DARABONBA_PTR_SET_RVALUE(extendedKeyUsages_, extendedKeyUsages) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string locality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline CreateSubCACertificateRequest& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string organization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateSubCACertificateRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string organizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateSubCACertificateRequest& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string parentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline CreateSubCACertificateRequest& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // pathLenConstraint Field Functions 
    bool hasPathLenConstraint() const { return this->pathLenConstraint_ != nullptr;};
    void deletePathLenConstraint() { this->pathLenConstraint_ = nullptr;};
    inline int32_t pathLenConstraint() const { DARABONBA_PTR_GET_DEFAULT(pathLenConstraint_, 0) };
    inline CreateSubCACertificateRequest& setPathLenConstraint(int32_t pathLenConstraint) { DARABONBA_PTR_SET_VALUE(pathLenConstraint_, pathLenConstraint) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSubCACertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateSubCACertificateRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateSubCACertificateRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateSubCACertificateRequestTags>) };
    inline vector<CreateSubCACertificateRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateSubCACertificateRequestTags>) };
    inline CreateSubCACertificateRequest& setTags(const vector<CreateSubCACertificateRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateSubCACertificateRequest& setTags(vector<CreateSubCACertificateRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int32_t years() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
    inline CreateSubCACertificateRequest& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    // The type of the key algorithm of the intermediate CA. The key algorithm is in the `<Encryption algorithm>_<Key length>` format. Valid values:
    // 
    // *   **RSA_1024**: The signature algorithm is Sha256WithRSA.
    // *   **RSA_2048**: The signature algorithm is Sha256WithRSA.
    // *   **RSA_4096**: The signature algorithm is Sha256WithRSA.
    // *   **ECC_256**: The signature algorithm is Sha256WithECDSA.
    // *   **SM2_256**: The signature algorithm is SM3WithSM2.
    // 
    // The encryption algorithm of an intermediate CA certificate must be consistent with the encryption algorithm of a root CA certificate. The length of the keys can be different. For example, if the key algorithm of the root CA certificate is **RSA_2048**, the key algorithm of the intermediate CA certificate must be **RSA_1024**, **RSA_2048**, or **RSA_4096**.
    // 
    // > You can call the [DescribeCACertificate](https://help.aliyun.com/document_detail/465954.html) operation to query the key algorithm of a root CA certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> algorithm_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // The common name or abbreviation of the organization. The value can contain letters.
    // 
    // This parameter is required.
    std::shared_ptr<string> commonName_ = nullptr;
    // The code of the country or region in which the organization is located. You can enter an alpha-2 or alpha-3 code. For example, you can use **CN** to indicate China and use **US** to indicate the United States.
    // 
    // For more information about country codes, see the **"Country codes"** section in [Manage company profiles](https://help.aliyun.com/document_detail/198289.html).
    std::shared_ptr<string> countryCode_ = nullptr;
    // CRL validity period: 1-365 days
    std::shared_ptr<int32_t> crlDay_ = nullptr;
    // Enable Crl Service.
    // 
    // - 0- No
    // - 1- Yes
    std::shared_ptr<bool> enableCrl_ = nullptr;
    // The extended key usages of the certificate.
    std::shared_ptr<vector<string>> extendedKeyUsages_ = nullptr;
    // The name of the city in which the organization is located. The value can contain letters.
    // 
    // This parameter is required.
    std::shared_ptr<string> locality_ = nullptr;
    // The name of the organization that is associated with the intermediate CA certificate. You can enter the name of your enterprise or company. The value can contain letters.
    // 
    // This parameter is required.
    std::shared_ptr<string> organization_ = nullptr;
    // The name of the department or branch in the organization. The value can contain letters.
    // 
    // This parameter is required.
    std::shared_ptr<string> organizationUnit_ = nullptr;
    // The unique identifier of the root CA certificate.
    // 
    // > You can call the [DescribeCACertificateList] operation to query the unique identifiers of all CA certificates.
    std::shared_ptr<string> parentIdentifier_ = nullptr;
    // The path length constraint of the certificate. Default value: 0.
    std::shared_ptr<int32_t> pathLenConstraint_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The name of the province or state in which the organization is located. The value can contain letters.
    // 
    // This parameter is required.
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<vector<CreateSubCACertificateRequestTags>> tags_ = nullptr;
    // The validity period of the intermediate CA certificate. Unit: years.
    // 
    // We recommend that you set this parameter to 5 to 10.
    // 
    // > The validity period of the intermediate CA certificate cannot exceed the validity period of the root CA certificate. You can call the [DescribeCACertificate]operation to query the validity period of a root CA certificate.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> years_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
