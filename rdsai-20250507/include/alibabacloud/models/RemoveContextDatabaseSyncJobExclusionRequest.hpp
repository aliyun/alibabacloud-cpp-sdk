// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVECONTEXTDATABASESYNCJOBEXCLUSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVECONTEXTDATABASESYNCJOBEXCLUSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class RemoveContextDatabaseSyncJobExclusionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveContextDatabaseSyncJobExclusionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveContextDatabaseSyncJobExclusionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RemoveContextDatabaseSyncJobExclusionRequest() = default ;
    RemoveContextDatabaseSyncJobExclusionRequest(const RemoveContextDatabaseSyncJobExclusionRequest &) = default ;
    RemoveContextDatabaseSyncJobExclusionRequest(RemoveContextDatabaseSyncJobExclusionRequest &&) = default ;
    RemoveContextDatabaseSyncJobExclusionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveContextDatabaseSyncJobExclusionRequest() = default ;
    RemoveContextDatabaseSyncJobExclusionRequest& operator=(const RemoveContextDatabaseSyncJobExclusionRequest &) = default ;
    RemoveContextDatabaseSyncJobExclusionRequest& operator=(RemoveContextDatabaseSyncJobExclusionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->documentId_ == nullptr && this->jobId_ == nullptr && this->workspaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveContextDatabaseSyncJobExclusionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
    inline RemoveContextDatabaseSyncJobExclusionRequest& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline RemoveContextDatabaseSyncJobExclusionRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RemoveContextDatabaseSyncJobExclusionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
    // The document ID.
    // 
    // This parameter is required.
    shared_ptr<string> documentId_ {};
    // The job ID, which is a system-generated UUID.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
