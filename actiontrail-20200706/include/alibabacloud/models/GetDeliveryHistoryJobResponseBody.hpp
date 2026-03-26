// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDELIVERYHISTORYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDELIVERYHISTORYJOBRESPONSEBODY_HPP_
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
  class GetDeliveryHistoryJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeliveryHistoryJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HomeRegion, homeRegion_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TrailName, trailName_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeliveryHistoryJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HomeRegion, homeRegion_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TrailName, trailName_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
    };
    GetDeliveryHistoryJobResponseBody() = default ;
    GetDeliveryHistoryJobResponseBody(const GetDeliveryHistoryJobResponseBody &) = default ;
    GetDeliveryHistoryJobResponseBody(GetDeliveryHistoryJobResponseBody &&) = default ;
    GetDeliveryHistoryJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeliveryHistoryJobResponseBody() = default ;
    GetDeliveryHistoryJobResponseBody& operator=(const GetDeliveryHistoryJobResponseBody &) = default ;
    GetDeliveryHistoryJobResponseBody& operator=(GetDeliveryHistoryJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Status : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Status& obj) { 
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Status& obj) { 
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Status() = default ;
      Status(const Status &) = default ;
      Status(Status &&) = default ;
      Status(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Status() = default ;
      Status& operator=(const Status &) = default ;
      Status& operator=(Status &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->region_ == nullptr
        && this->status_ == nullptr; };
      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Status& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Status& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the region.
      shared_ptr<string> region_ {};
      // The task status in each region. Valid values:
      // 
      // *   0: The task is initializing.
      // *   1: The task is delivering historical events.
      // *   2: The task is complete.
      // *   3: The task fails.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->endTime_ == nullptr && this->homeRegion_ == nullptr && this->jobId_ == nullptr && this->jobStatus_ == nullptr && this->requestId_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->trailName_ == nullptr && this->updatedTime_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline GetDeliveryHistoryJobResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetDeliveryHistoryJobResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // homeRegion Field Functions 
    bool hasHomeRegion() const { return this->homeRegion_ != nullptr;};
    void deleteHomeRegion() { this->homeRegion_ = nullptr;};
    inline string getHomeRegion() const { DARABONBA_PTR_GET_DEFAULT(homeRegion_, "") };
    inline GetDeliveryHistoryJobResponseBody& setHomeRegion(string homeRegion) { DARABONBA_PTR_SET_VALUE(homeRegion_, homeRegion) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline GetDeliveryHistoryJobResponseBody& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline int32_t getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, 0) };
    inline GetDeliveryHistoryJobResponseBody& setJobStatus(int32_t jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeliveryHistoryJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetDeliveryHistoryJobResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<GetDeliveryHistoryJobResponseBody::Status> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<GetDeliveryHistoryJobResponseBody::Status>) };
    inline vector<GetDeliveryHistoryJobResponseBody::Status> getStatus() { DARABONBA_PTR_GET(status_, vector<GetDeliveryHistoryJobResponseBody::Status>) };
    inline GetDeliveryHistoryJobResponseBody& setStatus(const vector<GetDeliveryHistoryJobResponseBody::Status> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline GetDeliveryHistoryJobResponseBody& setStatus(vector<GetDeliveryHistoryJobResponseBody::Status> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // trailName Field Functions 
    bool hasTrailName() const { return this->trailName_ != nullptr;};
    void deleteTrailName() { this->trailName_ = nullptr;};
    inline string getTrailName() const { DARABONBA_PTR_GET_DEFAULT(trailName_, "") };
    inline GetDeliveryHistoryJobResponseBody& setTrailName(string trailName) { DARABONBA_PTR_SET_VALUE(trailName_, trailName) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
    inline GetDeliveryHistoryJobResponseBody& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    // The time when the task was created.
    shared_ptr<string> createdTime_ {};
    // The time when the task ended.
    shared_ptr<string> endTime_ {};
    // The home region of the trail.
    shared_ptr<string> homeRegion_ {};
    // The ID of the task.
    shared_ptr<int64_t> jobId_ {};
    // The task status. Valid values:
    // 
    // *   0: The task is initializing.
    // *   1: The task is delivering historical events.
    // *   2: The task is complete.
    // *   3: The task fails.
    shared_ptr<int32_t> jobStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The time when the task started.
    shared_ptr<string> startTime_ {};
    // A list of task statuses in each region.
    shared_ptr<vector<GetDeliveryHistoryJobResponseBody::Status>> status_ {};
    // The name of the trail based on which the task delivers events.
    shared_ptr<string> trailName_ {};
    // The time when the task was updated.
    shared_ptr<string> updatedTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
