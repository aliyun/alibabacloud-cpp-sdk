// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAINFOJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAINFOJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaInfoJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaInfoJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndOfCreateTime, endOfCreateTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartOfCreateTime, startOfCreateTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaInfoJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndOfCreateTime, endOfCreateTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartOfCreateTime, startOfCreateTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListMediaInfoJobsRequest() = default ;
    ListMediaInfoJobsRequest(const ListMediaInfoJobsRequest &) = default ;
    ListMediaInfoJobsRequest(ListMediaInfoJobsRequest &&) = default ;
    ListMediaInfoJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaInfoJobsRequest() = default ;
    ListMediaInfoJobsRequest& operator=(const ListMediaInfoJobsRequest &) = default ;
    ListMediaInfoJobsRequest& operator=(ListMediaInfoJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endOfCreateTime_ == nullptr
        && return this->jobId_ == nullptr && return this->nextPageToken_ == nullptr && return this->orderBy_ == nullptr && return this->pageSize_ == nullptr && return this->startOfCreateTime_ == nullptr
        && return this->status_ == nullptr; };
    // endOfCreateTime Field Functions 
    bool hasEndOfCreateTime() const { return this->endOfCreateTime_ != nullptr;};
    void deleteEndOfCreateTime() { this->endOfCreateTime_ = nullptr;};
    inline string endOfCreateTime() const { DARABONBA_PTR_GET_DEFAULT(endOfCreateTime_, "") };
    inline ListMediaInfoJobsRequest& setEndOfCreateTime(string endOfCreateTime) { DARABONBA_PTR_SET_VALUE(endOfCreateTime_, endOfCreateTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListMediaInfoJobsRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListMediaInfoJobsRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListMediaInfoJobsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMediaInfoJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startOfCreateTime Field Functions 
    bool hasStartOfCreateTime() const { return this->startOfCreateTime_ != nullptr;};
    void deleteStartOfCreateTime() { this->startOfCreateTime_ = nullptr;};
    inline string startOfCreateTime() const { DARABONBA_PTR_GET_DEFAULT(startOfCreateTime_, "") };
    inline ListMediaInfoJobsRequest& setStartOfCreateTime(string startOfCreateTime) { DARABONBA_PTR_SET_VALUE(startOfCreateTime_, startOfCreateTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMediaInfoJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The end of the time range during which the jobs to be queried were created. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endOfCreateTime_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The order that you use to sort the query results. Valid values:
    // 
    // *   CreateTimeDesc: sorts the query results by creation time in descending order.
    // *   CreateTimeAsc: sorts the query results by creation time in ascending order.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The beginning of the time range during which the jobs to be queried were created. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startOfCreateTime_ = nullptr;
    // The state of the job. Valid values:
    // 
    // *   Init: The job is submitted.
    // *   Success: The job is successful.
    // *   Fail: The job failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
