// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEUSERROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEUSERROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateWorkspaceUserRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceUserRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceUserRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateWorkspaceUserRoleRequest() = default ;
    UpdateWorkspaceUserRoleRequest(const UpdateWorkspaceUserRoleRequest &) = default ;
    UpdateWorkspaceUserRoleRequest(UpdateWorkspaceUserRoleRequest &&) = default ;
    UpdateWorkspaceUserRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceUserRoleRequest() = default ;
    UpdateWorkspaceUserRoleRequest& operator=(const UpdateWorkspaceUserRoleRequest &) = default ;
    UpdateWorkspaceUserRoleRequest& operator=(UpdateWorkspaceUserRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleId_ == nullptr
        && return this->roleIds_ == nullptr && return this->userId_ == nullptr && return this->workspaceId_ == nullptr; };
    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline UpdateWorkspaceUserRoleRequest& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline string roleIds() const { DARABONBA_PTR_GET_DEFAULT(roleIds_, "") };
    inline UpdateWorkspaceUserRoleRequest& setRoleIds(string roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateWorkspaceUserRoleRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateWorkspaceUserRoleRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Preset workspace role ID, existing roles will be overwritten. Value range:
    // - 25: Workspace Administrator
    // - 26: Workspace Developer
    // - 27: Workspace Analyst
    // - 30: Workspace Viewer
    std::shared_ptr<int64_t> roleId_ = nullptr;
    // Multiple workspace role IDs, separated by commas. If this value is provided, it takes precedence.
    // >Notice: roleId and roleIds cannot both be empty
    std::shared_ptr<string> roleIds_ = nullptr;
    // Quick BI user ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // Workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
