// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTEXTDATABASESYNCJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTEXTDATABASESYNCJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateContextDatabaseSyncJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContextDatabaseSyncJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_ANY_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TargetKnowledgeBaseId, targetKnowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(TargetKnowledgeBaseName, targetKnowledgeBaseName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContextDatabaseSyncJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_ANY_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TargetKnowledgeBaseId, targetKnowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(TargetKnowledgeBaseName, targetKnowledgeBaseName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateContextDatabaseSyncJobRequest() = default ;
    UpdateContextDatabaseSyncJobRequest(const UpdateContextDatabaseSyncJobRequest &) = default ;
    UpdateContextDatabaseSyncJobRequest(UpdateContextDatabaseSyncJobRequest &&) = default ;
    UpdateContextDatabaseSyncJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContextDatabaseSyncJobRequest() = default ;
    UpdateContextDatabaseSyncJobRequest& operator=(const UpdateContextDatabaseSyncJobRequest &) = default ;
    UpdateContextDatabaseSyncJobRequest& operator=(UpdateContextDatabaseSyncJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->enabled_ == nullptr && this->filters_ == nullptr && this->jobId_ == nullptr && this->name_ == nullptr && this->targetKnowledgeBaseId_ == nullptr
        && this->targetKnowledgeBaseName_ == nullptr && this->workspaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateContextDatabaseSyncJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateContextDatabaseSyncJobRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline     const Darabonba::Json & getFilters() const { DARABONBA_GET(filters_) };
    Darabonba::Json & getFilters() { DARABONBA_GET(filters_) };
    inline UpdateContextDatabaseSyncJobRequest& setFilters(const Darabonba::Json & filters) { DARABONBA_SET_VALUE(filters_, filters) };
    inline UpdateContextDatabaseSyncJobRequest& setFilters(Darabonba::Json && filters) { DARABONBA_SET_RVALUE(filters_, filters) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline UpdateContextDatabaseSyncJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateContextDatabaseSyncJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // targetKnowledgeBaseId Field Functions 
    bool hasTargetKnowledgeBaseId() const { return this->targetKnowledgeBaseId_ != nullptr;};
    void deleteTargetKnowledgeBaseId() { this->targetKnowledgeBaseId_ = nullptr;};
    inline string getTargetKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(targetKnowledgeBaseId_, "") };
    inline UpdateContextDatabaseSyncJobRequest& setTargetKnowledgeBaseId(string targetKnowledgeBaseId) { DARABONBA_PTR_SET_VALUE(targetKnowledgeBaseId_, targetKnowledgeBaseId) };


    // targetKnowledgeBaseName Field Functions 
    bool hasTargetKnowledgeBaseName() const { return this->targetKnowledgeBaseName_ != nullptr;};
    void deleteTargetKnowledgeBaseName() { this->targetKnowledgeBaseName_ = nullptr;};
    inline string getTargetKnowledgeBaseName() const { DARABONBA_PTR_GET_DEFAULT(targetKnowledgeBaseName_, "") };
    inline UpdateContextDatabaseSyncJobRequest& setTargetKnowledgeBaseName(string targetKnowledgeBaseName) { DARABONBA_PTR_SET_VALUE(targetKnowledgeBaseName_, targetKnowledgeBaseName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateContextDatabaseSyncJobRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<bool> enabled_ {};
    Darabonba::Json filters_ {};
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> targetKnowledgeBaseId_ {};
    shared_ptr<string> targetKnowledgeBaseName_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
