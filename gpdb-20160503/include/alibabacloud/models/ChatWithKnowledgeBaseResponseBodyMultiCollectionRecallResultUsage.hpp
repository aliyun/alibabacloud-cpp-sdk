// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYMULTICOLLECTIONRECALLRESULTUSAGE_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYMULTICOLLECTIONRECALLRESULTUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage& obj) { 
      DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
    };
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage() = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage(const ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage &) = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage(ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage &&) = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage() = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage& operator=(const ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage &) = default ;
    ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage& operator=(ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->embeddingTokens_ != nullptr; };
    // embeddingTokens Field Functions 
    bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
    void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
    inline int64_t embeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, 0L) };
    inline ChatWithKnowledgeBaseResponseBodyMultiCollectionRecallResultUsage& setEmbeddingTokens(int64_t embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


  protected:
    std::shared_ptr<int64_t> embeddingTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
