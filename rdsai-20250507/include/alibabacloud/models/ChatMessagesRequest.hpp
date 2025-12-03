// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatMessagesRequestInputs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ChatMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(ParentMessageId, parentMessageId_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, ChatMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(ParentMessageId, parentMessageId_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    ChatMessagesRequest() = default ;
    ChatMessagesRequest(const ChatMessagesRequest &) = default ;
    ChatMessagesRequest(ChatMessagesRequest &&) = default ;
    ChatMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatMessagesRequest() = default ;
    ChatMessagesRequest& operator=(const ChatMessagesRequest &) = default ;
    ChatMessagesRequest& operator=(ChatMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->conversationId_ == nullptr && return this->inputs_ == nullptr && return this->parentMessageId_ == nullptr && return this->query_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline ChatMessagesRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string conversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ChatMessagesRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const ChatMessagesRequestInputs & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, ChatMessagesRequestInputs) };
    inline ChatMessagesRequestInputs inputs() { DARABONBA_PTR_GET(inputs_, ChatMessagesRequestInputs) };
    inline ChatMessagesRequest& setInputs(const ChatMessagesRequestInputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline ChatMessagesRequest& setInputs(ChatMessagesRequestInputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // parentMessageId Field Functions 
    bool hasParentMessageId() const { return this->parentMessageId_ != nullptr;};
    void deleteParentMessageId() { this->parentMessageId_ = nullptr;};
    inline string parentMessageId() const { DARABONBA_PTR_GET_DEFAULT(parentMessageId_, "") };
    inline ChatMessagesRequest& setParentMessageId(string parentMessageId) { DARABONBA_PTR_SET_VALUE(parentMessageId_, parentMessageId) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ChatMessagesRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> apiId_ = nullptr;
    std::shared_ptr<string> conversationId_ = nullptr;
    std::shared_ptr<ChatMessagesRequestInputs> inputs_ = nullptr;
    std::shared_ptr<string> parentMessageId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
