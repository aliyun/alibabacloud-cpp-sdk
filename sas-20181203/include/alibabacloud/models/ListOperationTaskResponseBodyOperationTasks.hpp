// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONTASKRESPONSEBODYOPERATIONTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONTASKRESPONSEBODYOPERATIONTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationTaskResponseBodyOperationTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationTaskResponseBodyOperationTasks& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_TO_JSON(DealTime, dealTime_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(InstanceFreed, instanceFreed_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepairSupportType, repairSupportType_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusShowName, statusShowName_);
      DARABONBA_PTR_TO_JSON(SupportRollBack, supportRollBack_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationTaskResponseBodyOperationTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_FROM_JSON(DealTime, dealTime_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(InstanceFreed, instanceFreed_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepairSupportType, repairSupportType_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusShowName, statusShowName_);
      DARABONBA_PTR_FROM_JSON(SupportRollBack, supportRollBack_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListOperationTaskResponseBodyOperationTasks() = default ;
    ListOperationTaskResponseBodyOperationTasks(const ListOperationTaskResponseBodyOperationTasks &) = default ;
    ListOperationTaskResponseBodyOperationTasks(ListOperationTaskResponseBodyOperationTasks &&) = default ;
    ListOperationTaskResponseBodyOperationTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationTaskResponseBodyOperationTasks() = default ;
    ListOperationTaskResponseBodyOperationTasks& operator=(const ListOperationTaskResponseBodyOperationTasks &) = default ;
    ListOperationTaskResponseBodyOperationTasks& operator=(ListOperationTaskResponseBodyOperationTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->checkShowName_ == nullptr && return this->dealTime_ == nullptr && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->instanceFreed_ == nullptr
        && return this->instanceId_ == nullptr && return this->lastCheckTime_ == nullptr && return this->regionId_ == nullptr && return this->repairSupportType_ == nullptr && return this->riskLevel_ == nullptr
        && return this->rootTaskId_ == nullptr && return this->status_ == nullptr && return this->statusShowName_ == nullptr && return this->supportRollBack_ == nullptr && return this->taskId_ == nullptr
        && return this->type_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListOperationTaskResponseBodyOperationTasks& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkShowName Field Functions 
    bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
    void deleteCheckShowName() { this->checkShowName_ = nullptr;};
    inline string checkShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
    inline ListOperationTaskResponseBodyOperationTasks& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


    // dealTime Field Functions 
    bool hasDealTime() const { return this->dealTime_ != nullptr;};
    void deleteDealTime() { this->dealTime_ = nullptr;};
    inline int64_t dealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, 0L) };
    inline ListOperationTaskResponseBodyOperationTasks& setDealTime(int64_t dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListOperationTaskResponseBodyOperationTasks& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListOperationTaskResponseBodyOperationTasks& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // instanceFreed Field Functions 
    bool hasInstanceFreed() const { return this->instanceFreed_ != nullptr;};
    void deleteInstanceFreed() { this->instanceFreed_ = nullptr;};
    inline bool instanceFreed() const { DARABONBA_PTR_GET_DEFAULT(instanceFreed_, false) };
    inline ListOperationTaskResponseBodyOperationTasks& setInstanceFreed(bool instanceFreed) { DARABONBA_PTR_SET_VALUE(instanceFreed_, instanceFreed) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListOperationTaskResponseBodyOperationTasks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastCheckTime Field Functions 
    bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
    void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
    inline int64_t lastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, 0L) };
    inline ListOperationTaskResponseBodyOperationTasks& setLastCheckTime(int64_t lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOperationTaskResponseBodyOperationTasks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repairSupportType Field Functions 
    bool hasRepairSupportType() const { return this->repairSupportType_ != nullptr;};
    void deleteRepairSupportType() { this->repairSupportType_ = nullptr;};
    inline int32_t repairSupportType() const { DARABONBA_PTR_GET_DEFAULT(repairSupportType_, 0) };
    inline ListOperationTaskResponseBodyOperationTasks& setRepairSupportType(int32_t repairSupportType) { DARABONBA_PTR_SET_VALUE(repairSupportType_, repairSupportType) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListOperationTaskResponseBodyOperationTasks& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // rootTaskId Field Functions 
    bool hasRootTaskId() const { return this->rootTaskId_ != nullptr;};
    void deleteRootTaskId() { this->rootTaskId_ = nullptr;};
    inline string rootTaskId() const { DARABONBA_PTR_GET_DEFAULT(rootTaskId_, "") };
    inline ListOperationTaskResponseBodyOperationTasks& setRootTaskId(string rootTaskId) { DARABONBA_PTR_SET_VALUE(rootTaskId_, rootTaskId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListOperationTaskResponseBodyOperationTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusShowName Field Functions 
    bool hasStatusShowName() const { return this->statusShowName_ != nullptr;};
    void deleteStatusShowName() { this->statusShowName_ = nullptr;};
    inline string statusShowName() const { DARABONBA_PTR_GET_DEFAULT(statusShowName_, "") };
    inline ListOperationTaskResponseBodyOperationTasks& setStatusShowName(string statusShowName) { DARABONBA_PTR_SET_VALUE(statusShowName_, statusShowName) };


    // supportRollBack Field Functions 
    bool hasSupportRollBack() const { return this->supportRollBack_ != nullptr;};
    void deleteSupportRollBack() { this->supportRollBack_ = nullptr;};
    inline bool supportRollBack() const { DARABONBA_PTR_GET_DEFAULT(supportRollBack_, false) };
    inline ListOperationTaskResponseBodyOperationTasks& setSupportRollBack(bool supportRollBack) { DARABONBA_PTR_SET_VALUE(supportRollBack_, supportRollBack) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListOperationTaskResponseBodyOperationTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListOperationTaskResponseBodyOperationTasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> checkShowName_ = nullptr;
    // The processing time of the task.
    std::shared_ptr<int64_t> dealTime_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Whether the instance is released:
    // - true: Released
    // - false: Not released
    std::shared_ptr<bool> instanceFreed_ = nullptr;
    // The ID of the server instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The timestamp of the latest check, in milliseconds.
    std::shared_ptr<int64_t> lastCheckTime_ = nullptr;
    // The ID of the region where the server is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of repair supported by the check item:
    // 
    // - **1**：Supports repair and rollback operations
    // - **2**：Supports repair but not rollback
    // - **3**：Redirect to a third-party platform for operation
    std::shared_ptr<int32_t> repairSupportType_ = nullptr;
    // The risk level of the detected alert. Values:
    // - **high**: High risk.
    //  - **medium**: Medium risk. 
    // - **low**: Low risk.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The ID of the main task.
    std::shared_ptr<string> rootTaskId_ = nullptr;
    // The status of the task. Possible values:
    // 
    // - **INIT**：Initialization
    // - **FAIL**：Processing failed
    // - **THROTTLING**：Repairing concurrently
    // - **IN_BACKUP**：Backing up
    // - **BACKED_UP**：Backed up
    // - **BACKUP_FAIL**：Backup failed
    // - **REPAIRING**：Repairing
    // - **REPAIR_SUCCESS**：Repair succeeded
    // - **REPAIR_FAIL**：Repair failed
    // - **REPAIR_SUCCESS_VERIFYING**：Verifying repair success
    // - **REPAIR_SUCCESS_UNVERIFIED**：Verification of repair success failed
    // - **REPAIR_SUCCESS_VERIFIED**：Verification of repair success succeeded
    // - **REPAIR_RE_EXECUTE**：Re-executing repair
    // - **ROLL_BACKING**：Rolling back
    // - **ROLL_BACKED**：Rolled back
    // - **ROLL_BACK_FAIL**：Rollback failed
    // - **ROLL_BACK_INIT**：Initiating rollback
    // - **ROLL_BACK_VERIFYING**：Verifying rollback success
    // - **ROLL_BACK_UNVERIFIED**：Verification of rollback success failed
    // - **ROLL_BACK_VERIFIED**：Verification of rollback success succeeded
    std::shared_ptr<string> status_ = nullptr;
    // The display status of the repair task.
    std::shared_ptr<string> statusShowName_ = nullptr;
    // Whether rollback is supported:
    // - true: Supported
    // - false: Not supported
    std::shared_ptr<bool> supportRollBack_ = nullptr;
    // The ID of the operation task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of the operation task being queried:
    // - REPAIR: Repair
    // - ROLLBACK: Rollback
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
