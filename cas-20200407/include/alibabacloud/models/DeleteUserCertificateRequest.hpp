// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DeleteUserCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
    };
    DeleteUserCertificateRequest() = default ;
    DeleteUserCertificateRequest(const DeleteUserCertificateRequest &) = default ;
    DeleteUserCertificateRequest(DeleteUserCertificateRequest &&) = default ;
    DeleteUserCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserCertificateRequest() = default ;
    DeleteUserCertificateRequest& operator=(const DeleteUserCertificateRequest &) = default ;
    DeleteUserCertificateRequest& operator=(DeleteUserCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certId_ != nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline DeleteUserCertificateRequest& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


  protected:
    // The ID of the certificate.
    // 
    // >  You can call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/455804.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> certId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
