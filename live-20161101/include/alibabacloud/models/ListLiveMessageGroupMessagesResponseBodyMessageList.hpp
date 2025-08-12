// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPMESSAGESRESPONSEBODYMESSAGELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPMESSAGESRESPONSEBODYMESSAGELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLiveMessageGroupMessagesResponseBodyMessageListSender.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageGroupMessagesResponseBodyMessageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupMessagesResponseBodyMessageList& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(MsgTid, msgTid_);
      DARABONBA_PTR_TO_JSON(MsgType, msgType_);
      DARABONBA_PTR_TO_JSON(Sender, sender_);
      DARABONBA_PTR_TO_JSON(SeqNumber, seqNumber_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TotalMessages, totalMessages_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupMessagesResponseBodyMessageList& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(MsgTid, msgTid_);
      DARABONBA_PTR_FROM_JSON(MsgType, msgType_);
      DARABONBA_PTR_FROM_JSON(Sender, sender_);
      DARABONBA_PTR_FROM_JSON(SeqNumber, seqNumber_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TotalMessages, totalMessages_);
    };
    ListLiveMessageGroupMessagesResponseBodyMessageList() = default ;
    ListLiveMessageGroupMessagesResponseBodyMessageList(const ListLiveMessageGroupMessagesResponseBodyMessageList &) = default ;
    ListLiveMessageGroupMessagesResponseBodyMessageList(ListLiveMessageGroupMessagesResponseBodyMessageList &&) = default ;
    ListLiveMessageGroupMessagesResponseBodyMessageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupMessagesResponseBodyMessageList() = default ;
    ListLiveMessageGroupMessagesResponseBodyMessageList& operator=(const ListLiveMessageGroupMessagesResponseBodyMessageList &) = default ;
    ListLiveMessageGroupMessagesResponseBodyMessageList& operator=(ListLiveMessageGroupMessagesResponseBodyMessageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->msgTid_ != nullptr && this->msgType_ != nullptr && this->sender_ != nullptr && this->seqNumber_ != nullptr && this->timestamp_ != nullptr
        && this->totalMessages_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline ListLiveMessageGroupMessagesResponseBodyMessageList& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // msgTid Field Functions 
    bool hasMsgTid() const { return this->msgTid_ != nullptr;};
    void deleteMsgTid() { this->msgTid_ = nullptr;};
    inline string msgTid() const { DARABONBA_PTR_GET_DEFAULT(msgTid_, "") };
    inline ListLiveMessageGroupMessagesResponseBodyMessageList& setMsgTid(string msgTid) { DARABONBA_PTR_SET_VALUE(msgTid_, msgTid) };


    // msgType Field Functions 
    bool hasMsgType() const { return this->msgType_ != nullptr;};
    void deleteMsgType() { this->msgType_ = nullptr;};
    inline int64_t msgType() const { DARABONBA_PTR_GET_DEFAULT(msgType_, 0L) };
    inline ListLiveMessageGroupMessagesResponseBodyMessageList& setMsgType(int64_t msgType) { DARABONBA_PTR_SET_VALUE(msgType_, msgType) };


    // sender Field Functions 
    bool hasSender() const { return this->sender_ != nullptr;};
    void deleteSender() { this->sender_ = nullptr;};
    inline const Models::ListLiveMessageGroupMessagesResponseBodyMessageListSender & sender() const { DARABONBA_PTR_GET_CONST(sender_, Models::ListLiveMessageGroupMessagesResponseBodyMessageListSender) };
    inline Models::ListLiveMessageGroupMessagesResponseBodyMessageListSender sender() { DARABONBA_PTR_GET(sender_, Models::ListLiveMessageGroupMessagesResponseBodyMessageListSender) };
    inline ListLiveMessageGroupMessagesResponseBodyMessageList& setSender(const Models::ListLiveMessageGroupMessagesResponseBodyMessageListSender & sender) { DARABONBA_PTR_SET_VALUE(sender_, sender) };
    inline ListLiveMessageGroupMessagesResponseBodyMessageList& setSender(Models::ListLiveMessageGroupMessagesResponseBodyMessageListSender && sender) { DARABONBA_PTR_SET_RVALUE(sender_, sender) };


    // seqNumber Field Functions 
    bool hasSeqNumber() const { return this->seqNumber_ != nullptr;};
    void deleteSeqNumber() { this->seqNumber_ = nullptr;};
    inline int64_t seqNumber() const { DARABONBA_PTR_GET_DEFAULT(seqNumber_, 0L) };
    inline ListLiveMessageGroupMessagesResponseBodyMessageList& setSeqNumber(int64_t seqNumber) { DARABONBA_PTR_SET_VALUE(seqNumber_, seqNumber) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ListLiveMessageGroupMessagesResponseBodyMessageList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // totalMessages Field Functions 
    bool hasTotalMessages() const { return this->totalMessages_ != nullptr;};
    void deleteTotalMessages() { this->totalMessages_ = nullptr;};
    inline int64_t totalMessages() const { DARABONBA_PTR_GET_DEFAULT(totalMessages_, 0L) };
    inline ListLiveMessageGroupMessagesResponseBodyMessageList& setTotalMessages(int64_t totalMessages) { DARABONBA_PTR_SET_VALUE(totalMessages_, totalMessages) };


  protected:
    // The message body.
    std::shared_ptr<string> body_ = nullptr;
    // The ID of the message.
    std::shared_ptr<string> msgTid_ = nullptr;
    // The type of the message.
    std::shared_ptr<int64_t> msgType_ = nullptr;
    // The details about the user who sent the message.
    std::shared_ptr<Models::ListLiveMessageGroupMessagesResponseBodyMessageListSender> sender_ = nullptr;
    // The sequence number of the message.
    std::shared_ptr<int64_t> seqNumber_ = nullptr;
    // The time when the message was sent. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The total number of messages.
    std::shared_ptr<int64_t> totalMessages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
