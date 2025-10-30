// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYMULTICOLLECTIONRECALLRESULTUSAGE_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYMULTICOLLECTIONRECALLRESULTUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage& obj) { 
      DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
    };
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage(const ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage(ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage &&) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage& operator=(const ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage& operator=(ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->embeddingTokens_ == nullptr; };
    // embeddingTokens Field Functions 
    bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
    void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
    inline int64_t embeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, 0L) };
    inline ChatWithKnowledgeBaseStreamResponseBodyMultiCollectionRecallResultUsage& setEmbeddingTokens(int64_t embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


  protected:
    std::shared_ptr<int64_t> embeddingTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
