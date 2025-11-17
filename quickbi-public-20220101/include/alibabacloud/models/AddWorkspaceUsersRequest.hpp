// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSPACEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSPACEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddWorkspaceUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkspaceUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkspaceUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AddWorkspaceUsersRequest() = default ;
    AddWorkspaceUsersRequest(const AddWorkspaceUsersRequest &) = default ;
    AddWorkspaceUsersRequest(AddWorkspaceUsersRequest &&) = default ;
    AddWorkspaceUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkspaceUsersRequest() = default ;
    AddWorkspaceUsersRequest& operator=(const AddWorkspaceUsersRequest &) = default ;
    AddWorkspaceUsersRequest& operator=(AddWorkspaceUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleId_ == nullptr
        && return this->userIds_ == nullptr && return this->workspaceId_ == nullptr; };
    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline AddWorkspaceUsersRequest& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline string userIds() const { DARABONBA_PTR_GET_DEFAULT(userIds_, "") };
    inline AddWorkspaceUsersRequest& setUserIds(string userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AddWorkspaceUsersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Preset space role ID. Value range:
    // - 25: Space Administrator
    // - 26: Space Developer
    // - 27: Space Analyst
    // - 30: Space Viewer
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> roleId_ = nullptr;
    // User ID. This is the UserID for Quick BI, not the Alibaba Cloud UID.
    // 
    // - Supports batch parameters, with user IDs separated by commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> userIds_ = nullptr;
    // Workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
