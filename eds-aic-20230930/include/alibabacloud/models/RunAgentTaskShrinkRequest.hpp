// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAGENTTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNAGENTTASKSHRINKREQUEST_HPP_
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
  class RunAgentTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAgentTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MaxSteps, maxSteps_);
      DARABONBA_PTR_TO_JSON(RunConfig, runConfigShrink_);
      DARABONBA_PTR_TO_JSON(SaveArtifacts, saveArtifacts_);
      DARABONBA_PTR_TO_JSON(ScheduleId, scheduleId_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(TaskConfigId, taskConfigId_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, RunAgentTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MaxSteps, maxSteps_);
      DARABONBA_PTR_FROM_JSON(RunConfig, runConfigShrink_);
      DARABONBA_PTR_FROM_JSON(SaveArtifacts, saveArtifacts_);
      DARABONBA_PTR_FROM_JSON(ScheduleId, scheduleId_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(TaskConfigId, taskConfigId_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
    };
    RunAgentTaskShrinkRequest() = default ;
    RunAgentTaskShrinkRequest(const RunAgentTaskShrinkRequest &) = default ;
    RunAgentTaskShrinkRequest(RunAgentTaskShrinkRequest &&) = default ;
    RunAgentTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAgentTaskShrinkRequest() = default ;
    RunAgentTaskShrinkRequest& operator=(const RunAgentTaskShrinkRequest &) = default ;
    RunAgentTaskShrinkRequest& operator=(RunAgentTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Targets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Targets& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Targets& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      };
      Targets() = default ;
      Targets(const Targets &) = default ;
      Targets(Targets &&) = default ;
      Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Targets() = default ;
      Targets& operator=(const Targets &) = default ;
      Targets& operator=(Targets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->sessionId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Targets& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Targets& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      // The ID of the Mobile node, such as acp-xxx.
      shared_ptr<string> instanceId_ {};
      // The session ID. Tasks with the same session ID share the context, such as ses-260702-21b****.
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->instanceIds_ == nullptr && this->maxSteps_ == nullptr && this->runConfigShrink_ == nullptr && this->saveArtifacts_ == nullptr && this->scheduleId_ == nullptr
        && this->targets_ == nullptr && this->taskConfigId_ == nullptr && this->timeoutSeconds_ == nullptr && this->userPrompt_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline RunAgentTaskShrinkRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RunAgentTaskShrinkRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RunAgentTaskShrinkRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // maxSteps Field Functions 
    bool hasMaxSteps() const { return this->maxSteps_ != nullptr;};
    void deleteMaxSteps() { this->maxSteps_ = nullptr;};
    inline int32_t getMaxSteps() const { DARABONBA_PTR_GET_DEFAULT(maxSteps_, 0) };
    inline RunAgentTaskShrinkRequest& setMaxSteps(int32_t maxSteps) { DARABONBA_PTR_SET_VALUE(maxSteps_, maxSteps) };


    // runConfigShrink Field Functions 
    bool hasRunConfigShrink() const { return this->runConfigShrink_ != nullptr;};
    void deleteRunConfigShrink() { this->runConfigShrink_ = nullptr;};
    inline string getRunConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(runConfigShrink_, "") };
    inline RunAgentTaskShrinkRequest& setRunConfigShrink(string runConfigShrink) { DARABONBA_PTR_SET_VALUE(runConfigShrink_, runConfigShrink) };


    // saveArtifacts Field Functions 
    bool hasSaveArtifacts() const { return this->saveArtifacts_ != nullptr;};
    void deleteSaveArtifacts() { this->saveArtifacts_ = nullptr;};
    inline bool getSaveArtifacts() const { DARABONBA_PTR_GET_DEFAULT(saveArtifacts_, false) };
    inline RunAgentTaskShrinkRequest& setSaveArtifacts(bool saveArtifacts) { DARABONBA_PTR_SET_VALUE(saveArtifacts_, saveArtifacts) };


    // scheduleId Field Functions 
    bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
    void deleteScheduleId() { this->scheduleId_ = nullptr;};
    inline string getScheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, "") };
    inline RunAgentTaskShrinkRequest& setScheduleId(string scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<RunAgentTaskShrinkRequest::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<RunAgentTaskShrinkRequest::Targets>) };
    inline vector<RunAgentTaskShrinkRequest::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<RunAgentTaskShrinkRequest::Targets>) };
    inline RunAgentTaskShrinkRequest& setTargets(const vector<RunAgentTaskShrinkRequest::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline RunAgentTaskShrinkRequest& setTargets(vector<RunAgentTaskShrinkRequest::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // taskConfigId Field Functions 
    bool hasTaskConfigId() const { return this->taskConfigId_ != nullptr;};
    void deleteTaskConfigId() { this->taskConfigId_ = nullptr;};
    inline string getTaskConfigId() const { DARABONBA_PTR_GET_DEFAULT(taskConfigId_, "") };
    inline RunAgentTaskShrinkRequest& setTaskConfigId(string taskConfigId) { DARABONBA_PTR_SET_VALUE(taskConfigId_, taskConfigId) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline RunAgentTaskShrinkRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


    // userPrompt Field Functions 
    bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
    void deleteUserPrompt() { this->userPrompt_ = nullptr;};
    inline string getUserPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
    inline RunAgentTaskShrinkRequest& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


  protected:
    // The ID of the region where the Mobile node resides.
    shared_ptr<string> bizRegionId_ {};
    // The list of Mobile node IDs. A single request supports up to 100 nodes.
    shared_ptr<vector<string>> instanceIds_ {};
    // The maximum number of execution steps for the task to prevent infinite loops. Valid values: 50 to 1000. Default value: 50.
    shared_ptr<int32_t> maxSteps_ {};
    // The runtime configuration that contains the runtime parameters such as skills for the current task.
    shared_ptr<string> runConfigShrink_ {};
    // Specifies whether to save the task artifacts to your OSS.
    shared_ptr<bool> saveArtifacts_ {};
    // The ID of the scheduling plan. When specified, the execute record is associated with the corresponding scheduled node, which facilitates aggregate query by scheduling aggregation dimension.
    shared_ptr<string> scheduleId_ {};
    // The list of targets. Each element is an object that contains an InstanceId and a SessionId.
    shared_ptr<vector<RunAgentTaskShrinkRequest::Targets>> targets_ {};
    // The ID of the task configuration. This parameter is used to trigger a task with the specified configuration.
    shared_ptr<string> taskConfigId_ {};
    // The timeout period of the task in seconds. Valid values: 300 to 3600. Default value: 3600.
    shared_ptr<int32_t> timeoutSeconds_ {};
    // The user prompt in natural language. The agent performs operations based on this prompt.
    shared_ptr<string> userPrompt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
