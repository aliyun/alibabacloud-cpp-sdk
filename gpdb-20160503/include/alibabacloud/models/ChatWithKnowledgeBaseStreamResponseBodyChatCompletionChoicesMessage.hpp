// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYCHATCOMPLETIONCHOICESMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYCHATCOMPLETIONCHOICESMESSAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ReasoningContent, reasoningContent_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(ToolCalls, toolCalls_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ReasoningContent, reasoningContent_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(ToolCalls, toolCalls_);
    };
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage(const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage(ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage &&) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage& operator=(const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage& operator=(ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage &&) = default ;
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
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // reasoningContent Field Functions 
    bool hasReasoningContent() const { return this->reasoningContent_ != nullptr;};
    void deleteReasoningContent() { this->reasoningContent_ = nullptr;};
    inline string reasoningContent() const { DARABONBA_PTR_GET_DEFAULT(reasoningContent_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage& setReasoningContent(string reasoningContent) { DARABONBA_PTR_SET_VALUE(reasoningContent_, reasoningContent) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // toolCalls Field Functions 
    bool hasToolCalls() const { return this->toolCalls_ != nullptr;};
    void deleteToolCalls() { this->toolCalls_ = nullptr;};
    inline const vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls> & toolCalls() const { DARABONBA_PTR_GET_CONST(toolCalls_, vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls>) };
    inline vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls> toolCalls() { DARABONBA_PTR_GET(toolCalls_, vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls>) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage& setToolCalls(const vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls> & toolCalls) { DARABONBA_PTR_SET_VALUE(toolCalls_, toolCalls) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage& setToolCalls(vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls> && toolCalls) { DARABONBA_PTR_SET_RVALUE(toolCalls_, toolCalls) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> reasoningContent_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls>> toolCalls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
