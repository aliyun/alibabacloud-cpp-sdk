// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKREQUEST_HPP_
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
  class CreateScheduledTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MaxExecutions, maxExecutions_);
      DARABONBA_PTR_TO_JSON(RunConfig, runConfig_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MaxExecutions, maxExecutions_);
      DARABONBA_PTR_FROM_JSON(RunConfig, runConfig_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
    };
    CreateScheduledTaskRequest() = default ;
    CreateScheduledTaskRequest(const CreateScheduledTaskRequest &) = default ;
    CreateScheduledTaskRequest(CreateScheduledTaskRequest &&) = default ;
    CreateScheduledTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledTaskRequest() = default ;
    CreateScheduledTaskRequest& operator=(const CreateScheduledTaskRequest &) = default ;
    CreateScheduledTaskRequest& operator=(CreateScheduledTaskRequest &&) = default ;
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
      shared_ptr<string> extraParams_ {};
      shared_ptr<int32_t> maxSteps_ {};
      shared_ptr<int32_t> timeoutSeconds_ {};
    };

    virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->instanceIds_ == nullptr && this->maxExecutions_ == nullptr && this->runConfig_ == nullptr && this->taskName_ == nullptr && this->userPrompt_ == nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline CreateScheduledTaskRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline CreateScheduledTaskRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateScheduledTaskRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // maxExecutions Field Functions 
    bool hasMaxExecutions() const { return this->maxExecutions_ != nullptr;};
    void deleteMaxExecutions() { this->maxExecutions_ = nullptr;};
    inline int32_t getMaxExecutions() const { DARABONBA_PTR_GET_DEFAULT(maxExecutions_, 0) };
    inline CreateScheduledTaskRequest& setMaxExecutions(int32_t maxExecutions) { DARABONBA_PTR_SET_VALUE(maxExecutions_, maxExecutions) };


    // runConfig Field Functions 
    bool hasRunConfig() const { return this->runConfig_ != nullptr;};
    void deleteRunConfig() { this->runConfig_ = nullptr;};
    inline const CreateScheduledTaskRequest::RunConfig & getRunConfig() const { DARABONBA_PTR_GET_CONST(runConfig_, CreateScheduledTaskRequest::RunConfig) };
    inline CreateScheduledTaskRequest::RunConfig getRunConfig() { DARABONBA_PTR_GET(runConfig_, CreateScheduledTaskRequest::RunConfig) };
    inline CreateScheduledTaskRequest& setRunConfig(const CreateScheduledTaskRequest::RunConfig & runConfig) { DARABONBA_PTR_SET_VALUE(runConfig_, runConfig) };
    inline CreateScheduledTaskRequest& setRunConfig(CreateScheduledTaskRequest::RunConfig && runConfig) { DARABONBA_PTR_SET_RVALUE(runConfig_, runConfig) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateScheduledTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // userPrompt Field Functions 
    bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
    void deleteUserPrompt() { this->userPrompt_ = nullptr;};
    inline string getUserPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
    inline CreateScheduledTaskRequest& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


  protected:
    // This parameter is required.
    shared_ptr<string> cronExpression_ {};
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<int32_t> maxExecutions_ {};
    shared_ptr<CreateScheduledTaskRequest::RunConfig> runConfig_ {};
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // This parameter is required.
    shared_ptr<string> userPrompt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
