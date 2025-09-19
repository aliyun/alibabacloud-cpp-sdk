// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECYCLETASKLISTRESPONSEBODYCYCLESCHEDULERESPONSELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECYCLETASKLISTRESPONSEBODYCYCLESCHEDULERESPONSELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCycleTaskListResponseBodyCycleScheduleResponseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCycleTaskListResponseBodyCycleScheduleResponseList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FirstDateStr, firstDateStr_);
      DARABONBA_PTR_TO_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_TO_JSON(LastTaskId, lastTaskId_);
      DARABONBA_PTR_TO_JSON(NextStartTimeStr, nextStartTimeStr_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(TargetEndTime, targetEndTime_);
      DARABONBA_PTR_TO_JSON(TargetStartTime, targetStartTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCycleTaskListResponseBodyCycleScheduleResponseList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FirstDateStr, firstDateStr_);
      DARABONBA_PTR_FROM_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_FROM_JSON(LastTaskId, lastTaskId_);
      DARABONBA_PTR_FROM_JSON(NextStartTimeStr, nextStartTimeStr_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(TargetEndTime, targetEndTime_);
      DARABONBA_PTR_FROM_JSON(TargetStartTime, targetStartTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeCycleTaskListResponseBodyCycleScheduleResponseList() = default ;
    DescribeCycleTaskListResponseBodyCycleScheduleResponseList(const DescribeCycleTaskListResponseBodyCycleScheduleResponseList &) = default ;
    DescribeCycleTaskListResponseBodyCycleScheduleResponseList(DescribeCycleTaskListResponseBodyCycleScheduleResponseList &&) = default ;
    DescribeCycleTaskListResponseBodyCycleScheduleResponseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCycleTaskListResponseBodyCycleScheduleResponseList() = default ;
    DescribeCycleTaskListResponseBodyCycleScheduleResponseList& operator=(const DescribeCycleTaskListResponseBodyCycleScheduleResponseList &) = default ;
    DescribeCycleTaskListResponseBodyCycleScheduleResponseList& operator=(DescribeCycleTaskListResponseBodyCycleScheduleResponseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->enable_ != nullptr && this->firstDateStr_ != nullptr && this->intervalPeriod_ != nullptr && this->lastTaskId_ != nullptr && this->nextStartTimeStr_ != nullptr
        && this->param_ != nullptr && this->periodUnit_ != nullptr && this->targetEndTime_ != nullptr && this->targetStartTime_ != nullptr && this->taskName_ != nullptr
        && this->taskType_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DescribeCycleTaskListResponseBodyCycleScheduleResponseList& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline DescribeCycleTaskListResponseBodyCycleScheduleResponseList& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // firstDateStr Field Functions 
    bool hasFirstDateStr() const { return this->firstDateStr_ != nullptr;};
    void deleteFirstDateStr() { this->firstDateStr_ = nullptr;};
    inline int64_t firstDateStr() const { DARABONBA_PTR_GET_DEFAULT(firstDateStr_, 0L) };
    inline DescribeCycleTaskListResponseBodyCycleScheduleResponseList& setFirstDateStr(int64_t firstDateStr) { DARABONBA_PTR_SET_VALUE(firstDateStr_, firstDateStr) };


    // intervalPeriod Field Functions 
    bool hasIntervalPeriod() const { return this->intervalPeriod_ != nullptr;};
    void deleteIntervalPeriod() { this->intervalPeriod_ = nullptr;};
    inline int32_t intervalPeriod() const { DARABONBA_PTR_GET_DEFAULT(intervalPeriod_, 0) };
    inline DescribeCycleTaskListResponseBodyCycleScheduleResponseList& setIntervalPeriod(int32_t intervalPeriod) { DARABONBA_PTR_SET_VALUE(intervalPeriod_, intervalPeriod) };


    // lastTaskId Field Functions 
    bool hasLastTaskId() const { return this->lastTaskId_ != nullptr;};
    void deleteLastTaskId() { this->lastTaskId_ = nullptr;};
    inline string lastTaskId() const { DARABONBA_PTR_GET_DEFAULT(lastTaskId_, "") };
    inline DescribeCycleTaskListResponseBodyCycleScheduleResponseList& setLastTaskId(string lastTaskId) { DARABONBA_PTR_SET_VALUE(lastTaskId_, lastTaskId) };


    // nextStartTimeStr Field Functions 
    bool hasNextStartTimeStr() const { return this->nextStartTimeStr_ != nullptr;};
    void deleteNextStartTimeStr() { this->nextStartTimeStr_ = nullptr;};
    inline int64_t nextStartTimeStr() const { DARABONBA_PTR_GET_DEFAULT(nextStartTimeStr_, 0L) };
    inline DescribeCycleTaskListResponseBodyCycleScheduleResponseList& setNextStartTimeStr(int64_t nextStartTimeStr) { DARABONBA_PTR_SET_VALUE(nextStartTimeStr_, nextStartTimeStr) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string param() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline DescribeCycleTaskListResponseBodyCycleScheduleResponseList& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeCycleTaskListResponseBodyCycleScheduleResponseList& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // targetEndTime Field Functions 
    bool hasTargetEndTime() const { return this->targetEndTime_ != nullptr;};
    void deleteTargetEndTime() { this->targetEndTime_ = nullptr;};
    inline int32_t targetEndTime() const { DARABONBA_PTR_GET_DEFAULT(targetEndTime_, 0) };
    inline DescribeCycleTaskListResponseBodyCycleScheduleResponseList& setTargetEndTime(int32_t targetEndTime) { DARABONBA_PTR_SET_VALUE(targetEndTime_, targetEndTime) };


    // targetStartTime Field Functions 
    bool hasTargetStartTime() const { return this->targetStartTime_ != nullptr;};
    void deleteTargetStartTime() { this->targetStartTime_ = nullptr;};
    inline int32_t targetStartTime() const { DARABONBA_PTR_GET_DEFAULT(targetStartTime_, 0) };
    inline DescribeCycleTaskListResponseBodyCycleScheduleResponseList& setTargetStartTime(int32_t targetStartTime) { DARABONBA_PTR_SET_VALUE(targetStartTime_, targetStartTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeCycleTaskListResponseBodyCycleScheduleResponseList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeCycleTaskListResponseBodyCycleScheduleResponseList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The configuration ID.
    std::shared_ptr<string> configId_ = nullptr;
    // Indicates whether the configuration for the task interval was enabled. Valid values:
    // 
    // *   **1**: enabled.
    // *   **0**: disabled.
    std::shared_ptr<int32_t> enable_ = nullptr;
    // The time when the task first started.
    std::shared_ptr<int64_t> firstDateStr_ = nullptr;
    // The interval between which two consecutive tasks are run.
    std::shared_ptr<int32_t> intervalPeriod_ = nullptr;
    // The ID of the last task.
    std::shared_ptr<string> lastTaskId_ = nullptr;
    // The time when the next task starts. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> nextStartTimeStr_ = nullptr;
    // The extended information.
    std::shared_ptr<string> param_ = nullptr;
    // The unit of the scan interval. Valid values:
    // 
    // *   **day**
    // *   **hour**
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The end time of the task. The time must be a time frame.
    std::shared_ptr<int32_t> targetEndTime_ = nullptr;
    // The start time of the task. The start time must be a time frame.
    std::shared_ptr<int32_t> targetStartTime_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of the task.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
