// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINEBUILDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINEBUILDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineBuildsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineBuildsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineBuildsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListRoutineBuildsRequest() = default ;
    ListRoutineBuildsRequest(const ListRoutineBuildsRequest &) = default ;
    ListRoutineBuildsRequest(ListRoutineBuildsRequest &&) = default ;
    ListRoutineBuildsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineBuildsRequest() = default ;
    ListRoutineBuildsRequest& operator=(const ListRoutineBuildsRequest &) = default ;
    ListRoutineBuildsRequest& operator=(ListRoutineBuildsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->routineName_ == nullptr && this->sortBy_ == nullptr && this->sortOrder_ == nullptr && this->status_ == nullptr; };
    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListRoutineBuildsRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRoutineBuildsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // routineName Field Functions 
    bool hasRoutineName() const { return this->routineName_ != nullptr;};
    void deleteRoutineName() { this->routineName_ = nullptr;};
    inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
    inline ListRoutineBuildsRequest& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListRoutineBuildsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListRoutineBuildsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListRoutineBuildsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The page number for a paged query. The value must be greater than or equal to 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of entries per page for a paged query. Valid values: 1 to 500.
    shared_ptr<int32_t> pageSize_ {};
    // The ER name.
    shared_ptr<string> routineName_ {};
    // The field used for sorting. By default, results are sorted by purchase time. Valid values:
    // 
    // - CreateTime: purchase time.
    // - ExpireTime: expiration time.
    shared_ptr<string> sortBy_ {};
    // The sort order. Default value: desc. Valid values:
    // 
    // - asc: ascending order.
    // - desc: descending order.
    shared_ptr<string> sortOrder_ {};
    // The status of the build task. Valid values:
    // 
    // - int: initialization
    // - pending: preparing
    // - building: building
    // - succeed: build succeeded
    // - failed: build failed
    // - canceled: canceled
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
