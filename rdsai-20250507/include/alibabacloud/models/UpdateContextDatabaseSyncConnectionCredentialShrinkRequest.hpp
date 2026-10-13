// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTEXTDATABASESYNCCONNECTIONCREDENTIALSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTEXTDATABASESYNCCONNECTIONCREDENTIALSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateContextDatabaseSyncConnectionCredentialShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContextDatabaseSyncConnectionCredentialShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(Credentials, credentialsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContextDatabaseSyncConnectionCredentialShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentialsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateContextDatabaseSyncConnectionCredentialShrinkRequest() = default ;
    UpdateContextDatabaseSyncConnectionCredentialShrinkRequest(const UpdateContextDatabaseSyncConnectionCredentialShrinkRequest &) = default ;
    UpdateContextDatabaseSyncConnectionCredentialShrinkRequest(UpdateContextDatabaseSyncConnectionCredentialShrinkRequest &&) = default ;
    UpdateContextDatabaseSyncConnectionCredentialShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContextDatabaseSyncConnectionCredentialShrinkRequest() = default ;
    UpdateContextDatabaseSyncConnectionCredentialShrinkRequest& operator=(const UpdateContextDatabaseSyncConnectionCredentialShrinkRequest &) = default ;
    UpdateContextDatabaseSyncConnectionCredentialShrinkRequest& operator=(UpdateContextDatabaseSyncConnectionCredentialShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->connectionId_ == nullptr && this->credentialsShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateContextDatabaseSyncConnectionCredentialShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline UpdateContextDatabaseSyncConnectionCredentialShrinkRequest& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // credentialsShrink Field Functions 
    bool hasCredentialsShrink() const { return this->credentialsShrink_ != nullptr;};
    void deleteCredentialsShrink() { this->credentialsShrink_ = nullptr;};
    inline string getCredentialsShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialsShrink_, "") };
    inline UpdateContextDatabaseSyncConnectionCredentialShrinkRequest& setCredentialsShrink(string credentialsShrink) { DARABONBA_PTR_SET_VALUE(credentialsShrink_, credentialsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateContextDatabaseSyncConnectionCredentialShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> connectionId_ {};
    // This parameter is required.
    shared_ptr<string> credentialsShrink_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
