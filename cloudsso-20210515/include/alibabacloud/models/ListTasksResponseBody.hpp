// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ListTasksResponseBody() = default ;
    ListTasksResponseBody(const ListTasksResponseBody &) = default ;
    ListTasksResponseBody(ListTasksResponseBody &&) = default ;
    ListTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksResponseBody() = default ;
    ListTasksResponseBody& operator=(const ListTasksResponseBody &) = default ;
    ListTasksResponseBody& operator=(ListTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
        DARABONBA_PTR_TO_JSON(AccessConfigurationName, accessConfigurationName_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FailureReason, failureReason_);
        DARABONBA_PTR_TO_JSON(OriginTargetId, originTargetId_);
        DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_TO_JSON(TargetPathName, targetPathName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
        DARABONBA_PTR_FROM_JSON(AccessConfigurationName, accessConfigurationName_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FailureReason, failureReason_);
        DARABONBA_PTR_FROM_JSON(OriginTargetId, originTargetId_);
        DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_FROM_JSON(TargetPathName, targetPathName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->accessConfigurationName_ == nullptr && this->endTime_ == nullptr && this->failureReason_ == nullptr && this->originTargetId_ == nullptr && this->principalId_ == nullptr
        && this->principalName_ == nullptr && this->principalType_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->targetId_ == nullptr
        && this->targetName_ == nullptr && this->targetPath_ == nullptr && this->targetPathName_ == nullptr && this->targetType_ == nullptr && this->taskId_ == nullptr
        && this->taskType_ == nullptr; };
      // accessConfigurationId Field Functions 
      bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
      void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
      inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
      inline Tasks& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


      // accessConfigurationName Field Functions 
      bool hasAccessConfigurationName() const { return this->accessConfigurationName_ != nullptr;};
      void deleteAccessConfigurationName() { this->accessConfigurationName_ = nullptr;};
      inline string getAccessConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationName_, "") };
      inline Tasks& setAccessConfigurationName(string accessConfigurationName) { DARABONBA_PTR_SET_VALUE(accessConfigurationName_, accessConfigurationName) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Tasks& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // failureReason Field Functions 
      bool hasFailureReason() const { return this->failureReason_ != nullptr;};
      void deleteFailureReason() { this->failureReason_ = nullptr;};
      inline string getFailureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
      inline Tasks& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


      // originTargetId Field Functions 
      bool hasOriginTargetId() const { return this->originTargetId_ != nullptr;};
      void deleteOriginTargetId() { this->originTargetId_ = nullptr;};
      inline string getOriginTargetId() const { DARABONBA_PTR_GET_DEFAULT(originTargetId_, "") };
      inline Tasks& setOriginTargetId(string originTargetId) { DARABONBA_PTR_SET_VALUE(originTargetId_, originTargetId) };


      // principalId Field Functions 
      bool hasPrincipalId() const { return this->principalId_ != nullptr;};
      void deletePrincipalId() { this->principalId_ = nullptr;};
      inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
      inline Tasks& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


      // principalName Field Functions 
      bool hasPrincipalName() const { return this->principalName_ != nullptr;};
      void deletePrincipalName() { this->principalName_ = nullptr;};
      inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
      inline Tasks& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline Tasks& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Tasks& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Tasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Tasks& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline Tasks& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetPath Field Functions 
      bool hasTargetPath() const { return this->targetPath_ != nullptr;};
      void deleteTargetPath() { this->targetPath_ = nullptr;};
      inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
      inline Tasks& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


      // targetPathName Field Functions 
      bool hasTargetPathName() const { return this->targetPathName_ != nullptr;};
      void deleteTargetPathName() { this->targetPathName_ = nullptr;};
      inline string getTargetPathName() const { DARABONBA_PTR_GET_DEFAULT(targetPathName_, "") };
      inline Tasks& setTargetPathName(string targetPathName) { DARABONBA_PTR_SET_VALUE(targetPathName_, targetPathName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Tasks& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Tasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Tasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The ID of the access configuration.
      shared_ptr<string> accessConfigurationId_ {};
      // The name of the access configuration.
      shared_ptr<string> accessConfigurationName_ {};
      // The end time of the task.
      shared_ptr<string> endTime_ {};
      // The cause of the task failure.
      // 
      // > This parameter is returned only when the value of `Status` is `Failed`.
      shared_ptr<string> failureReason_ {};
      shared_ptr<string> originTargetId_ {};
      // The ID of the CloudSSO identity.
      shared_ptr<string> principalId_ {};
      // The name of the CloudSSO identity.
      shared_ptr<string> principalName_ {};
      // The type of the CloudSSO identity. Valid values:
      // 
      // - User
      // 
      // - Group
      shared_ptr<string> principalType_ {};
      // The start time of the task.
      shared_ptr<string> startTime_ {};
      // The task status. Valid values:
      // 
      // - InProgress: The task is running.
      // 
      // - Success: The task is successful.
      // 
      // - Failed: The task failed.
      shared_ptr<string> status_ {};
      // The ID of the task object.
      shared_ptr<string> targetId_ {};
      // The name of the task object.
      shared_ptr<string> targetName_ {};
      // The path ID of the task object in the resource directory.
      shared_ptr<string> targetPath_ {};
      // The path name of the task object in the resource directory.
      shared_ptr<string> targetPathName_ {};
      // The type of the task object.
      // 
      // The value is fixed as RD-Account, which indicates the accounts in the resource directory.
      shared_ptr<string> targetType_ {};
      // The ID of the job.
      shared_ptr<string> taskId_ {};
      // The task type. Valid values:
      // 
      // - ProvisionAccessConfiguration: An access configuration is provisioned.
      // 
      // - DeprovisionAccessConfiguration: An access configuration is de-provisioned.
      // 
      // - CreateAccessAssignment: Access permissions on an account in the resource directory are assigned.
      // 
      // - DeleteAccessAssignment: Access permissions on an account in the resource directory are removed.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->tasks_ == nullptr && this->totalCounts_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListTasksResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ListTasksResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ListTasksResponseBody::Tasks>) };
    inline vector<ListTasksResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ListTasksResponseBody::Tasks>) };
    inline ListTasksResponseBody& setTasks(const vector<ListTasksResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListTasksResponseBody& setTasks(vector<ListTasksResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ListTasksResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // Indicates whether the queried entries are truncated. Valid values:
    // 
    // - true
    // 
    // - false
    shared_ptr<bool> isTruncated_ {};
    // The maximum number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    // 
    // > This parameter is returned only when the value of `IsTruncated` is `true`.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The tasks.
    shared_ptr<vector<ListTasksResponseBody::Tasks>> tasks_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
