// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTCERTIFICATEWITHCSRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTCERTIFICATEWITHCSRREQUEST_HPP_
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
  class CreateClientCertificateWithCsrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientCertificateWithCsrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(AsynchronousFlag, asynchronousFlag_);
      DARABONBA_PTR_TO_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
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
    friend void from_json(const Darabonba::Json& j, CreateClientCertificateWithCsrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterTime, afterTime_);
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(AsynchronousFlag, asynchronousFlag_);
      DARABONBA_PTR_FROM_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
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
    CreateClientCertificateWithCsrRequest() = default ;
    CreateClientCertificateWithCsrRequest(const CreateClientCertificateWithCsrRequest &) = default ;
    CreateClientCertificateWithCsrRequest(CreateClientCertificateWithCsrRequest &&) = default ;
    CreateClientCertificateWithCsrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientCertificateWithCsrRequest() = default ;
    CreateClientCertificateWithCsrRequest& operator=(const CreateClientCertificateWithCsrRequest &) = default ;
    CreateClientCertificateWithCsrRequest& operator=(CreateClientCertificateWithCsrRequest &&) = default ;
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
        && this->algorithm_ == nullptr && this->asynchronousFlag_ == nullptr && this->beforeTime_ == nullptr && this->commonName_ == nullptr && this->country_ == nullptr
        && this->csr_ == nullptr && this->customIdentifier_ == nullptr && this->days_ == nullptr && this->enableCrl_ == nullptr && this->immediately_ == nullptr
        && this->locality_ == nullptr && this->months_ == nullptr && this->organization_ == nullptr && this->organizationUnit_ == nullptr && this->parentIdentifier_ == nullptr
        && this->resourceGroupId_ == nullptr && this->sanType_ == nullptr && this->sanValue_ == nullptr && this->state_ == nullptr && this->tags_ == nullptr
        && this->years_ == nullptr; };
    // afterTime Field Functions 
    bool hasAfterTime() const { return this->afterTime_ != nullptr;};
    void deleteAfterTime() { this->afterTime_ = nullptr;};
    inline int64_t getAfterTime() const { DARABONBA_PTR_GET_DEFAULT(afterTime_, 0L) };
    inline CreateClientCertificateWithCsrRequest& setAfterTime(int64_t afterTime) { DARABONBA_PTR_SET_VALUE(afterTime_, afterTime) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateClientCertificateWithCsrRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // asynchronousFlag Field Functions 
    bool hasAsynchronousFlag() const { return this->asynchronousFlag_ != nullptr;};
    void deleteAsynchronousFlag() { this->asynchronousFlag_ = nullptr;};
    inline bool getAsynchronousFlag() const { DARABONBA_PTR_GET_DEFAULT(asynchronousFlag_, false) };
    inline CreateClientCertificateWithCsrRequest& setAsynchronousFlag(bool asynchronousFlag) { DARABONBA_PTR_SET_VALUE(asynchronousFlag_, asynchronousFlag) };


    // beforeTime Field Functions 
    bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
    void deleteBeforeTime() { this->beforeTime_ = nullptr;};
    inline int64_t getBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, 0L) };
    inline CreateClientCertificateWithCsrRequest& setBeforeTime(int64_t beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateClientCertificateWithCsrRequest& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline CreateClientCertificateWithCsrRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string getCsr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateClientCertificateWithCsrRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // customIdentifier Field Functions 
    bool hasCustomIdentifier() const { return this->customIdentifier_ != nullptr;};
    void deleteCustomIdentifier() { this->customIdentifier_ = nullptr;};
    inline string getCustomIdentifier() const { DARABONBA_PTR_GET_DEFAULT(customIdentifier_, "") };
    inline CreateClientCertificateWithCsrRequest& setCustomIdentifier(string customIdentifier) { DARABONBA_PTR_SET_VALUE(customIdentifier_, customIdentifier) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline CreateClientCertificateWithCsrRequest& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // enableCrl Field Functions 
    bool hasEnableCrl() const { return this->enableCrl_ != nullptr;};
    void deleteEnableCrl() { this->enableCrl_ = nullptr;};
    inline int64_t getEnableCrl() const { DARABONBA_PTR_GET_DEFAULT(enableCrl_, 0L) };
    inline CreateClientCertificateWithCsrRequest& setEnableCrl(int64_t enableCrl) { DARABONBA_PTR_SET_VALUE(enableCrl_, enableCrl) };


    // immediately Field Functions 
    bool hasImmediately() const { return this->immediately_ != nullptr;};
    void deleteImmediately() { this->immediately_ = nullptr;};
    inline int32_t getImmediately() const { DARABONBA_PTR_GET_DEFAULT(immediately_, 0) };
    inline CreateClientCertificateWithCsrRequest& setImmediately(int32_t immediately) { DARABONBA_PTR_SET_VALUE(immediately_, immediately) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string getLocality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline CreateClientCertificateWithCsrRequest& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // months Field Functions 
    bool hasMonths() const { return this->months_ != nullptr;};
    void deleteMonths() { this->months_ = nullptr;};
    inline int32_t getMonths() const { DARABONBA_PTR_GET_DEFAULT(months_, 0) };
    inline CreateClientCertificateWithCsrRequest& setMonths(int32_t months) { DARABONBA_PTR_SET_VALUE(months_, months) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateClientCertificateWithCsrRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string getOrganizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateClientCertificateWithCsrRequest& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string getParentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline CreateClientCertificateWithCsrRequest& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClientCertificateWithCsrRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sanType Field Functions 
    bool hasSanType() const { return this->sanType_ != nullptr;};
    void deleteSanType() { this->sanType_ = nullptr;};
    inline int32_t getSanType() const { DARABONBA_PTR_GET_DEFAULT(sanType_, 0) };
    inline CreateClientCertificateWithCsrRequest& setSanType(int32_t sanType) { DARABONBA_PTR_SET_VALUE(sanType_, sanType) };


    // sanValue Field Functions 
    bool hasSanValue() const { return this->sanValue_ != nullptr;};
    void deleteSanValue() { this->sanValue_ = nullptr;};
    inline string getSanValue() const { DARABONBA_PTR_GET_DEFAULT(sanValue_, "") };
    inline CreateClientCertificateWithCsrRequest& setSanValue(string sanValue) { DARABONBA_PTR_SET_VALUE(sanValue_, sanValue) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateClientCertificateWithCsrRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateClientCertificateWithCsrRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateClientCertificateWithCsrRequest::Tags>) };
    inline vector<CreateClientCertificateWithCsrRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateClientCertificateWithCsrRequest::Tags>) };
    inline CreateClientCertificateWithCsrRequest& setTags(const vector<CreateClientCertificateWithCsrRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateClientCertificateWithCsrRequest& setTags(vector<CreateClientCertificateWithCsrRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int32_t getYears() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
    inline CreateClientCertificateWithCsrRequest& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    // The expiration time of the client certificate in UNIX timestamp format. Unit: seconds.
    // >The **BeforeTime** and **AfterTime** parameters must both be empty or both be specified.
    shared_ptr<int64_t> afterTime_ {};
    // The key algorithm of the client certificate. The key algorithm is in the `<encryption algorithm>_<key length>` format. Valid values:
    // 
    // - **RSA_1024**: The signature algorithm is Sha256WithRSA.
    // - **RSA_2048**: The signature algorithm is Sha256WithRSA.
    // - **RSA_4096**: The signature algorithm is Sha256WithRSA.
    // - **ECC_256**: The signature algorithm is Sha256WithECDSA.
    // - **ECC_384**: The signature algorithm is Sha256WithECDSA.
    // - **ECC_512**: The signature algorithm is Sha256WithECDSA.
    // - **SM2_256**: The signature algorithm is SM3WithSM2.
    // 
    // The encryption algorithm of the client certificate must be the same as that of the sub-CA certificate, but the key length can be different. For example, if the key algorithm of the sub-CA certificate is RSA_2048, the key algorithm of the client certificate must be RSA_1024, RSA_2048, or RSA_4096.
    // 
    // >You can call [DescribeCACertificate](https://help.aliyun.com/document_detail/465954.html) to query the key algorithm of the sub-CA certificate.
    shared_ptr<string> algorithm_ {};
    // The asynchronous processing flag. If the value is "true", the backend service issues the certificate asynchronously.
    // After the request is submitted, you can call the ListClientCertificate operation to obtain the latest certificate.
    shared_ptr<bool> asynchronousFlag_ {};
    // The issuance time of the client certificate in UNIX timestamp format. Default value: the time when you call this operation. Unit: seconds.
    // 
    // >The **BeforeTime** and **AfterTime** parameters must both be empty or both be specified.
    shared_ptr<int64_t> beforeTime_ {};
    // The common name of the certificate. Chinese characters, English characters, and other characters are supported.
    // >If you set the **CsrPemString** parameter, the value of the **CommonName** parameter is determined by the corresponding information in the **CsrPemString** parameter.
    shared_ptr<string> commonName_ {};
    // The country code. Example: **CN** or **US**.
    shared_ptr<string> country_ {};
    // The CSR content. You can use OpenSSL or Keytool to generate a CSR. For more information, see [How to create a CSR file](https://help.aliyun.com/document_detail/42218.html).
    // <props="china">You can also create a CSR in the SSL Certificates Service console. For more information, see [Create a CSR](https://help.aliyun.com/document_detail/313297.html).
    shared_ptr<string> csr_ {};
    // The custom identifier, which serves as a unique key.
    shared_ptr<string> customIdentifier_ {};
    // The validity period of the client certificate. Unit: days.
    // The **Days**, **BeforeTime**, and **AfterTime** parameters cannot all be empty. The **BeforeTime** and **AfterTime** parameters must both be empty or both be specified. The following rules apply:
    // 
    // - If you set the **Days** parameter, you can choose to set or not set the **BeforeTime** and **AfterTime** parameters.
    // - If you do not set the **Days** parameter, you must set the **BeforeTime** and **AfterTime** parameters.
    // 
    // >- If you set the **Days**, **BeforeTime**, and **AfterTime** parameters at the same time, the validity period of the client certificate is determined by the value of the **Days** parameter.
    // - The validity period of the client certificate cannot exceed the validity period of the sub-CA certificate. You can call [DescribeCACertificate](https://help.aliyun.com/document_detail/465954.html) to view the validity period of the sub-CA certificate.
    shared_ptr<int32_t> days_ {};
    // Specifies whether to include the Certificate Revocation List (CRL) address. Valid values:
    // 
    // - 0: No.
    // - 1: Yes.
    shared_ptr<int64_t> enableCrl_ {};
    // Specifies whether to immediately return the digital certificate. Valid values:
    // - **0**: does not return the certificate. This is the default value.
    // - **1**: returns the certificate.
    // - **2**: returns the certificate and its certificate chain.
    shared_ptr<int32_t> immediately_ {};
    // The name of the city where the certificate organization is located. Chinese characters, English characters, and other characters are supported.
    // Default value: the name of the city where the sub-CA certificate organization that issues this certificate is located.
    shared_ptr<string> locality_ {};
    // The certificate validity period. Unit: months.
    shared_ptr<int32_t> months_ {};
    // The organization name. Default value: Alibaba Inc.
    shared_ptr<string> organization_ {};
    // The organizational unit name. Default value: Aliyun CDN.
    shared_ptr<string> organizationUnit_ {};
    // The unique identifier of the sub-CA certificate that issues this certificate.
    // >You can call [DescribeCACertificateList](https://help.aliyun.com/document_detail/465957.html) to query the unique identifier of the sub-CA certificate.
    shared_ptr<string> parentIdentifier_ {};
    // The ID of the resource group to which the certificate belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The type of the Subject Alternative Name (SAN) extension of the client certificate. Valid values:
    // 
    // - **0**: otherName (0): other name.
    // - **1**: rfc822Name (1): RFC 822 name, which is typically an email address.
    // - **2**: dNSName (2): DNS name (domain name).
    // - **3**: x400Address (3): X.400 address, an early email standard address.
    // - **4**: directoryName (4): directory name, which is typically an X.500 distinguished name (DN).
    // - **5**: ediPartyName (5): Electronic Data Interchange (EDI) party name.
    // - **6**: uniformResourceIdentifier (6): Uniform Resource Identifier (URI).
    // - **7**: iPAddress (7): IP address.
    // - **8**: registeredID (8): registered ID (object identifier OID).
    shared_ptr<int32_t> sanType_ {};
    // The specific SAN extension information of the client certificate. You can enter multiple values separated by commas (,).
    // 
    // 1. otherName (0): other name
    // 
    // - Example: 1.3.6.1.4.1.311.20.2.3 (OID) + user@domain.com (UPN - User Principal Name)
    // - Description: A custom extension type that typically consists of a specific OID (object identifier) and a corresponding value. In Windows environments, it is commonly used to store UPN (User Principal Name), such as zhangsan@company.com for smart card logon.
    // 
    // 2. rfc822Name (1): RFC 822 name (email address)
    // 
    // - Example: admin@example.com,support@company.cn
    // - Description: An Internet email address that complies with the RFC 822 standard. It is commonly used in S/MIME email signing and encryption certificates to identify the sender or recipient of an email.
    // - dNSName (2): DNS name (domain name)
    // - Example: www.example.com,api.test.cn,*.mydomain.com (wildcard domain name)
    // - Description: The most commonly used type in HTTPS website SSL/TLS certificates. A certificate can contain multiple DNS names through the SAN extension, allowing a single certificate to protect multiple subdomains or completely different domain names.
    // 3. x400Address (3): X.400 address
    // - Example: G=Zhang; S=San; O=Company; PRMD=IT; ADMD=Telecom; C=CN
    // - Description: An early email system address standard with a complex structure that includes attributes such as country (C), administration domain (ADMD), organization (O), surname (S), and given name (G). It is rarely used in modern Internet HTTPS certificates and is mostly found in traditional European government, enterprise, or military communication systems.
    // 4. directoryName (4): directory name
    // - Example: CN=IT Department, OU=Tech, O=Company Ltd, L=Beijing, ST=Beijing, C=CN
    // - Description: A standard X.500 distinguished name (DN). It is typically used to explicitly identify the complete hierarchical information of an organization, department, or entity in a certificate. It is commonly found in enterprise internal root certificates or specific government digital certificates.
    // 5. ediPartyName (5): EDI party name
    // - Example: nameAssigner=GlobalTradeOrg, partyName=SupplierA
    // - Description: Used specifically in the Electronic Data Interchange (EDI) domain. It identifies a specific party in business message exchanges (such as order and invoice transmissions) and typically includes the assigning organization (nameAssigner) and the party name (partyName).
    // 6. uniformResourceIdentifier (6): Uniform Resource Identifier (URI)
    // - Example: http://www.example.com/verify,https://api.test.cn/status
    // - Description: A standard URL format that must include a protocol prefix (such as http:// or https://). It can point to a specific network resource address.
    // 7. iPAddress (7): IP address
    // - Example: 192.168.1.100 (IPv4), 2001:0db8:85a3::8a2e:0370:7334 (IPv6)
    // - Description: Directly binds to a server IP address. It is commonly used for internal systems without domain names, API servers, or specific services that can only be accessed through a public IP address. Note: Public IP certificates typically require strict Organization Validation (OV).
    // 8. registeredID (8): registered ID (object identifier OID)
    // - Example: 1.2.3.4.55.6.5.99, 2.5.29.17
    // - Description: A unique numeric identifier assigned by international standards organizations. It is rarely used directly as a subject name in certificates and is more commonly used as a unique identity code or policy identifier within systems.
    shared_ptr<string> sanValue_ {};
    // <props="china">The name of the province, municipality, or autonomous region where the certificate organization is located. Chinese characters, English characters, and other characters are supported. Default value: the name of the province, municipality, or autonomous region where the sub-CA certificate organization that issues this certificate is located.
    // <props="intl">The name of the province or state where the certificate organization is located. Chinese characters, English characters, and other characters are supported. Default value: the name of the province or state where the sub-CA certificate organization that issues this certificate is located.
    shared_ptr<string> state_ {};
    // The tag list.
    shared_ptr<vector<CreateClientCertificateWithCsrRequest::Tags>> tags_ {};
    // The certificate validity period. Unit: years.
    shared_ptr<int32_t> years_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
