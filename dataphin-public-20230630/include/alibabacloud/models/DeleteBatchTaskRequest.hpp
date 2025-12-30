// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBATCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBATCHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteBatchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBatchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBatchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteBatchTaskRequest() = default ;
    DeleteBatchTaskRequest(const DeleteBatchTaskRequest &) = default ;
    DeleteBatchTaskRequest(DeleteBatchTaskRequest &&) = default ;
    DeleteBatchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBatchTaskRequest() = default ;
    DeleteBatchTaskRequest& operator=(const DeleteBatchTaskRequest &) = default ;
    DeleteBatchTaskRequest& operator=(DeleteBatchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      DeleteCommand() = default ;
      DeleteCommand(const DeleteCommand &) = default ;
      DeleteCommand(DeleteCommand &&) = default ;
      DeleteCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteCommand() = default ;
      DeleteCommand& operator=(const DeleteCommand &) = default ;
      DeleteCommand& operator=(DeleteCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->fileId_ == nullptr && this->projectId_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline DeleteCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
      inline DeleteCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline DeleteCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // This parameter is required.
      shared_ptr<string> comment_ {};
      // This parameter is required.
      shared_ptr<int64_t> fileId_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->deleteCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteCommand Field Functions 
    bool hasDeleteCommand() const { return this->deleteCommand_ != nullptr;};
    void deleteDeleteCommand() { this->deleteCommand_ = nullptr;};
    inline const DeleteBatchTaskRequest::DeleteCommand & getDeleteCommand() const { DARABONBA_PTR_GET_CONST(deleteCommand_, DeleteBatchTaskRequest::DeleteCommand) };
    inline DeleteBatchTaskRequest::DeleteCommand getDeleteCommand() { DARABONBA_PTR_GET(deleteCommand_, DeleteBatchTaskRequest::DeleteCommand) };
    inline DeleteBatchTaskRequest& setDeleteCommand(const DeleteBatchTaskRequest::DeleteCommand & deleteCommand) { DARABONBA_PTR_SET_VALUE(deleteCommand_, deleteCommand) };
    inline DeleteBatchTaskRequest& setDeleteCommand(DeleteBatchTaskRequest::DeleteCommand && deleteCommand) { DARABONBA_PTR_SET_RVALUE(deleteCommand_, deleteCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteBatchTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteBatchTaskRequest::DeleteCommand> deleteCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
