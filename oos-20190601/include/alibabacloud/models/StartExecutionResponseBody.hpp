// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTEXECUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTEXECUTIONRESPONSEBODY_HPP_
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
  class StartExecutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartExecutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Execution, execution_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartExecutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Execution, execution_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartExecutionResponseBody() = default ;
    StartExecutionResponseBody(const StartExecutionResponseBody &) = default ;
    StartExecutionResponseBody(StartExecutionResponseBody &&) = default ;
    StartExecutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartExecutionResponseBody() = default ;
    StartExecutionResponseBody& operator=(const StartExecutionResponseBody &) = default ;
    StartExecutionResponseBody& operator=(StartExecutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Execution : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Execution& obj) { 
        DARABONBA_ANY_TO_JSON(Counters, counters_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(CurrentTasks, currentTasks_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(ExecutedBy, executedBy_);
        DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
        DARABONBA_PTR_TO_JSON(IsParent, isParent_);
        DARABONBA_PTR_TO_JSON(LoopMode, loopMode_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(ParentExecutionId, parentExecutionId_);
        DARABONBA_PTR_TO_JSON(RamRole, ramRole_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SafetyCheck, safetyCheck_);
        DARABONBA_PTR_TO_JSON(StartDate, startDate_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      };
      friend void from_json(const Darabonba::Json& j, Execution& obj) { 
        DARABONBA_ANY_FROM_JSON(Counters, counters_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(CurrentTasks, currentTasks_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(ExecutedBy, executedBy_);
        DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
        DARABONBA_PTR_FROM_JSON(IsParent, isParent_);
        DARABONBA_PTR_FROM_JSON(LoopMode, loopMode_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(ParentExecutionId, parentExecutionId_);
        DARABONBA_PTR_FROM_JSON(RamRole, ramRole_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SafetyCheck, safetyCheck_);
        DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      };
      Execution() = default ;
      Execution(const Execution &) = default ;
      Execution(Execution &&) = default ;
      Execution(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Execution() = default ;
      Execution& operator=(const Execution &) = default ;
      Execution& operator=(Execution &&) = default ;
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
        // The action of the task.
        shared_ptr<string> taskAction_ {};
        // The execution ID of the task.
        shared_ptr<string> taskExecutionId_ {};
        // The name of the task.
        shared_ptr<string> taskName_ {};
      };

      virtual bool empty() const override { return this->counters_ == nullptr
        && this->createDate_ == nullptr && this->currentTasks_ == nullptr && this->description_ == nullptr && this->endDate_ == nullptr && this->executedBy_ == nullptr
        && this->executionId_ == nullptr && this->isParent_ == nullptr && this->loopMode_ == nullptr && this->mode_ == nullptr && this->outputs_ == nullptr
        && this->parameters_ == nullptr && this->parentExecutionId_ == nullptr && this->ramRole_ == nullptr && this->resourceGroupId_ == nullptr && this->safetyCheck_ == nullptr
        && this->startDate_ == nullptr && this->status_ == nullptr && this->statusMessage_ == nullptr && this->tags_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->templateVersion_ == nullptr && this->updateDate_ == nullptr; };
      // counters Field Functions 
      bool hasCounters() const { return this->counters_ != nullptr;};
      void deleteCounters() { this->counters_ = nullptr;};
      inline       const Darabonba::Json & getCounters() const { DARABONBA_GET(counters_) };
      Darabonba::Json & getCounters() { DARABONBA_GET(counters_) };
      inline Execution& setCounters(const Darabonba::Json & counters) { DARABONBA_SET_VALUE(counters_, counters) };
      inline Execution& setCounters(Darabonba::Json && counters) { DARABONBA_SET_RVALUE(counters_, counters) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Execution& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // currentTasks Field Functions 
      bool hasCurrentTasks() const { return this->currentTasks_ != nullptr;};
      void deleteCurrentTasks() { this->currentTasks_ = nullptr;};
      inline const vector<Execution::CurrentTasks> & getCurrentTasks() const { DARABONBA_PTR_GET_CONST(currentTasks_, vector<Execution::CurrentTasks>) };
      inline vector<Execution::CurrentTasks> getCurrentTasks() { DARABONBA_PTR_GET(currentTasks_, vector<Execution::CurrentTasks>) };
      inline Execution& setCurrentTasks(const vector<Execution::CurrentTasks> & currentTasks) { DARABONBA_PTR_SET_VALUE(currentTasks_, currentTasks) };
      inline Execution& setCurrentTasks(vector<Execution::CurrentTasks> && currentTasks) { DARABONBA_PTR_SET_RVALUE(currentTasks_, currentTasks) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Execution& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Execution& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // executedBy Field Functions 
      bool hasExecutedBy() const { return this->executedBy_ != nullptr;};
      void deleteExecutedBy() { this->executedBy_ = nullptr;};
      inline string getExecutedBy() const { DARABONBA_PTR_GET_DEFAULT(executedBy_, "") };
      inline Execution& setExecutedBy(string executedBy) { DARABONBA_PTR_SET_VALUE(executedBy_, executedBy) };


      // executionId Field Functions 
      bool hasExecutionId() const { return this->executionId_ != nullptr;};
      void deleteExecutionId() { this->executionId_ = nullptr;};
      inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
      inline Execution& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


      // isParent Field Functions 
      bool hasIsParent() const { return this->isParent_ != nullptr;};
      void deleteIsParent() { this->isParent_ = nullptr;};
      inline bool getIsParent() const { DARABONBA_PTR_GET_DEFAULT(isParent_, false) };
      inline Execution& setIsParent(bool isParent) { DARABONBA_PTR_SET_VALUE(isParent_, isParent) };


      // loopMode Field Functions 
      bool hasLoopMode() const { return this->loopMode_ != nullptr;};
      void deleteLoopMode() { this->loopMode_ = nullptr;};
      inline string getLoopMode() const { DARABONBA_PTR_GET_DEFAULT(loopMode_, "") };
      inline Execution& setLoopMode(string loopMode) { DARABONBA_PTR_SET_VALUE(loopMode_, loopMode) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Execution& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline Execution& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
      inline Execution& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


      // parentExecutionId Field Functions 
      bool hasParentExecutionId() const { return this->parentExecutionId_ != nullptr;};
      void deleteParentExecutionId() { this->parentExecutionId_ = nullptr;};
      inline string getParentExecutionId() const { DARABONBA_PTR_GET_DEFAULT(parentExecutionId_, "") };
      inline Execution& setParentExecutionId(string parentExecutionId) { DARABONBA_PTR_SET_VALUE(parentExecutionId_, parentExecutionId) };


      // ramRole Field Functions 
      bool hasRamRole() const { return this->ramRole_ != nullptr;};
      void deleteRamRole() { this->ramRole_ = nullptr;};
      inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
      inline Execution& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Execution& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // safetyCheck Field Functions 
      bool hasSafetyCheck() const { return this->safetyCheck_ != nullptr;};
      void deleteSafetyCheck() { this->safetyCheck_ = nullptr;};
      inline string getSafetyCheck() const { DARABONBA_PTR_GET_DEFAULT(safetyCheck_, "") };
      inline Execution& setSafetyCheck(string safetyCheck) { DARABONBA_PTR_SET_VALUE(safetyCheck_, safetyCheck) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline Execution& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Execution& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline Execution& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Execution& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Execution& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Execution& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Execution& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline Execution& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline Execution& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The number of executions.
      Darabonba::Json counters_ {};
      // The time when the execution was created.
      shared_ptr<string> createDate_ {};
      // The information about in-progress tasks.
      shared_ptr<vector<Execution::CurrentTasks>> currentTasks_ {};
      // The description of the execution.
      shared_ptr<string> description_ {};
      // The time when the execution stopped.
      shared_ptr<string> endDate_ {};
      // The account ID of the user who started the execution of the template.
      shared_ptr<string> executedBy_ {};
      // The GUID of the execution.
      shared_ptr<string> executionId_ {};
      // Indicates whether the execution is a parent execution.
      shared_ptr<bool> isParent_ {};
      // The loop mode.
      shared_ptr<string> loopMode_ {};
      // The execution mode.
      shared_ptr<string> mode_ {};
      // The output of the execution.
      shared_ptr<string> outputs_ {};
      // The input parameters of the execution.
      shared_ptr<string> parameters_ {};
      // The ID of the parent execution.
      shared_ptr<string> parentExecutionId_ {};
      // The role that started the execution of the template.
      shared_ptr<string> ramRole_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The security check mode.
      shared_ptr<string> safetyCheck_ {};
      // The time when the execution was started.
      shared_ptr<string> startDate_ {};
      // The status of the execution.
      shared_ptr<string> status_ {};
      // The status information of the execution.
      shared_ptr<string> statusMessage_ {};
      // The tags of the execution.
      Darabonba::Json tags_ {};
      // The ID of the template.
      shared_ptr<string> templateId_ {};
      // The name of the template.
      shared_ptr<string> templateName_ {};
      // The version number of the template.
      shared_ptr<string> templateVersion_ {};
      // The time when the execution was last updated.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->execution_ == nullptr
        && this->requestId_ == nullptr; };
    // execution Field Functions 
    bool hasExecution() const { return this->execution_ != nullptr;};
    void deleteExecution() { this->execution_ = nullptr;};
    inline const StartExecutionResponseBody::Execution & getExecution() const { DARABONBA_PTR_GET_CONST(execution_, StartExecutionResponseBody::Execution) };
    inline StartExecutionResponseBody::Execution getExecution() { DARABONBA_PTR_GET(execution_, StartExecutionResponseBody::Execution) };
    inline StartExecutionResponseBody& setExecution(const StartExecutionResponseBody::Execution & execution) { DARABONBA_PTR_SET_VALUE(execution_, execution) };
    inline StartExecutionResponseBody& setExecution(StartExecutionResponseBody::Execution && execution) { DARABONBA_PTR_SET_RVALUE(execution_, execution) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartExecutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the execution.
    shared_ptr<StartExecutionResponseBody::Execution> execution_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
