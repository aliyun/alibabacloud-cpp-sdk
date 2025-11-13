// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROCESSCUSTOMIMCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROCESSCUSTOMIMCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ProcessCustomIMCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProcessCustomIMCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MessageContent, messageContent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SenderAvatarMediaId, senderAvatarMediaId_);
      DARABONBA_PTR_TO_JSON(SenderId, senderId_);
      DARABONBA_PTR_TO_JSON(SenderName, senderName_);
    };
    friend void from_json(const Darabonba::Json& j, ProcessCustomIMCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MessageContent, messageContent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SenderAvatarMediaId, senderAvatarMediaId_);
      DARABONBA_PTR_FROM_JSON(SenderId, senderId_);
      DARABONBA_PTR_FROM_JSON(SenderName, senderName_);
    };
    ProcessCustomIMCallbackRequest() = default ;
    ProcessCustomIMCallbackRequest(const ProcessCustomIMCallbackRequest &) = default ;
    ProcessCustomIMCallbackRequest(ProcessCustomIMCallbackRequest &&) = default ;
    ProcessCustomIMCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProcessCustomIMCallbackRequest() = default ;
    ProcessCustomIMCallbackRequest& operator=(const ProcessCustomIMCallbackRequest &) = default ;
    ProcessCustomIMCallbackRequest& operator=(ProcessCustomIMCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && return this->conversationId_ == nullptr && return this->instanceId_ == nullptr && return this->messageContent_ == nullptr && return this->requestId_ == nullptr && return this->senderAvatarMediaId_ == nullptr
        && return this->senderId_ == nullptr && return this->senderName_ == nullptr; };
    // accessChannelId Field Functions 
    bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
    void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
    inline string accessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
    inline ProcessCustomIMCallbackRequest& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string conversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ProcessCustomIMCallbackRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ProcessCustomIMCallbackRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // messageContent Field Functions 
    bool hasMessageContent() const { return this->messageContent_ != nullptr;};
    void deleteMessageContent() { this->messageContent_ = nullptr;};
    inline string messageContent() const { DARABONBA_PTR_GET_DEFAULT(messageContent_, "") };
    inline ProcessCustomIMCallbackRequest& setMessageContent(string messageContent) { DARABONBA_PTR_SET_VALUE(messageContent_, messageContent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ProcessCustomIMCallbackRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // senderAvatarMediaId Field Functions 
    bool hasSenderAvatarMediaId() const { return this->senderAvatarMediaId_ != nullptr;};
    void deleteSenderAvatarMediaId() { this->senderAvatarMediaId_ = nullptr;};
    inline string senderAvatarMediaId() const { DARABONBA_PTR_GET_DEFAULT(senderAvatarMediaId_, "") };
    inline ProcessCustomIMCallbackRequest& setSenderAvatarMediaId(string senderAvatarMediaId) { DARABONBA_PTR_SET_VALUE(senderAvatarMediaId_, senderAvatarMediaId) };


    // senderId Field Functions 
    bool hasSenderId() const { return this->senderId_ != nullptr;};
    void deleteSenderId() { this->senderId_ = nullptr;};
    inline string senderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
    inline ProcessCustomIMCallbackRequest& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


    // senderName Field Functions 
    bool hasSenderName() const { return this->senderName_ != nullptr;};
    void deleteSenderName() { this->senderName_ = nullptr;};
    inline string senderName() const { DARABONBA_PTR_GET_DEFAULT(senderName_, "") };
    inline ProcessCustomIMCallbackRequest& setSenderName(string senderName) { DARABONBA_PTR_SET_VALUE(senderName_, senderName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accessChannelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conversationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> messageContent_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> senderAvatarMediaId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> senderId_ = nullptr;
    std::shared_ptr<string> senderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
