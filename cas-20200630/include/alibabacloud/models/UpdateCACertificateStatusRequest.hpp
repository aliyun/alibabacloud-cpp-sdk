// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECACERTIFICATESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECACERTIFICATESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class UpdateCACertificateStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCACertificateStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCACertificateStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateCACertificateStatusRequest() = default ;
    UpdateCACertificateStatusRequest(const UpdateCACertificateStatusRequest &) = default ;
    UpdateCACertificateStatusRequest(UpdateCACertificateStatusRequest &&) = default ;
    UpdateCACertificateStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCACertificateStatusRequest() = default ;
    UpdateCACertificateStatusRequest& operator=(const UpdateCACertificateStatusRequest &) = default ;
    UpdateCACertificateStatusRequest& operator=(UpdateCACertificateStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->identifier_ == nullptr && this->status_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCACertificateStatusRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline UpdateCACertificateStatusRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateCACertificateStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // A client token used to ensure the idempotence of the request.
    // 
    // Generate a unique parameter value from your client for each request. The ClientToken parameter supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // The unique identifier of the CA certificate.
    // 
    // > Call [DescribeCACertificateList](https://help.aliyun.com/document_detail/465957.html) to query the unique identifiers of all CA certificates.
    // 
    // This parameter is required.
    shared_ptr<string> identifier_ {};
    // The operation to perform on the CA certificate. Set the value to **REVOKE**. This revokes the CA certificate and changes its status to **REVOKE**.
    // 
    // > This operation is supported only when the CA certificate is in the **ISSUE** state. Call [DescribeCACertificate](https://help.aliyun.com/document_detail/465954.html) to query the current status of the CA certificate.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
