// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAGENTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNAGENTTASKREQUEST_HPP_
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
  class RunAgentTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAgentTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MaxSteps, maxSteps_);
      DARABONBA_PTR_TO_JSON(RunConfig, runConfig_);
      DARABONBA_PTR_TO_JSON(SaveArtifacts, saveArtifacts_);
      DARABONBA_PTR_TO_JSON(ScheduleId, scheduleId_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(TaskConfigId, taskConfigId_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, RunAgentTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MaxSteps, maxSteps_);
      DARABONBA_PTR_FROM_JSON(RunConfig, runConfig_);
      DARABONBA_PTR_FROM_JSON(SaveArtifacts, saveArtifacts_);
      DARABONBA_PTR_FROM_JSON(ScheduleId, scheduleId_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(TaskConfigId, taskConfigId_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
    };
    RunAgentTaskRequest() = default ;
    RunAgentTaskRequest(const RunAgentTaskRequest &) = default ;
    RunAgentTaskRequest(RunAgentTaskRequest &&) = default ;
    RunAgentTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAgentTaskRequest() = default ;
    RunAgentTaskRequest& operator=(const RunAgentTaskRequest &) = default ;
    RunAgentTaskRequest& operator=(RunAgentTaskRequest &&) = default ;
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
      // The Mobile node ID, such as acp-xxx.
      shared_ptr<string> instanceId_ {};
      // The session ID. Tasks with the same session ID share context, such as ses-260702-21b****.
      shared_ptr<string> sessionId_ {};
    };

    class RunConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RunConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Skills, skills_);
      };
      friend void from_json(const Darabonba::Json& j, RunConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Skills, skills_);
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
      virtual bool empty() const override { return this->skills_ == nullptr; };
      // skills Field Functions 
      bool hasSkills() const { return this->skills_ != nullptr;};
      void deleteSkills() { this->skills_ = nullptr;};
      inline const vector<string> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<string>) };
      inline vector<string> getSkills() { DARABONBA_PTR_GET(skills_, vector<string>) };
      inline RunConfig& setSkills(const vector<string> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
      inline RunConfig& setSkills(vector<string> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


    protected:
      // The list of skill IDs. A maximum of 10 skill IDs are supported. Only the first skill is passed through during command delivery. All skills are stored in task_skill_relation for reverse lookup.
      shared_ptr<vector<string>> skills_ {};
    };

    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->instanceIds_ == nullptr && this->maxSteps_ == nullptr && this->runConfig_ == nullptr && this->saveArtifacts_ == nullptr && this->scheduleId_ == nullptr
        && this->targets_ == nullptr && this->taskConfigId_ == nullptr && this->timeoutSeconds_ == nullptr && this->userPrompt_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline RunAgentTaskRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RunAgentTaskRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RunAgentTaskRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // maxSteps Field Functions 
    bool hasMaxSteps() const { return this->maxSteps_ != nullptr;};
    void deleteMaxSteps() { this->maxSteps_ = nullptr;};
    inline int32_t getMaxSteps() const { DARABONBA_PTR_GET_DEFAULT(maxSteps_, 0) };
    inline RunAgentTaskRequest& setMaxSteps(int32_t maxSteps) { DARABONBA_PTR_SET_VALUE(maxSteps_, maxSteps) };


    // runConfig Field Functions 
    bool hasRunConfig() const { return this->runConfig_ != nullptr;};
    void deleteRunConfig() { this->runConfig_ = nullptr;};
    inline const RunAgentTaskRequest::RunConfig & getRunConfig() const { DARABONBA_PTR_GET_CONST(runConfig_, RunAgentTaskRequest::RunConfig) };
    inline RunAgentTaskRequest::RunConfig getRunConfig() { DARABONBA_PTR_GET(runConfig_, RunAgentTaskRequest::RunConfig) };
    inline RunAgentTaskRequest& setRunConfig(const RunAgentTaskRequest::RunConfig & runConfig) { DARABONBA_PTR_SET_VALUE(runConfig_, runConfig) };
    inline RunAgentTaskRequest& setRunConfig(RunAgentTaskRequest::RunConfig && runConfig) { DARABONBA_PTR_SET_RVALUE(runConfig_, runConfig) };


    // saveArtifacts Field Functions 
    bool hasSaveArtifacts() const { return this->saveArtifacts_ != nullptr;};
    void deleteSaveArtifacts() { this->saveArtifacts_ = nullptr;};
    inline bool getSaveArtifacts() const { DARABONBA_PTR_GET_DEFAULT(saveArtifacts_, false) };
    inline RunAgentTaskRequest& setSaveArtifacts(bool saveArtifacts) { DARABONBA_PTR_SET_VALUE(saveArtifacts_, saveArtifacts) };


    // scheduleId Field Functions 
    bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
    void deleteScheduleId() { this->scheduleId_ = nullptr;};
    inline string getScheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, "") };
    inline RunAgentTaskRequest& setScheduleId(string scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<RunAgentTaskRequest::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<RunAgentTaskRequest::Targets>) };
    inline vector<RunAgentTaskRequest::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<RunAgentTaskRequest::Targets>) };
    inline RunAgentTaskRequest& setTargets(const vector<RunAgentTaskRequest::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline RunAgentTaskRequest& setTargets(vector<RunAgentTaskRequest::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // taskConfigId Field Functions 
    bool hasTaskConfigId() const { return this->taskConfigId_ != nullptr;};
    void deleteTaskConfigId() { this->taskConfigId_ = nullptr;};
    inline string getTaskConfigId() const { DARABONBA_PTR_GET_DEFAULT(taskConfigId_, "") };
    inline RunAgentTaskRequest& setTaskConfigId(string taskConfigId) { DARABONBA_PTR_SET_VALUE(taskConfigId_, taskConfigId) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline RunAgentTaskRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


    // userPrompt Field Functions 
    bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
    void deleteUserPrompt() { this->userPrompt_ = nullptr;};
    inline string getUserPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
    inline RunAgentTaskRequest& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


  protected:
    // The region ID of the Mobile node.
    shared_ptr<string> bizRegionId_ {};
    // The list of Mobile node IDs. A maximum of 100 nodes are supported per request.
    shared_ptr<vector<string>> instanceIds_ {};
    // The maximum number of execution steps for the task. This prevents infinite loops. Valid values: 30 to 1000. Default value: 1000.
    shared_ptr<int32_t> maxSteps_ {};
    // The runtime configuration that carries the runtime parameters (skills) for this task.
    shared_ptr<RunAgentTaskRequest::RunConfig> runConfig_ {};
    // Specifies whether to write the task artifacts to the user\\"s OSS bucket.
    shared_ptr<bool> saveArtifacts_ {};
    // The scheduling plan ID. When specified, the execution record is associated with the corresponding scheduled node, which facilitates aggregate query by scheduling dimension through aggregation.
    shared_ptr<string> scheduleId_ {};
    // An array of target objects. Each element contains an InstanceId and a SessionId.
    shared_ptr<vector<RunAgentTaskRequest::Targets>> targets_ {};
    // The task configuration ID. This parameter is used to trigger a task with the specified configuration.
    shared_ptr<string> taskConfigId_ {};
    // The task timeout period, in seconds. Valid values: 300 to 3600. Default value: 3600.
    shared_ptr<int32_t> timeoutSeconds_ {};
    // The user instruction in natural language. The Agent performs operations based on this instruction.
    shared_ptr<string> userPrompt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
