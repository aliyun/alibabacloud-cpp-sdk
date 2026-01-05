// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPUSERSRESPONSEBODY_HPP_
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
  class ListLiveMessageGroupUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Hasmore, hasmore_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Hasmore, hasmore_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    ListLiveMessageGroupUsersResponseBody() = default ;
    ListLiveMessageGroupUsersResponseBody(const ListLiveMessageGroupUsersResponseBody &) = default ;
    ListLiveMessageGroupUsersResponseBody(ListLiveMessageGroupUsersResponseBody &&) = default ;
    ListLiveMessageGroupUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupUsersResponseBody() = default ;
    ListLiveMessageGroupUsersResponseBody& operator=(const ListLiveMessageGroupUsersResponseBody &) = default ;
    ListLiveMessageGroupUsersResponseBody& operator=(ListLiveMessageGroupUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserList& obj) { 
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      };
      friend void from_json(const Darabonba::Json& j, UserList& obj) { 
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
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
      virtual bool empty() const override { return this->userId_ == nullptr
        && this->userInfo_ == nullptr; };
      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userInfo Field Functions 
      bool hasUserInfo() const { return this->userInfo_ != nullptr;};
      void deleteUserInfo() { this->userInfo_ = nullptr;};
      inline string getUserInfo() const { DARABONBA_PTR_GET_DEFAULT(userInfo_, "") };
      inline UserList& setUserInfo(string userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };


    protected:
      // The ID of the user.
      shared_ptr<string> userId_ {};
      // The additional information about the user.
      shared_ptr<string> userInfo_ {};
    };

    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->hasmore_ == nullptr && this->nextPageToken_ == nullptr && this->requestId_ == nullptr && this->userList_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListLiveMessageGroupUsersResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hasmore Field Functions 
    bool hasHasmore() const { return this->hasmore_ != nullptr;};
    void deleteHasmore() { this->hasmore_ = nullptr;};
    inline bool getHasmore() const { DARABONBA_PTR_GET_DEFAULT(hasmore_, false) };
    inline ListLiveMessageGroupUsersResponseBody& setHasmore(bool hasmore) { DARABONBA_PTR_SET_VALUE(hasmore_, hasmore) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline int64_t getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, 0L) };
    inline ListLiveMessageGroupUsersResponseBody& setNextPageToken(int64_t nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveMessageGroupUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<ListLiveMessageGroupUsersResponseBody::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<ListLiveMessageGroupUsersResponseBody::UserList>) };
    inline vector<ListLiveMessageGroupUsersResponseBody::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<ListLiveMessageGroupUsersResponseBody::UserList>) };
    inline ListLiveMessageGroupUsersResponseBody& setUserList(const vector<ListLiveMessageGroupUsersResponseBody::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline ListLiveMessageGroupUsersResponseBody& setUserList(vector<ListLiveMessageGroupUsersResponseBody::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // The ID of the group queried.
    shared_ptr<string> groupId_ {};
    // Indicates whether the current page is followed by another page.
    shared_ptr<bool> hasmore_ {};
    // The starting page number for the next query. A value of 0 indicates that no further pages can be queried.
    shared_ptr<int64_t> nextPageToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details about the users.
    shared_ptr<vector<ListLiveMessageGroupUsersResponseBody::UserList>> userList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
