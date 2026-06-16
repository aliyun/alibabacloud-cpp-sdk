// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVERCERTIFICATEWITHCSRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVERCERTIFICATEWITHCSRREQUEST_HPP_
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
  class CreateServerCertificateWithCsrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServerCertificateWithCsrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EnableCrl, enableCrl_);
      DARABONBA_PTR_TO_JSON(Immediately, immediately_);
      DARABONBA_PTR_TO_JSON(Locality, locality_);
      DARABONBA_PTR_TO_JSON(Months, months_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_TO_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Years, years_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServerCertificateWithCsrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EnableCrl, enableCrl_);
      DARABONBA_PTR_FROM_JSON(Immediately, immediately_);
      DARABONBA_PTR_FROM_JSON(Locality, locality_);
      DARABONBA_PTR_FROM_JSON(Months, months_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_FROM_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
      // Tag key.
      shared_ptr<string> key_ {};
      // Tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->afterTime_ == nullptr
        && this->algorithm_ == nullptr && this->beforeTime_ == nullptr && this->commonName_ == nullptr && this->country_ == nullptr && this->csr_ == nullptr
        && this->customIdentifier_ == nullptr && this->days_ == nullptr && this->domain_ == nullptr && this->enableCrl_ == nullptr && this->immediately_ == nullptr
        && this->locality_ == nullptr && this->months_ == nullptr && this->organization_ == nullptr && this->organizationUnit_ == nullptr && this->parentIdentifier_ == nullptr
        && this->resourceGroupId_ == nullptr && this->state_ == nullptr && this->tags_ == nullptr && this->years_ == nullptr; };
    // afterTime Field Functions 
    bool hasAfterTime() const { return this->afterTime_ != nullptr;};
    void deleteAfterTime() { this->afterTime_ = nullptr;};
    inline int64_t getAfterTime() const { DARABONBA_PTR_GET_DEFAULT(afterTime_, 0L) };
    inline CreateServerCertificateWithCsrRequest& setAfterTime(int64_t afterTime) { DARABONBA_PTR_SET_VALUE(afterTime_, afterTime) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateServerCertificateWithCsrRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // beforeTime Field Functions 
    bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
    void deleteBeforeTime() { this->beforeTime_ = nullptr;};
    inline int64_t getBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, 0L) };
    inline CreateServerCertificateWithCsrRequest& setBeforeTime(int64_t beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateServerCertificateWithCsrRequest& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline CreateServerCertificateWithCsrRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string getCsr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateServerCertificateWithCsrRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // customIdentifier Field Functions 
    bool hasCustomIdentifier() const { return this->customIdentifier_ != nullptr;};
    void deleteCustomIdentifier() { this->customIdentifier_ = nullptr;};
    inline string getCustomIdentifier() const { DARABONBA_PTR_GET_DEFAULT(customIdentifier_, "") };
    inline CreateServerCertificateWithCsrRequest& setCustomIdentifier(string customIdentifier) { DARABONBA_PTR_SET_VALUE(customIdentifier_, customIdentifier) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline CreateServerCertificateWithCsrRequest& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateServerCertificateWithCsrRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enableCrl Field Functions 
    bool hasEnableCrl() const { return this->enableCrl_ != nullptr;};
    void deleteEnableCrl() { this->enableCrl_ = nullptr;};
    inline int64_t getEnableCrl() const { DARABONBA_PTR_GET_DEFAULT(enableCrl_, 0L) };
    inline CreateServerCertificateWithCsrRequest& setEnableCrl(int64_t enableCrl) { DARABONBA_PTR_SET_VALUE(enableCrl_, enableCrl) };


    // immediately Field Functions 
    bool hasImmediately() const { return this->immediately_ != nullptr;};
    void deleteImmediately() { this->immediately_ = nullptr;};
    inline int32_t getImmediately() const { DARABONBA_PTR_GET_DEFAULT(immediately_, 0) };
    inline CreateServerCertificateWithCsrRequest& setImmediately(int32_t immediately) { DARABONBA_PTR_SET_VALUE(immediately_, immediately) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string getLocality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline CreateServerCertificateWithCsrRequest& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // months Field Functions 
    bool hasMonths() const { return this->months_ != nullptr;};
    void deleteMonths() { this->months_ = nullptr;};
    inline int32_t getMonths() const { DARABONBA_PTR_GET_DEFAULT(months_, 0) };
    inline CreateServerCertificateWithCsrRequest& setMonths(int32_t months) { DARABONBA_PTR_SET_VALUE(months_, months) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateServerCertificateWithCsrRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string getOrganizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateServerCertificateWithCsrRequest& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string getParentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline CreateServerCertificateWithCsrRequest& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateServerCertificateWithCsrRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateServerCertificateWithCsrRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateServerCertificateWithCsrRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateServerCertificateWithCsrRequest::Tags>) };
    inline vector<CreateServerCertificateWithCsrRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateServerCertificateWithCsrRequest::Tags>) };
    inline CreateServerCertificateWithCsrRequest& setTags(const vector<CreateServerCertificateWithCsrRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateServerCertificateWithCsrRequest& setTags(vector<CreateServerCertificateWithCsrRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int32_t getYears() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
    inline CreateServerCertificateWithCsrRequest& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    // Expiration time of the server-side certificate, in UNIX timestamp format. Unit: seconds.
    // 
    // > The **BeforeTime** and **AfterTime** parameters must both be empty or both configured.
    shared_ptr<int64_t> afterTime_ {};
    // Key algorithm for the server-side certificate. Use the format `<encryption algorithm>_<key length>`. Valid values:
    // 
    // - **RSA_1024**: Signature algorithm is Sha256WithRSA.
    // 
    // - **RSA_2048**: Signature algorithm is Sha256WithRSA.
    // 
    // - **RSA_4096**: Signature algorithm is Sha256WithRSA.
    // 
    // - **ECC_256**: Signature algorithm is Sha256WithECDSA.
    // 
    // - **ECC_384**: Signature algorithm is Sha256WithECDSA.
    // 
    // - **ECC_512**: Signature algorithm is Sha256WithECDSA.
    // 
    // - **SM2_256**: Signature algorithm is SM3WithSM2.
    // 
    // The encryption algorithm of the server-side certificate must match that of the sub-CA certificate. The key length can differ. For example, if the sub-CA certificate uses RSA_2048, the server-side certificate must use RSA_1024, RSA_2048, or RSA_4096.
    // 
    // > Call [DescribeCACertificate](https://help.aliyun.com/document_detail/465954.html) to check the key algorithm of the sub-CA certificate.
    shared_ptr<string> algorithm_ {};
    // Issue time of the server-side certificate, in UNIX timestamp format. Default: current time when you call this API. Unit: seconds.
    // 
    // > The **BeforeTime** and **AfterTime** parameters must both be empty or both configured.
    shared_ptr<int64_t> beforeTime_ {};
    // Set the common name for the certificate. Supports Chinese, English, and other characters.
    // 
    // > If you set the **Csr** parameter, the value of **CommonName** comes from the corresponding field in the **Csr** parameter.
    shared_ptr<string> commonName_ {};
    // The country code. For example, CN or US.
    shared_ptr<string> country_ {};
    // You can generate a CSR using OpenSSL or Keytool. For more information, see [How to create a CSR file](https://help.aliyun.com/document_detail/42218.html).
    // 
    // <props="china">
    // 
    // You can also create a CSR in the SSL Certificate console. For more information, see [Create a CSR](https://help.aliyun.com/document_detail/313297.html).
    // 
    // This parameter is required.
    shared_ptr<string> csr_ {};
    // A custom identifier. This is a unique key.
    shared_ptr<string> customIdentifier_ {};
    // The **Days**, **BeforeTime**, and **AfterTime** parameters cannot all be empty. The **BeforeTime** and **AfterTime** parameters must both be empty or both set. Follow these rules:
    // 
    // - If you set **Days**, you can optionally set **BeforeTime** and **AfterTime**.
    // 
    // - If you do not set **Days**, you must set both **BeforeTime** and **AfterTime**.
    // 
    // > * If you set **Days**, **BeforeTime**, and **AfterTime** together, the validity period uses the value of **Days**.
    // 
    // - The server-side certificate validity period cannot exceed that of the sub-CA certificate. Call [DescribeCACertificate](https://help.aliyun.com/document_detail/465954.html) to check the sub-CA certificate validity period.
    shared_ptr<int32_t> days_ {};
    // Additional domain names or IP addresses for the server-side certificate. Adding this information lets you apply the certificate to multiple domains or IP addresses.
    // 
    // You can enter multiple domain names and IP addresses. Separate them with commas (,).
    shared_ptr<string> domain_ {};
    // Specifies whether to include the certificate revocation list (CRL) address.
    // 
    // 0 - No
    // 
    // 1 - Yes
    shared_ptr<int64_t> enableCrl_ {};
    // Specifies whether to return the digital certificate immediately.
    // 
    // - **0**: Do not return. Default.
    // 
    // - **1**: Return the certificate.
    // 
    // - **2**: Return the certificate and its certificate chain.
    shared_ptr<int32_t> immediately_ {};
    // The city where the organization for the certificate is located. The name can contain both Chinese and English characters. By default, this parameter is set to the city of the organization for the issuing subordinate Certificate Authority (CA).
    shared_ptr<string> locality_ {};
    // The validity period of the certificate, in months.
    shared_ptr<int32_t> months_ {};
    // The name of the organization. Default value: Alibaba Inc.
    shared_ptr<string> organization_ {};
    // The name of the department. Default value: Alibaba Cloud CDN.
    shared_ptr<string> organizationUnit_ {};
    // Unique identifier of the sub-CA certificate that issues this certificate.
    // 
    // > Call [DescribeCACertificateList](https://help.aliyun.com/document_detail/465957.html) to query the unique identifier of the sub-CA certificate.
    // 
    // This parameter is required.
    shared_ptr<string> parentIdentifier_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // <props="china">Set the name of the province, municipality, or autonomous region where the organization is located. Supports Chinese, English, and other characters. Defaults to the province, municipality, or autonomous region of the issuing sub-CA certificate\\"s organization.
    // <props="intl">Set the name of the state or province where the organization is located. Supports Chinese, English, and other characters. Defaults to the state or province of the issuing sub-CA certificate\\"s organization.
    shared_ptr<string> state_ {};
    // A list of tags.
    shared_ptr<vector<CreateServerCertificateWithCsrRequest::Tags>> tags_ {};
    // The validity period of the certificate, in years.
    shared_ptr<int32_t> years_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
