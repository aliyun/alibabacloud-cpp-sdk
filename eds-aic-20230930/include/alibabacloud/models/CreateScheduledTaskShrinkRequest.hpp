// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKSHRINKREQUEST_HPP_
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
  class CreateScheduledTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MaxExecutions, maxExecutions_);
      DARABONBA_PTR_TO_JSON(RunConfig, runConfigShrink_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MaxExecutions, maxExecutions_);
      DARABONBA_PTR_FROM_JSON(RunConfig, runConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
    };
    CreateScheduledTaskShrinkRequest() = default ;
    CreateScheduledTaskShrinkRequest(const CreateScheduledTaskShrinkRequest &) = default ;
    CreateScheduledTaskShrinkRequest(CreateScheduledTaskShrinkRequest &&) = default ;
    CreateScheduledTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledTaskShrinkRequest() = default ;
    CreateScheduledTaskShrinkRequest& operator=(const CreateScheduledTaskShrinkRequest &) = default ;
    CreateScheduledTaskShrinkRequest& operator=(CreateScheduledTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->instanceIds_ == nullptr && this->maxExecutions_ == nullptr && this->runConfigShrink_ == nullptr && this->taskName_ == nullptr && this->userPrompt_ == nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline CreateScheduledTaskShrinkRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline CreateScheduledTaskShrinkRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateScheduledTaskShrinkRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // maxExecutions Field Functions 
    bool hasMaxExecutions() const { return this->maxExecutions_ != nullptr;};
    void deleteMaxExecutions() { this->maxExecutions_ = nullptr;};
    inline int32_t getMaxExecutions() const { DARABONBA_PTR_GET_DEFAULT(maxExecutions_, 0) };
    inline CreateScheduledTaskShrinkRequest& setMaxExecutions(int32_t maxExecutions) { DARABONBA_PTR_SET_VALUE(maxExecutions_, maxExecutions) };


    // runConfigShrink Field Functions 
    bool hasRunConfigShrink() const { return this->runConfigShrink_ != nullptr;};
    void deleteRunConfigShrink() { this->runConfigShrink_ = nullptr;};
    inline string getRunConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(runConfigShrink_, "") };
    inline CreateScheduledTaskShrinkRequest& setRunConfigShrink(string runConfigShrink) { DARABONBA_PTR_SET_VALUE(runConfigShrink_, runConfigShrink) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateScheduledTaskShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // userPrompt Field Functions 
    bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
    void deleteUserPrompt() { this->userPrompt_ = nullptr;};
    inline string getUserPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
    inline CreateScheduledTaskShrinkRequest& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


  protected:
    // This parameter is required.
    shared_ptr<string> cronExpression_ {};
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<int32_t> maxExecutions_ {};
    shared_ptr<string> runConfigShrink_ {};
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // This parameter is required.
    shared_ptr<string> userPrompt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
