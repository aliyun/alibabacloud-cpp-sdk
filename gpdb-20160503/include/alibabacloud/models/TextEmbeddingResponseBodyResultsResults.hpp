// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTEMBEDDINGRESPONSEBODYRESULTSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_TEXTEMBEDDINGRESPONSEBODYRESULTSRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TextEmbeddingResponseBodyResultsResultsEmbedding.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class TextEmbeddingResponseBodyResultsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextEmbeddingResponseBodyResultsResults& obj) { 
      DARABONBA_PTR_TO_JSON(Embedding, embedding_);
      DARABONBA_PTR_TO_JSON(Index, index_);
    };
    friend void from_json(const Darabonba::Json& j, TextEmbeddingResponseBodyResultsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Embedding, embedding_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
    };
    TextEmbeddingResponseBodyResultsResults() = default ;
    TextEmbeddingResponseBodyResultsResults(const TextEmbeddingResponseBodyResultsResults &) = default ;
    TextEmbeddingResponseBodyResultsResults(TextEmbeddingResponseBodyResultsResults &&) = default ;
    TextEmbeddingResponseBodyResultsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextEmbeddingResponseBodyResultsResults() = default ;
    TextEmbeddingResponseBodyResultsResults& operator=(const TextEmbeddingResponseBodyResultsResults &) = default ;
    TextEmbeddingResponseBodyResultsResults& operator=(TextEmbeddingResponseBodyResultsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->embedding_ == nullptr
        && return this->index_ == nullptr; };
    // embedding Field Functions 
    bool hasEmbedding() const { return this->embedding_ != nullptr;};
    void deleteEmbedding() { this->embedding_ = nullptr;};
    inline const Models::TextEmbeddingResponseBodyResultsResultsEmbedding & embedding() const { DARABONBA_PTR_GET_CONST(embedding_, Models::TextEmbeddingResponseBodyResultsResultsEmbedding) };
    inline Models::TextEmbeddingResponseBodyResultsResultsEmbedding embedding() { DARABONBA_PTR_GET(embedding_, Models::TextEmbeddingResponseBodyResultsResultsEmbedding) };
    inline TextEmbeddingResponseBodyResultsResults& setEmbedding(const Models::TextEmbeddingResponseBodyResultsResultsEmbedding & embedding) { DARABONBA_PTR_SET_VALUE(embedding_, embedding) };
    inline TextEmbeddingResponseBodyResultsResults& setEmbedding(Models::TextEmbeddingResponseBodyResultsResultsEmbedding && embedding) { DARABONBA_PTR_SET_RVALUE(embedding_, embedding) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline TextEmbeddingResponseBodyResultsResults& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


  protected:
    // The embedding values.
    std::shared_ptr<Models::TextEmbeddingResponseBodyResultsResultsEmbedding> embedding_ = nullptr;
    // The number of the embedding in the Input request parameter, which starts from 0.
    std::shared_ptr<int32_t> index_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
