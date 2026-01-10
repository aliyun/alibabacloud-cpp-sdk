// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorizedUsersForInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUsersForInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUsersForInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListAuthorizedUsersForInstanceResponseBody() = default ;
    ListAuthorizedUsersForInstanceResponseBody(const ListAuthorizedUsersForInstanceResponseBody &) = default ;
    ListAuthorizedUsersForInstanceResponseBody(ListAuthorizedUsersForInstanceResponseBody &&) = default ;
    ListAuthorizedUsersForInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUsersForInstanceResponseBody() = default ;
    ListAuthorizedUsersForInstanceResponseBody& operator=(const ListAuthorizedUsersForInstanceResponseBody &) = default ;
    ListAuthorizedUsersForInstanceResponseBody& operator=(ListAuthorizedUsersForInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(Uid, uid_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserNickName, userNickName_);
        DARABONBA_PTR_TO_JSON(UserRealName, userRealName_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserNickName, userNickName_);
        DARABONBA_PTR_FROM_JSON(UserRealName, userRealName_);
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
      virtual bool empty() const override { return this->uid_ == nullptr
        && this->userId_ == nullptr && this->userNickName_ == nullptr && this->userRealName_ == nullptr; };
      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Users& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Users& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userNickName Field Functions 
      bool hasUserNickName() const { return this->userNickName_ != nullptr;};
      void deleteUserNickName() { this->userNickName_ = nullptr;};
      inline string getUserNickName() const { DARABONBA_PTR_GET_DEFAULT(userNickName_, "") };
      inline Users& setUserNickName(string userNickName) { DARABONBA_PTR_SET_VALUE(userNickName_, userNickName) };


      // userRealName Field Functions 
      bool hasUserRealName() const { return this->userRealName_ != nullptr;};
      void deleteUserRealName() { this->userRealName_ = nullptr;};
      inline string getUserRealName() const { DARABONBA_PTR_GET_DEFAULT(userRealName_, "") };
      inline Users& setUserRealName(string userRealName) { DARABONBA_PTR_SET_VALUE(userRealName_, userRealName) };


    protected:
      // The UID of the user\\"s Alibaba Cloud account.
      shared_ptr<string> uid_ {};
      // The ID of the user.
      shared_ptr<string> userId_ {};
      // The nickname of the user.
      shared_ptr<string> userNickName_ {};
      // The real name of the user.
      shared_ptr<string> userRealName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedUsersForInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListAuthorizedUsersForInstanceResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<ListAuthorizedUsersForInstanceResponseBody::Users>) };
    inline vector<ListAuthorizedUsersForInstanceResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<ListAuthorizedUsersForInstanceResponseBody::Users>) };
    inline ListAuthorizedUsersForInstanceResponseBody& setUsers(const vector<ListAuthorizedUsersForInstanceResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListAuthorizedUsersForInstanceResponseBody& setUsers(vector<ListAuthorizedUsersForInstanceResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The request ID. You can use the request ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The list of users that have permissions on the specified instance.
    shared_ptr<vector<ListAuthorizedUsersForInstanceResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
