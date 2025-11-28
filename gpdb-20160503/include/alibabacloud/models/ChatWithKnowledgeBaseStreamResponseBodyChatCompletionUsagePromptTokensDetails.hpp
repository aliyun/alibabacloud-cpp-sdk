// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYCHATCOMPLETIONUSAGEPROMPTTOKENSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYCHATCOMPLETIONUSAGEPROMPTTOKENSDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails& obj) { 
      DARABONBA_PTR_TO_JSON(CachedTokens, cachedTokens_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(CachedTokens, cachedTokens_);
    };
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails(const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails(ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails &&) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails& operator=(const ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails& operator=(ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cachedTokens_ == nullptr; };
    // cachedTokens Field Functions 
    bool hasCachedTokens() const { return this->cachedTokens_ != nullptr;};
    void deleteCachedTokens() { this->cachedTokens_ = nullptr;};
    inline int64_t cachedTokens() const { DARABONBA_PTR_GET_DEFAULT(cachedTokens_, 0L) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsagePromptTokensDetails& setCachedTokens(int64_t cachedTokens) { DARABONBA_PTR_SET_VALUE(cachedTokens_, cachedTokens) };


  protected:
    // The number of tokens from cache hits.
    std::shared_ptr<int64_t> cachedTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
