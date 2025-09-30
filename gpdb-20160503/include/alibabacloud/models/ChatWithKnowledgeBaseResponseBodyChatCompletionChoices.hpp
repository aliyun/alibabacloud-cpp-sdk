// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYCHATCOMPLETIONCHOICES_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYCHATCOMPLETIONCHOICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseResponseBodyChatCompletionChoices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseResponseBodyChatCompletionChoices& obj) { 
      DARABONBA_PTR_TO_JSON(FinishReason, finishReason_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseResponseBodyChatCompletionChoices& obj) { 
      DARABONBA_PTR_FROM_JSON(FinishReason, finishReason_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    ChatWithKnowledgeBaseResponseBodyChatCompletionChoices() = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionChoices(const ChatWithKnowledgeBaseResponseBodyChatCompletionChoices &) = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionChoices(ChatWithKnowledgeBaseResponseBodyChatCompletionChoices &&) = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionChoices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseResponseBodyChatCompletionChoices() = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionChoices& operator=(const ChatWithKnowledgeBaseResponseBodyChatCompletionChoices &) = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionChoices& operator=(ChatWithKnowledgeBaseResponseBodyChatCompletionChoices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->finishReason_ != nullptr
        && this->index_ != nullptr && this->message_ != nullptr; };
    // finishReason Field Functions 
    bool hasFinishReason() const { return this->finishReason_ != nullptr;};
    void deleteFinishReason() { this->finishReason_ = nullptr;};
    inline string finishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionChoices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionChoices& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage & message() const { DARABONBA_PTR_GET_CONST(message_, Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage) };
    inline Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage message() { DARABONBA_PTR_GET(message_, Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionChoices& setMessage(const Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionChoices& setMessage(Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


  protected:
    std::shared_ptr<string> finishReason_ = nullptr;
    std::shared_ptr<int64_t> index_ = nullptr;
    std::shared_ptr<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoicesMessage> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
