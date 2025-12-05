// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    GetCertificateRequest() = default ;
    GetCertificateRequest(const GetCertificateRequest &) = default ;
    GetCertificateRequest(GetCertificateRequest &&) = default ;
    GetCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificateRequest() = default ;
    GetCertificateRequest& operator=(const GetCertificateRequest &) = default ;
    GetCertificateRequest& operator=(GetCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline GetCertificateRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // The ID of the certificate. It is the globally unique identifier (GUID) of the certificate in Certificates Manager.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
