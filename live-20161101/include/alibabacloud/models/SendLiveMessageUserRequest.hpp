// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDLIVEMESSAGEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDLIVEMESSAGEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SendLiveMessageUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendLiveMessageUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(HighReliability, highReliability_);
      DARABONBA_PTR_TO_JSON(MsgTid, msgTid_);
      DARABONBA_PTR_TO_JSON(MsgType, msgType_);
      DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
      DARABONBA_PTR_TO_JSON(SenderId, senderId_);
      DARABONBA_PTR_TO_JSON(SenderInfo, senderInfo_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
    };
    friend void from_json(const Darabonba::Json& j, SendLiveMessageUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(HighReliability, highReliability_);
      DARABONBA_PTR_FROM_JSON(MsgTid, msgTid_);
      DARABONBA_PTR_FROM_JSON(MsgType, msgType_);
      DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
      DARABONBA_PTR_FROM_JSON(SenderId, senderId_);
      DARABONBA_PTR_FROM_JSON(SenderInfo, senderInfo_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
    };
    SendLiveMessageUserRequest() = default ;
    SendLiveMessageUserRequest(const SendLiveMessageUserRequest &) = default ;
    SendLiveMessageUserRequest(SendLiveMessageUserRequest &&) = default ;
    SendLiveMessageUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendLiveMessageUserRequest() = default ;
    SendLiveMessageUserRequest& operator=(const SendLiveMessageUserRequest &) = default ;
    SendLiveMessageUserRequest& operator=(SendLiveMessageUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->body_ != nullptr && this->dataCenter_ != nullptr && this->highReliability_ != nullptr && this->msgTid_ != nullptr && this->msgType_ != nullptr
        && this->receiverId_ != nullptr && this->senderId_ != nullptr && this->senderInfo_ != nullptr && this->storage_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SendLiveMessageUserRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline SendLiveMessageUserRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline SendLiveMessageUserRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // highReliability Field Functions 
    bool hasHighReliability() const { return this->highReliability_ != nullptr;};
    void deleteHighReliability() { this->highReliability_ = nullptr;};
    inline bool highReliability() const { DARABONBA_PTR_GET_DEFAULT(highReliability_, false) };
    inline SendLiveMessageUserRequest& setHighReliability(bool highReliability) { DARABONBA_PTR_SET_VALUE(highReliability_, highReliability) };


    // msgTid Field Functions 
    bool hasMsgTid() const { return this->msgTid_ != nullptr;};
    void deleteMsgTid() { this->msgTid_ = nullptr;};
    inline string msgTid() const { DARABONBA_PTR_GET_DEFAULT(msgTid_, "") };
    inline SendLiveMessageUserRequest& setMsgTid(string msgTid) { DARABONBA_PTR_SET_VALUE(msgTid_, msgTid) };


    // msgType Field Functions 
    bool hasMsgType() const { return this->msgType_ != nullptr;};
    void deleteMsgType() { this->msgType_ = nullptr;};
    inline int64_t msgType() const { DARABONBA_PTR_GET_DEFAULT(msgType_, 0L) };
    inline SendLiveMessageUserRequest& setMsgType(int64_t msgType) { DARABONBA_PTR_SET_VALUE(msgType_, msgType) };


    // receiverId Field Functions 
    bool hasReceiverId() const { return this->receiverId_ != nullptr;};
    void deleteReceiverId() { this->receiverId_ = nullptr;};
    inline string receiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
    inline SendLiveMessageUserRequest& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


    // senderId Field Functions 
    bool hasSenderId() const { return this->senderId_ != nullptr;};
    void deleteSenderId() { this->senderId_ = nullptr;};
    inline string senderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
    inline SendLiveMessageUserRequest& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


    // senderInfo Field Functions 
    bool hasSenderInfo() const { return this->senderInfo_ != nullptr;};
    void deleteSenderInfo() { this->senderInfo_ = nullptr;};
    inline string senderInfo() const { DARABONBA_PTR_GET_DEFAULT(senderInfo_, "") };
    inline SendLiveMessageUserRequest& setSenderInfo(string senderInfo) { DARABONBA_PTR_SET_VALUE(senderInfo_, senderInfo) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline bool storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, false) };
    inline SendLiveMessageUserRequest& setStorage(bool storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


  protected:
    // The ID of the interactive messaging application in which the message is sent.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The message body. It can be up to 15 KB in length.
    std::shared_ptr<string> body_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // Specifies whether to set the message as a highly reliable message. A highly reliable message ensures that success is returned only after the receiver has received the message and responded. If the receiver does not respond within 3 seconds, failure is returned.
    // 
    // *   true: sets the message as a highly reliable message.
    // *   false (default): does not set the message as a highly reliable message.
    // 
    // >  This parameter is supported only by the client SDK V1.5.1 and later. When you send a message to a client with an earlier SDK version, the message can be successfully sent without waiting for an acknowledgement (ACK) response.
    std::shared_ptr<bool> highReliability_ = nullptr;
    // The ID of the message, which is a unique identifier that can be used to delete the message. The ID can be up to 64 bytes in length and can contain letters and digits.
    std::shared_ptr<string> msgTid_ = nullptr;
    // The message type.
    std::shared_ptr<int64_t> msgType_ = nullptr;
    // The ID of the user who receives the message. The ID can be up to 64 bytes in length and can contain letters and digits.
    // 
    // >  Make sure that the user who receives the message is online. You can call the CheckLiveMessageUsersOnline operation to query whether the user is online.
    // 
    // This parameter is required.
    std::shared_ptr<string> receiverId_ = nullptr;
    // The ID of the user who sends the message. The ID can be up to 64 bytes in length and can contain letters and digits.
    // 
    // This parameter is required.
    std::shared_ptr<string> senderId_ = nullptr;
    // The additional information about the user who sends the message. It can be up to 512 bytes in length.
    std::shared_ptr<string> senderInfo_ = nullptr;
    // Specifies whether to store the message.
    // 
    // *   true: stores the message.
    // *   false (default): does not store the message.
    std::shared_ptr<bool> storage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
