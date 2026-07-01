// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveSnapshotJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveSnapshotJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchKeyWord, searchKeyWord_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveSnapshotJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchKeyWord, searchKeyWord_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListLiveSnapshotJobsRequest() = default ;
    ListLiveSnapshotJobsRequest(const ListLiveSnapshotJobsRequest &) = default ;
    ListLiveSnapshotJobsRequest(ListLiveSnapshotJobsRequest &&) = default ;
    ListLiveSnapshotJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveSnapshotJobsRequest() = default ;
    ListLiveSnapshotJobsRequest& operator=(const ListLiveSnapshotJobsRequest &) = default ;
    ListLiveSnapshotJobsRequest& operator=(ListLiveSnapshotJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->searchKeyWord_ == nullptr && this->sortBy_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListLiveSnapshotJobsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListLiveSnapshotJobsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLiveSnapshotJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKeyWord Field Functions 
    bool hasSearchKeyWord() const { return this->searchKeyWord_ != nullptr;};
    void deleteSearchKeyWord() { this->searchKeyWord_ = nullptr;};
    inline string getSearchKeyWord() const { DARABONBA_PTR_GET_DEFAULT(searchKeyWord_, "") };
    inline ListLiveSnapshotJobsRequest& setSearchKeyWord(string searchKeyWord) { DARABONBA_PTR_SET_VALUE(searchKeyWord_, searchKeyWord) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLiveSnapshotJobsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListLiveSnapshotJobsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLiveSnapshotJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The end of the time range to query. Specify the time in the ISO 8601 format: `yyyy-MM-ddTHH:mm:ssZ`. The time must be in UTC.
    // 
    // - If this parameter is not specified, the default is the current time.
    // 
    // -
    shared_ptr<string> endTime_ {};
    // The page number to return. The value must be an integer greater than or equal to 1. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of jobs to return on each page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The search keyword. You can search by Job ID or Job Name. Fuzzy search is supported for Job Name.
    // 
    // - The maximum length is 128 characters.
    shared_ptr<string> searchKeyWord_ {};
    // The sort order. The results are sorted by `CreateTime`. Default: `desc` (Descending).
    shared_ptr<string> sortBy_ {};
    // The start of the time range to query. Specify the time in the ISO 8601 format: `yyyy-MM-ddTHH:mm:ssZ`. The time must be in UTC.
    // 
    // - If this parameter is not specified, the default is 7 days ago.
    // 
    // - The interval between `StartTime` and `EndTime` cannot exceed 30 days.
    shared_ptr<string> startTime_ {};
    // The job status to filter by. If omitted, jobs of all statuses are returned.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
