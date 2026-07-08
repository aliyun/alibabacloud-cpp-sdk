// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTIFICATESTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTIFICATESTATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DescribeCertificateStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertificateStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(RecordDomain, recordDomain_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
      DARABONBA_PTR_TO_JSON(RecordValue, recordValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
      DARABONBA_PTR_TO_JSON(ValidateType, validateType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertificateStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(RecordDomain, recordDomain_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
      DARABONBA_PTR_FROM_JSON(RecordValue, recordValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
      DARABONBA_PTR_FROM_JSON(ValidateType, validateType_);
    };
    DescribeCertificateStateResponseBody() = default ;
    DescribeCertificateStateResponseBody(const DescribeCertificateStateResponseBody &) = default ;
    DescribeCertificateStateResponseBody(DescribeCertificateStateResponseBody &&) = default ;
    DescribeCertificateStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertificateStateResponseBody() = default ;
    DescribeCertificateStateResponseBody& operator=(const DescribeCertificateStateResponseBody &) = default ;
    DescribeCertificateStateResponseBody& operator=(DescribeCertificateStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && this->certificate_ == nullptr && this->content_ == nullptr && this->domain_ == nullptr && this->privateKey_ == nullptr && this->recordDomain_ == nullptr
        && this->recordType_ == nullptr && this->recordValue_ == nullptr && this->requestId_ == nullptr && this->type_ == nullptr && this->uri_ == nullptr
        && this->validateType_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DescribeCertificateStateResponseBody& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline DescribeCertificateStateResponseBody& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeCertificateStateResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeCertificateStateResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string getPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline DescribeCertificateStateResponseBody& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // recordDomain Field Functions 
    bool hasRecordDomain() const { return this->recordDomain_ != nullptr;};
    void deleteRecordDomain() { this->recordDomain_ = nullptr;};
    inline string getRecordDomain() const { DARABONBA_PTR_GET_DEFAULT(recordDomain_, "") };
    inline DescribeCertificateStateResponseBody& setRecordDomain(string recordDomain) { DARABONBA_PTR_SET_VALUE(recordDomain_, recordDomain) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline DescribeCertificateStateResponseBody& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // recordValue Field Functions 
    bool hasRecordValue() const { return this->recordValue_ != nullptr;};
    void deleteRecordValue() { this->recordValue_ = nullptr;};
    inline string getRecordValue() const { DARABONBA_PTR_GET_DEFAULT(recordValue_, "") };
    inline DescribeCertificateStateResponseBody& setRecordValue(string recordValue) { DARABONBA_PTR_SET_VALUE(recordValue_, recordValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCertificateStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCertificateStateResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline DescribeCertificateStateResponseBody& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // validateType Field Functions 
    bool hasValidateType() const { return this->validateType_ != nullptr;};
    void deleteValidateType() { this->validateType_ = nullptr;};
    inline string getValidateType() const { DARABONBA_PTR_GET_DEFAULT(validateType_, "") };
    inline DescribeCertificateStateResponseBody& setValidateType(string validateType) { DARABONBA_PTR_SET_VALUE(validateType_, validateType) };


  protected:
    // The certificate ID.
    // 
    // > This parameter is returned when the certificate is issued.
    shared_ptr<string> certId_ {};
    // The certificate content (in PEM format). For more information about the PEM format and how to convert the format of a certificate, see [What are the formats of mainstream digital certificates?](https://help.aliyun.com/document_detail/42214.html).
    // 
    // > This parameter is returned only when **Type** is set to **certificate** (indicating that the certificate has been issued).
    shared_ptr<string> certificate_ {};
    // The content that you need to write to the newly created file when you use the file validation method for domain validation.
    // 
    // > This parameter is returned only when **Type** is set to **domain_verify** (indicating the domain validation stage) and **ValidateType** is set to **FILE** (indicating the file validation method).
    shared_ptr<string> content_ {};
    // The domain name to be validated when you use the file validation method for domain validation. You need to connect to the server corresponding to this domain name and create the specified file (i.e., **Uri**) on the server.
    // 
    // > This parameter is returned only when **Type** is set to **domain_verify** (indicating the domain validation stage) and **ValidateType** is set to **FILE** (indicating the file validation method).
    shared_ptr<string> domain_ {};
    // The content of the certificate private key (in PEM format). For more information about the PEM format and how to convert the format of a certificate, see [What are the formats of mainstream digital certificates?](https://help.aliyun.com/document_detail/42214.html).
    // 
    // > This parameter is returned only when **Type** is set to **certificate** (indicating that the certificate has been issued).
    shared_ptr<string> privateKey_ {};
    // The host record that you need to operate when you use the DNS validation method for domain validation.
    // 
    // > This parameter is returned only when **Type** is set to **domain_verify** (indicating the domain validation stage) and **ValidateType** is set to **DNS** (indicating the DNS validation method).
    shared_ptr<string> recordDomain_ {};
    // The type of DNS record that you need to add when you use the DNS validation method for domain validation. Valid values:
    // 
    // - **TXT**: text record.
    // 
    // - **CNAME**: alias record.
    // 
    // > This parameter is returned only when **Type** is set to **domain_verify** (indicating the domain validation stage) and **ValidateType** is set to **DNS** (indicating the DNS validation method).
    shared_ptr<string> recordType_ {};
    // The record value that you need to add when you use the DNS validation method for domain validation.
    // 
    // > This parameter is returned only when **Type** is set to **domain_verify** (indicating the domain validation stage) and **ValidateType** is set to **DNS** (indicating the DNS validation method).
    shared_ptr<string> recordValue_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the certificate request order. Valid values:
    // 
    // - **domain_verify**: **Pending validation**, which indicates that you have not completed domain validation after submitting the certificate request.
    // 
    //   > After you submit a certificate request, you must manually complete domain ownership validation before the certificate request can enter the review stage. If you have not completed domain validation, you can refer to the response parameters of this operation to complete domain validation.
    // 
    // - **process**: **Under review**, which indicates that the certificate request is being reviewed by the CA center.
    // 
    // - **verify_fail**: **Review failed**, which indicates that the certificate request failed the review.
    // 
    //   > The review may fail because the certificate request information you submitted is incorrect. We recommend that you call [DeleteCertificateRequest](https://help.aliyun.com/document_detail/455294.html) to delete the order that failed the review (deleted orders do not consume certificate resource plan quota) and submit a new certificate request.
    // 
    // - **certificate**: **Issued**, which indicates that the certificate has been issued.
    // 
    // - **payed**: **Pending request**, which indicates that the certificate is pending request.
    // 
    // - **unknow**: **Unknown status**.
    shared_ptr<string> type_ {};
    // The file that you need to create on the domain server when you use the file validation method for domain validation. **Uri** includes the file path and name.
    // 
    // > This parameter is returned only when **Type** is set to **domain_verify** (indicating the domain validation stage) and **ValidateType** is set to **FILE** (indicating the file validation method).
    shared_ptr<string> uri_ {};
    // The domain validation method selected when submitting the certificate request. Valid values:
    // 
    // - **DNS**: DNS validation. This method validates domain ownership by adding the specified DNS record to the domain on the DNS management platform.
    // 
    // - **FILE**: file validation. This method validates domain ownership by creating the specified file on the domain server.
    // 
    // > This parameter is returned only when **Type** is set to **domain_verify** (indicating the domain validation stage).
    shared_ptr<string> validateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
