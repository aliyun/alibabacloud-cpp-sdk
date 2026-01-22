// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSINRECYCLEBINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSINRECYCLEBINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUsersInRecycleBinResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersInRecycleBinResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersInRecycleBinResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListUsersInRecycleBinResponseBody() = default ;
    ListUsersInRecycleBinResponseBody(const ListUsersInRecycleBinResponseBody &) = default ;
    ListUsersInRecycleBinResponseBody(ListUsersInRecycleBinResponseBody &&) = default ;
    ListUsersInRecycleBinResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersInRecycleBinResponseBody() = default ;
    ListUsersInRecycleBinResponseBody& operator=(const ListUsersInRecycleBinResponseBody &) = default ;
    ListUsersInRecycleBinResponseBody& operator=(ListUsersInRecycleBinResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(User, user_);
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
      class User : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const User& obj) { 
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(DeleteDate, deleteDate_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(RecycleDate, recycleDate_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
        };
        friend void from_json(const Darabonba::Json& j, User& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(DeleteDate, deleteDate_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(RecycleDate, recycleDate_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
        };
        User() = default ;
        User(const User &) = default ;
        User(User &&) = default ;
        User(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~User() = default ;
        User& operator=(const User &) = default ;
        User& operator=(User &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createDate_ == nullptr
        && this->deleteDate_ == nullptr && this->displayName_ == nullptr && this->recycleDate_ == nullptr && this->userId_ == nullptr && this->userPrincipalName_ == nullptr; };
        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline User& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // deleteDate Field Functions 
        bool hasDeleteDate() const { return this->deleteDate_ != nullptr;};
        void deleteDeleteDate() { this->deleteDate_ = nullptr;};
        inline string getDeleteDate() const { DARABONBA_PTR_GET_DEFAULT(deleteDate_, "") };
        inline User& setDeleteDate(string deleteDate) { DARABONBA_PTR_SET_VALUE(deleteDate_, deleteDate) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline User& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // recycleDate Field Functions 
        bool hasRecycleDate() const { return this->recycleDate_ != nullptr;};
        void deleteRecycleDate() { this->recycleDate_ = nullptr;};
        inline string getRecycleDate() const { DARABONBA_PTR_GET_DEFAULT(recycleDate_, "") };
        inline User& setRecycleDate(string recycleDate) { DARABONBA_PTR_SET_VALUE(recycleDate_, recycleDate) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline User& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userPrincipalName Field Functions 
        bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
        void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
        inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
        inline User& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


      protected:
        // The time when the RAM user was created.
        shared_ptr<string> createDate_ {};
        // The time when the RAM user will be permanently deleted from the recycle bin.
        shared_ptr<string> deleteDate_ {};
        // The display name of the RAM user.
        shared_ptr<string> displayName_ {};
        // The time when the RAM user was deleted and moved to the recycle bin.
        shared_ptr<string> recycleDate_ {};
        // The ID of the RAM user.
        shared_ptr<string> userId_ {};
        // The logon name of the RAM user.
        shared_ptr<string> userPrincipalName_ {};
      };

      virtual bool empty() const override { return this->user_ == nullptr; };
      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline const vector<Users::User> & getUser() const { DARABONBA_PTR_GET_CONST(user_, vector<Users::User>) };
      inline vector<Users::User> getUser() { DARABONBA_PTR_GET(user_, vector<Users::User>) };
      inline Users& setUser(const vector<Users::User> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
      inline Users& setUser(vector<Users::User> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


    protected:
      shared_ptr<vector<Users::User>> user_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->marker_ == nullptr && this->requestId_ == nullptr && this->users_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListUsersInRecycleBinResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListUsersInRecycleBinResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersInRecycleBinResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const ListUsersInRecycleBinResponseBody::Users & getUsers() const { DARABONBA_PTR_GET_CONST(users_, ListUsersInRecycleBinResponseBody::Users) };
    inline ListUsersInRecycleBinResponseBody::Users getUsers() { DARABONBA_PTR_GET(users_, ListUsersInRecycleBinResponseBody::Users) };
    inline ListUsersInRecycleBinResponseBody& setUsers(const ListUsersInRecycleBinResponseBody::Users & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersInRecycleBinResponseBody& setUsers(ListUsersInRecycleBinResponseBody::Users && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isTruncated_ {};
    // The parameter that is used to obtain the truncated part. It takes effect only when `IsTruncated` is set to `true`.
    shared_ptr<string> marker_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the RAM users.
    shared_ptr<ListUsersInRecycleBinResponseBody::Users> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
