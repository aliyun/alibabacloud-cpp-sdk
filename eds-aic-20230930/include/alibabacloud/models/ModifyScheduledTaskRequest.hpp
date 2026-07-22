// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCHEDULEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCHEDULEDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyScheduledTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScheduledTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(RunConfig, runConfig_);
      DARABONBA_PTR_TO_JSON(ScheduledId, scheduledId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskVersion, taskVersion_);
      DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScheduledTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(RunConfig, runConfig_);
      DARABONBA_PTR_FROM_JSON(ScheduledId, scheduledId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskVersion, taskVersion_);
      DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
    };
    ModifyScheduledTaskRequest() = default ;
    ModifyScheduledTaskRequest(const ModifyScheduledTaskRequest &) = default ;
    ModifyScheduledTaskRequest(ModifyScheduledTaskRequest &&) = default ;
    ModifyScheduledTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScheduledTaskRequest() = default ;
    ModifyScheduledTaskRequest& operator=(const ModifyScheduledTaskRequest &) = default ;
    ModifyScheduledTaskRequest& operator=(ModifyScheduledTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RunConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RunConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ExtraParams, extraParams_);
        DARABONBA_PTR_TO_JSON(MaxSteps, maxSteps_);
        DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
      };
      friend void from_json(const Darabonba::Json& j, RunConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ExtraParams, extraParams_);
        DARABONBA_PTR_FROM_JSON(MaxSteps, maxSteps_);
        DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
      };
      RunConfig() = default ;
      RunConfig(const RunConfig &) = default ;
      RunConfig(RunConfig &&) = default ;
      RunConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RunConfig() = default ;
      RunConfig& operator=(const RunConfig &) = default ;
      RunConfig& operator=(RunConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->extraParams_ == nullptr
        && this->maxSteps_ == nullptr && this->timeoutSeconds_ == nullptr; };
      // extraParams Field Functions 
      bool hasExtraParams() const { return this->extraParams_ != nullptr;};
      void deleteExtraParams() { this->extraParams_ = nullptr;};
      inline string getExtraParams() const { DARABONBA_PTR_GET_DEFAULT(extraParams_, "") };
      inline RunConfig& setExtraParams(string extraParams) { DARABONBA_PTR_SET_VALUE(extraParams_, extraParams) };


      // maxSteps Field Functions 
      bool hasMaxSteps() const { return this->maxSteps_ != nullptr;};
      void deleteMaxSteps() { this->maxSteps_ = nullptr;};
      inline int32_t getMaxSteps() const { DARABONBA_PTR_GET_DEFAULT(maxSteps_, 0) };
      inline RunConfig& setMaxSteps(int32_t maxSteps) { DARABONBA_PTR_SET_VALUE(maxSteps_, maxSteps) };


      // timeoutSeconds Field Functions 
      bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
      void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
      inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
      inline RunConfig& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


    protected:
      // The extended parameters as a JSON string.
      shared_ptr<string> extraParams_ {};
      // The maximum number of execution steps.
      shared_ptr<int32_t> maxSteps_ {};
      // The timeout in seconds.
      shared_ptr<int32_t> timeoutSeconds_ {};
    };

    virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->instanceIds_ == nullptr && this->runConfig_ == nullptr && this->scheduledId_ == nullptr && this->status_ == nullptr && this->taskName_ == nullptr
        && this->taskVersion_ == nullptr && this->userPrompt_ == nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline ModifyScheduledTaskRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ModifyScheduledTaskRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ModifyScheduledTaskRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // runConfig Field Functions 
    bool hasRunConfig() const { return this->runConfig_ != nullptr;};
    void deleteRunConfig() { this->runConfig_ = nullptr;};
    inline const ModifyScheduledTaskRequest::RunConfig & getRunConfig() const { DARABONBA_PTR_GET_CONST(runConfig_, ModifyScheduledTaskRequest::RunConfig) };
    inline ModifyScheduledTaskRequest::RunConfig getRunConfig() { DARABONBA_PTR_GET(runConfig_, ModifyScheduledTaskRequest::RunConfig) };
    inline ModifyScheduledTaskRequest& setRunConfig(const ModifyScheduledTaskRequest::RunConfig & runConfig) { DARABONBA_PTR_SET_VALUE(runConfig_, runConfig) };
    inline ModifyScheduledTaskRequest& setRunConfig(ModifyScheduledTaskRequest::RunConfig && runConfig) { DARABONBA_PTR_SET_RVALUE(runConfig_, runConfig) };


    // scheduledId Field Functions 
    bool hasScheduledId() const { return this->scheduledId_ != nullptr;};
    void deleteScheduledId() { this->scheduledId_ = nullptr;};
    inline string getScheduledId() const { DARABONBA_PTR_GET_DEFAULT(scheduledId_, "") };
    inline ModifyScheduledTaskRequest& setScheduledId(string scheduledId) { DARABONBA_PTR_SET_VALUE(scheduledId_, scheduledId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyScheduledTaskRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ModifyScheduledTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskVersion Field Functions 
    bool hasTaskVersion() const { return this->taskVersion_ != nullptr;};
    void deleteTaskVersion() { this->taskVersion_ = nullptr;};
    inline int32_t getTaskVersion() const { DARABONBA_PTR_GET_DEFAULT(taskVersion_, 0) };
    inline ModifyScheduledTaskRequest& setTaskVersion(int32_t taskVersion) { DARABONBA_PTR_SET_VALUE(taskVersion_, taskVersion) };


    // userPrompt Field Functions 
    bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
    void deleteUserPrompt() { this->userPrompt_ = nullptr;};
    inline string getUserPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
    inline ModifyScheduledTaskRequest& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


  protected:
    // The cron expression.
    shared_ptr<string> cronExpression_ {};
    // The list of instance IDs.
    shared_ptr<vector<string>> instanceIds_ {};
    // The run configuration.
    shared_ptr<ModifyScheduledTaskRequest::RunConfig> runConfig_ {};
    // The scheduled task ID.
    // 
    // This parameter is required.
    shared_ptr<string> scheduledId_ {};
    // The status switch: ACTIVE/DISABLED.
    shared_ptr<string> status_ {};
    // The task name.
    shared_ptr<string> taskName_ {};
    // The CAS version number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> taskVersion_ {};
    // The user prompt.
    shared_ptr<string> userPrompt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
