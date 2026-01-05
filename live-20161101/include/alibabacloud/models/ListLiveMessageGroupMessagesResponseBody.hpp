// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPMESSAGESRESPONSEBODY_HPP_
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
  class ListLiveMessageGroupMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Hasmore, hasmore_);
      DARABONBA_PTR_TO_JSON(MessageList, messageList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Hasmore, hasmore_);
      DARABONBA_PTR_FROM_JSON(MessageList, messageList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLiveMessageGroupMessagesResponseBody() = default ;
    ListLiveMessageGroupMessagesResponseBody(const ListLiveMessageGroupMessagesResponseBody &) = default ;
    ListLiveMessageGroupMessagesResponseBody(ListLiveMessageGroupMessagesResponseBody &&) = default ;
    ListLiveMessageGroupMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupMessagesResponseBody() = default ;
    ListLiveMessageGroupMessagesResponseBody& operator=(const ListLiveMessageGroupMessagesResponseBody &) = default ;
    ListLiveMessageGroupMessagesResponseBody& operator=(ListLiveMessageGroupMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MessageList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MessageList& obj) { 
        DARABONBA_PTR_TO_JSON(Body, body_);
        DARABONBA_PTR_TO_JSON(MsgTid, msgTid_);
        DARABONBA_PTR_TO_JSON(MsgType, msgType_);
        DARABONBA_PTR_TO_JSON(Sender, sender_);
        DARABONBA_PTR_TO_JSON(SeqNumber, seqNumber_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(TotalMessages, totalMessages_);
      };
      friend void from_json(const Darabonba::Json& j, MessageList& obj) { 
        DARABONBA_PTR_FROM_JSON(Body, body_);
        DARABONBA_PTR_FROM_JSON(MsgTid, msgTid_);
        DARABONBA_PTR_FROM_JSON(MsgType, msgType_);
        DARABONBA_PTR_FROM_JSON(Sender, sender_);
        DARABONBA_PTR_FROM_JSON(SeqNumber, seqNumber_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(TotalMessages, totalMessages_);
      };
      MessageList() = default ;
      MessageList(const MessageList &) = default ;
      MessageList(MessageList &&) = default ;
      MessageList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MessageList() = default ;
      MessageList& operator=(const MessageList &) = default ;
      MessageList& operator=(MessageList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sender : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sender& obj) { 
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Sender& obj) { 
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
        };
        Sender() = default ;
        Sender(const Sender &) = default ;
        Sender(Sender &&) = default ;
        Sender(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sender() = default ;
        Sender& operator=(const Sender &) = default ;
        Sender& operator=(Sender &&) = default ;
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
        inline Sender& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userInfo Field Functions 
        bool hasUserInfo() const { return this->userInfo_ != nullptr;};
        void deleteUserInfo() { this->userInfo_ = nullptr;};
        inline string getUserInfo() const { DARABONBA_PTR_GET_DEFAULT(userInfo_, "") };
        inline Sender& setUserInfo(string userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };


      protected:
        // The ID of the user who sent the message.
        shared_ptr<string> userId_ {};
        // The additional information about the user who sent the message.
        shared_ptr<string> userInfo_ {};
      };

      virtual bool empty() const override { return this->body_ == nullptr
        && this->msgTid_ == nullptr && this->msgType_ == nullptr && this->sender_ == nullptr && this->seqNumber_ == nullptr && this->timestamp_ == nullptr
        && this->totalMessages_ == nullptr; };
      // body Field Functions 
      bool hasBody() const { return this->body_ != nullptr;};
      void deleteBody() { this->body_ = nullptr;};
      inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
      inline MessageList& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


      // msgTid Field Functions 
      bool hasMsgTid() const { return this->msgTid_ != nullptr;};
      void deleteMsgTid() { this->msgTid_ = nullptr;};
      inline string getMsgTid() const { DARABONBA_PTR_GET_DEFAULT(msgTid_, "") };
      inline MessageList& setMsgTid(string msgTid) { DARABONBA_PTR_SET_VALUE(msgTid_, msgTid) };


      // msgType Field Functions 
      bool hasMsgType() const { return this->msgType_ != nullptr;};
      void deleteMsgType() { this->msgType_ = nullptr;};
      inline int64_t getMsgType() const { DARABONBA_PTR_GET_DEFAULT(msgType_, 0L) };
      inline MessageList& setMsgType(int64_t msgType) { DARABONBA_PTR_SET_VALUE(msgType_, msgType) };


      // sender Field Functions 
      bool hasSender() const { return this->sender_ != nullptr;};
      void deleteSender() { this->sender_ = nullptr;};
      inline const MessageList::Sender & getSender() const { DARABONBA_PTR_GET_CONST(sender_, MessageList::Sender) };
      inline MessageList::Sender getSender() { DARABONBA_PTR_GET(sender_, MessageList::Sender) };
      inline MessageList& setSender(const MessageList::Sender & sender) { DARABONBA_PTR_SET_VALUE(sender_, sender) };
      inline MessageList& setSender(MessageList::Sender && sender) { DARABONBA_PTR_SET_RVALUE(sender_, sender) };


      // seqNumber Field Functions 
      bool hasSeqNumber() const { return this->seqNumber_ != nullptr;};
      void deleteSeqNumber() { this->seqNumber_ = nullptr;};
      inline int64_t getSeqNumber() const { DARABONBA_PTR_GET_DEFAULT(seqNumber_, 0L) };
      inline MessageList& setSeqNumber(int64_t seqNumber) { DARABONBA_PTR_SET_VALUE(seqNumber_, seqNumber) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline MessageList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // totalMessages Field Functions 
      bool hasTotalMessages() const { return this->totalMessages_ != nullptr;};
      void deleteTotalMessages() { this->totalMessages_ = nullptr;};
      inline int64_t getTotalMessages() const { DARABONBA_PTR_GET_DEFAULT(totalMessages_, 0L) };
      inline MessageList& setTotalMessages(int64_t totalMessages) { DARABONBA_PTR_SET_VALUE(totalMessages_, totalMessages) };


    protected:
      // The message body.
      shared_ptr<string> body_ {};
      // The ID of the message.
      shared_ptr<string> msgTid_ {};
      // The type of the message.
      shared_ptr<int64_t> msgType_ {};
      // The details about the user who sent the message.
      shared_ptr<MessageList::Sender> sender_ {};
      // The sequence number of the message.
      shared_ptr<int64_t> seqNumber_ {};
      // The time when the message was sent. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> timestamp_ {};
      // The total number of messages.
      shared_ptr<int64_t> totalMessages_ {};
    };

    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->hasmore_ == nullptr && this->messageList_ == nullptr && this->nextPageToken_ == nullptr && this->requestId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListLiveMessageGroupMessagesResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hasmore Field Functions 
    bool hasHasmore() const { return this->hasmore_ != nullptr;};
    void deleteHasmore() { this->hasmore_ = nullptr;};
    inline bool getHasmore() const { DARABONBA_PTR_GET_DEFAULT(hasmore_, false) };
    inline ListLiveMessageGroupMessagesResponseBody& setHasmore(bool hasmore) { DARABONBA_PTR_SET_VALUE(hasmore_, hasmore) };


    // messageList Field Functions 
    bool hasMessageList() const { return this->messageList_ != nullptr;};
    void deleteMessageList() { this->messageList_ = nullptr;};
    inline const vector<ListLiveMessageGroupMessagesResponseBody::MessageList> & getMessageList() const { DARABONBA_PTR_GET_CONST(messageList_, vector<ListLiveMessageGroupMessagesResponseBody::MessageList>) };
    inline vector<ListLiveMessageGroupMessagesResponseBody::MessageList> getMessageList() { DARABONBA_PTR_GET(messageList_, vector<ListLiveMessageGroupMessagesResponseBody::MessageList>) };
    inline ListLiveMessageGroupMessagesResponseBody& setMessageList(const vector<ListLiveMessageGroupMessagesResponseBody::MessageList> & messageList) { DARABONBA_PTR_SET_VALUE(messageList_, messageList) };
    inline ListLiveMessageGroupMessagesResponseBody& setMessageList(vector<ListLiveMessageGroupMessagesResponseBody::MessageList> && messageList) { DARABONBA_PTR_SET_RVALUE(messageList_, messageList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline int64_t getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, 0L) };
    inline ListLiveMessageGroupMessagesResponseBody& setNextPageToken(int64_t nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveMessageGroupMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the group queried.
    shared_ptr<string> groupId_ {};
    // Indicates whether the current page is followed by another page.
    shared_ptr<bool> hasmore_ {};
    // Details about the messages.
    shared_ptr<vector<ListLiveMessageGroupMessagesResponseBody::MessageList>> messageList_ {};
    // The starting page number for the next query. A value of 0 indicates that no further pages can be queried.
    shared_ptr<int64_t> nextPageToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
