// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROWPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROWPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteRowPermissionRequestDeleteRowPermissionCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteRowPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRowPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteRowPermissionCommand, deleteRowPermissionCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRowPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteRowPermissionCommand, deleteRowPermissionCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteRowPermissionRequest() = default ;
    DeleteRowPermissionRequest(const DeleteRowPermissionRequest &) = default ;
    DeleteRowPermissionRequest(DeleteRowPermissionRequest &&) = default ;
    DeleteRowPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRowPermissionRequest() = default ;
    DeleteRowPermissionRequest& operator=(const DeleteRowPermissionRequest &) = default ;
    DeleteRowPermissionRequest& operator=(DeleteRowPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteRowPermissionCommand_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // deleteRowPermissionCommand Field Functions 
    bool hasDeleteRowPermissionCommand() const { return this->deleteRowPermissionCommand_ != nullptr;};
    void deleteDeleteRowPermissionCommand() { this->deleteRowPermissionCommand_ = nullptr;};
    inline const DeleteRowPermissionRequestDeleteRowPermissionCommand & deleteRowPermissionCommand() const { DARABONBA_PTR_GET_CONST(deleteRowPermissionCommand_, DeleteRowPermissionRequestDeleteRowPermissionCommand) };
    inline DeleteRowPermissionRequestDeleteRowPermissionCommand deleteRowPermissionCommand() { DARABONBA_PTR_GET(deleteRowPermissionCommand_, DeleteRowPermissionRequestDeleteRowPermissionCommand) };
    inline DeleteRowPermissionRequest& setDeleteRowPermissionCommand(const DeleteRowPermissionRequestDeleteRowPermissionCommand & deleteRowPermissionCommand) { DARABONBA_PTR_SET_VALUE(deleteRowPermissionCommand_, deleteRowPermissionCommand) };
    inline DeleteRowPermissionRequest& setDeleteRowPermissionCommand(DeleteRowPermissionRequestDeleteRowPermissionCommand && deleteRowPermissionCommand) { DARABONBA_PTR_SET_RVALUE(deleteRowPermissionCommand_, deleteRowPermissionCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteRowPermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<DeleteRowPermissionRequestDeleteRowPermissionCommand> deleteRowPermissionCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
