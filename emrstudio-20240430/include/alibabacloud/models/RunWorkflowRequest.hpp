// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class RunWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertGroupId, alertGroupId_);
      DARABONBA_PTR_TO_JSON(alertStrategy, alertStrategy_);
      DARABONBA_PTR_TO_JSON(complementDependentMode, complementDependentMode_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(execType, execType_);
      DARABONBA_PTR_TO_JSON(expectedParallelismNumber, expectedParallelismNumber_);
      DARABONBA_PTR_TO_JSON(failureStrategy, failureStrategy_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(runMode, runMode_);
      DARABONBA_PTR_TO_JSON(scheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(startParams, startParams_);
      DARABONBA_PTR_TO_JSON(workflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(workflowInstancePriority, workflowInstancePriority_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertGroupId, alertGroupId_);
      DARABONBA_PTR_FROM_JSON(alertStrategy, alertStrategy_);
      DARABONBA_PTR_FROM_JSON(complementDependentMode, complementDependentMode_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(execType, execType_);
      DARABONBA_PTR_FROM_JSON(expectedParallelismNumber, expectedParallelismNumber_);
      DARABONBA_PTR_FROM_JSON(failureStrategy, failureStrategy_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(runMode, runMode_);
      DARABONBA_PTR_FROM_JSON(scheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(startParams, startParams_);
      DARABONBA_PTR_FROM_JSON(workflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(workflowInstancePriority, workflowInstancePriority_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    RunWorkflowRequest() = default ;
    RunWorkflowRequest(const RunWorkflowRequest &) = default ;
    RunWorkflowRequest(RunWorkflowRequest &&) = default ;
    RunWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWorkflowRequest() = default ;
    RunWorkflowRequest& operator=(const RunWorkflowRequest &) = default ;
    RunWorkflowRequest& operator=(RunWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertGroupId_ == nullptr
        && return this->alertStrategy_ == nullptr && return this->complementDependentMode_ == nullptr && return this->dryRun_ == nullptr && return this->execType_ == nullptr && return this->expectedParallelismNumber_ == nullptr
        && return this->failureStrategy_ == nullptr && return this->resourceGroupId_ == nullptr && return this->runMode_ == nullptr && return this->scheduleTime_ == nullptr && return this->startParams_ == nullptr
        && return this->workflowId_ == nullptr && return this->workflowInstancePriority_ == nullptr && return this->workspaceId_ == nullptr; };
    // alertGroupId Field Functions 
    bool hasAlertGroupId() const { return this->alertGroupId_ != nullptr;};
    void deleteAlertGroupId() { this->alertGroupId_ = nullptr;};
    inline string alertGroupId() const { DARABONBA_PTR_GET_DEFAULT(alertGroupId_, "") };
    inline RunWorkflowRequest& setAlertGroupId(string alertGroupId) { DARABONBA_PTR_SET_VALUE(alertGroupId_, alertGroupId) };


    // alertStrategy Field Functions 
    bool hasAlertStrategy() const { return this->alertStrategy_ != nullptr;};
    void deleteAlertStrategy() { this->alertStrategy_ = nullptr;};
    inline string alertStrategy() const { DARABONBA_PTR_GET_DEFAULT(alertStrategy_, "") };
    inline RunWorkflowRequest& setAlertStrategy(string alertStrategy) { DARABONBA_PTR_SET_VALUE(alertStrategy_, alertStrategy) };


    // complementDependentMode Field Functions 
    bool hasComplementDependentMode() const { return this->complementDependentMode_ != nullptr;};
    void deleteComplementDependentMode() { this->complementDependentMode_ = nullptr;};
    inline string complementDependentMode() const { DARABONBA_PTR_GET_DEFAULT(complementDependentMode_, "") };
    inline RunWorkflowRequest& setComplementDependentMode(string complementDependentMode) { DARABONBA_PTR_SET_VALUE(complementDependentMode_, complementDependentMode) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline RunWorkflowRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // execType Field Functions 
    bool hasExecType() const { return this->execType_ != nullptr;};
    void deleteExecType() { this->execType_ = nullptr;};
    inline string execType() const { DARABONBA_PTR_GET_DEFAULT(execType_, "") };
    inline RunWorkflowRequest& setExecType(string execType) { DARABONBA_PTR_SET_VALUE(execType_, execType) };


    // expectedParallelismNumber Field Functions 
    bool hasExpectedParallelismNumber() const { return this->expectedParallelismNumber_ != nullptr;};
    void deleteExpectedParallelismNumber() { this->expectedParallelismNumber_ = nullptr;};
    inline string expectedParallelismNumber() const { DARABONBA_PTR_GET_DEFAULT(expectedParallelismNumber_, "") };
    inline RunWorkflowRequest& setExpectedParallelismNumber(string expectedParallelismNumber) { DARABONBA_PTR_SET_VALUE(expectedParallelismNumber_, expectedParallelismNumber) };


    // failureStrategy Field Functions 
    bool hasFailureStrategy() const { return this->failureStrategy_ != nullptr;};
    void deleteFailureStrategy() { this->failureStrategy_ = nullptr;};
    inline string failureStrategy() const { DARABONBA_PTR_GET_DEFAULT(failureStrategy_, "") };
    inline RunWorkflowRequest& setFailureStrategy(string failureStrategy) { DARABONBA_PTR_SET_VALUE(failureStrategy_, failureStrategy) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RunWorkflowRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string runMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline RunWorkflowRequest& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline RunWorkflowRequest& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // startParams Field Functions 
    bool hasStartParams() const { return this->startParams_ != nullptr;};
    void deleteStartParams() { this->startParams_ = nullptr;};
    inline string startParams() const { DARABONBA_PTR_GET_DEFAULT(startParams_, "") };
    inline RunWorkflowRequest& setStartParams(string startParams) { DARABONBA_PTR_SET_VALUE(startParams_, startParams) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline RunWorkflowRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowInstancePriority Field Functions 
    bool hasWorkflowInstancePriority() const { return this->workflowInstancePriority_ != nullptr;};
    void deleteWorkflowInstancePriority() { this->workflowInstancePriority_ = nullptr;};
    inline string workflowInstancePriority() const { DARABONBA_PTR_GET_DEFAULT(workflowInstancePriority_, "") };
    inline RunWorkflowRequest& setWorkflowInstancePriority(string workflowInstancePriority) { DARABONBA_PTR_SET_VALUE(workflowInstancePriority_, workflowInstancePriority) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunWorkflowRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> alertGroupId_ = nullptr;
    std::shared_ptr<string> alertStrategy_ = nullptr;
    std::shared_ptr<string> complementDependentMode_ = nullptr;
    std::shared_ptr<string> dryRun_ = nullptr;
    std::shared_ptr<string> execType_ = nullptr;
    std::shared_ptr<string> expectedParallelismNumber_ = nullptr;
    std::shared_ptr<string> failureStrategy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> runMode_ = nullptr;
    std::shared_ptr<string> scheduleTime_ = nullptr;
    std::shared_ptr<string> startParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workflowId_ = nullptr;
    std::shared_ptr<string> workflowInstancePriority_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
