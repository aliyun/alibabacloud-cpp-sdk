// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELCONTEXTDATABASESYNCRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELCONTEXTDATABASESYNCRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CancelContextDatabaseSyncRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelContextDatabaseSyncRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RunId, runId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelContextDatabaseSyncRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RunId, runId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CancelContextDatabaseSyncRunRequest() = default ;
    CancelContextDatabaseSyncRunRequest(const CancelContextDatabaseSyncRunRequest &) = default ;
    CancelContextDatabaseSyncRunRequest(CancelContextDatabaseSyncRunRequest &&) = default ;
    CancelContextDatabaseSyncRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelContextDatabaseSyncRunRequest() = default ;
    CancelContextDatabaseSyncRunRequest& operator=(const CancelContextDatabaseSyncRunRequest &) = default ;
    CancelContextDatabaseSyncRunRequest& operator=(CancelContextDatabaseSyncRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->runId_ == nullptr && this->workspaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CancelContextDatabaseSyncRunRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline CancelContextDatabaseSyncRunRequest& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CancelContextDatabaseSyncRunRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The idempotence token.
    shared_ptr<string> clientToken_ {};
    // The run ID, a system-generated UUID.
    // 
    // This parameter is required.
    shared_ptr<string> runId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
