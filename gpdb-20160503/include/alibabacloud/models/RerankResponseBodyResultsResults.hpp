// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERANKRESPONSEBODYRESULTSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RERANKRESPONSEBODYRESULTSRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class RerankResponseBodyResultsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RerankResponseBodyResultsResults& obj) { 
      DARABONBA_PTR_TO_JSON(Document, document_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(RelevanceScore, relevanceScore_);
    };
    friend void from_json(const Darabonba::Json& j, RerankResponseBodyResultsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Document, document_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(RelevanceScore, relevanceScore_);
    };
    RerankResponseBodyResultsResults() = default ;
    RerankResponseBodyResultsResults(const RerankResponseBodyResultsResults &) = default ;
    RerankResponseBodyResultsResults(RerankResponseBodyResultsResults &&) = default ;
    RerankResponseBodyResultsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RerankResponseBodyResultsResults() = default ;
    RerankResponseBodyResultsResults& operator=(const RerankResponseBodyResultsResults &) = default ;
    RerankResponseBodyResultsResults& operator=(RerankResponseBodyResultsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->document_ != nullptr
        && this->index_ != nullptr && this->relevanceScore_ != nullptr; };
    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string document() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline RerankResponseBodyResultsResults& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline RerankResponseBodyResultsResults& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // relevanceScore Field Functions 
    bool hasRelevanceScore() const { return this->relevanceScore_ != nullptr;};
    void deleteRelevanceScore() { this->relevanceScore_ = nullptr;};
    inline float relevanceScore() const { DARABONBA_PTR_GET_DEFAULT(relevanceScore_, 0.0) };
    inline RerankResponseBodyResultsResults& setRelevanceScore(float relevanceScore) { DARABONBA_PTR_SET_VALUE(relevanceScore_, relevanceScore) };


  protected:
    // Re-ordered document information.
    std::shared_ptr<string> document_ = nullptr;
    // Index of this document in the request parameter Documents, starting from 0.
    std::shared_ptr<int32_t> index_ = nullptr;
    // Rerank similarity score.
    std::shared_ptr<float> relevanceScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
