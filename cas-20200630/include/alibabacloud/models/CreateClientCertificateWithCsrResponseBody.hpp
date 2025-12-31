// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTCERTIFICATEWITHCSRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTCERTIFICATEWITHCSRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateClientCertificateWithCsrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientCertificateWithCsrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertKmcRep1, certKmcRep1_);
      DARABONBA_PTR_TO_JSON(CertSignBufKmc, certSignBufKmc_);
      DARABONBA_PTR_TO_JSON(CertificateChain, certificateChain_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(X509Certificate, x509Certificate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientCertificateWithCsrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertKmcRep1, certKmcRep1_);
      DARABONBA_PTR_FROM_JSON(CertSignBufKmc, certSignBufKmc_);
      DARABONBA_PTR_FROM_JSON(CertificateChain, certificateChain_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(X509Certificate, x509Certificate_);
    };
    CreateClientCertificateWithCsrResponseBody() = default ;
    CreateClientCertificateWithCsrResponseBody(const CreateClientCertificateWithCsrResponseBody &) = default ;
    CreateClientCertificateWithCsrResponseBody(CreateClientCertificateWithCsrResponseBody &&) = default ;
    CreateClientCertificateWithCsrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientCertificateWithCsrResponseBody() = default ;
    CreateClientCertificateWithCsrResponseBody& operator=(const CreateClientCertificateWithCsrResponseBody &) = default ;
    CreateClientCertificateWithCsrResponseBody& operator=(CreateClientCertificateWithCsrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certKmcRep1_ == nullptr
        && this->certSignBufKmc_ == nullptr && this->certificateChain_ == nullptr && this->identifier_ == nullptr && this->requestId_ == nullptr && this->serialNumber_ == nullptr
        && this->x509Certificate_ == nullptr; };
    // certKmcRep1 Field Functions 
    bool hasCertKmcRep1() const { return this->certKmcRep1_ != nullptr;};
    void deleteCertKmcRep1() { this->certKmcRep1_ = nullptr;};
    inline string getCertKmcRep1() const { DARABONBA_PTR_GET_DEFAULT(certKmcRep1_, "") };
    inline CreateClientCertificateWithCsrResponseBody& setCertKmcRep1(string certKmcRep1) { DARABONBA_PTR_SET_VALUE(certKmcRep1_, certKmcRep1) };


    // certSignBufKmc Field Functions 
    bool hasCertSignBufKmc() const { return this->certSignBufKmc_ != nullptr;};
    void deleteCertSignBufKmc() { this->certSignBufKmc_ = nullptr;};
    inline string getCertSignBufKmc() const { DARABONBA_PTR_GET_DEFAULT(certSignBufKmc_, "") };
    inline CreateClientCertificateWithCsrResponseBody& setCertSignBufKmc(string certSignBufKmc) { DARABONBA_PTR_SET_VALUE(certSignBufKmc_, certSignBufKmc) };


    // certificateChain Field Functions 
    bool hasCertificateChain() const { return this->certificateChain_ != nullptr;};
    void deleteCertificateChain() { this->certificateChain_ = nullptr;};
    inline string getCertificateChain() const { DARABONBA_PTR_GET_DEFAULT(certificateChain_, "") };
    inline CreateClientCertificateWithCsrResponseBody& setCertificateChain(string certificateChain) { DARABONBA_PTR_SET_VALUE(certificateChain_, certificateChain) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline CreateClientCertificateWithCsrResponseBody& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateClientCertificateWithCsrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline CreateClientCertificateWithCsrResponseBody& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // x509Certificate Field Functions 
    bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
    void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
    inline string getX509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
    inline CreateClientCertificateWithCsrResponseBody& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


  protected:
    // CertKmcRep1.
    shared_ptr<string> certKmcRep1_ {};
    // Cert Sign Buf Kmc.
    shared_ptr<string> certSignBufKmc_ {};
    // The certificate chain of the client certificate.
    shared_ptr<string> certificateChain_ {};
    // The unique identifier of the client certificate.
    shared_ptr<string> identifier_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The serial number of the server certificate.
    shared_ptr<string> serialNumber_ {};
    // The content of the client certificate.
    shared_ptr<string> x509Certificate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
