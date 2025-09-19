// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIRUSSCANCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVIRUSSCANCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetVirusScanConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVirusScanConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionType, additionType_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(ScanPath, scanPath_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_TO_JSON(TargetEndTime, targetEndTime_);
      DARABONBA_PTR_TO_JSON(TargetStartTime, targetStartTime_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetVirusScanConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionType, additionType_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(IntervalPeriod, intervalPeriod_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(ScanPath, scanPath_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
      DARABONBA_PTR_FROM_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_FROM_JSON(TargetEndTime, targetEndTime_);
      DARABONBA_PTR_FROM_JSON(TargetStartTime, targetStartTime_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetVirusScanConfigResponseBodyData() = default ;
    GetVirusScanConfigResponseBodyData(const GetVirusScanConfigResponseBodyData &) = default ;
    GetVirusScanConfigResponseBodyData(GetVirusScanConfigResponseBodyData &&) = default ;
    GetVirusScanConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVirusScanConfigResponseBodyData() = default ;
    GetVirusScanConfigResponseBodyData& operator=(const GetVirusScanConfigResponseBodyData &) = default ;
    GetVirusScanConfigResponseBodyData& operator=(GetVirusScanConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionType_ != nullptr
        && this->configId_ != nullptr && this->enable_ != nullptr && this->intervalPeriod_ != nullptr && this->periodUnit_ != nullptr && this->scanPath_ != nullptr
        && this->scanType_ != nullptr && this->selectionKey_ != nullptr && this->targetEndTime_ != nullptr && this->targetStartTime_ != nullptr && this->taskType_ != nullptr; };
    // additionType Field Functions 
    bool hasAdditionType() const { return this->additionType_ != nullptr;};
    void deleteAdditionType() { this->additionType_ = nullptr;};
    inline const vector<string> & additionType() const { DARABONBA_PTR_GET_CONST(additionType_, vector<string>) };
    inline vector<string> additionType() { DARABONBA_PTR_GET(additionType_, vector<string>) };
    inline GetVirusScanConfigResponseBodyData& setAdditionType(const vector<string> & additionType) { DARABONBA_PTR_SET_VALUE(additionType_, additionType) };
    inline GetVirusScanConfigResponseBodyData& setAdditionType(vector<string> && additionType) { DARABONBA_PTR_SET_RVALUE(additionType_, additionType) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline GetVirusScanConfigResponseBodyData& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline GetVirusScanConfigResponseBodyData& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // intervalPeriod Field Functions 
    bool hasIntervalPeriod() const { return this->intervalPeriod_ != nullptr;};
    void deleteIntervalPeriod() { this->intervalPeriod_ = nullptr;};
    inline int32_t intervalPeriod() const { DARABONBA_PTR_GET_DEFAULT(intervalPeriod_, 0) };
    inline GetVirusScanConfigResponseBodyData& setIntervalPeriod(int32_t intervalPeriod) { DARABONBA_PTR_SET_VALUE(intervalPeriod_, intervalPeriod) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline GetVirusScanConfigResponseBodyData& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // scanPath Field Functions 
    bool hasScanPath() const { return this->scanPath_ != nullptr;};
    void deleteScanPath() { this->scanPath_ = nullptr;};
    inline const vector<string> & scanPath() const { DARABONBA_PTR_GET_CONST(scanPath_, vector<string>) };
    inline vector<string> scanPath() { DARABONBA_PTR_GET(scanPath_, vector<string>) };
    inline GetVirusScanConfigResponseBodyData& setScanPath(const vector<string> & scanPath) { DARABONBA_PTR_SET_VALUE(scanPath_, scanPath) };
    inline GetVirusScanConfigResponseBodyData& setScanPath(vector<string> && scanPath) { DARABONBA_PTR_SET_RVALUE(scanPath_, scanPath) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string scanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline GetVirusScanConfigResponseBodyData& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // selectionKey Field Functions 
    bool hasSelectionKey() const { return this->selectionKey_ != nullptr;};
    void deleteSelectionKey() { this->selectionKey_ = nullptr;};
    inline string selectionKey() const { DARABONBA_PTR_GET_DEFAULT(selectionKey_, "") };
    inline GetVirusScanConfigResponseBodyData& setSelectionKey(string selectionKey) { DARABONBA_PTR_SET_VALUE(selectionKey_, selectionKey) };


    // targetEndTime Field Functions 
    bool hasTargetEndTime() const { return this->targetEndTime_ != nullptr;};
    void deleteTargetEndTime() { this->targetEndTime_ = nullptr;};
    inline int32_t targetEndTime() const { DARABONBA_PTR_GET_DEFAULT(targetEndTime_, 0) };
    inline GetVirusScanConfigResponseBodyData& setTargetEndTime(int32_t targetEndTime) { DARABONBA_PTR_SET_VALUE(targetEndTime_, targetEndTime) };


    // targetStartTime Field Functions 
    bool hasTargetStartTime() const { return this->targetStartTime_ != nullptr;};
    void deleteTargetStartTime() { this->targetStartTime_ = nullptr;};
    inline int32_t targetStartTime() const { DARABONBA_PTR_GET_DEFAULT(targetStartTime_, 0) };
    inline GetVirusScanConfigResponseBodyData& setTargetStartTime(int32_t targetStartTime) { DARABONBA_PTR_SET_VALUE(targetStartTime_, targetStartTime) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetVirusScanConfigResponseBodyData& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // Extended scan types.
    std::shared_ptr<vector<string>> additionType_ = nullptr;
    // The ID of the task configuration.
    // 
    // > You can call the [DescribeCycleTaskList](~~DescribeCycleTaskList~~) operation to query the IDs of task configurations.
    std::shared_ptr<string> configId_ = nullptr;
    // Indicates whether the periodic scan feature is enabled. Valid value:
    // 
    // *   **1**: The feature is enabled
    // *   **0**: The feature is disabled.
    std::shared_ptr<int32_t> enable_ = nullptr;
    // The interval at which virus scan tasks are run.
    std::shared_ptr<int32_t> intervalPeriod_ = nullptr;
    // The unit of the interval at which virus scan tasks are run.
    // 
    // *   The value is fixed as **day**.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The file paths.
    std::shared_ptr<vector<string>> scanPath_ = nullptr;
    // The type of the virus scan task. Valid values:
    // 
    // *   **system**: automatic scan.
    // *   **user**: custom scan.
    std::shared_ptr<string> scanType_ = nullptr;
    // The key that stores the asset information.
    // 
    // > You can call the [GetAssetSelectionConfig](~~GetAssetSelectionConfig~~) operation to obtain the key value.
    std::shared_ptr<string> selectionKey_ = nullptr;
    // The end time of the virus scan task. The time is a time frame.
    std::shared_ptr<int32_t> targetEndTime_ = nullptr;
    // The start time of the virus scan task. The time is a time frame.
    std::shared_ptr<int32_t> targetStartTime_ = nullptr;
    // The type of the task. Valid value:
    // 
    // *   **VIRUS_VUL_SCHEDULE_SCAN**: a virus scan task.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
