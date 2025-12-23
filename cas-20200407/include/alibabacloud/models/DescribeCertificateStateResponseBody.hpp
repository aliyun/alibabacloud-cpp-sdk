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
        && return this->certificate_ == nullptr && return this->content_ == nullptr && return this->domain_ == nullptr && return this->privateKey_ == nullptr && return this->recordDomain_ == nullptr
        && return this->recordType_ == nullptr && return this->recordValue_ == nullptr && return this->requestId_ == nullptr && return this->type_ == nullptr && return this->uri_ == nullptr
        && return this->validateType_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DescribeCertificateStateResponseBody& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline DescribeCertificateStateResponseBody& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeCertificateStateResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeCertificateStateResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string privateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline DescribeCertificateStateResponseBody& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // recordDomain Field Functions 
    bool hasRecordDomain() const { return this->recordDomain_ != nullptr;};
    void deleteRecordDomain() { this->recordDomain_ = nullptr;};
    inline string recordDomain() const { DARABONBA_PTR_GET_DEFAULT(recordDomain_, "") };
    inline DescribeCertificateStateResponseBody& setRecordDomain(string recordDomain) { DARABONBA_PTR_SET_VALUE(recordDomain_, recordDomain) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string recordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline DescribeCertificateStateResponseBody& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // recordValue Field Functions 
    bool hasRecordValue() const { return this->recordValue_ != nullptr;};
    void deleteRecordValue() { this->recordValue_ = nullptr;};
    inline string recordValue() const { DARABONBA_PTR_GET_DEFAULT(recordValue_, "") };
    inline DescribeCertificateStateResponseBody& setRecordValue(string recordValue) { DARABONBA_PTR_SET_VALUE(recordValue_, recordValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCertificateStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCertificateStateResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline DescribeCertificateStateResponseBody& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // validateType Field Functions 
    bool hasValidateType() const { return this->validateType_ != nullptr;};
    void deleteValidateType() { this->validateType_ = nullptr;};
    inline string validateType() const { DARABONBA_PTR_GET_DEFAULT(validateType_, "") };
    inline DescribeCertificateStateResponseBody& setValidateType(string validateType) { DARABONBA_PTR_SET_VALUE(validateType_, validateType) };


  protected:
    std::shared_ptr<string> certId_ = nullptr;
    // The content of the certificate in the PEM format. For more information about the PEM format and how to convert certificate formats, see [What formats are used for mainstream digital certificates?](https://help.aliyun.com/document_detail/42214.html)
    // 
    // >  This parameter is returned only when the value of the **Type** parameter is **certificate**. The value certificate indicates that the certificate is issued.
    std::shared_ptr<string> certificate_ = nullptr;
    // The content that you need to write to the newly created file when you use the file verification method.
    // 
    // >  This parameter is returned only when the value of the **Type** parameter is **domain_verify** and the value of the **ValidateType** parameter is **FILE**. The value domain_verify indicates that the verification of the domain name ownership is not complete, and the value FILE indicates that the file verification method is used.
    std::shared_ptr<string> content_ = nullptr;
    // The domain name to be verified when you use the file verification method. You must connect to the DNS server of the domain name and create a file on the server. The file is specified by the **Uri** parameter.
    // 
    // >  This parameter is returned only when the value of the **Type** parameter is **domain_verify** and the value of the **ValidateType** parameter is **FILE**. The value domain_verify indicates that the verification of the domain name ownership is not complete, and the value FILE indicates that the file verification method is used.
    std::shared_ptr<string> domain_ = nullptr;
    // The private key of the certificate in the PEM format. For more information about the PEM format and how to convert certificate formats, see [What formats are used for mainstream digital certificates?](https://help.aliyun.com/document_detail/42214.html)
    // 
    // >  This parameter is returned only when the value of the **Type** parameter is **certificate**. The value certificate indicates that the certificate is issued.
    std::shared_ptr<string> privateKey_ = nullptr;
    // The DNS record that you need to manage when you use the DNS verification method.
    // 
    // >  This parameter is returned only when the value of the **Type** parameter is **domain_verify** and the value of the **ValidateType** parameter is **DNS**. The value domain_verify indicates that the verification of the domain name ownership is not complete, and the value DNS indicates that the DNS verification method is used.
    std::shared_ptr<string> recordDomain_ = nullptr;
    // The type of the DNS record that you need to add when you use the DNS verification method. Valid values:
    // 
    // *   **TXT**
    // *   **CNAME**
    // 
    // >  This parameter is returned only when the value of the **Type** parameter is **domain_verify** and the value of the **ValidateType** parameter is **DNS**. The value domain_verify indicates that the verification of the domain name ownership is not complete.
    std::shared_ptr<string> recordType_ = nullptr;
    // You need to add a TXT record to the DNS records only when you use the DNS verification method.
    // 
    // >  This parameter is returned only when the value of the **Type** parameter is **domain_verify** and the value of the **ValidateType** parameter is **DNS**. The value domain_verify indicates that the verification of the domain name ownership is not complete, and the value DNS indicates that the DNS verification method is used.
    std::shared_ptr<string> recordValue_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the certificate application order. Valid values:
    // 
    // *   **domain_verify**: **pending review**, which indicates that you have not completed the verification of the domain name ownership after you submit the certificate application.
    //      >After you submit a certificate application, you must manually complete the verification of the domain name ownership. The CA reviews the certificate application only after the verification is complete. If you have not completed the verification of the domain name ownership, you can complete the verification based on the data returned by this operation.
    // 
    // *   **process**: **being reviewed**, which indicates that the certificate application is being reviewed by the CA.
    // 
    // *   **verify_fail**: **review failed**, which indicates that the certificate application failed to be reviewed.
    //     >  If a certificate application fails to be reviewed, the information that you specified in the certificate application may be incorrect. We recommend that you call the [DeleteCertificateRequest](https://help.aliyun.com/document_detail/164109.html) operation to delete the certificate application order and resubmit a certificate application. After the order is deleted, the quota that is consumed for the order is released.
    // 
    // *   **certificate**: **issued**, which indicates that the certificate is issued.
    // 
    // *   **payed**: **pending application**, which indicates that you have not submitted a certificate application.
    // 
    // *   **unknow**: The status is **unknown**.
    std::shared_ptr<string> type_ = nullptr;
    // The file that you need to create on the DNS server when you use the file verification method. **The value of this parameter contains the file path and file name.**
    // 
    // >  This parameter is returned only when the value of the **Type** parameter is **domain_verify** and the value of the **ValidateType** parameter is **FILE**. The value domain_verify indicates that the verification of the domain name ownership is not complete, and the value FILE indicates that the file verification method is used.
    std::shared_ptr<string> uri_ = nullptr;
    // The verification method of the domain name ownership. Valid values:
    // 
    // *   **DNS**: DNS verification. If you use this method, you must add a TXT record to the DNS records of the domain name in the management platform of the domain name.
    // *   **FILE**: file verification. If you use this method, you must create a specified file on the DNS server.
    // 
    // >  This parameter is returned only when the value of the **Type** parameter is **domain_verify**. The value domain_verify indicates that the verification of the domain name ownership is not complete.
    std::shared_ptr<string> validateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
