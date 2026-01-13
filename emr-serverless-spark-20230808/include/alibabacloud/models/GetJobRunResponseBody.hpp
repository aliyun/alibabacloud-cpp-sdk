// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Configuration.hpp>
#include <alibabacloud/models/JobDriver.hpp>
#include <alibabacloud/models/RunLog.hpp>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetJobRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(jobRun, jobRun_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(jobRun, jobRun_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetJobRunResponseBody() = default ;
    GetJobRunResponseBody(const GetJobRunResponseBody &) = default ;
    GetJobRunResponseBody(GetJobRunResponseBody &&) = default ;
    GetJobRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobRunResponseBody() = default ;
    GetJobRunResponseBody& operator=(const GetJobRunResponseBody &) = default ;
    GetJobRunResponseBody& operator=(GetJobRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobRun : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobRun& obj) { 
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
        DARABONBA_PTR_TO_JSON(notebookAccessUrl, notebookAccessUrl_);
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
      friend void from_json(const Darabonba::Json& j, JobRun& obj) { 
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
        DARABONBA_PTR_FROM_JSON(notebookAccessUrl, notebookAccessUrl_);
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
      JobRun() = default ;
      JobRun(const JobRun &) = default ;
      JobRun(JobRun &&) = default ;
      JobRun(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobRun() = default ;
      JobRun& operator=(const JobRun &) = default ;
      JobRun& operator=(JobRun &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StateChangeReason : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StateChangeReason& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, StateChangeReason& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        StateChangeReason() = default ;
        StateChangeReason(const StateChangeReason &) = default ;
        StateChangeReason(StateChangeReason &&) = default ;
        StateChangeReason(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StateChangeReason() = default ;
        StateChangeReason& operator=(const StateChangeReason &) = default ;
        StateChangeReason& operator=(StateChangeReason &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline StateChangeReason& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline StateChangeReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The error code.
        shared_ptr<string> code_ {};
        // The error message.
        shared_ptr<string> message_ {};
      };

      class ConfigurationOverrides : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigurationOverrides& obj) { 
          DARABONBA_PTR_TO_JSON(configurations, configurations_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigurationOverrides& obj) { 
          DARABONBA_PTR_FROM_JSON(configurations, configurations_);
        };
        ConfigurationOverrides() = default ;
        ConfigurationOverrides(const ConfigurationOverrides &) = default ;
        ConfigurationOverrides(ConfigurationOverrides &&) = default ;
        ConfigurationOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigurationOverrides() = default ;
        ConfigurationOverrides& operator=(const ConfigurationOverrides &) = default ;
        ConfigurationOverrides& operator=(ConfigurationOverrides &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configurations_ == nullptr; };
        // configurations Field Functions 
        bool hasConfigurations() const { return this->configurations_ != nullptr;};
        void deleteConfigurations() { this->configurations_ = nullptr;};
        inline const vector<Configuration> & getConfigurations() const { DARABONBA_PTR_GET_CONST(configurations_, vector<Configuration>) };
        inline vector<Configuration> getConfigurations() { DARABONBA_PTR_GET(configurations_, vector<Configuration>) };
        inline ConfigurationOverrides& setConfigurations(const vector<Configuration> & configurations) { DARABONBA_PTR_SET_VALUE(configurations_, configurations) };
        inline ConfigurationOverrides& setConfigurations(vector<Configuration> && configurations) { DARABONBA_PTR_SET_RVALUE(configurations_, configurations) };


      protected:
        // The configurations.
        shared_ptr<vector<Configuration>> configurations_ {};
      };

      virtual bool empty() const override { return this->codeType_ == nullptr
        && this->configurationOverrides_ == nullptr && this->displayReleaseVersion_ == nullptr && this->endTime_ == nullptr && this->environmentId_ == nullptr && this->executionTimeoutSeconds_ == nullptr
        && this->fusion_ == nullptr && this->jobDriver_ == nullptr && this->jobRunId_ == nullptr && this->log_ == nullptr && this->name_ == nullptr
        && this->notebookAccessUrl_ == nullptr && this->releaseVersion_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceQueueId_ == nullptr && this->state_ == nullptr
        && this->stateChangeReason_ == nullptr && this->submitTime_ == nullptr && this->tags_ == nullptr && this->webUI_ == nullptr && this->workspaceId_ == nullptr; };
      // codeType Field Functions 
      bool hasCodeType() const { return this->codeType_ != nullptr;};
      void deleteCodeType() { this->codeType_ = nullptr;};
      inline string getCodeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
      inline JobRun& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


      // configurationOverrides Field Functions 
      bool hasConfigurationOverrides() const { return this->configurationOverrides_ != nullptr;};
      void deleteConfigurationOverrides() { this->configurationOverrides_ = nullptr;};
      inline const JobRun::ConfigurationOverrides & getConfigurationOverrides() const { DARABONBA_PTR_GET_CONST(configurationOverrides_, JobRun::ConfigurationOverrides) };
      inline JobRun::ConfigurationOverrides getConfigurationOverrides() { DARABONBA_PTR_GET(configurationOverrides_, JobRun::ConfigurationOverrides) };
      inline JobRun& setConfigurationOverrides(const JobRun::ConfigurationOverrides & configurationOverrides) { DARABONBA_PTR_SET_VALUE(configurationOverrides_, configurationOverrides) };
      inline JobRun& setConfigurationOverrides(JobRun::ConfigurationOverrides && configurationOverrides) { DARABONBA_PTR_SET_RVALUE(configurationOverrides_, configurationOverrides) };


      // displayReleaseVersion Field Functions 
      bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
      void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
      inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
      inline JobRun& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline JobRun& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline JobRun& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // executionTimeoutSeconds Field Functions 
      bool hasExecutionTimeoutSeconds() const { return this->executionTimeoutSeconds_ != nullptr;};
      void deleteExecutionTimeoutSeconds() { this->executionTimeoutSeconds_ = nullptr;};
      inline int32_t getExecutionTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(executionTimeoutSeconds_, 0) };
      inline JobRun& setExecutionTimeoutSeconds(int32_t executionTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(executionTimeoutSeconds_, executionTimeoutSeconds) };


      // fusion Field Functions 
      bool hasFusion() const { return this->fusion_ != nullptr;};
      void deleteFusion() { this->fusion_ = nullptr;};
      inline bool getFusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
      inline JobRun& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


      // jobDriver Field Functions 
      bool hasJobDriver() const { return this->jobDriver_ != nullptr;};
      void deleteJobDriver() { this->jobDriver_ = nullptr;};
      inline const JobDriver & getJobDriver() const { DARABONBA_PTR_GET_CONST(jobDriver_, JobDriver) };
      inline JobDriver getJobDriver() { DARABONBA_PTR_GET(jobDriver_, JobDriver) };
      inline JobRun& setJobDriver(const JobDriver & jobDriver) { DARABONBA_PTR_SET_VALUE(jobDriver_, jobDriver) };
      inline JobRun& setJobDriver(JobDriver && jobDriver) { DARABONBA_PTR_SET_RVALUE(jobDriver_, jobDriver) };


      // jobRunId Field Functions 
      bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
      void deleteJobRunId() { this->jobRunId_ = nullptr;};
      inline string getJobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
      inline JobRun& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


      // log Field Functions 
      bool hasLog() const { return this->log_ != nullptr;};
      void deleteLog() { this->log_ = nullptr;};
      inline const RunLog & getLog() const { DARABONBA_PTR_GET_CONST(log_, RunLog) };
      inline RunLog getLog() { DARABONBA_PTR_GET(log_, RunLog) };
      inline JobRun& setLog(const RunLog & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
      inline JobRun& setLog(RunLog && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline JobRun& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notebookAccessUrl Field Functions 
      bool hasNotebookAccessUrl() const { return this->notebookAccessUrl_ != nullptr;};
      void deleteNotebookAccessUrl() { this->notebookAccessUrl_ = nullptr;};
      inline string getNotebookAccessUrl() const { DARABONBA_PTR_GET_DEFAULT(notebookAccessUrl_, "") };
      inline JobRun& setNotebookAccessUrl(string notebookAccessUrl) { DARABONBA_PTR_SET_VALUE(notebookAccessUrl_, notebookAccessUrl) };


      // releaseVersion Field Functions 
      bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
      void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
      inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
      inline JobRun& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


      // resourceOwnerId Field Functions 
      bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
      void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
      inline string getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
      inline JobRun& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


      // resourceQueueId Field Functions 
      bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
      void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
      inline string getResourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
      inline JobRun& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline JobRun& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // stateChangeReason Field Functions 
      bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
      void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
      inline const JobRun::StateChangeReason & getStateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, JobRun::StateChangeReason) };
      inline JobRun::StateChangeReason getStateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, JobRun::StateChangeReason) };
      inline JobRun& setStateChangeReason(const JobRun::StateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
      inline JobRun& setStateChangeReason(JobRun::StateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline int64_t getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, 0L) };
      inline JobRun& setSubmitTime(int64_t submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
      inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
      inline JobRun& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline JobRun& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // webUI Field Functions 
      bool hasWebUI() const { return this->webUI_ != nullptr;};
      void deleteWebUI() { this->webUI_ = nullptr;};
      inline string getWebUI() const { DARABONBA_PTR_GET_DEFAULT(webUI_, "") };
      inline JobRun& setWebUI(string webUI) { DARABONBA_PTR_SET_VALUE(webUI_, webUI) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline JobRun& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The code type of the job. Valid values:
      // 
      // *   SQL
      // *   JAR
      // *   PYTHON
      shared_ptr<string> codeType_ {};
      // The configurations of the Spark jobs.
      shared_ptr<JobRun::ConfigurationOverrides> configurationOverrides_ {};
      // The version of the Spark engine.
      shared_ptr<string> displayReleaseVersion_ {};
      // The end time of the job.
      shared_ptr<int64_t> endTime_ {};
      // The environment ID.
      shared_ptr<string> environmentId_ {};
      // The timeout period of the job.
      shared_ptr<int32_t> executionTimeoutSeconds_ {};
      // Indicates whether the Fusion engine is used for acceleration.
      shared_ptr<bool> fusion_ {};
      // The information about Spark Driver.
      shared_ptr<JobDriver> jobDriver_ {};
      // The job ID.
      shared_ptr<string> jobRunId_ {};
      // The path where the operational logs are stored.
      shared_ptr<RunLog> log_ {};
      // The job name.
      shared_ptr<string> name_ {};
      shared_ptr<string> notebookAccessUrl_ {};
      // The version of the Spark engine on which the job runs.
      shared_ptr<string> releaseVersion_ {};
      // The ID of the user who created the job.
      shared_ptr<string> resourceOwnerId_ {};
      // The name of the queue on which the job runs.
      shared_ptr<string> resourceQueueId_ {};
      // The job state.
      shared_ptr<string> state_ {};
      // The reason of the job status change.
      shared_ptr<JobRun::StateChangeReason> stateChangeReason_ {};
      // The time when the job was submitted.
      shared_ptr<int64_t> submitTime_ {};
      // The tags of the job.
      shared_ptr<vector<Tag>> tags_ {};
      // The web UI of the job.
      shared_ptr<string> webUI_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->jobRun_ == nullptr
        && this->requestId_ == nullptr; };
    // jobRun Field Functions 
    bool hasJobRun() const { return this->jobRun_ != nullptr;};
    void deleteJobRun() { this->jobRun_ = nullptr;};
    inline const GetJobRunResponseBody::JobRun & getJobRun() const { DARABONBA_PTR_GET_CONST(jobRun_, GetJobRunResponseBody::JobRun) };
    inline GetJobRunResponseBody::JobRun getJobRun() { DARABONBA_PTR_GET(jobRun_, GetJobRunResponseBody::JobRun) };
    inline GetJobRunResponseBody& setJobRun(const GetJobRunResponseBody::JobRun & jobRun) { DARABONBA_PTR_SET_VALUE(jobRun_, jobRun) };
    inline GetJobRunResponseBody& setJobRun(GetJobRunResponseBody::JobRun && jobRun) { DARABONBA_PTR_SET_RVALUE(jobRun_, jobRun) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the job.
    shared_ptr<GetJobRunResponseBody::JobRun> jobRun_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
