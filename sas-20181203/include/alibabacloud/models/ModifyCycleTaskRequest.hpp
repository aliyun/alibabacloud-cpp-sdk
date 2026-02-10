// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCYCLETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCYCLETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyCycleTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCycleTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FirstDateStr, firstDateStr_);
      DARABONBA_PTR_TO_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(TargetEndTime, targetEndTime_);
      DARABONBA_PTR_TO_JSON(TargetStartTime, targetStartTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCycleTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FirstDateStr, firstDateStr_);
      DARABONBA_PTR_FROM_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(TargetEndTime, targetEndTime_);
      DARABONBA_PTR_FROM_JSON(TargetStartTime, targetStartTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    ModifyCycleTaskRequest() = default ;
    ModifyCycleTaskRequest(const ModifyCycleTaskRequest &) = default ;
    ModifyCycleTaskRequest(ModifyCycleTaskRequest &&) = default ;
    ModifyCycleTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCycleTaskRequest() = default ;
    ModifyCycleTaskRequest& operator=(const ModifyCycleTaskRequest &) = default ;
    ModifyCycleTaskRequest& operator=(ModifyCycleTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->enable_ == nullptr && this->firstDateStr_ == nullptr && this->intervalPeriod_ == nullptr && this->param_ == nullptr && this->periodUnit_ == nullptr
        && this->targetEndTime_ == nullptr && this->targetStartTime_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ModifyCycleTaskRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline ModifyCycleTaskRequest& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // firstDateStr Field Functions 
    bool hasFirstDateStr() const { return this->firstDateStr_ != nullptr;};
    void deleteFirstDateStr() { this->firstDateStr_ = nullptr;};
    inline int64_t getFirstDateStr() const { DARABONBA_PTR_GET_DEFAULT(firstDateStr_, 0L) };
    inline ModifyCycleTaskRequest& setFirstDateStr(int64_t firstDateStr) { DARABONBA_PTR_SET_VALUE(firstDateStr_, firstDateStr) };


    // intervalPeriod Field Functions 
    bool hasIntervalPeriod() const { return this->intervalPeriod_ != nullptr;};
    void deleteIntervalPeriod() { this->intervalPeriod_ = nullptr;};
    inline int32_t getIntervalPeriod() const { DARABONBA_PTR_GET_DEFAULT(intervalPeriod_, 0) };
    inline ModifyCycleTaskRequest& setIntervalPeriod(int32_t intervalPeriod) { DARABONBA_PTR_SET_VALUE(intervalPeriod_, intervalPeriod) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline ModifyCycleTaskRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline ModifyCycleTaskRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // targetEndTime Field Functions 
    bool hasTargetEndTime() const { return this->targetEndTime_ != nullptr;};
    void deleteTargetEndTime() { this->targetEndTime_ = nullptr;};
    inline int32_t getTargetEndTime() const { DARABONBA_PTR_GET_DEFAULT(targetEndTime_, 0) };
    inline ModifyCycleTaskRequest& setTargetEndTime(int32_t targetEndTime) { DARABONBA_PTR_SET_VALUE(targetEndTime_, targetEndTime) };


    // targetStartTime Field Functions 
    bool hasTargetStartTime() const { return this->targetStartTime_ != nullptr;};
    void deleteTargetStartTime() { this->targetStartTime_ = nullptr;};
    inline int32_t getTargetStartTime() const { DARABONBA_PTR_GET_DEFAULT(targetStartTime_, 0) };
    inline ModifyCycleTaskRequest& setTargetStartTime(int32_t targetStartTime) { DARABONBA_PTR_SET_VALUE(targetStartTime_, targetStartTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ModifyCycleTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ModifyCycleTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The ID of the task configuration.
    // 
    // >  You can call the [DescribeCycleTaskList](~~DescribeCycleTaskList~~) operation to query the IDs of task configurations.
    // 
    // This parameter is required.
    shared_ptr<string> configId_ {};
    // Specifies whether to enable the task. Valid values:
    // 
    // *   **1**: enables the task.
    // *   **0**: disables the task.
    shared_ptr<int32_t> enable_ {};
    // The time when the task first started.
    shared_ptr<int64_t> firstDateStr_ {};
    // The interval at which the task is run.
    shared_ptr<int32_t> intervalPeriod_ {};
    // The additional information.
    shared_ptr<string> param_ {};
    // The unit of the scan interval. Valid values:
    // 
    // *   **day**
    // *   **hour**
    shared_ptr<string> periodUnit_ {};
    // The end time of the task. The time must be a time frame.
    shared_ptr<int32_t> targetEndTime_ {};
    // The start time of the task. The start time must be a time frame.
    shared_ptr<int32_t> targetStartTime_ {};
    // The name of the task. Valid values:
    // 
    // *   **VIRUS_VUL_SCHEDULE_SCAN**: virus detection task
    // *   **IMAGE_SCAN**: image scan task
    // *   **EMG_VUL_SCHEDULE_SCAN**: urgent vulnerability scan task
    // 
    // Valid values:
    // 
    // *   VIRUS_VUL_SCHEDULE_SCAN
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     virus detection task
    // 
    //     <!-- -->
    // 
    // *   IMAGE_SCAN
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     image scan task
    // 
    //     <!-- -->
    // 
    // *   EMG_VUL_SCHEDULE_SCAN
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     urgent vulnerability scan task
    // 
    //     <!-- -->
    shared_ptr<string> taskName_ {};
    // The type of the task. Valid values:
    // 
    // *   **VIRUS_VUL_SCHEDULE_SCAN**: virus detection task
    // *   **IMAGE_SCAN**: image scan task
    // *   **EMG_VUL_SCHEDULE_SCAN**: urgent vulnerability scan task
    // 
    // Valid values:
    // 
    // *   VIRUS_VUL_SCHEDULE_SCAN
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     virus detection task
    // 
    //     <!-- -->
    // 
    // *   IMAGE_SCAN
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     image scan task
    // 
    //     <!-- -->
    // 
    // *   EMG_VUL_SCHEDULE_SCAN
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     urgent vulnerability scan task
    // 
    //     <!-- -->
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
