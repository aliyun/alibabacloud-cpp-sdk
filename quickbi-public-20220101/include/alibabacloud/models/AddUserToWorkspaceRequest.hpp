// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERTOWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERTOWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddUserToWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserToWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserToWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AddUserToWorkspaceRequest() = default ;
    AddUserToWorkspaceRequest(const AddUserToWorkspaceRequest &) = default ;
    AddUserToWorkspaceRequest(AddUserToWorkspaceRequest &&) = default ;
    AddUserToWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserToWorkspaceRequest() = default ;
    AddUserToWorkspaceRequest& operator=(const AddUserToWorkspaceRequest &) = default ;
    AddUserToWorkspaceRequest& operator=(AddUserToWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleId_ == nullptr
        && return this->userId_ == nullptr && return this->workspaceId_ == nullptr; };
    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline AddUserToWorkspaceRequest& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddUserToWorkspaceRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AddUserToWorkspaceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The preset space role ID. Value range:
    // - 25: Space Administrator
    // - 26: Space Developer
    // - 27: Space Analyst
    // - 30: Space Viewer
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> roleId_ = nullptr;
    // The ID of the Quick BI user to be added.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // The ID of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
