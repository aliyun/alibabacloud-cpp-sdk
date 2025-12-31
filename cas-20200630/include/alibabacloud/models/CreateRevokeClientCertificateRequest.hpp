// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREVOKECLIENTCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREVOKECLIENTCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateRevokeClientCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRevokeClientCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRevokeClientCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
    };
    CreateRevokeClientCertificateRequest() = default ;
    CreateRevokeClientCertificateRequest(const CreateRevokeClientCertificateRequest &) = default ;
    CreateRevokeClientCertificateRequest(CreateRevokeClientCertificateRequest &&) = default ;
    CreateRevokeClientCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRevokeClientCertificateRequest() = default ;
    CreateRevokeClientCertificateRequest& operator=(const CreateRevokeClientCertificateRequest &) = default ;
    CreateRevokeClientCertificateRequest& operator=(CreateRevokeClientCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline CreateRevokeClientCertificateRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


  protected:
    // The unique identifier of the client certificate or server certificate that you want to revoke.
    // 
    // >  You can call the [ListClientCertificate](https://help.aliyun.com/document_detail/330884.html) operation to query the unique identifiers of all client certificates and server certificates.
    // 
    // This parameter is required.
    shared_ptr<string> identifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
