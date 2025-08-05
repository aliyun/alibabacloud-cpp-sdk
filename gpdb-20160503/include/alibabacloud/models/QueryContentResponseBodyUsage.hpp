// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYUSAGE_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentResponseBodyUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentResponseBodyUsage& obj) { 
      DARABONBA_PTR_TO_JSON(EmbeddingEntries, embeddingEntries_);
      DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentResponseBodyUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(EmbeddingEntries, embeddingEntries_);
      DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
    };
    QueryContentResponseBodyUsage() = default ;
    QueryContentResponseBodyUsage(const QueryContentResponseBodyUsage &) = default ;
    QueryContentResponseBodyUsage(QueryContentResponseBodyUsage &&) = default ;
    QueryContentResponseBodyUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentResponseBodyUsage() = default ;
    QueryContentResponseBodyUsage& operator=(const QueryContentResponseBodyUsage &) = default ;
    QueryContentResponseBodyUsage& operator=(QueryContentResponseBodyUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->embeddingEntries_ != nullptr
        && this->embeddingTokens_ != nullptr; };
    // embeddingEntries Field Functions 
    bool hasEmbeddingEntries() const { return this->embeddingEntries_ != nullptr;};
    void deleteEmbeddingEntries() { this->embeddingEntries_ = nullptr;};
    inline string embeddingEntries() const { DARABONBA_PTR_GET_DEFAULT(embeddingEntries_, "") };
    inline QueryContentResponseBodyUsage& setEmbeddingEntries(string embeddingEntries) { DARABONBA_PTR_SET_VALUE(embeddingEntries_, embeddingEntries) };


    // embeddingTokens Field Functions 
    bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
    void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
    inline string embeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, "") };
    inline QueryContentResponseBodyUsage& setEmbeddingTokens(string embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


  protected:
    // The number of entries used for vectorization.
    // > An entry refers to the number of processing items when performing vectorization on text or images. For example, processing one piece of text counts as 1 entry, while processing one image counts as 2 entries.
    std::shared_ptr<string> embeddingEntries_ = nullptr;
    // Number of tokens used for vectorization.
    // 
    // > A token refers to the smallest unit into which the input text is divided; a token can be a word, a phrase, a punctuation mark, or a character, etc.
    std::shared_ptr<string> embeddingTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
