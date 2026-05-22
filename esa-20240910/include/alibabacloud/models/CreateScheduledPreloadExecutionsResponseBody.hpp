// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDPRELOADEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDPRELOADEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateScheduledPreloadExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledPreloadExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedExecutions, failedExecutions_);
      DARABONBA_PTR_TO_JSON(FailedMessages, failedMessages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(SuccessExecutions, successExecutions_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledPreloadExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedExecutions, failedExecutions_);
      DARABONBA_PTR_FROM_JSON(FailedMessages, failedMessages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(SuccessExecutions, successExecutions_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    CreateScheduledPreloadExecutionsResponseBody() = default ;
    CreateScheduledPreloadExecutionsResponseBody(const CreateScheduledPreloadExecutionsResponseBody &) = default ;
    CreateScheduledPreloadExecutionsResponseBody(CreateScheduledPreloadExecutionsResponseBody &&) = default ;
    CreateScheduledPreloadExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledPreloadExecutionsResponseBody() = default ;
    CreateScheduledPreloadExecutionsResponseBody& operator=(const CreateScheduledPreloadExecutionsResponseBody &) = default ;
    CreateScheduledPreloadExecutionsResponseBody& operator=(CreateScheduledPreloadExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuccessExecutions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuccessExecutions& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(SliceLen, sliceLen_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, SuccessExecutions& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(SliceLen, sliceLen_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      SuccessExecutions() = default ;
      SuccessExecutions(const SuccessExecutions &) = default ;
      SuccessExecutions(SuccessExecutions &&) = default ;
      SuccessExecutions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuccessExecutions() = default ;
      SuccessExecutions& operator=(const SuccessExecutions &) = default ;
      SuccessExecutions& operator=(SuccessExecutions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->endTime_ == nullptr && this->id_ == nullptr && this->interval_ == nullptr && this->jobId_ == nullptr && this->sliceLen_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline SuccessExecutions& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline SuccessExecutions& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline SuccessExecutions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline SuccessExecutions& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline SuccessExecutions& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // sliceLen Field Functions 
      bool hasSliceLen() const { return this->sliceLen_ != nullptr;};
      void deleteSliceLen() { this->sliceLen_ = nullptr;};
      inline int32_t getSliceLen() const { DARABONBA_PTR_GET_DEFAULT(sliceLen_, 0) };
      inline SuccessExecutions& setSliceLen(int32_t sliceLen) { DARABONBA_PTR_SET_VALUE(sliceLen_, sliceLen) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline SuccessExecutions& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SuccessExecutions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> aliUid_ {};
      // The end time of the prefetch plans.
      shared_ptr<string> endTime_ {};
      // The ID of the prefetch plan.
      shared_ptr<string> id_ {};
      // The time interval between each batch execution. Unit: seconds.
      shared_ptr<int32_t> interval_ {};
      // The ID of the prefetch task.
      shared_ptr<string> jobId_ {};
      // The number of URLs prefetched in each batch.
      shared_ptr<int32_t> sliceLen_ {};
      // The start time of the prefetch plans.
      shared_ptr<string> startTime_ {};
      // The status of the prefetch plan. Valid values:
      // 
      // *   **waiting**
      // *   **running**
      // *   **finished**
      // *   **failed**
      // *   **stopped**
      shared_ptr<string> status_ {};
    };

    class FailedExecutions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedExecutions& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(SliceLen, sliceLen_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, FailedExecutions& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(SliceLen, sliceLen_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      FailedExecutions() = default ;
      FailedExecutions(const FailedExecutions &) = default ;
      FailedExecutions(FailedExecutions &&) = default ;
      FailedExecutions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedExecutions() = default ;
      FailedExecutions& operator=(const FailedExecutions &) = default ;
      FailedExecutions& operator=(FailedExecutions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->endTime_ == nullptr && this->id_ == nullptr && this->interval_ == nullptr && this->jobId_ == nullptr && this->sliceLen_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline FailedExecutions& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline FailedExecutions& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline FailedExecutions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline FailedExecutions& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline FailedExecutions& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // sliceLen Field Functions 
      bool hasSliceLen() const { return this->sliceLen_ != nullptr;};
      void deleteSliceLen() { this->sliceLen_ = nullptr;};
      inline int32_t getSliceLen() const { DARABONBA_PTR_GET_DEFAULT(sliceLen_, 0) };
      inline FailedExecutions& setSliceLen(int32_t sliceLen) { DARABONBA_PTR_SET_VALUE(sliceLen_, sliceLen) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline FailedExecutions& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline FailedExecutions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> aliUid_ {};
      // The end time of the prefetch plans.
      shared_ptr<string> endTime_ {};
      // The ID of the prefetch plan.
      shared_ptr<string> id_ {};
      // The time interval between each batch execution. Unit: seconds.
      shared_ptr<int32_t> interval_ {};
      // The ID of the prefetch task.
      shared_ptr<string> jobId_ {};
      // The number of URLs prefetched in each batch.
      shared_ptr<int32_t> sliceLen_ {};
      // The start time of the prefetch plans.
      shared_ptr<string> startTime_ {};
      // The status of the prefetch plan. Valid values:
      // 
      // *   **waiting**
      // *   **running**
      // *   **finished**
      // *   **failed**
      // *   **stopped**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->failedExecutions_ == nullptr
        && this->failedMessages_ == nullptr && this->requestId_ == nullptr && this->successCount_ == nullptr && this->successExecutions_ == nullptr && this->totalCount_ == nullptr; };
    // failedExecutions Field Functions 
    bool hasFailedExecutions() const { return this->failedExecutions_ != nullptr;};
    void deleteFailedExecutions() { this->failedExecutions_ = nullptr;};
    inline const vector<CreateScheduledPreloadExecutionsResponseBody::FailedExecutions> & getFailedExecutions() const { DARABONBA_PTR_GET_CONST(failedExecutions_, vector<CreateScheduledPreloadExecutionsResponseBody::FailedExecutions>) };
    inline vector<CreateScheduledPreloadExecutionsResponseBody::FailedExecutions> getFailedExecutions() { DARABONBA_PTR_GET(failedExecutions_, vector<CreateScheduledPreloadExecutionsResponseBody::FailedExecutions>) };
    inline CreateScheduledPreloadExecutionsResponseBody& setFailedExecutions(const vector<CreateScheduledPreloadExecutionsResponseBody::FailedExecutions> & failedExecutions) { DARABONBA_PTR_SET_VALUE(failedExecutions_, failedExecutions) };
    inline CreateScheduledPreloadExecutionsResponseBody& setFailedExecutions(vector<CreateScheduledPreloadExecutionsResponseBody::FailedExecutions> && failedExecutions) { DARABONBA_PTR_SET_RVALUE(failedExecutions_, failedExecutions) };


    // failedMessages Field Functions 
    bool hasFailedMessages() const { return this->failedMessages_ != nullptr;};
    void deleteFailedMessages() { this->failedMessages_ = nullptr;};
    inline const vector<string> & getFailedMessages() const { DARABONBA_PTR_GET_CONST(failedMessages_, vector<string>) };
    inline vector<string> getFailedMessages() { DARABONBA_PTR_GET(failedMessages_, vector<string>) };
    inline CreateScheduledPreloadExecutionsResponseBody& setFailedMessages(const vector<string> & failedMessages) { DARABONBA_PTR_SET_VALUE(failedMessages_, failedMessages) };
    inline CreateScheduledPreloadExecutionsResponseBody& setFailedMessages(vector<string> && failedMessages) { DARABONBA_PTR_SET_RVALUE(failedMessages_, failedMessages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateScheduledPreloadExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline CreateScheduledPreloadExecutionsResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // successExecutions Field Functions 
    bool hasSuccessExecutions() const { return this->successExecutions_ != nullptr;};
    void deleteSuccessExecutions() { this->successExecutions_ = nullptr;};
    inline const vector<CreateScheduledPreloadExecutionsResponseBody::SuccessExecutions> & getSuccessExecutions() const { DARABONBA_PTR_GET_CONST(successExecutions_, vector<CreateScheduledPreloadExecutionsResponseBody::SuccessExecutions>) };
    inline vector<CreateScheduledPreloadExecutionsResponseBody::SuccessExecutions> getSuccessExecutions() { DARABONBA_PTR_GET(successExecutions_, vector<CreateScheduledPreloadExecutionsResponseBody::SuccessExecutions>) };
    inline CreateScheduledPreloadExecutionsResponseBody& setSuccessExecutions(const vector<CreateScheduledPreloadExecutionsResponseBody::SuccessExecutions> & successExecutions) { DARABONBA_PTR_SET_VALUE(successExecutions_, successExecutions) };
    inline CreateScheduledPreloadExecutionsResponseBody& setSuccessExecutions(vector<CreateScheduledPreloadExecutionsResponseBody::SuccessExecutions> && successExecutions) { DARABONBA_PTR_SET_RVALUE(successExecutions_, successExecutions) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline CreateScheduledPreloadExecutionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about prefetch plans that failed to be created.
    shared_ptr<vector<CreateScheduledPreloadExecutionsResponseBody::FailedExecutions>> failedExecutions_ {};
    // The information about plan failures.
    shared_ptr<vector<string>> failedMessages_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of prefetch plans that are created.
    shared_ptr<int32_t> successCount_ {};
    // The information about created prefetch plans.
    shared_ptr<vector<CreateScheduledPreloadExecutionsResponseBody::SuccessExecutions>> successExecutions_ {};
    // The total number of new plans requested.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
