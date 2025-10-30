// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROWPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROWPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRowPermissionRequestUpdateRowPermissionCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateRowPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRowPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateRowPermissionCommand, updateRowPermissionCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRowPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateRowPermissionCommand, updateRowPermissionCommand_);
    };
    UpdateRowPermissionRequest() = default ;
    UpdateRowPermissionRequest(const UpdateRowPermissionRequest &) = default ;
    UpdateRowPermissionRequest(UpdateRowPermissionRequest &&) = default ;
    UpdateRowPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRowPermissionRequest() = default ;
    UpdateRowPermissionRequest& operator=(const UpdateRowPermissionRequest &) = default ;
    UpdateRowPermissionRequest& operator=(UpdateRowPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->updateRowPermissionCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateRowPermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateRowPermissionCommand Field Functions 
    bool hasUpdateRowPermissionCommand() const { return this->updateRowPermissionCommand_ != nullptr;};
    void deleteUpdateRowPermissionCommand() { this->updateRowPermissionCommand_ = nullptr;};
    inline const UpdateRowPermissionRequestUpdateRowPermissionCommand & updateRowPermissionCommand() const { DARABONBA_PTR_GET_CONST(updateRowPermissionCommand_, UpdateRowPermissionRequestUpdateRowPermissionCommand) };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommand updateRowPermissionCommand() { DARABONBA_PTR_GET(updateRowPermissionCommand_, UpdateRowPermissionRequestUpdateRowPermissionCommand) };
    inline UpdateRowPermissionRequest& setUpdateRowPermissionCommand(const UpdateRowPermissionRequestUpdateRowPermissionCommand & updateRowPermissionCommand) { DARABONBA_PTR_SET_VALUE(updateRowPermissionCommand_, updateRowPermissionCommand) };
    inline UpdateRowPermissionRequest& setUpdateRowPermissionCommand(UpdateRowPermissionRequestUpdateRowPermissionCommand && updateRowPermissionCommand) { DARABONBA_PTR_SET_RVALUE(updateRowPermissionCommand_, updateRowPermissionCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdateRowPermissionRequestUpdateRowPermissionCommand> updateRowPermissionCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
