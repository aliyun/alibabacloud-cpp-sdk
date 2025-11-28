// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYCHATCOMPLETIONCHOICESMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYCHATCOMPLETIONCHOICESMESSAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessageToolCalls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ReasoningContent, reasoningContent_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(ToolCalls, toolCalls_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ReasoningContent, reasoningContent_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(ToolCalls, toolCalls_);
    };
    ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage() = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage(const ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage &) = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage(ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage &&) = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage() = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage& operator=(const ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage &) = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage& operator=(ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->reasoningContent_ == nullptr && return this->role_ == nullptr && return this->toolCalls_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // reasoningContent Field Functions 
    bool hasReasoningContent() const { return this->reasoningContent_ != nullptr;};
    void deleteReasoningContent() { this->reasoningContent_ = nullptr;};
    inline string reasoningContent() const { DARABONBA_PTR_GET_DEFAULT(reasoningContent_, "") };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage& setReasoningContent(string reasoningContent) { DARABONBA_PTR_SET_VALUE(reasoningContent_, reasoningContent) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // toolCalls Field Functions 
    bool hasToolCalls() const { return this->toolCalls_ != nullptr;};
    void deleteToolCalls() { this->toolCalls_ = nullptr;};
    inline const vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessageToolCalls> & toolCalls() const { DARABONBA_PTR_GET_CONST(toolCalls_, vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessageToolCalls>) };
    inline vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessageToolCalls> toolCalls() { DARABONBA_PTR_GET(toolCalls_, vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessageToolCalls>) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage& setToolCalls(const vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessageToolCalls> & toolCalls) { DARABONBA_PTR_SET_VALUE(toolCalls_, toolCalls) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage& setToolCalls(vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessageToolCalls> && toolCalls) { DARABONBA_PTR_SET_RVALUE(toolCalls_, toolCalls) };


  protected:
    // The content of the document.
    std::shared_ptr<string> content_ = nullptr;
    // 模型思维内容
    std::shared_ptr<string> reasoningContent_ = nullptr;
    // Message role:
    // 
    // *   system
    // *   user
    // *   assistant
    std::shared_ptr<string> role_ = nullptr;
    // Tool call response.
    std::shared_ptr<vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessageToolCalls>> toolCalls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
