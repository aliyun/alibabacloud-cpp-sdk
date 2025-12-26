// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINFOREQUESTWEBFILTERS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINFOREQUESTWEBFILTERS_HPP_
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
  class SearchInfoRequestWebFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInfoRequestWebFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(IncludeSites, includeSites_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(ResultLimit, resultLimit_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInfoRequestWebFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(IncludeSites, includeSites_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(ResultLimit, resultLimit_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
    };
    SearchInfoRequestWebFilters() = default ;
    SearchInfoRequestWebFilters(const SearchInfoRequestWebFilters &) = default ;
    SearchInfoRequestWebFilters(SearchInfoRequestWebFilters &&) = default ;
    SearchInfoRequestWebFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInfoRequestWebFilters() = default ;
    SearchInfoRequestWebFilters& operator=(const SearchInfoRequestWebFilters &) = default ;
    SearchInfoRequestWebFilters& operator=(SearchInfoRequestWebFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->includeSites_ == nullptr && return this->query_ == nullptr && return this->resultLimit_ == nullptr && return this->scoreThreshold_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline SearchInfoRequestWebFilters& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // includeSites Field Functions 
    bool hasIncludeSites() const { return this->includeSites_ != nullptr;};
    void deleteIncludeSites() { this->includeSites_ = nullptr;};
    inline const vector<string> & includeSites() const { DARABONBA_PTR_GET_CONST(includeSites_, vector<string>) };
    inline vector<string> includeSites() { DARABONBA_PTR_GET(includeSites_, vector<string>) };
    inline SearchInfoRequestWebFilters& setIncludeSites(const vector<string> & includeSites) { DARABONBA_PTR_SET_VALUE(includeSites_, includeSites) };
    inline SearchInfoRequestWebFilters& setIncludeSites(vector<string> && includeSites) { DARABONBA_PTR_SET_RVALUE(includeSites_, includeSites) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchInfoRequestWebFilters& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // resultLimit Field Functions 
    bool hasResultLimit() const { return this->resultLimit_ != nullptr;};
    void deleteResultLimit() { this->resultLimit_ = nullptr;};
    inline int32_t resultLimit() const { DARABONBA_PTR_GET_DEFAULT(resultLimit_, 0) };
    inline SearchInfoRequestWebFilters& setResultLimit(int32_t resultLimit) { DARABONBA_PTR_SET_VALUE(resultLimit_, resultLimit) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline double scoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0.0) };
    inline SearchInfoRequestWebFilters& setScoreThreshold(double scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<vector<string>> includeSites_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<int32_t> resultLimit_ = nullptr;
    std::shared_ptr<double> scoreThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
