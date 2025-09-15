// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECERTIFICATEFORPACKAGEREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECERTIFICATEFORPACKAGEREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCertificateForPackageRequestRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateCertificateForPackageRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCertificateForPackageRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(ValidateType, validateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCertificateForPackageRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(ValidateType, validateType_);
    };
    CreateCertificateForPackageRequestRequest() = default ;
    CreateCertificateForPackageRequestRequest(const CreateCertificateForPackageRequestRequest &) = default ;
    CreateCertificateForPackageRequestRequest(CreateCertificateForPackageRequestRequest &&) = default ;
    CreateCertificateForPackageRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCertificateForPackageRequestRequest() = default ;
    CreateCertificateForPackageRequestRequest& operator=(const CreateCertificateForPackageRequestRequest &) = default ;
    CreateCertificateForPackageRequestRequest& operator=(CreateCertificateForPackageRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->companyName_ != nullptr
        && this->csr_ != nullptr && this->domain_ != nullptr && this->email_ != nullptr && this->phone_ != nullptr && this->productCode_ != nullptr
        && this->tags_ != nullptr && this->username_ != nullptr && this->validateType_ != nullptr; };
    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string companyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline CreateCertificateForPackageRequestRequest& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string csr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateCertificateForPackageRequestRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateCertificateForPackageRequestRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateCertificateForPackageRequestRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline CreateCertificateForPackageRequestRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateCertificateForPackageRequestRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateCertificateForPackageRequestRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateCertificateForPackageRequestRequestTags>) };
    inline vector<CreateCertificateForPackageRequestRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateCertificateForPackageRequestRequestTags>) };
    inline CreateCertificateForPackageRequestRequest& setTags(const vector<CreateCertificateForPackageRequestRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateCertificateForPackageRequestRequest& setTags(vector<CreateCertificateForPackageRequestRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateCertificateForPackageRequestRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // validateType Field Functions 
    bool hasValidateType() const { return this->validateType_ != nullptr;};
    void deleteValidateType() { this->validateType_ = nullptr;};
    inline string validateType() const { DARABONBA_PTR_GET_DEFAULT(validateType_, "") };
    inline CreateCertificateForPackageRequestRequest& setValidateType(string validateType) { DARABONBA_PTR_SET_VALUE(validateType_, validateType) };


  protected:
    // The company name of the certificate application.
    // 
    // >  This parameter is available only when you apply for OV certificates. For more information, see [Manage company profiles](https://help.aliyun.com/document_detail/198289.html). If you want to apply for a DV certificate, you do not need to add a company profile.
    // 
    // If you specify a company name, the information about the company that is configured in the **Information Management** module is used. If you do not specify this parameter, the information about the most recent company that is added to the **Information Management** module is used.
    std::shared_ptr<string> companyName_ = nullptr;
    // The content of the certificate signing request (CSR) file that is manually generated by using OpenSSL or Keytool for the domain name. The key algorithm in the CSR file must be Rivest-Shamir-Adleman (RSA) or elliptic-curve cryptography (ECC), and the key length of the RSA algorithm must be greater than or equal to 2,048 characters. For more information about how to create a CSR file, see [Create a CSR file](https://help.aliyun.com/document_detail/313297.html). If you do not specify this parameter, Certificate Management Service automatically creates a CSR file.
    // 
    // A CSR file contains the information about your server and company. When you apply for a certificate, you must submit the CSR file to the CA. The CA signs the CSR file by using the private key of the root certificate and generates a public key file to issue your certificate.
    // 
    // >  The \\*\\*CN\\*\\* field in CSR file specifies the domain name that is bound to the certificate. You must include the field in the parameter value.
    std::shared_ptr<string> csr_ = nullptr;
    // The domain name that you want to bind to the certificate. The domain name must meet the following requirements:
    // 
    // *   The domain name must be a single domain name or a wildcard domain name. Example: `*.aliyundoc.com`.
    // *   You can specify multiple domain names. Separate multiple domain names with commas (,). You can specify a maximum of five domain names.
    // *   If you specify multiple domain names, the domain names must be only single domain names or only wildcard domain names. You cannot specify both single domain names and wildcard domain names.
    // 
    // >  If you want to bind multiple domain names to the certificate, you must specify this parameter. You must specify at least one of the Domain parameter and the \\*\\*Csr\\*\\* parameter. If you specify both the Domain parameter and the \\*\\*Csr\\*\\* parameter, the value of the \\*\\*CN\\*\\* field in the \\*\\*Csr\\*\\* parameter is used as the domain name that is bound to the certificate.
    std::shared_ptr<string> domain_ = nullptr;
    // The email address of the applicant. After the CA receives your certificate application, the CA sends a verification email to the email address that you specify. You must log on to the mailbox, open the mail, and complete the verification of the domain name ownership based on the steps that are described in the email.
    // 
    // If you do not specify this parameter, the information about the most recent contact that is added to the **Information Management** module is used. For more information about how to add a contact to the **Information Management** module, see [Manage contacts](https://help.aliyun.com/document_detail/198262.html).
    std::shared_ptr<string> email_ = nullptr;
    // The contact phone number of the applicant. CA staff can call the phone number to confirm the information in your certificate application.
    // 
    // If you do not specify this parameter, the information about the most recent contact that is added to the **Information Management** module is used. For more information about how to add a contact to the **Information Management** module, see [Manage contacts](https://help.aliyun.com/document_detail/198262.html).
    std::shared_ptr<string> phone_ = nullptr;
    // The specifications of the certificate that you want to apply for. Valid values:
    // 
    // *   **digicert-free-1-free** (default): DigiCert single-domain domain validated (DV) certificate, which is free and valid for 3 months. This value is available only on the China site (aliyun.com).
    // *   **symantec-free-1-free**: DigiCert single-domain DV certificate, which is free and valid for 1 year. This value is available only on the China site (aliyun.com).
    // *   **symantec-dv-1-starter**: DigiCert wildcard DV certificate.
    // *   **symantec-ov-1-personal**: DigiCert single-domain organization validated (OV) certificate.
    // *   **symantec-ov-w-personal**: DigiCert wildcard OV certificate.
    // *   **geotrust-dv-1-starter**: GeoTrust single-domain DV certificate.
    // *   **geotrust-dv-w-starter**: GeoTrust wildcard DV certificate.
    // *   **geotrust-ov-1-personal**: GeoTrust single-domain OV certificate.
    // *   **geotrust-ov-w-personal**: GeoTrust wildcard OV certificate.
    // *   **globalsign-dv-1-personal**: GlobalSign single-domain DV certificate.
    // *   **globalsign-dv-w-advanced**: GlobalSign wildcard DV certificate.
    // *   **globalsign-ov-1-personal**: GlobalSign single-domain OV certificate.
    // *   **globalsign-ov-w-advanced**: GlobalSign wildcard OV certificate.
    // *   **cfca-ov-1-personal**: China Financial Certification Authority (CFCA) single-domain OV certificate, available only on the China site (aliyun.com).
    // *   **cfca-ev-w-advanced**: CFCA wildcard OV certificate, available only on the China site (aliyun.com).
    std::shared_ptr<string> productCode_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<CreateCertificateForPackageRequestRequestTags>> tags_ = nullptr;
    // The name of the applicant.
    // 
    // If you do not specify this parameter, the information about the most recent contact that is added to the **Information Management** module is used. For more information about how to add a contact to the **Information Management** module, see [Manage contacts](https://help.aliyun.com/document_detail/198262.html).
    std::shared_ptr<string> username_ = nullptr;
    // The verification method of the domain name ownership. Valid values:
    // 
    // *   **DNS**: DNS verification. If you use this method, you must add a TXT record to the DNS records of the domain name in the management platform of the domain name. You must have operation permissions on domain name resolution to verify the ownership of the domain name.
    // *   **FILE**: file verification. If you use this method, you must create a specified file on the DNS server. You must have administrative rights on the DNS server to verify the ownership of the domain name.
    // 
    // For more information about the verification methods, see [Verify the ownership of a domain name](https://help.aliyun.com/document_detail/48016.html).
    std::shared_ptr<string> validateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
