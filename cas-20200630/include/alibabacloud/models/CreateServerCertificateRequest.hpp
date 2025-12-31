// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVERCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVERCERTIFICATEREQUEST_HPP_
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
  class CreateServerCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServerCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
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
    friend void from_json(const Darabonba::Json& j, CreateServerCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
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
    CreateServerCertificateRequest() = default ;
    CreateServerCertificateRequest(const CreateServerCertificateRequest &) = default ;
    CreateServerCertificateRequest(CreateServerCertificateRequest &&) = default ;
    CreateServerCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServerCertificateRequest() = default ;
    CreateServerCertificateRequest& operator=(const CreateServerCertificateRequest &) = default ;
    CreateServerCertificateRequest& operator=(CreateServerCertificateRequest &&) = default ;
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->afterTime_ == nullptr
        && this->algorithm_ == nullptr && this->beforeTime_ == nullptr && this->commonName_ == nullptr && this->country_ == nullptr && this->customIdentifier_ == nullptr
        && this->days_ == nullptr && this->domain_ == nullptr && this->enableCrl_ == nullptr && this->immediately_ == nullptr && this->locality_ == nullptr
        && this->months_ == nullptr && this->organization_ == nullptr && this->organizationUnit_ == nullptr && this->parentIdentifier_ == nullptr && this->resourceGroupId_ == nullptr
        && this->state_ == nullptr && this->tags_ == nullptr && this->years_ == nullptr; };
    // afterTime Field Functions 
    bool hasAfterTime() const { return this->afterTime_ != nullptr;};
    void deleteAfterTime() { this->afterTime_ = nullptr;};
    inline int64_t getAfterTime() const { DARABONBA_PTR_GET_DEFAULT(afterTime_, 0L) };
    inline CreateServerCertificateRequest& setAfterTime(int64_t afterTime) { DARABONBA_PTR_SET_VALUE(afterTime_, afterTime) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateServerCertificateRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // beforeTime Field Functions 
    bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
    void deleteBeforeTime() { this->beforeTime_ = nullptr;};
    inline int64_t getBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, 0L) };
    inline CreateServerCertificateRequest& setBeforeTime(int64_t beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateServerCertificateRequest& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline CreateServerCertificateRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // customIdentifier Field Functions 
    bool hasCustomIdentifier() const { return this->customIdentifier_ != nullptr;};
    void deleteCustomIdentifier() { this->customIdentifier_ = nullptr;};
    inline string getCustomIdentifier() const { DARABONBA_PTR_GET_DEFAULT(customIdentifier_, "") };
    inline CreateServerCertificateRequest& setCustomIdentifier(string customIdentifier) { DARABONBA_PTR_SET_VALUE(customIdentifier_, customIdentifier) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline CreateServerCertificateRequest& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateServerCertificateRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enableCrl Field Functions 
    bool hasEnableCrl() const { return this->enableCrl_ != nullptr;};
    void deleteEnableCrl() { this->enableCrl_ = nullptr;};
    inline int64_t getEnableCrl() const { DARABONBA_PTR_GET_DEFAULT(enableCrl_, 0L) };
    inline CreateServerCertificateRequest& setEnableCrl(int64_t enableCrl) { DARABONBA_PTR_SET_VALUE(enableCrl_, enableCrl) };


    // immediately Field Functions 
    bool hasImmediately() const { return this->immediately_ != nullptr;};
    void deleteImmediately() { this->immediately_ = nullptr;};
    inline int32_t getImmediately() const { DARABONBA_PTR_GET_DEFAULT(immediately_, 0) };
    inline CreateServerCertificateRequest& setImmediately(int32_t immediately) { DARABONBA_PTR_SET_VALUE(immediately_, immediately) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string getLocality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline CreateServerCertificateRequest& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // months Field Functions 
    bool hasMonths() const { return this->months_ != nullptr;};
    void deleteMonths() { this->months_ = nullptr;};
    inline int32_t getMonths() const { DARABONBA_PTR_GET_DEFAULT(months_, 0) };
    inline CreateServerCertificateRequest& setMonths(int32_t months) { DARABONBA_PTR_SET_VALUE(months_, months) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateServerCertificateRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string getOrganizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateServerCertificateRequest& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string getParentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline CreateServerCertificateRequest& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateServerCertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateServerCertificateRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateServerCertificateRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateServerCertificateRequest::Tags>) };
    inline vector<CreateServerCertificateRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateServerCertificateRequest::Tags>) };
    inline CreateServerCertificateRequest& setTags(const vector<CreateServerCertificateRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateServerCertificateRequest& setTags(vector<CreateServerCertificateRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int32_t getYears() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
    inline CreateServerCertificateRequest& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    // The expiration time of the server certificate. This value is a UNIX timestamp. Unit: seconds.
    // 
    // >  The **BeforeTime** and **AfterTime** parameters must be both empty or both specified.
    shared_ptr<int64_t> afterTime_ {};
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
    // 
    // This parameter is required.
    shared_ptr<string> algorithm_ {};
    // The issuance time of the server certificate. This value is a UNIX timestamp. The default value is the time when you call this operation. Unit: seconds.
    // 
    // >  The **BeforeTime** and **AfterTime** parameters must be both empty or both specified.
    shared_ptr<int64_t> beforeTime_ {};
    // The name of the certificate user. The user of a server certificate is a server. We recommend that you enter the domain name or IP address of the server.
    // 
    // This parameter is required.
    shared_ptr<string> commonName_ {};
    // The code of the country in which the organization is located, such as CN or US.
    shared_ptr<string> country_ {};
    shared_ptr<string> customIdentifier_ {};
    // The validity period of the server certificate. Unit: days. You must specify at least one of the **Days**, **BeforeTime**, and **AfterTime** parameters. The **BeforeTime** and **AfterTime** parameters must be both empty or both specified. The following list describes how to specify these parameters:
    // 
    // *   If you specify the **Days** parameter, you can specify both the **BeforeTime** and **AfterTime** parameters or leave them both empty.
    // *   If you do not specify the **Days** parameter, you must specify both the **BeforeTime** and **AfterTime** parameters.
    // 
    // > 
    // 
    // *   If you specify the **Days**, **BeforeTime**, and **AfterTime** parameters together, the validity period of the server certificate is determined by the value of the **Days** parameter.
    // 
    // *   The validity period of the server certificate cannot exceed the validity period of the intermediate CA certificate. You can call the [DescribeCACertificate](https://help.aliyun.com/document_detail/328096.html) operation to query the validity period of an intermediate CA certificate.
    shared_ptr<int32_t> days_ {};
    // The additional domain names and additional IP addresses of the server certificate. After you add additional domain names and additional IP addresses to a certificate, you can apply the certificate to the domain names and IP addresses.
    // 
    // Separate multiple domain names and multiple IP addresses with commas (,).
    shared_ptr<string> domain_ {};
    // include the CRL address.
    // 
    // - 0- No
    // - 1- Yes
    shared_ptr<int64_t> enableCrl_ {};
    // Specifies whether to return the certificate. Valid values:
    // 
    // *   **0**: does not return the certificate. This is the default value.
    // *   **1**: returns the certificate.
    // *   **2**: returns the certificate and the certificate chain of the certificate.
    shared_ptr<int32_t> immediately_ {};
    // The name of the city in which the organization is located. The value can contain letters. The default value is the name of the city in which the organization is located. The organization is associated with the intermediate CA certificate from which the certificate is issued.
    shared_ptr<string> locality_ {};
    // The validity period of the server certificate. Unit: months.
    shared_ptr<int32_t> months_ {};
    // The name of the organization. Default value: Alibaba Inc.
    shared_ptr<string> organization_ {};
    // The name of the department. Default value: Aliyun CDN.
    shared_ptr<string> organizationUnit_ {};
    // The unique identifier of the intermediate CA certificate from which the server certificate is issued.
    // 
    // >  You can call the [DescribeCACertificateList](https://help.aliyun.com/document_detail/328095.html) operation to query the unique identifier of an intermediate CA certificate.
    // 
    // This parameter is required.
    shared_ptr<string> parentIdentifier_ {};
    shared_ptr<string> resourceGroupId_ {};
    // The province, municipality, or autonomous region in which the organization is located. The value can contain letters. The default value is the name of the province, municipality, or autonomous region in which the organization is located. The organization is associated with the intermediate CA certificate from which the certificate is issued.
    shared_ptr<string> state_ {};
    shared_ptr<vector<CreateServerCertificateRequest::Tags>> tags_ {};
    // The validity period of the server certificate. Unit: years.
    shared_ptr<int32_t> years_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
