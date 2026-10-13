// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCONTEXTDATABASESYNCCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCONTEXTDATABASESYNCCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class VerifyContextDatabaseSyncConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyContextDatabaseSyncConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyContextDatabaseSyncConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    VerifyContextDatabaseSyncConnectionRequest() = default ;
    VerifyContextDatabaseSyncConnectionRequest(const VerifyContextDatabaseSyncConnectionRequest &) = default ;
    VerifyContextDatabaseSyncConnectionRequest(VerifyContextDatabaseSyncConnectionRequest &&) = default ;
    VerifyContextDatabaseSyncConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyContextDatabaseSyncConnectionRequest() = default ;
    VerifyContextDatabaseSyncConnectionRequest& operator=(const VerifyContextDatabaseSyncConnectionRequest &) = default ;
    VerifyContextDatabaseSyncConnectionRequest& operator=(VerifyContextDatabaseSyncConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->connectionId_ == nullptr && this->workspaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline VerifyContextDatabaseSyncConnectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline VerifyContextDatabaseSyncConnectionRequest& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline VerifyContextDatabaseSyncConnectionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
    // The connection ID, which is a system-generated UUID.
    // 
    // This parameter is required.
    shared_ptr<string> connectionId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
