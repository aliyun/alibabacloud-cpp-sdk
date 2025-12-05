// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLIENTKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLIENTKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DeleteClientKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClientKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientKeyId, clientKeyId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClientKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientKeyId, clientKeyId_);
    };
    DeleteClientKeyRequest() = default ;
    DeleteClientKeyRequest(const DeleteClientKeyRequest &) = default ;
    DeleteClientKeyRequest(DeleteClientKeyRequest &&) = default ;
    DeleteClientKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClientKeyRequest() = default ;
    DeleteClientKeyRequest& operator=(const DeleteClientKeyRequest &) = default ;
    DeleteClientKeyRequest& operator=(DeleteClientKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientKeyId_ == nullptr; };
    // clientKeyId Field Functions 
    bool hasClientKeyId() const { return this->clientKeyId_ != nullptr;};
    void deleteClientKeyId() { this->clientKeyId_ = nullptr;};
    inline string clientKeyId() const { DARABONBA_PTR_GET_DEFAULT(clientKeyId_, "") };
    inline DeleteClientKeyRequest& setClientKeyId(string clientKeyId) { DARABONBA_PTR_SET_VALUE(clientKeyId_, clientKeyId) };


  protected:
    // The ID of the client key.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientKeyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
