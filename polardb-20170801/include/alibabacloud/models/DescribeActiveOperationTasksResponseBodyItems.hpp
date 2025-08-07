// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKSRESPONSEBODYITEMS_HPP_
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
  class DescribeActiveOperationTasksResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveOperationTasksResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeActiveOperationTasksResponseBodyItems& obj) { 
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
    DescribeActiveOperationTasksResponseBodyItems() = default ;
    DescribeActiveOperationTasksResponseBodyItems(const DescribeActiveOperationTasksResponseBodyItems &) = default ;
    DescribeActiveOperationTasksResponseBodyItems(DescribeActiveOperationTasksResponseBodyItems &&) = default ;
    DescribeActiveOperationTasksResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveOperationTasksResponseBodyItems() = default ;
    DescribeActiveOperationTasksResponseBodyItems& operator=(const DescribeActiveOperationTasksResponseBodyItems &) = default ;
    DescribeActiveOperationTasksResponseBodyItems& operator=(DescribeActiveOperationTasksResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowCancel_ != nullptr
        && this->allowChange_ != nullptr && this->changeLevel_ != nullptr && this->changeLevelEn_ != nullptr && this->changeLevelZh_ != nullptr && this->createdTime_ != nullptr
        && this->currentAVZ_ != nullptr && this->DBClusterId_ != nullptr && this->DBNodeIds_ != nullptr && this->DBType_ != nullptr && this->DBVersion_ != nullptr
        && this->deadline_ != nullptr && this->impact_ != nullptr && this->impactEn_ != nullptr && this->impactZh_ != nullptr && this->insComment_ != nullptr
        && this->modifiedTime_ != nullptr && this->prepareInterval_ != nullptr && this->region_ != nullptr && this->resultInfo_ != nullptr && this->startTime_ != nullptr
        && this->status_ != nullptr && this->switchTime_ != nullptr && this->taskId_ != nullptr && this->taskParams_ != nullptr && this->taskType_ != nullptr
        && this->taskTypeEn_ != nullptr && this->taskTypeZh_ != nullptr; };
    // allowCancel Field Functions 
    bool hasAllowCancel() const { return this->allowCancel_ != nullptr;};
    void deleteAllowCancel() { this->allowCancel_ = nullptr;};
    inline int64_t allowCancel() const { DARABONBA_PTR_GET_DEFAULT(allowCancel_, 0L) };
    inline DescribeActiveOperationTasksResponseBodyItems& setAllowCancel(int64_t allowCancel) { DARABONBA_PTR_SET_VALUE(allowCancel_, allowCancel) };


    // allowChange Field Functions 
    bool hasAllowChange() const { return this->allowChange_ != nullptr;};
    void deleteAllowChange() { this->allowChange_ = nullptr;};
    inline int64_t allowChange() const { DARABONBA_PTR_GET_DEFAULT(allowChange_, 0L) };
    inline DescribeActiveOperationTasksResponseBodyItems& setAllowChange(int64_t allowChange) { DARABONBA_PTR_SET_VALUE(allowChange_, allowChange) };


    // changeLevel Field Functions 
    bool hasChangeLevel() const { return this->changeLevel_ != nullptr;};
    void deleteChangeLevel() { this->changeLevel_ = nullptr;};
    inline string changeLevel() const { DARABONBA_PTR_GET_DEFAULT(changeLevel_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setChangeLevel(string changeLevel) { DARABONBA_PTR_SET_VALUE(changeLevel_, changeLevel) };


    // changeLevelEn Field Functions 
    bool hasChangeLevelEn() const { return this->changeLevelEn_ != nullptr;};
    void deleteChangeLevelEn() { this->changeLevelEn_ = nullptr;};
    inline string changeLevelEn() const { DARABONBA_PTR_GET_DEFAULT(changeLevelEn_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setChangeLevelEn(string changeLevelEn) { DARABONBA_PTR_SET_VALUE(changeLevelEn_, changeLevelEn) };


    // changeLevelZh Field Functions 
    bool hasChangeLevelZh() const { return this->changeLevelZh_ != nullptr;};
    void deleteChangeLevelZh() { this->changeLevelZh_ = nullptr;};
    inline string changeLevelZh() const { DARABONBA_PTR_GET_DEFAULT(changeLevelZh_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setChangeLevelZh(string changeLevelZh) { DARABONBA_PTR_SET_VALUE(changeLevelZh_, changeLevelZh) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // currentAVZ Field Functions 
    bool hasCurrentAVZ() const { return this->currentAVZ_ != nullptr;};
    void deleteCurrentAVZ() { this->currentAVZ_ = nullptr;};
    inline string currentAVZ() const { DARABONBA_PTR_GET_DEFAULT(currentAVZ_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setCurrentAVZ(string currentAVZ) { DARABONBA_PTR_SET_VALUE(currentAVZ_, currentAVZ) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeIds Field Functions 
    bool hasDBNodeIds() const { return this->DBNodeIds_ != nullptr;};
    void deleteDBNodeIds() { this->DBNodeIds_ = nullptr;};
    inline const vector<string> & DBNodeIds() const { DARABONBA_PTR_GET_CONST(DBNodeIds_, vector<string>) };
    inline vector<string> DBNodeIds() { DARABONBA_PTR_GET(DBNodeIds_, vector<string>) };
    inline DescribeActiveOperationTasksResponseBodyItems& setDBNodeIds(const vector<string> & DBNodeIds) { DARABONBA_PTR_SET_VALUE(DBNodeIds_, DBNodeIds) };
    inline DescribeActiveOperationTasksResponseBodyItems& setDBNodeIds(vector<string> && DBNodeIds) { DARABONBA_PTR_SET_RVALUE(DBNodeIds_, DBNodeIds) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // deadline Field Functions 
    bool hasDeadline() const { return this->deadline_ != nullptr;};
    void deleteDeadline() { this->deadline_ = nullptr;};
    inline string deadline() const { DARABONBA_PTR_GET_DEFAULT(deadline_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setDeadline(string deadline) { DARABONBA_PTR_SET_VALUE(deadline_, deadline) };


    // impact Field Functions 
    bool hasImpact() const { return this->impact_ != nullptr;};
    void deleteImpact() { this->impact_ = nullptr;};
    inline string impact() const { DARABONBA_PTR_GET_DEFAULT(impact_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setImpact(string impact) { DARABONBA_PTR_SET_VALUE(impact_, impact) };


    // impactEn Field Functions 
    bool hasImpactEn() const { return this->impactEn_ != nullptr;};
    void deleteImpactEn() { this->impactEn_ = nullptr;};
    inline string impactEn() const { DARABONBA_PTR_GET_DEFAULT(impactEn_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setImpactEn(string impactEn) { DARABONBA_PTR_SET_VALUE(impactEn_, impactEn) };


    // impactZh Field Functions 
    bool hasImpactZh() const { return this->impactZh_ != nullptr;};
    void deleteImpactZh() { this->impactZh_ = nullptr;};
    inline string impactZh() const { DARABONBA_PTR_GET_DEFAULT(impactZh_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setImpactZh(string impactZh) { DARABONBA_PTR_SET_VALUE(impactZh_, impactZh) };


    // insComment Field Functions 
    bool hasInsComment() const { return this->insComment_ != nullptr;};
    void deleteInsComment() { this->insComment_ = nullptr;};
    inline string insComment() const { DARABONBA_PTR_GET_DEFAULT(insComment_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setInsComment(string insComment) { DARABONBA_PTR_SET_VALUE(insComment_, insComment) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // prepareInterval Field Functions 
    bool hasPrepareInterval() const { return this->prepareInterval_ != nullptr;};
    void deletePrepareInterval() { this->prepareInterval_ = nullptr;};
    inline string prepareInterval() const { DARABONBA_PTR_GET_DEFAULT(prepareInterval_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setPrepareInterval(string prepareInterval) { DARABONBA_PTR_SET_VALUE(prepareInterval_, prepareInterval) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resultInfo Field Functions 
    bool hasResultInfo() const { return this->resultInfo_ != nullptr;};
    void deleteResultInfo() { this->resultInfo_ = nullptr;};
    inline string resultInfo() const { DARABONBA_PTR_GET_DEFAULT(resultInfo_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setResultInfo(string resultInfo) { DARABONBA_PTR_SET_VALUE(resultInfo_, resultInfo) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeActiveOperationTasksResponseBodyItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string switchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline DescribeActiveOperationTasksResponseBodyItems& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskParams Field Functions 
    bool hasTaskParams() const { return this->taskParams_ != nullptr;};
    void deleteTaskParams() { this->taskParams_ = nullptr;};
    inline string taskParams() const { DARABONBA_PTR_GET_DEFAULT(taskParams_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setTaskParams(string taskParams) { DARABONBA_PTR_SET_VALUE(taskParams_, taskParams) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // taskTypeEn Field Functions 
    bool hasTaskTypeEn() const { return this->taskTypeEn_ != nullptr;};
    void deleteTaskTypeEn() { this->taskTypeEn_ = nullptr;};
    inline string taskTypeEn() const { DARABONBA_PTR_GET_DEFAULT(taskTypeEn_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setTaskTypeEn(string taskTypeEn) { DARABONBA_PTR_SET_VALUE(taskTypeEn_, taskTypeEn) };


    // taskTypeZh Field Functions 
    bool hasTaskTypeZh() const { return this->taskTypeZh_ != nullptr;};
    void deleteTaskTypeZh() { this->taskTypeZh_ = nullptr;};
    inline string taskTypeZh() const { DARABONBA_PTR_GET_DEFAULT(taskTypeZh_, "") };
    inline DescribeActiveOperationTasksResponseBodyItems& setTaskTypeZh(string taskTypeZh) { DARABONBA_PTR_SET_VALUE(taskTypeZh_, taskTypeZh) };


  protected:
    std::shared_ptr<int64_t> allowCancel_ = nullptr;
    std::shared_ptr<int64_t> allowChange_ = nullptr;
    std::shared_ptr<string> changeLevel_ = nullptr;
    std::shared_ptr<string> changeLevelEn_ = nullptr;
    std::shared_ptr<string> changeLevelZh_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> currentAVZ_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<vector<string>> DBNodeIds_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
    std::shared_ptr<string> DBVersion_ = nullptr;
    std::shared_ptr<string> deadline_ = nullptr;
    std::shared_ptr<string> impact_ = nullptr;
    std::shared_ptr<string> impactEn_ = nullptr;
    std::shared_ptr<string> impactZh_ = nullptr;
    std::shared_ptr<string> insComment_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> prepareInterval_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resultInfo_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> switchTime_ = nullptr;
    std::shared_ptr<int32_t> taskId_ = nullptr;
    std::shared_ptr<string> taskParams_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> taskTypeEn_ = nullptr;
    std::shared_ptr<string> taskTypeZh_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
