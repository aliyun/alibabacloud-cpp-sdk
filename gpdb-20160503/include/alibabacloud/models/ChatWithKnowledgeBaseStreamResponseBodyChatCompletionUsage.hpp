// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYCHATCOMPLETIONUSAGE_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYCHATCOMPLETIONUSAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage& obj) { 
      DARABONBA_PTR_TO_JSON(CompletionTokens, completionTokens_);
      DARABONBA_PTR_TO_JSON(PromptTokens, promptTokens_);
      DARABONBA_PTR_TO_JSON(PromptTokensDetails, promptTokensDetails_);
      DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletionTokens, completionTokens_);
      DARABONBA_PTR_FROM_JSON(PromptTokens, promptTokens_);
      DARABONBA_PTR_FROM_JSON(PromptTokensDetails, promptTokensDetails_);
      DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
    };
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage(const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage(ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage &&) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage& operator=(const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage& operator=(ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage &&) = default ;
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
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage& setCompletionTokens(int64_t completionTokens) { DARABONBA_PTR_SET_VALUE(completionTokens_, completionTokens) };


    // promptTokens Field Functions 
    bool hasPromptTokens() const { return this->promptTokens_ != nullptr;};
    void deletePromptTokens() { this->promptTokens_ = nullptr;};
    inline int64_t promptTokens() const { DARABONBA_PTR_GET_DEFAULT(promptTokens_, 0L) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage& setPromptTokens(int64_t promptTokens) { DARABONBA_PTR_SET_VALUE(promptTokens_, promptTokens) };


    // promptTokensDetails Field Functions 
    bool hasPromptTokensDetails() const { return this->promptTokensDetails_ != nullptr;};
    void deletePromptTokensDetails() { this->promptTokensDetails_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails & promptTokensDetails() const { DARABONBA_PTR_GET_CONST(promptTokensDetails_, Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails) };
    inline Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails promptTokensDetails() { DARABONBA_PTR_GET(promptTokensDetails_, Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage& setPromptTokensDetails(const Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails & promptTokensDetails) { DARABONBA_PTR_SET_VALUE(promptTokensDetails_, promptTokensDetails) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage& setPromptTokensDetails(Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails && promptTokensDetails) { DARABONBA_PTR_SET_RVALUE(promptTokensDetails_, promptTokensDetails) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int64_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    std::shared_ptr<int64_t> completionTokens_ = nullptr;
    std::shared_ptr<int64_t> promptTokens_ = nullptr;
    std::shared_ptr<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails> promptTokensDetails_ = nullptr;
    std::shared_ptr<int64_t> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
