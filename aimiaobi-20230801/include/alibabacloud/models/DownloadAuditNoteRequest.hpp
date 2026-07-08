// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADAUDITNOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADAUDITNOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class DownloadAuditNoteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadAuditNoteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadAuditNoteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DownloadAuditNoteRequest() = default ;
    DownloadAuditNoteRequest(const DownloadAuditNoteRequest &) = default ;
    DownloadAuditNoteRequest(DownloadAuditNoteRequest &&) = default ;
    DownloadAuditNoteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadAuditNoteRequest() = default ;
    DownloadAuditNoteRequest& operator=(const DownloadAuditNoteRequest &) = default ;
    DownloadAuditNoteRequest& operator=(DownloadAuditNoteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->noteId_ == nullptr
        && this->taskId_ == nullptr && this->workspaceId_ == nullptr; };
    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline string getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
    inline DownloadAuditNoteRequest& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DownloadAuditNoteRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DownloadAuditNoteRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Rule library ID. If left blank, the default is Default.
    shared_ptr<string> noteId_ {};
    // The task ID obtained by calling the SubmitAuditNote API. This is the unique identifier for the custom rule library task index. Store it securely when using it. When using this API, if the input parameters include \\`taskId\\`, you can retrieve the structured rule library that you successfully uploaded via the SubmitAuditNote API but has not undergone post-processing by ConfirmAndProcessAuditNote. If the input parameters do not include \\`taskId\\`, you can retrieve the structured rule library that has undergone post-processing and is available for auditing.
    shared_ptr<string> taskId_ {};
    // The unique identifier of the Alibaba Cloud Model Studio workspace. Get the [Workspace ID](https://help.aliyun.com/document_detail/2782167.html).
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
