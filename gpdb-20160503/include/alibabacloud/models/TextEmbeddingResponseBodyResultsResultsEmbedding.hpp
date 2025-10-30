// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTEMBEDDINGRESPONSEBODYRESULTSRESULTSEMBEDDING_HPP_
#define ALIBABACLOUD_MODELS_TEXTEMBEDDINGRESPONSEBODYRESULTSRESULTSEMBEDDING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class TextEmbeddingResponseBodyResultsResultsEmbedding : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextEmbeddingResponseBodyResultsResultsEmbedding& obj) { 
      DARABONBA_PTR_TO_JSON(Embedding, embedding_);
    };
    friend void from_json(const Darabonba::Json& j, TextEmbeddingResponseBodyResultsResultsEmbedding& obj) { 
      DARABONBA_PTR_FROM_JSON(Embedding, embedding_);
    };
    TextEmbeddingResponseBodyResultsResultsEmbedding() = default ;
    TextEmbeddingResponseBodyResultsResultsEmbedding(const TextEmbeddingResponseBodyResultsResultsEmbedding &) = default ;
    TextEmbeddingResponseBodyResultsResultsEmbedding(TextEmbeddingResponseBodyResultsResultsEmbedding &&) = default ;
    TextEmbeddingResponseBodyResultsResultsEmbedding(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextEmbeddingResponseBodyResultsResultsEmbedding() = default ;
    TextEmbeddingResponseBodyResultsResultsEmbedding& operator=(const TextEmbeddingResponseBodyResultsResultsEmbedding &) = default ;
    TextEmbeddingResponseBodyResultsResultsEmbedding& operator=(TextEmbeddingResponseBodyResultsResultsEmbedding &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->embedding_ == nullptr; };
    // embedding Field Functions 
    bool hasEmbedding() const { return this->embedding_ != nullptr;};
    void deleteEmbedding() { this->embedding_ = nullptr;};
    inline const vector<double> & embedding() const { DARABONBA_PTR_GET_CONST(embedding_, vector<double>) };
    inline vector<double> embedding() { DARABONBA_PTR_GET(embedding_, vector<double>) };
    inline TextEmbeddingResponseBodyResultsResultsEmbedding& setEmbedding(const vector<double> & embedding) { DARABONBA_PTR_SET_VALUE(embedding_, embedding) };
    inline TextEmbeddingResponseBodyResultsResultsEmbedding& setEmbedding(vector<double> && embedding) { DARABONBA_PTR_SET_RVALUE(embedding_, embedding) };


  protected:
    std::shared_ptr<vector<double>> embedding_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
