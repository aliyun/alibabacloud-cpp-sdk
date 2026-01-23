// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTSUBSCRIPTIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTSUBSCRIPTIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListArtifactSubscriptionTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactSubscriptionTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactSubscriptionTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListArtifactSubscriptionTaskResponseBody() = default ;
    ListArtifactSubscriptionTaskResponseBody(const ListArtifactSubscriptionTaskResponseBody &) = default ;
    ListArtifactSubscriptionTaskResponseBody(ListArtifactSubscriptionTaskResponseBody &&) = default ;
    ListArtifactSubscriptionTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactSubscriptionTaskResponseBody() = default ;
    ListArtifactSubscriptionTaskResponseBody& operator=(const ListArtifactSubscriptionTaskResponseBody &) = default ;
    ListArtifactSubscriptionTaskResponseBody& operator=(ListArtifactSubscriptionTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(SourceNamespaceName, sourceNamespaceName_);
        DARABONBA_PTR_TO_JSON(SourceProvider, sourceProvider_);
        DARABONBA_PTR_TO_JSON(SourceRepoName, sourceRepoName_);
        DARABONBA_PTR_TO_JSON(SourceRepoType, sourceRepoType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TagSubscriptionCount, tagSubscriptionCount_);
        DARABONBA_PTR_TO_JSON(TagTotalCount, tagTotalCount_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(SourceNamespaceName, sourceNamespaceName_);
        DARABONBA_PTR_FROM_JSON(SourceProvider, sourceProvider_);
        DARABONBA_PTR_FROM_JSON(SourceRepoName, sourceRepoName_);
        DARABONBA_PTR_FROM_JSON(SourceRepoType, sourceRepoType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TagSubscriptionCount, tagSubscriptionCount_);
        DARABONBA_PTR_FROM_JSON(TagTotalCount, tagTotalCount_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
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
      virtual bool empty() const override { return this->artifactType_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->message_ == nullptr && this->namespaceName_ == nullptr && this->repoName_ == nullptr
        && this->sourceNamespaceName_ == nullptr && this->sourceProvider_ == nullptr && this->sourceRepoName_ == nullptr && this->sourceRepoType_ == nullptr && this->startTime_ == nullptr
        && this->tagSubscriptionCount_ == nullptr && this->tagTotalCount_ == nullptr && this->taskId_ == nullptr && this->taskResult_ == nullptr && this->taskStatus_ == nullptr
        && this->taskType_ == nullptr; };
      // artifactType Field Functions 
      bool hasArtifactType() const { return this->artifactType_ != nullptr;};
      void deleteArtifactType() { this->artifactType_ = nullptr;};
      inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
      inline Tasks& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Tasks& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Tasks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Tasks& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline Tasks& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline Tasks& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // sourceNamespaceName Field Functions 
      bool hasSourceNamespaceName() const { return this->sourceNamespaceName_ != nullptr;};
      void deleteSourceNamespaceName() { this->sourceNamespaceName_ = nullptr;};
      inline string getSourceNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(sourceNamespaceName_, "") };
      inline Tasks& setSourceNamespaceName(string sourceNamespaceName) { DARABONBA_PTR_SET_VALUE(sourceNamespaceName_, sourceNamespaceName) };


      // sourceProvider Field Functions 
      bool hasSourceProvider() const { return this->sourceProvider_ != nullptr;};
      void deleteSourceProvider() { this->sourceProvider_ = nullptr;};
      inline string getSourceProvider() const { DARABONBA_PTR_GET_DEFAULT(sourceProvider_, "") };
      inline Tasks& setSourceProvider(string sourceProvider) { DARABONBA_PTR_SET_VALUE(sourceProvider_, sourceProvider) };


      // sourceRepoName Field Functions 
      bool hasSourceRepoName() const { return this->sourceRepoName_ != nullptr;};
      void deleteSourceRepoName() { this->sourceRepoName_ = nullptr;};
      inline string getSourceRepoName() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoName_, "") };
      inline Tasks& setSourceRepoName(string sourceRepoName) { DARABONBA_PTR_SET_VALUE(sourceRepoName_, sourceRepoName) };


      // sourceRepoType Field Functions 
      bool hasSourceRepoType() const { return this->sourceRepoType_ != nullptr;};
      void deleteSourceRepoType() { this->sourceRepoType_ = nullptr;};
      inline string getSourceRepoType() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoType_, "") };
      inline Tasks& setSourceRepoType(string sourceRepoType) { DARABONBA_PTR_SET_VALUE(sourceRepoType_, sourceRepoType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Tasks& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // tagSubscriptionCount Field Functions 
      bool hasTagSubscriptionCount() const { return this->tagSubscriptionCount_ != nullptr;};
      void deleteTagSubscriptionCount() { this->tagSubscriptionCount_ = nullptr;};
      inline int64_t getTagSubscriptionCount() const { DARABONBA_PTR_GET_DEFAULT(tagSubscriptionCount_, 0L) };
      inline Tasks& setTagSubscriptionCount(int64_t tagSubscriptionCount) { DARABONBA_PTR_SET_VALUE(tagSubscriptionCount_, tagSubscriptionCount) };


      // tagTotalCount Field Functions 
      bool hasTagTotalCount() const { return this->tagTotalCount_ != nullptr;};
      void deleteTagTotalCount() { this->tagTotalCount_ = nullptr;};
      inline int64_t getTagTotalCount() const { DARABONBA_PTR_GET_DEFAULT(tagTotalCount_, 0L) };
      inline Tasks& setTagTotalCount(int64_t tagTotalCount) { DARABONBA_PTR_SET_VALUE(tagTotalCount_, tagTotalCount) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Tasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskResult Field Functions 
      bool hasTaskResult() const { return this->taskResult_ != nullptr;};
      void deleteTaskResult() { this->taskResult_ = nullptr;};
      inline string getTaskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
      inline Tasks& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Tasks& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Tasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The type of the artifact.
      shared_ptr<string> artifactType_ {};
      // The end time of the artifact subscription task.
      shared_ptr<string> endTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The returned message.
      shared_ptr<string> message_ {};
      // The name of the namespace.
      shared_ptr<string> namespaceName_ {};
      // The name of the repository.
      shared_ptr<string> repoName_ {};
      // The name of the source namespace.
      shared_ptr<string> sourceNamespaceName_ {};
      // The artifact source.
      shared_ptr<string> sourceProvider_ {};
      // The name of the source repository.
      shared_ptr<string> sourceRepoName_ {};
      // The type of the source artifact.
      shared_ptr<string> sourceRepoType_ {};
      // The start time of the artifact subscription task.
      shared_ptr<string> startTime_ {};
      // The total number of subscribed tags.
      shared_ptr<int64_t> tagSubscriptionCount_ {};
      // The total number of tags.
      shared_ptr<int64_t> tagTotalCount_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task result.
      shared_ptr<string> taskResult_ {};
      // The status of the task.
      shared_ptr<string> taskStatus_ {};
      // The type of the task.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tasks_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListArtifactSubscriptionTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListArtifactSubscriptionTaskResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListArtifactSubscriptionTaskResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListArtifactSubscriptionTaskResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListArtifactSubscriptionTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ListArtifactSubscriptionTaskResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ListArtifactSubscriptionTaskResponseBody::Tasks>) };
    inline vector<ListArtifactSubscriptionTaskResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ListArtifactSubscriptionTaskResponseBody::Tasks>) };
    inline ListArtifactSubscriptionTaskResponseBody& setTasks(const vector<ListArtifactSubscriptionTaskResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListArtifactSubscriptionTaskResponseBody& setTasks(vector<ListArtifactSubscriptionTaskResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListArtifactSubscriptionTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the API request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    shared_ptr<bool> isSuccess_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried artifact subscription tasks.
    shared_ptr<vector<ListArtifactSubscriptionTaskResponseBody::Tasks>> tasks_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
