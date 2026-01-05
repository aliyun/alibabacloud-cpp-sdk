// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETONLINEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETONLINEUSERSRESPONSEBODY_HPP_
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
  class BatchGetOnlineUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetOnlineUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetOnlineUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    BatchGetOnlineUsersResponseBody() = default ;
    BatchGetOnlineUsersResponseBody(const BatchGetOnlineUsersResponseBody &) = default ;
    BatchGetOnlineUsersResponseBody(BatchGetOnlineUsersResponseBody &&) = default ;
    BatchGetOnlineUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetOnlineUsersResponseBody() = default ;
    BatchGetOnlineUsersResponseBody& operator=(const BatchGetOnlineUsersResponseBody &) = default ;
    BatchGetOnlineUsersResponseBody& operator=(BatchGetOnlineUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(OnlineUsers, onlineUsers_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(OnlineUsers, onlineUsers_);
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
      class OnlineUsers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OnlineUsers& obj) { 
          DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
          DARABONBA_PTR_TO_JSON(Online, online_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, OnlineUsers& obj) { 
          DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
          DARABONBA_PTR_FROM_JSON(Online, online_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        OnlineUsers() = default ;
        OnlineUsers(const OnlineUsers &) = default ;
        OnlineUsers(OnlineUsers &&) = default ;
        OnlineUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OnlineUsers() = default ;
        OnlineUsers& operator=(const OnlineUsers &) = default ;
        OnlineUsers& operator=(OnlineUsers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->joinTime_ == nullptr
        && this->online_ == nullptr && this->userId_ == nullptr; };
        // joinTime Field Functions 
        bool hasJoinTime() const { return this->joinTime_ != nullptr;};
        void deleteJoinTime() { this->joinTime_ = nullptr;};
        inline int64_t getJoinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, 0L) };
        inline OnlineUsers& setJoinTime(int64_t joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


        // online Field Functions 
        bool hasOnline() const { return this->online_ != nullptr;};
        void deleteOnline() { this->online_ = nullptr;};
        inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
        inline OnlineUsers& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline OnlineUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The time when the user joined the group. The value is a UTC timestamp. Unit: milliseconds.
        shared_ptr<int64_t> joinTime_ {};
        // Indicates whether the user is online. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> online_ {};
        // The ID of the user.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->onlineUsers_ == nullptr; };
      // onlineUsers Field Functions 
      bool hasOnlineUsers() const { return this->onlineUsers_ != nullptr;};
      void deleteOnlineUsers() { this->onlineUsers_ = nullptr;};
      inline const vector<Result::OnlineUsers> & getOnlineUsers() const { DARABONBA_PTR_GET_CONST(onlineUsers_, vector<Result::OnlineUsers>) };
      inline vector<Result::OnlineUsers> getOnlineUsers() { DARABONBA_PTR_GET(onlineUsers_, vector<Result::OnlineUsers>) };
      inline Result& setOnlineUsers(const vector<Result::OnlineUsers> & onlineUsers) { DARABONBA_PTR_SET_VALUE(onlineUsers_, onlineUsers) };
      inline Result& setOnlineUsers(vector<Result::OnlineUsers> && onlineUsers) { DARABONBA_PTR_SET_RVALUE(onlineUsers_, onlineUsers) };


    protected:
      // The information about users.
      shared_ptr<vector<Result::OnlineUsers>> onlineUsers_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetOnlineUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const BatchGetOnlineUsersResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, BatchGetOnlineUsersResponseBody::Result) };
    inline BatchGetOnlineUsersResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, BatchGetOnlineUsersResponseBody::Result) };
    inline BatchGetOnlineUsersResponseBody& setResult(const BatchGetOnlineUsersResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline BatchGetOnlineUsersResponseBody& setResult(BatchGetOnlineUsersResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned results.
    shared_ptr<BatchGetOnlineUsersResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
