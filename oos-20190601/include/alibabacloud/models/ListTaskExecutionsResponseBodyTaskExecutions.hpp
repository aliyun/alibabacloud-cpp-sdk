// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKEXECUTIONSRESPONSEBODYTASKEXECUTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKEXECUTIONSRESPONSEBODYTASKEXECUTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListTaskExecutionsResponseBodyTaskExecutions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskExecutionsResponseBodyTaskExecutions& obj) { 
      DARABONBA_PTR_TO_JSON(ChildExecutionId, childExecutionId_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_ANY_TO_JSON(ExtraData, extraData_);
      DARABONBA_ANY_TO_JSON(Loop, loop_);
      DARABONBA_PTR_TO_JSON(LoopBatchNumber, loopBatchNumber_);
      DARABONBA_PTR_TO_JSON(LoopItem, loopItem_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(ParentTaskExecutionId, parentTaskExecutionId_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_TO_JSON(TaskExecutionId, taskExecutionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskExecutionsResponseBodyTaskExecutions& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildExecutionId, childExecutionId_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_ANY_FROM_JSON(ExtraData, extraData_);
      DARABONBA_ANY_FROM_JSON(Loop, loop_);
      DARABONBA_PTR_FROM_JSON(LoopBatchNumber, loopBatchNumber_);
      DARABONBA_PTR_FROM_JSON(LoopItem, loopItem_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(ParentTaskExecutionId, parentTaskExecutionId_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_FROM_JSON(TaskExecutionId, taskExecutionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    ListTaskExecutionsResponseBodyTaskExecutions() = default ;
    ListTaskExecutionsResponseBodyTaskExecutions(const ListTaskExecutionsResponseBodyTaskExecutions &) = default ;
    ListTaskExecutionsResponseBodyTaskExecutions(ListTaskExecutionsResponseBodyTaskExecutions &&) = default ;
    ListTaskExecutionsResponseBodyTaskExecutions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskExecutionsResponseBodyTaskExecutions() = default ;
    ListTaskExecutionsResponseBodyTaskExecutions& operator=(const ListTaskExecutionsResponseBodyTaskExecutions &) = default ;
    ListTaskExecutionsResponseBodyTaskExecutions& operator=(ListTaskExecutionsResponseBodyTaskExecutions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->childExecutionId_ == nullptr
        && return this->createDate_ == nullptr && return this->endDate_ == nullptr && return this->executionId_ == nullptr && return this->extraData_ == nullptr && return this->loop_ == nullptr
        && return this->loopBatchNumber_ == nullptr && return this->loopItem_ == nullptr && return this->outputs_ == nullptr && return this->parentTaskExecutionId_ == nullptr && return this->properties_ == nullptr
        && return this->startDate_ == nullptr && return this->status_ == nullptr && return this->statusMessage_ == nullptr && return this->taskAction_ == nullptr && return this->taskExecutionId_ == nullptr
        && return this->taskName_ == nullptr && return this->templateId_ == nullptr && return this->updateDate_ == nullptr; };
    // childExecutionId Field Functions 
    bool hasChildExecutionId() const { return this->childExecutionId_ != nullptr;};
    void deleteChildExecutionId() { this->childExecutionId_ = nullptr;};
    inline string childExecutionId() const { DARABONBA_PTR_GET_DEFAULT(childExecutionId_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setChildExecutionId(string childExecutionId) { DARABONBA_PTR_SET_VALUE(childExecutionId_, childExecutionId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string executionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline     const Darabonba::Json & extraData() const { DARABONBA_GET(extraData_) };
    Darabonba::Json & extraData() { DARABONBA_GET(extraData_) };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setExtraData(const Darabonba::Json & extraData) { DARABONBA_SET_VALUE(extraData_, extraData) };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setExtraData(Darabonba::Json & extraData) { DARABONBA_SET_RVALUE(extraData_, extraData) };


    // loop Field Functions 
    bool hasLoop() const { return this->loop_ != nullptr;};
    void deleteLoop() { this->loop_ = nullptr;};
    inline     const Darabonba::Json & loop() const { DARABONBA_GET(loop_) };
    Darabonba::Json & loop() { DARABONBA_GET(loop_) };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setLoop(const Darabonba::Json & loop) { DARABONBA_SET_VALUE(loop_, loop) };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setLoop(Darabonba::Json & loop) { DARABONBA_SET_RVALUE(loop_, loop) };


    // loopBatchNumber Field Functions 
    bool hasLoopBatchNumber() const { return this->loopBatchNumber_ != nullptr;};
    void deleteLoopBatchNumber() { this->loopBatchNumber_ = nullptr;};
    inline int32_t loopBatchNumber() const { DARABONBA_PTR_GET_DEFAULT(loopBatchNumber_, 0) };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setLoopBatchNumber(int32_t loopBatchNumber) { DARABONBA_PTR_SET_VALUE(loopBatchNumber_, loopBatchNumber) };


    // loopItem Field Functions 
    bool hasLoopItem() const { return this->loopItem_ != nullptr;};
    void deleteLoopItem() { this->loopItem_ = nullptr;};
    inline string loopItem() const { DARABONBA_PTR_GET_DEFAULT(loopItem_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setLoopItem(string loopItem) { DARABONBA_PTR_SET_VALUE(loopItem_, loopItem) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // parentTaskExecutionId Field Functions 
    bool hasParentTaskExecutionId() const { return this->parentTaskExecutionId_ != nullptr;};
    void deleteParentTaskExecutionId() { this->parentTaskExecutionId_ = nullptr;};
    inline string parentTaskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(parentTaskExecutionId_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setParentTaskExecutionId(string parentTaskExecutionId) { DARABONBA_PTR_SET_VALUE(parentTaskExecutionId_, parentTaskExecutionId) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string properties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // taskExecutionId Field Functions 
    bool hasTaskExecutionId() const { return this->taskExecutionId_ != nullptr;};
    void deleteTaskExecutionId() { this->taskExecutionId_ = nullptr;};
    inline string taskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionId_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setTaskExecutionId(string taskExecutionId) { DARABONBA_PTR_SET_VALUE(taskExecutionId_, taskExecutionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline ListTaskExecutionsResponseBodyTaskExecutions& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The output of the execution.
    std::shared_ptr<string> childExecutionId_ = nullptr;
    // The ID of the execution.
    std::shared_ptr<string> createDate_ = nullptr;
    // The execution ID of the parent node.
    std::shared_ptr<string> endDate_ = nullptr;
    // The action of the task.
    std::shared_ptr<string> executionId_ = nullptr;
    // The Input parameters of the task execution.
    Darabonba::Json extraData_ = nullptr;
    // The ID of the template.
    Darabonba::Json loop_ = nullptr;
    // The status information of the task execution.
    std::shared_ptr<int32_t> loopBatchNumber_ = nullptr;
    // The time when the execution was created.
    std::shared_ptr<string> loopItem_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> outputs_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> parentTaskExecutionId_ = nullptr;
    // Queries task executions. Multiple methods are supported to filter task executions.
    std::shared_ptr<string> properties_ = nullptr;
    // The elements in the loop task.
    std::shared_ptr<string> startDate_ = nullptr;
    // The time when the task execution stopped running.
    std::shared_ptr<string> status_ = nullptr;
    // The additional information.
    std::shared_ptr<string> statusMessage_ = nullptr;
    // The execution ID of the task.
    std::shared_ptr<string> taskAction_ = nullptr;
    // The time when the execution was last updated.
    std::shared_ptr<string> taskExecutionId_ = nullptr;
    // The time when the execution started.
    std::shared_ptr<string> taskName_ = nullptr;
    // The number of times for which the loop task is run.
    std::shared_ptr<string> templateId_ = nullptr;
    // The configuration and statistics information of the loop task. This parameter is returned only for the parent node of the loop task.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
