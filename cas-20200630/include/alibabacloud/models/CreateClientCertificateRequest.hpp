// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTCERTIFICATEREQUEST_HPP_
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
  class CreateClientCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
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
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
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

    virtual bool empty() const override { return this->afterTime_ == nullptr
        && this->algorithm_ == nullptr && this->aliasName_ == nullptr && this->beforeTime_ == nullptr && this->clientToken_ == nullptr && this->commonName_ == nullptr
        && this->country_ == nullptr && this->customIdentifier_ == nullptr && this->days_ == nullptr && this->enableCrl_ == nullptr && this->immediately_ == nullptr
        && this->locality_ == nullptr && this->months_ == nullptr && this->organization_ == nullptr && this->organizationUnit_ == nullptr && this->parentIdentifier_ == nullptr
        && this->resourceGroupId_ == nullptr && this->sanType_ == nullptr && this->sanValue_ == nullptr && this->state_ == nullptr && this->tags_ == nullptr
        && this->years_ == nullptr; };
    // afterTime Field Functions 
    bool hasAfterTime() const { return this->afterTime_ != nullptr;};
    void deleteAfterTime() { this->afterTime_ = nullptr;};
    inline int64_t getAfterTime() const { DARABONBA_PTR_GET_DEFAULT(afterTime_, 0L) };
    inline CreateClientCertificateRequest& setAfterTime(int64_t afterTime) { DARABONBA_PTR_SET_VALUE(afterTime_, afterTime) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateClientCertificateRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline CreateClientCertificateRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // beforeTime Field Functions 
    bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
    void deleteBeforeTime() { this->beforeTime_ = nullptr;};
    inline int64_t getBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, 0L) };
    inline CreateClientCertificateRequest& setBeforeTime(int64_t beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateClientCertificateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateClientCertificateRequest& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline CreateClientCertificateRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // customIdentifier Field Functions 
    bool hasCustomIdentifier() const { return this->customIdentifier_ != nullptr;};
    void deleteCustomIdentifier() { this->customIdentifier_ = nullptr;};
    inline string getCustomIdentifier() const { DARABONBA_PTR_GET_DEFAULT(customIdentifier_, "") };
    inline CreateClientCertificateRequest& setCustomIdentifier(string customIdentifier) { DARABONBA_PTR_SET_VALUE(customIdentifier_, customIdentifier) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline CreateClientCertificateRequest& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // enableCrl Field Functions 
    bool hasEnableCrl() const { return this->enableCrl_ != nullptr;};
    void deleteEnableCrl() { this->enableCrl_ = nullptr;};
    inline int64_t getEnableCrl() const { DARABONBA_PTR_GET_DEFAULT(enableCrl_, 0L) };
    inline CreateClientCertificateRequest& setEnableCrl(int64_t enableCrl) { DARABONBA_PTR_SET_VALUE(enableCrl_, enableCrl) };


    // immediately Field Functions 
    bool hasImmediately() const { return this->immediately_ != nullptr;};
    void deleteImmediately() { this->immediately_ = nullptr;};
    inline int32_t getImmediately() const { DARABONBA_PTR_GET_DEFAULT(immediately_, 0) };
    inline CreateClientCertificateRequest& setImmediately(int32_t immediately) { DARABONBA_PTR_SET_VALUE(immediately_, immediately) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string getLocality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline CreateClientCertificateRequest& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // months Field Functions 
    bool hasMonths() const { return this->months_ != nullptr;};
    void deleteMonths() { this->months_ = nullptr;};
    inline int32_t getMonths() const { DARABONBA_PTR_GET_DEFAULT(months_, 0) };
    inline CreateClientCertificateRequest& setMonths(int32_t months) { DARABONBA_PTR_SET_VALUE(months_, months) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateClientCertificateRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string getOrganizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateClientCertificateRequest& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string getParentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline CreateClientCertificateRequest& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClientCertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sanType Field Functions 
    bool hasSanType() const { return this->sanType_ != nullptr;};
    void deleteSanType() { this->sanType_ = nullptr;};
    inline int32_t getSanType() const { DARABONBA_PTR_GET_DEFAULT(sanType_, 0) };
    inline CreateClientCertificateRequest& setSanType(int32_t sanType) { DARABONBA_PTR_SET_VALUE(sanType_, sanType) };


    // sanValue Field Functions 
    bool hasSanValue() const { return this->sanValue_ != nullptr;};
    void deleteSanValue() { this->sanValue_ = nullptr;};
    inline string getSanValue() const { DARABONBA_PTR_GET_DEFAULT(sanValue_, "") };
    inline CreateClientCertificateRequest& setSanValue(string sanValue) { DARABONBA_PTR_SET_VALUE(sanValue_, sanValue) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateClientCertificateRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateClientCertificateRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateClientCertificateRequest::Tags>) };
    inline vector<CreateClientCertificateRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateClientCertificateRequest::Tags>) };
    inline CreateClientCertificateRequest& setTags(const vector<CreateClientCertificateRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateClientCertificateRequest& setTags(vector<CreateClientCertificateRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int32_t getYears() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
    inline CreateClientCertificateRequest& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    // The expiration time of the client certificate in UNIX timestamp format. The unit is seconds.
    // 
    // > **BeforeTime** and **AfterTime** must be specified together or left empty together.
    shared_ptr<int64_t> afterTime_ {};
    // The key algorithm for the client certificate. The format is `<encryption algorithm>_<key length>`. Valid values:
    // 
    // - **RSA_1024**: The signature algorithm is Sha256WithRSA.
    // 
    // - **RSA_2048**: The signature algorithm is Sha256WithRSA.
    // 
    // - **RSA_4096**: The signature algorithm is Sha256WithRSA.
    // 
    // - **ECC_256**: The signature algorithm is Sha256WithECDSA.
    // 
    // - **ECC_384**: The signature algorithm is Sha256WithECDSA.
    // 
    // - **ECC_512**: The signature algorithm is Sha256WithECDSA.
    // 
    // - **SM2_256**: The signature algorithm is SM3WithSM2.
    // 
    // The encryption algorithm of the client certificate must be the same as the subordinate CA certificate. The key length can be different. For example, if the subordinate CA certificate uses the RSA_2048 key algorithm, the client certificate must use RSA_1024, RSA_2048, or RSA_4096.
    // 
    // > Call [DescribeCACertificate](https://help.aliyun.com/document_detail/465954.html) to find the key algorithm of the subordinate CA certificate.
    shared_ptr<string> algorithm_ {};
    // Set the name of the issued certificate.
    shared_ptr<string> aliasName_ {};
    // The issuance time of the client certificate in UNIX timestamp format. The unit is seconds. The default value is the time when you call this operation.
    // 
    // > **BeforeTime** and **AfterTime** must be specified together or left empty together.
    shared_ptr<int64_t> beforeTime_ {};
    // Used to ensure request idempotence. The client generates this parameter value, which must be unique across different requests. It can contain a maximum of 64 ASCII characters and must not include any non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The name of the certificate user. For a client authentication (ClientAuth) certificate, the user is typically an individual, a company, an organization, or an application. Specify the common name of the user, such as John Doe, Alibaba, Alibaba Cloud Cryptography Platform, or Tmall Genie.
    shared_ptr<string> commonName_ {};
    // The country code. Default: CN.
    shared_ptr<string> country_ {};
    // A custom identifier. This is a unique key.
    shared_ptr<string> customIdentifier_ {};
    // The validity period of the client certificate in days. The **Days**, **BeforeTime**, or **AfterTime** parameters cannot all be empty. The **BeforeTime** and **AfterTime** parameters must be set together or left empty. The parameters are configured as follows:
    // 
    // - If you set the **Days** parameter, the **BeforeTime** and **AfterTime** parameters are optional.
    // 
    // - If you do not set the **Days** parameter, you must set both the **BeforeTime** and **AfterTime** parameters.
    // 
    // > * If you set the **Days**, **BeforeTime**, and **AfterTime** parameters, the value of the **Days** parameter takes precedence.
    // 
    // - The validity period of the client certificate cannot exceed the validity period of the subordinate CA certificate. To view the validity period of the subordinate CA certificate, you can call [DescribeCACertificate](https://help.aliyun.com/document_detail/465954.html).
    shared_ptr<int32_t> days_ {};
    // Specifies whether to include the Certificate Revocation List (CRL) address.
    // 
    // Valid values: 0 (No) and 1 (Yes).
    shared_ptr<int64_t> enableCrl_ {};
    // Specifies whether to return the digital certificate immediately.
    // 
    // - **0**: No. This is the default value.
    // 
    // - **1**: Yes, return the certificate.
    // 
    // - **2**: Yes, return the certificate and its certificate chain.
    shared_ptr<int32_t> immediately_ {};
    // The name of the city where the organization is located. The default value is the city of the subordinate CA that issues the certificate.
    shared_ptr<string> locality_ {};
    // The validity period of the certificate in months.
    shared_ptr<int32_t> months_ {};
    // The name of the organization. Default: Alibaba Inc.
    shared_ptr<string> organization_ {};
    // The name of the department. Default: Alibaba Cloud CDN.
    shared_ptr<string> organizationUnit_ {};
    // The unique identifier of the subordinate CA certificate that issues this certificate.
    // 
    // > Call DescribeCACertificateList to query the unique identifier of the subordinate CA certificate.
    shared_ptr<string> parentIdentifier_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The type of Subject Alternative Name (SAN) extension for the client certificate. Valid values:
    // 
    // - **1**: Email
    // 
    // - **6**: Uniform Resource Identifier (URI)
    shared_ptr<int32_t> sanType_ {};
    // The extension information for the client certificate. To enter multiple extensions, separate them with commas (,).
    shared_ptr<string> sanValue_ {};
    // Specify the province or state of the certificate organization. The value can contain letters. The default value is the province or state of the organization for the intermediate CA that issued the certificate.
    shared_ptr<string> state_ {};
    // A list of tags.
    shared_ptr<vector<CreateClientCertificateRequest::Tags>> tags_ {};
    // The validity period of the certificate in years.
    shared_ptr<int32_t> years_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
