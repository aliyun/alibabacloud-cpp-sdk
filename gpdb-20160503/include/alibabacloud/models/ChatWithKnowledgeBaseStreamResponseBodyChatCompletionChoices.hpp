// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYCHATCOMPLETIONCHOICES_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYCHATCOMPLETIONCHOICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices& obj) { 
      DARABONBA_PTR_TO_JSON(FinishReason, finishReason_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices& obj) { 
      DARABONBA_PTR_FROM_JSON(FinishReason, finishReason_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices(const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices(ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices &&) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices& operator=(const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices& operator=(ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finishReason_ == nullptr
        && return this->index_ == nullptr && return this->message_ == nullptr; };
    // finishReason Field Functions 
    bool hasFinishReason() const { return this->finishReason_ != nullptr;};
    void deleteFinishReason() { this->finishReason_ = nullptr;};
    inline string finishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage & message() const { DARABONBA_PTR_GET_CONST(message_, Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage) };
    inline Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage message() { DARABONBA_PTR_GET(message_, Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices& setMessage(const Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices& setMessage(Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


  protected:
    // Finish reason.
    std::shared_ptr<string> finishReason_ = nullptr;
    // The sequence number of the reply.
    std::shared_ptr<int64_t> index_ = nullptr;
    // LLM response.
    std::shared_ptr<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessage> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
