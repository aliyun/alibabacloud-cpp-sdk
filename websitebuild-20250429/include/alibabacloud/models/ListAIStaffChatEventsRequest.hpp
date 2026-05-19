// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAISTAFFCHATEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAISTAFFCHATEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAIStaffChatEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIStaffChatEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ChatId, chatId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(LastEventId, lastEventId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIStaffChatEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ChatId, chatId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(LastEventId, lastEventId_);
    };
    ListAIStaffChatEventsRequest() = default ;
    ListAIStaffChatEventsRequest(const ListAIStaffChatEventsRequest &) = default ;
    ListAIStaffChatEventsRequest(ListAIStaffChatEventsRequest &&) = default ;
    ListAIStaffChatEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIStaffChatEventsRequest() = default ;
    ListAIStaffChatEventsRequest& operator=(const ListAIStaffChatEventsRequest &) = default ;
    ListAIStaffChatEventsRequest& operator=(ListAIStaffChatEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->chatId_ == nullptr && this->conversationId_ == nullptr && this->lastEventId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ListAIStaffChatEventsRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline ListAIStaffChatEventsRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ListAIStaffChatEventsRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // lastEventId Field Functions 
    bool hasLastEventId() const { return this->lastEventId_ != nullptr;};
    void deleteLastEventId() { this->lastEventId_ = nullptr;};
    inline int32_t getLastEventId() const { DARABONBA_PTR_GET_DEFAULT(lastEventId_, 0) };
    inline ListAIStaffChatEventsRequest& setLastEventId(int32_t lastEventId) { DARABONBA_PTR_SET_VALUE(lastEventId_, lastEventId) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> chatId_ {};
    shared_ptr<string> conversationId_ {};
    shared_ptr<int32_t> lastEventId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
