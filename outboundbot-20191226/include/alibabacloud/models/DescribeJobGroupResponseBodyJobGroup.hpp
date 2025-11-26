// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODYJOBGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODYJOBGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeJobGroupResponseBodyJobGroupExportProgress.hpp>
#include <alibabacloud/models/DescribeJobGroupResponseBodyJobGroupFlashSmsExtras.hpp>
#include <alibabacloud/models/DescribeJobGroupResponseBodyJobGroupProgress.hpp>
#include <alibabacloud/models/DescribeJobGroupResponseBodyJobGroupRecallStrategy.hpp>
#include <alibabacloud/models/DescribeJobGroupResponseBodyJobGroupResult.hpp>
#include <alibabacloud/models/DescribeJobGroupResponseBodyJobGroupStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobGroupResponseBodyJobGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobGroupResponseBodyJobGroup& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumbers, callingNumbers_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ExportProgress, exportProgress_);
      DARABONBA_PTR_TO_JSON(FlashSmsExtras, flashSmsExtras_);
      DARABONBA_PTR_TO_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
      DARABONBA_PTR_TO_JSON(JobFilePath, jobFilePath_);
      DARABONBA_PTR_TO_JSON(JobGroupDescription, jobGroupDescription_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_TO_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RecallCallingNumbers, recallCallingNumbers_);
      DARABONBA_PTR_TO_JSON(RecallStrategy, recallStrategy_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RingingDuration, ringingDuration_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(ScriptVersion, scriptVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobGroupResponseBodyJobGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumbers, callingNumbers_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ExportProgress, exportProgress_);
      DARABONBA_PTR_FROM_JSON(FlashSmsExtras, flashSmsExtras_);
      DARABONBA_PTR_FROM_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
      DARABONBA_PTR_FROM_JSON(JobFilePath, jobFilePath_);
      DARABONBA_PTR_FROM_JSON(JobGroupDescription, jobGroupDescription_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_FROM_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RecallCallingNumbers, recallCallingNumbers_);
      DARABONBA_PTR_FROM_JSON(RecallStrategy, recallStrategy_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RingingDuration, ringingDuration_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(ScriptVersion, scriptVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    DescribeJobGroupResponseBodyJobGroup() = default ;
    DescribeJobGroupResponseBodyJobGroup(const DescribeJobGroupResponseBodyJobGroup &) = default ;
    DescribeJobGroupResponseBodyJobGroup(DescribeJobGroupResponseBodyJobGroup &&) = default ;
    DescribeJobGroupResponseBodyJobGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobGroupResponseBodyJobGroup() = default ;
    DescribeJobGroupResponseBodyJobGroup& operator=(const DescribeJobGroupResponseBodyJobGroup &) = default ;
    DescribeJobGroupResponseBodyJobGroup& operator=(DescribeJobGroupResponseBodyJobGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumbers_ == nullptr
        && return this->creationTime_ == nullptr && return this->exportProgress_ == nullptr && return this->flashSmsExtras_ == nullptr && return this->jobDataParsingTaskId_ == nullptr && return this->jobFilePath_ == nullptr
        && return this->jobGroupDescription_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobGroupName_ == nullptr && return this->minConcurrency_ == nullptr && return this->modifyTime_ == nullptr
        && return this->priority_ == nullptr && return this->progress_ == nullptr && return this->recallCallingNumbers_ == nullptr && return this->recallStrategy_ == nullptr && return this->result_ == nullptr
        && return this->ringingDuration_ == nullptr && return this->scenarioId_ == nullptr && return this->scriptId_ == nullptr && return this->scriptName_ == nullptr && return this->scriptVersion_ == nullptr
        && return this->status_ == nullptr && return this->strategy_ == nullptr; };
    // callingNumbers Field Functions 
    bool hasCallingNumbers() const { return this->callingNumbers_ != nullptr;};
    void deleteCallingNumbers() { this->callingNumbers_ = nullptr;};
    inline const vector<string> & callingNumbers() const { DARABONBA_PTR_GET_CONST(callingNumbers_, vector<string>) };
    inline vector<string> callingNumbers() { DARABONBA_PTR_GET(callingNumbers_, vector<string>) };
    inline DescribeJobGroupResponseBodyJobGroup& setCallingNumbers(const vector<string> & callingNumbers) { DARABONBA_PTR_SET_VALUE(callingNumbers_, callingNumbers) };
    inline DescribeJobGroupResponseBodyJobGroup& setCallingNumbers(vector<string> && callingNumbers) { DARABONBA_PTR_SET_RVALUE(callingNumbers_, callingNumbers) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline DescribeJobGroupResponseBodyJobGroup& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // exportProgress Field Functions 
    bool hasExportProgress() const { return this->exportProgress_ != nullptr;};
    void deleteExportProgress() { this->exportProgress_ = nullptr;};
    inline const Models::DescribeJobGroupResponseBodyJobGroupExportProgress & exportProgress() const { DARABONBA_PTR_GET_CONST(exportProgress_, Models::DescribeJobGroupResponseBodyJobGroupExportProgress) };
    inline Models::DescribeJobGroupResponseBodyJobGroupExportProgress exportProgress() { DARABONBA_PTR_GET(exportProgress_, Models::DescribeJobGroupResponseBodyJobGroupExportProgress) };
    inline DescribeJobGroupResponseBodyJobGroup& setExportProgress(const Models::DescribeJobGroupResponseBodyJobGroupExportProgress & exportProgress) { DARABONBA_PTR_SET_VALUE(exportProgress_, exportProgress) };
    inline DescribeJobGroupResponseBodyJobGroup& setExportProgress(Models::DescribeJobGroupResponseBodyJobGroupExportProgress && exportProgress) { DARABONBA_PTR_SET_RVALUE(exportProgress_, exportProgress) };


    // flashSmsExtras Field Functions 
    bool hasFlashSmsExtras() const { return this->flashSmsExtras_ != nullptr;};
    void deleteFlashSmsExtras() { this->flashSmsExtras_ = nullptr;};
    inline const Models::DescribeJobGroupResponseBodyJobGroupFlashSmsExtras & flashSmsExtras() const { DARABONBA_PTR_GET_CONST(flashSmsExtras_, Models::DescribeJobGroupResponseBodyJobGroupFlashSmsExtras) };
    inline Models::DescribeJobGroupResponseBodyJobGroupFlashSmsExtras flashSmsExtras() { DARABONBA_PTR_GET(flashSmsExtras_, Models::DescribeJobGroupResponseBodyJobGroupFlashSmsExtras) };
    inline DescribeJobGroupResponseBodyJobGroup& setFlashSmsExtras(const Models::DescribeJobGroupResponseBodyJobGroupFlashSmsExtras & flashSmsExtras) { DARABONBA_PTR_SET_VALUE(flashSmsExtras_, flashSmsExtras) };
    inline DescribeJobGroupResponseBodyJobGroup& setFlashSmsExtras(Models::DescribeJobGroupResponseBodyJobGroupFlashSmsExtras && flashSmsExtras) { DARABONBA_PTR_SET_RVALUE(flashSmsExtras_, flashSmsExtras) };


    // jobDataParsingTaskId Field Functions 
    bool hasJobDataParsingTaskId() const { return this->jobDataParsingTaskId_ != nullptr;};
    void deleteJobDataParsingTaskId() { this->jobDataParsingTaskId_ = nullptr;};
    inline string jobDataParsingTaskId() const { DARABONBA_PTR_GET_DEFAULT(jobDataParsingTaskId_, "") };
    inline DescribeJobGroupResponseBodyJobGroup& setJobDataParsingTaskId(string jobDataParsingTaskId) { DARABONBA_PTR_SET_VALUE(jobDataParsingTaskId_, jobDataParsingTaskId) };


    // jobFilePath Field Functions 
    bool hasJobFilePath() const { return this->jobFilePath_ != nullptr;};
    void deleteJobFilePath() { this->jobFilePath_ = nullptr;};
    inline string jobFilePath() const { DARABONBA_PTR_GET_DEFAULT(jobFilePath_, "") };
    inline DescribeJobGroupResponseBodyJobGroup& setJobFilePath(string jobFilePath) { DARABONBA_PTR_SET_VALUE(jobFilePath_, jobFilePath) };


    // jobGroupDescription Field Functions 
    bool hasJobGroupDescription() const { return this->jobGroupDescription_ != nullptr;};
    void deleteJobGroupDescription() { this->jobGroupDescription_ = nullptr;};
    inline string jobGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(jobGroupDescription_, "") };
    inline DescribeJobGroupResponseBodyJobGroup& setJobGroupDescription(string jobGroupDescription) { DARABONBA_PTR_SET_VALUE(jobGroupDescription_, jobGroupDescription) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline DescribeJobGroupResponseBodyJobGroup& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobGroupName Field Functions 
    bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
    void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
    inline string jobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
    inline DescribeJobGroupResponseBodyJobGroup& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


    // minConcurrency Field Functions 
    bool hasMinConcurrency() const { return this->minConcurrency_ != nullptr;};
    void deleteMinConcurrency() { this->minConcurrency_ = nullptr;};
    inline int64_t minConcurrency() const { DARABONBA_PTR_GET_DEFAULT(minConcurrency_, 0L) };
    inline DescribeJobGroupResponseBodyJobGroup& setMinConcurrency(int64_t minConcurrency) { DARABONBA_PTR_SET_VALUE(minConcurrency_, minConcurrency) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeJobGroupResponseBodyJobGroup& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline DescribeJobGroupResponseBodyJobGroup& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline const Models::DescribeJobGroupResponseBodyJobGroupProgress & progress() const { DARABONBA_PTR_GET_CONST(progress_, Models::DescribeJobGroupResponseBodyJobGroupProgress) };
    inline Models::DescribeJobGroupResponseBodyJobGroupProgress progress() { DARABONBA_PTR_GET(progress_, Models::DescribeJobGroupResponseBodyJobGroupProgress) };
    inline DescribeJobGroupResponseBodyJobGroup& setProgress(const Models::DescribeJobGroupResponseBodyJobGroupProgress & progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };
    inline DescribeJobGroupResponseBodyJobGroup& setProgress(Models::DescribeJobGroupResponseBodyJobGroupProgress && progress) { DARABONBA_PTR_SET_RVALUE(progress_, progress) };


    // recallCallingNumbers Field Functions 
    bool hasRecallCallingNumbers() const { return this->recallCallingNumbers_ != nullptr;};
    void deleteRecallCallingNumbers() { this->recallCallingNumbers_ = nullptr;};
    inline const vector<string> & recallCallingNumbers() const { DARABONBA_PTR_GET_CONST(recallCallingNumbers_, vector<string>) };
    inline vector<string> recallCallingNumbers() { DARABONBA_PTR_GET(recallCallingNumbers_, vector<string>) };
    inline DescribeJobGroupResponseBodyJobGroup& setRecallCallingNumbers(const vector<string> & recallCallingNumbers) { DARABONBA_PTR_SET_VALUE(recallCallingNumbers_, recallCallingNumbers) };
    inline DescribeJobGroupResponseBodyJobGroup& setRecallCallingNumbers(vector<string> && recallCallingNumbers) { DARABONBA_PTR_SET_RVALUE(recallCallingNumbers_, recallCallingNumbers) };


    // recallStrategy Field Functions 
    bool hasRecallStrategy() const { return this->recallStrategy_ != nullptr;};
    void deleteRecallStrategy() { this->recallStrategy_ = nullptr;};
    inline const Models::DescribeJobGroupResponseBodyJobGroupRecallStrategy & recallStrategy() const { DARABONBA_PTR_GET_CONST(recallStrategy_, Models::DescribeJobGroupResponseBodyJobGroupRecallStrategy) };
    inline Models::DescribeJobGroupResponseBodyJobGroupRecallStrategy recallStrategy() { DARABONBA_PTR_GET(recallStrategy_, Models::DescribeJobGroupResponseBodyJobGroupRecallStrategy) };
    inline DescribeJobGroupResponseBodyJobGroup& setRecallStrategy(const Models::DescribeJobGroupResponseBodyJobGroupRecallStrategy & recallStrategy) { DARABONBA_PTR_SET_VALUE(recallStrategy_, recallStrategy) };
    inline DescribeJobGroupResponseBodyJobGroup& setRecallStrategy(Models::DescribeJobGroupResponseBodyJobGroupRecallStrategy && recallStrategy) { DARABONBA_PTR_SET_RVALUE(recallStrategy_, recallStrategy) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Models::DescribeJobGroupResponseBodyJobGroupResult & result() const { DARABONBA_PTR_GET_CONST(result_, Models::DescribeJobGroupResponseBodyJobGroupResult) };
    inline Models::DescribeJobGroupResponseBodyJobGroupResult result() { DARABONBA_PTR_GET(result_, Models::DescribeJobGroupResponseBodyJobGroupResult) };
    inline DescribeJobGroupResponseBodyJobGroup& setResult(const Models::DescribeJobGroupResponseBodyJobGroupResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeJobGroupResponseBodyJobGroup& setResult(Models::DescribeJobGroupResponseBodyJobGroupResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // ringingDuration Field Functions 
    bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
    void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
    inline int64_t ringingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
    inline DescribeJobGroupResponseBodyJobGroup& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline DescribeJobGroupResponseBodyJobGroup& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline DescribeJobGroupResponseBodyJobGroup& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline DescribeJobGroupResponseBodyJobGroup& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptVersion Field Functions 
    bool hasScriptVersion() const { return this->scriptVersion_ != nullptr;};
    void deleteScriptVersion() { this->scriptVersion_ = nullptr;};
    inline string scriptVersion() const { DARABONBA_PTR_GET_DEFAULT(scriptVersion_, "") };
    inline DescribeJobGroupResponseBodyJobGroup& setScriptVersion(string scriptVersion) { DARABONBA_PTR_SET_VALUE(scriptVersion_, scriptVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeJobGroupResponseBodyJobGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const Models::DescribeJobGroupResponseBodyJobGroupStrategy & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, Models::DescribeJobGroupResponseBodyJobGroupStrategy) };
    inline Models::DescribeJobGroupResponseBodyJobGroupStrategy strategy() { DARABONBA_PTR_GET(strategy_, Models::DescribeJobGroupResponseBodyJobGroupStrategy) };
    inline DescribeJobGroupResponseBodyJobGroup& setStrategy(const Models::DescribeJobGroupResponseBodyJobGroupStrategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline DescribeJobGroupResponseBodyJobGroup& setStrategy(Models::DescribeJobGroupResponseBodyJobGroupStrategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<vector<string>> callingNumbers_ = nullptr;
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    std::shared_ptr<Models::DescribeJobGroupResponseBodyJobGroupExportProgress> exportProgress_ = nullptr;
    std::shared_ptr<Models::DescribeJobGroupResponseBodyJobGroupFlashSmsExtras> flashSmsExtras_ = nullptr;
    std::shared_ptr<string> jobDataParsingTaskId_ = nullptr;
    std::shared_ptr<string> jobFilePath_ = nullptr;
    std::shared_ptr<string> jobGroupDescription_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> jobGroupName_ = nullptr;
    std::shared_ptr<int64_t> minConcurrency_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<Models::DescribeJobGroupResponseBodyJobGroupProgress> progress_ = nullptr;
    std::shared_ptr<vector<string>> recallCallingNumbers_ = nullptr;
    std::shared_ptr<Models::DescribeJobGroupResponseBodyJobGroupRecallStrategy> recallStrategy_ = nullptr;
    std::shared_ptr<Models::DescribeJobGroupResponseBodyJobGroupResult> result_ = nullptr;
    std::shared_ptr<int64_t> ringingDuration_ = nullptr;
    std::shared_ptr<string> scenarioId_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<string> scriptVersion_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeJobGroupResponseBodyJobGroupStrategy> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
