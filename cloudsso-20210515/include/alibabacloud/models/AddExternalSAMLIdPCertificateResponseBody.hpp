// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEXTERNALSAMLIDPCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDEXTERNALSAMLIDPCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class AddExternalSAMLIdPCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddExternalSAMLIdPCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddExternalSAMLIdPCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddExternalSAMLIdPCertificateResponseBody() = default ;
    AddExternalSAMLIdPCertificateResponseBody(const AddExternalSAMLIdPCertificateResponseBody &) = default ;
    AddExternalSAMLIdPCertificateResponseBody(AddExternalSAMLIdPCertificateResponseBody &&) = default ;
    AddExternalSAMLIdPCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddExternalSAMLIdPCertificateResponseBody() = default ;
    AddExternalSAMLIdPCertificateResponseBody& operator=(const AddExternalSAMLIdPCertificateResponseBody &) = default ;
    AddExternalSAMLIdPCertificateResponseBody& operator=(AddExternalSAMLIdPCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && this->requestId_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline AddExternalSAMLIdPCertificateResponseBody& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddExternalSAMLIdPCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the SAML signing certificate.
    shared_ptr<string> certificateId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
