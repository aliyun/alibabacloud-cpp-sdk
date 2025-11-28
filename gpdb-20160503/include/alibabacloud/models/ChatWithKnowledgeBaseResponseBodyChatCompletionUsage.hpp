// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYCHATCOMPLETIONUSAGE_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYCHATCOMPLETIONUSAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseResponseBodyChatCompletionUsagePromptTokensDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseResponseBodyChatCompletionUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseResponseBodyChatCompletionUsage& obj) { 
      DARABONBA_PTR_TO_JSON(CompletionTokens, completionTokens_);
      DARABONBA_PTR_TO_JSON(PromptTokens, promptTokens_);
      DARABONBA_PTR_TO_JSON(PromptTokensDetails, promptTokensDetails_);
      DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseResponseBodyChatCompletionUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletionTokens, completionTokens_);
      DARABONBA_PTR_FROM_JSON(PromptTokens, promptTokens_);
      DARABONBA_PTR_FROM_JSON(PromptTokensDetails, promptTokensDetails_);
      DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
    };
    ChatWithKnowledgeBaseResponseBodyChatCompletionUsage() = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionUsage(const ChatWithKnowledgeBaseResponseBodyChatCompletionUsage &) = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionUsage(ChatWithKnowledgeBaseResponseBodyChatCompletionUsage &&) = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseResponseBodyChatCompletionUsage() = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionUsage& operator=(const ChatWithKnowledgeBaseResponseBodyChatCompletionUsage &) = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletionUsage& operator=(ChatWithKnowledgeBaseResponseBodyChatCompletionUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completionTokens_ == nullptr
        && return this->promptTokens_ == nullptr && return this->promptTokensDetails_ == nullptr && return this->totalTokens_ == nullptr; };
    // completionTokens Field Functions 
    bool hasCompletionTokens() const { return this->completionTokens_ != nullptr;};
    void deleteCompletionTokens() { this->completionTokens_ = nullptr;};
    inline int64_t completionTokens() const { DARABONBA_PTR_GET_DEFAULT(completionTokens_, 0L) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionUsage& setCompletionTokens(int64_t completionTokens) { DARABONBA_PTR_SET_VALUE(completionTokens_, completionTokens) };


    // promptTokens Field Functions 
    bool hasPromptTokens() const { return this->promptTokens_ != nullptr;};
    void deletePromptTokens() { this->promptTokens_ = nullptr;};
    inline int64_t promptTokens() const { DARABONBA_PTR_GET_DEFAULT(promptTokens_, 0L) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionUsage& setPromptTokens(int64_t promptTokens) { DARABONBA_PTR_SET_VALUE(promptTokens_, promptTokens) };


    // promptTokensDetails Field Functions 
    bool hasPromptTokensDetails() const { return this->promptTokensDetails_ != nullptr;};
    void deletePromptTokensDetails() { this->promptTokensDetails_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsagePromptTokensDetails & promptTokensDetails() const { DARABONBA_PTR_GET_CONST(promptTokensDetails_, Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsagePromptTokensDetails) };
    inline Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsagePromptTokensDetails promptTokensDetails() { DARABONBA_PTR_GET(promptTokensDetails_, Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsagePromptTokensDetails) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionUsage& setPromptTokensDetails(const Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsagePromptTokensDetails & promptTokensDetails) { DARABONBA_PTR_SET_VALUE(promptTokensDetails_, promptTokensDetails) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionUsage& setPromptTokensDetails(Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsagePromptTokensDetails && promptTokensDetails) { DARABONBA_PTR_SET_RVALUE(promptTokensDetails_, promptTokensDetails) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int64_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletionUsage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    // The number of tokens consumed by the generated content.
    std::shared_ptr<int64_t> completionTokens_ = nullptr;
    // The number of tokens consumed by the prompt.
    std::shared_ptr<int64_t> promptTokens_ = nullptr;
    // The details about the prompt token.
    std::shared_ptr<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsagePromptTokensDetails> promptTokensDetails_ = nullptr;
    // The total number of tokens.
    std::shared_ptr<int64_t> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
