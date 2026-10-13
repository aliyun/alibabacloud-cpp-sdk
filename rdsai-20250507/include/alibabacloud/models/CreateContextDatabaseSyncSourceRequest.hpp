// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTEXTDATABASESYNCSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTEXTDATABASESYNCSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateContextDatabaseSyncSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContextDatabaseSyncSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(SourceConfig, sourceConfig_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContextDatabaseSyncSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(SourceConfig, sourceConfig_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateContextDatabaseSyncSourceRequest() = default ;
    CreateContextDatabaseSyncSourceRequest(const CreateContextDatabaseSyncSourceRequest &) = default ;
    CreateContextDatabaseSyncSourceRequest(CreateContextDatabaseSyncSourceRequest &&) = default ;
    CreateContextDatabaseSyncSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContextDatabaseSyncSourceRequest() = default ;
    CreateContextDatabaseSyncSourceRequest& operator=(const CreateContextDatabaseSyncSourceRequest &) = default ;
    CreateContextDatabaseSyncSourceRequest& operator=(CreateContextDatabaseSyncSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->connectionId_ == nullptr && this->name_ == nullptr && this->sourceConfig_ == nullptr && this->workspaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateContextDatabaseSyncSourceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline CreateContextDatabaseSyncSourceRequest& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateContextDatabaseSyncSourceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceConfig Field Functions 
    bool hasSourceConfig() const { return this->sourceConfig_ != nullptr;};
    void deleteSourceConfig() { this->sourceConfig_ = nullptr;};
    inline     const Darabonba::Json & getSourceConfig() const { DARABONBA_GET(sourceConfig_) };
    Darabonba::Json & getSourceConfig() { DARABONBA_GET(sourceConfig_) };
    inline CreateContextDatabaseSyncSourceRequest& setSourceConfig(const Darabonba::Json & sourceConfig) { DARABONBA_SET_VALUE(sourceConfig_, sourceConfig) };
    inline CreateContextDatabaseSyncSourceRequest& setSourceConfig(Darabonba::Json && sourceConfig) { DARABONBA_SET_RVALUE(sourceConfig_, sourceConfig) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateContextDatabaseSyncSourceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


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
    Darabonba::Json sourceConfig_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
