// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTEXTDATABASESYNCSOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTEXTDATABASESYNCSOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateContextDatabaseSyncSourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContextDatabaseSyncSourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SourceConfig, sourceConfigShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContextDatabaseSyncSourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SourceConfig, sourceConfigShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateContextDatabaseSyncSourceShrinkRequest() = default ;
    CreateContextDatabaseSyncSourceShrinkRequest(const CreateContextDatabaseSyncSourceShrinkRequest &) = default ;
    CreateContextDatabaseSyncSourceShrinkRequest(CreateContextDatabaseSyncSourceShrinkRequest &&) = default ;
    CreateContextDatabaseSyncSourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContextDatabaseSyncSourceShrinkRequest() = default ;
    CreateContextDatabaseSyncSourceShrinkRequest& operator=(const CreateContextDatabaseSyncSourceShrinkRequest &) = default ;
    CreateContextDatabaseSyncSourceShrinkRequest& operator=(CreateContextDatabaseSyncSourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->connectionId_ == nullptr && this->name_ == nullptr && this->sourceConfigShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateContextDatabaseSyncSourceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline CreateContextDatabaseSyncSourceShrinkRequest& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateContextDatabaseSyncSourceShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceConfigShrink Field Functions 
    bool hasSourceConfigShrink() const { return this->sourceConfigShrink_ != nullptr;};
    void deleteSourceConfigShrink() { this->sourceConfigShrink_ = nullptr;};
    inline string getSourceConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceConfigShrink_, "") };
    inline CreateContextDatabaseSyncSourceShrinkRequest& setSourceConfigShrink(string sourceConfigShrink) { DARABONBA_PTR_SET_VALUE(sourceConfigShrink_, sourceConfigShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateContextDatabaseSyncSourceShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The idempotence token.
    shared_ptr<string> clientToken_ {};
    // The connection ID, a system-generated UUID.
    // 
    // This parameter is required.
    shared_ptr<string> connectionId_ {};
    // The name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The datasource config. The structure varies depending on the plug-in.
    // 
    // This parameter is required.
    shared_ptr<string> sourceConfigShrink_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
