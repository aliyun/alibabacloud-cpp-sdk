// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISSOCIATEADDITIONALCERTIFICATESFROMLISTENERREQUESTCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_DISSOCIATEADDITIONALCERTIFICATESFROMLISTENERREQUESTCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class DissociateAdditionalCertificatesFromListenerRequestCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DissociateAdditionalCertificatesFromListenerRequestCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, DissociateAdditionalCertificatesFromListenerRequestCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    DissociateAdditionalCertificatesFromListenerRequestCertificates() = default ;
    DissociateAdditionalCertificatesFromListenerRequestCertificates(const DissociateAdditionalCertificatesFromListenerRequestCertificates &) = default ;
    DissociateAdditionalCertificatesFromListenerRequestCertificates(DissociateAdditionalCertificatesFromListenerRequestCertificates &&) = default ;
    DissociateAdditionalCertificatesFromListenerRequestCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DissociateAdditionalCertificatesFromListenerRequestCertificates() = default ;
    DissociateAdditionalCertificatesFromListenerRequestCertificates& operator=(const DissociateAdditionalCertificatesFromListenerRequestCertificates &) = default ;
    DissociateAdditionalCertificatesFromListenerRequestCertificates& operator=(DissociateAdditionalCertificatesFromListenerRequestCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateId_ != nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline DissociateAdditionalCertificatesFromListenerRequestCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // The certificate ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
