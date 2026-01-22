// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
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
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(DbVersion, dbVersion_);
        DARABONBA_PTR_TO_JSON(Deadline, deadline_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Impact, impact_);
        DARABONBA_PTR_TO_JSON(ImpactEn, impactEn_);
        DARABONBA_PTR_TO_JSON(ImpactZh, impactZh_);
        DARABONBA_PTR_TO_JSON(InsComment, insComment_);
        DARABONBA_PTR_TO_JSON(InsName, insName_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(PrepareInterval, prepareInterval_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ResultInfo, resultInfo_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubInsNames, subInsNames_);
        DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
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
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(DbVersion, dbVersion_);
        DARABONBA_PTR_FROM_JSON(Deadline, deadline_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Impact, impact_);
        DARABONBA_PTR_FROM_JSON(ImpactEn, impactEn_);
        DARABONBA_PTR_FROM_JSON(ImpactZh, impactZh_);
        DARABONBA_PTR_FROM_JSON(InsComment, insComment_);
        DARABONBA_PTR_FROM_JSON(InsName, insName_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(PrepareInterval, prepareInterval_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ResultInfo, resultInfo_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubInsNames, subInsNames_);
        DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
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
        && this->currentAVZ_ == nullptr && this->dbType_ == nullptr && this->dbVersion_ == nullptr && this->deadline_ == nullptr && this->id_ == nullptr
        && this->impact_ == nullptr && this->impactEn_ == nullptr && this->impactZh_ == nullptr && this->insComment_ == nullptr && this->insName_ == nullptr
        && this->modifiedTime_ == nullptr && this->prepareInterval_ == nullptr && this->region_ == nullptr && this->resultInfo_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->subInsNames_ == nullptr && this->switchTime_ == nullptr && this->taskType_ == nullptr && this->taskTypeEn_ == nullptr
        && this->taskTypeZh_ == nullptr; };
      // allowCancel Field Functions 
      bool hasAllowCancel() const { return this->allowCancel_ != nullptr;};
      void deleteAllowCancel() { this->allowCancel_ = nullptr;};
      inline string getAllowCancel() const { DARABONBA_PTR_GET_DEFAULT(allowCancel_, "") };
      inline Items& setAllowCancel(string allowCancel) { DARABONBA_PTR_SET_VALUE(allowCancel_, allowCancel) };


      // allowChange Field Functions 
      bool hasAllowChange() const { return this->allowChange_ != nullptr;};
      void deleteAllowChange() { this->allowChange_ = nullptr;};
      inline string getAllowChange() const { DARABONBA_PTR_GET_DEFAULT(allowChange_, "") };
      inline Items& setAllowChange(string allowChange) { DARABONBA_PTR_SET_VALUE(allowChange_, allowChange) };


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


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline Items& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // dbVersion Field Functions 
      bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
      void deleteDbVersion() { this->dbVersion_ = nullptr;};
      inline string getDbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, "") };
      inline Items& setDbVersion(string dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


      // deadline Field Functions 
      bool hasDeadline() const { return this->deadline_ != nullptr;};
      void deleteDeadline() { this->deadline_ = nullptr;};
      inline string getDeadline() const { DARABONBA_PTR_GET_DEFAULT(deadline_, "") };
      inline Items& setDeadline(string deadline) { DARABONBA_PTR_SET_VALUE(deadline_, deadline) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


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


      // insName Field Functions 
      bool hasInsName() const { return this->insName_ != nullptr;};
      void deleteInsName() { this->insName_ = nullptr;};
      inline string getInsName() const { DARABONBA_PTR_GET_DEFAULT(insName_, "") };
      inline Items& setInsName(string insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };


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
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline Items& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subInsNames Field Functions 
      bool hasSubInsNames() const { return this->subInsNames_ != nullptr;};
      void deleteSubInsNames() { this->subInsNames_ = nullptr;};
      inline const vector<string> & getSubInsNames() const { DARABONBA_PTR_GET_CONST(subInsNames_, vector<string>) };
      inline vector<string> getSubInsNames() { DARABONBA_PTR_GET(subInsNames_, vector<string>) };
      inline Items& setSubInsNames(const vector<string> & subInsNames) { DARABONBA_PTR_SET_VALUE(subInsNames_, subInsNames) };
      inline Items& setSubInsNames(vector<string> && subInsNames) { DARABONBA_PTR_SET_RVALUE(subInsNames_, subInsNames) };


      // switchTime Field Functions 
      bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
      void deleteSwitchTime() { this->switchTime_ = nullptr;};
      inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
      inline Items& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


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
      shared_ptr<string> allowCancel_ {};
      shared_ptr<string> allowChange_ {};
      shared_ptr<string> changeLevel_ {};
      shared_ptr<string> changeLevelEn_ {};
      shared_ptr<string> changeLevelZh_ {};
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> currentAVZ_ {};
      shared_ptr<string> dbType_ {};
      shared_ptr<string> dbVersion_ {};
      shared_ptr<string> deadline_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> impact_ {};
      shared_ptr<string> impactEn_ {};
      shared_ptr<string> impactZh_ {};
      shared_ptr<string> insComment_ {};
      shared_ptr<string> insName_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<string> prepareInterval_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> resultInfo_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<int64_t> status_ {};
      shared_ptr<vector<string>> subInsNames_ {};
      shared_ptr<string> switchTime_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> taskTypeEn_ {};
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
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeActiveOperationTasksResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeActiveOperationTasksResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActiveOperationTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeActiveOperationTasksResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<vector<DescribeActiveOperationTasksResponseBody::Items>> items_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
