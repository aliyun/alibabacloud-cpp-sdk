// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONSRESPONSEBODYEXECUTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONSRESPONSEBODYEXECUTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExecutionsResponseBodyExecutionsCurrentTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListExecutionsResponseBodyExecutions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionsResponseBodyExecutions& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_ANY_TO_JSON(Counters, counters_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(CurrentTasks, currentTasks_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExecutedBy, executedBy_);
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(IsParent, isParent_);
      DARABONBA_PTR_TO_JSON(LastSuccessfulTriggerTime, lastSuccessfulTriggerTime_);
      DARABONBA_PTR_TO_JSON(LastTriggerOutputs, lastTriggerOutputs_);
      DARABONBA_PTR_TO_JSON(LastTriggerStatus, lastTriggerStatus_);
      DARABONBA_PTR_TO_JSON(LastTriggerStatusMessage, lastTriggerStatusMessage_);
      DARABONBA_PTR_TO_JSON(LastTriggerTime, lastTriggerTime_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(NextScheduleTime, nextScheduleTime_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ParentExecutionId, parentExecutionId_);
      DARABONBA_PTR_TO_JSON(RamRole, ramRole_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_TO_JSON(SafetyCheck, safetyCheck_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      DARABONBA_PTR_TO_JSON(WaitingStatus, waitingStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionsResponseBodyExecutions& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_ANY_FROM_JSON(Counters, counters_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(CurrentTasks, currentTasks_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExecutedBy, executedBy_);
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(IsParent, isParent_);
      DARABONBA_PTR_FROM_JSON(LastSuccessfulTriggerTime, lastSuccessfulTriggerTime_);
      DARABONBA_PTR_FROM_JSON(LastTriggerOutputs, lastTriggerOutputs_);
      DARABONBA_PTR_FROM_JSON(LastTriggerStatus, lastTriggerStatus_);
      DARABONBA_PTR_FROM_JSON(LastTriggerStatusMessage, lastTriggerStatusMessage_);
      DARABONBA_PTR_FROM_JSON(LastTriggerTime, lastTriggerTime_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(NextScheduleTime, nextScheduleTime_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ParentExecutionId, parentExecutionId_);
      DARABONBA_PTR_FROM_JSON(RamRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_FROM_JSON(SafetyCheck, safetyCheck_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      DARABONBA_PTR_FROM_JSON(WaitingStatus, waitingStatus_);
    };
    ListExecutionsResponseBodyExecutions() = default ;
    ListExecutionsResponseBodyExecutions(const ListExecutionsResponseBodyExecutions &) = default ;
    ListExecutionsResponseBodyExecutions(ListExecutionsResponseBodyExecutions &&) = default ;
    ListExecutionsResponseBodyExecutions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionsResponseBodyExecutions() = default ;
    ListExecutionsResponseBodyExecutions& operator=(const ListExecutionsResponseBodyExecutions &) = default ;
    ListExecutionsResponseBodyExecutions& operator=(ListExecutionsResponseBodyExecutions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->counters_ == nullptr && return this->createDate_ == nullptr && return this->currentTasks_ == nullptr && return this->description_ == nullptr && return this->endDate_ == nullptr
        && return this->executedBy_ == nullptr && return this->executionId_ == nullptr && return this->isParent_ == nullptr && return this->lastSuccessfulTriggerTime_ == nullptr && return this->lastTriggerOutputs_ == nullptr
        && return this->lastTriggerStatus_ == nullptr && return this->lastTriggerStatusMessage_ == nullptr && return this->lastTriggerTime_ == nullptr && return this->mode_ == nullptr && return this->nextScheduleTime_ == nullptr
        && return this->outputs_ == nullptr && return this->parameters_ == nullptr && return this->parentExecutionId_ == nullptr && return this->ramRole_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceStatus_ == nullptr && return this->safetyCheck_ == nullptr && return this->startDate_ == nullptr && return this->status_ == nullptr && return this->statusMessage_ == nullptr
        && return this->statusReason_ == nullptr && return this->tags_ == nullptr && return this->targets_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr
        && return this->templateVersion_ == nullptr && return this->updateDate_ == nullptr && return this->waitingStatus_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListExecutionsResponseBodyExecutions& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // counters Field Functions 
    bool hasCounters() const { return this->counters_ != nullptr;};
    void deleteCounters() { this->counters_ = nullptr;};
    inline     const Darabonba::Json & counters() const { DARABONBA_GET(counters_) };
    Darabonba::Json & counters() { DARABONBA_GET(counters_) };
    inline ListExecutionsResponseBodyExecutions& setCounters(const Darabonba::Json & counters) { DARABONBA_SET_VALUE(counters_, counters) };
    inline ListExecutionsResponseBodyExecutions& setCounters(Darabonba::Json & counters) { DARABONBA_SET_RVALUE(counters_, counters) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListExecutionsResponseBodyExecutions& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // currentTasks Field Functions 
    bool hasCurrentTasks() const { return this->currentTasks_ != nullptr;};
    void deleteCurrentTasks() { this->currentTasks_ = nullptr;};
    inline const vector<Models::ListExecutionsResponseBodyExecutionsCurrentTasks> & currentTasks() const { DARABONBA_PTR_GET_CONST(currentTasks_, vector<Models::ListExecutionsResponseBodyExecutionsCurrentTasks>) };
    inline vector<Models::ListExecutionsResponseBodyExecutionsCurrentTasks> currentTasks() { DARABONBA_PTR_GET(currentTasks_, vector<Models::ListExecutionsResponseBodyExecutionsCurrentTasks>) };
    inline ListExecutionsResponseBodyExecutions& setCurrentTasks(const vector<Models::ListExecutionsResponseBodyExecutionsCurrentTasks> & currentTasks) { DARABONBA_PTR_SET_VALUE(currentTasks_, currentTasks) };
    inline ListExecutionsResponseBodyExecutions& setCurrentTasks(vector<Models::ListExecutionsResponseBodyExecutionsCurrentTasks> && currentTasks) { DARABONBA_PTR_SET_RVALUE(currentTasks_, currentTasks) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListExecutionsResponseBodyExecutions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListExecutionsResponseBodyExecutions& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // executedBy Field Functions 
    bool hasExecutedBy() const { return this->executedBy_ != nullptr;};
    void deleteExecutedBy() { this->executedBy_ = nullptr;};
    inline string executedBy() const { DARABONBA_PTR_GET_DEFAULT(executedBy_, "") };
    inline ListExecutionsResponseBodyExecutions& setExecutedBy(string executedBy) { DARABONBA_PTR_SET_VALUE(executedBy_, executedBy) };


    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string executionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline ListExecutionsResponseBodyExecutions& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // isParent Field Functions 
    bool hasIsParent() const { return this->isParent_ != nullptr;};
    void deleteIsParent() { this->isParent_ = nullptr;};
    inline bool isParent() const { DARABONBA_PTR_GET_DEFAULT(isParent_, false) };
    inline ListExecutionsResponseBodyExecutions& setIsParent(bool isParent) { DARABONBA_PTR_SET_VALUE(isParent_, isParent) };


    // lastSuccessfulTriggerTime Field Functions 
    bool hasLastSuccessfulTriggerTime() const { return this->lastSuccessfulTriggerTime_ != nullptr;};
    void deleteLastSuccessfulTriggerTime() { this->lastSuccessfulTriggerTime_ = nullptr;};
    inline string lastSuccessfulTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulTriggerTime_, "") };
    inline ListExecutionsResponseBodyExecutions& setLastSuccessfulTriggerTime(string lastSuccessfulTriggerTime) { DARABONBA_PTR_SET_VALUE(lastSuccessfulTriggerTime_, lastSuccessfulTriggerTime) };


    // lastTriggerOutputs Field Functions 
    bool hasLastTriggerOutputs() const { return this->lastTriggerOutputs_ != nullptr;};
    void deleteLastTriggerOutputs() { this->lastTriggerOutputs_ = nullptr;};
    inline string lastTriggerOutputs() const { DARABONBA_PTR_GET_DEFAULT(lastTriggerOutputs_, "") };
    inline ListExecutionsResponseBodyExecutions& setLastTriggerOutputs(string lastTriggerOutputs) { DARABONBA_PTR_SET_VALUE(lastTriggerOutputs_, lastTriggerOutputs) };


    // lastTriggerStatus Field Functions 
    bool hasLastTriggerStatus() const { return this->lastTriggerStatus_ != nullptr;};
    void deleteLastTriggerStatus() { this->lastTriggerStatus_ = nullptr;};
    inline string lastTriggerStatus() const { DARABONBA_PTR_GET_DEFAULT(lastTriggerStatus_, "") };
    inline ListExecutionsResponseBodyExecutions& setLastTriggerStatus(string lastTriggerStatus) { DARABONBA_PTR_SET_VALUE(lastTriggerStatus_, lastTriggerStatus) };


    // lastTriggerStatusMessage Field Functions 
    bool hasLastTriggerStatusMessage() const { return this->lastTriggerStatusMessage_ != nullptr;};
    void deleteLastTriggerStatusMessage() { this->lastTriggerStatusMessage_ = nullptr;};
    inline string lastTriggerStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(lastTriggerStatusMessage_, "") };
    inline ListExecutionsResponseBodyExecutions& setLastTriggerStatusMessage(string lastTriggerStatusMessage) { DARABONBA_PTR_SET_VALUE(lastTriggerStatusMessage_, lastTriggerStatusMessage) };


    // lastTriggerTime Field Functions 
    bool hasLastTriggerTime() const { return this->lastTriggerTime_ != nullptr;};
    void deleteLastTriggerTime() { this->lastTriggerTime_ = nullptr;};
    inline string lastTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(lastTriggerTime_, "") };
    inline ListExecutionsResponseBodyExecutions& setLastTriggerTime(string lastTriggerTime) { DARABONBA_PTR_SET_VALUE(lastTriggerTime_, lastTriggerTime) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListExecutionsResponseBodyExecutions& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // nextScheduleTime Field Functions 
    bool hasNextScheduleTime() const { return this->nextScheduleTime_ != nullptr;};
    void deleteNextScheduleTime() { this->nextScheduleTime_ = nullptr;};
    inline string nextScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(nextScheduleTime_, "") };
    inline ListExecutionsResponseBodyExecutions& setNextScheduleTime(string nextScheduleTime) { DARABONBA_PTR_SET_VALUE(nextScheduleTime_, nextScheduleTime) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline ListExecutionsResponseBodyExecutions& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline ListExecutionsResponseBodyExecutions& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline ListExecutionsResponseBodyExecutions& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // parentExecutionId Field Functions 
    bool hasParentExecutionId() const { return this->parentExecutionId_ != nullptr;};
    void deleteParentExecutionId() { this->parentExecutionId_ = nullptr;};
    inline string parentExecutionId() const { DARABONBA_PTR_GET_DEFAULT(parentExecutionId_, "") };
    inline ListExecutionsResponseBodyExecutions& setParentExecutionId(string parentExecutionId) { DARABONBA_PTR_SET_VALUE(parentExecutionId_, parentExecutionId) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline ListExecutionsResponseBodyExecutions& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListExecutionsResponseBodyExecutions& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline string resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
    inline ListExecutionsResponseBodyExecutions& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // safetyCheck Field Functions 
    bool hasSafetyCheck() const { return this->safetyCheck_ != nullptr;};
    void deleteSafetyCheck() { this->safetyCheck_ = nullptr;};
    inline string safetyCheck() const { DARABONBA_PTR_GET_DEFAULT(safetyCheck_, "") };
    inline ListExecutionsResponseBodyExecutions& setSafetyCheck(string safetyCheck) { DARABONBA_PTR_SET_VALUE(safetyCheck_, safetyCheck) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ListExecutionsResponseBodyExecutions& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExecutionsResponseBodyExecutions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline ListExecutionsResponseBodyExecutions& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline ListExecutionsResponseBodyExecutions& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline ListExecutionsResponseBodyExecutions& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline ListExecutionsResponseBodyExecutions& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline string targets() const { DARABONBA_PTR_GET_DEFAULT(targets_, "") };
    inline ListExecutionsResponseBodyExecutions& setTargets(string targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListExecutionsResponseBodyExecutions& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListExecutionsResponseBodyExecutions& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline ListExecutionsResponseBodyExecutions& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline ListExecutionsResponseBodyExecutions& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    // waitingStatus Field Functions 
    bool hasWaitingStatus() const { return this->waitingStatus_ != nullptr;};
    void deleteWaitingStatus() { this->waitingStatus_ = nullptr;};
    inline string waitingStatus() const { DARABONBA_PTR_GET_DEFAULT(waitingStatus_, "") };
    inline ListExecutionsResponseBodyExecutions& setWaitingStatus(string waitingStatus) { DARABONBA_PTR_SET_VALUE(waitingStatus_, waitingStatus) };


  protected:
    // The type of the execution template. Valid values: Other, TimerTrigger, EventTrigger, and AlarmTrigger.
    std::shared_ptr<string> category_ = nullptr;
    // The number of tasks that are counted by execution status.
    Darabonba::Json counters_ = nullptr;
    // The time when the execution was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The information about the tasks that are running.
    std::shared_ptr<vector<Models::ListExecutionsResponseBodyExecutionsCurrentTasks>> currentTasks_ = nullptr;
    // The description of the execution.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the execution stops running.
    std::shared_ptr<string> endDate_ = nullptr;
    // The account ID of the user who started the execution of the template.
    std::shared_ptr<string> executedBy_ = nullptr;
    // The unique ID of the execution.
    std::shared_ptr<string> executionId_ = nullptr;
    // Indicates whether the execution contains child executions.
    std::shared_ptr<bool> isParent_ = nullptr;
    // The time when the template was last successfully triggered.
    std::shared_ptr<string> lastSuccessfulTriggerTime_ = nullptr;
    // The outputs of last trigger.
    std::shared_ptr<string> lastTriggerOutputs_ = nullptr;
    // The status of the execution after the template was last triggered.
    std::shared_ptr<string> lastTriggerStatus_ = nullptr;
    // The status message of last trigger.
    std::shared_ptr<string> lastTriggerStatusMessage_ = nullptr;
    // The time when the template was last successfully triggered.
    std::shared_ptr<string> lastTriggerTime_ = nullptr;
    // The execution mode.
    std::shared_ptr<string> mode_ = nullptr;
    // The next schedule time for timer trigger execution.
    std::shared_ptr<string> nextScheduleTime_ = nullptr;
    // The output of the execution.
    std::shared_ptr<string> outputs_ = nullptr;
    // The input parameters of the execution.
    Darabonba::Json parameters_ = nullptr;
    // The ID of the parent execution.
    std::shared_ptr<string> parentExecutionId_ = nullptr;
    // The role that started the execution of the template.
    std::shared_ptr<string> ramRole_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the resource.
    std::shared_ptr<string> resourceStatus_ = nullptr;
    // The security check mode. Valid values: Skip, and ConfirmEveryHighRiskAction.
    std::shared_ptr<string> safetyCheck_ = nullptr;
    // The time when the execution was started.
    std::shared_ptr<string> startDate_ = nullptr;
    // The status of the execution. Valid values: Started, Queued, Running, Waiting, Success, Failed, and Cancelled.
    std::shared_ptr<string> status_ = nullptr;
    // The status of the task execution.
    std::shared_ptr<string> statusMessage_ = nullptr;
    // The reason for which the status occurs.
    std::shared_ptr<string> statusReason_ = nullptr;
    // The tags of the execution.
    Darabonba::Json tags_ = nullptr;
    // The target resource.
    std::shared_ptr<string> targets_ = nullptr;
    // The ID of the template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The version number of the template.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The time when the execution was updated.
    std::shared_ptr<string> updateDate_ = nullptr;
    // The Waiting state.
    std::shared_ptr<string> waitingStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
