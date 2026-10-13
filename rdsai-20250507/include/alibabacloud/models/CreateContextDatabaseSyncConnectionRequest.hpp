// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTEXTDATABASESYNCCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTEXTDATABASESYNCCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateContextDatabaseSyncConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContextDatabaseSyncConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKind, authKind_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContextDatabaseSyncConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKind, authKind_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateContextDatabaseSyncConnectionRequest() = default ;
    CreateContextDatabaseSyncConnectionRequest(const CreateContextDatabaseSyncConnectionRequest &) = default ;
    CreateContextDatabaseSyncConnectionRequest(CreateContextDatabaseSyncConnectionRequest &&) = default ;
    CreateContextDatabaseSyncConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContextDatabaseSyncConnectionRequest() = default ;
    CreateContextDatabaseSyncConnectionRequest& operator=(const CreateContextDatabaseSyncConnectionRequest &) = default ;
    CreateContextDatabaseSyncConnectionRequest& operator=(CreateContextDatabaseSyncConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authKind_ == nullptr
        && this->clientToken_ == nullptr && this->displayName_ == nullptr && this->pluginId_ == nullptr && this->workspaceId_ == nullptr; };
    // authKind Field Functions 
    bool hasAuthKind() const { return this->authKind_ != nullptr;};
    void deleteAuthKind() { this->authKind_ = nullptr;};
    inline string getAuthKind() const { DARABONBA_PTR_GET_DEFAULT(authKind_, "") };
    inline CreateContextDatabaseSyncConnectionRequest& setAuthKind(string authKind) { DARABONBA_PTR_SET_VALUE(authKind_, authKind) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateContextDatabaseSyncConnectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateContextDatabaseSyncConnectionRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline CreateContextDatabaseSyncConnectionRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateContextDatabaseSyncConnectionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The authorization method. Valid values: app, pasted-url, static-secret, and none.
    // 
    // This parameter is required.
    shared_ptr<string> authKind_ {};
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
    // The display name.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // The plugin ID.
    // 
    // This parameter is required.
    shared_ptr<string> pluginId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
