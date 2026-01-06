// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECERTIFICATEREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECERTIFICATEREQUESTREQUEST_HPP_
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
  class CreateCertificateRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCertificateRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(ValidateType, validateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCertificateRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(ValidateType, validateType_);
    };
    CreateCertificateRequestRequest() = default ;
    CreateCertificateRequestRequest(const CreateCertificateRequestRequest &) = default ;
    CreateCertificateRequestRequest(CreateCertificateRequestRequest &&) = default ;
    CreateCertificateRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCertificateRequestRequest() = default ;
    CreateCertificateRequestRequest& operator=(const CreateCertificateRequestRequest &) = default ;
    CreateCertificateRequestRequest& operator=(CreateCertificateRequestRequest &&) = default ;
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
      // The tag key of the resource. You can specify up to 20 tag keys. You cannot specify empty strings as tag keys.
      // 
      // The key can be up to 64 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The key must start with a letter but cannot start with `aliyun` or `acs:`. The key cannot contain `http://` or `https://`.
      // 
      // >  You must specify at least one of **Tag.N** (**Tag.N.Key** and **Tag.N.Value**).
      shared_ptr<string> key_ {};
      // The tag value. You can specify up to 20 tag values. The tag value can be an empty string.
      // 
      // The tag value cannot exceed 128 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). The key must start with a letter but cannot start with `aliyun` or `acs:`. The key cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->domain_ == nullptr
        && this->email_ == nullptr && this->phone_ == nullptr && this->productCode_ == nullptr && this->tags_ == nullptr && this->username_ == nullptr
        && this->validateType_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateCertificateRequestRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateCertificateRequestRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline CreateCertificateRequestRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateCertificateRequestRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateCertificateRequestRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateCertificateRequestRequest::Tags>) };
    inline vector<CreateCertificateRequestRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateCertificateRequestRequest::Tags>) };
    inline CreateCertificateRequestRequest& setTags(const vector<CreateCertificateRequestRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateCertificateRequestRequest& setTags(vector<CreateCertificateRequestRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateCertificateRequestRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // validateType Field Functions 
    bool hasValidateType() const { return this->validateType_ != nullptr;};
    void deleteValidateType() { this->validateType_ = nullptr;};
    inline string getValidateType() const { DARABONBA_PTR_GET_DEFAULT(validateType_, "") };
    inline CreateCertificateRequestRequest& setValidateType(string validateType) { DARABONBA_PTR_SET_VALUE(validateType_, validateType) };


  protected:
    // The domain name that you want to bind to the certificate. You can specify only one domain name.
    // 
    // >  The domain name must match the certificate specifications that you specify for the **ProductCode** parameter. If you apply for a single-domain certificate, you must specify a single domain name for this parameter. If you apply for a wildcard certificate, you must specify a wildcard domain name such as `*.aliyundoc.com` for this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The contact email address of the applicant.
    // 
    // This parameter is required.
    shared_ptr<string> email_ {};
    // The phone number of the applicant.
    // 
    // This parameter is required.
    shared_ptr<string> phone_ {};
    // The specifications of the certificate. Valid values:
    // 
    // *   **digicert-free-1-free** (default): DigiCert single-domain DV certificate, which is free and valid for 3 months.
    // *   **symantec-free-1-free**: DigiCert single-domain DV certificate, which is free and valid for 1 year. This value is available only on the China site (aliyun.com).
    // *   **symantec-dv-1-starter**: DigiCert wildcard DV certificate.
    // *   **geotrust-dv-1-starter**: GeoTrust single-domain DV certificate.
    // *   **geotrust-dv-w-starter**: GeoTrust wildcard DV certificate.
    // *   **globalsign-dv-1-personal**: GlobalSign single-domain DV certificate.
    // *   **globalsign-dv-w-advanced**: GlobalSign wildcard DV certificate.
    shared_ptr<string> productCode_ {};
    // The tags.
    shared_ptr<vector<CreateCertificateRequestRequest::Tags>> tags_ {};
    // The name of the applicant.
    // 
    // This parameter is required.
    shared_ptr<string> username_ {};
    // The method to verify the ownership of a domain name. Valid values:
    // 
    // *   **DNS**: DNS verification. If you use this method, you must add a TXT record to the DNS records of the domain name in the management platform of the domain name. You must have operation permissions on domain name resolution to verify the ownership of the domain name.
    // *   **FILE**: file verification. If you use this method, you must create a specified file on the DNS server. You must have administrative rights on the DNS server to verify the ownership of the domain name.
    // 
    // For more information about the verification methods, see [Verify the ownership of a domain name](https://help.aliyun.com/document_detail/48016.html).
    // 
    // This parameter is required.
    shared_ptr<string> validateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
