// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTEXECUTIONRESPONSEBODYEXECUTION_HPP_
#define ALIBABACLOUD_MODELS_STARTEXECUTIONRESPONSEBODYEXECUTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartExecutionResponseBodyExecutionCurrentTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class StartExecutionResponseBodyExecution : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartExecutionResponseBodyExecution& obj) { 
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
    friend void from_json(const Darabonba::Json& j, StartExecutionResponseBodyExecution& obj) { 
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
    StartExecutionResponseBodyExecution() = default ;
    StartExecutionResponseBodyExecution(const StartExecutionResponseBodyExecution &) = default ;
    StartExecutionResponseBodyExecution(StartExecutionResponseBodyExecution &&) = default ;
    StartExecutionResponseBodyExecution(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartExecutionResponseBodyExecution() = default ;
    StartExecutionResponseBodyExecution& operator=(const StartExecutionResponseBodyExecution &) = default ;
    StartExecutionResponseBodyExecution& operator=(StartExecutionResponseBodyExecution &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->counters_ == nullptr
        && return this->createDate_ == nullptr && return this->currentTasks_ == nullptr && return this->description_ == nullptr && return this->endDate_ == nullptr && return this->executedBy_ == nullptr
        && return this->executionId_ == nullptr && return this->isParent_ == nullptr && return this->loopMode_ == nullptr && return this->mode_ == nullptr && return this->outputs_ == nullptr
        && return this->parameters_ == nullptr && return this->parentExecutionId_ == nullptr && return this->ramRole_ == nullptr && return this->resourceGroupId_ == nullptr && return this->safetyCheck_ == nullptr
        && return this->startDate_ == nullptr && return this->status_ == nullptr && return this->statusMessage_ == nullptr && return this->tags_ == nullptr && return this->templateId_ == nullptr
        && return this->templateName_ == nullptr && return this->templateVersion_ == nullptr && return this->updateDate_ == nullptr; };
    // counters Field Functions 
    bool hasCounters() const { return this->counters_ != nullptr;};
    void deleteCounters() { this->counters_ = nullptr;};
    inline     const Darabonba::Json & counters() const { DARABONBA_GET(counters_) };
    Darabonba::Json & counters() { DARABONBA_GET(counters_) };
    inline StartExecutionResponseBodyExecution& setCounters(const Darabonba::Json & counters) { DARABONBA_SET_VALUE(counters_, counters) };
    inline StartExecutionResponseBodyExecution& setCounters(Darabonba::Json & counters) { DARABONBA_SET_RVALUE(counters_, counters) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline StartExecutionResponseBodyExecution& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // currentTasks Field Functions 
    bool hasCurrentTasks() const { return this->currentTasks_ != nullptr;};
    void deleteCurrentTasks() { this->currentTasks_ = nullptr;};
    inline const vector<Models::StartExecutionResponseBodyExecutionCurrentTasks> & currentTasks() const { DARABONBA_PTR_GET_CONST(currentTasks_, vector<Models::StartExecutionResponseBodyExecutionCurrentTasks>) };
    inline vector<Models::StartExecutionResponseBodyExecutionCurrentTasks> currentTasks() { DARABONBA_PTR_GET(currentTasks_, vector<Models::StartExecutionResponseBodyExecutionCurrentTasks>) };
    inline StartExecutionResponseBodyExecution& setCurrentTasks(const vector<Models::StartExecutionResponseBodyExecutionCurrentTasks> & currentTasks) { DARABONBA_PTR_SET_VALUE(currentTasks_, currentTasks) };
    inline StartExecutionResponseBodyExecution& setCurrentTasks(vector<Models::StartExecutionResponseBodyExecutionCurrentTasks> && currentTasks) { DARABONBA_PTR_SET_RVALUE(currentTasks_, currentTasks) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline StartExecutionResponseBodyExecution& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline StartExecutionResponseBodyExecution& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // executedBy Field Functions 
    bool hasExecutedBy() const { return this->executedBy_ != nullptr;};
    void deleteExecutedBy() { this->executedBy_ = nullptr;};
    inline string executedBy() const { DARABONBA_PTR_GET_DEFAULT(executedBy_, "") };
    inline StartExecutionResponseBodyExecution& setExecutedBy(string executedBy) { DARABONBA_PTR_SET_VALUE(executedBy_, executedBy) };


    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string executionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline StartExecutionResponseBodyExecution& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // isParent Field Functions 
    bool hasIsParent() const { return this->isParent_ != nullptr;};
    void deleteIsParent() { this->isParent_ = nullptr;};
    inline bool isParent() const { DARABONBA_PTR_GET_DEFAULT(isParent_, false) };
    inline StartExecutionResponseBodyExecution& setIsParent(bool isParent) { DARABONBA_PTR_SET_VALUE(isParent_, isParent) };


    // loopMode Field Functions 
    bool hasLoopMode() const { return this->loopMode_ != nullptr;};
    void deleteLoopMode() { this->loopMode_ = nullptr;};
    inline string loopMode() const { DARABONBA_PTR_GET_DEFAULT(loopMode_, "") };
    inline StartExecutionResponseBodyExecution& setLoopMode(string loopMode) { DARABONBA_PTR_SET_VALUE(loopMode_, loopMode) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline StartExecutionResponseBodyExecution& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline StartExecutionResponseBodyExecution& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline StartExecutionResponseBodyExecution& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // parentExecutionId Field Functions 
    bool hasParentExecutionId() const { return this->parentExecutionId_ != nullptr;};
    void deleteParentExecutionId() { this->parentExecutionId_ = nullptr;};
    inline string parentExecutionId() const { DARABONBA_PTR_GET_DEFAULT(parentExecutionId_, "") };
    inline StartExecutionResponseBodyExecution& setParentExecutionId(string parentExecutionId) { DARABONBA_PTR_SET_VALUE(parentExecutionId_, parentExecutionId) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline StartExecutionResponseBodyExecution& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline StartExecutionResponseBodyExecution& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // safetyCheck Field Functions 
    bool hasSafetyCheck() const { return this->safetyCheck_ != nullptr;};
    void deleteSafetyCheck() { this->safetyCheck_ = nullptr;};
    inline string safetyCheck() const { DARABONBA_PTR_GET_DEFAULT(safetyCheck_, "") };
    inline StartExecutionResponseBodyExecution& setSafetyCheck(string safetyCheck) { DARABONBA_PTR_SET_VALUE(safetyCheck_, safetyCheck) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline StartExecutionResponseBodyExecution& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline StartExecutionResponseBodyExecution& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline StartExecutionResponseBodyExecution& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline StartExecutionResponseBodyExecution& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline StartExecutionResponseBodyExecution& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartExecutionResponseBodyExecution& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline StartExecutionResponseBodyExecution& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline StartExecutionResponseBodyExecution& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline StartExecutionResponseBodyExecution& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The number of executions.
    Darabonba::Json counters_ = nullptr;
    // The time when the execution was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The information about in-progress tasks.
    std::shared_ptr<vector<Models::StartExecutionResponseBodyExecutionCurrentTasks>> currentTasks_ = nullptr;
    // The description of the execution.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the execution stopped.
    std::shared_ptr<string> endDate_ = nullptr;
    // The account ID of the user who started the execution of the template.
    std::shared_ptr<string> executedBy_ = nullptr;
    // The GUID of the execution.
    std::shared_ptr<string> executionId_ = nullptr;
    // Indicates whether the execution is a parent execution.
    std::shared_ptr<bool> isParent_ = nullptr;
    // The loop mode.
    std::shared_ptr<string> loopMode_ = nullptr;
    // The execution mode.
    std::shared_ptr<string> mode_ = nullptr;
    // The output of the execution.
    std::shared_ptr<string> outputs_ = nullptr;
    // The input parameters of the execution.
    std::shared_ptr<string> parameters_ = nullptr;
    // The ID of the parent execution.
    std::shared_ptr<string> parentExecutionId_ = nullptr;
    // The role that started the execution of the template.
    std::shared_ptr<string> ramRole_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The security check mode.
    std::shared_ptr<string> safetyCheck_ = nullptr;
    // The time when the execution was started.
    std::shared_ptr<string> startDate_ = nullptr;
    // The status of the execution.
    std::shared_ptr<string> status_ = nullptr;
    // The status information of the execution.
    std::shared_ptr<string> statusMessage_ = nullptr;
    // The tags of the execution.
    Darabonba::Json tags_ = nullptr;
    // The ID of the template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The version number of the template.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The time when the execution was last updated.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
