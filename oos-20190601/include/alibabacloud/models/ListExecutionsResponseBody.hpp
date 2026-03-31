// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Executions, executions_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Executions, executions_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListExecutionsResponseBody() = default ;
    ListExecutionsResponseBody(const ListExecutionsResponseBody &) = default ;
    ListExecutionsResponseBody(ListExecutionsResponseBody &&) = default ;
    ListExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionsResponseBody() = default ;
    ListExecutionsResponseBody& operator=(const ListExecutionsResponseBody &) = default ;
    ListExecutionsResponseBody& operator=(ListExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Executions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Executions& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
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
      friend void from_json(const Darabonba::Json& j, Executions& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
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
      Executions() = default ;
      Executions(const Executions &) = default ;
      Executions(Executions &&) = default ;
      Executions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Executions() = default ;
      Executions& operator=(const Executions &) = default ;
      Executions& operator=(Executions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CurrentTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CurrentTasks& obj) { 
          DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
          DARABONBA_PTR_TO_JSON(TaskExecutionId, taskExecutionId_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        };
        friend void from_json(const Darabonba::Json& j, CurrentTasks& obj) { 
          DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
          DARABONBA_PTR_FROM_JSON(TaskExecutionId, taskExecutionId_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        };
        CurrentTasks() = default ;
        CurrentTasks(const CurrentTasks &) = default ;
        CurrentTasks(CurrentTasks &&) = default ;
        CurrentTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CurrentTasks() = default ;
        CurrentTasks& operator=(const CurrentTasks &) = default ;
        CurrentTasks& operator=(CurrentTasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->taskAction_ == nullptr
        && this->taskExecutionId_ == nullptr && this->taskName_ == nullptr; };
        // taskAction Field Functions 
        bool hasTaskAction() const { return this->taskAction_ != nullptr;};
        void deleteTaskAction() { this->taskAction_ = nullptr;};
        inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
        inline CurrentTasks& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


        // taskExecutionId Field Functions 
        bool hasTaskExecutionId() const { return this->taskExecutionId_ != nullptr;};
        void deleteTaskExecutionId() { this->taskExecutionId_ = nullptr;};
        inline string getTaskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionId_, "") };
        inline CurrentTasks& setTaskExecutionId(string taskExecutionId) { DARABONBA_PTR_SET_VALUE(taskExecutionId_, taskExecutionId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline CurrentTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      protected:
        // The execution template of the task.
        shared_ptr<string> taskAction_ {};
        // The ID of the task execution.
        shared_ptr<string> taskExecutionId_ {};
        // The name of the task.
        shared_ptr<string> taskName_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->category_ == nullptr && this->counters_ == nullptr && this->createDate_ == nullptr && this->currentTasks_ == nullptr && this->description_ == nullptr
        && this->endDate_ == nullptr && this->executedBy_ == nullptr && this->executionId_ == nullptr && this->isParent_ == nullptr && this->lastSuccessfulTriggerTime_ == nullptr
        && this->lastTriggerOutputs_ == nullptr && this->lastTriggerStatus_ == nullptr && this->lastTriggerStatusMessage_ == nullptr && this->lastTriggerTime_ == nullptr && this->mode_ == nullptr
        && this->nextScheduleTime_ == nullptr && this->outputs_ == nullptr && this->parameters_ == nullptr && this->parentExecutionId_ == nullptr && this->ramRole_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceStatus_ == nullptr && this->safetyCheck_ == nullptr && this->startDate_ == nullptr && this->status_ == nullptr
        && this->statusMessage_ == nullptr && this->statusReason_ == nullptr && this->tags_ == nullptr && this->targets_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->templateVersion_ == nullptr && this->updateDate_ == nullptr && this->waitingStatus_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Executions& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Executions& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // counters Field Functions 
      bool hasCounters() const { return this->counters_ != nullptr;};
      void deleteCounters() { this->counters_ = nullptr;};
      inline       const Darabonba::Json & getCounters() const { DARABONBA_GET(counters_) };
      Darabonba::Json & getCounters() { DARABONBA_GET(counters_) };
      inline Executions& setCounters(const Darabonba::Json & counters) { DARABONBA_SET_VALUE(counters_, counters) };
      inline Executions& setCounters(Darabonba::Json && counters) { DARABONBA_SET_RVALUE(counters_, counters) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Executions& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // currentTasks Field Functions 
      bool hasCurrentTasks() const { return this->currentTasks_ != nullptr;};
      void deleteCurrentTasks() { this->currentTasks_ = nullptr;};
      inline const vector<Executions::CurrentTasks> & getCurrentTasks() const { DARABONBA_PTR_GET_CONST(currentTasks_, vector<Executions::CurrentTasks>) };
      inline vector<Executions::CurrentTasks> getCurrentTasks() { DARABONBA_PTR_GET(currentTasks_, vector<Executions::CurrentTasks>) };
      inline Executions& setCurrentTasks(const vector<Executions::CurrentTasks> & currentTasks) { DARABONBA_PTR_SET_VALUE(currentTasks_, currentTasks) };
      inline Executions& setCurrentTasks(vector<Executions::CurrentTasks> && currentTasks) { DARABONBA_PTR_SET_RVALUE(currentTasks_, currentTasks) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Executions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Executions& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // executedBy Field Functions 
      bool hasExecutedBy() const { return this->executedBy_ != nullptr;};
      void deleteExecutedBy() { this->executedBy_ = nullptr;};
      inline string getExecutedBy() const { DARABONBA_PTR_GET_DEFAULT(executedBy_, "") };
      inline Executions& setExecutedBy(string executedBy) { DARABONBA_PTR_SET_VALUE(executedBy_, executedBy) };


      // executionId Field Functions 
      bool hasExecutionId() const { return this->executionId_ != nullptr;};
      void deleteExecutionId() { this->executionId_ = nullptr;};
      inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
      inline Executions& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


      // isParent Field Functions 
      bool hasIsParent() const { return this->isParent_ != nullptr;};
      void deleteIsParent() { this->isParent_ = nullptr;};
      inline bool getIsParent() const { DARABONBA_PTR_GET_DEFAULT(isParent_, false) };
      inline Executions& setIsParent(bool isParent) { DARABONBA_PTR_SET_VALUE(isParent_, isParent) };


      // lastSuccessfulTriggerTime Field Functions 
      bool hasLastSuccessfulTriggerTime() const { return this->lastSuccessfulTriggerTime_ != nullptr;};
      void deleteLastSuccessfulTriggerTime() { this->lastSuccessfulTriggerTime_ = nullptr;};
      inline string getLastSuccessfulTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulTriggerTime_, "") };
      inline Executions& setLastSuccessfulTriggerTime(string lastSuccessfulTriggerTime) { DARABONBA_PTR_SET_VALUE(lastSuccessfulTriggerTime_, lastSuccessfulTriggerTime) };


      // lastTriggerOutputs Field Functions 
      bool hasLastTriggerOutputs() const { return this->lastTriggerOutputs_ != nullptr;};
      void deleteLastTriggerOutputs() { this->lastTriggerOutputs_ = nullptr;};
      inline string getLastTriggerOutputs() const { DARABONBA_PTR_GET_DEFAULT(lastTriggerOutputs_, "") };
      inline Executions& setLastTriggerOutputs(string lastTriggerOutputs) { DARABONBA_PTR_SET_VALUE(lastTriggerOutputs_, lastTriggerOutputs) };


      // lastTriggerStatus Field Functions 
      bool hasLastTriggerStatus() const { return this->lastTriggerStatus_ != nullptr;};
      void deleteLastTriggerStatus() { this->lastTriggerStatus_ = nullptr;};
      inline string getLastTriggerStatus() const { DARABONBA_PTR_GET_DEFAULT(lastTriggerStatus_, "") };
      inline Executions& setLastTriggerStatus(string lastTriggerStatus) { DARABONBA_PTR_SET_VALUE(lastTriggerStatus_, lastTriggerStatus) };


      // lastTriggerStatusMessage Field Functions 
      bool hasLastTriggerStatusMessage() const { return this->lastTriggerStatusMessage_ != nullptr;};
      void deleteLastTriggerStatusMessage() { this->lastTriggerStatusMessage_ = nullptr;};
      inline string getLastTriggerStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(lastTriggerStatusMessage_, "") };
      inline Executions& setLastTriggerStatusMessage(string lastTriggerStatusMessage) { DARABONBA_PTR_SET_VALUE(lastTriggerStatusMessage_, lastTriggerStatusMessage) };


      // lastTriggerTime Field Functions 
      bool hasLastTriggerTime() const { return this->lastTriggerTime_ != nullptr;};
      void deleteLastTriggerTime() { this->lastTriggerTime_ = nullptr;};
      inline string getLastTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(lastTriggerTime_, "") };
      inline Executions& setLastTriggerTime(string lastTriggerTime) { DARABONBA_PTR_SET_VALUE(lastTriggerTime_, lastTriggerTime) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Executions& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // nextScheduleTime Field Functions 
      bool hasNextScheduleTime() const { return this->nextScheduleTime_ != nullptr;};
      void deleteNextScheduleTime() { this->nextScheduleTime_ = nullptr;};
      inline string getNextScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(nextScheduleTime_, "") };
      inline Executions& setNextScheduleTime(string nextScheduleTime) { DARABONBA_PTR_SET_VALUE(nextScheduleTime_, nextScheduleTime) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline Executions& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline       const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
      Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
      inline Executions& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
      inline Executions& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


      // parentExecutionId Field Functions 
      bool hasParentExecutionId() const { return this->parentExecutionId_ != nullptr;};
      void deleteParentExecutionId() { this->parentExecutionId_ = nullptr;};
      inline string getParentExecutionId() const { DARABONBA_PTR_GET_DEFAULT(parentExecutionId_, "") };
      inline Executions& setParentExecutionId(string parentExecutionId) { DARABONBA_PTR_SET_VALUE(parentExecutionId_, parentExecutionId) };


      // ramRole Field Functions 
      bool hasRamRole() const { return this->ramRole_ != nullptr;};
      void deleteRamRole() { this->ramRole_ = nullptr;};
      inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
      inline Executions& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Executions& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceStatus Field Functions 
      bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
      void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
      inline string getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
      inline Executions& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


      // safetyCheck Field Functions 
      bool hasSafetyCheck() const { return this->safetyCheck_ != nullptr;};
      void deleteSafetyCheck() { this->safetyCheck_ = nullptr;};
      inline string getSafetyCheck() const { DARABONBA_PTR_GET_DEFAULT(safetyCheck_, "") };
      inline Executions& setSafetyCheck(string safetyCheck) { DARABONBA_PTR_SET_VALUE(safetyCheck_, safetyCheck) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline Executions& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Executions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline Executions& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Executions& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Executions& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Executions& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline string getTargets() const { DARABONBA_PTR_GET_DEFAULT(targets_, "") };
      inline Executions& setTargets(string targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Executions& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Executions& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline Executions& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline Executions& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      // waitingStatus Field Functions 
      bool hasWaitingStatus() const { return this->waitingStatus_ != nullptr;};
      void deleteWaitingStatus() { this->waitingStatus_ = nullptr;};
      inline string getWaitingStatus() const { DARABONBA_PTR_GET_DEFAULT(waitingStatus_, "") };
      inline Executions& setWaitingStatus(string waitingStatus) { DARABONBA_PTR_SET_VALUE(waitingStatus_, waitingStatus) };


    protected:
      shared_ptr<string> accountId_ {};
      // The type of the execution template. Valid values: Other, TimerTrigger, EventTrigger, and AlarmTrigger.
      shared_ptr<string> category_ {};
      // The number of tasks that are counted by execution status.
      Darabonba::Json counters_ {};
      // The time when the execution was created.
      shared_ptr<string> createDate_ {};
      // The information about the tasks that are running.
      shared_ptr<vector<Executions::CurrentTasks>> currentTasks_ {};
      // The description of the execution.
      shared_ptr<string> description_ {};
      // The time when the execution stops running.
      shared_ptr<string> endDate_ {};
      // The account ID of the user who started the execution of the template.
      shared_ptr<string> executedBy_ {};
      // The unique ID of the execution.
      shared_ptr<string> executionId_ {};
      // Indicates whether the execution contains child executions.
      shared_ptr<bool> isParent_ {};
      // The time when the template was last successfully triggered.
      shared_ptr<string> lastSuccessfulTriggerTime_ {};
      // The outputs of last trigger.
      shared_ptr<string> lastTriggerOutputs_ {};
      // The status of the execution after the template was last triggered.
      shared_ptr<string> lastTriggerStatus_ {};
      // The status message of last trigger.
      shared_ptr<string> lastTriggerStatusMessage_ {};
      // The time when the template was last successfully triggered.
      shared_ptr<string> lastTriggerTime_ {};
      // The execution mode.
      shared_ptr<string> mode_ {};
      // The next schedule time for timer trigger execution.
      shared_ptr<string> nextScheduleTime_ {};
      // The output of the execution.
      shared_ptr<string> outputs_ {};
      // The input parameters of the execution.
      Darabonba::Json parameters_ {};
      // The ID of the parent execution.
      shared_ptr<string> parentExecutionId_ {};
      // The role that started the execution of the template.
      shared_ptr<string> ramRole_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The status of the resource.
      shared_ptr<string> resourceStatus_ {};
      // The security check mode. Valid values: Skip, and ConfirmEveryHighRiskAction.
      shared_ptr<string> safetyCheck_ {};
      // The time when the execution was started.
      shared_ptr<string> startDate_ {};
      // The status of the execution. Valid values: Started, Queued, Running, Waiting, Success, Failed, and Cancelled.
      shared_ptr<string> status_ {};
      // The status of the task execution.
      shared_ptr<string> statusMessage_ {};
      // The reason for which the status occurs.
      shared_ptr<string> statusReason_ {};
      // The tags of the execution.
      Darabonba::Json tags_ {};
      // The target resource.
      shared_ptr<string> targets_ {};
      // The ID of the template.
      shared_ptr<string> templateId_ {};
      // The name of the template.
      shared_ptr<string> templateName_ {};
      // The version number of the template.
      shared_ptr<string> templateVersion_ {};
      // The time when the execution was updated.
      shared_ptr<string> updateDate_ {};
      // The Waiting state.
      shared_ptr<string> waitingStatus_ {};
    };

    virtual bool empty() const override { return this->executions_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // executions Field Functions 
    bool hasExecutions() const { return this->executions_ != nullptr;};
    void deleteExecutions() { this->executions_ = nullptr;};
    inline const vector<ListExecutionsResponseBody::Executions> & getExecutions() const { DARABONBA_PTR_GET_CONST(executions_, vector<ListExecutionsResponseBody::Executions>) };
    inline vector<ListExecutionsResponseBody::Executions> getExecutions() { DARABONBA_PTR_GET(executions_, vector<ListExecutionsResponseBody::Executions>) };
    inline ListExecutionsResponseBody& setExecutions(const vector<ListExecutionsResponseBody::Executions> & executions) { DARABONBA_PTR_SET_VALUE(executions_, executions) };
    inline ListExecutionsResponseBody& setExecutions(vector<ListExecutionsResponseBody::Executions> && executions) { DARABONBA_PTR_SET_RVALUE(executions_, executions) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExecutionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExecutionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListExecutionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the task executions.
    shared_ptr<vector<ListExecutionsResponseBody::Executions>> executions_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of the executions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
