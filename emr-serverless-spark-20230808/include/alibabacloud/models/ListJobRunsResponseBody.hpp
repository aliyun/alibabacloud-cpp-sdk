// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRUNSRESPONSEBODY_HPP_
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
  class ListJobRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(jobRuns, jobRuns_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(jobRuns, jobRuns_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListJobRunsResponseBody() = default ;
    ListJobRunsResponseBody(const ListJobRunsResponseBody &) = default ;
    ListJobRunsResponseBody(ListJobRunsResponseBody &&) = default ;
    ListJobRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobRunsResponseBody() = default ;
    ListJobRunsResponseBody& operator=(const ListJobRunsResponseBody &) = default ;
    ListJobRunsResponseBody& operator=(ListJobRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobRuns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobRuns& obj) { 
        DARABONBA_PTR_TO_JSON(codeType, codeType_);
        DARABONBA_PTR_TO_JSON(configurationOverrides, configurationOverrides_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(cuHours, cuHours_);
        DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(executionTimeoutSeconds, executionTimeoutSeconds_);
        DARABONBA_PTR_TO_JSON(fusion, fusion_);
        DARABONBA_PTR_TO_JSON(jobDriver, jobDriver_);
        DARABONBA_PTR_TO_JSON(jobRunId, jobRunId_);
        DARABONBA_PTR_TO_JSON(log, log_);
        DARABONBA_PTR_TO_JSON(mbSeconds, mbSeconds_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
        DARABONBA_PTR_TO_JSON(resourceQueueId, resourceQueueId_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(stateChangeReason, stateChangeReason_);
        DARABONBA_PTR_TO_JSON(submitTime, submitTime_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(vcoreSeconds, vcoreSeconds_);
        DARABONBA_PTR_TO_JSON(webUI, webUI_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, JobRuns& obj) { 
        DARABONBA_PTR_FROM_JSON(codeType, codeType_);
        DARABONBA_PTR_FROM_JSON(configurationOverrides, configurationOverrides_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(cuHours, cuHours_);
        DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(executionTimeoutSeconds, executionTimeoutSeconds_);
        DARABONBA_PTR_FROM_JSON(fusion, fusion_);
        DARABONBA_PTR_FROM_JSON(jobDriver, jobDriver_);
        DARABONBA_PTR_FROM_JSON(jobRunId, jobRunId_);
        DARABONBA_PTR_FROM_JSON(log, log_);
        DARABONBA_PTR_FROM_JSON(mbSeconds, mbSeconds_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
        DARABONBA_PTR_FROM_JSON(resourceQueueId, resourceQueueId_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(stateChangeReason, stateChangeReason_);
        DARABONBA_PTR_FROM_JSON(submitTime, submitTime_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(vcoreSeconds, vcoreSeconds_);
        DARABONBA_PTR_FROM_JSON(webUI, webUI_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      JobRuns() = default ;
      JobRuns(const JobRuns &) = default ;
      JobRuns(JobRuns &&) = default ;
      JobRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobRuns() = default ;
      JobRuns& operator=(const JobRuns &) = default ;
      JobRuns& operator=(JobRuns &&) = default ;
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
        // The SparkConf objects.
        shared_ptr<vector<Configuration>> configurations_ {};
      };

      virtual bool empty() const override { return this->codeType_ == nullptr
        && this->configurationOverrides_ == nullptr && this->creator_ == nullptr && this->cuHours_ == nullptr && this->displayReleaseVersion_ == nullptr && this->endTime_ == nullptr
        && this->executionTimeoutSeconds_ == nullptr && this->fusion_ == nullptr && this->jobDriver_ == nullptr && this->jobRunId_ == nullptr && this->log_ == nullptr
        && this->mbSeconds_ == nullptr && this->name_ == nullptr && this->releaseVersion_ == nullptr && this->resourceQueueId_ == nullptr && this->state_ == nullptr
        && this->stateChangeReason_ == nullptr && this->submitTime_ == nullptr && this->tags_ == nullptr && this->vcoreSeconds_ == nullptr && this->webUI_ == nullptr
        && this->workspaceId_ == nullptr; };
      // codeType Field Functions 
      bool hasCodeType() const { return this->codeType_ != nullptr;};
      void deleteCodeType() { this->codeType_ = nullptr;};
      inline string getCodeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
      inline JobRuns& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


      // configurationOverrides Field Functions 
      bool hasConfigurationOverrides() const { return this->configurationOverrides_ != nullptr;};
      void deleteConfigurationOverrides() { this->configurationOverrides_ = nullptr;};
      inline const JobRuns::ConfigurationOverrides & getConfigurationOverrides() const { DARABONBA_PTR_GET_CONST(configurationOverrides_, JobRuns::ConfigurationOverrides) };
      inline JobRuns::ConfigurationOverrides getConfigurationOverrides() { DARABONBA_PTR_GET(configurationOverrides_, JobRuns::ConfigurationOverrides) };
      inline JobRuns& setConfigurationOverrides(const JobRuns::ConfigurationOverrides & configurationOverrides) { DARABONBA_PTR_SET_VALUE(configurationOverrides_, configurationOverrides) };
      inline JobRuns& setConfigurationOverrides(JobRuns::ConfigurationOverrides && configurationOverrides) { DARABONBA_PTR_SET_RVALUE(configurationOverrides_, configurationOverrides) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline JobRuns& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // cuHours Field Functions 
      bool hasCuHours() const { return this->cuHours_ != nullptr;};
      void deleteCuHours() { this->cuHours_ = nullptr;};
      inline double getCuHours() const { DARABONBA_PTR_GET_DEFAULT(cuHours_, 0.0) };
      inline JobRuns& setCuHours(double cuHours) { DARABONBA_PTR_SET_VALUE(cuHours_, cuHours) };


      // displayReleaseVersion Field Functions 
      bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
      void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
      inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
      inline JobRuns& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline JobRuns& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // executionTimeoutSeconds Field Functions 
      bool hasExecutionTimeoutSeconds() const { return this->executionTimeoutSeconds_ != nullptr;};
      void deleteExecutionTimeoutSeconds() { this->executionTimeoutSeconds_ = nullptr;};
      inline int32_t getExecutionTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(executionTimeoutSeconds_, 0) };
      inline JobRuns& setExecutionTimeoutSeconds(int32_t executionTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(executionTimeoutSeconds_, executionTimeoutSeconds) };


      // fusion Field Functions 
      bool hasFusion() const { return this->fusion_ != nullptr;};
      void deleteFusion() { this->fusion_ = nullptr;};
      inline bool getFusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
      inline JobRuns& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


      // jobDriver Field Functions 
      bool hasJobDriver() const { return this->jobDriver_ != nullptr;};
      void deleteJobDriver() { this->jobDriver_ = nullptr;};
      inline const JobDriver & getJobDriver() const { DARABONBA_PTR_GET_CONST(jobDriver_, JobDriver) };
      inline JobDriver getJobDriver() { DARABONBA_PTR_GET(jobDriver_, JobDriver) };
      inline JobRuns& setJobDriver(const JobDriver & jobDriver) { DARABONBA_PTR_SET_VALUE(jobDriver_, jobDriver) };
      inline JobRuns& setJobDriver(JobDriver && jobDriver) { DARABONBA_PTR_SET_RVALUE(jobDriver_, jobDriver) };


      // jobRunId Field Functions 
      bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
      void deleteJobRunId() { this->jobRunId_ = nullptr;};
      inline string getJobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
      inline JobRuns& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


      // log Field Functions 
      bool hasLog() const { return this->log_ != nullptr;};
      void deleteLog() { this->log_ = nullptr;};
      inline const RunLog & getLog() const { DARABONBA_PTR_GET_CONST(log_, RunLog) };
      inline RunLog getLog() { DARABONBA_PTR_GET(log_, RunLog) };
      inline JobRuns& setLog(const RunLog & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
      inline JobRuns& setLog(RunLog && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


      // mbSeconds Field Functions 
      bool hasMbSeconds() const { return this->mbSeconds_ != nullptr;};
      void deleteMbSeconds() { this->mbSeconds_ = nullptr;};
      inline int64_t getMbSeconds() const { DARABONBA_PTR_GET_DEFAULT(mbSeconds_, 0L) };
      inline JobRuns& setMbSeconds(int64_t mbSeconds) { DARABONBA_PTR_SET_VALUE(mbSeconds_, mbSeconds) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline JobRuns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // releaseVersion Field Functions 
      bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
      void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
      inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
      inline JobRuns& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


      // resourceQueueId Field Functions 
      bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
      void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
      inline string getResourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
      inline JobRuns& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline JobRuns& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // stateChangeReason Field Functions 
      bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
      void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
      inline const JobRuns::StateChangeReason & getStateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, JobRuns::StateChangeReason) };
      inline JobRuns::StateChangeReason getStateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, JobRuns::StateChangeReason) };
      inline JobRuns& setStateChangeReason(const JobRuns::StateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
      inline JobRuns& setStateChangeReason(JobRuns::StateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline int64_t getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, 0L) };
      inline JobRuns& setSubmitTime(int64_t submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
      inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
      inline JobRuns& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline JobRuns& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vcoreSeconds Field Functions 
      bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
      void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
      inline int64_t getVcoreSeconds() const { DARABONBA_PTR_GET_DEFAULT(vcoreSeconds_, 0L) };
      inline JobRuns& setVcoreSeconds(int64_t vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };


      // webUI Field Functions 
      bool hasWebUI() const { return this->webUI_ != nullptr;};
      void deleteWebUI() { this->webUI_ = nullptr;};
      inline string getWebUI() const { DARABONBA_PTR_GET_DEFAULT(webUI_, "") };
      inline JobRuns& setWebUI(string webUI) { DARABONBA_PTR_SET_VALUE(webUI_, webUI) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline JobRuns& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The code type of the job. Valid values:
      // 
      // SQL
      // 
      // JAR
      // 
      // PYTHON
      shared_ptr<string> codeType_ {};
      // The advanced configurations of Spark.
      shared_ptr<JobRuns::ConfigurationOverrides> configurationOverrides_ {};
      // The ID of the user who created the job.
      shared_ptr<string> creator_ {};
      // The number of CUs consumed during a specified cycle of a task. The value is an estimated value. Refer to your Alibaba Cloud bill for the actual number of consumed CUs.
      shared_ptr<double> cuHours_ {};
      // The version of Spark on which the jobs run.
      shared_ptr<string> displayReleaseVersion_ {};
      // The end time of the job.
      shared_ptr<int64_t> endTime_ {};
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
      // The total amount of memory allocated to the job multiplied by the running duration (seconds).
      shared_ptr<int64_t> mbSeconds_ {};
      // The job name.
      shared_ptr<string> name_ {};
      // The version of Spark on which the jobs run.
      shared_ptr<string> releaseVersion_ {};
      shared_ptr<string> resourceQueueId_ {};
      // The job state.
      shared_ptr<string> state_ {};
      // The reason of the job status change.
      shared_ptr<JobRuns::StateChangeReason> stateChangeReason_ {};
      // The time when the job was submitted.
      shared_ptr<int64_t> submitTime_ {};
      // The tags of the job.
      shared_ptr<vector<Tag>> tags_ {};
      // The total number of CPU cores allocated to the job multiplied by the running duration (seconds).
      shared_ptr<int64_t> vcoreSeconds_ {};
      // The web UI of the job.
      shared_ptr<string> webUI_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->jobRuns_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // jobRuns Field Functions 
    bool hasJobRuns() const { return this->jobRuns_ != nullptr;};
    void deleteJobRuns() { this->jobRuns_ = nullptr;};
    inline const vector<ListJobRunsResponseBody::JobRuns> & getJobRuns() const { DARABONBA_PTR_GET_CONST(jobRuns_, vector<ListJobRunsResponseBody::JobRuns>) };
    inline vector<ListJobRunsResponseBody::JobRuns> getJobRuns() { DARABONBA_PTR_GET(jobRuns_, vector<ListJobRunsResponseBody::JobRuns>) };
    inline ListJobRunsResponseBody& setJobRuns(const vector<ListJobRunsResponseBody::JobRuns> & jobRuns) { DARABONBA_PTR_SET_VALUE(jobRuns_, jobRuns) };
    inline ListJobRunsResponseBody& setJobRuns(vector<ListJobRunsResponseBody::JobRuns> && jobRuns) { DARABONBA_PTR_SET_RVALUE(jobRuns_, jobRuns) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListJobRunsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListJobRunsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobRunsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListJobRunsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The Spark jobs.
    shared_ptr<vector<ListJobRunsResponseBody::JobRuns>> jobRuns_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
