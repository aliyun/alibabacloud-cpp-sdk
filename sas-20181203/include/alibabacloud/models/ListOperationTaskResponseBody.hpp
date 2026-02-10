// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONTASKRESPONSEBODY_HPP_
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
  class ListOperationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperationTasks, operationTasks_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationTasks, operationTasks_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOperationTaskResponseBody() = default ;
    ListOperationTaskResponseBody(const ListOperationTaskResponseBody &) = default ;
    ListOperationTaskResponseBody(ListOperationTaskResponseBody &&) = default ;
    ListOperationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationTaskResponseBody() = default ;
    ListOperationTaskResponseBody& operator=(const ListOperationTaskResponseBody &) = default ;
    ListOperationTaskResponseBody& operator=(ListOperationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the current page in a paginated query.
      shared_ptr<int32_t> currentPage_ {};
      // The maximum number of items to display per page in a paginated query.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records in the query result.
      shared_ptr<int32_t> totalCount_ {};
    };

    class OperationTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationTasks& obj) { 
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
      friend void from_json(const Darabonba::Json& j, OperationTasks& obj) { 
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
      OperationTasks() = default ;
      OperationTasks(const OperationTasks &) = default ;
      OperationTasks(OperationTasks &&) = default ;
      OperationTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationTasks() = default ;
      OperationTasks& operator=(const OperationTasks &) = default ;
      OperationTasks& operator=(OperationTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->checkShowName_ == nullptr && this->dealTime_ == nullptr && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->instanceFreed_ == nullptr
        && this->instanceId_ == nullptr && this->lastCheckTime_ == nullptr && this->regionId_ == nullptr && this->repairSupportType_ == nullptr && this->riskLevel_ == nullptr
        && this->rootTaskId_ == nullptr && this->status_ == nullptr && this->statusShowName_ == nullptr && this->supportRollBack_ == nullptr && this->taskId_ == nullptr
        && this->type_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline OperationTasks& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // checkShowName Field Functions 
      bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
      void deleteCheckShowName() { this->checkShowName_ = nullptr;};
      inline string getCheckShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
      inline OperationTasks& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


      // dealTime Field Functions 
      bool hasDealTime() const { return this->dealTime_ != nullptr;};
      void deleteDealTime() { this->dealTime_ = nullptr;};
      inline int64_t getDealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, 0L) };
      inline OperationTasks& setDealTime(int64_t dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline OperationTasks& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline OperationTasks& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // instanceFreed Field Functions 
      bool hasInstanceFreed() const { return this->instanceFreed_ != nullptr;};
      void deleteInstanceFreed() { this->instanceFreed_ = nullptr;};
      inline bool getInstanceFreed() const { DARABONBA_PTR_GET_DEFAULT(instanceFreed_, false) };
      inline OperationTasks& setInstanceFreed(bool instanceFreed) { DARABONBA_PTR_SET_VALUE(instanceFreed_, instanceFreed) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline OperationTasks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastCheckTime Field Functions 
      bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
      void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
      inline int64_t getLastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, 0L) };
      inline OperationTasks& setLastCheckTime(int64_t lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline OperationTasks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // repairSupportType Field Functions 
      bool hasRepairSupportType() const { return this->repairSupportType_ != nullptr;};
      void deleteRepairSupportType() { this->repairSupportType_ = nullptr;};
      inline int32_t getRepairSupportType() const { DARABONBA_PTR_GET_DEFAULT(repairSupportType_, 0) };
      inline OperationTasks& setRepairSupportType(int32_t repairSupportType) { DARABONBA_PTR_SET_VALUE(repairSupportType_, repairSupportType) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline OperationTasks& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // rootTaskId Field Functions 
      bool hasRootTaskId() const { return this->rootTaskId_ != nullptr;};
      void deleteRootTaskId() { this->rootTaskId_ = nullptr;};
      inline string getRootTaskId() const { DARABONBA_PTR_GET_DEFAULT(rootTaskId_, "") };
      inline OperationTasks& setRootTaskId(string rootTaskId) { DARABONBA_PTR_SET_VALUE(rootTaskId_, rootTaskId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline OperationTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusShowName Field Functions 
      bool hasStatusShowName() const { return this->statusShowName_ != nullptr;};
      void deleteStatusShowName() { this->statusShowName_ = nullptr;};
      inline string getStatusShowName() const { DARABONBA_PTR_GET_DEFAULT(statusShowName_, "") };
      inline OperationTasks& setStatusShowName(string statusShowName) { DARABONBA_PTR_SET_VALUE(statusShowName_, statusShowName) };


      // supportRollBack Field Functions 
      bool hasSupportRollBack() const { return this->supportRollBack_ != nullptr;};
      void deleteSupportRollBack() { this->supportRollBack_ = nullptr;};
      inline bool getSupportRollBack() const { DARABONBA_PTR_GET_DEFAULT(supportRollBack_, false) };
      inline OperationTasks& setSupportRollBack(bool supportRollBack) { DARABONBA_PTR_SET_VALUE(supportRollBack_, supportRollBack) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline OperationTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OperationTasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the check item.
      shared_ptr<int64_t> checkId_ {};
      // The name of the check item.
      shared_ptr<string> checkShowName_ {};
      // The processing time of the task.
      shared_ptr<int64_t> dealTime_ {};
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The error message.
      shared_ptr<string> errorMsg_ {};
      // Whether the instance is released:
      // - true: Released
      // - false: Not released
      shared_ptr<bool> instanceFreed_ {};
      // The ID of the server instance.
      shared_ptr<string> instanceId_ {};
      // The timestamp of the latest check, in milliseconds.
      shared_ptr<int64_t> lastCheckTime_ {};
      // The ID of the region where the server is located.
      shared_ptr<string> regionId_ {};
      // The type of repair supported by the check item:
      // 
      // - **1**：Supports repair and rollback operations
      // - **2**：Supports repair but not rollback
      // - **3**：Redirect to a third-party platform for operation
      shared_ptr<int32_t> repairSupportType_ {};
      // The risk level of the detected alert. Values:
      // - **high**: High risk.
      //  - **medium**: Medium risk. 
      // - **low**: Low risk.
      shared_ptr<string> riskLevel_ {};
      // The ID of the main task.
      shared_ptr<string> rootTaskId_ {};
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
      shared_ptr<string> status_ {};
      // The display status of the repair task.
      shared_ptr<string> statusShowName_ {};
      // Whether rollback is supported:
      // - true: Supported
      // - false: Not supported
      shared_ptr<bool> supportRollBack_ {};
      // The ID of the operation task.
      shared_ptr<string> taskId_ {};
      // The type of the operation task being queried:
      // - REPAIR: Repair
      // - ROLLBACK: Rollback
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->operationTasks_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // operationTasks Field Functions 
    bool hasOperationTasks() const { return this->operationTasks_ != nullptr;};
    void deleteOperationTasks() { this->operationTasks_ = nullptr;};
    inline const vector<ListOperationTaskResponseBody::OperationTasks> & getOperationTasks() const { DARABONBA_PTR_GET_CONST(operationTasks_, vector<ListOperationTaskResponseBody::OperationTasks>) };
    inline vector<ListOperationTaskResponseBody::OperationTasks> getOperationTasks() { DARABONBA_PTR_GET(operationTasks_, vector<ListOperationTaskResponseBody::OperationTasks>) };
    inline ListOperationTaskResponseBody& setOperationTasks(const vector<ListOperationTaskResponseBody::OperationTasks> & operationTasks) { DARABONBA_PTR_SET_VALUE(operationTasks_, operationTasks) };
    inline ListOperationTaskResponseBody& setOperationTasks(vector<ListOperationTaskResponseBody::OperationTasks> && operationTasks) { DARABONBA_PTR_SET_RVALUE(operationTasks_, operationTasks) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListOperationTaskResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListOperationTaskResponseBody::PageInfo) };
    inline ListOperationTaskResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListOperationTaskResponseBody::PageInfo) };
    inline ListOperationTaskResponseBody& setPageInfo(const ListOperationTaskResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListOperationTaskResponseBody& setPageInfo(ListOperationTaskResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Detailed instance information list of operation tasks.
    shared_ptr<vector<ListOperationTaskResponseBody::OperationTasks>> operationTasks_ {};
    // Page information when performing a paginated query.
    shared_ptr<ListOperationTaskResponseBody::PageInfo> pageInfo_ {};
    // The ID of the current request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
