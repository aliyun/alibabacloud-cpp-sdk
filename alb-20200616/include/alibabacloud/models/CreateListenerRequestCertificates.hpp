// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELISTENERREQUESTCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_CREATELISTENERREQUESTCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateListenerRequestCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateListenerRequestCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateListenerRequestCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    CreateListenerRequestCertificates() = default ;
    CreateListenerRequestCertificates(const CreateListenerRequestCertificates &) = default ;
    CreateListenerRequestCertificates(CreateListenerRequestCertificates &&) = default ;
    CreateListenerRequestCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateListenerRequestCertificates() = default ;
    CreateListenerRequestCertificates& operator=(const CreateListenerRequestCertificates &) = default ;
    CreateListenerRequestCertificates& operator=(CreateListenerRequestCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateId_ != nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline CreateListenerRequestCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // The ID of the certificate. Only server certificates are supported. You can specify up to 20 certificate IDs.
    std::shared_ptr<string> certificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
