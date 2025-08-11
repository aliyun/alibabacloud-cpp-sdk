// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERLISTRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERLISTRESPONSEBODYRESULTDATA_HPP_
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
  class QueryUserListResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserListResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AdminUser, adminUser_);
      DARABONBA_PTR_TO_JSON(AuthAdminUser, authAdminUser_);
      DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(JoinedDate, joinedDate_);
      DARABONBA_PTR_TO_JSON(LastLoginTime, lastLoginTime_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(RoleIdList, roleIdList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserListResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AdminUser, adminUser_);
      DARABONBA_PTR_FROM_JSON(AuthAdminUser, authAdminUser_);
      DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(JoinedDate, joinedDate_);
      DARABONBA_PTR_FROM_JSON(LastLoginTime, lastLoginTime_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(RoleIdList, roleIdList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    QueryUserListResponseBodyResultData() = default ;
    QueryUserListResponseBodyResultData(const QueryUserListResponseBodyResultData &) = default ;
    QueryUserListResponseBodyResultData(QueryUserListResponseBodyResultData &&) = default ;
    QueryUserListResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserListResponseBodyResultData() = default ;
    QueryUserListResponseBodyResultData& operator=(const QueryUserListResponseBodyResultData &) = default ;
    QueryUserListResponseBodyResultData& operator=(QueryUserListResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->accountName_ != nullptr && this->adminUser_ != nullptr && this->authAdminUser_ != nullptr && this->isDeleted_ != nullptr && this->joinedDate_ != nullptr
        && this->lastLoginTime_ != nullptr && this->nickName_ != nullptr && this->roleIdList_ != nullptr && this->userId_ != nullptr && this->userType_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline QueryUserListResponseBodyResultData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline QueryUserListResponseBodyResultData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // adminUser Field Functions 
    bool hasAdminUser() const { return this->adminUser_ != nullptr;};
    void deleteAdminUser() { this->adminUser_ = nullptr;};
    inline bool adminUser() const { DARABONBA_PTR_GET_DEFAULT(adminUser_, false) };
    inline QueryUserListResponseBodyResultData& setAdminUser(bool adminUser) { DARABONBA_PTR_SET_VALUE(adminUser_, adminUser) };


    // authAdminUser Field Functions 
    bool hasAuthAdminUser() const { return this->authAdminUser_ != nullptr;};
    void deleteAuthAdminUser() { this->authAdminUser_ = nullptr;};
    inline bool authAdminUser() const { DARABONBA_PTR_GET_DEFAULT(authAdminUser_, false) };
    inline QueryUserListResponseBodyResultData& setAuthAdminUser(bool authAdminUser) { DARABONBA_PTR_SET_VALUE(authAdminUser_, authAdminUser) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline bool isDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
    inline QueryUserListResponseBodyResultData& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // joinedDate Field Functions 
    bool hasJoinedDate() const { return this->joinedDate_ != nullptr;};
    void deleteJoinedDate() { this->joinedDate_ = nullptr;};
    inline int64_t joinedDate() const { DARABONBA_PTR_GET_DEFAULT(joinedDate_, 0L) };
    inline QueryUserListResponseBodyResultData& setJoinedDate(int64_t joinedDate) { DARABONBA_PTR_SET_VALUE(joinedDate_, joinedDate) };


    // lastLoginTime Field Functions 
    bool hasLastLoginTime() const { return this->lastLoginTime_ != nullptr;};
    void deleteLastLoginTime() { this->lastLoginTime_ = nullptr;};
    inline int64_t lastLoginTime() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTime_, 0L) };
    inline QueryUserListResponseBodyResultData& setLastLoginTime(int64_t lastLoginTime) { DARABONBA_PTR_SET_VALUE(lastLoginTime_, lastLoginTime) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline QueryUserListResponseBodyResultData& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // roleIdList Field Functions 
    bool hasRoleIdList() const { return this->roleIdList_ != nullptr;};
    void deleteRoleIdList() { this->roleIdList_ = nullptr;};
    inline const vector<int64_t> & roleIdList() const { DARABONBA_PTR_GET_CONST(roleIdList_, vector<int64_t>) };
    inline vector<int64_t> roleIdList() { DARABONBA_PTR_GET(roleIdList_, vector<int64_t>) };
    inline QueryUserListResponseBodyResultData& setRoleIdList(const vector<int64_t> & roleIdList) { DARABONBA_PTR_SET_VALUE(roleIdList_, roleIdList) };
    inline QueryUserListResponseBodyResultData& setRoleIdList(vector<int64_t> && roleIdList) { DARABONBA_PTR_SET_RVALUE(roleIdList_, roleIdList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryUserListResponseBodyResultData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline QueryUserListResponseBodyResultData& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The name of the Alibaba Cloud account that corresponds to the member.
    std::shared_ptr<string> accountName_ = nullptr;
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
    // - Active - false 
    // - Inactive - true
    std::shared_ptr<bool> isDeleted_ = nullptr;
    // Join Date
    std::shared_ptr<int64_t> joinedDate_ = nullptr;
    // Last login time.
    std::shared_ptr<int64_t> lastLoginTime_ = nullptr;
    // The nickname of the organization member.
    std::shared_ptr<string> nickName_ = nullptr;
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
