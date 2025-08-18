// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEDULEDPRELOADEXECUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEDULEDPRELOADEXECUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateScheduledPreloadExecutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScheduledPreloadExecutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SliceLen, sliceLen_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduledPreloadExecutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SliceLen, sliceLen_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateScheduledPreloadExecutionResponseBody() = default ;
    UpdateScheduledPreloadExecutionResponseBody(const UpdateScheduledPreloadExecutionResponseBody &) = default ;
    UpdateScheduledPreloadExecutionResponseBody(UpdateScheduledPreloadExecutionResponseBody &&) = default ;
    UpdateScheduledPreloadExecutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScheduledPreloadExecutionResponseBody() = default ;
    UpdateScheduledPreloadExecutionResponseBody& operator=(const UpdateScheduledPreloadExecutionResponseBody &) = default ;
    UpdateScheduledPreloadExecutionResponseBody& operator=(UpdateScheduledPreloadExecutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->endTime_ != nullptr && this->id_ != nullptr && this->interval_ != nullptr && this->jobId_ != nullptr && this->requestId_ != nullptr
        && this->sliceLen_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline UpdateScheduledPreloadExecutionResponseBody& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateScheduledPreloadExecutionResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateScheduledPreloadExecutionResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateScheduledPreloadExecutionResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline UpdateScheduledPreloadExecutionResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateScheduledPreloadExecutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sliceLen Field Functions 
    bool hasSliceLen() const { return this->sliceLen_ != nullptr;};
    void deleteSliceLen() { this->sliceLen_ = nullptr;};
    inline int32_t sliceLen() const { DARABONBA_PTR_GET_DEFAULT(sliceLen_, 0) };
    inline UpdateScheduledPreloadExecutionResponseBody& setSliceLen(int32_t sliceLen) { DARABONBA_PTR_SET_VALUE(sliceLen_, sliceLen) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateScheduledPreloadExecutionResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateScheduledPreloadExecutionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> aliUid_ = nullptr;
    // The end time of the prefetch plan.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the prefetch plan.
    std::shared_ptr<string> id_ = nullptr;
    // The time interval between each batch execution. Unit: seconds.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The ID of the prefetch task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of URLs prefetched in each batch.
    std::shared_ptr<int32_t> sliceLen_ = nullptr;
    // The start time of the prefetch plan.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the prefetch plan. Valid values:
    // 
    // *   **waiting**
    // *   **running**
    // *   **finished**
    // *   **failed**
    // *   **stopped**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
