// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPCHATMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPCHATMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppChatMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppChatMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChatId, chatId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SectionId, sectionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppChatMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatId, chatId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SectionId, sectionId_);
    };
    ListAppChatMessagesRequest() = default ;
    ListAppChatMessagesRequest(const ListAppChatMessagesRequest &) = default ;
    ListAppChatMessagesRequest(ListAppChatMessagesRequest &&) = default ;
    ListAppChatMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppChatMessagesRequest() = default ;
    ListAppChatMessagesRequest& operator=(const ListAppChatMessagesRequest &) = default ;
    ListAppChatMessagesRequest& operator=(ListAppChatMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatId_ == nullptr
        && this->conversationId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->sectionId_ == nullptr; };
    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline ListAppChatMessagesRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ListAppChatMessagesRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppChatMessagesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppChatMessagesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // sectionId Field Functions 
    bool hasSectionId() const { return this->sectionId_ != nullptr;};
    void deleteSectionId() { this->sectionId_ = nullptr;};
    inline string getSectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, "") };
    inline ListAppChatMessagesRequest& setSectionId(string sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


  protected:
    // The chat ID.
    shared_ptr<string> chatId_ {};
    // The conversation ID.
    shared_ptr<string> conversationId_ {};
    // The number of entries per query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. This parameter is empty if no more results exist.
    shared_ptr<string> nextToken_ {};
    // The section ID.
    shared_ptr<string> sectionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
