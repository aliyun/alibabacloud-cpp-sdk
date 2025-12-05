// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DeleteCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    DeleteCertificateRequest() = default ;
    DeleteCertificateRequest(const DeleteCertificateRequest &) = default ;
    DeleteCertificateRequest(DeleteCertificateRequest &&) = default ;
    DeleteCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCertificateRequest() = default ;
    DeleteCertificateRequest& operator=(const DeleteCertificateRequest &) = default ;
    DeleteCertificateRequest& operator=(DeleteCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline DeleteCertificateRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // The ID of the certificate. It is the globally unique identifier (GUID) of the certificate in Alibaba Cloud Certificate Manager.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
