// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSONLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSONLINERESPONSEBODY_HPP_
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
  class CheckLiveMessageUsersOnlineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckLiveMessageUsersOnlineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, CheckLiveMessageUsersOnlineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    CheckLiveMessageUsersOnlineResponseBody() = default ;
    CheckLiveMessageUsersOnlineResponseBody(const CheckLiveMessageUsersOnlineResponseBody &) = default ;
    CheckLiveMessageUsersOnlineResponseBody(CheckLiveMessageUsersOnlineResponseBody &&) = default ;
    CheckLiveMessageUsersOnlineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckLiveMessageUsersOnlineResponseBody() = default ;
    CheckLiveMessageUsersOnlineResponseBody& operator=(const CheckLiveMessageUsersOnlineResponseBody &) = default ;
    CheckLiveMessageUsersOnlineResponseBody& operator=(CheckLiveMessageUsersOnlineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserList& obj) { 
        DARABONBA_PTR_TO_JSON(Online, online_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, UserList& obj) { 
        DARABONBA_PTR_FROM_JSON(Online, online_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      UserList() = default ;
      UserList(const UserList &) = default ;
      UserList(UserList &&) = default ;
      UserList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserList() = default ;
      UserList& operator=(const UserList &) = default ;
      UserList& operator=(UserList &&) = default ;
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
      inline UserList& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Indicates whether the user is online.
      shared_ptr<bool> online_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckLiveMessageUsersOnlineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<CheckLiveMessageUsersOnlineResponseBody::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<CheckLiveMessageUsersOnlineResponseBody::UserList>) };
    inline vector<CheckLiveMessageUsersOnlineResponseBody::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<CheckLiveMessageUsersOnlineResponseBody::UserList>) };
    inline CheckLiveMessageUsersOnlineResponseBody& setUserList(const vector<CheckLiveMessageUsersOnlineResponseBody::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline CheckLiveMessageUsersOnlineResponseBody& setUserList(vector<CheckLiveMessageUsersOnlineResponseBody::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of users queried.
    shared_ptr<vector<CheckLiveMessageUsersOnlineResponseBody::UserList>> userList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
