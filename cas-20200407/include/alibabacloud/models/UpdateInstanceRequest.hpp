// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class UpdateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoReissue, autoReissue_);
      DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CompanyId, companyId_);
      DARABONBA_PTR_TO_JSON(ContactIdList, contactIdList_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(GenerateCsrMethod, generateCsrMethod_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeyAlgorithm, keyAlgorithm_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ValidationMethod, validationMethod_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoReissue, autoReissue_);
      DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CompanyId, companyId_);
      DARABONBA_PTR_FROM_JSON(ContactIdList, contactIdList_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(GenerateCsrMethod, generateCsrMethod_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeyAlgorithm, keyAlgorithm_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ValidationMethod, validationMethod_);
    };
    UpdateInstanceRequest() = default ;
    UpdateInstanceRequest(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest(UpdateInstanceRequest &&) = default ;
    UpdateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequest() = default ;
    UpdateInstanceRequest& operator=(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest& operator=(UpdateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // The tag key of the instance. Valid values of N: **1** to **20**. If you specify this parameter, the value cannot be an empty string.
      // 
      // The tag key can be up to 64 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> tagKey_ {};
      // The tag value of the instance. Valid values of N: **1** to **20**. If you specify this parameter, the value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->autoReissue_ == nullptr
        && this->certificateName_ == nullptr && this->city_ == nullptr && this->companyId_ == nullptr && this->contactIdList_ == nullptr && this->countryCode_ == nullptr
        && this->csr_ == nullptr && this->domain_ == nullptr && this->generateCsrMethod_ == nullptr && this->instanceId_ == nullptr && this->keyAlgorithm_ == nullptr
        && this->province_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->validationMethod_ == nullptr; };
    // autoReissue Field Functions 
    bool hasAutoReissue() const { return this->autoReissue_ != nullptr;};
    void deleteAutoReissue() { this->autoReissue_ = nullptr;};
    inline string getAutoReissue() const { DARABONBA_PTR_GET_DEFAULT(autoReissue_, "") };
    inline UpdateInstanceRequest& setAutoReissue(string autoReissue) { DARABONBA_PTR_SET_VALUE(autoReissue_, autoReissue) };


    // certificateName Field Functions 
    bool hasCertificateName() const { return this->certificateName_ != nullptr;};
    void deleteCertificateName() { this->certificateName_ = nullptr;};
    inline string getCertificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
    inline UpdateInstanceRequest& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline UpdateInstanceRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline UpdateInstanceRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // contactIdList Field Functions 
    bool hasContactIdList() const { return this->contactIdList_ != nullptr;};
    void deleteContactIdList() { this->contactIdList_ = nullptr;};
    inline const vector<int64_t> & getContactIdList() const { DARABONBA_PTR_GET_CONST(contactIdList_, vector<int64_t>) };
    inline vector<int64_t> getContactIdList() { DARABONBA_PTR_GET(contactIdList_, vector<int64_t>) };
    inline UpdateInstanceRequest& setContactIdList(const vector<int64_t> & contactIdList) { DARABONBA_PTR_SET_VALUE(contactIdList_, contactIdList) };
    inline UpdateInstanceRequest& setContactIdList(vector<int64_t> && contactIdList) { DARABONBA_PTR_SET_RVALUE(contactIdList_, contactIdList) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline UpdateInstanceRequest& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string getCsr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline UpdateInstanceRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateInstanceRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // generateCsrMethod Field Functions 
    bool hasGenerateCsrMethod() const { return this->generateCsrMethod_ != nullptr;};
    void deleteGenerateCsrMethod() { this->generateCsrMethod_ = nullptr;};
    inline string getGenerateCsrMethod() const { DARABONBA_PTR_GET_DEFAULT(generateCsrMethod_, "") };
    inline UpdateInstanceRequest& setGenerateCsrMethod(string generateCsrMethod) { DARABONBA_PTR_SET_VALUE(generateCsrMethod_, generateCsrMethod) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyAlgorithm Field Functions 
    bool hasKeyAlgorithm() const { return this->keyAlgorithm_ != nullptr;};
    void deleteKeyAlgorithm() { this->keyAlgorithm_ = nullptr;};
    inline string getKeyAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(keyAlgorithm_, "") };
    inline UpdateInstanceRequest& setKeyAlgorithm(string keyAlgorithm) { DARABONBA_PTR_SET_VALUE(keyAlgorithm_, keyAlgorithm) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline UpdateInstanceRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateInstanceRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateInstanceRequest::Tags>) };
    inline vector<UpdateInstanceRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<UpdateInstanceRequest::Tags>) };
    inline UpdateInstanceRequest& setTags(const vector<UpdateInstanceRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateInstanceRequest& setTags(vector<UpdateInstanceRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // validationMethod Field Functions 
    bool hasValidationMethod() const { return this->validationMethod_ != nullptr;};
    void deleteValidationMethod() { this->validationMethod_ = nullptr;};
    inline string getValidationMethod() const { DARABONBA_PTR_GET_DEFAULT(validationMethod_, "") };
    inline UpdateInstanceRequest& setValidationMethod(string validationMethod) { DARABONBA_PTR_SET_VALUE(validationMethod_, validationMethod) };


  protected:
    // Specifies whether to enable automatic hosting. Valid values:
    // - enable: Enabled.
    // - disable: Disabled.
    shared_ptr<string> autoReissue_ {};
    // The name of the instance. When a certificate is issued, this name is used as the default name of the certificate.
    shared_ptr<string> certificateName_ {};
    // The city where the company or organization of the certificate purchaser is located. This field is required when generating a CSR for a DV certificate. Default value: Beijing.
    shared_ptr<string> city_ {};
    // The company information ID. This parameter is required for OV and EV certificates. Otherwise, you cannot call the ApplyCertificate operation to apply for a certificate.
    shared_ptr<int64_t> companyId_ {};
    // The list of contact IDs. If a contact already exists, you do not need to specify this parameter. If no contact has been configured, specify at least one contact ID. Otherwise, you cannot call the ApplyCertificate operation to apply for a certificate.
    shared_ptr<vector<int64_t>> contactIdList_ {};
    // The country or region code of the certificate organization. For example, CN indicates China and US indicates the United States. This field is required when generating a CSR for a DV certificate. Default value: CN.
    shared_ptr<string> countryCode_ {};
    // The CSR content. You can use OpenSSL or Keytool to generate a CSR. For more information, see [How do I create a CSR file?](https://help.aliyun.com/document_detail/42218.html).
    shared_ptr<string> csr_ {};
    // The domain name to which the certificate is bound. Requirements:
    // 
    // - You can specify a single domain name or a wildcard domain name (for example, `*.aliyundoc.com`).
    // - You can specify multiple domain names. Separate multiple domain names with commas (,). Whether a free domain name is included is determined based on the first domain name.
    // 
    // >Notice:  
    // 
    // When the certificate is bound to multiple domain names, this parameter is required. This parameter and the **Csr** parameter cannot both be empty. If you specify both this parameter and the **Csr** parameter, the **CN** field value in the **Csr** parameter is used as the domain name to which the certificate is bound.
    shared_ptr<string> domain_ {};
    // The method used to generate the certificate signing request (CSR). Default value: online. Valid values:
    // - online: The system generates the CSR. The Csr parameter is ignored.
    // - upload: You upload the CSR. The Csr parameter is required.
    shared_ptr<string> generateCsrMethod_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The certificate algorithm. Default value: RSA_2048. Valid values:
    // - **RSA_2048**
    // - **RSA_3072**
    // - **RSA_4096**
    // - **ECC_256**
    // - **SM2**
    shared_ptr<string> keyAlgorithm_ {};
    // The province or region where the company is located. This field is required when generating a CSR for a DV certificate. Default value: Beijing.
    shared_ptr<string> province_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The list of tags.
    shared_ptr<vector<UpdateInstanceRequest::Tags>> tags_ {};
    // The validation method for the certificate application. Valid values:
    // - DNS: DNS validation, which uses TXT or CNAME records.
    // - HTTP: File validation.
    shared_ptr<string> validationMethod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
