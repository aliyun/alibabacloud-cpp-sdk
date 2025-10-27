// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECYCLETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECYCLETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateCycleTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCycleTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FirstDateStr, firstDateStr_);
      DARABONBA_PTR_TO_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TargetEndTime, targetEndTime_);
      DARABONBA_PTR_TO_JSON(TargetStartTime, targetStartTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCycleTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FirstDateStr, firstDateStr_);
      DARABONBA_PTR_FROM_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TargetEndTime, targetEndTime_);
      DARABONBA_PTR_FROM_JSON(TargetStartTime, targetStartTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreateCycleTaskRequest() = default ;
    CreateCycleTaskRequest(const CreateCycleTaskRequest &) = default ;
    CreateCycleTaskRequest(CreateCycleTaskRequest &&) = default ;
    CreateCycleTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCycleTaskRequest() = default ;
    CreateCycleTaskRequest& operator=(const CreateCycleTaskRequest &) = default ;
    CreateCycleTaskRequest& operator=(CreateCycleTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->firstDateStr_ == nullptr && return this->intervalPeriod_ == nullptr && return this->param_ == nullptr && return this->periodUnit_ == nullptr && return this->source_ == nullptr
        && return this->targetEndTime_ == nullptr && return this->targetStartTime_ == nullptr && return this->taskName_ == nullptr && return this->taskType_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline CreateCycleTaskRequest& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // firstDateStr Field Functions 
    bool hasFirstDateStr() const { return this->firstDateStr_ != nullptr;};
    void deleteFirstDateStr() { this->firstDateStr_ = nullptr;};
    inline int64_t firstDateStr() const { DARABONBA_PTR_GET_DEFAULT(firstDateStr_, 0L) };
    inline CreateCycleTaskRequest& setFirstDateStr(int64_t firstDateStr) { DARABONBA_PTR_SET_VALUE(firstDateStr_, firstDateStr) };


    // intervalPeriod Field Functions 
    bool hasIntervalPeriod() const { return this->intervalPeriod_ != nullptr;};
    void deleteIntervalPeriod() { this->intervalPeriod_ = nullptr;};
    inline int32_t intervalPeriod() const { DARABONBA_PTR_GET_DEFAULT(intervalPeriod_, 0) };
    inline CreateCycleTaskRequest& setIntervalPeriod(int32_t intervalPeriod) { DARABONBA_PTR_SET_VALUE(intervalPeriod_, intervalPeriod) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string param() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline CreateCycleTaskRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateCycleTaskRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateCycleTaskRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // targetEndTime Field Functions 
    bool hasTargetEndTime() const { return this->targetEndTime_ != nullptr;};
    void deleteTargetEndTime() { this->targetEndTime_ = nullptr;};
    inline int32_t targetEndTime() const { DARABONBA_PTR_GET_DEFAULT(targetEndTime_, 0) };
    inline CreateCycleTaskRequest& setTargetEndTime(int32_t targetEndTime) { DARABONBA_PTR_SET_VALUE(targetEndTime_, targetEndTime) };


    // targetStartTime Field Functions 
    bool hasTargetStartTime() const { return this->targetStartTime_ != nullptr;};
    void deleteTargetStartTime() { this->targetStartTime_ = nullptr;};
    inline int32_t targetStartTime() const { DARABONBA_PTR_GET_DEFAULT(targetStartTime_, 0) };
    inline CreateCycleTaskRequest& setTargetStartTime(int32_t targetStartTime) { DARABONBA_PTR_SET_VALUE(targetStartTime_, targetStartTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateCycleTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateCycleTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // Specifies whether to enable the task. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> enable_ = nullptr;
    // The first time when the task is performed.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> firstDateStr_ = nullptr;
    // The interval of the task.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> intervalPeriod_ = nullptr;
    // The additional information.
    std::shared_ptr<string> param_ = nullptr;
    // The unit of the scan interval. Valid values:
    // 
    // *   **day**: days
    // *   **hour**: hours
    // 
    // This parameter is required.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The additional source for the task.
    std::shared_ptr<string> source_ = nullptr;
    // The time when the task ends. Unit: hours.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> targetEndTime_ = nullptr;
    // The time when the task is started. Unit: hours.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> targetStartTime_ = nullptr;
    // The name of the task. Valid values:
    // 
    // *   **VIRUS_VUL_SCHEDULE_SCAN**: virus scan task
    // *   **IMAGE_SCAN**: image scan task
    // *   **EMG_VUL_SCHEDULE_SCAN**: urgent vulnerability scan task
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of the task. Valid values:
    // 
    // *   **VIRUS_VUL_SCHEDULE_SCAN**: virus scan task
    // *   **IMAGE_SCAN**: image scan task
    // *   **EMG_VUL_SCHEDULE_SCAN**: urgent vulnerability scan task
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
