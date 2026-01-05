// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERBYIDRESPONSEBODY_HPP_
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
  class ListMessageGroupUserByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageGroupUserByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageGroupUserByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListMessageGroupUserByIdResponseBody() = default ;
    ListMessageGroupUserByIdResponseBody(const ListMessageGroupUserByIdResponseBody &) = default ;
    ListMessageGroupUserByIdResponseBody(ListMessageGroupUserByIdResponseBody &&) = default ;
    ListMessageGroupUserByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageGroupUserByIdResponseBody() = default ;
    ListMessageGroupUserByIdResponseBody& operator=(const ListMessageGroupUserByIdResponseBody &) = default ;
    ListMessageGroupUserByIdResponseBody& operator=(ListMessageGroupUserByIdResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(IsMute, isMute_);
          DARABONBA_PTR_TO_JSON(MuteBy, muteBy_);
          DARABONBA_PTR_TO_JSON(UserAvatar, userAvatar_);
          DARABONBA_PTR_TO_JSON(UserExtension, userExtension_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserNick, userNick_);
        };
        friend void from_json(const Darabonba::Json& j, UserList& obj) { 
          DARABONBA_PTR_FROM_JSON(IsMute, isMute_);
          DARABONBA_PTR_FROM_JSON(MuteBy, muteBy_);
          DARABONBA_PTR_FROM_JSON(UserAvatar, userAvatar_);
          DARABONBA_PTR_FROM_JSON(UserExtension, userExtension_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
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
        virtual bool empty() const override { return this->isMute_ == nullptr
        && this->muteBy_ == nullptr && this->userAvatar_ == nullptr && this->userExtension_ == nullptr && this->userId_ == nullptr && this->userNick_ == nullptr; };
        // isMute Field Functions 
        bool hasIsMute() const { return this->isMute_ != nullptr;};
        void deleteIsMute() { this->isMute_ = nullptr;};
        inline bool getIsMute() const { DARABONBA_PTR_GET_DEFAULT(isMute_, false) };
        inline UserList& setIsMute(bool isMute) { DARABONBA_PTR_SET_VALUE(isMute_, isMute) };


        // muteBy Field Functions 
        bool hasMuteBy() const { return this->muteBy_ != nullptr;};
        void deleteMuteBy() { this->muteBy_ = nullptr;};
        inline const vector<string> & getMuteBy() const { DARABONBA_PTR_GET_CONST(muteBy_, vector<string>) };
        inline vector<string> getMuteBy() { DARABONBA_PTR_GET(muteBy_, vector<string>) };
        inline UserList& setMuteBy(const vector<string> & muteBy) { DARABONBA_PTR_SET_VALUE(muteBy_, muteBy) };
        inline UserList& setMuteBy(vector<string> && muteBy) { DARABONBA_PTR_SET_RVALUE(muteBy_, muteBy) };


        // userAvatar Field Functions 
        bool hasUserAvatar() const { return this->userAvatar_ != nullptr;};
        void deleteUserAvatar() { this->userAvatar_ = nullptr;};
        inline string getUserAvatar() const { DARABONBA_PTR_GET_DEFAULT(userAvatar_, "") };
        inline UserList& setUserAvatar(string userAvatar) { DARABONBA_PTR_SET_VALUE(userAvatar_, userAvatar) };


        // userExtension Field Functions 
        bool hasUserExtension() const { return this->userExtension_ != nullptr;};
        void deleteUserExtension() { this->userExtension_ = nullptr;};
        inline string getUserExtension() const { DARABONBA_PTR_GET_DEFAULT(userExtension_, "") };
        inline UserList& setUserExtension(string userExtension) { DARABONBA_PTR_SET_VALUE(userExtension_, userExtension) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userNick Field Functions 
        bool hasUserNick() const { return this->userNick_ != nullptr;};
        void deleteUserNick() { this->userNick_ = nullptr;};
        inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
        inline UserList& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


      protected:
        // Indicates whether the user is muted. Valid values:
        // 
        // *   true: The user is muted.
        // *   false: The user is not muted.
        shared_ptr<bool> isMute_ {};
        // The type of the mute. Valid values:
        // 
        // *   group: All members in the message group are muted.
        // *   user: Specific members in the message group are muted.
        shared_ptr<vector<string>> muteBy_ {};
        // The URL of the profile picture of the user.
        shared_ptr<string> userAvatar_ {};
        // The custom information about the user.
        shared_ptr<string> userExtension_ {};
        // The ID of the user.
        shared_ptr<string> userId_ {};
        // The nickname of the user.
        shared_ptr<string> userNick_ {};
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
      // *   true
      // *   false
      shared_ptr<bool> hasMore_ {};
      // The total number of users returned.
      shared_ptr<int32_t> total_ {};
      // The list of users.
      shared_ptr<vector<Result::UserList>> userList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessageGroupUserByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListMessageGroupUserByIdResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListMessageGroupUserByIdResponseBody::Result) };
    inline ListMessageGroupUserByIdResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListMessageGroupUserByIdResponseBody::Result) };
    inline ListMessageGroupUserByIdResponseBody& setResult(const ListMessageGroupUserByIdResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListMessageGroupUserByIdResponseBody& setResult(ListMessageGroupUserByIdResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned results.
    shared_ptr<ListMessageGroupUserByIdResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
