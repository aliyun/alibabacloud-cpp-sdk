// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINFORESPONSEBODYWEBSEARCHRESULTS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINFORESPONSEBODYWEBSEARCHRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class SearchInfoResponseBodyWebSearchResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInfoResponseBodyWebSearchResults& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SourceLink, sourceLink_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInfoResponseBodyWebSearchResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SourceLink, sourceLink_);
    };
    SearchInfoResponseBodyWebSearchResults() = default ;
    SearchInfoResponseBodyWebSearchResults(const SearchInfoResponseBodyWebSearchResults &) = default ;
    SearchInfoResponseBodyWebSearchResults(SearchInfoResponseBodyWebSearchResults &&) = default ;
    SearchInfoResponseBodyWebSearchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInfoResponseBodyWebSearchResults() = default ;
    SearchInfoResponseBodyWebSearchResults& operator=(const SearchInfoResponseBodyWebSearchResults &) = default ;
    SearchInfoResponseBodyWebSearchResults& operator=(SearchInfoResponseBodyWebSearchResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && return this->resultContent_ == nullptr && return this->score_ == nullptr && return this->sourceLink_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline SearchInfoResponseBodyWebSearchResults& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline string resultContent() const { DARABONBA_PTR_GET_DEFAULT(resultContent_, "") };
    inline SearchInfoResponseBodyWebSearchResults& setResultContent(string resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline SearchInfoResponseBodyWebSearchResults& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // sourceLink Field Functions 
    bool hasSourceLink() const { return this->sourceLink_ != nullptr;};
    void deleteSourceLink() { this->sourceLink_ = nullptr;};
    inline string sourceLink() const { DARABONBA_PTR_GET_DEFAULT(sourceLink_, "") };
    inline SearchInfoResponseBodyWebSearchResults& setSourceLink(string sourceLink) { DARABONBA_PTR_SET_VALUE(sourceLink_, sourceLink) };


  protected:
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> resultContent_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<string> sourceLink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
