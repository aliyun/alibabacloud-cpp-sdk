// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/JobStatusDetailValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(job, job_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(job, job_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetJobResponseBody() = default ;
    GetJobResponseBody(const GetJobResponseBody &) = default ;
    GetJobResponseBody(GetJobResponseBody &&) = default ;
    GetJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBody() = default ;
    GetJobResponseBody& operator=(const GetJobResponseBody &) = default ;
    GetJobResponseBody& operator=(GetJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Job : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Job& obj) { 
        DARABONBA_PTR_TO_JSON(assertCheckDetail, assertCheckDetail_);
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_ANY_TO_JSON(downloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(elapsedTime, elapsedTime_);
        DARABONBA_PTR_TO_JSON(executeType, executeType_);
        DARABONBA_PTR_TO_JSON(isPassAssertCheck, isPassAssertCheck_);
        DARABONBA_PTR_TO_JSON(jobId, jobId_);
        DARABONBA_PTR_TO_JSON(jobType, jobType_);
        DARABONBA_ANY_TO_JSON(logFile, logFile_);
        DARABONBA_PTR_TO_JSON(output, output_);
        DARABONBA_ANY_TO_JSON(outputJsonPlan, outputJsonPlan_);
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusDetail, statusDetail_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskType, taskType_);
        DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Job& obj) { 
        DARABONBA_PTR_FROM_JSON(assertCheckDetail, assertCheckDetail_);
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_ANY_FROM_JSON(downloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(elapsedTime, elapsedTime_);
        DARABONBA_PTR_FROM_JSON(executeType, executeType_);
        DARABONBA_PTR_FROM_JSON(isPassAssertCheck, isPassAssertCheck_);
        DARABONBA_PTR_FROM_JSON(jobId, jobId_);
        DARABONBA_PTR_FROM_JSON(jobType, jobType_);
        DARABONBA_ANY_FROM_JSON(logFile, logFile_);
        DARABONBA_PTR_FROM_JSON(output, output_);
        DARABONBA_ANY_FROM_JSON(outputJsonPlan, outputJsonPlan_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusDetail, statusDetail_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskType, taskType_);
        DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
      };
      Job() = default ;
      Job(const Job &) = default ;
      Job(Job &&) = default ;
      Job(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Job() = default ;
      Job& operator=(const Job &) = default ;
      Job& operator=(Job &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(autoApply, autoApply_);
          DARABONBA_PTR_TO_JSON(hasConfigProactive, hasConfigProactive_);
          DARABONBA_PTR_TO_JSON(isDestroy, isDestroy_);
          DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
          DARABONBA_PTR_TO_JSON(resourcesChanged, resourcesChanged_);
          DARABONBA_PTR_TO_JSON(subCommand, subCommand_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(autoApply, autoApply_);
          DARABONBA_PTR_FROM_JSON(hasConfigProactive, hasConfigProactive_);
          DARABONBA_PTR_FROM_JSON(isDestroy, isDestroy_);
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
        virtual bool empty() const override { return this->autoApply_ == nullptr
        && this->hasConfigProactive_ == nullptr && this->isDestroy_ == nullptr && this->moduleVersion_ == nullptr && this->resourcesChanged_ == nullptr && this->subCommand_ == nullptr; };
        // autoApply Field Functions 
        bool hasAutoApply() const { return this->autoApply_ != nullptr;};
        void deleteAutoApply() { this->autoApply_ = nullptr;};
        inline bool getAutoApply() const { DARABONBA_PTR_GET_DEFAULT(autoApply_, false) };
        inline Config& setAutoApply(bool autoApply) { DARABONBA_PTR_SET_VALUE(autoApply_, autoApply) };


        // hasConfigProactive Field Functions 
        bool hasHasConfigProactive() const { return this->hasConfigProactive_ != nullptr;};
        void deleteHasConfigProactive() { this->hasConfigProactive_ = nullptr;};
        inline string getHasConfigProactive() const { DARABONBA_PTR_GET_DEFAULT(hasConfigProactive_, "") };
        inline Config& setHasConfigProactive(string hasConfigProactive) { DARABONBA_PTR_SET_VALUE(hasConfigProactive_, hasConfigProactive) };


        // isDestroy Field Functions 
        bool hasIsDestroy() const { return this->isDestroy_ != nullptr;};
        void deleteIsDestroy() { this->isDestroy_ = nullptr;};
        inline bool getIsDestroy() const { DARABONBA_PTR_GET_DEFAULT(isDestroy_, false) };
        inline Config& setIsDestroy(bool isDestroy) { DARABONBA_PTR_SET_VALUE(isDestroy_, isDestroy) };


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
        shared_ptr<bool> autoApply_ {};
        shared_ptr<string> hasConfigProactive_ {};
        shared_ptr<bool> isDestroy_ {};
        shared_ptr<string> moduleVersion_ {};
        shared_ptr<string> resourcesChanged_ {};
        shared_ptr<string> subCommand_ {};
      };

      class AssertCheckDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssertCheckDetail& obj) { 
          DARABONBA_PTR_TO_JSON(comparison, comparison_);
          DARABONBA_PTR_TO_JSON(expectedValue, expectedValue_);
          DARABONBA_PTR_TO_JSON(isPass, isPass_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AssertCheckDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(comparison, comparison_);
          DARABONBA_PTR_FROM_JSON(expectedValue, expectedValue_);
          DARABONBA_PTR_FROM_JSON(isPass, isPass_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        AssertCheckDetail() = default ;
        AssertCheckDetail(const AssertCheckDetail &) = default ;
        AssertCheckDetail(AssertCheckDetail &&) = default ;
        AssertCheckDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssertCheckDetail() = default ;
        AssertCheckDetail& operator=(const AssertCheckDetail &) = default ;
        AssertCheckDetail& operator=(AssertCheckDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comparison_ == nullptr
        && this->expectedValue_ == nullptr && this->isPass_ == nullptr && this->type_ == nullptr; };
        // comparison Field Functions 
        bool hasComparison() const { return this->comparison_ != nullptr;};
        void deleteComparison() { this->comparison_ = nullptr;};
        inline string getComparison() const { DARABONBA_PTR_GET_DEFAULT(comparison_, "") };
        inline AssertCheckDetail& setComparison(string comparison) { DARABONBA_PTR_SET_VALUE(comparison_, comparison) };


        // expectedValue Field Functions 
        bool hasExpectedValue() const { return this->expectedValue_ != nullptr;};
        void deleteExpectedValue() { this->expectedValue_ = nullptr;};
        inline string getExpectedValue() const { DARABONBA_PTR_GET_DEFAULT(expectedValue_, "") };
        inline AssertCheckDetail& setExpectedValue(string expectedValue) { DARABONBA_PTR_SET_VALUE(expectedValue_, expectedValue) };


        // isPass Field Functions 
        bool hasIsPass() const { return this->isPass_ != nullptr;};
        void deleteIsPass() { this->isPass_ = nullptr;};
        inline bool getIsPass() const { DARABONBA_PTR_GET_DEFAULT(isPass_, false) };
        inline AssertCheckDetail& setIsPass(bool isPass) { DARABONBA_PTR_SET_VALUE(isPass_, isPass) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AssertCheckDetail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> comparison_ {};
        shared_ptr<string> expectedValue_ {};
        shared_ptr<bool> isPass_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->assertCheckDetail_ == nullptr
        && this->config_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->downloadUrl_ == nullptr && this->elapsedTime_ == nullptr
        && this->executeType_ == nullptr && this->isPassAssertCheck_ == nullptr && this->jobId_ == nullptr && this->jobType_ == nullptr && this->logFile_ == nullptr
        && this->output_ == nullptr && this->outputJsonPlan_ == nullptr && this->parameters_ == nullptr && this->status_ == nullptr && this->statusDetail_ == nullptr
        && this->taskId_ == nullptr && this->taskType_ == nullptr && this->terraformProviderVersion_ == nullptr; };
      // assertCheckDetail Field Functions 
      bool hasAssertCheckDetail() const { return this->assertCheckDetail_ != nullptr;};
      void deleteAssertCheckDetail() { this->assertCheckDetail_ = nullptr;};
      inline const vector<Job::AssertCheckDetail> & getAssertCheckDetail() const { DARABONBA_PTR_GET_CONST(assertCheckDetail_, vector<Job::AssertCheckDetail>) };
      inline vector<Job::AssertCheckDetail> getAssertCheckDetail() { DARABONBA_PTR_GET(assertCheckDetail_, vector<Job::AssertCheckDetail>) };
      inline Job& setAssertCheckDetail(const vector<Job::AssertCheckDetail> & assertCheckDetail) { DARABONBA_PTR_SET_VALUE(assertCheckDetail_, assertCheckDetail) };
      inline Job& setAssertCheckDetail(vector<Job::AssertCheckDetail> && assertCheckDetail) { DARABONBA_PTR_SET_RVALUE(assertCheckDetail_, assertCheckDetail) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Job::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Job::Config) };
      inline Job::Config getConfig() { DARABONBA_PTR_GET(config_, Job::Config) };
      inline Job& setConfig(const Job::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Job& setConfig(Job::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Job& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Job& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline       const Darabonba::Json & getDownloadUrl() const { DARABONBA_GET(downloadUrl_) };
      Darabonba::Json & getDownloadUrl() { DARABONBA_GET(downloadUrl_) };
      inline Job& setDownloadUrl(const Darabonba::Json & downloadUrl) { DARABONBA_SET_VALUE(downloadUrl_, downloadUrl) };
      inline Job& setDownloadUrl(Darabonba::Json && downloadUrl) { DARABONBA_SET_RVALUE(downloadUrl_, downloadUrl) };


      // elapsedTime Field Functions 
      bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
      void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
      inline int64_t getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
      inline Job& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


      // executeType Field Functions 
      bool hasExecuteType() const { return this->executeType_ != nullptr;};
      void deleteExecuteType() { this->executeType_ = nullptr;};
      inline string getExecuteType() const { DARABONBA_PTR_GET_DEFAULT(executeType_, "") };
      inline Job& setExecuteType(string executeType) { DARABONBA_PTR_SET_VALUE(executeType_, executeType) };


      // isPassAssertCheck Field Functions 
      bool hasIsPassAssertCheck() const { return this->isPassAssertCheck_ != nullptr;};
      void deleteIsPassAssertCheck() { this->isPassAssertCheck_ = nullptr;};
      inline bool getIsPassAssertCheck() const { DARABONBA_PTR_GET_DEFAULT(isPassAssertCheck_, false) };
      inline Job& setIsPassAssertCheck(bool isPassAssertCheck) { DARABONBA_PTR_SET_VALUE(isPassAssertCheck_, isPassAssertCheck) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Job& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline Job& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // logFile Field Functions 
      bool hasLogFile() const { return this->logFile_ != nullptr;};
      void deleteLogFile() { this->logFile_ = nullptr;};
      inline       const Darabonba::Json & getLogFile() const { DARABONBA_GET(logFile_) };
      Darabonba::Json & getLogFile() { DARABONBA_GET(logFile_) };
      inline Job& setLogFile(const Darabonba::Json & logFile) { DARABONBA_SET_VALUE(logFile_, logFile) };
      inline Job& setLogFile(Darabonba::Json && logFile) { DARABONBA_SET_RVALUE(logFile_, logFile) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline Job& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      // outputJsonPlan Field Functions 
      bool hasOutputJsonPlan() const { return this->outputJsonPlan_ != nullptr;};
      void deleteOutputJsonPlan() { this->outputJsonPlan_ = nullptr;};
      inline       const Darabonba::Json & getOutputJsonPlan() const { DARABONBA_GET(outputJsonPlan_) };
      Darabonba::Json & getOutputJsonPlan() { DARABONBA_GET(outputJsonPlan_) };
      inline Job& setOutputJsonPlan(const Darabonba::Json & outputJsonPlan) { DARABONBA_SET_VALUE(outputJsonPlan_, outputJsonPlan) };
      inline Job& setOutputJsonPlan(Darabonba::Json && outputJsonPlan) { DARABONBA_SET_RVALUE(outputJsonPlan_, outputJsonPlan) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const map<string, string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
      inline map<string, string> getParameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
      inline Job& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline Job& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Job& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDetail Field Functions 
      bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
      void deleteStatusDetail() { this->statusDetail_ = nullptr;};
      inline const map<string, JobStatusDetailValue> & getStatusDetail() const { DARABONBA_PTR_GET_CONST(statusDetail_, map<string, JobStatusDetailValue>) };
      inline map<string, JobStatusDetailValue> getStatusDetail() { DARABONBA_PTR_GET(statusDetail_, map<string, JobStatusDetailValue>) };
      inline Job& setStatusDetail(const map<string, JobStatusDetailValue> & statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };
      inline Job& setStatusDetail(map<string, JobStatusDetailValue> && statusDetail) { DARABONBA_PTR_SET_RVALUE(statusDetail_, statusDetail) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Job& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Job& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // terraformProviderVersion Field Functions 
      bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
      void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
      inline string getTerraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
      inline Job& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    protected:
      shared_ptr<vector<Job::AssertCheckDetail>> assertCheckDetail_ {};
      shared_ptr<Job::Config> config_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      Darabonba::Json downloadUrl_ {};
      shared_ptr<int64_t> elapsedTime_ {};
      shared_ptr<string> executeType_ {};
      shared_ptr<bool> isPassAssertCheck_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<string> jobType_ {};
      Darabonba::Json logFile_ {};
      shared_ptr<string> output_ {};
      Darabonba::Json outputJsonPlan_ {};
      shared_ptr<map<string, string>> parameters_ {};
      shared_ptr<string> status_ {};
      shared_ptr<map<string, JobStatusDetailValue>> statusDetail_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> terraformProviderVersion_ {};
    };

    virtual bool empty() const override { return this->job_ == nullptr
        && this->requestId_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetJobResponseBody::Job & getJob() const { DARABONBA_PTR_GET_CONST(job_, GetJobResponseBody::Job) };
    inline GetJobResponseBody::Job getJob() { DARABONBA_PTR_GET(job_, GetJobResponseBody::Job) };
    inline GetJobResponseBody& setJob(const GetJobResponseBody::Job & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetJobResponseBody& setJob(GetJobResponseBody::Job && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetJobResponseBody::Job> job_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
