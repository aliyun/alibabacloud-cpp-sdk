// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKEXECUTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKEXECUTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListTaskExecutionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskExecutionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDateAfter, endDateAfter_);
      DARABONBA_PTR_TO_JSON(EndDateBefore, endDateBefore_);
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(IncludeChildTaskExecution, includeChildTaskExecution_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ParentTaskExecutionId, parentTaskExecutionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(StartDateAfter, startDateAfter_);
      DARABONBA_PTR_TO_JSON(StartDateBefore, startDateBefore_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_TO_JSON(TaskExecutionId, taskExecutionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskExecutionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDateAfter, endDateAfter_);
      DARABONBA_PTR_FROM_JSON(EndDateBefore, endDateBefore_);
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(IncludeChildTaskExecution, includeChildTaskExecution_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ParentTaskExecutionId, parentTaskExecutionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(StartDateAfter, startDateAfter_);
      DARABONBA_PTR_FROM_JSON(StartDateBefore, startDateBefore_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_FROM_JSON(TaskExecutionId, taskExecutionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    ListTaskExecutionsRequest() = default ;
    ListTaskExecutionsRequest(const ListTaskExecutionsRequest &) = default ;
    ListTaskExecutionsRequest(ListTaskExecutionsRequest &&) = default ;
    ListTaskExecutionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskExecutionsRequest() = default ;
    ListTaskExecutionsRequest& operator=(const ListTaskExecutionsRequest &) = default ;
    ListTaskExecutionsRequest& operator=(ListTaskExecutionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDateAfter_ == nullptr
        && return this->endDateBefore_ == nullptr && return this->executionId_ == nullptr && return this->includeChildTaskExecution_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->parentTaskExecutionId_ == nullptr && return this->regionId_ == nullptr && return this->sortField_ == nullptr && return this->sortOrder_ == nullptr && return this->startDateAfter_ == nullptr
        && return this->startDateBefore_ == nullptr && return this->status_ == nullptr && return this->taskAction_ == nullptr && return this->taskExecutionId_ == nullptr && return this->taskName_ == nullptr; };
    // endDateAfter Field Functions 
    bool hasEndDateAfter() const { return this->endDateAfter_ != nullptr;};
    void deleteEndDateAfter() { this->endDateAfter_ = nullptr;};
    inline string endDateAfter() const { DARABONBA_PTR_GET_DEFAULT(endDateAfter_, "") };
    inline ListTaskExecutionsRequest& setEndDateAfter(string endDateAfter) { DARABONBA_PTR_SET_VALUE(endDateAfter_, endDateAfter) };


    // endDateBefore Field Functions 
    bool hasEndDateBefore() const { return this->endDateBefore_ != nullptr;};
    void deleteEndDateBefore() { this->endDateBefore_ = nullptr;};
    inline string endDateBefore() const { DARABONBA_PTR_GET_DEFAULT(endDateBefore_, "") };
    inline ListTaskExecutionsRequest& setEndDateBefore(string endDateBefore) { DARABONBA_PTR_SET_VALUE(endDateBefore_, endDateBefore) };


    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string executionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline ListTaskExecutionsRequest& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // includeChildTaskExecution Field Functions 
    bool hasIncludeChildTaskExecution() const { return this->includeChildTaskExecution_ != nullptr;};
    void deleteIncludeChildTaskExecution() { this->includeChildTaskExecution_ = nullptr;};
    inline bool includeChildTaskExecution() const { DARABONBA_PTR_GET_DEFAULT(includeChildTaskExecution_, false) };
    inline ListTaskExecutionsRequest& setIncludeChildTaskExecution(bool includeChildTaskExecution) { DARABONBA_PTR_SET_VALUE(includeChildTaskExecution_, includeChildTaskExecution) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTaskExecutionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTaskExecutionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parentTaskExecutionId Field Functions 
    bool hasParentTaskExecutionId() const { return this->parentTaskExecutionId_ != nullptr;};
    void deleteParentTaskExecutionId() { this->parentTaskExecutionId_ = nullptr;};
    inline string parentTaskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(parentTaskExecutionId_, "") };
    inline ListTaskExecutionsRequest& setParentTaskExecutionId(string parentTaskExecutionId) { DARABONBA_PTR_SET_VALUE(parentTaskExecutionId_, parentTaskExecutionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTaskExecutionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string sortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListTaskExecutionsRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListTaskExecutionsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // startDateAfter Field Functions 
    bool hasStartDateAfter() const { return this->startDateAfter_ != nullptr;};
    void deleteStartDateAfter() { this->startDateAfter_ = nullptr;};
    inline string startDateAfter() const { DARABONBA_PTR_GET_DEFAULT(startDateAfter_, "") };
    inline ListTaskExecutionsRequest& setStartDateAfter(string startDateAfter) { DARABONBA_PTR_SET_VALUE(startDateAfter_, startDateAfter) };


    // startDateBefore Field Functions 
    bool hasStartDateBefore() const { return this->startDateBefore_ != nullptr;};
    void deleteStartDateBefore() { this->startDateBefore_ = nullptr;};
    inline string startDateBefore() const { DARABONBA_PTR_GET_DEFAULT(startDateBefore_, "") };
    inline ListTaskExecutionsRequest& setStartDateBefore(string startDateBefore) { DARABONBA_PTR_SET_VALUE(startDateBefore_, startDateBefore) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTaskExecutionsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline ListTaskExecutionsRequest& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // taskExecutionId Field Functions 
    bool hasTaskExecutionId() const { return this->taskExecutionId_ != nullptr;};
    void deleteTaskExecutionId() { this->taskExecutionId_ = nullptr;};
    inline string taskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionId_, "") };
    inline ListTaskExecutionsRequest& setTaskExecutionId(string taskExecutionId) { DARABONBA_PTR_SET_VALUE(taskExecutionId_, taskExecutionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListTaskExecutionsRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The execution ID of the task.
    std::shared_ptr<string> endDateAfter_ = nullptr;
    // Specifies to query task executions that stop running at or later than the specified time.
    std::shared_ptr<string> endDateBefore_ = nullptr;
    // The status of the execution. Valid values: Running, Started, Success, Failed, Waiting, Cancelled, Pending, and Skipped.
    std::shared_ptr<string> executionId_ = nullptr;
    // The number of entries to return on each page. Valid values: 20 to 100. Default value: 50.
    std::shared_ptr<bool> includeChildTaskExecution_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Sorts the task executions to query. Valid values:
    // 
    // *   **StartDate**: specifies that the task executions are sorted based on the time when they are created. This is the default value.
    // *   **EndDate**: specifies that the task executions are sorted based on the time when the time when they stop running.
    // *   **Status**: specifies that the task executions are sorted based on their statuses.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Specifies whether to show the child nodes in the loop task. Default value: False.
    std::shared_ptr<string> parentTaskExecutionId_ = nullptr;
    // The ID of the execution.
    std::shared_ptr<string> regionId_ = nullptr;
    // The order in which you want to sort the task executions to query. Valid values:
    // 
    // *   **Ascending**: ascending order.
    // *   **Descending**: descending order. This is the default value.
    std::shared_ptr<string> sortField_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<string> sortOrder_ = nullptr;
    // Specifies to query task executions that stop running at or before the specified time.
    std::shared_ptr<string> startDateAfter_ = nullptr;
    // Specifies to query task executions that start to run at or later than the specified time.
    std::shared_ptr<string> startDateBefore_ = nullptr;
    // Specifies to query task executions that start to run at or before the specified time.
    std::shared_ptr<string> status_ = nullptr;
    // The execution ID of the parent node. In a loop task, set this parameter to the execution ID of the parent node.
    std::shared_ptr<string> taskAction_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskExecutionId_ = nullptr;
    // The action of the task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
