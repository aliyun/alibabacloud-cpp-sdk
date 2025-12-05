// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECERTIFICATESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECERTIFICATESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateCertificateStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCertificateStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCertificateStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateCertificateStatusRequest() = default ;
    UpdateCertificateStatusRequest(const UpdateCertificateStatusRequest &) = default ;
    UpdateCertificateStatusRequest(UpdateCertificateStatusRequest &&) = default ;
    UpdateCertificateStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCertificateStatusRequest() = default ;
    UpdateCertificateStatusRequest& operator=(const UpdateCertificateStatusRequest &) = default ;
    UpdateCertificateStatusRequest& operator=(UpdateCertificateStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && return this->status_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline UpdateCertificateStatusRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateCertificateStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the certificate. The ID must be globally unique in Certificates Manager.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The status of the certificate. Valid values:
    // 
    // *   INACTIVE: The certificate is disabled.
    // 
    // *   ACTIVE: The certificate is enabled.
    // 
    // *   REVOKED: The certificate is revoked.
    // 
    // > If the certificate is in the REVOKED state, you can use the certificate only to verify a signature, but not to generate a signature.
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
