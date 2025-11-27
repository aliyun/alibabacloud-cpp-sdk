// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobsRequestFilter.hpp>
#include <alibabacloud/models/ListJobsRequestSortBy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    ListJobsRequest() = default ;
    ListJobsRequest(const ListJobsRequest &) = default ;
    ListJobsRequest(ListJobsRequest &&) = default ;
    ListJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsRequest() = default ;
    ListJobsRequest& operator=(const ListJobsRequest &) = default ;
    ListJobsRequest& operator=(ListJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->sortBy_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ListJobsRequestFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, ListJobsRequestFilter) };
    inline ListJobsRequestFilter filter() { DARABONBA_PTR_GET(filter_, ListJobsRequestFilter) };
    inline ListJobsRequest& setFilter(const ListJobsRequestFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListJobsRequest& setFilter(ListJobsRequestFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline const ListJobsRequestSortBy & sortBy() const { DARABONBA_PTR_GET_CONST(sortBy_, ListJobsRequestSortBy) };
    inline ListJobsRequestSortBy sortBy() { DARABONBA_PTR_GET(sortBy_, ListJobsRequestSortBy) };
    inline ListJobsRequest& setSortBy(const ListJobsRequestSortBy & sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };
    inline ListJobsRequest& setSortBy(ListJobsRequestSortBy && sortBy) { DARABONBA_PTR_SET_RVALUE(sortBy_, sortBy) };


  protected:
    // Queries job filter conditions.
    std::shared_ptr<ListJobsRequestFilter> filter_ = nullptr;
    // The page number.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries on the current page. Default value: 50. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The sorting method.
    std::shared_ptr<ListJobsRequestSortBy> sortBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
