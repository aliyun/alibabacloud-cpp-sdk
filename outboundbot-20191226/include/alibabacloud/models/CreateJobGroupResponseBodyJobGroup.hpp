// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBGROUPRESPONSEBODYJOBGROUP_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBGROUPRESPONSEBODYJOBGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateJobGroupResponseBodyJobGroupExportProgress.hpp>
#include <alibabacloud/models/CreateJobGroupResponseBodyJobGroupRecallStrategy.hpp>
#include <alibabacloud/models/CreateJobGroupResponseBodyJobGroupStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateJobGroupResponseBodyJobGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobGroupResponseBodyJobGroup& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumbers, callingNumbers_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ExportProgress, exportProgress_);
      DARABONBA_PTR_TO_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
      DARABONBA_PTR_TO_JSON(JobFilePath, jobFilePath_);
      DARABONBA_PTR_TO_JSON(JobGroupDescription, jobGroupDescription_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_TO_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RecallCallingNumbers, recallCallingNumbers_);
      DARABONBA_PTR_TO_JSON(RecallStrategy, recallStrategy_);
      DARABONBA_PTR_TO_JSON(RingingDuration, ringingDuration_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(ScriptVersion, scriptVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobGroupResponseBodyJobGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumbers, callingNumbers_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ExportProgress, exportProgress_);
      DARABONBA_PTR_FROM_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
      DARABONBA_PTR_FROM_JSON(JobFilePath, jobFilePath_);
      DARABONBA_PTR_FROM_JSON(JobGroupDescription, jobGroupDescription_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_FROM_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RecallCallingNumbers, recallCallingNumbers_);
      DARABONBA_PTR_FROM_JSON(RecallStrategy, recallStrategy_);
      DARABONBA_PTR_FROM_JSON(RingingDuration, ringingDuration_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(ScriptVersion, scriptVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    CreateJobGroupResponseBodyJobGroup() = default ;
    CreateJobGroupResponseBodyJobGroup(const CreateJobGroupResponseBodyJobGroup &) = default ;
    CreateJobGroupResponseBodyJobGroup(CreateJobGroupResponseBodyJobGroup &&) = default ;
    CreateJobGroupResponseBodyJobGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobGroupResponseBodyJobGroup() = default ;
    CreateJobGroupResponseBodyJobGroup& operator=(const CreateJobGroupResponseBodyJobGroup &) = default ;
    CreateJobGroupResponseBodyJobGroup& operator=(CreateJobGroupResponseBodyJobGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumbers_ == nullptr
        && return this->creationTime_ == nullptr && return this->exportProgress_ == nullptr && return this->jobDataParsingTaskId_ == nullptr && return this->jobFilePath_ == nullptr && return this->jobGroupDescription_ == nullptr
        && return this->jobGroupId_ == nullptr && return this->jobGroupName_ == nullptr && return this->minConcurrency_ == nullptr && return this->modifyTime_ == nullptr && return this->priority_ == nullptr
        && return this->recallCallingNumbers_ == nullptr && return this->recallStrategy_ == nullptr && return this->ringingDuration_ == nullptr && return this->scenarioId_ == nullptr && return this->scriptName_ == nullptr
        && return this->scriptVersion_ == nullptr && return this->status_ == nullptr && return this->strategy_ == nullptr; };
    // callingNumbers Field Functions 
    bool hasCallingNumbers() const { return this->callingNumbers_ != nullptr;};
    void deleteCallingNumbers() { this->callingNumbers_ = nullptr;};
    inline const vector<string> & callingNumbers() const { DARABONBA_PTR_GET_CONST(callingNumbers_, vector<string>) };
    inline vector<string> callingNumbers() { DARABONBA_PTR_GET(callingNumbers_, vector<string>) };
    inline CreateJobGroupResponseBodyJobGroup& setCallingNumbers(const vector<string> & callingNumbers) { DARABONBA_PTR_SET_VALUE(callingNumbers_, callingNumbers) };
    inline CreateJobGroupResponseBodyJobGroup& setCallingNumbers(vector<string> && callingNumbers) { DARABONBA_PTR_SET_RVALUE(callingNumbers_, callingNumbers) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline CreateJobGroupResponseBodyJobGroup& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // exportProgress Field Functions 
    bool hasExportProgress() const { return this->exportProgress_ != nullptr;};
    void deleteExportProgress() { this->exportProgress_ = nullptr;};
    inline const Models::CreateJobGroupResponseBodyJobGroupExportProgress & exportProgress() const { DARABONBA_PTR_GET_CONST(exportProgress_, Models::CreateJobGroupResponseBodyJobGroupExportProgress) };
    inline Models::CreateJobGroupResponseBodyJobGroupExportProgress exportProgress() { DARABONBA_PTR_GET(exportProgress_, Models::CreateJobGroupResponseBodyJobGroupExportProgress) };
    inline CreateJobGroupResponseBodyJobGroup& setExportProgress(const Models::CreateJobGroupResponseBodyJobGroupExportProgress & exportProgress) { DARABONBA_PTR_SET_VALUE(exportProgress_, exportProgress) };
    inline CreateJobGroupResponseBodyJobGroup& setExportProgress(Models::CreateJobGroupResponseBodyJobGroupExportProgress && exportProgress) { DARABONBA_PTR_SET_RVALUE(exportProgress_, exportProgress) };


    // jobDataParsingTaskId Field Functions 
    bool hasJobDataParsingTaskId() const { return this->jobDataParsingTaskId_ != nullptr;};
    void deleteJobDataParsingTaskId() { this->jobDataParsingTaskId_ = nullptr;};
    inline string jobDataParsingTaskId() const { DARABONBA_PTR_GET_DEFAULT(jobDataParsingTaskId_, "") };
    inline CreateJobGroupResponseBodyJobGroup& setJobDataParsingTaskId(string jobDataParsingTaskId) { DARABONBA_PTR_SET_VALUE(jobDataParsingTaskId_, jobDataParsingTaskId) };


    // jobFilePath Field Functions 
    bool hasJobFilePath() const { return this->jobFilePath_ != nullptr;};
    void deleteJobFilePath() { this->jobFilePath_ = nullptr;};
    inline string jobFilePath() const { DARABONBA_PTR_GET_DEFAULT(jobFilePath_, "") };
    inline CreateJobGroupResponseBodyJobGroup& setJobFilePath(string jobFilePath) { DARABONBA_PTR_SET_VALUE(jobFilePath_, jobFilePath) };


    // jobGroupDescription Field Functions 
    bool hasJobGroupDescription() const { return this->jobGroupDescription_ != nullptr;};
    void deleteJobGroupDescription() { this->jobGroupDescription_ = nullptr;};
    inline string jobGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(jobGroupDescription_, "") };
    inline CreateJobGroupResponseBodyJobGroup& setJobGroupDescription(string jobGroupDescription) { DARABONBA_PTR_SET_VALUE(jobGroupDescription_, jobGroupDescription) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline CreateJobGroupResponseBodyJobGroup& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobGroupName Field Functions 
    bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
    void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
    inline string jobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
    inline CreateJobGroupResponseBodyJobGroup& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


    // minConcurrency Field Functions 
    bool hasMinConcurrency() const { return this->minConcurrency_ != nullptr;};
    void deleteMinConcurrency() { this->minConcurrency_ = nullptr;};
    inline int64_t minConcurrency() const { DARABONBA_PTR_GET_DEFAULT(minConcurrency_, 0L) };
    inline CreateJobGroupResponseBodyJobGroup& setMinConcurrency(int64_t minConcurrency) { DARABONBA_PTR_SET_VALUE(minConcurrency_, minConcurrency) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline CreateJobGroupResponseBodyJobGroup& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateJobGroupResponseBodyJobGroup& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // recallCallingNumbers Field Functions 
    bool hasRecallCallingNumbers() const { return this->recallCallingNumbers_ != nullptr;};
    void deleteRecallCallingNumbers() { this->recallCallingNumbers_ = nullptr;};
    inline const vector<string> & recallCallingNumbers() const { DARABONBA_PTR_GET_CONST(recallCallingNumbers_, vector<string>) };
    inline vector<string> recallCallingNumbers() { DARABONBA_PTR_GET(recallCallingNumbers_, vector<string>) };
    inline CreateJobGroupResponseBodyJobGroup& setRecallCallingNumbers(const vector<string> & recallCallingNumbers) { DARABONBA_PTR_SET_VALUE(recallCallingNumbers_, recallCallingNumbers) };
    inline CreateJobGroupResponseBodyJobGroup& setRecallCallingNumbers(vector<string> && recallCallingNumbers) { DARABONBA_PTR_SET_RVALUE(recallCallingNumbers_, recallCallingNumbers) };


    // recallStrategy Field Functions 
    bool hasRecallStrategy() const { return this->recallStrategy_ != nullptr;};
    void deleteRecallStrategy() { this->recallStrategy_ = nullptr;};
    inline const Models::CreateJobGroupResponseBodyJobGroupRecallStrategy & recallStrategy() const { DARABONBA_PTR_GET_CONST(recallStrategy_, Models::CreateJobGroupResponseBodyJobGroupRecallStrategy) };
    inline Models::CreateJobGroupResponseBodyJobGroupRecallStrategy recallStrategy() { DARABONBA_PTR_GET(recallStrategy_, Models::CreateJobGroupResponseBodyJobGroupRecallStrategy) };
    inline CreateJobGroupResponseBodyJobGroup& setRecallStrategy(const Models::CreateJobGroupResponseBodyJobGroupRecallStrategy & recallStrategy) { DARABONBA_PTR_SET_VALUE(recallStrategy_, recallStrategy) };
    inline CreateJobGroupResponseBodyJobGroup& setRecallStrategy(Models::CreateJobGroupResponseBodyJobGroupRecallStrategy && recallStrategy) { DARABONBA_PTR_SET_RVALUE(recallStrategy_, recallStrategy) };


    // ringingDuration Field Functions 
    bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
    void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
    inline int64_t ringingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
    inline CreateJobGroupResponseBodyJobGroup& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline CreateJobGroupResponseBodyJobGroup& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline CreateJobGroupResponseBodyJobGroup& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptVersion Field Functions 
    bool hasScriptVersion() const { return this->scriptVersion_ != nullptr;};
    void deleteScriptVersion() { this->scriptVersion_ = nullptr;};
    inline string scriptVersion() const { DARABONBA_PTR_GET_DEFAULT(scriptVersion_, "") };
    inline CreateJobGroupResponseBodyJobGroup& setScriptVersion(string scriptVersion) { DARABONBA_PTR_SET_VALUE(scriptVersion_, scriptVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateJobGroupResponseBodyJobGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const Models::CreateJobGroupResponseBodyJobGroupStrategy & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, Models::CreateJobGroupResponseBodyJobGroupStrategy) };
    inline Models::CreateJobGroupResponseBodyJobGroupStrategy strategy() { DARABONBA_PTR_GET(strategy_, Models::CreateJobGroupResponseBodyJobGroupStrategy) };
    inline CreateJobGroupResponseBodyJobGroup& setStrategy(const Models::CreateJobGroupResponseBodyJobGroupStrategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline CreateJobGroupResponseBodyJobGroup& setStrategy(Models::CreateJobGroupResponseBodyJobGroupStrategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<vector<string>> callingNumbers_ = nullptr;
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    std::shared_ptr<Models::CreateJobGroupResponseBodyJobGroupExportProgress> exportProgress_ = nullptr;
    std::shared_ptr<string> jobDataParsingTaskId_ = nullptr;
    std::shared_ptr<string> jobFilePath_ = nullptr;
    std::shared_ptr<string> jobGroupDescription_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> jobGroupName_ = nullptr;
    std::shared_ptr<int64_t> minConcurrency_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<vector<string>> recallCallingNumbers_ = nullptr;
    std::shared_ptr<Models::CreateJobGroupResponseBodyJobGroupRecallStrategy> recallStrategy_ = nullptr;
    std::shared_ptr<int64_t> ringingDuration_ = nullptr;
    std::shared_ptr<string> scenarioId_ = nullptr;
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<string> scriptVersion_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::CreateJobGroupResponseBodyJobGroupStrategy> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
