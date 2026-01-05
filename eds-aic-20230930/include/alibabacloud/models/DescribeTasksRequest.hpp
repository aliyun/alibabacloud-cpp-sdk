// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSREQUEST_HPP_
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
  class DescribeTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(ParentTaskId, parentTaskId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskStatuses, taskStatuses_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TaskTypes, taskTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(ParentTaskId, parentTaskId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskStatuses, taskStatuses_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TaskTypes, taskTypes_);
    };
    DescribeTasksRequest() = default ;
    DescribeTasksRequest(const DescribeTasksRequest &) = default ;
    DescribeTasksRequest(DescribeTasksRequest &&) = default ;
    DescribeTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTasksRequest() = default ;
    DescribeTasksRequest& operator=(const DescribeTasksRequest &) = default ;
    DescribeTasksRequest& operator=(DescribeTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->invokeId_ == nullptr && this->level_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->param_ == nullptr && this->parentTaskId_ == nullptr && this->resourceIds_ == nullptr && this->taskIds_ == nullptr && this->taskStatus_ == nullptr
        && this->taskStatuses_ == nullptr && this->taskType_ == nullptr && this->taskTypes_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTasksRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeTasksRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline DescribeTasksRequest& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline DescribeTasksRequest& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeTasksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline DescribeTasksRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // parentTaskId Field Functions 
    bool hasParentTaskId() const { return this->parentTaskId_ != nullptr;};
    void deleteParentTaskId() { this->parentTaskId_ = nullptr;};
    inline string getParentTaskId() const { DARABONBA_PTR_GET_DEFAULT(parentTaskId_, "") };
    inline DescribeTasksRequest& setParentTaskId(string parentTaskId) { DARABONBA_PTR_SET_VALUE(parentTaskId_, parentTaskId) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline DescribeTasksRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DescribeTasksRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline DescribeTasksRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline DescribeTasksRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeTasksRequest& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskStatuses Field Functions 
    bool hasTaskStatuses() const { return this->taskStatuses_ != nullptr;};
    void deleteTaskStatuses() { this->taskStatuses_ = nullptr;};
    inline const vector<string> & getTaskStatuses() const { DARABONBA_PTR_GET_CONST(taskStatuses_, vector<string>) };
    inline vector<string> getTaskStatuses() { DARABONBA_PTR_GET(taskStatuses_, vector<string>) };
    inline DescribeTasksRequest& setTaskStatuses(const vector<string> & taskStatuses) { DARABONBA_PTR_SET_VALUE(taskStatuses_, taskStatuses) };
    inline DescribeTasksRequest& setTaskStatuses(vector<string> && taskStatuses) { DARABONBA_PTR_SET_RVALUE(taskStatuses_, taskStatuses) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeTasksRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // taskTypes Field Functions 
    bool hasTaskTypes() const { return this->taskTypes_ != nullptr;};
    void deleteTaskTypes() { this->taskTypes_ = nullptr;};
    inline const vector<string> & getTaskTypes() const { DARABONBA_PTR_GET_CONST(taskTypes_, vector<string>) };
    inline vector<string> getTaskTypes() { DARABONBA_PTR_GET(taskTypes_, vector<string>) };
    inline DescribeTasksRequest& setTaskTypes(const vector<string> & taskTypes) { DARABONBA_PTR_SET_VALUE(taskTypes_, taskTypes) };
    inline DescribeTasksRequest& setTaskTypes(vector<string> && taskTypes) { DARABONBA_PTR_SET_RVALUE(taskTypes_, taskTypes) };


  protected:
    // The ID of the cloud phone instance.
    shared_ptr<string> instanceId_ {};
    // The name of the cloud phone instance.
    shared_ptr<string> instanceName_ {};
    // The ID of the command execution. You can set the value to the last returned request ID.
    shared_ptr<string> invokeId_ {};
    // The level of the task. A value of 1 specifies a batch task. A value of 2 specifies an instance-level task.
    shared_ptr<int32_t> level_ {};
    // The maximum number of entries per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. If the parameter is left empty, the data is queried from the first entry.
    shared_ptr<string> nextToken_ {};
    // The extension field.
    shared_ptr<string> param_ {};
    // The ID of the parent task.
    shared_ptr<string> parentTaskId_ {};
    // The IDs of the resources.
    shared_ptr<vector<string>> resourceIds_ {};
    // The IDs of the tasks.
    shared_ptr<vector<string>> taskIds_ {};
    // The state of the task.
    // 
    // Valid values:
    // 
    // *   PartFinished: The task is partially successful.
    // *   Finished: The task is completed.
    // *   Failed: The task failed.
    // *   Skipped: The task is skipped.
    // *   Processing: The task is running.
    // *   Waiting: The task is in queue.
    shared_ptr<string> taskStatus_ {};
    // The status of the tasks.
    shared_ptr<vector<string>> taskStatuses_ {};
    // The type of the task.
    // 
    // Valid values:
    // 
    // *   BackupFile: backs up files.
    // *   StopInstance: stops cloud phone instances.
    // *   RebootInstance: restarts cloud phone instances.
    // *   StartApp: starts apps.
    // *   SendFile: uploads files.
    // *   RunCommand: sends remote command.
    // *   RestartApp: restarts apps.
    // *   ResetInstance: resets cloud phone instances.
    // *   RecoverFile: recovers files.
    // *   UninstallApp: uninstalls apps.
    // *   StopApp: stops apps.
    // *   Screenshot: takes screenshots.
    // *   InstallApp: installs apps.
    // *   FetchFile: downloads files.
    // *   UpdateGroupImage: replaces images.
    // *   StartInstance: starts instances.
    shared_ptr<string> taskType_ {};
    // The types of the tasks.
    shared_ptr<vector<string>> taskTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
