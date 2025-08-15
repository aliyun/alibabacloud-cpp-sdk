// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRUNRESPONSEBODYJOBRUN_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRUNRESPONSEBODYJOBRUN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobRunResponseBodyJobRunConfigurationOverrides.hpp>
#include <alibabacloud/models/JobDriver.hpp>
#include <alibabacloud/models/RunLog.hpp>
#include <alibabacloud/models/GetJobRunResponseBodyJobRunStateChangeReason.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetJobRunResponseBodyJobRun : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobRunResponseBodyJobRun& obj) { 
      DARABONBA_PTR_TO_JSON(codeType, codeType_);
      DARABONBA_PTR_TO_JSON(configurationOverrides, configurationOverrides_);
      DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(executionTimeoutSeconds, executionTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(fusion, fusion_);
      DARABONBA_PTR_TO_JSON(jobDriver, jobDriver_);
      DARABONBA_PTR_TO_JSON(jobRunId, jobRunId_);
      DARABONBA_PTR_TO_JSON(log, log_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(resourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(stateChangeReason, stateChangeReason_);
      DARABONBA_PTR_TO_JSON(submitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(webUI, webUI_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobRunResponseBodyJobRun& obj) { 
      DARABONBA_PTR_FROM_JSON(codeType, codeType_);
      DARABONBA_PTR_FROM_JSON(configurationOverrides, configurationOverrides_);
      DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(executionTimeoutSeconds, executionTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(fusion, fusion_);
      DARABONBA_PTR_FROM_JSON(jobDriver, jobDriver_);
      DARABONBA_PTR_FROM_JSON(jobRunId, jobRunId_);
      DARABONBA_PTR_FROM_JSON(log, log_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(resourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(stateChangeReason, stateChangeReason_);
      DARABONBA_PTR_FROM_JSON(submitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(webUI, webUI_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    GetJobRunResponseBodyJobRun() = default ;
    GetJobRunResponseBodyJobRun(const GetJobRunResponseBodyJobRun &) = default ;
    GetJobRunResponseBodyJobRun(GetJobRunResponseBodyJobRun &&) = default ;
    GetJobRunResponseBodyJobRun(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobRunResponseBodyJobRun() = default ;
    GetJobRunResponseBodyJobRun& operator=(const GetJobRunResponseBodyJobRun &) = default ;
    GetJobRunResponseBodyJobRun& operator=(GetJobRunResponseBodyJobRun &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeType_ != nullptr
        && this->configurationOverrides_ != nullptr && this->displayReleaseVersion_ != nullptr && this->endTime_ != nullptr && this->environmentId_ != nullptr && this->executionTimeoutSeconds_ != nullptr
        && this->fusion_ != nullptr && this->jobDriver_ != nullptr && this->jobRunId_ != nullptr && this->log_ != nullptr && this->name_ != nullptr
        && this->releaseVersion_ != nullptr && this->resourceOwnerId_ != nullptr && this->resourceQueueId_ != nullptr && this->state_ != nullptr && this->stateChangeReason_ != nullptr
        && this->submitTime_ != nullptr && this->tags_ != nullptr && this->webUI_ != nullptr && this->workspaceId_ != nullptr; };
    // codeType Field Functions 
    bool hasCodeType() const { return this->codeType_ != nullptr;};
    void deleteCodeType() { this->codeType_ = nullptr;};
    inline string codeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
    inline GetJobRunResponseBodyJobRun& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


    // configurationOverrides Field Functions 
    bool hasConfigurationOverrides() const { return this->configurationOverrides_ != nullptr;};
    void deleteConfigurationOverrides() { this->configurationOverrides_ = nullptr;};
    inline const Models::GetJobRunResponseBodyJobRunConfigurationOverrides & configurationOverrides() const { DARABONBA_PTR_GET_CONST(configurationOverrides_, Models::GetJobRunResponseBodyJobRunConfigurationOverrides) };
    inline Models::GetJobRunResponseBodyJobRunConfigurationOverrides configurationOverrides() { DARABONBA_PTR_GET(configurationOverrides_, Models::GetJobRunResponseBodyJobRunConfigurationOverrides) };
    inline GetJobRunResponseBodyJobRun& setConfigurationOverrides(const Models::GetJobRunResponseBodyJobRunConfigurationOverrides & configurationOverrides) { DARABONBA_PTR_SET_VALUE(configurationOverrides_, configurationOverrides) };
    inline GetJobRunResponseBodyJobRun& setConfigurationOverrides(Models::GetJobRunResponseBodyJobRunConfigurationOverrides && configurationOverrides) { DARABONBA_PTR_SET_RVALUE(configurationOverrides_, configurationOverrides) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string displayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline GetJobRunResponseBodyJobRun& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetJobRunResponseBodyJobRun& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline GetJobRunResponseBodyJobRun& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // executionTimeoutSeconds Field Functions 
    bool hasExecutionTimeoutSeconds() const { return this->executionTimeoutSeconds_ != nullptr;};
    void deleteExecutionTimeoutSeconds() { this->executionTimeoutSeconds_ = nullptr;};
    inline int32_t executionTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(executionTimeoutSeconds_, 0) };
    inline GetJobRunResponseBodyJobRun& setExecutionTimeoutSeconds(int32_t executionTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(executionTimeoutSeconds_, executionTimeoutSeconds) };


    // fusion Field Functions 
    bool hasFusion() const { return this->fusion_ != nullptr;};
    void deleteFusion() { this->fusion_ = nullptr;};
    inline bool fusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
    inline GetJobRunResponseBodyJobRun& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


    // jobDriver Field Functions 
    bool hasJobDriver() const { return this->jobDriver_ != nullptr;};
    void deleteJobDriver() { this->jobDriver_ = nullptr;};
    inline const Models::JobDriver & jobDriver() const { DARABONBA_PTR_GET_CONST(jobDriver_, Models::JobDriver) };
    inline Models::JobDriver jobDriver() { DARABONBA_PTR_GET(jobDriver_, Models::JobDriver) };
    inline GetJobRunResponseBodyJobRun& setJobDriver(const Models::JobDriver & jobDriver) { DARABONBA_PTR_SET_VALUE(jobDriver_, jobDriver) };
    inline GetJobRunResponseBodyJobRun& setJobDriver(Models::JobDriver && jobDriver) { DARABONBA_PTR_SET_RVALUE(jobDriver_, jobDriver) };


    // jobRunId Field Functions 
    bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
    void deleteJobRunId() { this->jobRunId_ = nullptr;};
    inline string jobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
    inline GetJobRunResponseBodyJobRun& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline const Models::RunLog & log() const { DARABONBA_PTR_GET_CONST(log_, Models::RunLog) };
    inline Models::RunLog log() { DARABONBA_PTR_GET(log_, Models::RunLog) };
    inline GetJobRunResponseBodyJobRun& setLog(const Models::RunLog & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
    inline GetJobRunResponseBodyJobRun& setLog(Models::RunLog && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetJobRunResponseBodyJobRun& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline GetJobRunResponseBodyJobRun& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline GetJobRunResponseBodyJobRun& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceQueueId Field Functions 
    bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
    void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
    inline string resourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
    inline GetJobRunResponseBodyJobRun& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetJobRunResponseBodyJobRun& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // stateChangeReason Field Functions 
    bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
    void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
    inline const Models::GetJobRunResponseBodyJobRunStateChangeReason & stateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, Models::GetJobRunResponseBodyJobRunStateChangeReason) };
    inline Models::GetJobRunResponseBodyJobRunStateChangeReason stateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, Models::GetJobRunResponseBodyJobRunStateChangeReason) };
    inline GetJobRunResponseBodyJobRun& setStateChangeReason(const Models::GetJobRunResponseBodyJobRunStateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
    inline GetJobRunResponseBodyJobRun& setStateChangeReason(Models::GetJobRunResponseBodyJobRunStateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline int64_t submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, 0L) };
    inline GetJobRunResponseBodyJobRun& setSubmitTime(int64_t submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::Tag>) };
    inline vector<Models::Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Models::Tag>) };
    inline GetJobRunResponseBodyJobRun& setTags(const vector<Models::Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetJobRunResponseBodyJobRun& setTags(vector<Models::Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // webUI Field Functions 
    bool hasWebUI() const { return this->webUI_ != nullptr;};
    void deleteWebUI() { this->webUI_ = nullptr;};
    inline string webUI() const { DARABONBA_PTR_GET_DEFAULT(webUI_, "") };
    inline GetJobRunResponseBodyJobRun& setWebUI(string webUI) { DARABONBA_PTR_SET_VALUE(webUI_, webUI) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetJobRunResponseBodyJobRun& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The code type of the job. Valid values:
    // 
    // *   SQL
    // *   JAR
    // *   PYTHON
    std::shared_ptr<string> codeType_ = nullptr;
    // The configurations of the Spark jobs.
    std::shared_ptr<Models::GetJobRunResponseBodyJobRunConfigurationOverrides> configurationOverrides_ = nullptr;
    // The version of the Spark engine.
    std::shared_ptr<string> displayReleaseVersion_ = nullptr;
    // The end time of the job.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The timeout period of the job.
    std::shared_ptr<int32_t> executionTimeoutSeconds_ = nullptr;
    // Indicates whether the Fusion engine is used for acceleration.
    std::shared_ptr<bool> fusion_ = nullptr;
    // The information about Spark Driver.
    std::shared_ptr<Models::JobDriver> jobDriver_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobRunId_ = nullptr;
    // The path where the operational logs are stored.
    std::shared_ptr<Models::RunLog> log_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The version of the Spark engine on which the job runs.
    std::shared_ptr<string> releaseVersion_ = nullptr;
    // The ID of the user who created the job.
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
    // The name of the queue on which the job runs.
    std::shared_ptr<string> resourceQueueId_ = nullptr;
    // The job state.
    std::shared_ptr<string> state_ = nullptr;
    // The reason of the job status change.
    std::shared_ptr<Models::GetJobRunResponseBodyJobRunStateChangeReason> stateChangeReason_ = nullptr;
    // The time when the job was submitted.
    std::shared_ptr<int64_t> submitTime_ = nullptr;
    // The tags of the job.
    std::shared_ptr<vector<Models::Tag>> tags_ = nullptr;
    // The web UI of the job.
    std::shared_ptr<string> webUI_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
