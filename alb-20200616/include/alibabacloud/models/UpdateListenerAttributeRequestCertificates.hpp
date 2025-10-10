// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUESTCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUESTCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateListenerAttributeRequestCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListenerAttributeRequestCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListenerAttributeRequestCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    UpdateListenerAttributeRequestCertificates() = default ;
    UpdateListenerAttributeRequestCertificates(const UpdateListenerAttributeRequestCertificates &) = default ;
    UpdateListenerAttributeRequestCertificates(UpdateListenerAttributeRequestCertificates &&) = default ;
    UpdateListenerAttributeRequestCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListenerAttributeRequestCertificates() = default ;
    UpdateListenerAttributeRequestCertificates& operator=(const UpdateListenerAttributeRequestCertificates &) = default ;
    UpdateListenerAttributeRequestCertificates& operator=(UpdateListenerAttributeRequestCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateId_ != nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline UpdateListenerAttributeRequestCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // The certificate ID.
    std::shared_ptr<string> certificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
