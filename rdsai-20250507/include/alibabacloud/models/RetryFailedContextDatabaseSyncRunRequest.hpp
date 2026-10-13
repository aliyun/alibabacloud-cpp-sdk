// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYFAILEDCONTEXTDATABASESYNCRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYFAILEDCONTEXTDATABASESYNCRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class RetryFailedContextDatabaseSyncRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryFailedContextDatabaseSyncRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RunId, runId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryFailedContextDatabaseSyncRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RunId, runId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RetryFailedContextDatabaseSyncRunRequest() = default ;
    RetryFailedContextDatabaseSyncRunRequest(const RetryFailedContextDatabaseSyncRunRequest &) = default ;
    RetryFailedContextDatabaseSyncRunRequest(RetryFailedContextDatabaseSyncRunRequest &&) = default ;
    RetryFailedContextDatabaseSyncRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryFailedContextDatabaseSyncRunRequest() = default ;
    RetryFailedContextDatabaseSyncRunRequest& operator=(const RetryFailedContextDatabaseSyncRunRequest &) = default ;
    RetryFailedContextDatabaseSyncRunRequest& operator=(RetryFailedContextDatabaseSyncRunRequest &&) = default ;
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
    inline RetryFailedContextDatabaseSyncRunRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline RetryFailedContextDatabaseSyncRunRequest& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RetryFailedContextDatabaseSyncRunRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> runId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
