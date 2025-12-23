// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchResourcesRequestFilter.hpp>
#include <alibabacloud/models/SearchResourcesRequestSortCriterion.hpp>
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
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->includeDeletedResources_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->resourceGroupId_ == nullptr && return this->searchExpression_ == nullptr
        && return this->sortCriterion_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<SearchResourcesRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<SearchResourcesRequestFilter>) };
    inline vector<SearchResourcesRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<SearchResourcesRequestFilter>) };
    inline SearchResourcesRequest& setFilter(const vector<SearchResourcesRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline SearchResourcesRequest& setFilter(vector<SearchResourcesRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // includeDeletedResources Field Functions 
    bool hasIncludeDeletedResources() const { return this->includeDeletedResources_ != nullptr;};
    void deleteIncludeDeletedResources() { this->includeDeletedResources_ = nullptr;};
    inline bool includeDeletedResources() const { DARABONBA_PTR_GET_DEFAULT(includeDeletedResources_, false) };
    inline SearchResourcesRequest& setIncludeDeletedResources(bool includeDeletedResources) { DARABONBA_PTR_SET_VALUE(includeDeletedResources_, includeDeletedResources) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SearchResourcesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // searchExpression Field Functions 
    bool hasSearchExpression() const { return this->searchExpression_ != nullptr;};
    void deleteSearchExpression() { this->searchExpression_ = nullptr;};
    inline string searchExpression() const { DARABONBA_PTR_GET_DEFAULT(searchExpression_, "") };
    inline SearchResourcesRequest& setSearchExpression(string searchExpression) { DARABONBA_PTR_SET_VALUE(searchExpression_, searchExpression) };


    // sortCriterion Field Functions 
    bool hasSortCriterion() const { return this->sortCriterion_ != nullptr;};
    void deleteSortCriterion() { this->sortCriterion_ = nullptr;};
    inline const SearchResourcesRequestSortCriterion & sortCriterion() const { DARABONBA_PTR_GET_CONST(sortCriterion_, SearchResourcesRequestSortCriterion) };
    inline SearchResourcesRequestSortCriterion sortCriterion() { DARABONBA_PTR_GET(sortCriterion_, SearchResourcesRequestSortCriterion) };
    inline SearchResourcesRequest& setSortCriterion(const SearchResourcesRequestSortCriterion & sortCriterion) { DARABONBA_PTR_SET_VALUE(sortCriterion_, sortCriterion) };
    inline SearchResourcesRequest& setSortCriterion(SearchResourcesRequestSortCriterion && sortCriterion) { DARABONBA_PTR_SET_RVALUE(sortCriterion_, sortCriterion) };


  protected:
    // The filter conditions.
    std::shared_ptr<vector<SearchResourcesRequestFilter>> filter_ = nullptr;
    std::shared_ptr<bool> includeDeletedResources_ = nullptr;
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    // 
    // If the total number of entries returned for the current request exceeds the value of the `MaxResults` parameter, the entries are truncated. In this case, you can use the `token` to initiate another request and obtain the remaining entries.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> searchExpression_ = nullptr;
    // The method that is used to sort the entries returned.
    std::shared_ptr<SearchResourcesRequestSortCriterion> sortCriterion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
