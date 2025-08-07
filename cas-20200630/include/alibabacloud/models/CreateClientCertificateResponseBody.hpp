// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateClientCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateChain, certificateChain_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(X509Certificate, x509Certificate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateChain, certificateChain_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(X509Certificate, x509Certificate_);
    };
    CreateClientCertificateResponseBody() = default ;
    CreateClientCertificateResponseBody(const CreateClientCertificateResponseBody &) = default ;
    CreateClientCertificateResponseBody(CreateClientCertificateResponseBody &&) = default ;
    CreateClientCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientCertificateResponseBody() = default ;
    CreateClientCertificateResponseBody& operator=(const CreateClientCertificateResponseBody &) = default ;
    CreateClientCertificateResponseBody& operator=(CreateClientCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateChain_ != nullptr
        && this->identifier_ != nullptr && this->requestId_ != nullptr && this->serialNumber_ != nullptr && this->x509Certificate_ != nullptr; };
    // certificateChain Field Functions 
    bool hasCertificateChain() const { return this->certificateChain_ != nullptr;};
    void deleteCertificateChain() { this->certificateChain_ = nullptr;};
    inline string certificateChain() const { DARABONBA_PTR_GET_DEFAULT(certificateChain_, "") };
    inline CreateClientCertificateResponseBody& setCertificateChain(string certificateChain) { DARABONBA_PTR_SET_VALUE(certificateChain_, certificateChain) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline CreateClientCertificateResponseBody& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateClientCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline CreateClientCertificateResponseBody& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // x509Certificate Field Functions 
    bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
    void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
    inline string x509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
    inline CreateClientCertificateResponseBody& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


  protected:
    // The certificate chain of the client certificate.
    std::shared_ptr<string> certificateChain_ = nullptr;
    // The unique identifier of the client certificate.
    std::shared_ptr<string> identifier_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The serial number of the certificate.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The content of the client certificate.
    std::shared_ptr<string> x509Certificate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
