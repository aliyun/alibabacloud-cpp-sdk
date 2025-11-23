// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONLINEDDLPROGRESSRESPONSEBODYONLINEDDLTASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETONLINEDDLPROGRESSRESPONSEBODYONLINEDDLTASKDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& obj) { 
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
    GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail() = default ;
    GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail(const GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail &) = default ;
    GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail(GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail &&) = default ;
    GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail() = default ;
    GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& operator=(const GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail &) = default ;
    GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& operator=(GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cleanStrategy_ == nullptr
        && return this->copyChunkMode_ == nullptr && return this->copyChunkSize_ == nullptr && return this->copyCount_ == nullptr && return this->copyTotal_ == nullptr && return this->cutoverFailRetryTimes_ == nullptr
        && return this->cutoverLockTimeSeconds_ == nullptr && return this->cutoverWindowEndTime_ == nullptr && return this->cutoverWindowStartTime_ == nullptr && return this->delaySeconds_ == nullptr && return this->jobStatus_ == nullptr
        && return this->progressRatio_ == nullptr && return this->statusDesc_ == nullptr; };
    // cleanStrategy Field Functions 
    bool hasCleanStrategy() const { return this->cleanStrategy_ != nullptr;};
    void deleteCleanStrategy() { this->cleanStrategy_ = nullptr;};
    inline string cleanStrategy() const { DARABONBA_PTR_GET_DEFAULT(cleanStrategy_, "") };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setCleanStrategy(string cleanStrategy) { DARABONBA_PTR_SET_VALUE(cleanStrategy_, cleanStrategy) };


    // copyChunkMode Field Functions 
    bool hasCopyChunkMode() const { return this->copyChunkMode_ != nullptr;};
    void deleteCopyChunkMode() { this->copyChunkMode_ = nullptr;};
    inline string copyChunkMode() const { DARABONBA_PTR_GET_DEFAULT(copyChunkMode_, "") };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setCopyChunkMode(string copyChunkMode) { DARABONBA_PTR_SET_VALUE(copyChunkMode_, copyChunkMode) };


    // copyChunkSize Field Functions 
    bool hasCopyChunkSize() const { return this->copyChunkSize_ != nullptr;};
    void deleteCopyChunkSize() { this->copyChunkSize_ = nullptr;};
    inline int64_t copyChunkSize() const { DARABONBA_PTR_GET_DEFAULT(copyChunkSize_, 0L) };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setCopyChunkSize(int64_t copyChunkSize) { DARABONBA_PTR_SET_VALUE(copyChunkSize_, copyChunkSize) };


    // copyCount Field Functions 
    bool hasCopyCount() const { return this->copyCount_ != nullptr;};
    void deleteCopyCount() { this->copyCount_ = nullptr;};
    inline int64_t copyCount() const { DARABONBA_PTR_GET_DEFAULT(copyCount_, 0L) };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setCopyCount(int64_t copyCount) { DARABONBA_PTR_SET_VALUE(copyCount_, copyCount) };


    // copyTotal Field Functions 
    bool hasCopyTotal() const { return this->copyTotal_ != nullptr;};
    void deleteCopyTotal() { this->copyTotal_ = nullptr;};
    inline int64_t copyTotal() const { DARABONBA_PTR_GET_DEFAULT(copyTotal_, 0L) };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setCopyTotal(int64_t copyTotal) { DARABONBA_PTR_SET_VALUE(copyTotal_, copyTotal) };


    // cutoverFailRetryTimes Field Functions 
    bool hasCutoverFailRetryTimes() const { return this->cutoverFailRetryTimes_ != nullptr;};
    void deleteCutoverFailRetryTimes() { this->cutoverFailRetryTimes_ = nullptr;};
    inline int64_t cutoverFailRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(cutoverFailRetryTimes_, 0L) };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setCutoverFailRetryTimes(int64_t cutoverFailRetryTimes) { DARABONBA_PTR_SET_VALUE(cutoverFailRetryTimes_, cutoverFailRetryTimes) };


    // cutoverLockTimeSeconds Field Functions 
    bool hasCutoverLockTimeSeconds() const { return this->cutoverLockTimeSeconds_ != nullptr;};
    void deleteCutoverLockTimeSeconds() { this->cutoverLockTimeSeconds_ = nullptr;};
    inline int64_t cutoverLockTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(cutoverLockTimeSeconds_, 0L) };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setCutoverLockTimeSeconds(int64_t cutoverLockTimeSeconds) { DARABONBA_PTR_SET_VALUE(cutoverLockTimeSeconds_, cutoverLockTimeSeconds) };


    // cutoverWindowEndTime Field Functions 
    bool hasCutoverWindowEndTime() const { return this->cutoverWindowEndTime_ != nullptr;};
    void deleteCutoverWindowEndTime() { this->cutoverWindowEndTime_ = nullptr;};
    inline string cutoverWindowEndTime() const { DARABONBA_PTR_GET_DEFAULT(cutoverWindowEndTime_, "") };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setCutoverWindowEndTime(string cutoverWindowEndTime) { DARABONBA_PTR_SET_VALUE(cutoverWindowEndTime_, cutoverWindowEndTime) };


    // cutoverWindowStartTime Field Functions 
    bool hasCutoverWindowStartTime() const { return this->cutoverWindowStartTime_ != nullptr;};
    void deleteCutoverWindowStartTime() { this->cutoverWindowStartTime_ = nullptr;};
    inline string cutoverWindowStartTime() const { DARABONBA_PTR_GET_DEFAULT(cutoverWindowStartTime_, "") };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setCutoverWindowStartTime(string cutoverWindowStartTime) { DARABONBA_PTR_SET_VALUE(cutoverWindowStartTime_, cutoverWindowStartTime) };


    // delaySeconds Field Functions 
    bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
    void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
    inline int64_t delaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0L) };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setDelaySeconds(int64_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // progressRatio Field Functions 
    bool hasProgressRatio() const { return this->progressRatio_ != nullptr;};
    void deleteProgressRatio() { this->progressRatio_ = nullptr;};
    inline string progressRatio() const { DARABONBA_PTR_GET_DEFAULT(progressRatio_, "") };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setProgressRatio(string progressRatio) { DARABONBA_PTR_SET_VALUE(progressRatio_, progressRatio) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline GetOnlineDDLProgressResponseBodyOnlineDDLTaskDetail& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


  protected:
    // The cleanup policy of the original table after the cut-over. Valid values:
    // 
    // *   **DROP**: Invalid original tables are deleted.
    // *   **MOVE**: Invalid original tables are moved to the test database. You can delete the tables manually.
    // *   **NOTHING**: Invalid original tables are retained in the original database. You can delete the tables manually.
    std::shared_ptr<string> cleanStrategy_ = nullptr;
    // The policy of full replication. Valid values:
    // 
    // *   **AUTO**: DMS dynamically adjusts the chunk size based on the performance of the database. Tables are locked for less than 1.5 seconds during a single replication operation.
    // *   **RUNNING**: DMS uses the specified value of the CopyChunkSize parameter. The valid value of the CopyChunkSize parameter ranges from 1 to 60000. If you set this parameter to RUNNING, you must specify the CopyChunkSize parameter.
    std::shared_ptr<string> copyChunkMode_ = nullptr;
    // The size of each chunk that is used to replicate data. This parameter is used to specify the size of each chunk. A larger chunk size increases the replication efficiency and decreases the business performance.
    // 
    // > During full replication, the original table is divided into N small chunks and each chunk is replicated to the temporary table one by one. By default, DMS dynamically adjusts the size of each chunk.
    std::shared_ptr<int64_t> copyChunkSize_ = nullptr;
    // The actual amount of data replicated from the original table in the lock-free change operation.
    std::shared_ptr<int64_t> copyCount_ = nullptr;
    // The estimated total number of rows of the data. The value is obtained from the statistical data in the information_schema database. In most cases, the estimated total number of rows is smaller than the actual number of rows in a table.
    std::shared_ptr<int64_t> copyTotal_ = nullptr;
    // The number of retries when the cut-over fails.
    std::shared_ptr<int64_t> cutoverFailRetryTimes_ = nullptr;
    // The maximum period of time that a table can be locked during cut-over. Unit: seconds.
    std::shared_ptr<int64_t> cutoverLockTimeSeconds_ = nullptr;
    // The end of the time window of the cut-over operation. This value is at least 30 minutes later than the CutoverWindowStartTime parameter. Default value: 23:59:59
    std::shared_ptr<string> cutoverWindowEndTime_ = nullptr;
    // The beginning of the time window of the cut-over operation. Default value: 00:00:00. This parameter controls the time window of the cut-over. Cut-over can be performed only when the cut-over conditions are met and the time is within the specified time window. If the time is not within the time window, the cut-over operation is not performed until the time reaches the beginning of the time window.
    std::shared_ptr<string> cutoverWindowStartTime_ = nullptr;
    // The replay latency of DMS. Unit: seconds. The replay latency is the period of time that is taken to replay the binary logs of the table to the temporary table. The latency does not indicate the data migration latency between a primary database and a secondary database.
    std::shared_ptr<int64_t> delaySeconds_ = nullptr;
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
    std::shared_ptr<string> jobStatus_ = nullptr;
    // The estimated execution progress. The actual progress is subject to the task status.
    std::shared_ptr<string> progressRatio_ = nullptr;
    // The description of the task status.
    std::shared_ptr<string> statusDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
