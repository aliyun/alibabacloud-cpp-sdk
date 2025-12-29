// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeHistoryTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHistoryTasksResponseBody() = default ;
    DescribeHistoryTasksResponseBody(const DescribeHistoryTasksResponseBody &) = default ;
    DescribeHistoryTasksResponseBody(DescribeHistoryTasksResponseBody &&) = default ;
    DescribeHistoryTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryTasksResponseBody() = default ;
    DescribeHistoryTasksResponseBody& operator=(const DescribeHistoryTasksResponseBody &) = default ;
    DescribeHistoryTasksResponseBody& operator=(DescribeHistoryTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionInfo_ == nullptr
        && this->callerSource_ == nullptr && this->callerUid_ == nullptr && this->currentStepName_ == nullptr && this->dbType_ == nullptr && this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->product_ == nullptr && this->progress_ == nullptr
        && this->reasonCode_ == nullptr && this->regionId_ == nullptr && this->remainTime_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->taskDetail_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr && this->uid_ == nullptr; };
      // actionInfo Field Functions 
      bool hasActionInfo() const { return this->actionInfo_ != nullptr;};
      void deleteActionInfo() { this->actionInfo_ = nullptr;};
      inline string getActionInfo() const { DARABONBA_PTR_GET_DEFAULT(actionInfo_, "") };
      inline Items& setActionInfo(string actionInfo) { DARABONBA_PTR_SET_VALUE(actionInfo_, actionInfo) };


      // callerSource Field Functions 
      bool hasCallerSource() const { return this->callerSource_ != nullptr;};
      void deleteCallerSource() { this->callerSource_ = nullptr;};
      inline string getCallerSource() const { DARABONBA_PTR_GET_DEFAULT(callerSource_, "") };
      inline Items& setCallerSource(string callerSource) { DARABONBA_PTR_SET_VALUE(callerSource_, callerSource) };


      // callerUid Field Functions 
      bool hasCallerUid() const { return this->callerUid_ != nullptr;};
      void deleteCallerUid() { this->callerUid_ = nullptr;};
      inline string getCallerUid() const { DARABONBA_PTR_GET_DEFAULT(callerUid_, "") };
      inline Items& setCallerUid(string callerUid) { DARABONBA_PTR_SET_VALUE(callerUid_, callerUid) };


      // currentStepName Field Functions 
      bool hasCurrentStepName() const { return this->currentStepName_ != nullptr;};
      void deleteCurrentStepName() { this->currentStepName_ = nullptr;};
      inline string getCurrentStepName() const { DARABONBA_PTR_GET_DEFAULT(currentStepName_, "") };
      inline Items& setCurrentStepName(string currentStepName) { DARABONBA_PTR_SET_VALUE(currentStepName_, currentStepName) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline Items& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Items& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Items& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Items& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline Items& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline float getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
      inline Items& setProgress(float progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // reasonCode Field Functions 
      bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
      void deleteReasonCode() { this->reasonCode_ = nullptr;};
      inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
      inline Items& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // remainTime Field Functions 
      bool hasRemainTime() const { return this->remainTime_ != nullptr;};
      void deleteRemainTime() { this->remainTime_ = nullptr;};
      inline int32_t getRemainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, 0) };
      inline Items& setRemainTime(int32_t remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskDetail Field Functions 
      bool hasTaskDetail() const { return this->taskDetail_ != nullptr;};
      void deleteTaskDetail() { this->taskDetail_ = nullptr;};
      inline string getTaskDetail() const { DARABONBA_PTR_GET_DEFAULT(taskDetail_, "") };
      inline Items& setTaskDetail(string taskDetail) { DARABONBA_PTR_SET_VALUE(taskDetail_, taskDetail) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Items& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Items& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // A set of allowed actions that can be taken on the task. The system matches the current step name and status of the task to the available actions specified by ActionInfo. If no matching action is found, the current status of the task does not support any action. Example:
      // 
      //        "steps": [
      //         {
      //           "step_name": "exec_task", // The name of the step, which matches the value of CurrentStepName.
      //           "action_info": {    // The actions supported for this step.
      //             "Waiting": [      // The status, which matches the value of Status.
      //               "modifySwitchTime" // The action. Multiple actions are supported.
      //             ]
      //           }
      //         },
      //         {
      //           "step_name": "init_task", // The name of the step.
      //           "action_info": {    // The actions supported for this step.
      //             "Running": [      // The status.
      //               "cancel",       // The action.
      //               "pause"
      //             ]
      //           }
      //         }
      //       ]
      //     }
      // 
      // The system may support the following actions:
      // 
      // *   retry: makes another attempt.
      // *   cancel: makes a cancellation.
      // *   modifySwitchTime: changes the switching or restoration time.
      shared_ptr<string> actionInfo_ {};
      // The request source. Valid values: System and User.
      shared_ptr<string> callerSource_ {};
      // The ID of the user who made the request. If CallerSource is set to User, CallerUid indicates the unique ID (UID) of the user.
      shared_ptr<string> callerUid_ {};
      // The name of the current step. If this parameter is left empty, the task is not started.
      shared_ptr<string> currentStepName_ {};
      // The database type. The value is fixed to mongodb.
      shared_ptr<string> dbType_ {};
      // The end time of the performed O\\&M task. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The instance ID
      shared_ptr<string> instanceId_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The instance type of the instance. The value is fixed to Instance.
      shared_ptr<string> instanceType_ {};
      // The product. The value is fixed to dds.
      shared_ptr<string> product_ {};
      // The current progress of the task. The valid values range from 0 to 100.
      shared_ptr<float> progress_ {};
      // The reason why the current task was initiated.
      shared_ptr<string> reasonCode_ {};
      // The region ID of the instance.
      shared_ptr<string> regionId_ {};
      // The estimated remaining execution time. Unit: seconds. The value 0 indicates that the task is completed.
      shared_ptr<int32_t> remainTime_ {};
      // The start time of the performed O\\&M task. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The task status. Valid values:
      // 
      // *   Scheduled: The task is waiting to be executed.
      // *   Running: The task is running.
      // *   Succeed: The task is successful.
      // *   Failed: The task failed.
      // *   Cancelling: The task is being terminated.
      // *   Canceled: The task has been terminated.
      // *   Waiting: The task is waiting for scheduled time.
      shared_ptr<string> status_ {};
      // The details of the task. The task details vary based on the value of the taskType parameter.
      shared_ptr<string> taskDetail_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task type.
      // 
      // *   CreateIns: Create an instance.
      // *   DeleteIns: Delete an instance.
      // *   ChangeVariable: Modify parameter settings for an instance.
      // *   ModifyInsConfig: Change the configurations of an instance.
      // *   RestartIns: Restart an instance.
      // *   HaSwitch: Perform a primary/secondary switchover on an instance.
      // *   CloneIns: Clone an instance.
      // *   KernelVersionUpgrade: Update the minor version of an instance.
      // *   ProxyVersionUpgrade: Upgrade the agent version of an instance.
      // *   ModifyAccount: Change the account of an instance.
      // *   ModifyInsSpec: Change the specifications of an instance or perform a data migration on the instance.
      // *   CreateReadIns: Create a read-only instance.
      // *   StartIns: Start an instance.
      // *   StopIns: Stop an instance.
      // *   ModifyNetwork: Modify the network type for an instance.
      // *   LockIns: Lock an instance.
      // *   UnlockIns: Unlock an instance.
      // *   DiskOnlineExpansion: Scale out the disks of an instance online.
      // *   StorageOnlineExpansion: Expend the storage capacity of an instance online.
      // *   AddInsNode: Add a node to an instance.
      // *   DeleteInsNode: Delete a node from an instance.
      // *   ManualBackupIns: Manually back up an instance.
      // *   ModifyInsStorageType: Modify the storage type for an instance.
      shared_ptr<string> taskType_ {};
      // The ID of the user to which the resource belongs.
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeHistoryTasksResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeHistoryTasksResponseBody::Items>) };
    inline vector<DescribeHistoryTasksResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeHistoryTasksResponseBody::Items>) };
    inline DescribeHistoryTasksResponseBody& setItems(const vector<DescribeHistoryTasksResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeHistoryTasksResponseBody& setItems(vector<DescribeHistoryTasksResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHistoryTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHistoryTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHistoryTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHistoryTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The task objects.
    shared_ptr<vector<DescribeHistoryTasksResponseBody::Items>> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of tasks that meet these conditions without taking pagination into account.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
