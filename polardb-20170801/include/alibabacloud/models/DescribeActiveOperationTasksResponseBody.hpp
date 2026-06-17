// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeActiveOperationTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveOperationTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveOperationTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeActiveOperationTasksResponseBody() = default ;
    DescribeActiveOperationTasksResponseBody(const DescribeActiveOperationTasksResponseBody &) = default ;
    DescribeActiveOperationTasksResponseBody(DescribeActiveOperationTasksResponseBody &&) = default ;
    DescribeActiveOperationTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveOperationTasksResponseBody() = default ;
    DescribeActiveOperationTasksResponseBody& operator=(const DescribeActiveOperationTasksResponseBody &) = default ;
    DescribeActiveOperationTasksResponseBody& operator=(DescribeActiveOperationTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AllowCancel, allowCancel_);
        DARABONBA_PTR_TO_JSON(AllowChange, allowChange_);
        DARABONBA_PTR_TO_JSON(ChangeLevel, changeLevel_);
        DARABONBA_PTR_TO_JSON(ChangeLevelEn, changeLevelEn_);
        DARABONBA_PTR_TO_JSON(ChangeLevelZh, changeLevelZh_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(CurrentAVZ, currentAVZ_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(DBNodeIds, DBNodeIds_);
        DARABONBA_PTR_TO_JSON(DBType, DBType_);
        DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_TO_JSON(Deadline, deadline_);
        DARABONBA_PTR_TO_JSON(Impact, impact_);
        DARABONBA_PTR_TO_JSON(ImpactEn, impactEn_);
        DARABONBA_PTR_TO_JSON(ImpactZh, impactZh_);
        DARABONBA_PTR_TO_JSON(InsComment, insComment_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(PrepareInterval, prepareInterval_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ResultInfo, resultInfo_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskParams, taskParams_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TaskTypeEn, taskTypeEn_);
        DARABONBA_PTR_TO_JSON(TaskTypeZh, taskTypeZh_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowCancel, allowCancel_);
        DARABONBA_PTR_FROM_JSON(AllowChange, allowChange_);
        DARABONBA_PTR_FROM_JSON(ChangeLevel, changeLevel_);
        DARABONBA_PTR_FROM_JSON(ChangeLevelEn, changeLevelEn_);
        DARABONBA_PTR_FROM_JSON(ChangeLevelZh, changeLevelZh_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(CurrentAVZ, currentAVZ_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(DBNodeIds, DBNodeIds_);
        DARABONBA_PTR_FROM_JSON(DBType, DBType_);
        DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_FROM_JSON(Deadline, deadline_);
        DARABONBA_PTR_FROM_JSON(Impact, impact_);
        DARABONBA_PTR_FROM_JSON(ImpactEn, impactEn_);
        DARABONBA_PTR_FROM_JSON(ImpactZh, impactZh_);
        DARABONBA_PTR_FROM_JSON(InsComment, insComment_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(PrepareInterval, prepareInterval_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ResultInfo, resultInfo_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskParams, taskParams_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TaskTypeEn, taskTypeEn_);
        DARABONBA_PTR_FROM_JSON(TaskTypeZh, taskTypeZh_);
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
      virtual bool empty() const override { return this->allowCancel_ == nullptr
        && this->allowChange_ == nullptr && this->changeLevel_ == nullptr && this->changeLevelEn_ == nullptr && this->changeLevelZh_ == nullptr && this->createdTime_ == nullptr
        && this->currentAVZ_ == nullptr && this->DBClusterId_ == nullptr && this->DBNodeIds_ == nullptr && this->DBType_ == nullptr && this->DBVersion_ == nullptr
        && this->deadline_ == nullptr && this->impact_ == nullptr && this->impactEn_ == nullptr && this->impactZh_ == nullptr && this->insComment_ == nullptr
        && this->modifiedTime_ == nullptr && this->prepareInterval_ == nullptr && this->region_ == nullptr && this->resultInfo_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->switchTime_ == nullptr && this->taskId_ == nullptr && this->taskParams_ == nullptr && this->taskType_ == nullptr
        && this->taskTypeEn_ == nullptr && this->taskTypeZh_ == nullptr; };
      // allowCancel Field Functions 
      bool hasAllowCancel() const { return this->allowCancel_ != nullptr;};
      void deleteAllowCancel() { this->allowCancel_ = nullptr;};
      inline int64_t getAllowCancel() const { DARABONBA_PTR_GET_DEFAULT(allowCancel_, 0L) };
      inline Items& setAllowCancel(int64_t allowCancel) { DARABONBA_PTR_SET_VALUE(allowCancel_, allowCancel) };


      // allowChange Field Functions 
      bool hasAllowChange() const { return this->allowChange_ != nullptr;};
      void deleteAllowChange() { this->allowChange_ = nullptr;};
      inline int64_t getAllowChange() const { DARABONBA_PTR_GET_DEFAULT(allowChange_, 0L) };
      inline Items& setAllowChange(int64_t allowChange) { DARABONBA_PTR_SET_VALUE(allowChange_, allowChange) };


      // changeLevel Field Functions 
      bool hasChangeLevel() const { return this->changeLevel_ != nullptr;};
      void deleteChangeLevel() { this->changeLevel_ = nullptr;};
      inline string getChangeLevel() const { DARABONBA_PTR_GET_DEFAULT(changeLevel_, "") };
      inline Items& setChangeLevel(string changeLevel) { DARABONBA_PTR_SET_VALUE(changeLevel_, changeLevel) };


      // changeLevelEn Field Functions 
      bool hasChangeLevelEn() const { return this->changeLevelEn_ != nullptr;};
      void deleteChangeLevelEn() { this->changeLevelEn_ = nullptr;};
      inline string getChangeLevelEn() const { DARABONBA_PTR_GET_DEFAULT(changeLevelEn_, "") };
      inline Items& setChangeLevelEn(string changeLevelEn) { DARABONBA_PTR_SET_VALUE(changeLevelEn_, changeLevelEn) };


      // changeLevelZh Field Functions 
      bool hasChangeLevelZh() const { return this->changeLevelZh_ != nullptr;};
      void deleteChangeLevelZh() { this->changeLevelZh_ = nullptr;};
      inline string getChangeLevelZh() const { DARABONBA_PTR_GET_DEFAULT(changeLevelZh_, "") };
      inline Items& setChangeLevelZh(string changeLevelZh) { DARABONBA_PTR_SET_VALUE(changeLevelZh_, changeLevelZh) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Items& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // currentAVZ Field Functions 
      bool hasCurrentAVZ() const { return this->currentAVZ_ != nullptr;};
      void deleteCurrentAVZ() { this->currentAVZ_ = nullptr;};
      inline string getCurrentAVZ() const { DARABONBA_PTR_GET_DEFAULT(currentAVZ_, "") };
      inline Items& setCurrentAVZ(string currentAVZ) { DARABONBA_PTR_SET_VALUE(currentAVZ_, currentAVZ) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Items& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // DBNodeIds Field Functions 
      bool hasDBNodeIds() const { return this->DBNodeIds_ != nullptr;};
      void deleteDBNodeIds() { this->DBNodeIds_ = nullptr;};
      inline const vector<string> & getDBNodeIds() const { DARABONBA_PTR_GET_CONST(DBNodeIds_, vector<string>) };
      inline vector<string> getDBNodeIds() { DARABONBA_PTR_GET(DBNodeIds_, vector<string>) };
      inline Items& setDBNodeIds(const vector<string> & DBNodeIds) { DARABONBA_PTR_SET_VALUE(DBNodeIds_, DBNodeIds) };
      inline Items& setDBNodeIds(vector<string> && DBNodeIds) { DARABONBA_PTR_SET_RVALUE(DBNodeIds_, DBNodeIds) };


      // DBType Field Functions 
      bool hasDBType() const { return this->DBType_ != nullptr;};
      void deleteDBType() { this->DBType_ = nullptr;};
      inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
      inline Items& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


      // DBVersion Field Functions 
      bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
      void deleteDBVersion() { this->DBVersion_ = nullptr;};
      inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
      inline Items& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


      // deadline Field Functions 
      bool hasDeadline() const { return this->deadline_ != nullptr;};
      void deleteDeadline() { this->deadline_ = nullptr;};
      inline string getDeadline() const { DARABONBA_PTR_GET_DEFAULT(deadline_, "") };
      inline Items& setDeadline(string deadline) { DARABONBA_PTR_SET_VALUE(deadline_, deadline) };


      // impact Field Functions 
      bool hasImpact() const { return this->impact_ != nullptr;};
      void deleteImpact() { this->impact_ = nullptr;};
      inline string getImpact() const { DARABONBA_PTR_GET_DEFAULT(impact_, "") };
      inline Items& setImpact(string impact) { DARABONBA_PTR_SET_VALUE(impact_, impact) };


      // impactEn Field Functions 
      bool hasImpactEn() const { return this->impactEn_ != nullptr;};
      void deleteImpactEn() { this->impactEn_ = nullptr;};
      inline string getImpactEn() const { DARABONBA_PTR_GET_DEFAULT(impactEn_, "") };
      inline Items& setImpactEn(string impactEn) { DARABONBA_PTR_SET_VALUE(impactEn_, impactEn) };


      // impactZh Field Functions 
      bool hasImpactZh() const { return this->impactZh_ != nullptr;};
      void deleteImpactZh() { this->impactZh_ = nullptr;};
      inline string getImpactZh() const { DARABONBA_PTR_GET_DEFAULT(impactZh_, "") };
      inline Items& setImpactZh(string impactZh) { DARABONBA_PTR_SET_VALUE(impactZh_, impactZh) };


      // insComment Field Functions 
      bool hasInsComment() const { return this->insComment_ != nullptr;};
      void deleteInsComment() { this->insComment_ = nullptr;};
      inline string getInsComment() const { DARABONBA_PTR_GET_DEFAULT(insComment_, "") };
      inline Items& setInsComment(string insComment) { DARABONBA_PTR_SET_VALUE(insComment_, insComment) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Items& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // prepareInterval Field Functions 
      bool hasPrepareInterval() const { return this->prepareInterval_ != nullptr;};
      void deletePrepareInterval() { this->prepareInterval_ = nullptr;};
      inline string getPrepareInterval() const { DARABONBA_PTR_GET_DEFAULT(prepareInterval_, "") };
      inline Items& setPrepareInterval(string prepareInterval) { DARABONBA_PTR_SET_VALUE(prepareInterval_, prepareInterval) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Items& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resultInfo Field Functions 
      bool hasResultInfo() const { return this->resultInfo_ != nullptr;};
      void deleteResultInfo() { this->resultInfo_ = nullptr;};
      inline string getResultInfo() const { DARABONBA_PTR_GET_DEFAULT(resultInfo_, "") };
      inline Items& setResultInfo(string resultInfo) { DARABONBA_PTR_SET_VALUE(resultInfo_, resultInfo) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Items& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // switchTime Field Functions 
      bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
      void deleteSwitchTime() { this->switchTime_ = nullptr;};
      inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
      inline Items& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
      inline Items& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskParams Field Functions 
      bool hasTaskParams() const { return this->taskParams_ != nullptr;};
      void deleteTaskParams() { this->taskParams_ = nullptr;};
      inline string getTaskParams() const { DARABONBA_PTR_GET_DEFAULT(taskParams_, "") };
      inline Items& setTaskParams(string taskParams) { DARABONBA_PTR_SET_VALUE(taskParams_, taskParams) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Items& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // taskTypeEn Field Functions 
      bool hasTaskTypeEn() const { return this->taskTypeEn_ != nullptr;};
      void deleteTaskTypeEn() { this->taskTypeEn_ = nullptr;};
      inline string getTaskTypeEn() const { DARABONBA_PTR_GET_DEFAULT(taskTypeEn_, "") };
      inline Items& setTaskTypeEn(string taskTypeEn) { DARABONBA_PTR_SET_VALUE(taskTypeEn_, taskTypeEn) };


      // taskTypeZh Field Functions 
      bool hasTaskTypeZh() const { return this->taskTypeZh_ != nullptr;};
      void deleteTaskTypeZh() { this->taskTypeZh_ = nullptr;};
      inline string getTaskTypeZh() const { DARABONBA_PTR_GET_DEFAULT(taskTypeZh_, "") };
      inline Items& setTaskTypeZh(string taskTypeZh) { DARABONBA_PTR_SET_VALUE(taskTypeZh_, taskTypeZh) };


    protected:
      // Indicates whether cancellation is allowed. Valid values:
      // 
      // - 1: indicates that users are allowed to cancel the task.
      // 
      // - 0: indicates that cancellation is not allowed.
      shared_ptr<int64_t> allowCancel_ {};
      // Indicates whether time modification is allowed. Valid values:
      // 
      // - 1: indicates that users are allowed to modify the time.
      // 
      // - 0: indicates that users are not allowed to modify the time.
      shared_ptr<int64_t> allowChange_ {};
      // The event level code. Valid values:
      // 
      // - S1: system maintenance.
      // 
      // - S0: threat fix.
      shared_ptr<string> changeLevel_ {};
      // The event level (English).
      shared_ptr<string> changeLevelEn_ {};
      // The event level (Chinese).
      shared_ptr<string> changeLevelZh_ {};
      // The creation time. Format: YYYY-MM-DDTHH:mm:ssZ.
      shared_ptr<string> createdTime_ {};
      // The current zone.
      shared_ptr<string> currentAVZ_ {};
      // The cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The list of node IDs.
      shared_ptr<vector<string>> DBNodeIds_ {};
      // The database engine type. Valid values:
      // 
      // - **MySQL**
      // 
      // - **PostgreSQL**
      // 
      // - **Oracle**
      shared_ptr<string> DBType_ {};
      // The kernel version number.
      shared_ptr<string> DBVersion_ {};
      // The latest deadline for the adjustable range of task execution time. Format: YYYY-MM-DDTHH:mm:ssZ.
      shared_ptr<string> deadline_ {};
      // The event impact.
      shared_ptr<string> impact_ {};
      // The event impact (English).
      shared_ptr<string> impactEn_ {};
      // The event impact (Chinese).
      shared_ptr<string> impactZh_ {};
      // The cluster alias or cluster comment.
      shared_ptr<string> insComment_ {};
      // The modification time. Format: YYYY-MM-DDTHH:mm:ssZ.
      shared_ptr<string> modifiedTime_ {};
      // The preparation time required between the start time and the switch time. Format: HH:mm:ss.
      shared_ptr<string> prepareInterval_ {};
      // The region code.
      shared_ptr<string> region_ {};
      // The execution result information.
      shared_ptr<string> resultInfo_ {};
      // The time when the background task is executed. Format: YYYY-MM-DDTHH:mm:ssZ.
      shared_ptr<string> startTime_ {};
      // The task status. Valid values:
      // 
      // - 0: indicates waiting for notification.
      // 
      // - 1: indicates retry notification.
      // 
      // - 2: indicates waiting for user-specified time.
      // 
      // - 3: indicates waiting for processing.
      // 
      // - 4: indicates in progress.
      // 
      // - 5: indicates successfully completed.
      // 
      // - 6: indicates failed.
      // 
      // - 7: indicates canceled.
      shared_ptr<int32_t> status_ {};
      // The time when the background initiates the switch operation. Format: YYYY-MM-DDTHH:mm:ssZ.
      shared_ptr<string> switchTime_ {};
      // The task ID.
      shared_ptr<int32_t> taskId_ {};
      // The task parameters.
      shared_ptr<string> taskParams_ {};
      // The type of the pending event task. Valid values:
      // 
      // - **DatabaseSoftwareUpgrading**: database software upgrade.
      // 
      // - **DatabaseHardwareMaintenance**: hardware maintenance and upgrade.
      // 
      // - **DatabaseStorageUpgrading**: database storage upgrade.
      // 
      // - **DatabaseProxyUpgrading**: proxy minor version upgrade.
      // 
      // - **all**: returns all types of pending events.
      shared_ptr<string> taskType_ {};
      // The task reason in English.
      shared_ptr<string> taskTypeEn_ {};
      // The task reason in Chinese.
      shared_ptr<string> taskTypeZh_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeActiveOperationTasksResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeActiveOperationTasksResponseBody::Items>) };
    inline vector<DescribeActiveOperationTasksResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeActiveOperationTasksResponseBody::Items>) };
    inline DescribeActiveOperationTasksResponseBody& setItems(const vector<DescribeActiveOperationTasksResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeActiveOperationTasksResponseBody& setItems(vector<DescribeActiveOperationTasksResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeActiveOperationTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeActiveOperationTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActiveOperationTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeActiveOperationTasksResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The list of O\\&M tasks.
    shared_ptr<vector<DescribeActiveOperationTasksResponseBody::Items>> items_ {};
    // The page number. The value must be greater than 0 and cannot exceed the maximum value of the Integer data type. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Valid values:
    // 
    // - **30**
    // 
    // - **50**
    // 
    // - **100**
    // 
    // Default value: **30**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of task records returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
