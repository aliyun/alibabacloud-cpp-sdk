// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBCACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBCACERTIFICATEREQUEST_HPP_
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
  class CreateSubCACertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubCACertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CertMaxTime, certMaxTime_);
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
      DARABONBA_PTR_FROM_JSON(CertMaxTime, certMaxTime_);
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->certMaxTime_ == nullptr && this->clientToken_ == nullptr && this->commonName_ == nullptr && this->countryCode_ == nullptr && this->crlDay_ == nullptr
        && this->enableCrl_ == nullptr && this->extendedKeyUsages_ == nullptr && this->locality_ == nullptr && this->organization_ == nullptr && this->organizationUnit_ == nullptr
        && this->parentIdentifier_ == nullptr && this->pathLenConstraint_ == nullptr && this->resourceGroupId_ == nullptr && this->state_ == nullptr && this->tags_ == nullptr
        && this->years_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateSubCACertificateRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certMaxTime Field Functions 
    bool hasCertMaxTime() const { return this->certMaxTime_ != nullptr;};
    void deleteCertMaxTime() { this->certMaxTime_ = nullptr;};
    inline int32_t getCertMaxTime() const { DARABONBA_PTR_GET_DEFAULT(certMaxTime_, 0) };
    inline CreateSubCACertificateRequest& setCertMaxTime(int32_t certMaxTime) { DARABONBA_PTR_SET_VALUE(certMaxTime_, certMaxTime) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSubCACertificateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateSubCACertificateRequest& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline CreateSubCACertificateRequest& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // crlDay Field Functions 
    bool hasCrlDay() const { return this->crlDay_ != nullptr;};
    void deleteCrlDay() { this->crlDay_ = nullptr;};
    inline int32_t getCrlDay() const { DARABONBA_PTR_GET_DEFAULT(crlDay_, 0) };
    inline CreateSubCACertificateRequest& setCrlDay(int32_t crlDay) { DARABONBA_PTR_SET_VALUE(crlDay_, crlDay) };


    // enableCrl Field Functions 
    bool hasEnableCrl() const { return this->enableCrl_ != nullptr;};
    void deleteEnableCrl() { this->enableCrl_ = nullptr;};
    inline bool getEnableCrl() const { DARABONBA_PTR_GET_DEFAULT(enableCrl_, false) };
    inline CreateSubCACertificateRequest& setEnableCrl(bool enableCrl) { DARABONBA_PTR_SET_VALUE(enableCrl_, enableCrl) };


    // extendedKeyUsages Field Functions 
    bool hasExtendedKeyUsages() const { return this->extendedKeyUsages_ != nullptr;};
    void deleteExtendedKeyUsages() { this->extendedKeyUsages_ = nullptr;};
    inline const vector<string> & getExtendedKeyUsages() const { DARABONBA_PTR_GET_CONST(extendedKeyUsages_, vector<string>) };
    inline vector<string> getExtendedKeyUsages() { DARABONBA_PTR_GET(extendedKeyUsages_, vector<string>) };
    inline CreateSubCACertificateRequest& setExtendedKeyUsages(const vector<string> & extendedKeyUsages) { DARABONBA_PTR_SET_VALUE(extendedKeyUsages_, extendedKeyUsages) };
    inline CreateSubCACertificateRequest& setExtendedKeyUsages(vector<string> && extendedKeyUsages) { DARABONBA_PTR_SET_RVALUE(extendedKeyUsages_, extendedKeyUsages) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string getLocality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline CreateSubCACertificateRequest& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateSubCACertificateRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string getOrganizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateSubCACertificateRequest& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string getParentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline CreateSubCACertificateRequest& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // pathLenConstraint Field Functions 
    bool hasPathLenConstraint() const { return this->pathLenConstraint_ != nullptr;};
    void deletePathLenConstraint() { this->pathLenConstraint_ = nullptr;};
    inline int32_t getPathLenConstraint() const { DARABONBA_PTR_GET_DEFAULT(pathLenConstraint_, 0) };
    inline CreateSubCACertificateRequest& setPathLenConstraint(int32_t pathLenConstraint) { DARABONBA_PTR_SET_VALUE(pathLenConstraint_, pathLenConstraint) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSubCACertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateSubCACertificateRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateSubCACertificateRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateSubCACertificateRequest::Tags>) };
    inline vector<CreateSubCACertificateRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateSubCACertificateRequest::Tags>) };
    inline CreateSubCACertificateRequest& setTags(const vector<CreateSubCACertificateRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateSubCACertificateRequest& setTags(vector<CreateSubCACertificateRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int32_t getYears() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
    inline CreateSubCACertificateRequest& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    // The key algorithm for the intermediate CA certificate. The algorithm is in the `<Encryption algorithm>_<Key length>` format. Valid values:
    // 
    // - **RSA_1024**: The corresponding signature algorithm is Sha256WithRSA.
    // 
    // - **RSA_2048**: The corresponding signature algorithm is Sha256WithRSA.
    // 
    // - **RSA_4096**: The corresponding signature algorithm is Sha256WithRSA.
    // 
    // - **ECC_256**: The corresponding signature algorithm is Sha256WithECDSA.
    // 
    // - **SM2_256**: The corresponding signature algorithm is SM3WithSM2.
    // 
    // The encryption algorithm of the intermediate CA certificate must be the same as that of the root CA certificate, but the key length can be different. For example, if the root CA certificate uses the **RSA_2048** algorithm, the intermediate CA certificate must use **RSA_1024**, **RSA_2048**, or **RSA_4096**.
    // 
    // > Call the [DescribeCACertificate](https://help.aliyun.com/document_detail/465954.html) operation to get the key algorithm of the root CA certificate.
    // 
    // This parameter is required.
    shared_ptr<string> algorithm_ {};
    shared_ptr<int32_t> certMaxTime_ {};
    // A client-generated token that is used to ensure the idempotence of the request. The token must be unique for each request. The token can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The common name of your organization. The name can contain Chinese characters and English letters.
    // 
    // This parameter is required.
    shared_ptr<string> commonName_ {};
    // The two- or three-letter country or region code in uppercase. For example, **CN** indicates China and **US** indicates the United States.
    // 
    // For more information, see the **Country codes** section in [Manage company information](https://help.aliyun.com/document_detail/198289.html).
    shared_ptr<string> countryCode_ {};
    // The validity period of the CRL, in days. Valid values: 1 to 365.
    shared_ptr<int32_t> crlDay_ {};
    // Specifies whether to enable the certificate revocation list (CRL) feature.
    // 
    // - false: No
    // 
    // - true: Yes
    shared_ptr<bool> enableCrl_ {};
    // The extended key usages.
    shared_ptr<vector<string>> extendedKeyUsages_ {};
    // The name of the city where your organization is located. The name can contain Chinese characters and English letters.
    // 
    // This parameter is required.
    shared_ptr<string> locality_ {};
    // The name of your organization, such as your company. The name can contain Chinese characters and English letters.
    // 
    // This parameter is required.
    shared_ptr<string> organization_ {};
    // The name of the department in your organization. The name can contain Chinese characters and English letters.
    // 
    // This parameter is required.
    shared_ptr<string> organizationUnit_ {};
    // The unique identifier of the root CA certificate.
    // 
    // > Call the [DescribeCACertificateList](https://help.aliyun.com/document_detail/465957.html) operation to get the unique identifiers of all CA certificates.
    shared_ptr<string> parentIdentifier_ {};
    // The certificate path length constraint. The default value is 0.
    shared_ptr<int32_t> pathLenConstraint_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // <props="china">The name of the province, municipality, or autonomous region where the organization is located. Chinese characters and English letters are supported.
    // <props="intl">The name of the province or state where the organization is located. Chinese characters and English letters are supported.
    // 
    // This parameter is required.
    shared_ptr<string> state_ {};
    // A list of tags.
    shared_ptr<vector<CreateSubCACertificateRequest::Tags>> tags_ {};
    // The validity period of the intermediate CA certificate, in years. Valid values: 5 to 10.
    // 
    // Set this parameter to a value from 5 to 10.
    // 
    // > The validity period of the intermediate CA certificate cannot exceed that of the root CA certificate. Call the [DescribeCACertificate](https://help.aliyun.com/document_detail/465954.html) operation to get the validity period of the root CA certificate.
    // 
    // This parameter is required.
    shared_ptr<int32_t> years_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
