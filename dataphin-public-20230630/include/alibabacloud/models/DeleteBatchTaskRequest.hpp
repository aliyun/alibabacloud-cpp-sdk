// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBATCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBATCHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteBatchTaskRequestDeleteCommand.hpp>
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
    virtual bool empty() const override { return this->deleteCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // deleteCommand Field Functions 
    bool hasDeleteCommand() const { return this->deleteCommand_ != nullptr;};
    void deleteDeleteCommand() { this->deleteCommand_ = nullptr;};
    inline const DeleteBatchTaskRequestDeleteCommand & deleteCommand() const { DARABONBA_PTR_GET_CONST(deleteCommand_, DeleteBatchTaskRequestDeleteCommand) };
    inline DeleteBatchTaskRequestDeleteCommand deleteCommand() { DARABONBA_PTR_GET(deleteCommand_, DeleteBatchTaskRequestDeleteCommand) };
    inline DeleteBatchTaskRequest& setDeleteCommand(const DeleteBatchTaskRequestDeleteCommand & deleteCommand) { DARABONBA_PTR_SET_VALUE(deleteCommand_, deleteCommand) };
    inline DeleteBatchTaskRequest& setDeleteCommand(DeleteBatchTaskRequestDeleteCommand && deleteCommand) { DARABONBA_PTR_SET_RVALUE(deleteCommand_, deleteCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteBatchTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<DeleteBatchTaskRequestDeleteCommand> deleteCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
