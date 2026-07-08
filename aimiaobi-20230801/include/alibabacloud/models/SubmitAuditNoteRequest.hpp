// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAUDITNOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAUDITNOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitAuditNoteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAuditNoteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAuditNoteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitAuditNoteRequest() = default ;
    SubmitAuditNoteRequest(const SubmitAuditNoteRequest &) = default ;
    SubmitAuditNoteRequest(SubmitAuditNoteRequest &&) = default ;
    SubmitAuditNoteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAuditNoteRequest() = default ;
    SubmitAuditNoteRequest& operator=(const SubmitAuditNoteRequest &) = default ;
    SubmitAuditNoteRequest& operator=(SubmitAuditNoteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileKey_ == nullptr
        && this->noteId_ == nullptr && this->workspaceId_ == nullptr; };
    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string getFileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline SubmitAuditNoteRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline string getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
    inline SubmitAuditNoteRequest& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitAuditNoteRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The FileKey of your rule library file stored in Alibaba Cloud OSS. For how to generate a FileKey, see [Common APIs: GenerateUploadConfig for File Upload and Download](https://next.api.aliyun.com/document/AiMiaoBi/2023-08-01/GenerateUploadConfig?spm=openapi-amp.newDocPublishment.0.0.18fc281fOiiBil). Your rule library file must be in DOCX, XLSX, or PDF format. If you use XLSX, it must have exactly two columns. The table header must be "Proofreading Basis" and "Source". XLSX files give the best parsing results. DOCX and PDF files are also parsed automatically.
    // 
    // This parameter is required.
    shared_ptr<string> fileKey_ {};
    // ID of the rule library. If you omit this parameter, the system uses Default.
    shared_ptr<string> noteId_ {};
    // Unique identifier of your Model Studio workspace. To get this ID, see [Get the Workspace ID](https://help.aliyun.com/document_detail/2782167.html).
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
