// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEM0MEMORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEM0MEMORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class DeleteMem0MemoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMem0MemoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_TO_JSON(agent_id, agentId_);
      DARABONBA_PTR_TO_JSON(app_id, appId_);
      DARABONBA_PTR_TO_JSON(context_store_id, contextStoreId_);
      DARABONBA_ANY_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(org_id, orgId_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(run_id, runId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMem0MemoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_FROM_JSON(agent_id, agentId_);
      DARABONBA_PTR_FROM_JSON(app_id, appId_);
      DARABONBA_PTR_FROM_JSON(context_store_id, contextStoreId_);
      DARABONBA_ANY_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(org_id, orgId_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(run_id, runId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    DeleteMem0MemoriesRequest() = default ;
    DeleteMem0MemoriesRequest(const DeleteMem0MemoriesRequest &) = default ;
    DeleteMem0MemoriesRequest(DeleteMem0MemoriesRequest &&) = default ;
    DeleteMem0MemoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMem0MemoriesRequest() = default ;
    DeleteMem0MemoriesRequest& operator=(const DeleteMem0MemoriesRequest &) = default ;
    DeleteMem0MemoriesRequest& operator=(DeleteMem0MemoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->agentId_ == nullptr && this->appId_ == nullptr && this->contextStoreId_ == nullptr && this->metadata_ == nullptr && this->orgId_ == nullptr
        && this->projectId_ == nullptr && this->runId_ == nullptr && this->userId_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline DeleteMem0MemoriesRequest& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DeleteMem0MemoriesRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteMem0MemoriesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // contextStoreId Field Functions 
    bool hasContextStoreId() const { return this->contextStoreId_ != nullptr;};
    void deleteContextStoreId() { this->contextStoreId_ = nullptr;};
    inline string getContextStoreId() const { DARABONBA_PTR_GET_DEFAULT(contextStoreId_, "") };
    inline DeleteMem0MemoriesRequest& setContextStoreId(string contextStoreId) { DARABONBA_PTR_SET_VALUE(contextStoreId_, contextStoreId) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline DeleteMem0MemoriesRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline DeleteMem0MemoriesRequest& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline DeleteMem0MemoriesRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DeleteMem0MemoriesRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline DeleteMem0MemoriesRequest& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DeleteMem0MemoriesRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> agentSpace_ {};
    shared_ptr<string> agentId_ {};
    shared_ptr<string> appId_ {};
    shared_ptr<string> contextStoreId_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> orgId_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> runId_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
