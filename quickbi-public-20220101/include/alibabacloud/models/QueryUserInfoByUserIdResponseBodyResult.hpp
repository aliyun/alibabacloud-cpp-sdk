// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERINFOBYUSERIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERINFOBYUSERIDRESPONSEBODYRESULT_HPP_
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
  class QueryUserInfoByUserIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserInfoByUserIdResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryUserInfoByUserIdResponseBodyResult& obj) { 
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
    QueryUserInfoByUserIdResponseBodyResult() = default ;
    QueryUserInfoByUserIdResponseBodyResult(const QueryUserInfoByUserIdResponseBodyResult &) = default ;
    QueryUserInfoByUserIdResponseBodyResult(QueryUserInfoByUserIdResponseBodyResult &&) = default ;
    QueryUserInfoByUserIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserInfoByUserIdResponseBodyResult() = default ;
    QueryUserInfoByUserIdResponseBodyResult& operator=(const QueryUserInfoByUserIdResponseBodyResult &) = default ;
    QueryUserInfoByUserIdResponseBodyResult& operator=(QueryUserInfoByUserIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->accountName_ != nullptr && this->adminUser_ != nullptr && this->authAdminUser_ != nullptr && this->email_ != nullptr && this->nickName_ != nullptr
        && this->phone_ != nullptr && this->roleIdList_ != nullptr && this->userId_ != nullptr && this->userType_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline QueryUserInfoByUserIdResponseBodyResult& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline QueryUserInfoByUserIdResponseBodyResult& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // adminUser Field Functions 
    bool hasAdminUser() const { return this->adminUser_ != nullptr;};
    void deleteAdminUser() { this->adminUser_ = nullptr;};
    inline bool adminUser() const { DARABONBA_PTR_GET_DEFAULT(adminUser_, false) };
    inline QueryUserInfoByUserIdResponseBodyResult& setAdminUser(bool adminUser) { DARABONBA_PTR_SET_VALUE(adminUser_, adminUser) };


    // authAdminUser Field Functions 
    bool hasAuthAdminUser() const { return this->authAdminUser_ != nullptr;};
    void deleteAuthAdminUser() { this->authAdminUser_ = nullptr;};
    inline bool authAdminUser() const { DARABONBA_PTR_GET_DEFAULT(authAdminUser_, false) };
    inline QueryUserInfoByUserIdResponseBodyResult& setAuthAdminUser(bool authAdminUser) { DARABONBA_PTR_SET_VALUE(authAdminUser_, authAdminUser) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryUserInfoByUserIdResponseBodyResult& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline QueryUserInfoByUserIdResponseBodyResult& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline QueryUserInfoByUserIdResponseBodyResult& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // roleIdList Field Functions 
    bool hasRoleIdList() const { return this->roleIdList_ != nullptr;};
    void deleteRoleIdList() { this->roleIdList_ = nullptr;};
    inline const vector<int64_t> & roleIdList() const { DARABONBA_PTR_GET_CONST(roleIdList_, vector<int64_t>) };
    inline vector<int64_t> roleIdList() { DARABONBA_PTR_GET(roleIdList_, vector<int64_t>) };
    inline QueryUserInfoByUserIdResponseBodyResult& setRoleIdList(const vector<int64_t> & roleIdList) { DARABONBA_PTR_SET_VALUE(roleIdList_, roleIdList) };
    inline QueryUserInfoByUserIdResponseBodyResult& setRoleIdList(vector<int64_t> && roleIdList) { DARABONBA_PTR_SET_RVALUE(roleIdList_, roleIdList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryUserInfoByUserIdResponseBodyResult& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline QueryUserInfoByUserIdResponseBodyResult& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The name of the Alibaba Cloud account that corresponds to the member.
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
