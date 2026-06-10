// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPCHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPCHATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateAppChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BotId, botId_);
      DARABONBA_PTR_TO_JSON(ChatId, chatId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BotId, botId_);
      DARABONBA_PTR_FROM_JSON(ChatId, chatId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    CreateAppChatRequest() = default ;
    CreateAppChatRequest(const CreateAppChatRequest &) = default ;
    CreateAppChatRequest(CreateAppChatRequest &&) = default ;
    CreateAppChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppChatRequest() = default ;
    CreateAppChatRequest& operator=(const CreateAppChatRequest &) = default ;
    CreateAppChatRequest& operator=(CreateAppChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->botId_ == nullptr
        && this->chatId_ == nullptr && this->conversationId_ == nullptr && this->messages_ == nullptr && this->siteId_ == nullptr; };
    // botId Field Functions 
    bool hasBotId() const { return this->botId_ != nullptr;};
    void deleteBotId() { this->botId_ = nullptr;};
    inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
    inline CreateAppChatRequest& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline CreateAppChatRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline CreateAppChatRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline string getMessages() const { DARABONBA_PTR_GET_DEFAULT(messages_, "") };
    inline CreateAppChatRequest& setMessages(string messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline CreateAppChatRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Bot ID
    shared_ptr<string> botId_ {};
    // Chat ID to be provided when recovering a conversation after an execution break
    shared_ptr<string> chatId_ {};
    // Session ID; required from the second turn onward in a multi-turn conversation scenario
    shared_ptr<string> conversationId_ {};
    // List of conversation messages (in JSON array format)
    shared_ptr<string> messages_ {};
    // Site ID
    shared_ptr<string> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
