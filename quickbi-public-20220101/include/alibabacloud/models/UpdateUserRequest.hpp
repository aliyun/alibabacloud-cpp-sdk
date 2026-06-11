// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdminUser, adminUser_);
      DARABONBA_PTR_TO_JSON(AuthAdminUser, authAdminUser_);
      DARABONBA_PTR_TO_JSON(CopilotModules, copilotModules_);
      DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminUser, adminUser_);
      DARABONBA_PTR_FROM_JSON(AuthAdminUser, authAdminUser_);
      DARABONBA_PTR_FROM_JSON(CopilotModules, copilotModules_);
      DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    UpdateUserRequest() = default ;
    UpdateUserRequest(const UpdateUserRequest &) = default ;
    UpdateUserRequest(UpdateUserRequest &&) = default ;
    UpdateUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserRequest() = default ;
    UpdateUserRequest& operator=(const UpdateUserRequest &) = default ;
    UpdateUserRequest& operator=(UpdateUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminUser_ == nullptr
        && this->authAdminUser_ == nullptr && this->copilotModules_ == nullptr && this->isDeleted_ == nullptr && this->nickName_ == nullptr && this->roleIds_ == nullptr
        && this->userId_ == nullptr && this->userType_ == nullptr; };
    // adminUser Field Functions 
    bool hasAdminUser() const { return this->adminUser_ != nullptr;};
    void deleteAdminUser() { this->adminUser_ = nullptr;};
    inline bool getAdminUser() const { DARABONBA_PTR_GET_DEFAULT(adminUser_, false) };
    inline UpdateUserRequest& setAdminUser(bool adminUser) { DARABONBA_PTR_SET_VALUE(adminUser_, adminUser) };


    // authAdminUser Field Functions 
    bool hasAuthAdminUser() const { return this->authAdminUser_ != nullptr;};
    void deleteAuthAdminUser() { this->authAdminUser_ = nullptr;};
    inline bool getAuthAdminUser() const { DARABONBA_PTR_GET_DEFAULT(authAdminUser_, false) };
    inline UpdateUserRequest& setAuthAdminUser(bool authAdminUser) { DARABONBA_PTR_SET_VALUE(authAdminUser_, authAdminUser) };


    // copilotModules Field Functions 
    bool hasCopilotModules() const { return this->copilotModules_ != nullptr;};
    void deleteCopilotModules() { this->copilotModules_ = nullptr;};
    inline string getCopilotModules() const { DARABONBA_PTR_GET_DEFAULT(copilotModules_, "") };
    inline UpdateUserRequest& setCopilotModules(string copilotModules) { DARABONBA_PTR_SET_VALUE(copilotModules_, copilotModules) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
    inline UpdateUserRequest& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline UpdateUserRequest& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline string getRoleIds() const { DARABONBA_PTR_GET_DEFAULT(roleIds_, "") };
    inline UpdateUserRequest& setRoleIds(string roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline UpdateUserRequest& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // Whether to assign the organization administrator role to the user. Valid values:
    // 
    // - `true`
    // 
    // - `false`
    // 
    // >Notice: 
    // 
    // This parameter is deprecated and is ignored if RoleIds is also specified.
    shared_ptr<bool> adminUser_ {};
    // Whether to assign the permission administrator role to the user. Valid values:
    // 
    // - `true`
    // 
    // - `false`
    // 
    // >Notice: 
    // 
    // This parameter is deprecated and is ignored if RoleIds is also specified.
    shared_ptr<bool> authAdminUser_ {};
    shared_ptr<string> copilotModules_ {};
    // The user status:
    // 
    // - **`false`**: active
    // 
    // - **`true`**: inactive
    shared_ptr<bool> isDeleted_ {};
    // The nickname of the user.
    // 
    // - The nickname can be up to 50 characters in length.
    // 
    // - The nickname can contain Chinese characters, letters, digits, and the following special characters: `_ \\ / | () ] [`
    shared_ptr<string> nickName_ {};
    // The IDs of the built-in or custom organization roles to assign to the user. Specify up to three comma-separated role IDs.
    // 
    // - organization administrator (built-in role): 111111111
    // 
    // - permission administrator (built-in role): 111111112
    // 
    // - standard user (built-in role): 111111113
    shared_ptr<string> roleIds_ {};
    // The ID of the Quick BI user to update. This is not an Alibaba Cloud UID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
    // The user type of the organization member. Valid values:
    // 
    // - `1`: developer
    // 
    // - `2`: viewer
    // 
    // - `3`: analyst
    shared_ptr<int32_t> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
