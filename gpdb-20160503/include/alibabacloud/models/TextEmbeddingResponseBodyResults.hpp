// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTEMBEDDINGRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_TEXTEMBEDDINGRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TextEmbeddingResponseBodyResultsResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class TextEmbeddingResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextEmbeddingResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, TextEmbeddingResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    TextEmbeddingResponseBodyResults() = default ;
    TextEmbeddingResponseBodyResults(const TextEmbeddingResponseBodyResults &) = default ;
    TextEmbeddingResponseBodyResults(TextEmbeddingResponseBodyResults &&) = default ;
    TextEmbeddingResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextEmbeddingResponseBodyResults() = default ;
    TextEmbeddingResponseBodyResults& operator=(const TextEmbeddingResponseBodyResults &) = default ;
    TextEmbeddingResponseBodyResults& operator=(TextEmbeddingResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->results_ != nullptr; };
    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::TextEmbeddingResponseBodyResultsResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::TextEmbeddingResponseBodyResultsResults>) };
    inline vector<Models::TextEmbeddingResponseBodyResultsResults> results() { DARABONBA_PTR_GET(results_, vector<Models::TextEmbeddingResponseBodyResultsResults>) };
    inline TextEmbeddingResponseBodyResults& setResults(const vector<Models::TextEmbeddingResponseBodyResultsResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline TextEmbeddingResponseBodyResults& setResults(vector<Models::TextEmbeddingResponseBodyResultsResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<vector<Models::TextEmbeddingResponseBodyResultsResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
