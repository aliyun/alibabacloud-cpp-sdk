// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGECHATTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGECHATTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SendMessageChatTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageChatTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(NeedArchiving, needArchiving_);
      DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageChatTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(NeedArchiving, needArchiving_);
      DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SendMessageChatTextRequest() = default ;
    SendMessageChatTextRequest(const SendMessageChatTextRequest &) = default ;
    SendMessageChatTextRequest(SendMessageChatTextRequest &&) = default ;
    SendMessageChatTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageChatTextRequest() = default ;
    SendMessageChatTextRequest& operator=(const SendMessageChatTextRequest &) = default ;
    SendMessageChatTextRequest& operator=(SendMessageChatTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIAgentId_ == nullptr
        && return this->mode_ == nullptr && return this->needArchiving_ == nullptr && return this->receiverId_ == nullptr && return this->sessionId_ == nullptr && return this->text_ == nullptr
        && return this->type_ == nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string AIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline SendMessageChatTextRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline SendMessageChatTextRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // needArchiving Field Functions 
    bool hasNeedArchiving() const { return this->needArchiving_ != nullptr;};
    void deleteNeedArchiving() { this->needArchiving_ = nullptr;};
    inline bool needArchiving() const { DARABONBA_PTR_GET_DEFAULT(needArchiving_, false) };
    inline SendMessageChatTextRequest& setNeedArchiving(bool needArchiving) { DARABONBA_PTR_SET_VALUE(needArchiving_, needArchiving) };


    // receiverId Field Functions 
    bool hasReceiverId() const { return this->receiverId_ != nullptr;};
    void deleteReceiverId() { this->receiverId_ = nullptr;};
    inline string receiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
    inline SendMessageChatTextRequest& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendMessageChatTextRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SendMessageChatTextRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SendMessageChatTextRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the AI agent.
    // 
    // This parameter is required.
    std::shared_ptr<string> AIAgentId_ = nullptr;
    // The mode of message sending. Valid values:
    // - online
    // - offline
    // 
    // Default value: offline.
    std::shared_ptr<string> mode_ = nullptr;
    // Specifies whether to archive chat records. Default value: true.
    std::shared_ptr<bool> needArchiving_ = nullptr;
    // The ID of the user who receives the message. The ID can be up to 64 bytes in length and can contain letters and digits.
    // 
    // This parameter is required.
    std::shared_ptr<string> receiverId_ = nullptr;
    // The ID of the session.
    // 
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    // The content of the message.
    // 
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
    // The type of the message. Valid values:
    // 
    // - announcement: notification.
    // - custom: custom message.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
