// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONLINEDDLPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETONLINEDDLPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOnlineDDLProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnlineDDLProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OnlineDDLTaskDetail, onlineDDLTaskDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnlineDDLProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OnlineDDLTaskDetail, onlineDDLTaskDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOnlineDDLProgressResponseBody() = default ;
    GetOnlineDDLProgressResponseBody(const GetOnlineDDLProgressResponseBody &) = default ;
    GetOnlineDDLProgressResponseBody(GetOnlineDDLProgressResponseBody &&) = default ;
    GetOnlineDDLProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnlineDDLProgressResponseBody() = default ;
    GetOnlineDDLProgressResponseBody& operator=(const GetOnlineDDLProgressResponseBody &) = default ;
    GetOnlineDDLProgressResponseBody& operator=(GetOnlineDDLProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OnlineDDLTaskDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OnlineDDLTaskDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CleanStrategy, cleanStrategy_);
        DARABONBA_PTR_TO_JSON(CopyChunkMode, copyChunkMode_);
        DARABONBA_PTR_TO_JSON(CopyChunkSize, copyChunkSize_);
        DARABONBA_PTR_TO_JSON(CopyCount, copyCount_);
        DARABONBA_PTR_TO_JSON(CopyTotal, copyTotal_);
        DARABONBA_PTR_TO_JSON(CutoverFailRetryTimes, cutoverFailRetryTimes_);
        DARABONBA_PTR_TO_JSON(CutoverLockTimeSeconds, cutoverLockTimeSeconds_);
        DARABONBA_PTR_TO_JSON(CutoverWindowEndTime, cutoverWindowEndTime_);
        DARABONBA_PTR_TO_JSON(CutoverWindowStartTime, cutoverWindowStartTime_);
        DARABONBA_PTR_TO_JSON(DelaySeconds, delaySeconds_);
        DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
        DARABONBA_PTR_TO_JSON(ProgressRatio, progressRatio_);
        DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      };
      friend void from_json(const Darabonba::Json& j, OnlineDDLTaskDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CleanStrategy, cleanStrategy_);
        DARABONBA_PTR_FROM_JSON(CopyChunkMode, copyChunkMode_);
        DARABONBA_PTR_FROM_JSON(CopyChunkSize, copyChunkSize_);
        DARABONBA_PTR_FROM_JSON(CopyCount, copyCount_);
        DARABONBA_PTR_FROM_JSON(CopyTotal, copyTotal_);
        DARABONBA_PTR_FROM_JSON(CutoverFailRetryTimes, cutoverFailRetryTimes_);
        DARABONBA_PTR_FROM_JSON(CutoverLockTimeSeconds, cutoverLockTimeSeconds_);
        DARABONBA_PTR_FROM_JSON(CutoverWindowEndTime, cutoverWindowEndTime_);
        DARABONBA_PTR_FROM_JSON(CutoverWindowStartTime, cutoverWindowStartTime_);
        DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
        DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
        DARABONBA_PTR_FROM_JSON(ProgressRatio, progressRatio_);
        DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      };
      OnlineDDLTaskDetail() = default ;
      OnlineDDLTaskDetail(const OnlineDDLTaskDetail &) = default ;
      OnlineDDLTaskDetail(OnlineDDLTaskDetail &&) = default ;
      OnlineDDLTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OnlineDDLTaskDetail() = default ;
      OnlineDDLTaskDetail& operator=(const OnlineDDLTaskDetail &) = default ;
      OnlineDDLTaskDetail& operator=(OnlineDDLTaskDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cleanStrategy_ == nullptr
        && this->copyChunkMode_ == nullptr && this->copyChunkSize_ == nullptr && this->copyCount_ == nullptr && this->copyTotal_ == nullptr && this->cutoverFailRetryTimes_ == nullptr
        && this->cutoverLockTimeSeconds_ == nullptr && this->cutoverWindowEndTime_ == nullptr && this->cutoverWindowStartTime_ == nullptr && this->delaySeconds_ == nullptr && this->jobStatus_ == nullptr
        && this->progressRatio_ == nullptr && this->statusDesc_ == nullptr; };
      // cleanStrategy Field Functions 
      bool hasCleanStrategy() const { return this->cleanStrategy_ != nullptr;};
      void deleteCleanStrategy() { this->cleanStrategy_ = nullptr;};
      inline string getCleanStrategy() const { DARABONBA_PTR_GET_DEFAULT(cleanStrategy_, "") };
      inline OnlineDDLTaskDetail& setCleanStrategy(string cleanStrategy) { DARABONBA_PTR_SET_VALUE(cleanStrategy_, cleanStrategy) };


      // copyChunkMode Field Functions 
      bool hasCopyChunkMode() const { return this->copyChunkMode_ != nullptr;};
      void deleteCopyChunkMode() { this->copyChunkMode_ = nullptr;};
      inline string getCopyChunkMode() const { DARABONBA_PTR_GET_DEFAULT(copyChunkMode_, "") };
      inline OnlineDDLTaskDetail& setCopyChunkMode(string copyChunkMode) { DARABONBA_PTR_SET_VALUE(copyChunkMode_, copyChunkMode) };


      // copyChunkSize Field Functions 
      bool hasCopyChunkSize() const { return this->copyChunkSize_ != nullptr;};
      void deleteCopyChunkSize() { this->copyChunkSize_ = nullptr;};
      inline int64_t getCopyChunkSize() const { DARABONBA_PTR_GET_DEFAULT(copyChunkSize_, 0L) };
      inline OnlineDDLTaskDetail& setCopyChunkSize(int64_t copyChunkSize) { DARABONBA_PTR_SET_VALUE(copyChunkSize_, copyChunkSize) };


      // copyCount Field Functions 
      bool hasCopyCount() const { return this->copyCount_ != nullptr;};
      void deleteCopyCount() { this->copyCount_ = nullptr;};
      inline int64_t getCopyCount() const { DARABONBA_PTR_GET_DEFAULT(copyCount_, 0L) };
      inline OnlineDDLTaskDetail& setCopyCount(int64_t copyCount) { DARABONBA_PTR_SET_VALUE(copyCount_, copyCount) };


      // copyTotal Field Functions 
      bool hasCopyTotal() const { return this->copyTotal_ != nullptr;};
      void deleteCopyTotal() { this->copyTotal_ = nullptr;};
      inline int64_t getCopyTotal() const { DARABONBA_PTR_GET_DEFAULT(copyTotal_, 0L) };
      inline OnlineDDLTaskDetail& setCopyTotal(int64_t copyTotal) { DARABONBA_PTR_SET_VALUE(copyTotal_, copyTotal) };


      // cutoverFailRetryTimes Field Functions 
      bool hasCutoverFailRetryTimes() const { return this->cutoverFailRetryTimes_ != nullptr;};
      void deleteCutoverFailRetryTimes() { this->cutoverFailRetryTimes_ = nullptr;};
      inline int64_t getCutoverFailRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(cutoverFailRetryTimes_, 0L) };
      inline OnlineDDLTaskDetail& setCutoverFailRetryTimes(int64_t cutoverFailRetryTimes) { DARABONBA_PTR_SET_VALUE(cutoverFailRetryTimes_, cutoverFailRetryTimes) };


      // cutoverLockTimeSeconds Field Functions 
      bool hasCutoverLockTimeSeconds() const { return this->cutoverLockTimeSeconds_ != nullptr;};
      void deleteCutoverLockTimeSeconds() { this->cutoverLockTimeSeconds_ = nullptr;};
      inline int64_t getCutoverLockTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(cutoverLockTimeSeconds_, 0L) };
      inline OnlineDDLTaskDetail& setCutoverLockTimeSeconds(int64_t cutoverLockTimeSeconds) { DARABONBA_PTR_SET_VALUE(cutoverLockTimeSeconds_, cutoverLockTimeSeconds) };


      // cutoverWindowEndTime Field Functions 
      bool hasCutoverWindowEndTime() const { return this->cutoverWindowEndTime_ != nullptr;};
      void deleteCutoverWindowEndTime() { this->cutoverWindowEndTime_ = nullptr;};
      inline string getCutoverWindowEndTime() const { DARABONBA_PTR_GET_DEFAULT(cutoverWindowEndTime_, "") };
      inline OnlineDDLTaskDetail& setCutoverWindowEndTime(string cutoverWindowEndTime) { DARABONBA_PTR_SET_VALUE(cutoverWindowEndTime_, cutoverWindowEndTime) };


      // cutoverWindowStartTime Field Functions 
      bool hasCutoverWindowStartTime() const { return this->cutoverWindowStartTime_ != nullptr;};
      void deleteCutoverWindowStartTime() { this->cutoverWindowStartTime_ = nullptr;};
      inline string getCutoverWindowStartTime() const { DARABONBA_PTR_GET_DEFAULT(cutoverWindowStartTime_, "") };
      inline OnlineDDLTaskDetail& setCutoverWindowStartTime(string cutoverWindowStartTime) { DARABONBA_PTR_SET_VALUE(cutoverWindowStartTime_, cutoverWindowStartTime) };


      // delaySeconds Field Functions 
      bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
      void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
      inline int64_t getDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0L) };
      inline OnlineDDLTaskDetail& setDelaySeconds(int64_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
      inline OnlineDDLTaskDetail& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // progressRatio Field Functions 
      bool hasProgressRatio() const { return this->progressRatio_ != nullptr;};
      void deleteProgressRatio() { this->progressRatio_ = nullptr;};
      inline string getProgressRatio() const { DARABONBA_PTR_GET_DEFAULT(progressRatio_, "") };
      inline OnlineDDLTaskDetail& setProgressRatio(string progressRatio) { DARABONBA_PTR_SET_VALUE(progressRatio_, progressRatio) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline OnlineDDLTaskDetail& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    protected:
      // The cleanup policy of the original table after the cut-over. Valid values:
      // 
      // *   **DROP**: Invalid original tables are deleted.
      // *   **MOVE**: Invalid original tables are moved to the test database. You can delete the tables manually.
      // *   **NOTHING**: Invalid original tables are retained in the original database. You can delete the tables manually.
      shared_ptr<string> cleanStrategy_ {};
      // The policy of full replication. Valid values:
      // 
      // *   **AUTO**: DMS dynamically adjusts the chunk size based on the performance of the database. Tables are locked for less than 1.5 seconds during a single replication operation.
      // *   **RUNNING**: DMS uses the specified value of the CopyChunkSize parameter. The valid value of the CopyChunkSize parameter ranges from 1 to 60000. If you set this parameter to RUNNING, you must specify the CopyChunkSize parameter.
      shared_ptr<string> copyChunkMode_ {};
      // The size of each chunk that is used to replicate data. This parameter is used to specify the size of each chunk. A larger chunk size increases the replication efficiency and decreases the business performance.
      // 
      // > During full replication, the original table is divided into N small chunks and each chunk is replicated to the temporary table one by one. By default, DMS dynamically adjusts the size of each chunk.
      shared_ptr<int64_t> copyChunkSize_ {};
      // The actual amount of data replicated from the original table in the lock-free change operation.
      shared_ptr<int64_t> copyCount_ {};
      // The estimated total number of rows of the data. The value is obtained from the statistical data in the information_schema database. In most cases, the estimated total number of rows is smaller than the actual number of rows in a table.
      shared_ptr<int64_t> copyTotal_ {};
      // The number of retries when the cut-over fails.
      shared_ptr<int64_t> cutoverFailRetryTimes_ {};
      // The maximum period of time that a table can be locked during cut-over. Unit: seconds.
      shared_ptr<int64_t> cutoverLockTimeSeconds_ {};
      // The end of the time window of the cut-over operation. This value is at least 30 minutes later than the CutoverWindowStartTime parameter. Default value: 23:59:59
      shared_ptr<string> cutoverWindowEndTime_ {};
      // The beginning of the time window of the cut-over operation. Default value: 00:00:00. This parameter controls the time window of the cut-over. Cut-over can be performed only when the cut-over conditions are met and the time is within the specified time window. If the time is not within the time window, the cut-over operation is not performed until the time reaches the beginning of the time window.
      shared_ptr<string> cutoverWindowStartTime_ {};
      // The replay latency of DMS. Unit: seconds. The replay latency is the period of time that is taken to replay the binary logs of the table to the temporary table. The latency does not indicate the data migration latency between a primary database and a secondary database.
      shared_ptr<int64_t> delaySeconds_ {};
      // The state of the task. Valid values:
      // 
      // *   **INIT**: The task is being initialized.
      // *   **SUCCESS**: The task is complete.
      // *   **RUNNING**: The task is being executed.
      // *   **WAITING_CUTOVER**: The task is waiting for cut-over.
      // *   **RESTARTING**: The task is restarting.
      // *   **PAUSE**: The task is suspended.
      // *   **UNSUPPORTED**: The task is not supported.
      // *   **CANCELED**: The task is canceled.
      // *   **FAIL**: The task failed.
      // *   **INTERRUPT**: The task is interrupted.
      shared_ptr<string> jobStatus_ {};
      // The estimated execution progress. The actual progress is subject to the task status.
      shared_ptr<string> progressRatio_ {};
      // The description of the task status.
      shared_ptr<string> statusDesc_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->onlineDDLTaskDetail_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetOnlineDDLProgressResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetOnlineDDLProgressResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // onlineDDLTaskDetail Field Functions 
    bool hasOnlineDDLTaskDetail() const { return this->onlineDDLTaskDetail_ != nullptr;};
    void deleteOnlineDDLTaskDetail() { this->onlineDDLTaskDetail_ = nullptr;};
    inline const GetOnlineDDLProgressResponseBody::OnlineDDLTaskDetail & getOnlineDDLTaskDetail() const { DARABONBA_PTR_GET_CONST(onlineDDLTaskDetail_, GetOnlineDDLProgressResponseBody::OnlineDDLTaskDetail) };
    inline GetOnlineDDLProgressResponseBody::OnlineDDLTaskDetail getOnlineDDLTaskDetail() { DARABONBA_PTR_GET(onlineDDLTaskDetail_, GetOnlineDDLProgressResponseBody::OnlineDDLTaskDetail) };
    inline GetOnlineDDLProgressResponseBody& setOnlineDDLTaskDetail(const GetOnlineDDLProgressResponseBody::OnlineDDLTaskDetail & onlineDDLTaskDetail) { DARABONBA_PTR_SET_VALUE(onlineDDLTaskDetail_, onlineDDLTaskDetail) };
    inline GetOnlineDDLProgressResponseBody& setOnlineDDLTaskDetail(GetOnlineDDLProgressResponseBody::OnlineDDLTaskDetail && onlineDDLTaskDetail) { DARABONBA_PTR_SET_RVALUE(onlineDDLTaskDetail_, onlineDDLTaskDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOnlineDDLProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOnlineDDLProgressResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The details of the task.
    shared_ptr<GetOnlineDDLProgressResponseBody::OnlineDDLTaskDetail> onlineDDLTaskDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
