// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEADDITIONALCERTIFICATESWITHLISTENERREQUESTCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEADDITIONALCERTIFICATESWITHLISTENERREQUESTCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class AssociateAdditionalCertificatesWithListenerRequestCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateAdditionalCertificatesWithListenerRequestCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateAdditionalCertificatesWithListenerRequestCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    AssociateAdditionalCertificatesWithListenerRequestCertificates() = default ;
    AssociateAdditionalCertificatesWithListenerRequestCertificates(const AssociateAdditionalCertificatesWithListenerRequestCertificates &) = default ;
    AssociateAdditionalCertificatesWithListenerRequestCertificates(AssociateAdditionalCertificatesWithListenerRequestCertificates &&) = default ;
    AssociateAdditionalCertificatesWithListenerRequestCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateAdditionalCertificatesWithListenerRequestCertificates() = default ;
    AssociateAdditionalCertificatesWithListenerRequestCertificates& operator=(const AssociateAdditionalCertificatesWithListenerRequestCertificates &) = default ;
    AssociateAdditionalCertificatesWithListenerRequestCertificates& operator=(AssociateAdditionalCertificatesWithListenerRequestCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateId_ != nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline AssociateAdditionalCertificatesWithListenerRequestCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // The ID of the certificate. Only server certificates are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
