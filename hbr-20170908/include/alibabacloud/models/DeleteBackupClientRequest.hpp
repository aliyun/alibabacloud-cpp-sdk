// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPCLIENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPCLIENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeleteBackupClientRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupClientRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupClientRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
    };
    DeleteBackupClientRequest() = default ;
    DeleteBackupClientRequest(const DeleteBackupClientRequest &) = default ;
    DeleteBackupClientRequest(DeleteBackupClientRequest &&) = default ;
    DeleteBackupClientRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupClientRequest() = default ;
    DeleteBackupClientRequest& operator=(const DeleteBackupClientRequest &) = default ;
    DeleteBackupClientRequest& operator=(DeleteBackupClientRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DeleteBackupClientRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


  protected:
    // The ID of the Cloud Backup client.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
