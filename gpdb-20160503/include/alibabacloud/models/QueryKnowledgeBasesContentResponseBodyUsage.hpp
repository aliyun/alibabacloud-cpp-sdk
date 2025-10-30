// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTRESPONSEBODYUSAGE_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTRESPONSEBODYUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryKnowledgeBasesContentResponseBodyUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentResponseBodyUsage& obj) { 
      DARABONBA_PTR_TO_JSON(EmbeddingEntries, embeddingEntries_);
      DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentResponseBodyUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(EmbeddingEntries, embeddingEntries_);
      DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
    };
    QueryKnowledgeBasesContentResponseBodyUsage() = default ;
    QueryKnowledgeBasesContentResponseBodyUsage(const QueryKnowledgeBasesContentResponseBodyUsage &) = default ;
    QueryKnowledgeBasesContentResponseBodyUsage(QueryKnowledgeBasesContentResponseBodyUsage &&) = default ;
    QueryKnowledgeBasesContentResponseBodyUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentResponseBodyUsage() = default ;
    QueryKnowledgeBasesContentResponseBodyUsage& operator=(const QueryKnowledgeBasesContentResponseBodyUsage &) = default ;
    QueryKnowledgeBasesContentResponseBodyUsage& operator=(QueryKnowledgeBasesContentResponseBodyUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->embeddingEntries_ == nullptr
        && return this->embeddingTokens_ == nullptr; };
    // embeddingEntries Field Functions 
    bool hasEmbeddingEntries() const { return this->embeddingEntries_ != nullptr;};
    void deleteEmbeddingEntries() { this->embeddingEntries_ = nullptr;};
    inline string embeddingEntries() const { DARABONBA_PTR_GET_DEFAULT(embeddingEntries_, "") };
    inline QueryKnowledgeBasesContentResponseBodyUsage& setEmbeddingEntries(string embeddingEntries) { DARABONBA_PTR_SET_VALUE(embeddingEntries_, embeddingEntries) };


    // embeddingTokens Field Functions 
    bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
    void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
    inline string embeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, "") };
    inline QueryKnowledgeBasesContentResponseBodyUsage& setEmbeddingTokens(string embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


  protected:
    std::shared_ptr<string> embeddingEntries_ = nullptr;
    std::shared_ptr<string> embeddingTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
