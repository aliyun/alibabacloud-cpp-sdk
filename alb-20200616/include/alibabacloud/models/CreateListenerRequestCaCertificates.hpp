// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELISTENERREQUESTCACERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_CREATELISTENERREQUESTCACERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateListenerRequestCaCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateListenerRequestCaCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateListenerRequestCaCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    CreateListenerRequestCaCertificates() = default ;
    CreateListenerRequestCaCertificates(const CreateListenerRequestCaCertificates &) = default ;
    CreateListenerRequestCaCertificates(CreateListenerRequestCaCertificates &&) = default ;
    CreateListenerRequestCaCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateListenerRequestCaCertificates() = default ;
    CreateListenerRequestCaCertificates& operator=(const CreateListenerRequestCaCertificates &) = default ;
    CreateListenerRequestCaCertificates& operator=(CreateListenerRequestCaCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateId_ != nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline CreateListenerRequestCaCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // The ID of the CA certificate.
    // 
    // >  This parameter is required if **CaEnabled** is set to **true**.
    std::shared_ptr<string> certificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
