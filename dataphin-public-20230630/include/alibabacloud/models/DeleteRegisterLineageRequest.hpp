// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREGISTERLINEAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREGISTERLINEAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteRegisterLineageRequestDeleteRegisterLineageCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteRegisterLineageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRegisterLineageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteRegisterLineageCommand, deleteRegisterLineageCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRegisterLineageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteRegisterLineageCommand, deleteRegisterLineageCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteRegisterLineageRequest() = default ;
    DeleteRegisterLineageRequest(const DeleteRegisterLineageRequest &) = default ;
    DeleteRegisterLineageRequest(DeleteRegisterLineageRequest &&) = default ;
    DeleteRegisterLineageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRegisterLineageRequest() = default ;
    DeleteRegisterLineageRequest& operator=(const DeleteRegisterLineageRequest &) = default ;
    DeleteRegisterLineageRequest& operator=(DeleteRegisterLineageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteRegisterLineageCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // deleteRegisterLineageCommand Field Functions 
    bool hasDeleteRegisterLineageCommand() const { return this->deleteRegisterLineageCommand_ != nullptr;};
    void deleteDeleteRegisterLineageCommand() { this->deleteRegisterLineageCommand_ = nullptr;};
    inline const DeleteRegisterLineageRequestDeleteRegisterLineageCommand & deleteRegisterLineageCommand() const { DARABONBA_PTR_GET_CONST(deleteRegisterLineageCommand_, DeleteRegisterLineageRequestDeleteRegisterLineageCommand) };
    inline DeleteRegisterLineageRequestDeleteRegisterLineageCommand deleteRegisterLineageCommand() { DARABONBA_PTR_GET(deleteRegisterLineageCommand_, DeleteRegisterLineageRequestDeleteRegisterLineageCommand) };
    inline DeleteRegisterLineageRequest& setDeleteRegisterLineageCommand(const DeleteRegisterLineageRequestDeleteRegisterLineageCommand & deleteRegisterLineageCommand) { DARABONBA_PTR_SET_VALUE(deleteRegisterLineageCommand_, deleteRegisterLineageCommand) };
    inline DeleteRegisterLineageRequest& setDeleteRegisterLineageCommand(DeleteRegisterLineageRequestDeleteRegisterLineageCommand && deleteRegisterLineageCommand) { DARABONBA_PTR_SET_RVALUE(deleteRegisterLineageCommand_, deleteRegisterLineageCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteRegisterLineageRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<DeleteRegisterLineageRequestDeleteRegisterLineageCommand> deleteRegisterLineageCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
