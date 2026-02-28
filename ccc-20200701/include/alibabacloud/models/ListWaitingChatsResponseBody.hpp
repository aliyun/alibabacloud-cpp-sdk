// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGCHATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGCHATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListWaitingChatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingChatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingChatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListWaitingChatsResponseBody() = default ;
    ListWaitingChatsResponseBody(const ListWaitingChatsResponseBody &) = default ;
    ListWaitingChatsResponseBody(ListWaitingChatsResponseBody &&) = default ;
    ListWaitingChatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingChatsResponseBody() = default ;
    ListWaitingChatsResponseBody& operator=(const ListWaitingChatsResponseBody &) = default ;
    ListWaitingChatsResponseBody& operator=(ListWaitingChatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
        DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
        DARABONBA_PTR_TO_JSON(BeingAssigned, beingAssigned_);
        DARABONBA_PTR_TO_JSON(ChatConversationId, chatConversationId_);
        DARABONBA_PTR_TO_JSON(EnqueueTime, enqueueTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Messages, messages_);
        DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
        DARABONBA_PTR_TO_JSON(UserList, userList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
        DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
        DARABONBA_PTR_FROM_JSON(BeingAssigned, beingAssigned_);
        DARABONBA_PTR_FROM_JSON(ChatConversationId, chatConversationId_);
        DARABONBA_PTR_FROM_JSON(EnqueueTime, enqueueTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Messages, messages_);
        DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
        DARABONBA_PTR_FROM_JSON(UserList, userList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserList& obj) { 
          DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
          DARABONBA_PTR_TO_JSON(UserType, userType_);
        };
        friend void from_json(const Darabonba::Json& j, UserList& obj) { 
          DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
          DARABONBA_PTR_FROM_JSON(UserType, userType_);
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
        virtual bool empty() const override { return this->avatarUrl_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr && this->userType_ == nullptr; };
        // avatarUrl Field Functions 
        bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
        void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
        inline string getAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
        inline UserList& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline UserList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        // userType Field Functions 
        bool hasUserType() const { return this->userType_ != nullptr;};
        void deleteUserType() { this->userType_ = nullptr;};
        inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
        inline UserList& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      protected:
        shared_ptr<string> avatarUrl_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
        shared_ptr<string> userType_ {};
      };

      class Messages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Messages& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(SenderId, senderId_);
          DARABONBA_PTR_TO_JSON(SenderType, senderType_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(SenderId, senderId_);
          DARABONBA_PTR_FROM_JSON(SenderType, senderType_);
        };
        Messages() = default ;
        Messages(const Messages &) = default ;
        Messages(Messages &&) = default ;
        Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Messages() = default ;
        Messages& operator=(const Messages &) = default ;
        Messages& operator=(Messages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->senderId_ == nullptr && this->senderType_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // senderId Field Functions 
        bool hasSenderId() const { return this->senderId_ != nullptr;};
        void deleteSenderId() { this->senderId_ = nullptr;};
        inline string getSenderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
        inline Messages& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


        // senderType Field Functions 
        bool hasSenderType() const { return this->senderType_ != nullptr;};
        void deleteSenderType() { this->senderType_ = nullptr;};
        inline string getSenderType() const { DARABONBA_PTR_GET_DEFAULT(senderType_, "") };
        inline Messages& setSenderType(string senderType) { DARABONBA_PTR_SET_VALUE(senderType_, senderType) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> senderId_ {};
        shared_ptr<string> senderType_ {};
      };

      virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && this->accessChannelType_ == nullptr && this->beingAssigned_ == nullptr && this->chatConversationId_ == nullptr && this->enqueueTime_ == nullptr && this->jobId_ == nullptr
        && this->messages_ == nullptr && this->skillGroupId_ == nullptr && this->userList_ == nullptr; };
      // accessChannelId Field Functions 
      bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
      void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
      inline string getAccessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
      inline Data& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


      // accessChannelType Field Functions 
      bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
      void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
      inline string getAccessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
      inline Data& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


      // beingAssigned Field Functions 
      bool hasBeingAssigned() const { return this->beingAssigned_ != nullptr;};
      void deleteBeingAssigned() { this->beingAssigned_ = nullptr;};
      inline bool getBeingAssigned() const { DARABONBA_PTR_GET_DEFAULT(beingAssigned_, false) };
      inline Data& setBeingAssigned(bool beingAssigned) { DARABONBA_PTR_SET_VALUE(beingAssigned_, beingAssigned) };


      // chatConversationId Field Functions 
      bool hasChatConversationId() const { return this->chatConversationId_ != nullptr;};
      void deleteChatConversationId() { this->chatConversationId_ = nullptr;};
      inline string getChatConversationId() const { DARABONBA_PTR_GET_DEFAULT(chatConversationId_, "") };
      inline Data& setChatConversationId(string chatConversationId) { DARABONBA_PTR_SET_VALUE(chatConversationId_, chatConversationId) };


      // enqueueTime Field Functions 
      bool hasEnqueueTime() const { return this->enqueueTime_ != nullptr;};
      void deleteEnqueueTime() { this->enqueueTime_ = nullptr;};
      inline int64_t getEnqueueTime() const { DARABONBA_PTR_GET_DEFAULT(enqueueTime_, 0L) };
      inline Data& setEnqueueTime(int64_t enqueueTime) { DARABONBA_PTR_SET_VALUE(enqueueTime_, enqueueTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Data::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Data::Messages>) };
      inline vector<Data::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Data::Messages>) };
      inline Data& setMessages(const vector<Data::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Data& setMessages(vector<Data::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


      // skillGroupId Field Functions 
      bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
      void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
      inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
      inline Data& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


      // userList Field Functions 
      bool hasUserList() const { return this->userList_ != nullptr;};
      void deleteUserList() { this->userList_ = nullptr;};
      inline const vector<Data::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<Data::UserList>) };
      inline vector<Data::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<Data::UserList>) };
      inline Data& setUserList(const vector<Data::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
      inline Data& setUserList(vector<Data::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


    protected:
      shared_ptr<string> accessChannelId_ {};
      shared_ptr<string> accessChannelType_ {};
      shared_ptr<bool> beingAssigned_ {};
      shared_ptr<string> chatConversationId_ {};
      shared_ptr<int64_t> enqueueTime_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<vector<Data::Messages>> messages_ {};
      shared_ptr<string> skillGroupId_ {};
      shared_ptr<vector<Data::UserList>> userList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListWaitingChatsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListWaitingChatsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListWaitingChatsResponseBody::Data>) };
    inline vector<ListWaitingChatsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListWaitingChatsResponseBody::Data>) };
    inline ListWaitingChatsResponseBody& setData(const vector<ListWaitingChatsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWaitingChatsResponseBody& setData(vector<ListWaitingChatsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListWaitingChatsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListWaitingChatsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWaitingChatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListWaitingChatsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
