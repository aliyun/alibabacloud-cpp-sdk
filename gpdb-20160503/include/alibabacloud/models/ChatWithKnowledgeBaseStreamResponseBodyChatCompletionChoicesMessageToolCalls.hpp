// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYCHATCOMPLETIONCHOICESMESSAGETOOLCALLS_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYCHATCOMPLETIONCHOICESMESSAGETOOLCALLS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCallsFunction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls& obj) { 
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Index, index_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls& obj) { 
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
    };
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls(const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls(ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls &&) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls& operator=(const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls& operator=(ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->function_ != nullptr
        && this->id_ != nullptr && this->index_ != nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCallsFunction & function() const { DARABONBA_PTR_GET_CONST(function_, Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCallsFunction) };
    inline Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCallsFunction function() { DARABONBA_PTR_GET(function_, Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCallsFunction) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls& setFunction(const Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCallsFunction & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls& setFunction(Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCallsFunction && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCalls& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


  protected:
    std::shared_ptr<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoicesMessageToolCallsFunction> function_ = nullptr;
    // ID
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> index_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
