// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAUDITNOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAUDITNOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class DeleteAuditNoteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAuditNoteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAuditNoteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteAuditNoteRequest() = default ;
    DeleteAuditNoteRequest(const DeleteAuditNoteRequest &) = default ;
    DeleteAuditNoteRequest(DeleteAuditNoteRequest &&) = default ;
    DeleteAuditNoteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAuditNoteRequest() = default ;
    DeleteAuditNoteRequest& operator=(const DeleteAuditNoteRequest &) = default ;
    DeleteAuditNoteRequest& operator=(DeleteAuditNoteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->noteId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline string getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
    inline DeleteAuditNoteRequest& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteAuditNoteRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> noteId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
