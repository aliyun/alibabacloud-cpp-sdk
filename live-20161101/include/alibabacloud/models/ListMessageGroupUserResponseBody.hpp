// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERRESPONSEBODY_HPP_
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
  class ListMessageGroupUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageGroupUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageGroupUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListMessageGroupUserResponseBody() = default ;
    ListMessageGroupUserResponseBody(const ListMessageGroupUserResponseBody &) = default ;
    ListMessageGroupUserResponseBody(ListMessageGroupUserResponseBody &&) = default ;
    ListMessageGroupUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageGroupUserResponseBody() = default ;
    ListMessageGroupUserResponseBody& operator=(const ListMessageGroupUserResponseBody &) = default ;
    ListMessageGroupUserResponseBody& operator=(ListMessageGroupUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(UserList, userList_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(UserList, userList_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserList& obj) { 
          DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, UserList& obj) { 
          DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
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
        virtual bool empty() const override { return this->joinTime_ == nullptr
        && this->userId_ == nullptr; };
        // joinTime Field Functions 
        bool hasJoinTime() const { return this->joinTime_ != nullptr;};
        void deleteJoinTime() { this->joinTime_ = nullptr;};
        inline int64_t getJoinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, 0L) };
        inline UserList& setJoinTime(int64_t joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The time when the user joined the message group. The value is a UTC timestamp.
        shared_ptr<int64_t> joinTime_ {};
        // The ID of the user.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->total_ == nullptr && this->userList_ == nullptr; };
      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline Result& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Result& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // userList Field Functions 
      bool hasUserList() const { return this->userList_ != nullptr;};
      void deleteUserList() { this->userList_ = nullptr;};
      inline const vector<Result::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<Result::UserList>) };
      inline vector<Result::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<Result::UserList>) };
      inline Result& setUserList(const vector<Result::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
      inline Result& setUserList(vector<Result::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


    protected:
      // Indicates whether the current page is followed by another page. Valid values:
      // 
      // *   true: The current page is followed by another page.
      // *   false: The current page is not followed by another page.
      shared_ptr<bool> hasMore_ {};
      // The total number of users in the message group.
      shared_ptr<int32_t> total_ {};
      // Details about the users.
      shared_ptr<vector<Result::UserList>> userList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessageGroupUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListMessageGroupUserResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListMessageGroupUserResponseBody::Result) };
    inline ListMessageGroupUserResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListMessageGroupUserResponseBody::Result) };
    inline ListMessageGroupUserResponseBody& setResult(const ListMessageGroupUserResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListMessageGroupUserResponseBody& setResult(ListMessageGroupUserResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<ListMessageGroupUserResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
