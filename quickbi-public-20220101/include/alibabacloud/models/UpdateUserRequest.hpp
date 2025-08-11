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
      DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminUser, adminUser_);
      DARABONBA_PTR_FROM_JSON(AuthAdminUser, authAdminUser_);
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
    virtual bool empty() const override { this->adminUser_ != nullptr
        && this->authAdminUser_ != nullptr && this->isDeleted_ != nullptr && this->nickName_ != nullptr && this->roleIds_ != nullptr && this->userId_ != nullptr
        && this->userType_ != nullptr; };
    // adminUser Field Functions 
    bool hasAdminUser() const { return this->adminUser_ != nullptr;};
    void deleteAdminUser() { this->adminUser_ = nullptr;};
    inline bool adminUser() const { DARABONBA_PTR_GET_DEFAULT(adminUser_, false) };
    inline UpdateUserRequest& setAdminUser(bool adminUser) { DARABONBA_PTR_SET_VALUE(adminUser_, adminUser) };


    // authAdminUser Field Functions 
    bool hasAuthAdminUser() const { return this->authAdminUser_ != nullptr;};
    void deleteAuthAdminUser() { this->authAdminUser_ = nullptr;};
    inline bool authAdminUser() const { DARABONBA_PTR_GET_DEFAULT(authAdminUser_, false) };
    inline UpdateUserRequest& setAuthAdminUser(bool authAdminUser) { DARABONBA_PTR_SET_VALUE(authAdminUser_, authAdminUser) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline bool isDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
    inline UpdateUserRequest& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline UpdateUserRequest& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline string roleIds() const { DARABONBA_PTR_GET_DEFAULT(roleIds_, "") };
    inline UpdateUserRequest& setRoleIds(string roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline UpdateUserRequest& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // Indicates whether the organization administrator. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> adminUser_ = nullptr;
    // Indicate whether the RAM user is a permission administrator. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> authAdminUser_ = nullptr;
    // User status: 
    // * **false**: Active
    //  * **true**: Inactive
    std::shared_ptr<bool> isDeleted_ = nullptr;
    // The nickname of the account.
    // 
    // *   Format check: The value can be up to 50 characters in length.
    // *   Special format verification: Chinese and English digits_ \\ / | () ] [
    std::shared_ptr<string> nickName_ = nullptr;
    // The IDs of the preset or custom organization roles bound to the user, separated by English commas \\",\\", with a maximum of 3. The value range is as follows: - Organization Administrator (preset role): 111111111 - Permission Administrator (preset role): 111111112 - Regular User (preset role): 111111113
    std::shared_ptr<string> roleIds_ = nullptr;
    // The ID of the user to be updated. The user ID is the UserID of the Quick BI, not the UID of Alibaba Cloud.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // The type of user who is a member of the organization. Valid values:
    // 
    // *   1 : developer
    // *   2 : visitors
    // *   3 : Analyst
    std::shared_ptr<int32_t> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
