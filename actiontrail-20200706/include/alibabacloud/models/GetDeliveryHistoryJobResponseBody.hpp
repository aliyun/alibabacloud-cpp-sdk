// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDELIVERYHISTORYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDELIVERYHISTORYJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDeliveryHistoryJobResponseBodyStatus.hpp>
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
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->endTime_ != nullptr && this->homeRegion_ != nullptr && this->jobId_ != nullptr && this->jobStatus_ != nullptr && this->requestId_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->trailName_ != nullptr && this->updatedTime_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline GetDeliveryHistoryJobResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetDeliveryHistoryJobResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // homeRegion Field Functions 
    bool hasHomeRegion() const { return this->homeRegion_ != nullptr;};
    void deleteHomeRegion() { this->homeRegion_ = nullptr;};
    inline string homeRegion() const { DARABONBA_PTR_GET_DEFAULT(homeRegion_, "") };
    inline GetDeliveryHistoryJobResponseBody& setHomeRegion(string homeRegion) { DARABONBA_PTR_SET_VALUE(homeRegion_, homeRegion) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline GetDeliveryHistoryJobResponseBody& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline int32_t jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, 0) };
    inline GetDeliveryHistoryJobResponseBody& setJobStatus(int32_t jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeliveryHistoryJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetDeliveryHistoryJobResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<GetDeliveryHistoryJobResponseBodyStatus> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<GetDeliveryHistoryJobResponseBodyStatus>) };
    inline vector<GetDeliveryHistoryJobResponseBodyStatus> status() { DARABONBA_PTR_GET(status_, vector<GetDeliveryHistoryJobResponseBodyStatus>) };
    inline GetDeliveryHistoryJobResponseBody& setStatus(const vector<GetDeliveryHistoryJobResponseBodyStatus> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline GetDeliveryHistoryJobResponseBody& setStatus(vector<GetDeliveryHistoryJobResponseBodyStatus> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // trailName Field Functions 
    bool hasTrailName() const { return this->trailName_ != nullptr;};
    void deleteTrailName() { this->trailName_ = nullptr;};
    inline string trailName() const { DARABONBA_PTR_GET_DEFAULT(trailName_, "") };
    inline GetDeliveryHistoryJobResponseBody& setTrailName(string trailName) { DARABONBA_PTR_SET_VALUE(trailName_, trailName) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline string updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
    inline GetDeliveryHistoryJobResponseBody& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    // The time when the task was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The time when the task ended.
    std::shared_ptr<string> endTime_ = nullptr;
    // The home region of the trail.
    std::shared_ptr<string> homeRegion_ = nullptr;
    // The ID of the task.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The task status. Valid values:
    // 
    // *   0: The task is initializing.
    // *   1: The task is delivering historical events.
    // *   2: The task is complete.
    // *   3: The task fails.
    std::shared_ptr<int32_t> jobStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time when the task started.
    std::shared_ptr<string> startTime_ = nullptr;
    // A list of task statuses in each region.
    std::shared_ptr<vector<GetDeliveryHistoryJobResponseBodyStatus>> status_ = nullptr;
    // The name of the trail based on which the task delivers events.
    std::shared_ptr<string> trailName_ = nullptr;
    // The time when the task was updated.
    std::shared_ptr<string> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
