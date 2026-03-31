// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKEXECUTIONSRESPONSEBODY_HPP_
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
  class ListTaskExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskExecutions, taskExecutions_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskExecutions, taskExecutions_);
    };
    ListTaskExecutionsResponseBody() = default ;
    ListTaskExecutionsResponseBody(const ListTaskExecutionsResponseBody &) = default ;
    ListTaskExecutionsResponseBody(ListTaskExecutionsResponseBody &&) = default ;
    ListTaskExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskExecutionsResponseBody() = default ;
    ListTaskExecutionsResponseBody& operator=(const ListTaskExecutionsResponseBody &) = default ;
    ListTaskExecutionsResponseBody& operator=(ListTaskExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskExecutions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskExecutions& obj) { 
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
      friend void from_json(const Darabonba::Json& j, TaskExecutions& obj) { 
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
      TaskExecutions() = default ;
      TaskExecutions(const TaskExecutions &) = default ;
      TaskExecutions(TaskExecutions &&) = default ;
      TaskExecutions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskExecutions() = default ;
      TaskExecutions& operator=(const TaskExecutions &) = default ;
      TaskExecutions& operator=(TaskExecutions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->childExecutionId_ == nullptr
        && this->createDate_ == nullptr && this->endDate_ == nullptr && this->executionId_ == nullptr && this->extraData_ == nullptr && this->loop_ == nullptr
        && this->loopBatchNumber_ == nullptr && this->loopItem_ == nullptr && this->outputs_ == nullptr && this->parentTaskExecutionId_ == nullptr && this->properties_ == nullptr
        && this->startDate_ == nullptr && this->status_ == nullptr && this->statusMessage_ == nullptr && this->taskAction_ == nullptr && this->taskExecutionId_ == nullptr
        && this->taskName_ == nullptr && this->templateId_ == nullptr && this->updateDate_ == nullptr; };
      // childExecutionId Field Functions 
      bool hasChildExecutionId() const { return this->childExecutionId_ != nullptr;};
      void deleteChildExecutionId() { this->childExecutionId_ = nullptr;};
      inline string getChildExecutionId() const { DARABONBA_PTR_GET_DEFAULT(childExecutionId_, "") };
      inline TaskExecutions& setChildExecutionId(string childExecutionId) { DARABONBA_PTR_SET_VALUE(childExecutionId_, childExecutionId) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline TaskExecutions& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline TaskExecutions& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // executionId Field Functions 
      bool hasExecutionId() const { return this->executionId_ != nullptr;};
      void deleteExecutionId() { this->executionId_ = nullptr;};
      inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
      inline TaskExecutions& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


      // extraData Field Functions 
      bool hasExtraData() const { return this->extraData_ != nullptr;};
      void deleteExtraData() { this->extraData_ = nullptr;};
      inline       const Darabonba::Json & getExtraData() const { DARABONBA_GET(extraData_) };
      Darabonba::Json & getExtraData() { DARABONBA_GET(extraData_) };
      inline TaskExecutions& setExtraData(const Darabonba::Json & extraData) { DARABONBA_SET_VALUE(extraData_, extraData) };
      inline TaskExecutions& setExtraData(Darabonba::Json && extraData) { DARABONBA_SET_RVALUE(extraData_, extraData) };


      // loop Field Functions 
      bool hasLoop() const { return this->loop_ != nullptr;};
      void deleteLoop() { this->loop_ = nullptr;};
      inline       const Darabonba::Json & getLoop() const { DARABONBA_GET(loop_) };
      Darabonba::Json & getLoop() { DARABONBA_GET(loop_) };
      inline TaskExecutions& setLoop(const Darabonba::Json & loop) { DARABONBA_SET_VALUE(loop_, loop) };
      inline TaskExecutions& setLoop(Darabonba::Json && loop) { DARABONBA_SET_RVALUE(loop_, loop) };


      // loopBatchNumber Field Functions 
      bool hasLoopBatchNumber() const { return this->loopBatchNumber_ != nullptr;};
      void deleteLoopBatchNumber() { this->loopBatchNumber_ = nullptr;};
      inline int32_t getLoopBatchNumber() const { DARABONBA_PTR_GET_DEFAULT(loopBatchNumber_, 0) };
      inline TaskExecutions& setLoopBatchNumber(int32_t loopBatchNumber) { DARABONBA_PTR_SET_VALUE(loopBatchNumber_, loopBatchNumber) };


      // loopItem Field Functions 
      bool hasLoopItem() const { return this->loopItem_ != nullptr;};
      void deleteLoopItem() { this->loopItem_ = nullptr;};
      inline string getLoopItem() const { DARABONBA_PTR_GET_DEFAULT(loopItem_, "") };
      inline TaskExecutions& setLoopItem(string loopItem) { DARABONBA_PTR_SET_VALUE(loopItem_, loopItem) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline TaskExecutions& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


      // parentTaskExecutionId Field Functions 
      bool hasParentTaskExecutionId() const { return this->parentTaskExecutionId_ != nullptr;};
      void deleteParentTaskExecutionId() { this->parentTaskExecutionId_ = nullptr;};
      inline string getParentTaskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(parentTaskExecutionId_, "") };
      inline TaskExecutions& setParentTaskExecutionId(string parentTaskExecutionId) { DARABONBA_PTR_SET_VALUE(parentTaskExecutionId_, parentTaskExecutionId) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
      inline TaskExecutions& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline TaskExecutions& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskExecutions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline TaskExecutions& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      // taskAction Field Functions 
      bool hasTaskAction() const { return this->taskAction_ != nullptr;};
      void deleteTaskAction() { this->taskAction_ = nullptr;};
      inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
      inline TaskExecutions& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


      // taskExecutionId Field Functions 
      bool hasTaskExecutionId() const { return this->taskExecutionId_ != nullptr;};
      void deleteTaskExecutionId() { this->taskExecutionId_ = nullptr;};
      inline string getTaskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionId_, "") };
      inline TaskExecutions& setTaskExecutionId(string taskExecutionId) { DARABONBA_PTR_SET_VALUE(taskExecutionId_, taskExecutionId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskExecutions& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline TaskExecutions& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline TaskExecutions& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The output of the execution.
      shared_ptr<string> childExecutionId_ {};
      // The ID of the execution.
      shared_ptr<string> createDate_ {};
      // The execution ID of the parent node.
      shared_ptr<string> endDate_ {};
      // The action of the task.
      shared_ptr<string> executionId_ {};
      // The Input parameters of the task execution.
      Darabonba::Json extraData_ {};
      // The ID of the template.
      Darabonba::Json loop_ {};
      // The status information of the task execution.
      shared_ptr<int32_t> loopBatchNumber_ {};
      // The time when the execution was created.
      shared_ptr<string> loopItem_ {};
      // The status of the task.
      shared_ptr<string> outputs_ {};
      // The name of the task.
      shared_ptr<string> parentTaskExecutionId_ {};
      // Queries task executions. Multiple methods are supported to filter task executions.
      shared_ptr<string> properties_ {};
      // The elements in the loop task.
      shared_ptr<string> startDate_ {};
      // The time when the task execution stopped running.
      shared_ptr<string> status_ {};
      // The additional information.
      shared_ptr<string> statusMessage_ {};
      // The execution ID of the task.
      shared_ptr<string> taskAction_ {};
      // The time when the execution was last updated.
      shared_ptr<string> taskExecutionId_ {};
      // The time when the execution started.
      shared_ptr<string> taskName_ {};
      // The number of times for which the loop task is run.
      shared_ptr<string> templateId_ {};
      // The configuration and statistics information of the loop task. This parameter is returned only for the parent node of the loop task.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->taskExecutions_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTaskExecutionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTaskExecutionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskExecutions Field Functions 
    bool hasTaskExecutions() const { return this->taskExecutions_ != nullptr;};
    void deleteTaskExecutions() { this->taskExecutions_ = nullptr;};
    inline const vector<ListTaskExecutionsResponseBody::TaskExecutions> & getTaskExecutions() const { DARABONBA_PTR_GET_CONST(taskExecutions_, vector<ListTaskExecutionsResponseBody::TaskExecutions>) };
    inline vector<ListTaskExecutionsResponseBody::TaskExecutions> getTaskExecutions() { DARABONBA_PTR_GET(taskExecutions_, vector<ListTaskExecutionsResponseBody::TaskExecutions>) };
    inline ListTaskExecutionsResponseBody& setTaskExecutions(const vector<ListTaskExecutionsResponseBody::TaskExecutions> & taskExecutions) { DARABONBA_PTR_SET_VALUE(taskExecutions_, taskExecutions) };
    inline ListTaskExecutionsResponseBody& setTaskExecutions(vector<ListTaskExecutionsResponseBody::TaskExecutions> && taskExecutions) { DARABONBA_PTR_SET_RVALUE(taskExecutions_, taskExecutions) };


  protected:
    // The details of the task executions.
    shared_ptr<int32_t> maxResults_ {};
    // The ID of the request.
    shared_ptr<string> nextToken_ {};
    // The number of entries returned on each page.
    shared_ptr<string> requestId_ {};
    // The execution ID of the child node.
    shared_ptr<vector<ListTaskExecutionsResponseBody::TaskExecutions>> taskExecutions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
