// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class SearchResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(IncludeDeletedResources, includeDeletedResources_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SearchExpression, searchExpression_);
      DARABONBA_PTR_TO_JSON(SortCriterion, sortCriterion_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(IncludeDeletedResources, includeDeletedResources_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SearchExpression, searchExpression_);
      DARABONBA_PTR_FROM_JSON(SortCriterion, sortCriterion_);
    };
    SearchResourcesRequest() = default ;
    SearchResourcesRequest(const SearchResourcesRequest &) = default ;
    SearchResourcesRequest(SearchResourcesRequest &&) = default ;
    SearchResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResourcesRequest() = default ;
    SearchResourcesRequest& operator=(const SearchResourcesRequest &) = default ;
    SearchResourcesRequest& operator=(SearchResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SortCriterion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SortCriterion& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Order, order_);
      };
      friend void from_json(const Darabonba::Json& j, SortCriterion& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Order, order_);
      };
      SortCriterion() = default ;
      SortCriterion(const SortCriterion &) = default ;
      SortCriterion(SortCriterion &&) = default ;
      SortCriterion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SortCriterion() = default ;
      SortCriterion& operator=(const SortCriterion &) = default ;
      SortCriterion& operator=(SortCriterion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->order_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline SortCriterion& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
      inline SortCriterion& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    protected:
      // The sort key.
      // 
      // Set this parameter to `CreateTime`, which means the results are sorted by resource creation time.
      shared_ptr<string> key_ {};
      // The sort order. Valid values:
      // 
      // - ASC: Ascending order.
      // 
      // - DESC: Descending order.
      // 
      // Default value: ASC.
      shared_ptr<string> order_ {};
    };

    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(MatchType, matchType_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->matchType_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline Filter& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline Filter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Filter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // The key of the filter condition. For more information about the valid values, see the "`Supported filter parameters`" section below.
      shared_ptr<string> key_ {};
      // The matching method. Valid values:
      // 
      // - Equals: Exact match.
      // 
      // - Prefix: Prefix match.
      // 
      // - Contains: Contains a value.
      // 
      // - NotContains: Does not contain a value.
      // 
      // - Exists: The key exists.
      // 
      // - NotExists: The key does not exist.
      shared_ptr<string> matchType_ {};
      // The value of the filter condition.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->includeDeletedResources_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr && this->searchExpression_ == nullptr
        && this->sortCriterion_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<SearchResourcesRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<SearchResourcesRequest::Filter>) };
    inline vector<SearchResourcesRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<SearchResourcesRequest::Filter>) };
    inline SearchResourcesRequest& setFilter(const vector<SearchResourcesRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline SearchResourcesRequest& setFilter(vector<SearchResourcesRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // includeDeletedResources Field Functions 
    bool hasIncludeDeletedResources() const { return this->includeDeletedResources_ != nullptr;};
    void deleteIncludeDeletedResources() { this->includeDeletedResources_ = nullptr;};
    inline bool getIncludeDeletedResources() const { DARABONBA_PTR_GET_DEFAULT(includeDeletedResources_, false) };
    inline SearchResourcesRequest& setIncludeDeletedResources(bool includeDeletedResources) { DARABONBA_PTR_SET_VALUE(includeDeletedResources_, includeDeletedResources) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SearchResourcesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // searchExpression Field Functions 
    bool hasSearchExpression() const { return this->searchExpression_ != nullptr;};
    void deleteSearchExpression() { this->searchExpression_ = nullptr;};
    inline string getSearchExpression() const { DARABONBA_PTR_GET_DEFAULT(searchExpression_, "") };
    inline SearchResourcesRequest& setSearchExpression(string searchExpression) { DARABONBA_PTR_SET_VALUE(searchExpression_, searchExpression) };


    // sortCriterion Field Functions 
    bool hasSortCriterion() const { return this->sortCriterion_ != nullptr;};
    void deleteSortCriterion() { this->sortCriterion_ = nullptr;};
    inline const SearchResourcesRequest::SortCriterion & getSortCriterion() const { DARABONBA_PTR_GET_CONST(sortCriterion_, SearchResourcesRequest::SortCriterion) };
    inline SearchResourcesRequest::SortCriterion getSortCriterion() { DARABONBA_PTR_GET(sortCriterion_, SearchResourcesRequest::SortCriterion) };
    inline SearchResourcesRequest& setSortCriterion(const SearchResourcesRequest::SortCriterion & sortCriterion) { DARABONBA_PTR_SET_VALUE(sortCriterion_, sortCriterion) };
    inline SearchResourcesRequest& setSortCriterion(SearchResourcesRequest::SortCriterion && sortCriterion) { DARABONBA_PTR_SET_RVALUE(sortCriterion_, sortCriterion) };


  protected:
    // The filter conditions.
    shared_ptr<vector<SearchResourcesRequest::Filter>> filter_ {};
    // Specifies whether to include deleted resources. Valid values:
    // 
    // - true
    // 
    // - false
    shared_ptr<bool> includeDeletedResources_ {};
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 500.
    // 
    // Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    shared_ptr<string> nextToken_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The search keyword. Resource Center filters and sorts the search results based on relevance.
    // If you do not specify a sorting parameter, resources that better match the keyword are displayed with higher priority.
    shared_ptr<string> searchExpression_ {};
    // The sorting parameters.
    shared_ptr<SearchResourcesRequest::SortCriterion> sortCriterion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
