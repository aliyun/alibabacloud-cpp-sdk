// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERINFOBYACCOUNTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERINFOBYACCOUNTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserInfoByAccountResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserInfoByAccountResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AdminUser, adminUser_);
      DARABONBA_PTR_TO_JSON(AuthAdminUser, authAdminUser_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(RoleIdList, roleIdList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserInfoByAccountResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AdminUser, adminUser_);
      DARABONBA_PTR_FROM_JSON(AuthAdminUser, authAdminUser_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(RoleIdList, roleIdList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    QueryUserInfoByAccountResponseBodyResult() = default ;
    QueryUserInfoByAccountResponseBodyResult(const QueryUserInfoByAccountResponseBodyResult &) = default ;
    QueryUserInfoByAccountResponseBodyResult(QueryUserInfoByAccountResponseBodyResult &&) = default ;
    QueryUserInfoByAccountResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserInfoByAccountResponseBodyResult() = default ;
    QueryUserInfoByAccountResponseBodyResult& operator=(const QueryUserInfoByAccountResponseBodyResult &) = default ;
    QueryUserInfoByAccountResponseBodyResult& operator=(QueryUserInfoByAccountResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->accountName_ == nullptr && return this->adminUser_ == nullptr && return this->authAdminUser_ == nullptr && return this->email_ == nullptr && return this->nickName_ == nullptr
        && return this->phone_ == nullptr && return this->roleIdList_ == nullptr && return this->userId_ == nullptr && return this->userType_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline QueryUserInfoByAccountResponseBodyResult& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline QueryUserInfoByAccountResponseBodyResult& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // adminUser Field Functions 
    bool hasAdminUser() const { return this->adminUser_ != nullptr;};
    void deleteAdminUser() { this->adminUser_ = nullptr;};
    inline bool adminUser() const { DARABONBA_PTR_GET_DEFAULT(adminUser_, false) };
    inline QueryUserInfoByAccountResponseBodyResult& setAdminUser(bool adminUser) { DARABONBA_PTR_SET_VALUE(adminUser_, adminUser) };


    // authAdminUser Field Functions 
    bool hasAuthAdminUser() const { return this->authAdminUser_ != nullptr;};
    void deleteAuthAdminUser() { this->authAdminUser_ = nullptr;};
    inline bool authAdminUser() const { DARABONBA_PTR_GET_DEFAULT(authAdminUser_, false) };
    inline QueryUserInfoByAccountResponseBodyResult& setAuthAdminUser(bool authAdminUser) { DARABONBA_PTR_SET_VALUE(authAdminUser_, authAdminUser) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryUserInfoByAccountResponseBodyResult& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline QueryUserInfoByAccountResponseBodyResult& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline QueryUserInfoByAccountResponseBodyResult& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // roleIdList Field Functions 
    bool hasRoleIdList() const { return this->roleIdList_ != nullptr;};
    void deleteRoleIdList() { this->roleIdList_ = nullptr;};
    inline const vector<int64_t> & roleIdList() const { DARABONBA_PTR_GET_CONST(roleIdList_, vector<int64_t>) };
    inline vector<int64_t> roleIdList() { DARABONBA_PTR_GET(roleIdList_, vector<int64_t>) };
    inline QueryUserInfoByAccountResponseBodyResult& setRoleIdList(const vector<int64_t> & roleIdList) { DARABONBA_PTR_SET_VALUE(roleIdList_, roleIdList) };
    inline QueryUserInfoByAccountResponseBodyResult& setRoleIdList(vector<int64_t> && roleIdList) { DARABONBA_PTR_SET_RVALUE(roleIdList_, roleIdList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryUserInfoByAccountResponseBodyResult& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline QueryUserInfoByAccountResponseBodyResult& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The name of the Alibaba Cloud account that corresponds to the member. (If you use a RAM user, the domain name information that follows @ is removed. For example, if you use a <test@test.com>, test is returned.)
    std::shared_ptr<string> accountName_ = nullptr;
    // Whether you are an administrator of the organization. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> adminUser_ = nullptr;
    // Whether you are a permission administrator. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> authAdminUser_ = nullptr;
    // The email address of the user.
    std::shared_ptr<string> email_ = nullptr;
    // The nickname of the account.
    std::shared_ptr<string> nickName_ = nullptr;
    // The phone number of the alert contact.
    std::shared_ptr<string> phone_ = nullptr;
    // List of organization role IDs bound to the user.
    std::shared_ptr<vector<int64_t>> roleIdList_ = nullptr;
    // The UserID in the Quick BI.
    std::shared_ptr<string> userId_ = nullptr;
    // The role type of the organization member. Valid values:
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
