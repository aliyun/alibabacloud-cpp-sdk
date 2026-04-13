// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINFOREQUEST_HPP_
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
  class SearchInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseFilters, knowledgeBaseFilters_);
      DARABONBA_PTR_TO_JSON(WebFilters, webFilters_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseFilters, knowledgeBaseFilters_);
      DARABONBA_PTR_FROM_JSON(WebFilters, webFilters_);
    };
    SearchInfoRequest() = default ;
    SearchInfoRequest(const SearchInfoRequest &) = default ;
    SearchInfoRequest(SearchInfoRequest &&) = default ;
    SearchInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInfoRequest() = default ;
    SearchInfoRequest& operator=(const SearchInfoRequest &) = default ;
    SearchInfoRequest& operator=(SearchInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebFilters& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(IncludeSites, includeSites_);
        DARABONBA_PTR_TO_JSON(Query, query_);
        DARABONBA_PTR_TO_JSON(ResultLimit, resultLimit_);
        DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      };
      friend void from_json(const Darabonba::Json& j, WebFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(IncludeSites, includeSites_);
        DARABONBA_PTR_FROM_JSON(Query, query_);
        DARABONBA_PTR_FROM_JSON(ResultLimit, resultLimit_);
        DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      };
      WebFilters() = default ;
      WebFilters(const WebFilters &) = default ;
      WebFilters(WebFilters &&) = default ;
      WebFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebFilters() = default ;
      WebFilters& operator=(const WebFilters &) = default ;
      WebFilters& operator=(WebFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->includeSites_ == nullptr && this->query_ == nullptr && this->resultLimit_ == nullptr && this->scoreThreshold_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline WebFilters& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // includeSites Field Functions 
      bool hasIncludeSites() const { return this->includeSites_ != nullptr;};
      void deleteIncludeSites() { this->includeSites_ = nullptr;};
      inline const vector<string> & getIncludeSites() const { DARABONBA_PTR_GET_CONST(includeSites_, vector<string>) };
      inline vector<string> getIncludeSites() { DARABONBA_PTR_GET(includeSites_, vector<string>) };
      inline WebFilters& setIncludeSites(const vector<string> & includeSites) { DARABONBA_PTR_SET_VALUE(includeSites_, includeSites) };
      inline WebFilters& setIncludeSites(vector<string> && includeSites) { DARABONBA_PTR_SET_RVALUE(includeSites_, includeSites) };


      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline WebFilters& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      // resultLimit Field Functions 
      bool hasResultLimit() const { return this->resultLimit_ != nullptr;};
      void deleteResultLimit() { this->resultLimit_ = nullptr;};
      inline int32_t getResultLimit() const { DARABONBA_PTR_GET_DEFAULT(resultLimit_, 0) };
      inline WebFilters& setResultLimit(int32_t resultLimit) { DARABONBA_PTR_SET_VALUE(resultLimit_, resultLimit) };


      // scoreThreshold Field Functions 
      bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
      void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
      inline double getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0.0) };
      inline WebFilters& setScoreThreshold(double scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<vector<string>> includeSites_ {};
      // This parameter is required.
      shared_ptr<string> query_ {};
      shared_ptr<int32_t> resultLimit_ {};
      shared_ptr<double> scoreThreshold_ {};
    };

    class KnowledgeBaseFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KnowledgeBaseFilters& obj) { 
        DARABONBA_PTR_TO_JSON(CollectionName, collectionName_);
        DARABONBA_PTR_TO_JSON(Query, query_);
        DARABONBA_PTR_TO_JSON(ResultLimit, resultLimit_);
        DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      };
      friend void from_json(const Darabonba::Json& j, KnowledgeBaseFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(CollectionName, collectionName_);
        DARABONBA_PTR_FROM_JSON(Query, query_);
        DARABONBA_PTR_FROM_JSON(ResultLimit, resultLimit_);
        DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      };
      KnowledgeBaseFilters() = default ;
      KnowledgeBaseFilters(const KnowledgeBaseFilters &) = default ;
      KnowledgeBaseFilters(KnowledgeBaseFilters &&) = default ;
      KnowledgeBaseFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KnowledgeBaseFilters() = default ;
      KnowledgeBaseFilters& operator=(const KnowledgeBaseFilters &) = default ;
      KnowledgeBaseFilters& operator=(KnowledgeBaseFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->collectionName_ == nullptr
        && this->query_ == nullptr && this->resultLimit_ == nullptr && this->scoreThreshold_ == nullptr; };
      // collectionName Field Functions 
      bool hasCollectionName() const { return this->collectionName_ != nullptr;};
      void deleteCollectionName() { this->collectionName_ = nullptr;};
      inline string getCollectionName() const { DARABONBA_PTR_GET_DEFAULT(collectionName_, "") };
      inline KnowledgeBaseFilters& setCollectionName(string collectionName) { DARABONBA_PTR_SET_VALUE(collectionName_, collectionName) };


      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline KnowledgeBaseFilters& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      // resultLimit Field Functions 
      bool hasResultLimit() const { return this->resultLimit_ != nullptr;};
      void deleteResultLimit() { this->resultLimit_ = nullptr;};
      inline int32_t getResultLimit() const { DARABONBA_PTR_GET_DEFAULT(resultLimit_, 0) };
      inline KnowledgeBaseFilters& setResultLimit(int32_t resultLimit) { DARABONBA_PTR_SET_VALUE(resultLimit_, resultLimit) };


      // scoreThreshold Field Functions 
      bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
      void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
      inline double getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0.0) };
      inline KnowledgeBaseFilters& setScoreThreshold(double scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    protected:
      // This parameter is required.
      shared_ptr<string> collectionName_ {};
      // This parameter is required.
      shared_ptr<string> query_ {};
      shared_ptr<int32_t> resultLimit_ {};
      shared_ptr<double> scoreThreshold_ {};
    };

    virtual bool empty() const override { return this->knowledgeBaseFilters_ == nullptr
        && this->webFilters_ == nullptr; };
    // knowledgeBaseFilters Field Functions 
    bool hasKnowledgeBaseFilters() const { return this->knowledgeBaseFilters_ != nullptr;};
    void deleteKnowledgeBaseFilters() { this->knowledgeBaseFilters_ = nullptr;};
    inline const vector<SearchInfoRequest::KnowledgeBaseFilters> & getKnowledgeBaseFilters() const { DARABONBA_PTR_GET_CONST(knowledgeBaseFilters_, vector<SearchInfoRequest::KnowledgeBaseFilters>) };
    inline vector<SearchInfoRequest::KnowledgeBaseFilters> getKnowledgeBaseFilters() { DARABONBA_PTR_GET(knowledgeBaseFilters_, vector<SearchInfoRequest::KnowledgeBaseFilters>) };
    inline SearchInfoRequest& setKnowledgeBaseFilters(const vector<SearchInfoRequest::KnowledgeBaseFilters> & knowledgeBaseFilters) { DARABONBA_PTR_SET_VALUE(knowledgeBaseFilters_, knowledgeBaseFilters) };
    inline SearchInfoRequest& setKnowledgeBaseFilters(vector<SearchInfoRequest::KnowledgeBaseFilters> && knowledgeBaseFilters) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseFilters_, knowledgeBaseFilters) };


    // webFilters Field Functions 
    bool hasWebFilters() const { return this->webFilters_ != nullptr;};
    void deleteWebFilters() { this->webFilters_ = nullptr;};
    inline const vector<SearchInfoRequest::WebFilters> & getWebFilters() const { DARABONBA_PTR_GET_CONST(webFilters_, vector<SearchInfoRequest::WebFilters>) };
    inline vector<SearchInfoRequest::WebFilters> getWebFilters() { DARABONBA_PTR_GET(webFilters_, vector<SearchInfoRequest::WebFilters>) };
    inline SearchInfoRequest& setWebFilters(const vector<SearchInfoRequest::WebFilters> & webFilters) { DARABONBA_PTR_SET_VALUE(webFilters_, webFilters) };
    inline SearchInfoRequest& setWebFilters(vector<SearchInfoRequest::WebFilters> && webFilters) { DARABONBA_PTR_SET_RVALUE(webFilters_, webFilters) };


  protected:
    shared_ptr<vector<SearchInfoRequest::KnowledgeBaseFilters>> knowledgeBaseFilters_ {};
    shared_ptr<vector<SearchInfoRequest::WebFilters>> webFilters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
