// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBRANCHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBRANCHESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListBranchesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBranchesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentBranchId, parentBranchId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Search, search_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ListBranchesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentBranchId, parentBranchId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Search, search_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
    };
    ListBranchesRequest() = default ;
    ListBranchesRequest(const ListBranchesRequest &) = default ;
    ListBranchesRequest(ListBranchesRequest &&) = default ;
    ListBranchesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBranchesRequest() = default ;
    ListBranchesRequest& operator=(const ListBranchesRequest &) = default ;
    ListBranchesRequest& operator=(ListBranchesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->parentBranchId_ == nullptr && this->regionId_ == nullptr
        && this->search_ == nullptr && this->sortBy_ == nullptr && this->sortOrder_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListBranchesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBranchesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBranchesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBranchesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentBranchId Field Functions 
    bool hasParentBranchId() const { return this->parentBranchId_ != nullptr;};
    void deleteParentBranchId() { this->parentBranchId_ = nullptr;};
    inline string getParentBranchId() const { DARABONBA_PTR_GET_DEFAULT(parentBranchId_, "") };
    inline ListBranchesRequest& setParentBranchId(string parentBranchId) { DARABONBA_PTR_SET_VALUE(parentBranchId_, parentBranchId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListBranchesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string getSearch() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListBranchesRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListBranchesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListBranchesRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    // The maximum number of records to return in this query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. It is not required for the first query. For subsequent queries, use the NextToken returned from the previous query.
    shared_ptr<string> nextToken_ {};
    // The page number. The value must be greater than 0. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page.
    // 
    // Valid values:
    // - 10
    // - 20
    // - 50
    // - 100
    // 
    // Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The parent branch ID, used to specify the parent branch for a new branch or as a query filter condition.
    shared_ptr<string> parentBranchId_ {};
    // The region ID. Must be specified when creating a primary branch. When creating a sub-branch, it inherits the region of the primary branch by default.
    shared_ptr<string> regionId_ {};
    // The search keyword. Supports fuzzy search by branch ID or branch name.
    shared_ptr<string> search_ {};
    // The sort field.
    // 
    // Valid values:
    // - BranchName: Sort by branch name.
    // - CreateTime: Sort by creation time.
    // - LastRunTime: Sort by last run time.
    // 
    // Default value: CreateTime.
    shared_ptr<string> sortBy_ {};
    // The sort direction.
    // 
    // Valid values:
    // - Asc: Ascending order.
    // - Desc: Descending order.
    // 
    // Default value: Desc.
    shared_ptr<string> sortOrder_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
