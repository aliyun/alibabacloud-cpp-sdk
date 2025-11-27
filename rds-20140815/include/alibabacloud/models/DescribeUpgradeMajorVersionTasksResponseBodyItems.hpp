// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPGRADEMAJORVERSIONTASKSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPGRADEMAJORVERSIONTASKSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeUpgradeMajorVersionTasksResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpgradeMajorVersionTasksResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CollectStatMode, collectStatMode_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SourceInsName, sourceInsName_);
      DARABONBA_PTR_TO_JSON(SourceMajorVersion, sourceMajorVersion_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SwitchEndTime, switchEndTime_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(TargetInsName, targetInsName_);
      DARABONBA_PTR_TO_JSON(TargetMajorVersion, targetMajorVersion_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UpgradeMode, upgradeMode_);
      DARABONBA_PTR_TO_JSON(cutOver, cutOver_);
      DARABONBA_PTR_TO_JSON(totalLogicRepDelayTime, totalLogicRepDelayTime_);
      DARABONBA_PTR_TO_JSON(totalLogicRepLatencyMB, totalLogicRepLatencyMB_);
      DARABONBA_PTR_TO_JSON(zeroDownTimeConnectionString, zeroDownTimeConnectionString_);
      DARABONBA_PTR_TO_JSON(zeroDownTimePort, zeroDownTimePort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpgradeMajorVersionTasksResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectStatMode, collectStatMode_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SourceInsName, sourceInsName_);
      DARABONBA_PTR_FROM_JSON(SourceMajorVersion, sourceMajorVersion_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SwitchEndTime, switchEndTime_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(TargetInsName, targetInsName_);
      DARABONBA_PTR_FROM_JSON(TargetMajorVersion, targetMajorVersion_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UpgradeMode, upgradeMode_);
      DARABONBA_PTR_FROM_JSON(cutOver, cutOver_);
      DARABONBA_PTR_FROM_JSON(totalLogicRepDelayTime, totalLogicRepDelayTime_);
      DARABONBA_PTR_FROM_JSON(totalLogicRepLatencyMB, totalLogicRepLatencyMB_);
      DARABONBA_PTR_FROM_JSON(zeroDownTimeConnectionString, zeroDownTimeConnectionString_);
      DARABONBA_PTR_FROM_JSON(zeroDownTimePort, zeroDownTimePort_);
    };
    DescribeUpgradeMajorVersionTasksResponseBodyItems() = default ;
    DescribeUpgradeMajorVersionTasksResponseBodyItems(const DescribeUpgradeMajorVersionTasksResponseBodyItems &) = default ;
    DescribeUpgradeMajorVersionTasksResponseBodyItems(DescribeUpgradeMajorVersionTasksResponseBodyItems &&) = default ;
    DescribeUpgradeMajorVersionTasksResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpgradeMajorVersionTasksResponseBodyItems() = default ;
    DescribeUpgradeMajorVersionTasksResponseBodyItems& operator=(const DescribeUpgradeMajorVersionTasksResponseBodyItems &) = default ;
    DescribeUpgradeMajorVersionTasksResponseBodyItems& operator=(DescribeUpgradeMajorVersionTasksResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collectStatMode_ == nullptr
        && return this->detail_ == nullptr && return this->endTime_ == nullptr && return this->result_ == nullptr && return this->sourceInsName_ == nullptr && return this->sourceMajorVersion_ == nullptr
        && return this->startTime_ == nullptr && return this->switchEndTime_ == nullptr && return this->switchTime_ == nullptr && return this->targetInsName_ == nullptr && return this->targetMajorVersion_ == nullptr
        && return this->taskId_ == nullptr && return this->upgradeMode_ == nullptr && return this->cutOver_ == nullptr && return this->totalLogicRepDelayTime_ == nullptr && return this->totalLogicRepLatencyMB_ == nullptr
        && return this->zeroDownTimeConnectionString_ == nullptr && return this->zeroDownTimePort_ == nullptr; };
    // collectStatMode Field Functions 
    bool hasCollectStatMode() const { return this->collectStatMode_ != nullptr;};
    void deleteCollectStatMode() { this->collectStatMode_ = nullptr;};
    inline string collectStatMode() const { DARABONBA_PTR_GET_DEFAULT(collectStatMode_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setCollectStatMode(string collectStatMode) { DARABONBA_PTR_SET_VALUE(collectStatMode_, collectStatMode) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // sourceInsName Field Functions 
    bool hasSourceInsName() const { return this->sourceInsName_ != nullptr;};
    void deleteSourceInsName() { this->sourceInsName_ = nullptr;};
    inline string sourceInsName() const { DARABONBA_PTR_GET_DEFAULT(sourceInsName_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setSourceInsName(string sourceInsName) { DARABONBA_PTR_SET_VALUE(sourceInsName_, sourceInsName) };


    // sourceMajorVersion Field Functions 
    bool hasSourceMajorVersion() const { return this->sourceMajorVersion_ != nullptr;};
    void deleteSourceMajorVersion() { this->sourceMajorVersion_ = nullptr;};
    inline string sourceMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceMajorVersion_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setSourceMajorVersion(string sourceMajorVersion) { DARABONBA_PTR_SET_VALUE(sourceMajorVersion_, sourceMajorVersion) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // switchEndTime Field Functions 
    bool hasSwitchEndTime() const { return this->switchEndTime_ != nullptr;};
    void deleteSwitchEndTime() { this->switchEndTime_ = nullptr;};
    inline string switchEndTime() const { DARABONBA_PTR_GET_DEFAULT(switchEndTime_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setSwitchEndTime(string switchEndTime) { DARABONBA_PTR_SET_VALUE(switchEndTime_, switchEndTime) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string switchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // targetInsName Field Functions 
    bool hasTargetInsName() const { return this->targetInsName_ != nullptr;};
    void deleteTargetInsName() { this->targetInsName_ = nullptr;};
    inline string targetInsName() const { DARABONBA_PTR_GET_DEFAULT(targetInsName_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setTargetInsName(string targetInsName) { DARABONBA_PTR_SET_VALUE(targetInsName_, targetInsName) };


    // targetMajorVersion Field Functions 
    bool hasTargetMajorVersion() const { return this->targetMajorVersion_ != nullptr;};
    void deleteTargetMajorVersion() { this->targetMajorVersion_ = nullptr;};
    inline string targetMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMajorVersion_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setTargetMajorVersion(string targetMajorVersion) { DARABONBA_PTR_SET_VALUE(targetMajorVersion_, targetMajorVersion) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // upgradeMode Field Functions 
    bool hasUpgradeMode() const { return this->upgradeMode_ != nullptr;};
    void deleteUpgradeMode() { this->upgradeMode_ = nullptr;};
    inline string upgradeMode() const { DARABONBA_PTR_GET_DEFAULT(upgradeMode_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setUpgradeMode(string upgradeMode) { DARABONBA_PTR_SET_VALUE(upgradeMode_, upgradeMode) };


    // cutOver Field Functions 
    bool hasCutOver() const { return this->cutOver_ != nullptr;};
    void deleteCutOver() { this->cutOver_ = nullptr;};
    inline bool cutOver() const { DARABONBA_PTR_GET_DEFAULT(cutOver_, false) };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setCutOver(bool cutOver) { DARABONBA_PTR_SET_VALUE(cutOver_, cutOver) };


    // totalLogicRepDelayTime Field Functions 
    bool hasTotalLogicRepDelayTime() const { return this->totalLogicRepDelayTime_ != nullptr;};
    void deleteTotalLogicRepDelayTime() { this->totalLogicRepDelayTime_ = nullptr;};
    inline int32_t totalLogicRepDelayTime() const { DARABONBA_PTR_GET_DEFAULT(totalLogicRepDelayTime_, 0) };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setTotalLogicRepDelayTime(int32_t totalLogicRepDelayTime) { DARABONBA_PTR_SET_VALUE(totalLogicRepDelayTime_, totalLogicRepDelayTime) };


    // totalLogicRepLatencyMB Field Functions 
    bool hasTotalLogicRepLatencyMB() const { return this->totalLogicRepLatencyMB_ != nullptr;};
    void deleteTotalLogicRepLatencyMB() { this->totalLogicRepLatencyMB_ = nullptr;};
    inline int32_t totalLogicRepLatencyMB() const { DARABONBA_PTR_GET_DEFAULT(totalLogicRepLatencyMB_, 0) };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setTotalLogicRepLatencyMB(int32_t totalLogicRepLatencyMB) { DARABONBA_PTR_SET_VALUE(totalLogicRepLatencyMB_, totalLogicRepLatencyMB) };


    // zeroDownTimeConnectionString Field Functions 
    bool hasZeroDownTimeConnectionString() const { return this->zeroDownTimeConnectionString_ != nullptr;};
    void deleteZeroDownTimeConnectionString() { this->zeroDownTimeConnectionString_ = nullptr;};
    inline string zeroDownTimeConnectionString() const { DARABONBA_PTR_GET_DEFAULT(zeroDownTimeConnectionString_, "") };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setZeroDownTimeConnectionString(string zeroDownTimeConnectionString) { DARABONBA_PTR_SET_VALUE(zeroDownTimeConnectionString_, zeroDownTimeConnectionString) };


    // zeroDownTimePort Field Functions 
    bool hasZeroDownTimePort() const { return this->zeroDownTimePort_ != nullptr;};
    void deleteZeroDownTimePort() { this->zeroDownTimePort_ = nullptr;};
    inline int32_t zeroDownTimePort() const { DARABONBA_PTR_GET_DEFAULT(zeroDownTimePort_, 0) };
    inline DescribeUpgradeMajorVersionTasksResponseBodyItems& setZeroDownTimePort(int32_t zeroDownTimePort) { DARABONBA_PTR_SET_VALUE(zeroDownTimePort_, zeroDownTimePort) };


  protected:
    // The time when the system collects the statistics.
    // 
    // Valid values:
    // 
    // *   **After**: The system collects the statistics after a switchover.
    // *   **Before**: The system collects the statistics before a switchover.
    std::shared_ptr<string> collectStatMode_ = nullptr;
    // The details of the task.
    std::shared_ptr<string> detail_ = nullptr;
    // The end time of the task.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
    std::shared_ptr<string> endTime_ = nullptr;
    // The status of the task.
    // 
    // *   **Success**: The task is successful.
    // *   **Failed**: The task failed.
    // *   **Running**: The task is in the phase in which data is being migrated to a new instance.
    std::shared_ptr<string> result_ = nullptr;
    // The ID of the original instance.
    std::shared_ptr<string> sourceInsName_ = nullptr;
    // The major engine version of the original instance.
    std::shared_ptr<string> sourceMajorVersion_ = nullptr;
    // The start time of the task.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
    std::shared_ptr<string> startTime_ = nullptr;
    // The end time of the switching from the original instance to the new instance.
    // 
    // Expressed in Unix timestamp. Unit: milliseconds.
    std::shared_ptr<string> switchEndTime_ = nullptr;
    // The time at which your workloads are switched over from the original instance to the new instance.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
    std::shared_ptr<string> switchTime_ = nullptr;
    // The ID of the new instance.
    std::shared_ptr<string> targetInsName_ = nullptr;
    // The major engine version of the new instance. Valid values:
    // 
    // *   **10.0**
    // *   **11.0**
    // *   **12.0**
    // *   **13.0**
    // *   **14.0**
    // *   **15.0**
    std::shared_ptr<string> targetMajorVersion_ = nullptr;
    // The task ID.
    std::shared_ptr<int32_t> taskId_ = nullptr;
    // The upgrade mode.
    // 
    // Valid values:
    // 
    // *   **clone**: The system does not migrate data to the new instance and does not switch your workloads over to the new instance.
    // *   **switch**: The system migrates data to the new instance and switches your workloads over to the new instance.
    std::shared_ptr<string> upgradeMode_ = nullptr;
    std::shared_ptr<bool> cutOver_ = nullptr;
    std::shared_ptr<int32_t> totalLogicRepDelayTime_ = nullptr;
    std::shared_ptr<int32_t> totalLogicRepLatencyMB_ = nullptr;
    std::shared_ptr<string> zeroDownTimeConnectionString_ = nullptr;
    std::shared_ptr<int32_t> zeroDownTimePort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
