// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLISTRESPONSEBODYTASKRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLISTRESPONSEBODYTASKRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSyncAssetTaskListResponseBodyTaskRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncAssetTaskListResponseBodyTaskRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_TO_JSON(IpSegments, ipSegments_);
      DARABONBA_PTR_TO_JSON(ProcessRate, processRate_);
      DARABONBA_PTR_TO_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_TO_JSON(TaskEndTime, taskEndTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncAssetTaskListResponseBodyTaskRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_FROM_JSON(IpSegments, ipSegments_);
      DARABONBA_PTR_FROM_JSON(ProcessRate, processRate_);
      DARABONBA_PTR_FROM_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_FROM_JSON(TaskEndTime, taskEndTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeSyncAssetTaskListResponseBodyTaskRecords() = default ;
    DescribeSyncAssetTaskListResponseBodyTaskRecords(const DescribeSyncAssetTaskListResponseBodyTaskRecords &) = default ;
    DescribeSyncAssetTaskListResponseBodyTaskRecords(DescribeSyncAssetTaskListResponseBodyTaskRecords &&) = default ;
    DescribeSyncAssetTaskListResponseBodyTaskRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncAssetTaskListResponseBodyTaskRecords() = default ;
    DescribeSyncAssetTaskListResponseBodyTaskRecords& operator=(const DescribeSyncAssetTaskListResponseBodyTaskRecords &) = default ;
    DescribeSyncAssetTaskListResponseBodyTaskRecords& operator=(DescribeSyncAssetTaskListResponseBodyTaskRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetCount_ == nullptr
        && return this->ipSegments_ == nullptr && return this->processRate_ == nullptr && return this->rootTaskId_ == nullptr && return this->taskEndTime_ == nullptr && return this->taskName_ == nullptr
        && return this->taskStartTime_ == nullptr && return this->taskStatus_ == nullptr && return this->taskType_ == nullptr; };
    // assetCount Field Functions 
    bool hasAssetCount() const { return this->assetCount_ != nullptr;};
    void deleteAssetCount() { this->assetCount_ = nullptr;};
    inline int32_t assetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0) };
    inline DescribeSyncAssetTaskListResponseBodyTaskRecords& setAssetCount(int32_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


    // ipSegments Field Functions 
    bool hasIpSegments() const { return this->ipSegments_ != nullptr;};
    void deleteIpSegments() { this->ipSegments_ = nullptr;};
    inline string ipSegments() const { DARABONBA_PTR_GET_DEFAULT(ipSegments_, "") };
    inline DescribeSyncAssetTaskListResponseBodyTaskRecords& setIpSegments(string ipSegments) { DARABONBA_PTR_SET_VALUE(ipSegments_, ipSegments) };


    // processRate Field Functions 
    bool hasProcessRate() const { return this->processRate_ != nullptr;};
    void deleteProcessRate() { this->processRate_ = nullptr;};
    inline int32_t processRate() const { DARABONBA_PTR_GET_DEFAULT(processRate_, 0) };
    inline DescribeSyncAssetTaskListResponseBodyTaskRecords& setProcessRate(int32_t processRate) { DARABONBA_PTR_SET_VALUE(processRate_, processRate) };


    // rootTaskId Field Functions 
    bool hasRootTaskId() const { return this->rootTaskId_ != nullptr;};
    void deleteRootTaskId() { this->rootTaskId_ = nullptr;};
    inline string rootTaskId() const { DARABONBA_PTR_GET_DEFAULT(rootTaskId_, "") };
    inline DescribeSyncAssetTaskListResponseBodyTaskRecords& setRootTaskId(string rootTaskId) { DARABONBA_PTR_SET_VALUE(rootTaskId_, rootTaskId) };


    // taskEndTime Field Functions 
    bool hasTaskEndTime() const { return this->taskEndTime_ != nullptr;};
    void deleteTaskEndTime() { this->taskEndTime_ = nullptr;};
    inline int64_t taskEndTime() const { DARABONBA_PTR_GET_DEFAULT(taskEndTime_, 0L) };
    inline DescribeSyncAssetTaskListResponseBodyTaskRecords& setTaskEndTime(int64_t taskEndTime) { DARABONBA_PTR_SET_VALUE(taskEndTime_, taskEndTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeSyncAssetTaskListResponseBodyTaskRecords& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStartTime Field Functions 
    bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
    void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
    inline int64_t taskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, 0L) };
    inline DescribeSyncAssetTaskListResponseBodyTaskRecords& setTaskStartTime(int64_t taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeSyncAssetTaskListResponseBodyTaskRecords& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeSyncAssetTaskListResponseBodyTaskRecords& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The number of assets that are detected by the task.
    std::shared_ptr<int32_t> assetCount_ = nullptr;
    // The CIDR blocks that are used for scanning. Multiple CIDR blocks are separated by commas (,).
    std::shared_ptr<string> ipSegments_ = nullptr;
    // The progress of the task, in percentage.
    std::shared_ptr<int32_t> processRate_ = nullptr;
    // The ID of the root task.
    std::shared_ptr<string> rootTaskId_ = nullptr;
    // The timestamp when the task ended.
    std::shared_ptr<int64_t> taskEndTime_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The timestamp when the task started. Unit: milliseconds.
    std::shared_ptr<int64_t> taskStartTime_ = nullptr;
    // The status of the IDC scan task. Valid Values:
    // 
    // *   **INIT**: The task is not started.
    // *   **START**: The task is started.
    // *   **MESSAGE_SEND**: The command is sent.
    // *   **SUCCESS**: The task is complete.
    // *   **FAIL**: The task failed.
    // *   **TIMEOUT**: The task timed out.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The type of the task. The value is fixed as **IDC_PROBE_SCAN**, which indicates an IDC scan task.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
