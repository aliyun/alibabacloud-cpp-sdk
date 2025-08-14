// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveRecordJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListLiveRecordJobsRequest() = default ;
    ListLiveRecordJobsRequest(const ListLiveRecordJobsRequest &) = default ;
    ListLiveRecordJobsRequest(ListLiveRecordJobsRequest &&) = default ;
    ListLiveRecordJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordJobsRequest() = default ;
    ListLiveRecordJobsRequest& operator=(const ListLiveRecordJobsRequest &) = default ;
    ListLiveRecordJobsRequest& operator=(ListLiveRecordJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->keyword_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->sortBy_ != nullptr && this->startTime_ != nullptr
        && this->status_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListLiveRecordJobsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListLiveRecordJobsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLiveRecordJobsRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListLiveRecordJobsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLiveRecordJobsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListLiveRecordJobsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLiveRecordJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The end of the time range to query. The maximum time range between EndTime and StartTime cannot exceed 30 days. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> endTime_ = nullptr;
    // The search keyword. You can use the job ID or name as the keyword to search for jobs.
    std::shared_ptr<string> keyword_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The sorting order. By default, the query results are sorted by creation time in descending order.
    // 
    // Valid values:
    // 
    // *   asc: sorts the query results in ascending order.
    // *   desc: sorts the query results in descending order.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> startTime_ = nullptr;
    // The state of the job. By default, the state is not filtered.
    // 
    // Valid values:
    // 
    // *   paused: The job is paused.
    // *   initial: The job is not started.
    // *   started: The job is in progress.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
