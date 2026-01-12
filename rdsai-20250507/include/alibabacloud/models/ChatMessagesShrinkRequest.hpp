// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATMESSAGESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATMESSAGESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ChatMessagesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatMessagesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Inputs, inputsShrink_);
      DARABONBA_PTR_TO_JSON(ParentMessageId, parentMessageId_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, ChatMessagesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputsShrink_);
      DARABONBA_PTR_FROM_JSON(ParentMessageId, parentMessageId_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    ChatMessagesShrinkRequest() = default ;
    ChatMessagesShrinkRequest(const ChatMessagesShrinkRequest &) = default ;
    ChatMessagesShrinkRequest(ChatMessagesShrinkRequest &&) = default ;
    ChatMessagesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatMessagesShrinkRequest() = default ;
    ChatMessagesShrinkRequest& operator=(const ChatMessagesShrinkRequest &) = default ;
    ChatMessagesShrinkRequest& operator=(ChatMessagesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->inputsShrink_ == nullptr && this->parentMessageId_ == nullptr && this->query_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ChatMessagesShrinkRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // inputsShrink Field Functions 
    bool hasInputsShrink() const { return this->inputsShrink_ != nullptr;};
    void deleteInputsShrink() { this->inputsShrink_ = nullptr;};
    inline string getInputsShrink() const { DARABONBA_PTR_GET_DEFAULT(inputsShrink_, "") };
    inline ChatMessagesShrinkRequest& setInputsShrink(string inputsShrink) { DARABONBA_PTR_SET_VALUE(inputsShrink_, inputsShrink) };


    // parentMessageId Field Functions 
    bool hasParentMessageId() const { return this->parentMessageId_ != nullptr;};
    void deleteParentMessageId() { this->parentMessageId_ = nullptr;};
    inline string getParentMessageId() const { DARABONBA_PTR_GET_DEFAULT(parentMessageId_, "") };
    inline ChatMessagesShrinkRequest& setParentMessageId(string parentMessageId) { DARABONBA_PTR_SET_VALUE(parentMessageId_, parentMessageId) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ChatMessagesShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // The query content.
    shared_ptr<string> conversationId_ {};
    // The ID of the parent message.
    shared_ptr<string> inputsShrink_ {};
    // The ID of the conversation.
    shared_ptr<string> parentMessageId_ {};
    // The operation that you want to perform. Set the value to **ChatMessages**.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
