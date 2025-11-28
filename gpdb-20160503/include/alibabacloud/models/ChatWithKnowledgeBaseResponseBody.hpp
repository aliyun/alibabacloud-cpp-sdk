// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseResponseBodyChatCompletion.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChatCompletion, chatCompletion_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MultiCollectionRecallResult, multiCollectionRecallResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatCompletion, chatCompletion_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MultiCollectionRecallResult, multiCollectionRecallResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ChatWithKnowledgeBaseResponseBody() = default ;
    ChatWithKnowledgeBaseResponseBody(const ChatWithKnowledgeBaseResponseBody &) = default ;
    ChatWithKnowledgeBaseResponseBody(ChatWithKnowledgeBaseResponseBody &&) = default ;
    ChatWithKnowledgeBaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseResponseBody() = default ;
    ChatWithKnowledgeBaseResponseBody& operator=(const ChatWithKnowledgeBaseResponseBody &) = default ;
    ChatWithKnowledgeBaseResponseBody& operator=(ChatWithKnowledgeBaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatCompletion_ == nullptr
        && return this->message_ == nullptr && return this->multiCollectionRecallResult_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // chatCompletion Field Functions 
    bool hasChatCompletion() const { return this->chatCompletion_ != nullptr;};
    void deleteChatCompletion() { this->chatCompletion_ = nullptr;};
    inline const ChatWithKnowledgeBaseResponseBodyChatCompletion & chatCompletion() const { DARABONBA_PTR_GET_CONST(chatCompletion_, ChatWithKnowledgeBaseResponseBodyChatCompletion) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletion chatCompletion() { DARABONBA_PTR_GET(chatCompletion_, ChatWithKnowledgeBaseResponseBodyChatCompletion) };
    inline ChatWithKnowledgeBaseResponseBody& setChatCompletion(const ChatWithKnowledgeBaseResponseBodyChatCompletion & chatCompletion) { DARABONBA_PTR_SET_VALUE(chatCompletion_, chatCompletion) };
    inline ChatWithKnowledgeBaseResponseBody& setChatCompletion(ChatWithKnowledgeBaseResponseBodyChatCompletion && chatCompletion) { DARABONBA_PTR_SET_RVALUE(chatCompletion_, chatCompletion) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ChatWithKnowledgeBaseResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // multiCollectionRecallResult Field Functions 
    bool hasMultiCollectionRecallResult() const { return this->multiCollectionRecallResult_ != nullptr;};
    void deleteMultiCollectionRecallResult() { this->multiCollectionRecallResult_ = nullptr;};
    inline const ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult & multiCollectionRecallResult() const { DARABONBA_PTR_GET_CONST(multiCollectionRecallResult_, ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult) };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult multiCollectionRecallResult() { DARABONBA_PTR_GET(multiCollectionRecallResult_, ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult) };
    inline ChatWithKnowledgeBaseResponseBody& setMultiCollectionRecallResult(const ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult & multiCollectionRecallResult) { DARABONBA_PTR_SET_VALUE(multiCollectionRecallResult_, multiCollectionRecallResult) };
    inline ChatWithKnowledgeBaseResponseBody& setMultiCollectionRecallResult(ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult && multiCollectionRecallResult) { DARABONBA_PTR_SET_RVALUE(multiCollectionRecallResult_, multiCollectionRecallResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChatWithKnowledgeBaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ChatWithKnowledgeBaseResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // model response.
    std::shared_ptr<ChatWithKnowledgeBaseResponseBodyChatCompletion> chatCompletion_ = nullptr;
    // The returned information.
    std::shared_ptr<string> message_ = nullptr;
    // Retrieve information from multiple knowledge bases.
    std::shared_ptr<ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResult> multiCollectionRecallResult_ = nullptr;
    // The unique ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
