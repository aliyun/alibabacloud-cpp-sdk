// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECERTIFICATEWITHCSRREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECERTIFICATEWITHCSRREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCertificateWithCsrRequestRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateCertificateWithCsrRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCertificateWithCsrRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(ValidateType, validateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCertificateWithCsrRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(ValidateType, validateType_);
    };
    CreateCertificateWithCsrRequestRequest() = default ;
    CreateCertificateWithCsrRequestRequest(const CreateCertificateWithCsrRequestRequest &) = default ;
    CreateCertificateWithCsrRequestRequest(CreateCertificateWithCsrRequestRequest &&) = default ;
    CreateCertificateWithCsrRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCertificateWithCsrRequestRequest() = default ;
    CreateCertificateWithCsrRequestRequest& operator=(const CreateCertificateWithCsrRequestRequest &) = default ;
    CreateCertificateWithCsrRequestRequest& operator=(CreateCertificateWithCsrRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->csr_ == nullptr
        && return this->email_ == nullptr && return this->phone_ == nullptr && return this->productCode_ == nullptr && return this->tags_ == nullptr && return this->username_ == nullptr
        && return this->validateType_ == nullptr; };
    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string csr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateCertificateWithCsrRequestRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateCertificateWithCsrRequestRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline CreateCertificateWithCsrRequestRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateCertificateWithCsrRequestRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateCertificateWithCsrRequestRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateCertificateWithCsrRequestRequestTags>) };
    inline vector<CreateCertificateWithCsrRequestRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateCertificateWithCsrRequestRequestTags>) };
    inline CreateCertificateWithCsrRequestRequest& setTags(const vector<CreateCertificateWithCsrRequestRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateCertificateWithCsrRequestRequest& setTags(vector<CreateCertificateWithCsrRequestRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateCertificateWithCsrRequestRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // validateType Field Functions 
    bool hasValidateType() const { return this->validateType_ != nullptr;};
    void deleteValidateType() { this->validateType_ = nullptr;};
    inline string validateType() const { DARABONBA_PTR_GET_DEFAULT(validateType_, "") };
    inline CreateCertificateWithCsrRequestRequest& setValidateType(string validateType) { DARABONBA_PTR_SET_VALUE(validateType_, validateType) };


  protected:
    // The content of the CSR file.\\
    // The key algorithm in the CSR file must be Rivest-Shamir-Adleman (RSA) or elliptic-curve cryptography (ECC), and the key length of the RSA algorithm must be greater than or equal to 2,048 characters. For more information about how to create a CSR file, see [How do I create a CSR file?](https://help.aliyun.com/document_detail/42218.html)\\
    // A CSR file contains the information about your server and company. When you apply for a certificate, you must submit the CSR file to the CA. The CA signs the CSR file by using the private key of the root certificate and generates a public key file to issue your certificate.
    // 
    // >  The **CN** field in the CSR file specifies the domain name that is bound to the certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> csr_ = nullptr;
    // The contact email address of the applicant.
    // 
    // This parameter is required.
    std::shared_ptr<string> email_ = nullptr;
    // The phone number of the applicant.
    // 
    // This parameter is required.
    std::shared_ptr<string> phone_ = nullptr;
    // The specifications of the certificate that you want to apply for. Valid values:
    // 
    // *   **digicert-free-1-free** (default): DigiCert single-domain DV certificate in a three-month free trial, available only on the China site (aliyun.com).
    // *   **symantec-free-1-free**: DigiCert single-domain DV certificate in a one-year free trial, available only on the China site (aliyun.com).
    // *   **symantec-dv-1-starter**: DigiCert wildcard DV certificate.
    // *   **geotrust-dv-1-starter**: GeoTrust single-domain DV certificate.
    // *   **geotrust-dv-w-starter**: GeoTrust wildcard DV certificate.
    // *   **globalsign-dv-1-personal**: GlobalSign single-domain DV certificate.
    // *   **globalsign-dv-w-advanced**: GlobalSign wildcard DV certificate.
    std::shared_ptr<string> productCode_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<CreateCertificateWithCsrRequestRequestTags>> tags_ = nullptr;
    // The name of the applicant.
    // 
    // This parameter is required.
    std::shared_ptr<string> username_ = nullptr;
    // The method to verify the ownership of a domain name. Valid values:
    // 
    // *   **DNS**: DNS verification. If you use this method, you must add a TXT record to the DNS records of the domain name in the management platform of the domain name. You must have operation permissions on domain name resolution to verify the ownership of the domain name.
    // *   **FILE**: file verification. If you use this method, you must create a specified file on the DNS server. You must have administrative rights on the DNS server to verify the ownership of the domain name.
    // 
    // For more information about the verification methods, see [Verify the ownership of a domain name](https://help.aliyun.com/document_detail/48016.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> validateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
