// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELIVERYHISTORYJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDELIVERYHISTORYJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class ListDeliveryHistoryJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeliveryHistoryJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryHistoryJobs, deliveryHistoryJobs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeliveryHistoryJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryHistoryJobs, deliveryHistoryJobs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDeliveryHistoryJobsResponseBody() = default ;
    ListDeliveryHistoryJobsResponseBody(const ListDeliveryHistoryJobsResponseBody &) = default ;
    ListDeliveryHistoryJobsResponseBody(ListDeliveryHistoryJobsResponseBody &&) = default ;
    ListDeliveryHistoryJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeliveryHistoryJobsResponseBody() = default ;
    ListDeliveryHistoryJobsResponseBody& operator=(const ListDeliveryHistoryJobsResponseBody &) = default ;
    ListDeliveryHistoryJobsResponseBody& operator=(ListDeliveryHistoryJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeliveryHistoryJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliveryHistoryJobs& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(HomeRegion, homeRegion_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TrailName, trailName_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      };
      friend void from_json(const Darabonba::Json& j, DeliveryHistoryJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(HomeRegion, homeRegion_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TrailName, trailName_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      };
      DeliveryHistoryJobs() = default ;
      DeliveryHistoryJobs(const DeliveryHistoryJobs &) = default ;
      DeliveryHistoryJobs(DeliveryHistoryJobs &&) = default ;
      DeliveryHistoryJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeliveryHistoryJobs() = default ;
      DeliveryHistoryJobs& operator=(const DeliveryHistoryJobs &) = default ;
      DeliveryHistoryJobs& operator=(DeliveryHistoryJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->endTime_ == nullptr && this->homeRegion_ == nullptr && this->jobId_ == nullptr && this->jobStatus_ == nullptr && this->startTime_ == nullptr
        && this->trailName_ == nullptr && this->updatedTime_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline DeliveryHistoryJobs& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline DeliveryHistoryJobs& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // homeRegion Field Functions 
      bool hasHomeRegion() const { return this->homeRegion_ != nullptr;};
      void deleteHomeRegion() { this->homeRegion_ = nullptr;};
      inline string getHomeRegion() const { DARABONBA_PTR_GET_DEFAULT(homeRegion_, "") };
      inline DeliveryHistoryJobs& setHomeRegion(string homeRegion) { DARABONBA_PTR_SET_VALUE(homeRegion_, homeRegion) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
      inline DeliveryHistoryJobs& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline int32_t getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, 0) };
      inline DeliveryHistoryJobs& setJobStatus(int32_t jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline DeliveryHistoryJobs& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // trailName Field Functions 
      bool hasTrailName() const { return this->trailName_ != nullptr;};
      void deleteTrailName() { this->trailName_ = nullptr;};
      inline string getTrailName() const { DARABONBA_PTR_GET_DEFAULT(trailName_, "") };
      inline DeliveryHistoryJobs& setTrailName(string trailName) { DARABONBA_PTR_SET_VALUE(trailName_, trailName) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
      inline DeliveryHistoryJobs& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    protected:
      // The time when the task was created.
      shared_ptr<string> createdTime_ {};
      // The time when the task ended.
      shared_ptr<string> endTime_ {};
      // The home region of the trail.
      shared_ptr<string> homeRegion_ {};
      // The task ID.
      shared_ptr<int64_t> jobId_ {};
      // The task status. Valid values:
      // 
      // *   0: The task is initializing.
      // *   1: The task is delivering historical events.
      // *   2: The task is complete.
      // *   3: The task fails.
      shared_ptr<int32_t> jobStatus_ {};
      // The time when the task started.
      shared_ptr<string> startTime_ {};
      // The name of the trail.
      shared_ptr<string> trailName_ {};
      // The time when the task was updated.
      shared_ptr<string> updatedTime_ {};
    };

    virtual bool empty() const override { return this->deliveryHistoryJobs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // deliveryHistoryJobs Field Functions 
    bool hasDeliveryHistoryJobs() const { return this->deliveryHistoryJobs_ != nullptr;};
    void deleteDeliveryHistoryJobs() { this->deliveryHistoryJobs_ = nullptr;};
    inline const vector<ListDeliveryHistoryJobsResponseBody::DeliveryHistoryJobs> & getDeliveryHistoryJobs() const { DARABONBA_PTR_GET_CONST(deliveryHistoryJobs_, vector<ListDeliveryHistoryJobsResponseBody::DeliveryHistoryJobs>) };
    inline vector<ListDeliveryHistoryJobsResponseBody::DeliveryHistoryJobs> getDeliveryHistoryJobs() { DARABONBA_PTR_GET(deliveryHistoryJobs_, vector<ListDeliveryHistoryJobsResponseBody::DeliveryHistoryJobs>) };
    inline ListDeliveryHistoryJobsResponseBody& setDeliveryHistoryJobs(const vector<ListDeliveryHistoryJobsResponseBody::DeliveryHistoryJobs> & deliveryHistoryJobs) { DARABONBA_PTR_SET_VALUE(deliveryHistoryJobs_, deliveryHistoryJobs) };
    inline ListDeliveryHistoryJobsResponseBody& setDeliveryHistoryJobs(vector<ListDeliveryHistoryJobsResponseBody::DeliveryHistoryJobs> && deliveryHistoryJobs) { DARABONBA_PTR_SET_RVALUE(deliveryHistoryJobs_, deliveryHistoryJobs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDeliveryHistoryJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDeliveryHistoryJobsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeliveryHistoryJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDeliveryHistoryJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of historical event delivery tasks.
    shared_ptr<vector<ListDeliveryHistoryJobsResponseBody::DeliveryHistoryJobs>> deliveryHistoryJobs_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of historical event delivery tasks returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
