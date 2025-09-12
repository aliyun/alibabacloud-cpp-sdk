// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateExternalCACertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalCACertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(CertificateChain, certificateChain_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalCACertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(CertificateChain, certificateChain_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateExternalCACertificateResponseBody() = default ;
    CreateExternalCACertificateResponseBody(const CreateExternalCACertificateResponseBody &) = default ;
    CreateExternalCACertificateResponseBody(CreateExternalCACertificateResponseBody &&) = default ;
    CreateExternalCACertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalCACertificateResponseBody() = default ;
    CreateExternalCACertificateResponseBody& operator=(const CreateExternalCACertificateResponseBody &) = default ;
    CreateExternalCACertificateResponseBody& operator=(CreateExternalCACertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificate_ != nullptr
        && this->certificateChain_ != nullptr && this->identifier_ != nullptr && this->requestId_ != nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline CreateExternalCACertificateResponseBody& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // certificateChain Field Functions 
    bool hasCertificateChain() const { return this->certificateChain_ != nullptr;};
    void deleteCertificateChain() { this->certificateChain_ = nullptr;};
    inline string certificateChain() const { DARABONBA_PTR_GET_DEFAULT(certificateChain_, "") };
    inline CreateExternalCACertificateResponseBody& setCertificateChain(string certificateChain) { DARABONBA_PTR_SET_VALUE(certificateChain_, certificateChain) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline CreateExternalCACertificateResponseBody& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateExternalCACertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> certificate_ = nullptr;
    std::shared_ptr<string> certificateChain_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
