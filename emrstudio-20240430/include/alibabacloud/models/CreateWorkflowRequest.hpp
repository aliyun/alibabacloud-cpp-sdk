// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class CreateWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertGroupId, alertGroupId_);
      DARABONBA_PTR_TO_JSON(alertStrategy, alertStrategy_);
      DARABONBA_PTR_TO_JSON(taskDefinitionJsonValue, taskDefinitionJsonValue_);
      DARABONBA_PTR_TO_JSON(taskRelationJsonValue, taskRelationJsonValue_);
      DARABONBA_PTR_TO_JSON(cronExpr, cronExpr_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executionType, executionType_);
      DARABONBA_PTR_TO_JSON(failureStrategy, failureStrategy_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parentDirectoryId, parentDirectoryId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(scheduleEndTime, scheduleEndTime_);
      DARABONBA_PTR_TO_JSON(scheduleStartTime, scheduleStartTime_);
      DARABONBA_PTR_TO_JSON(scheduleState, scheduleState_);
      DARABONBA_PTR_TO_JSON(taskDefinitionJson, taskDefinitionJson_);
      DARABONBA_PTR_TO_JSON(taskRelationJson, taskRelationJson_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(workflowInstancePriority, workflowInstancePriority_);
      DARABONBA_PTR_TO_JSON(workflowParams, workflowParams_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertGroupId, alertGroupId_);
      DARABONBA_PTR_FROM_JSON(alertStrategy, alertStrategy_);
      DARABONBA_PTR_FROM_JSON(taskDefinitionJsonValue, taskDefinitionJsonValue_);
      DARABONBA_PTR_FROM_JSON(taskRelationJsonValue, taskRelationJsonValue_);
      DARABONBA_PTR_FROM_JSON(cronExpr, cronExpr_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executionType, executionType_);
      DARABONBA_PTR_FROM_JSON(failureStrategy, failureStrategy_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parentDirectoryId, parentDirectoryId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(scheduleEndTime, scheduleEndTime_);
      DARABONBA_PTR_FROM_JSON(scheduleStartTime, scheduleStartTime_);
      DARABONBA_PTR_FROM_JSON(scheduleState, scheduleState_);
      DARABONBA_PTR_FROM_JSON(taskDefinitionJson, taskDefinitionJson_);
      DARABONBA_PTR_FROM_JSON(taskRelationJson, taskRelationJson_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(workflowInstancePriority, workflowInstancePriority_);
      DARABONBA_PTR_FROM_JSON(workflowParams, workflowParams_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    CreateWorkflowRequest() = default ;
    CreateWorkflowRequest(const CreateWorkflowRequest &) = default ;
    CreateWorkflowRequest(CreateWorkflowRequest &&) = default ;
    CreateWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowRequest() = default ;
    CreateWorkflowRequest& operator=(const CreateWorkflowRequest &) = default ;
    CreateWorkflowRequest& operator=(CreateWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertGroupId_ == nullptr
        && return this->alertStrategy_ == nullptr && return this->taskDefinitionJsonValue_ == nullptr && return this->taskRelationJsonValue_ == nullptr && return this->cronExpr_ == nullptr && return this->description_ == nullptr
        && return this->executionType_ == nullptr && return this->failureStrategy_ == nullptr && return this->name_ == nullptr && return this->parentDirectoryId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->scheduleEndTime_ == nullptr && return this->scheduleStartTime_ == nullptr && return this->scheduleState_ == nullptr && return this->taskDefinitionJson_ == nullptr && return this->taskRelationJson_ == nullptr
        && return this->timeZone_ == nullptr && return this->timeout_ == nullptr && return this->workflowInstancePriority_ == nullptr && return this->workflowParams_ == nullptr && return this->workspaceId_ == nullptr; };
    // alertGroupId Field Functions 
    bool hasAlertGroupId() const { return this->alertGroupId_ != nullptr;};
    void deleteAlertGroupId() { this->alertGroupId_ = nullptr;};
    inline string alertGroupId() const { DARABONBA_PTR_GET_DEFAULT(alertGroupId_, "") };
    inline CreateWorkflowRequest& setAlertGroupId(string alertGroupId) { DARABONBA_PTR_SET_VALUE(alertGroupId_, alertGroupId) };


    // alertStrategy Field Functions 
    bool hasAlertStrategy() const { return this->alertStrategy_ != nullptr;};
    void deleteAlertStrategy() { this->alertStrategy_ = nullptr;};
    inline string alertStrategy() const { DARABONBA_PTR_GET_DEFAULT(alertStrategy_, "") };
    inline CreateWorkflowRequest& setAlertStrategy(string alertStrategy) { DARABONBA_PTR_SET_VALUE(alertStrategy_, alertStrategy) };


    // taskDefinitionJsonValue Field Functions 
    bool hasTaskDefinitionJsonValue() const { return this->taskDefinitionJsonValue_ != nullptr;};
    void deleteTaskDefinitionJsonValue() { this->taskDefinitionJsonValue_ = nullptr;};
    inline string taskDefinitionJsonValue() const { DARABONBA_PTR_GET_DEFAULT(taskDefinitionJsonValue_, "") };
    inline CreateWorkflowRequest& setTaskDefinitionJsonValue(string taskDefinitionJsonValue) { DARABONBA_PTR_SET_VALUE(taskDefinitionJsonValue_, taskDefinitionJsonValue) };


    // taskRelationJsonValue Field Functions 
    bool hasTaskRelationJsonValue() const { return this->taskRelationJsonValue_ != nullptr;};
    void deleteTaskRelationJsonValue() { this->taskRelationJsonValue_ = nullptr;};
    inline string taskRelationJsonValue() const { DARABONBA_PTR_GET_DEFAULT(taskRelationJsonValue_, "") };
    inline CreateWorkflowRequest& setTaskRelationJsonValue(string taskRelationJsonValue) { DARABONBA_PTR_SET_VALUE(taskRelationJsonValue_, taskRelationJsonValue) };


    // cronExpr Field Functions 
    bool hasCronExpr() const { return this->cronExpr_ != nullptr;};
    void deleteCronExpr() { this->cronExpr_ = nullptr;};
    inline string cronExpr() const { DARABONBA_PTR_GET_DEFAULT(cronExpr_, "") };
    inline CreateWorkflowRequest& setCronExpr(string cronExpr) { DARABONBA_PTR_SET_VALUE(cronExpr_, cronExpr) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWorkflowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionType Field Functions 
    bool hasExecutionType() const { return this->executionType_ != nullptr;};
    void deleteExecutionType() { this->executionType_ = nullptr;};
    inline string executionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
    inline CreateWorkflowRequest& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


    // failureStrategy Field Functions 
    bool hasFailureStrategy() const { return this->failureStrategy_ != nullptr;};
    void deleteFailureStrategy() { this->failureStrategy_ = nullptr;};
    inline string failureStrategy() const { DARABONBA_PTR_GET_DEFAULT(failureStrategy_, "") };
    inline CreateWorkflowRequest& setFailureStrategy(string failureStrategy) { DARABONBA_PTR_SET_VALUE(failureStrategy_, failureStrategy) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateWorkflowRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentDirectoryId Field Functions 
    bool hasParentDirectoryId() const { return this->parentDirectoryId_ != nullptr;};
    void deleteParentDirectoryId() { this->parentDirectoryId_ = nullptr;};
    inline string parentDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(parentDirectoryId_, "") };
    inline CreateWorkflowRequest& setParentDirectoryId(string parentDirectoryId) { DARABONBA_PTR_SET_VALUE(parentDirectoryId_, parentDirectoryId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateWorkflowRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduleEndTime Field Functions 
    bool hasScheduleEndTime() const { return this->scheduleEndTime_ != nullptr;};
    void deleteScheduleEndTime() { this->scheduleEndTime_ = nullptr;};
    inline string scheduleEndTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleEndTime_, "") };
    inline CreateWorkflowRequest& setScheduleEndTime(string scheduleEndTime) { DARABONBA_PTR_SET_VALUE(scheduleEndTime_, scheduleEndTime) };


    // scheduleStartTime Field Functions 
    bool hasScheduleStartTime() const { return this->scheduleStartTime_ != nullptr;};
    void deleteScheduleStartTime() { this->scheduleStartTime_ = nullptr;};
    inline string scheduleStartTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleStartTime_, "") };
    inline CreateWorkflowRequest& setScheduleStartTime(string scheduleStartTime) { DARABONBA_PTR_SET_VALUE(scheduleStartTime_, scheduleStartTime) };


    // scheduleState Field Functions 
    bool hasScheduleState() const { return this->scheduleState_ != nullptr;};
    void deleteScheduleState() { this->scheduleState_ = nullptr;};
    inline string scheduleState() const { DARABONBA_PTR_GET_DEFAULT(scheduleState_, "") };
    inline CreateWorkflowRequest& setScheduleState(string scheduleState) { DARABONBA_PTR_SET_VALUE(scheduleState_, scheduleState) };


    // taskDefinitionJson Field Functions 
    bool hasTaskDefinitionJson() const { return this->taskDefinitionJson_ != nullptr;};
    void deleteTaskDefinitionJson() { this->taskDefinitionJson_ = nullptr;};
    inline string taskDefinitionJson() const { DARABONBA_PTR_GET_DEFAULT(taskDefinitionJson_, "") };
    inline CreateWorkflowRequest& setTaskDefinitionJson(string taskDefinitionJson) { DARABONBA_PTR_SET_VALUE(taskDefinitionJson_, taskDefinitionJson) };


    // taskRelationJson Field Functions 
    bool hasTaskRelationJson() const { return this->taskRelationJson_ != nullptr;};
    void deleteTaskRelationJson() { this->taskRelationJson_ = nullptr;};
    inline string taskRelationJson() const { DARABONBA_PTR_GET_DEFAULT(taskRelationJson_, "") };
    inline CreateWorkflowRequest& setTaskRelationJson(string taskRelationJson) { DARABONBA_PTR_SET_VALUE(taskRelationJson_, taskRelationJson) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreateWorkflowRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateWorkflowRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // workflowInstancePriority Field Functions 
    bool hasWorkflowInstancePriority() const { return this->workflowInstancePriority_ != nullptr;};
    void deleteWorkflowInstancePriority() { this->workflowInstancePriority_ = nullptr;};
    inline string workflowInstancePriority() const { DARABONBA_PTR_GET_DEFAULT(workflowInstancePriority_, "") };
    inline CreateWorkflowRequest& setWorkflowInstancePriority(string workflowInstancePriority) { DARABONBA_PTR_SET_VALUE(workflowInstancePriority_, workflowInstancePriority) };


    // workflowParams Field Functions 
    bool hasWorkflowParams() const { return this->workflowParams_ != nullptr;};
    void deleteWorkflowParams() { this->workflowParams_ = nullptr;};
    inline string workflowParams() const { DARABONBA_PTR_GET_DEFAULT(workflowParams_, "") };
    inline CreateWorkflowRequest& setWorkflowParams(string workflowParams) { DARABONBA_PTR_SET_VALUE(workflowParams_, workflowParams) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateWorkflowRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> alertGroupId_ = nullptr;
    std::shared_ptr<string> alertStrategy_ = nullptr;
    std::shared_ptr<string> taskDefinitionJsonValue_ = nullptr;
    std::shared_ptr<string> taskRelationJsonValue_ = nullptr;
    std::shared_ptr<string> cronExpr_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> executionType_ = nullptr;
    std::shared_ptr<string> failureStrategy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> parentDirectoryId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> scheduleEndTime_ = nullptr;
    std::shared_ptr<string> scheduleStartTime_ = nullptr;
    std::shared_ptr<string> scheduleState_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskDefinitionJson_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskRelationJson_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<string> workflowInstancePriority_ = nullptr;
    std::shared_ptr<string> workflowParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
