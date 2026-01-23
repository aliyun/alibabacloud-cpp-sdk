// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTSUBSCRIPTIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTSUBSCRIPTIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetArtifactSubscriptionTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactSubscriptionTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
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
    friend void from_json(const Darabonba::Json& j, GetArtifactSubscriptionTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    GetArtifactSubscriptionTaskResponseBody() = default ;
    GetArtifactSubscriptionTaskResponseBody(const GetArtifactSubscriptionTaskResponseBody &) = default ;
    GetArtifactSubscriptionTaskResponseBody(GetArtifactSubscriptionTaskResponseBody &&) = default ;
    GetArtifactSubscriptionTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactSubscriptionTaskResponseBody() = default ;
    GetArtifactSubscriptionTaskResponseBody& operator=(const GetArtifactSubscriptionTaskResponseBody &) = default ;
    GetArtifactSubscriptionTaskResponseBody& operator=(GetArtifactSubscriptionTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactType_ == nullptr
        && this->code_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->isSuccess_ == nullptr && this->message_ == nullptr
        && this->namespaceName_ == nullptr && this->repoName_ == nullptr && this->requestId_ == nullptr && this->sourceNamespaceName_ == nullptr && this->sourceProvider_ == nullptr
        && this->sourceRepoName_ == nullptr && this->sourceRepoType_ == nullptr && this->startTime_ == nullptr && this->tagSubscriptionCount_ == nullptr && this->tagTotalCount_ == nullptr
        && this->taskId_ == nullptr && this->taskResult_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetArtifactSubscriptionTaskResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetArtifactSubscriptionTaskResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceNamespaceName Field Functions 
    bool hasSourceNamespaceName() const { return this->sourceNamespaceName_ != nullptr;};
    void deleteSourceNamespaceName() { this->sourceNamespaceName_ = nullptr;};
    inline string getSourceNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(sourceNamespaceName_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setSourceNamespaceName(string sourceNamespaceName) { DARABONBA_PTR_SET_VALUE(sourceNamespaceName_, sourceNamespaceName) };


    // sourceProvider Field Functions 
    bool hasSourceProvider() const { return this->sourceProvider_ != nullptr;};
    void deleteSourceProvider() { this->sourceProvider_ = nullptr;};
    inline string getSourceProvider() const { DARABONBA_PTR_GET_DEFAULT(sourceProvider_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setSourceProvider(string sourceProvider) { DARABONBA_PTR_SET_VALUE(sourceProvider_, sourceProvider) };


    // sourceRepoName Field Functions 
    bool hasSourceRepoName() const { return this->sourceRepoName_ != nullptr;};
    void deleteSourceRepoName() { this->sourceRepoName_ = nullptr;};
    inline string getSourceRepoName() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoName_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setSourceRepoName(string sourceRepoName) { DARABONBA_PTR_SET_VALUE(sourceRepoName_, sourceRepoName) };


    // sourceRepoType Field Functions 
    bool hasSourceRepoType() const { return this->sourceRepoType_ != nullptr;};
    void deleteSourceRepoType() { this->sourceRepoType_ = nullptr;};
    inline string getSourceRepoType() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoType_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setSourceRepoType(string sourceRepoType) { DARABONBA_PTR_SET_VALUE(sourceRepoType_, sourceRepoType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetArtifactSubscriptionTaskResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagSubscriptionCount Field Functions 
    bool hasTagSubscriptionCount() const { return this->tagSubscriptionCount_ != nullptr;};
    void deleteTagSubscriptionCount() { this->tagSubscriptionCount_ = nullptr;};
    inline int64_t getTagSubscriptionCount() const { DARABONBA_PTR_GET_DEFAULT(tagSubscriptionCount_, 0L) };
    inline GetArtifactSubscriptionTaskResponseBody& setTagSubscriptionCount(int64_t tagSubscriptionCount) { DARABONBA_PTR_SET_VALUE(tagSubscriptionCount_, tagSubscriptionCount) };


    // tagTotalCount Field Functions 
    bool hasTagTotalCount() const { return this->tagTotalCount_ != nullptr;};
    void deleteTagTotalCount() { this->tagTotalCount_ = nullptr;};
    inline int64_t getTagTotalCount() const { DARABONBA_PTR_GET_DEFAULT(tagTotalCount_, 0L) };
    inline GetArtifactSubscriptionTaskResponseBody& setTagTotalCount(int64_t tagTotalCount) { DARABONBA_PTR_SET_VALUE(tagTotalCount_, tagTotalCount) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline string getTaskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The artifact type.
    shared_ptr<string> artifactType_ {};
    // The return value.
    shared_ptr<string> code_ {};
    // The end time of the artifact subscription task.
    shared_ptr<int64_t> endTime_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // Indicates whether the API request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    shared_ptr<bool> isSuccess_ {};
    // The return message.
    shared_ptr<string> message_ {};
    // The name of the Container Registry namespace.
    shared_ptr<string> namespaceName_ {};
    // The name of the Container Registry repository.
    shared_ptr<string> repoName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The name of the source namespace.
    shared_ptr<string> sourceNamespaceName_ {};
    // The artifact source.
    shared_ptr<string> sourceProvider_ {};
    // The name of the source repository.
    shared_ptr<string> sourceRepoName_ {};
    // The type of the source repository.
    shared_ptr<string> sourceRepoType_ {};
    // The start time of the artifact subscription task.
    shared_ptr<int64_t> startTime_ {};
    // The total subscribed tags.
    shared_ptr<int64_t> tagSubscriptionCount_ {};
    // The total number of tags.
    shared_ptr<int64_t> tagTotalCount_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
    // The task results.
    shared_ptr<string> taskResult_ {};
    // The status of the task.
    shared_ptr<string> taskStatus_ {};
    // The type of the task. Valid values:
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
