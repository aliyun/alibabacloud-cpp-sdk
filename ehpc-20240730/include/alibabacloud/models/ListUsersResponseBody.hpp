// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListUsersResponseBody() = default ;
    ListUsersResponseBody(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody(ListUsersResponseBody &&) = default ;
    ListUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBody() = default ;
    ListUsersResponseBody& operator=(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody& operator=(ListUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AddTime, addTime_);
          DARABONBA_PTR_TO_JSON(Group, group_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
          DARABONBA_PTR_FROM_JSON(Group, group_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        UserInfo() = default ;
        UserInfo(const UserInfo &) = default ;
        UserInfo(UserInfo &&) = default ;
        UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserInfo() = default ;
        UserInfo& operator=(const UserInfo &) = default ;
        UserInfo& operator=(UserInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addTime_ == nullptr
        && this->group_ == nullptr && this->groupId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
        // addTime Field Functions 
        bool hasAddTime() const { return this->addTime_ != nullptr;};
        void deleteAddTime() { this->addTime_ = nullptr;};
        inline string getAddTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, "") };
        inline UserInfo& setAddTime(string addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
        inline UserInfo& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline UserInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline UserInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The time when the user was first added.
        shared_ptr<string> addTime_ {};
        // The name of the permission group. Valid values:
        // 
        // users: ordinary permissions, which are suitable for regular users that need only to submit and debug jobs.
        // 
        // wheel: sudo permissions, which are suitable for administrators who need to manage clusters. In addition to submitting and debugging jobs, you can also run sudo commands to install software and restart nodes.
        shared_ptr<string> group_ {};
        // The permission group ID.
        shared_ptr<string> groupId_ {};
        // The user ID.
        shared_ptr<string> userId_ {};
        // The username.
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->userInfo_ == nullptr; };
      // userInfo Field Functions 
      bool hasUserInfo() const { return this->userInfo_ != nullptr;};
      void deleteUserInfo() { this->userInfo_ = nullptr;};
      inline const vector<Users::UserInfo> & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, vector<Users::UserInfo>) };
      inline vector<Users::UserInfo> getUserInfo() { DARABONBA_PTR_GET(userInfo_, vector<Users::UserInfo>) };
      inline Users& setUserInfo(const vector<Users::UserInfo> & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
      inline Users& setUserInfo(vector<Users::UserInfo> && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


    protected:
      shared_ptr<vector<Users::UserInfo>> userInfo_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->users_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListUsersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUsersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUsersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const ListUsersResponseBody::Users & getUsers() const { DARABONBA_PTR_GET_CONST(users_, ListUsersResponseBody::Users) };
    inline ListUsersResponseBody::Users getUsers() { DARABONBA_PTR_GET(users_, ListUsersResponseBody::Users) };
    inline ListUsersResponseBody& setUsers(const ListUsersResponseBody::Users & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersResponseBody& setUsers(ListUsersResponseBody::Users && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the users.
    shared_ptr<ListUsersResponseBody::Users> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
