// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBATCHTASKREQUESTDELETECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_DELETEBATCHTASKREQUESTDELETECOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteBatchTaskRequestDeleteCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBatchTaskRequestDeleteCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBatchTaskRequestDeleteCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    DeleteBatchTaskRequestDeleteCommand() = default ;
    DeleteBatchTaskRequestDeleteCommand(const DeleteBatchTaskRequestDeleteCommand &) = default ;
    DeleteBatchTaskRequestDeleteCommand(DeleteBatchTaskRequestDeleteCommand &&) = default ;
    DeleteBatchTaskRequestDeleteCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBatchTaskRequestDeleteCommand() = default ;
    DeleteBatchTaskRequestDeleteCommand& operator=(const DeleteBatchTaskRequestDeleteCommand &) = default ;
    DeleteBatchTaskRequestDeleteCommand& operator=(DeleteBatchTaskRequestDeleteCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->fileId_ != nullptr && this->projectId_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DeleteBatchTaskRequestDeleteCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline DeleteBatchTaskRequestDeleteCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeleteBatchTaskRequestDeleteCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
