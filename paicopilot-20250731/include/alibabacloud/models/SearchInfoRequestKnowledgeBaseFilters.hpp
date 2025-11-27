// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINFOREQUESTKNOWLEDGEBASEFILTERS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINFOREQUESTKNOWLEDGEBASEFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class SearchInfoRequestKnowledgeBaseFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInfoRequestKnowledgeBaseFilters& obj) { 
      DARABONBA_PTR_TO_JSON(CollectionName, collectionName_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(ResultLimit, resultLimit_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInfoRequestKnowledgeBaseFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectionName, collectionName_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(ResultLimit, resultLimit_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
    };
    SearchInfoRequestKnowledgeBaseFilters() = default ;
    SearchInfoRequestKnowledgeBaseFilters(const SearchInfoRequestKnowledgeBaseFilters &) = default ;
    SearchInfoRequestKnowledgeBaseFilters(SearchInfoRequestKnowledgeBaseFilters &&) = default ;
    SearchInfoRequestKnowledgeBaseFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInfoRequestKnowledgeBaseFilters() = default ;
    SearchInfoRequestKnowledgeBaseFilters& operator=(const SearchInfoRequestKnowledgeBaseFilters &) = default ;
    SearchInfoRequestKnowledgeBaseFilters& operator=(SearchInfoRequestKnowledgeBaseFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collectionName_ == nullptr
        && return this->query_ == nullptr && return this->resultLimit_ == nullptr && return this->scoreThreshold_ == nullptr; };
    // collectionName Field Functions 
    bool hasCollectionName() const { return this->collectionName_ != nullptr;};
    void deleteCollectionName() { this->collectionName_ = nullptr;};
    inline string collectionName() const { DARABONBA_PTR_GET_DEFAULT(collectionName_, "") };
    inline SearchInfoRequestKnowledgeBaseFilters& setCollectionName(string collectionName) { DARABONBA_PTR_SET_VALUE(collectionName_, collectionName) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchInfoRequestKnowledgeBaseFilters& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // resultLimit Field Functions 
    bool hasResultLimit() const { return this->resultLimit_ != nullptr;};
    void deleteResultLimit() { this->resultLimit_ = nullptr;};
    inline int32_t resultLimit() const { DARABONBA_PTR_GET_DEFAULT(resultLimit_, 0) };
    inline SearchInfoRequestKnowledgeBaseFilters& setResultLimit(int32_t resultLimit) { DARABONBA_PTR_SET_VALUE(resultLimit_, resultLimit) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline double scoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0.0) };
    inline SearchInfoRequestKnowledgeBaseFilters& setScoreThreshold(double scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> collectionName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<int32_t> resultLimit_ = nullptr;
    std::shared_ptr<double> scoreThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
