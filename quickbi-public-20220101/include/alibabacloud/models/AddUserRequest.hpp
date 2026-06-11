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
      DARABONBA_PTR_TO_JSON(CopilotModules, copilotModules_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AdminUser, adminUser_);
      DARABONBA_PTR_FROM_JSON(AuthAdminUser, authAdminUser_);
      DARABONBA_PTR_FROM_JSON(CopilotModules, copilotModules_);
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
        && this->accountName_ == nullptr && this->adminUser_ == nullptr && this->authAdminUser_ == nullptr && this->copilotModules_ == nullptr && this->nickName_ == nullptr
        && this->roleIds_ == nullptr && this->userType_ == nullptr; };
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


    // copilotModules Field Functions 
    bool hasCopilotModules() const { return this->copilotModules_ != nullptr;};
    void deleteCopilotModules() { this->copilotModules_ = nullptr;};
    inline string getCopilotModules() const { DARABONBA_PTR_GET_DEFAULT(copilotModules_, "") };
    inline AddUserRequest& setCopilotModules(string copilotModules) { DARABONBA_PTR_SET_VALUE(copilotModules_, copilotModules) };


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
    // The ID of the Alibaba Cloud account.>Warning: The `AccountId` parameter will be required in Quick BI versions released after December 31, 2024. We recommend that you update your API calls to include this parameter before then.
    shared_ptr<string> accountId_ {};
    // The name of the Alibaba Cloud account.
    // 
    // - For a sub-account, use the format `master account:sub-account`. Example: `master_test@aliyun.com:subaccount`.
    // 
    // - The maximum length is 50 characters.
    shared_ptr<string> accountName_ {};
    // Specifies whether to assign the organization administrator role. Valid values:
    // 
    // - true
    // 
    // - false
    // 
    // >Notice: 
    // 
    // This parameter is deprecated. It is ignored if `RoleIds` is specified.
    shared_ptr<bool> adminUser_ {};
    // Specifies whether to assign the permission administrator role. Valid values:
    // 
    // - true
    // 
    // - false
    // 
    // >Notice: 
    // 
    // This parameter is deprecated. It is ignored if `RoleIds` is specified.
    shared_ptr<bool> authAdminUser_ {};
    // The Copilot modules to enable for the user. To enable multiple modules, specify their codes separated by a comma (,).
    // 
    // - `qreport`: Q Report
    // 
    // - `qExploreNum`: Q Explore
    // 
    // - `smartQAskNum`: Q\\&A with Data
    // 
    // - `smartQDevNum`: Q-assisted Building
    shared_ptr<string> copilotModules_ {};
    // The user\\"s nickname.
    // 
    // - The maximum length is 50 characters.
    // 
    // - The nickname can contain Chinese characters, letters, digits, and the following special characters: `_ \\ / | () []`.
    // 
    // This parameter is required.
    shared_ptr<string> nickName_ {};
    // The IDs of the predefined or custom organization roles to assign. You can specify up to three role IDs, separated by commas (,). Valid values for predefined roles:
    // 
    // - `111111111`: organization administrator
    // 
    // - `111111112`: permission administrator
    // 
    // - `111111113`: regular user
    shared_ptr<string> roleIds_ {};
    // The type of the organization member. Valid values:
    // 
    // - 1: developer
    // 
    // - 2: viewer
    // 
    // - 3: analyst
    // 
    // This parameter is required.
    shared_ptr<int32_t> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
