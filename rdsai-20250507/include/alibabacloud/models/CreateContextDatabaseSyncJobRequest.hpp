// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTEXTDATABASESYNCJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTEXTDATABASESYNCJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateContextDatabaseSyncJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContextDatabaseSyncJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_ANY_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetKnowledgeBaseId, targetKnowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(TargetKnowledgeBaseName, targetKnowledgeBaseName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContextDatabaseSyncJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_ANY_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetKnowledgeBaseId, targetKnowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(TargetKnowledgeBaseName, targetKnowledgeBaseName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateContextDatabaseSyncJobRequest() = default ;
    CreateContextDatabaseSyncJobRequest(const CreateContextDatabaseSyncJobRequest &) = default ;
    CreateContextDatabaseSyncJobRequest(CreateContextDatabaseSyncJobRequest &&) = default ;
    CreateContextDatabaseSyncJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContextDatabaseSyncJobRequest() = default ;
    CreateContextDatabaseSyncJobRequest& operator=(const CreateContextDatabaseSyncJobRequest &) = default ;
    CreateContextDatabaseSyncJobRequest& operator=(CreateContextDatabaseSyncJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->filters_ == nullptr && this->knowledgeBaseId_ == nullptr && this->name_ == nullptr && this->sourceId_ == nullptr && this->targetId_ == nullptr
        && this->targetKnowledgeBaseId_ == nullptr && this->targetKnowledgeBaseName_ == nullptr && this->workspaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateContextDatabaseSyncJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline     const Darabonba::Json & getFilters() const { DARABONBA_GET(filters_) };
    Darabonba::Json & getFilters() { DARABONBA_GET(filters_) };
    inline CreateContextDatabaseSyncJobRequest& setFilters(const Darabonba::Json & filters) { DARABONBA_SET_VALUE(filters_, filters) };
    inline CreateContextDatabaseSyncJobRequest& setFilters(Darabonba::Json && filters) { DARABONBA_SET_RVALUE(filters_, filters) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline CreateContextDatabaseSyncJobRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateContextDatabaseSyncJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateContextDatabaseSyncJobRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline CreateContextDatabaseSyncJobRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetKnowledgeBaseId Field Functions 
    bool hasTargetKnowledgeBaseId() const { return this->targetKnowledgeBaseId_ != nullptr;};
    void deleteTargetKnowledgeBaseId() { this->targetKnowledgeBaseId_ = nullptr;};
    inline string getTargetKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(targetKnowledgeBaseId_, "") };
    inline CreateContextDatabaseSyncJobRequest& setTargetKnowledgeBaseId(string targetKnowledgeBaseId) { DARABONBA_PTR_SET_VALUE(targetKnowledgeBaseId_, targetKnowledgeBaseId) };


    // targetKnowledgeBaseName Field Functions 
    bool hasTargetKnowledgeBaseName() const { return this->targetKnowledgeBaseName_ != nullptr;};
    void deleteTargetKnowledgeBaseName() { this->targetKnowledgeBaseName_ = nullptr;};
    inline string getTargetKnowledgeBaseName() const { DARABONBA_PTR_GET_DEFAULT(targetKnowledgeBaseName_, "") };
    inline CreateContextDatabaseSyncJobRequest& setTargetKnowledgeBaseName(string targetKnowledgeBaseName) { DARABONBA_PTR_SET_VALUE(targetKnowledgeBaseName_, targetKnowledgeBaseName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateContextDatabaseSyncJobRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The idempotence token.
    shared_ptr<string> clientToken_ {};
    // The filter conditions.
    Darabonba::Json filters_ {};
    // The ID of the target knowledge base.
    shared_ptr<string> knowledgeBaseId_ {};
    // The name of the import task.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The data source ID, a UUID generated by the system.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The target ID, a UUID generated by the system.
    shared_ptr<string> targetId_ {};
    // The target knowledge base ID.
    shared_ptr<string> targetKnowledgeBaseId_ {};
    // The target knowledge base name.
    shared_ptr<string> targetKnowledgeBaseName_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
