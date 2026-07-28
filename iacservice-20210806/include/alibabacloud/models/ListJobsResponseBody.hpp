// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/JobsStatusDetailValue.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(jobs, jobs_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListJobsResponseBody() = default ;
    ListJobsResponseBody(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody(ListJobsResponseBody &&) = default ;
    ListJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBody() = default ;
    ListJobsResponseBody& operator=(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody& operator=(ListJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Jobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(elapsedTime, elapsedTime_);
        DARABONBA_PTR_TO_JSON(executeType, executeType_);
        DARABONBA_PTR_TO_JSON(isPassAssertCheck, isPassAssertCheck_);
        DARABONBA_PTR_TO_JSON(jobId, jobId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusDetail, statusDetail_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(elapsedTime, elapsedTime_);
        DARABONBA_PTR_FROM_JSON(executeType, executeType_);
        DARABONBA_PTR_FROM_JSON(isPassAssertCheck, isPassAssertCheck_);
        DARABONBA_PTR_FROM_JSON(jobId, jobId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusDetail, statusDetail_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
      };
      Jobs() = default ;
      Jobs(const Jobs &) = default ;
      Jobs(Jobs &&) = default ;
      Jobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Jobs() = default ;
      Jobs& operator=(const Jobs &) = default ;
      Jobs& operator=(Jobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(isDestroy, isDestroy_);
          DARABONBA_PTR_TO_JSON(moduleDescription, moduleDescription_);
          DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
          DARABONBA_PTR_TO_JSON(resourcesChanged, resourcesChanged_);
          DARABONBA_PTR_TO_JSON(subCommand, subCommand_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(isDestroy, isDestroy_);
          DARABONBA_PTR_FROM_JSON(moduleDescription, moduleDescription_);
          DARABONBA_PTR_FROM_JSON(moduleVersion, moduleVersion_);
          DARABONBA_PTR_FROM_JSON(resourcesChanged, resourcesChanged_);
          DARABONBA_PTR_FROM_JSON(subCommand, subCommand_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isDestroy_ == nullptr
        && this->moduleDescription_ == nullptr && this->moduleVersion_ == nullptr && this->resourcesChanged_ == nullptr && this->subCommand_ == nullptr; };
        // isDestroy Field Functions 
        bool hasIsDestroy() const { return this->isDestroy_ != nullptr;};
        void deleteIsDestroy() { this->isDestroy_ = nullptr;};
        inline bool getIsDestroy() const { DARABONBA_PTR_GET_DEFAULT(isDestroy_, false) };
        inline Config& setIsDestroy(bool isDestroy) { DARABONBA_PTR_SET_VALUE(isDestroy_, isDestroy) };


        // moduleDescription Field Functions 
        bool hasModuleDescription() const { return this->moduleDescription_ != nullptr;};
        void deleteModuleDescription() { this->moduleDescription_ = nullptr;};
        inline string getModuleDescription() const { DARABONBA_PTR_GET_DEFAULT(moduleDescription_, "") };
        inline Config& setModuleDescription(string moduleDescription) { DARABONBA_PTR_SET_VALUE(moduleDescription_, moduleDescription) };


        // moduleVersion Field Functions 
        bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
        void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
        inline string getModuleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
        inline Config& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


        // resourcesChanged Field Functions 
        bool hasResourcesChanged() const { return this->resourcesChanged_ != nullptr;};
        void deleteResourcesChanged() { this->resourcesChanged_ = nullptr;};
        inline string getResourcesChanged() const { DARABONBA_PTR_GET_DEFAULT(resourcesChanged_, "") };
        inline Config& setResourcesChanged(string resourcesChanged) { DARABONBA_PTR_SET_VALUE(resourcesChanged_, resourcesChanged) };


        // subCommand Field Functions 
        bool hasSubCommand() const { return this->subCommand_ != nullptr;};
        void deleteSubCommand() { this->subCommand_ = nullptr;};
        inline string getSubCommand() const { DARABONBA_PTR_GET_DEFAULT(subCommand_, "") };
        inline Config& setSubCommand(string subCommand) { DARABONBA_PTR_SET_VALUE(subCommand_, subCommand) };


      protected:
        // Indicates whether the job is a destroy job.
        shared_ptr<bool> isDestroy_ {};
        // The template description.
        shared_ptr<string> moduleDescription_ {};
        // The template version.
        shared_ptr<string> moduleVersion_ {};
        // The resource change details.
        shared_ptr<string> resourcesChanged_ {};
        // The operation command.
        shared_ptr<string> subCommand_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->elapsedTime_ == nullptr && this->executeType_ == nullptr && this->isPassAssertCheck_ == nullptr
        && this->jobId_ == nullptr && this->status_ == nullptr && this->statusDetail_ == nullptr && this->taskId_ == nullptr && this->terraformProviderVersion_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Jobs::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Jobs::Config) };
      inline Jobs::Config getConfig() { DARABONBA_PTR_GET(config_, Jobs::Config) };
      inline Jobs& setConfig(const Jobs::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Jobs& setConfig(Jobs::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Jobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Jobs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // elapsedTime Field Functions 
      bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
      void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
      inline int64_t getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
      inline Jobs& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


      // executeType Field Functions 
      bool hasExecuteType() const { return this->executeType_ != nullptr;};
      void deleteExecuteType() { this->executeType_ = nullptr;};
      inline string getExecuteType() const { DARABONBA_PTR_GET_DEFAULT(executeType_, "") };
      inline Jobs& setExecuteType(string executeType) { DARABONBA_PTR_SET_VALUE(executeType_, executeType) };


      // isPassAssertCheck Field Functions 
      bool hasIsPassAssertCheck() const { return this->isPassAssertCheck_ != nullptr;};
      void deleteIsPassAssertCheck() { this->isPassAssertCheck_ = nullptr;};
      inline bool getIsPassAssertCheck() const { DARABONBA_PTR_GET_DEFAULT(isPassAssertCheck_, false) };
      inline Jobs& setIsPassAssertCheck(bool isPassAssertCheck) { DARABONBA_PTR_SET_VALUE(isPassAssertCheck_, isPassAssertCheck) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Jobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Jobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDetail Field Functions 
      bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
      void deleteStatusDetail() { this->statusDetail_ = nullptr;};
      inline const map<string, JobsStatusDetailValue> & getStatusDetail() const { DARABONBA_PTR_GET_CONST(statusDetail_, map<string, JobsStatusDetailValue>) };
      inline map<string, JobsStatusDetailValue> getStatusDetail() { DARABONBA_PTR_GET(statusDetail_, map<string, JobsStatusDetailValue>) };
      inline Jobs& setStatusDetail(const map<string, JobsStatusDetailValue> & statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };
      inline Jobs& setStatusDetail(map<string, JobsStatusDetailValue> && statusDetail) { DARABONBA_PTR_SET_RVALUE(statusDetail_, statusDetail) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Jobs& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // terraformProviderVersion Field Functions 
      bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
      void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
      inline string getTerraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
      inline Jobs& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    protected:
      // The job configuration.
      shared_ptr<Jobs::Config> config_ {};
      // The time when the job was created.
      shared_ptr<string> createTime_ {};
      // The job description.
      shared_ptr<string> description_ {};
      // The execution duration.
      shared_ptr<int64_t> elapsedTime_ {};
      // The execution type. Valid values:
      // 
      // - Manual: manual execution. This is the default value.
      // - Auto: automatic execution.
      shared_ptr<string> executeType_ {};
      // Indicates whether the assertion check passed.
      shared_ptr<bool> isPassAssertCheck_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The job status. Valid values:
      // 
      // - Pending: The initial status after the job is created.
      // - PlanQueued: After the job is created, if no workflow is available, the job is queued.
      // - Planning: The resource job is in the Plan execution phase.
      // - ConfigProactiveInProgress: Compliance pre-check is in progress. The compliance pre-check feature must be enabled for the account.
      // - ConfigProactiveSuccess: Compliance pre-check succeeded. The compliance pre-check feature must be enabled for the account.
      // - Planned: The resource job has completed the Plan execution.
      // - PlannedAndFinished: After the Plan execution is complete, no diff is found. This is a final status.
      // - Confirmed: The resource job is waiting for confirmation after the Plan execution is complete.
      // - ApplyQueued: During job execution, if no workflow is available, the job is queued.
      // - Applying: The resource job is in the Apply execution phase.
      // - Applied: The resource job has completed the Apply execution. This is a final status.
      // - Errored: The job execution encountered an error. This is a final status.
      // - Canceled: The job execution was canceled. This is a final status.
      // - Discarded: The plan of the resource job was discarded. This is a final status.
      // - ConfigProactiveFailure: Compliance pre-check failed. The compliance pre-check feature must be enabled for the account.
      shared_ptr<string> status_ {};
      // The status details.
      shared_ptr<map<string, JobsStatusDetailValue>> statusDetail_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The Terraform provider version.
      shared_ptr<string> terraformProviderVersion_ {};
    };

    virtual bool empty() const override { return this->jobs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<ListJobsResponseBody::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<ListJobsResponseBody::Jobs>) };
    inline vector<ListJobsResponseBody::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<ListJobsResponseBody::Jobs>) };
    inline ListJobsResponseBody& setJobs(const vector<ListJobsResponseBody::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline ListJobsResponseBody& setJobs(vector<ListJobsResponseBody::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of jobs.
    shared_ptr<vector<ListJobsResponseBody::Jobs>> jobs_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of results per page. Default value: 20. Minimum value: 1. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
