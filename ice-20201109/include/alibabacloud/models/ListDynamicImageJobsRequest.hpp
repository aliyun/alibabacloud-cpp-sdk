// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICIMAGEJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICIMAGEJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListDynamicImageJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicImageJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndOfCreateTime, endOfCreateTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartOfCreateTime, startOfCreateTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicImageJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndOfCreateTime, endOfCreateTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartOfCreateTime, startOfCreateTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDynamicImageJobsRequest() = default ;
    ListDynamicImageJobsRequest(const ListDynamicImageJobsRequest &) = default ;
    ListDynamicImageJobsRequest(ListDynamicImageJobsRequest &&) = default ;
    ListDynamicImageJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicImageJobsRequest() = default ;
    ListDynamicImageJobsRequest& operator=(const ListDynamicImageJobsRequest &) = default ;
    ListDynamicImageJobsRequest& operator=(ListDynamicImageJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endOfCreateTime_ == nullptr
        && this->jobId_ == nullptr && this->nextPageToken_ == nullptr && this->orderBy_ == nullptr && this->pageSize_ == nullptr && this->startOfCreateTime_ == nullptr
        && this->status_ == nullptr; };
    // endOfCreateTime Field Functions 
    bool hasEndOfCreateTime() const { return this->endOfCreateTime_ != nullptr;};
    void deleteEndOfCreateTime() { this->endOfCreateTime_ = nullptr;};
    inline string getEndOfCreateTime() const { DARABONBA_PTR_GET_DEFAULT(endOfCreateTime_, "") };
    inline ListDynamicImageJobsRequest& setEndOfCreateTime(string endOfCreateTime) { DARABONBA_PTR_SET_VALUE(endOfCreateTime_, endOfCreateTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListDynamicImageJobsRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListDynamicImageJobsRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDynamicImageJobsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDynamicImageJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startOfCreateTime Field Functions 
    bool hasStartOfCreateTime() const { return this->startOfCreateTime_ != nullptr;};
    void deleteStartOfCreateTime() { this->startOfCreateTime_ = nullptr;};
    inline string getStartOfCreateTime() const { DARABONBA_PTR_GET_DEFAULT(startOfCreateTime_, "") };
    inline ListDynamicImageJobsRequest& setStartOfCreateTime(string startOfCreateTime) { DARABONBA_PTR_SET_VALUE(startOfCreateTime_, startOfCreateTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDynamicImageJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The end of the time range during which the jobs to be queried were created.
    shared_ptr<string> endOfCreateTime_ {};
    // The job ID.
    shared_ptr<string> jobId_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextPageToken_ {};
    // The order that you use to sort the query results. Valid values:
    // 
    // 1.  CreateTimeAsc: sorts the jobs by creation time in ascending order.
    // 2.  CreateTimeDesc: sorts the jobs by creation time in descending order.
    shared_ptr<string> orderBy_ {};
    // The number of entries per page. Default value: 20. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The beginning of the time range during which the jobs to be queried were created.
    shared_ptr<string> startOfCreateTime_ {};
    // The state of the job.
    // 
    // Valid values:
    // 
    // *   Init: The job is submitted.
    // *   Success: The job is successful.
    // *   Fail: The job failed.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
