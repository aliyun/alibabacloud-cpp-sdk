// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSRESPONSEBODYPROCESSES_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSRESPONSEBODYPROCESSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationProcessResponseBodyProcesses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationProcessResponseBodyProcesses& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DetailTaskReadyCount, detailTaskReadyCount_);
      DARABONBA_PTR_TO_JSON(DetailTaskTotalCount, detailTaskTotalCount_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskSource, taskSource_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationProcessResponseBodyProcesses& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DetailTaskReadyCount, detailTaskReadyCount_);
      DARABONBA_PTR_FROM_JSON(DetailTaskTotalCount, detailTaskTotalCount_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskSource, taskSource_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOperationProcessResponseBodyProcesses() = default ;
    ListOperationProcessResponseBodyProcesses(const ListOperationProcessResponseBodyProcesses &) = default ;
    ListOperationProcessResponseBodyProcesses(ListOperationProcessResponseBodyProcesses &&) = default ;
    ListOperationProcessResponseBodyProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationProcessResponseBodyProcesses() = default ;
    ListOperationProcessResponseBodyProcesses& operator=(const ListOperationProcessResponseBodyProcesses &) = default ;
    ListOperationProcessResponseBodyProcesses& operator=(ListOperationProcessResponseBodyProcesses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->detailTaskReadyCount_ == nullptr && return this->detailTaskTotalCount_ == nullptr && return this->endTime_ == nullptr && return this->finishCount_ == nullptr && return this->startTime_ == nullptr
        && return this->statusCode_ == nullptr && return this->taskId_ == nullptr && return this->taskSource_ == nullptr && return this->taskType_ == nullptr && return this->totalCount_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListOperationProcessResponseBodyProcesses& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // detailTaskReadyCount Field Functions 
    bool hasDetailTaskReadyCount() const { return this->detailTaskReadyCount_ != nullptr;};
    void deleteDetailTaskReadyCount() { this->detailTaskReadyCount_ = nullptr;};
    inline int32_t detailTaskReadyCount() const { DARABONBA_PTR_GET_DEFAULT(detailTaskReadyCount_, 0) };
    inline ListOperationProcessResponseBodyProcesses& setDetailTaskReadyCount(int32_t detailTaskReadyCount) { DARABONBA_PTR_SET_VALUE(detailTaskReadyCount_, detailTaskReadyCount) };


    // detailTaskTotalCount Field Functions 
    bool hasDetailTaskTotalCount() const { return this->detailTaskTotalCount_ != nullptr;};
    void deleteDetailTaskTotalCount() { this->detailTaskTotalCount_ = nullptr;};
    inline int32_t detailTaskTotalCount() const { DARABONBA_PTR_GET_DEFAULT(detailTaskTotalCount_, 0) };
    inline ListOperationProcessResponseBodyProcesses& setDetailTaskTotalCount(int32_t detailTaskTotalCount) { DARABONBA_PTR_SET_VALUE(detailTaskTotalCount_, detailTaskTotalCount) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListOperationProcessResponseBodyProcesses& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // finishCount Field Functions 
    bool hasFinishCount() const { return this->finishCount_ != nullptr;};
    void deleteFinishCount() { this->finishCount_ = nullptr;};
    inline int32_t finishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0) };
    inline ListOperationProcessResponseBodyProcesses& setFinishCount(int32_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListOperationProcessResponseBodyProcesses& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListOperationProcessResponseBodyProcesses& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListOperationProcessResponseBodyProcesses& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskSource Field Functions 
    bool hasTaskSource() const { return this->taskSource_ != nullptr;};
    void deleteTaskSource() { this->taskSource_ = nullptr;};
    inline string taskSource() const { DARABONBA_PTR_GET_DEFAULT(taskSource_, "") };
    inline ListOperationProcessResponseBodyProcesses& setTaskSource(string taskSource) { DARABONBA_PTR_SET_VALUE(taskSource_, taskSource) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListOperationProcessResponseBodyProcesses& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOperationProcessResponseBodyProcesses& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The time when the task was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Number of completed subtasks
    std::shared_ptr<int32_t> detailTaskReadyCount_ = nullptr;
    // Total number of subtasks.
    std::shared_ptr<int32_t> detailTaskTotalCount_ = nullptr;
    // The end time of the task. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The number of tasks that are complete.
    std::shared_ptr<int32_t> finishCount_ = nullptr;
    // The start time of the task. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The task status code. Valid values:
    // 
    // *   0: not started.
    // *   1: running.
    // *   2: complete.
    // *   3: times out.
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    // The ID of the operation task.
    std::shared_ptr<string> taskId_ = nullptr;
    // Task source. Values: 
    // - **YAO_CHI**: YaoChi.
    std::shared_ptr<string> taskSource_ = nullptr;
    // The task type. Valid values:
    // 
    // *   CHECK_ALL: full check.
    // *   CHECK_POLICY: policy-based check for which check items are configured.
    // *   CHECK_SCHEDULE: scheduled check.
    // *   CHECK_ITEM: specific check item-based check.
    // *   CHECK_INSTANCE: specific check item-based check on specific instances.
    std::shared_ptr<string> taskType_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
