// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCHEDULEDTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCHEDULEDTASKSHRINKREQUEST_HPP_
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
  class ModifyScheduledTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScheduledTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(RunConfig, runConfigShrink_);
      DARABONBA_PTR_TO_JSON(ScheduledId, scheduledId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskVersion, taskVersion_);
      DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScheduledTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(RunConfig, runConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ScheduledId, scheduledId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskVersion, taskVersion_);
      DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
    };
    ModifyScheduledTaskShrinkRequest() = default ;
    ModifyScheduledTaskShrinkRequest(const ModifyScheduledTaskShrinkRequest &) = default ;
    ModifyScheduledTaskShrinkRequest(ModifyScheduledTaskShrinkRequest &&) = default ;
    ModifyScheduledTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScheduledTaskShrinkRequest() = default ;
    ModifyScheduledTaskShrinkRequest& operator=(const ModifyScheduledTaskShrinkRequest &) = default ;
    ModifyScheduledTaskShrinkRequest& operator=(ModifyScheduledTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->instanceIds_ == nullptr && this->runConfigShrink_ == nullptr && this->scheduledId_ == nullptr && this->status_ == nullptr && this->taskName_ == nullptr
        && this->taskVersion_ == nullptr && this->userPrompt_ == nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline ModifyScheduledTaskShrinkRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ModifyScheduledTaskShrinkRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ModifyScheduledTaskShrinkRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // runConfigShrink Field Functions 
    bool hasRunConfigShrink() const { return this->runConfigShrink_ != nullptr;};
    void deleteRunConfigShrink() { this->runConfigShrink_ = nullptr;};
    inline string getRunConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(runConfigShrink_, "") };
    inline ModifyScheduledTaskShrinkRequest& setRunConfigShrink(string runConfigShrink) { DARABONBA_PTR_SET_VALUE(runConfigShrink_, runConfigShrink) };


    // scheduledId Field Functions 
    bool hasScheduledId() const { return this->scheduledId_ != nullptr;};
    void deleteScheduledId() { this->scheduledId_ = nullptr;};
    inline string getScheduledId() const { DARABONBA_PTR_GET_DEFAULT(scheduledId_, "") };
    inline ModifyScheduledTaskShrinkRequest& setScheduledId(string scheduledId) { DARABONBA_PTR_SET_VALUE(scheduledId_, scheduledId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyScheduledTaskShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ModifyScheduledTaskShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskVersion Field Functions 
    bool hasTaskVersion() const { return this->taskVersion_ != nullptr;};
    void deleteTaskVersion() { this->taskVersion_ = nullptr;};
    inline int32_t getTaskVersion() const { DARABONBA_PTR_GET_DEFAULT(taskVersion_, 0) };
    inline ModifyScheduledTaskShrinkRequest& setTaskVersion(int32_t taskVersion) { DARABONBA_PTR_SET_VALUE(taskVersion_, taskVersion) };


    // userPrompt Field Functions 
    bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
    void deleteUserPrompt() { this->userPrompt_ = nullptr;};
    inline string getUserPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
    inline ModifyScheduledTaskShrinkRequest& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


  protected:
    // The cron expression.
    shared_ptr<string> cronExpression_ {};
    // The list of instance IDs.
    shared_ptr<vector<string>> instanceIds_ {};
    // The run configuration.
    shared_ptr<string> runConfigShrink_ {};
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
