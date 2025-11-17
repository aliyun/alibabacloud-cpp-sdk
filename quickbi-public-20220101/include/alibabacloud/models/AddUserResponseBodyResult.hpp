// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERRESPONSEBODYRESULT_HPP_
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
  class AddUserResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AdminUser, adminUser_);
      DARABONBA_PTR_TO_JSON(AuthAdminUser, authAdminUser_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(RoleIdList, roleIdList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AdminUser, adminUser_);
      DARABONBA_PTR_FROM_JSON(AuthAdminUser, authAdminUser_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(RoleIdList, roleIdList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    AddUserResponseBodyResult() = default ;
    AddUserResponseBodyResult(const AddUserResponseBodyResult &) = default ;
    AddUserResponseBodyResult(AddUserResponseBodyResult &&) = default ;
    AddUserResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserResponseBodyResult() = default ;
    AddUserResponseBodyResult& operator=(const AddUserResponseBodyResult &) = default ;
    AddUserResponseBodyResult& operator=(AddUserResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->adminUser_ == nullptr && return this->authAdminUser_ == nullptr && return this->nickName_ == nullptr && return this->roleIdList_ == nullptr && return this->userId_ == nullptr
        && return this->userType_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline AddUserResponseBodyResult& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // adminUser Field Functions 
    bool hasAdminUser() const { return this->adminUser_ != nullptr;};
    void deleteAdminUser() { this->adminUser_ = nullptr;};
    inline bool adminUser() const { DARABONBA_PTR_GET_DEFAULT(adminUser_, false) };
    inline AddUserResponseBodyResult& setAdminUser(bool adminUser) { DARABONBA_PTR_SET_VALUE(adminUser_, adminUser) };


    // authAdminUser Field Functions 
    bool hasAuthAdminUser() const { return this->authAdminUser_ != nullptr;};
    void deleteAuthAdminUser() { this->authAdminUser_ = nullptr;};
    inline bool authAdminUser() const { DARABONBA_PTR_GET_DEFAULT(authAdminUser_, false) };
    inline AddUserResponseBodyResult& setAuthAdminUser(bool authAdminUser) { DARABONBA_PTR_SET_VALUE(authAdminUser_, authAdminUser) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline AddUserResponseBodyResult& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // roleIdList Field Functions 
    bool hasRoleIdList() const { return this->roleIdList_ != nullptr;};
    void deleteRoleIdList() { this->roleIdList_ = nullptr;};
    inline const vector<int64_t> & roleIdList() const { DARABONBA_PTR_GET_CONST(roleIdList_, vector<int64_t>) };
    inline vector<int64_t> roleIdList() { DARABONBA_PTR_GET(roleIdList_, vector<int64_t>) };
    inline AddUserResponseBodyResult& setRoleIdList(const vector<int64_t> & roleIdList) { DARABONBA_PTR_SET_VALUE(roleIdList_, roleIdList) };
    inline AddUserResponseBodyResult& setRoleIdList(vector<int64_t> && roleIdList) { DARABONBA_PTR_SET_RVALUE(roleIdList_, roleIdList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddUserResponseBodyResult& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline AddUserResponseBodyResult& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // Aliyun account.
    std::shared_ptr<string> accountName_ = nullptr;
    // Whether the organization administrator role is assigned. Value range: 
    // 
    // - true: Yes
    // - false: No
    // 
    // <notice>This parameter is deprecated and not recommended for use. It is invalid when RoleIdList is provided.</notice>
    std::shared_ptr<bool> adminUser_ = nullptr;
    // Whether the permission administrator role is assigned. Value range: 
    // 
    // - true: Yes
    // - false: No
    // 
    // <notice>This parameter is deprecated and not recommended for use. It is invalid when RoleIdList is provided.</notice>
    std::shared_ptr<bool> authAdminUser_ = nullptr;
    // Aliyun account nickname.
    std::shared_ptr<string> nickName_ = nullptr;
    // List of organization role IDs bound to the user.
    std::shared_ptr<vector<int64_t>> roleIdList_ = nullptr;
    // UserID in Quick BI.
    std::shared_ptr<string> userId_ = nullptr;
    // User type of the organization member. Value range: 
    // - 1: Developer 
    // - 2: Visitor 
    // - 3: Analyst
    std::shared_ptr<int32_t> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
