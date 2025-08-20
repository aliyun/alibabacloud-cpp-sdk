// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYTASKSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYTASKSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeHistoryTasksResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryTasksResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(ActionInfo, actionInfo_);
      DARABONBA_PTR_TO_JSON(CallerSource, callerSource_);
      DARABONBA_PTR_TO_JSON(CallerUid, callerUid_);
      DARABONBA_PTR_TO_JSON(CurrentStepName, currentStepName_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskDetail, taskDetail_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryTasksResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionInfo, actionInfo_);
      DARABONBA_PTR_FROM_JSON(CallerSource, callerSource_);
      DARABONBA_PTR_FROM_JSON(CallerUid, callerUid_);
      DARABONBA_PTR_FROM_JSON(CurrentStepName, currentStepName_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskDetail, taskDetail_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    DescribeHistoryTasksResponseBodyItems() = default ;
    DescribeHistoryTasksResponseBodyItems(const DescribeHistoryTasksResponseBodyItems &) = default ;
    DescribeHistoryTasksResponseBodyItems(DescribeHistoryTasksResponseBodyItems &&) = default ;
    DescribeHistoryTasksResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryTasksResponseBodyItems() = default ;
    DescribeHistoryTasksResponseBodyItems& operator=(const DescribeHistoryTasksResponseBodyItems &) = default ;
    DescribeHistoryTasksResponseBodyItems& operator=(DescribeHistoryTasksResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionInfo_ != nullptr
        && this->callerSource_ != nullptr && this->callerUid_ != nullptr && this->currentStepName_ != nullptr && this->dbType_ != nullptr && this->endTime_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->instanceType_ != nullptr && this->product_ != nullptr && this->progress_ != nullptr
        && this->reasonCode_ != nullptr && this->regionId_ != nullptr && this->remainTime_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr
        && this->taskDetail_ != nullptr && this->taskId_ != nullptr && this->taskType_ != nullptr && this->uid_ != nullptr; };
    // actionInfo Field Functions 
    bool hasActionInfo() const { return this->actionInfo_ != nullptr;};
    void deleteActionInfo() { this->actionInfo_ = nullptr;};
    inline string actionInfo() const { DARABONBA_PTR_GET_DEFAULT(actionInfo_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setActionInfo(string actionInfo) { DARABONBA_PTR_SET_VALUE(actionInfo_, actionInfo) };


    // callerSource Field Functions 
    bool hasCallerSource() const { return this->callerSource_ != nullptr;};
    void deleteCallerSource() { this->callerSource_ = nullptr;};
    inline string callerSource() const { DARABONBA_PTR_GET_DEFAULT(callerSource_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setCallerSource(string callerSource) { DARABONBA_PTR_SET_VALUE(callerSource_, callerSource) };


    // callerUid Field Functions 
    bool hasCallerUid() const { return this->callerUid_ != nullptr;};
    void deleteCallerUid() { this->callerUid_ = nullptr;};
    inline string callerUid() const { DARABONBA_PTR_GET_DEFAULT(callerUid_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setCallerUid(string callerUid) { DARABONBA_PTR_SET_VALUE(callerUid_, callerUid) };


    // currentStepName Field Functions 
    bool hasCurrentStepName() const { return this->currentStepName_ != nullptr;};
    void deleteCurrentStepName() { this->currentStepName_ = nullptr;};
    inline string currentStepName() const { DARABONBA_PTR_GET_DEFAULT(currentStepName_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setCurrentStepName(string currentStepName) { DARABONBA_PTR_SET_VALUE(currentStepName_, currentStepName) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline float progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
    inline DescribeHistoryTasksResponseBodyItems& setProgress(float progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remainTime Field Functions 
    bool hasRemainTime() const { return this->remainTime_ != nullptr;};
    void deleteRemainTime() { this->remainTime_ = nullptr;};
    inline int32_t remainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, 0) };
    inline DescribeHistoryTasksResponseBodyItems& setRemainTime(int32_t remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskDetail Field Functions 
    bool hasTaskDetail() const { return this->taskDetail_ != nullptr;};
    void deleteTaskDetail() { this->taskDetail_ = nullptr;};
    inline string taskDetail() const { DARABONBA_PTR_GET_DEFAULT(taskDetail_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setTaskDetail(string taskDetail) { DARABONBA_PTR_SET_VALUE(taskDetail_, taskDetail) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline DescribeHistoryTasksResponseBodyItems& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<string> actionInfo_ = nullptr;
    std::shared_ptr<string> callerSource_ = nullptr;
    std::shared_ptr<string> callerUid_ = nullptr;
    std::shared_ptr<string> currentStepName_ = nullptr;
    std::shared_ptr<string> dbType_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<float> progress_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int32_t> remainTime_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskDetail_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
