// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AdminUser, adminUser_);
      DARABONBA_PTR_TO_JSON(AuthAdminUser, authAdminUser_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AdminUser, adminUser_);
      DARABONBA_PTR_FROM_JSON(AuthAdminUser, authAdminUser_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    AddUserRequest() = default ;
    AddUserRequest(const AddUserRequest &) = default ;
    AddUserRequest(AddUserRequest &&) = default ;
    AddUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserRequest() = default ;
    AddUserRequest& operator=(const AddUserRequest &) = default ;
    AddUserRequest& operator=(AddUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->adminUser_ == nullptr && this->authAdminUser_ == nullptr && this->nickName_ == nullptr && this->roleIds_ == nullptr
        && this->userType_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline AddUserRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline AddUserRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // adminUser Field Functions 
    bool hasAdminUser() const { return this->adminUser_ != nullptr;};
    void deleteAdminUser() { this->adminUser_ = nullptr;};
    inline bool getAdminUser() const { DARABONBA_PTR_GET_DEFAULT(adminUser_, false) };
    inline AddUserRequest& setAdminUser(bool adminUser) { DARABONBA_PTR_SET_VALUE(adminUser_, adminUser) };


    // authAdminUser Field Functions 
    bool hasAuthAdminUser() const { return this->authAdminUser_ != nullptr;};
    void deleteAuthAdminUser() { this->authAdminUser_ = nullptr;};
    inline bool getAuthAdminUser() const { DARABONBA_PTR_GET_DEFAULT(authAdminUser_, false) };
    inline AddUserRequest& setAuthAdminUser(bool authAdminUser) { DARABONBA_PTR_SET_VALUE(authAdminUser_, authAdminUser) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline AddUserRequest& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline string getRoleIds() const { DARABONBA_PTR_GET_DEFAULT(roleIds_, "") };
    inline AddUserRequest& setRoleIds(string roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline AddUserRequest& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // Aliyun account ID.
    // >Warning: For versions of Quick BI released after December 31, 2024, AccountId will be a required parameter. Please modify your API before this date.
    // 
    // <props="china">Published only on the China site
    shared_ptr<string> accountId_ {};
    // Aliyun account name.
    // 
    // - Note: If it is a sub-account, the format should be \\"primary account: sub-account\\". For example: master_test@aliyun.com:subaccount
    // - Format check: Maximum length of 50 characters.
    shared_ptr<string> accountName_ {};
    // Whether to assign the organization administrator role. Value range: 
    // 
    // - true: Yes 
    // - false: No
    // 
    // <notice>This parameter is deprecated and not recommended for use. It is invalid when RoleIds is provided.</notice>
    shared_ptr<bool> adminUser_ {};
    // Whether to assign the organization permission administrator role. Value range: 
    // 
    // - true: Yes 
    // - false: No
    // 
    // <notice>This parameter is deprecated and not recommended for use. It is invalid when RoleIds is provided.</notice>
    shared_ptr<bool> authAdminUser_ {};
    // Aliyun account nickname.
    // 
    // - Format check: Maximum length of 50 characters.
    // - Special format validation: Chinese and English characters, numbers, _ \\ / | () ] [
    // 
    // This parameter is required.
    shared_ptr<string> nickName_ {};
    // Preset or custom organization role IDs bound to the user, separated by commas, with a maximum of 3. Value range:
    // - Organization Administrator (preset role): 111111111
    // - Permission Administrator (preset role): 111111112
    // - Regular User (preset role): 111111113
    shared_ptr<string> roleIds_ {};
    // The user type of the organization member. Value range:
    // - 1: Developer
    // - 2: Visitor
    // - 3: Analyst
    // 
    // This parameter is required.
    shared_ptr<int32_t> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
