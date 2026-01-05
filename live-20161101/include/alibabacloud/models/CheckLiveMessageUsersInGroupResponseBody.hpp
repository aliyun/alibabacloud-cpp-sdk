// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSINGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSINGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CheckLiveMessageUsersInGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckLiveMessageUsersInGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, CheckLiveMessageUsersInGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    CheckLiveMessageUsersInGroupResponseBody() = default ;
    CheckLiveMessageUsersInGroupResponseBody(const CheckLiveMessageUsersInGroupResponseBody &) = default ;
    CheckLiveMessageUsersInGroupResponseBody(CheckLiveMessageUsersInGroupResponseBody &&) = default ;
    CheckLiveMessageUsersInGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckLiveMessageUsersInGroupResponseBody() = default ;
    CheckLiveMessageUsersInGroupResponseBody& operator=(const CheckLiveMessageUsersInGroupResponseBody &) = default ;
    CheckLiveMessageUsersInGroupResponseBody& operator=(CheckLiveMessageUsersInGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(Online, online_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(Online, online_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->online_ == nullptr
        && this->userId_ == nullptr; };
      // online Field Functions 
      bool hasOnline() const { return this->online_ != nullptr;};
      void deleteOnline() { this->online_ = nullptr;};
      inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
      inline Users& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Users& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Indicates whether the user is in the group.
      shared_ptr<bool> online_ {};
      // The ID of the user.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckLiveMessageUsersInGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<CheckLiveMessageUsersInGroupResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<CheckLiveMessageUsersInGroupResponseBody::Users>) };
    inline vector<CheckLiveMessageUsersInGroupResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<CheckLiveMessageUsersInGroupResponseBody::Users>) };
    inline CheckLiveMessageUsersInGroupResponseBody& setUsers(const vector<CheckLiveMessageUsersInGroupResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CheckLiveMessageUsersInGroupResponseBody& setUsers(vector<CheckLiveMessageUsersInGroupResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of users queried.
    shared_ptr<vector<CheckLiveMessageUsersInGroupResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
