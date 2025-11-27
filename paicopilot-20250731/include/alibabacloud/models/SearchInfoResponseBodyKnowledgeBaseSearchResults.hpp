// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINFORESPONSEBODYKNOWLEDGEBASESEARCHRESULTS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINFORESPONSEBODYKNOWLEDGEBASESEARCHRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class SearchInfoResponseBodyKnowledgeBaseSearchResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInfoResponseBodyKnowledgeBaseSearchResults& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInfoResponseBodyKnowledgeBaseSearchResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    SearchInfoResponseBodyKnowledgeBaseSearchResults() = default ;
    SearchInfoResponseBodyKnowledgeBaseSearchResults(const SearchInfoResponseBodyKnowledgeBaseSearchResults &) = default ;
    SearchInfoResponseBodyKnowledgeBaseSearchResults(SearchInfoResponseBodyKnowledgeBaseSearchResults &&) = default ;
    SearchInfoResponseBodyKnowledgeBaseSearchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInfoResponseBodyKnowledgeBaseSearchResults() = default ;
    SearchInfoResponseBodyKnowledgeBaseSearchResults& operator=(const SearchInfoResponseBodyKnowledgeBaseSearchResults &) = default ;
    SearchInfoResponseBodyKnowledgeBaseSearchResults& operator=(SearchInfoResponseBodyKnowledgeBaseSearchResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && return this->resultContent_ == nullptr && return this->score_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline SearchInfoResponseBodyKnowledgeBaseSearchResults& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline string resultContent() const { DARABONBA_PTR_GET_DEFAULT(resultContent_, "") };
    inline SearchInfoResponseBodyKnowledgeBaseSearchResults& setResultContent(string resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline SearchInfoResponseBodyKnowledgeBaseSearchResults& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> resultContent_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
