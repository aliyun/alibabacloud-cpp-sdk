// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDFEISHUUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDFEISHUUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class BatchAddFeishuUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddFeishuUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeishuUsers, feishuUsers_);
      DARABONBA_PTR_TO_JSON(IsAdmin, isAdmin_);
      DARABONBA_PTR_TO_JSON(IsAuthAdmin, isAuthAdmin_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddFeishuUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeishuUsers, feishuUsers_);
      DARABONBA_PTR_FROM_JSON(IsAdmin, isAdmin_);
      DARABONBA_PTR_FROM_JSON(IsAuthAdmin, isAuthAdmin_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    BatchAddFeishuUsersRequest() = default ;
    BatchAddFeishuUsersRequest(const BatchAddFeishuUsersRequest &) = default ;
    BatchAddFeishuUsersRequest(BatchAddFeishuUsersRequest &&) = default ;
    BatchAddFeishuUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddFeishuUsersRequest() = default ;
    BatchAddFeishuUsersRequest& operator=(const BatchAddFeishuUsersRequest &) = default ;
    BatchAddFeishuUsersRequest& operator=(BatchAddFeishuUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feishuUsers_ == nullptr
        && this->isAdmin_ == nullptr && this->isAuthAdmin_ == nullptr && this->userGroupIds_ == nullptr && this->userType_ == nullptr; };
    // feishuUsers Field Functions 
    bool hasFeishuUsers() const { return this->feishuUsers_ != nullptr;};
    void deleteFeishuUsers() { this->feishuUsers_ = nullptr;};
    inline string getFeishuUsers() const { DARABONBA_PTR_GET_DEFAULT(feishuUsers_, "") };
    inline BatchAddFeishuUsersRequest& setFeishuUsers(string feishuUsers) { DARABONBA_PTR_SET_VALUE(feishuUsers_, feishuUsers) };


    // isAdmin Field Functions 
    bool hasIsAdmin() const { return this->isAdmin_ != nullptr;};
    void deleteIsAdmin() { this->isAdmin_ = nullptr;};
    inline bool getIsAdmin() const { DARABONBA_PTR_GET_DEFAULT(isAdmin_, false) };
    inline BatchAddFeishuUsersRequest& setIsAdmin(bool isAdmin) { DARABONBA_PTR_SET_VALUE(isAdmin_, isAdmin) };


    // isAuthAdmin Field Functions 
    bool hasIsAuthAdmin() const { return this->isAuthAdmin_ != nullptr;};
    void deleteIsAuthAdmin() { this->isAuthAdmin_ = nullptr;};
    inline bool getIsAuthAdmin() const { DARABONBA_PTR_GET_DEFAULT(isAuthAdmin_, false) };
    inline BatchAddFeishuUsersRequest& setIsAuthAdmin(bool isAuthAdmin) { DARABONBA_PTR_SET_VALUE(isAuthAdmin_, isAuthAdmin) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline string getUserGroupIds() const { DARABONBA_PTR_GET_DEFAULT(userGroupIds_, "") };
    inline BatchAddFeishuUsersRequest& setUserGroupIds(string userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline BatchAddFeishuUsersRequest& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // Information of the users to be added
    shared_ptr<string> feishuUsers_ {};
    // Whether the user is an admin user:
    // - true
    // - false
    // 
    // Default is false if not provided
    shared_ptr<bool> isAdmin_ {};
    // Whether the user is an authorization administrator
    // 
    // - true
    // - false
    // 
    // Default is false if not provided
    shared_ptr<bool> isAuthAdmin_ {};
    // User group ID(s)
    shared_ptr<string> userGroupIds_ {};
    // User type
    // - Developer: 1
    // - Visitor: 2
    // - Analyst: 3
    shared_ptr<int32_t> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
