// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERINFOBYACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERINFOBYACCOUNTRESPONSEBODY_HPP_
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
  class QueryUserInfoByAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserInfoByAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserInfoByAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryUserInfoByAccountResponseBody() = default ;
    QueryUserInfoByAccountResponseBody(const QueryUserInfoByAccountResponseBody &) = default ;
    QueryUserInfoByAccountResponseBody(QueryUserInfoByAccountResponseBody &&) = default ;
    QueryUserInfoByAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserInfoByAccountResponseBody() = default ;
    QueryUserInfoByAccountResponseBody& operator=(const QueryUserInfoByAccountResponseBody &) = default ;
    QueryUserInfoByAccountResponseBody& operator=(QueryUserInfoByAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->adminUser_ == nullptr && this->authAdminUser_ == nullptr && this->email_ == nullptr && this->nickName_ == nullptr
        && this->phone_ == nullptr && this->roleIdList_ == nullptr && this->userId_ == nullptr && this->userType_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Result& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Result& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // adminUser Field Functions 
      bool hasAdminUser() const { return this->adminUser_ != nullptr;};
      void deleteAdminUser() { this->adminUser_ = nullptr;};
      inline bool getAdminUser() const { DARABONBA_PTR_GET_DEFAULT(adminUser_, false) };
      inline Result& setAdminUser(bool adminUser) { DARABONBA_PTR_SET_VALUE(adminUser_, adminUser) };


      // authAdminUser Field Functions 
      bool hasAuthAdminUser() const { return this->authAdminUser_ != nullptr;};
      void deleteAuthAdminUser() { this->authAdminUser_ = nullptr;};
      inline bool getAuthAdminUser() const { DARABONBA_PTR_GET_DEFAULT(authAdminUser_, false) };
      inline Result& setAuthAdminUser(bool authAdminUser) { DARABONBA_PTR_SET_VALUE(authAdminUser_, authAdminUser) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Result& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline Result& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Result& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // roleIdList Field Functions 
      bool hasRoleIdList() const { return this->roleIdList_ != nullptr;};
      void deleteRoleIdList() { this->roleIdList_ = nullptr;};
      inline const vector<int64_t> & getRoleIdList() const { DARABONBA_PTR_GET_CONST(roleIdList_, vector<int64_t>) };
      inline vector<int64_t> getRoleIdList() { DARABONBA_PTR_GET(roleIdList_, vector<int64_t>) };
      inline Result& setRoleIdList(const vector<int64_t> & roleIdList) { DARABONBA_PTR_SET_VALUE(roleIdList_, roleIdList) };
      inline Result& setRoleIdList(vector<int64_t> && roleIdList) { DARABONBA_PTR_SET_RVALUE(roleIdList_, roleIdList) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Result& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
      inline Result& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> accountId_ {};
      // The name of the Alibaba Cloud account that corresponds to the member. (If you use a RAM user, the domain name information that follows @ is removed. For example, if you use a <test@test.com>, test is returned.)
      shared_ptr<string> accountName_ {};
      // Whether you are an administrator of the organization. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> adminUser_ {};
      // Whether you are a permission administrator. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> authAdminUser_ {};
      // The email address of the user.
      shared_ptr<string> email_ {};
      // The nickname of the account.
      shared_ptr<string> nickName_ {};
      // The phone number of the alert contact.
      shared_ptr<string> phone_ {};
      // List of organization role IDs bound to the user.
      shared_ptr<vector<int64_t>> roleIdList_ {};
      // The UserID in the Quick BI.
      shared_ptr<string> userId_ {};
      // The role type of the organization member. Valid values:
      // 
      // *   1 : developer
      // *   2 : visitors
      // *   3 : Analyst
      shared_ptr<int32_t> userType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserInfoByAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryUserInfoByAccountResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryUserInfoByAccountResponseBody::Result) };
    inline QueryUserInfoByAccountResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryUserInfoByAccountResponseBody::Result) };
    inline QueryUserInfoByAccountResponseBody& setResult(const QueryUserInfoByAccountResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryUserInfoByAccountResponseBody& setResult(QueryUserInfoByAccountResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryUserInfoByAccountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned organization user information.
    shared_ptr<QueryUserInfoByAccountResponseBody::Result> result_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
