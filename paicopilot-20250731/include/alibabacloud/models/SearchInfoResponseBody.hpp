// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class SearchInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseSearchResults, knowledgeBaseSearchResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebSearchResults, webSearchResults_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseSearchResults, knowledgeBaseSearchResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebSearchResults, webSearchResults_);
    };
    SearchInfoResponseBody() = default ;
    SearchInfoResponseBody(const SearchInfoResponseBody &) = default ;
    SearchInfoResponseBody(SearchInfoResponseBody &&) = default ;
    SearchInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInfoResponseBody() = default ;
    SearchInfoResponseBody& operator=(const SearchInfoResponseBody &) = default ;
    SearchInfoResponseBody& operator=(SearchInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebSearchResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebSearchResults& obj) { 
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(SourceLink, sourceLink_);
      };
      friend void from_json(const Darabonba::Json& j, WebSearchResults& obj) { 
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(SourceLink, sourceLink_);
      };
      WebSearchResults() = default ;
      WebSearchResults(const WebSearchResults &) = default ;
      WebSearchResults(WebSearchResults &&) = default ;
      WebSearchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebSearchResults() = default ;
      WebSearchResults& operator=(const WebSearchResults &) = default ;
      WebSearchResults& operator=(WebSearchResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->index_ == nullptr
        && this->resultContent_ == nullptr && this->score_ == nullptr && this->sourceLink_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
      inline WebSearchResults& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // resultContent Field Functions 
      bool hasResultContent() const { return this->resultContent_ != nullptr;};
      void deleteResultContent() { this->resultContent_ = nullptr;};
      inline string getResultContent() const { DARABONBA_PTR_GET_DEFAULT(resultContent_, "") };
      inline WebSearchResults& setResultContent(string resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline WebSearchResults& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // sourceLink Field Functions 
      bool hasSourceLink() const { return this->sourceLink_ != nullptr;};
      void deleteSourceLink() { this->sourceLink_ = nullptr;};
      inline string getSourceLink() const { DARABONBA_PTR_GET_DEFAULT(sourceLink_, "") };
      inline WebSearchResults& setSourceLink(string sourceLink) { DARABONBA_PTR_SET_VALUE(sourceLink_, sourceLink) };


    protected:
      shared_ptr<string> index_ {};
      shared_ptr<string> resultContent_ {};
      shared_ptr<double> score_ {};
      shared_ptr<string> sourceLink_ {};
    };

    class KnowledgeBaseSearchResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KnowledgeBaseSearchResults& obj) { 
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
        DARABONBA_PTR_TO_JSON(Score, score_);
      };
      friend void from_json(const Darabonba::Json& j, KnowledgeBaseSearchResults& obj) { 
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
      };
      KnowledgeBaseSearchResults() = default ;
      KnowledgeBaseSearchResults(const KnowledgeBaseSearchResults &) = default ;
      KnowledgeBaseSearchResults(KnowledgeBaseSearchResults &&) = default ;
      KnowledgeBaseSearchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KnowledgeBaseSearchResults() = default ;
      KnowledgeBaseSearchResults& operator=(const KnowledgeBaseSearchResults &) = default ;
      KnowledgeBaseSearchResults& operator=(KnowledgeBaseSearchResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->index_ == nullptr
        && this->resultContent_ == nullptr && this->score_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
      inline KnowledgeBaseSearchResults& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // resultContent Field Functions 
      bool hasResultContent() const { return this->resultContent_ != nullptr;};
      void deleteResultContent() { this->resultContent_ = nullptr;};
      inline string getResultContent() const { DARABONBA_PTR_GET_DEFAULT(resultContent_, "") };
      inline KnowledgeBaseSearchResults& setResultContent(string resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline KnowledgeBaseSearchResults& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    protected:
      shared_ptr<string> index_ {};
      shared_ptr<string> resultContent_ {};
      shared_ptr<double> score_ {};
    };

    virtual bool empty() const override { return this->knowledgeBaseSearchResults_ == nullptr
        && this->requestId_ == nullptr && this->webSearchResults_ == nullptr; };
    // knowledgeBaseSearchResults Field Functions 
    bool hasKnowledgeBaseSearchResults() const { return this->knowledgeBaseSearchResults_ != nullptr;};
    void deleteKnowledgeBaseSearchResults() { this->knowledgeBaseSearchResults_ = nullptr;};
    inline const vector<SearchInfoResponseBody::KnowledgeBaseSearchResults> & getKnowledgeBaseSearchResults() const { DARABONBA_PTR_GET_CONST(knowledgeBaseSearchResults_, vector<SearchInfoResponseBody::KnowledgeBaseSearchResults>) };
    inline vector<SearchInfoResponseBody::KnowledgeBaseSearchResults> getKnowledgeBaseSearchResults() { DARABONBA_PTR_GET(knowledgeBaseSearchResults_, vector<SearchInfoResponseBody::KnowledgeBaseSearchResults>) };
    inline SearchInfoResponseBody& setKnowledgeBaseSearchResults(const vector<SearchInfoResponseBody::KnowledgeBaseSearchResults> & knowledgeBaseSearchResults) { DARABONBA_PTR_SET_VALUE(knowledgeBaseSearchResults_, knowledgeBaseSearchResults) };
    inline SearchInfoResponseBody& setKnowledgeBaseSearchResults(vector<SearchInfoResponseBody::KnowledgeBaseSearchResults> && knowledgeBaseSearchResults) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseSearchResults_, knowledgeBaseSearchResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webSearchResults Field Functions 
    bool hasWebSearchResults() const { return this->webSearchResults_ != nullptr;};
    void deleteWebSearchResults() { this->webSearchResults_ = nullptr;};
    inline const vector<SearchInfoResponseBody::WebSearchResults> & getWebSearchResults() const { DARABONBA_PTR_GET_CONST(webSearchResults_, vector<SearchInfoResponseBody::WebSearchResults>) };
    inline vector<SearchInfoResponseBody::WebSearchResults> getWebSearchResults() { DARABONBA_PTR_GET(webSearchResults_, vector<SearchInfoResponseBody::WebSearchResults>) };
    inline SearchInfoResponseBody& setWebSearchResults(const vector<SearchInfoResponseBody::WebSearchResults> & webSearchResults) { DARABONBA_PTR_SET_VALUE(webSearchResults_, webSearchResults) };
    inline SearchInfoResponseBody& setWebSearchResults(vector<SearchInfoResponseBody::WebSearchResults> && webSearchResults) { DARABONBA_PTR_SET_RVALUE(webSearchResults_, webSearchResults) };


  protected:
    shared_ptr<vector<SearchInfoResponseBody::KnowledgeBaseSearchResults>> knowledgeBaseSearchResults_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<SearchInfoResponseBody::WebSearchResults>> webSearchResults_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
