// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMULTIACCOUNTRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMULTIACCOUNTRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMultiAccountResourcesRequestFilter.hpp>
#include <alibabacloud/models/SearchMultiAccountResourcesRequestSortCriterion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class SearchMultiAccountResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMultiAccountResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SortCriterion, sortCriterion_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMultiAccountResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SortCriterion, sortCriterion_);
    };
    SearchMultiAccountResourcesRequest() = default ;
    SearchMultiAccountResourcesRequest(const SearchMultiAccountResourcesRequest &) = default ;
    SearchMultiAccountResourcesRequest(SearchMultiAccountResourcesRequest &&) = default ;
    SearchMultiAccountResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMultiAccountResourcesRequest() = default ;
    SearchMultiAccountResourcesRequest& operator=(const SearchMultiAccountResourcesRequest &) = default ;
    SearchMultiAccountResourcesRequest& operator=(SearchMultiAccountResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->scope_ == nullptr && return this->sortCriterion_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<SearchMultiAccountResourcesRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<SearchMultiAccountResourcesRequestFilter>) };
    inline vector<SearchMultiAccountResourcesRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<SearchMultiAccountResourcesRequestFilter>) };
    inline SearchMultiAccountResourcesRequest& setFilter(const vector<SearchMultiAccountResourcesRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline SearchMultiAccountResourcesRequest& setFilter(vector<SearchMultiAccountResourcesRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchMultiAccountResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchMultiAccountResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline SearchMultiAccountResourcesRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // sortCriterion Field Functions 
    bool hasSortCriterion() const { return this->sortCriterion_ != nullptr;};
    void deleteSortCriterion() { this->sortCriterion_ = nullptr;};
    inline const SearchMultiAccountResourcesRequestSortCriterion & sortCriterion() const { DARABONBA_PTR_GET_CONST(sortCriterion_, SearchMultiAccountResourcesRequestSortCriterion) };
    inline SearchMultiAccountResourcesRequestSortCriterion sortCriterion() { DARABONBA_PTR_GET(sortCriterion_, SearchMultiAccountResourcesRequestSortCriterion) };
    inline SearchMultiAccountResourcesRequest& setSortCriterion(const SearchMultiAccountResourcesRequestSortCriterion & sortCriterion) { DARABONBA_PTR_SET_VALUE(sortCriterion_, sortCriterion) };
    inline SearchMultiAccountResourcesRequest& setSortCriterion(SearchMultiAccountResourcesRequestSortCriterion && sortCriterion) { DARABONBA_PTR_SET_RVALUE(sortCriterion_, sortCriterion) };


  protected:
    // The filter conditions.
    std::shared_ptr<vector<SearchMultiAccountResourcesRequestFilter>> filter_ = nullptr;
    // The maximum number of entries to return on each page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    // 
    // If the total number of entries returned for the current request exceeds the value of the `MaxResults` parameter, the entries are truncated. In this case, you can use the token to initiate another request and obtain the remaining entries.``
    std::shared_ptr<string> nextToken_ = nullptr;
    // The search scope. You can set the value to one of the following items:
    // 
    // *   ID of a resource directory: Resources within the management account and all members of the resource directory are searched. You can call the [GetResourceDirectory](https://help.aliyun.com/document_detail/159995.html) operation to obtain the ID.
    // *   ID of the Root folder: Resources within all members in the Root folder and the subfolders of the Root folder are searched. You can call the [ListFoldersForParent](https://help.aliyun.com/document_detail/159997.html) operation to obtain the ID.
    // *   ID of a folder: Resources within all members in the folder are searched. You can call the [ListFoldersForParent](https://help.aliyun.com/document_detail/159997.html) operation to obtain the ID.
    // *   ID of a member: Resources within the member are searched. You can call the [ListAccounts](https://help.aliyun.com/document_detail/160016.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> scope_ = nullptr;
    // The method that is used to sort the entries returned.
    std::shared_ptr<SearchMultiAccountResourcesRequestSortCriterion> sortCriterion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
