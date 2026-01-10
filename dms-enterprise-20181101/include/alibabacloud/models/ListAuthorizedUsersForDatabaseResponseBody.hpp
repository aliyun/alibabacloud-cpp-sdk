// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORDATABASERESPONSEBODY_HPP_
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
  class ListAuthorizedUsersForDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUsersForDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUsersForDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListAuthorizedUsersForDatabaseResponseBody() = default ;
    ListAuthorizedUsersForDatabaseResponseBody(const ListAuthorizedUsersForDatabaseResponseBody &) = default ;
    ListAuthorizedUsersForDatabaseResponseBody(ListAuthorizedUsersForDatabaseResponseBody &&) = default ;
    ListAuthorizedUsersForDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUsersForDatabaseResponseBody() = default ;
    ListAuthorizedUsersForDatabaseResponseBody& operator=(const ListAuthorizedUsersForDatabaseResponseBody &) = default ;
    ListAuthorizedUsersForDatabaseResponseBody& operator=(ListAuthorizedUsersForDatabaseResponseBody &&) = default ;
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
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserNickName, userNickName_);
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
        && this->userId_ == nullptr && this->userNickName_ == nullptr; };
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


    protected:
      // The UID of the user\\"s Alibaba Cloud account.
      shared_ptr<string> uid_ {};
      // The user IDs.
      shared_ptr<string> userId_ {};
      // The nickname of the user.
      shared_ptr<string> userNickName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedUsersForDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListAuthorizedUsersForDatabaseResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<ListAuthorizedUsersForDatabaseResponseBody::Users>) };
    inline vector<ListAuthorizedUsersForDatabaseResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<ListAuthorizedUsersForDatabaseResponseBody::Users>) };
    inline ListAuthorizedUsersForDatabaseResponseBody& setUsers(const vector<ListAuthorizedUsersForDatabaseResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListAuthorizedUsersForDatabaseResponseBody& setUsers(vector<ListAuthorizedUsersForDatabaseResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The request ID. You can use the ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The list of users that have permissions on the specified instance.
    shared_ptr<vector<ListAuthorizedUsersForDatabaseResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
