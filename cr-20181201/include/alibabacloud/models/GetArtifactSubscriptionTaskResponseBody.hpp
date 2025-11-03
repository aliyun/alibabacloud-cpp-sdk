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
        && return this->code_ == nullptr && return this->endTime_ == nullptr && return this->instanceId_ == nullptr && return this->isSuccess_ == nullptr && return this->message_ == nullptr
        && return this->namespaceName_ == nullptr && return this->repoName_ == nullptr && return this->requestId_ == nullptr && return this->sourceNamespaceName_ == nullptr && return this->sourceProvider_ == nullptr
        && return this->sourceRepoName_ == nullptr && return this->sourceRepoType_ == nullptr && return this->startTime_ == nullptr && return this->tagSubscriptionCount_ == nullptr && return this->tagTotalCount_ == nullptr
        && return this->taskId_ == nullptr && return this->taskResult_ == nullptr && return this->taskStatus_ == nullptr && return this->taskType_ == nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetArtifactSubscriptionTaskResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetArtifactSubscriptionTaskResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceNamespaceName Field Functions 
    bool hasSourceNamespaceName() const { return this->sourceNamespaceName_ != nullptr;};
    void deleteSourceNamespaceName() { this->sourceNamespaceName_ = nullptr;};
    inline string sourceNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(sourceNamespaceName_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setSourceNamespaceName(string sourceNamespaceName) { DARABONBA_PTR_SET_VALUE(sourceNamespaceName_, sourceNamespaceName) };


    // sourceProvider Field Functions 
    bool hasSourceProvider() const { return this->sourceProvider_ != nullptr;};
    void deleteSourceProvider() { this->sourceProvider_ = nullptr;};
    inline string sourceProvider() const { DARABONBA_PTR_GET_DEFAULT(sourceProvider_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setSourceProvider(string sourceProvider) { DARABONBA_PTR_SET_VALUE(sourceProvider_, sourceProvider) };


    // sourceRepoName Field Functions 
    bool hasSourceRepoName() const { return this->sourceRepoName_ != nullptr;};
    void deleteSourceRepoName() { this->sourceRepoName_ = nullptr;};
    inline string sourceRepoName() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoName_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setSourceRepoName(string sourceRepoName) { DARABONBA_PTR_SET_VALUE(sourceRepoName_, sourceRepoName) };


    // sourceRepoType Field Functions 
    bool hasSourceRepoType() const { return this->sourceRepoType_ != nullptr;};
    void deleteSourceRepoType() { this->sourceRepoType_ = nullptr;};
    inline string sourceRepoType() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoType_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setSourceRepoType(string sourceRepoType) { DARABONBA_PTR_SET_VALUE(sourceRepoType_, sourceRepoType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetArtifactSubscriptionTaskResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagSubscriptionCount Field Functions 
    bool hasTagSubscriptionCount() const { return this->tagSubscriptionCount_ != nullptr;};
    void deleteTagSubscriptionCount() { this->tagSubscriptionCount_ = nullptr;};
    inline int64_t tagSubscriptionCount() const { DARABONBA_PTR_GET_DEFAULT(tagSubscriptionCount_, 0L) };
    inline GetArtifactSubscriptionTaskResponseBody& setTagSubscriptionCount(int64_t tagSubscriptionCount) { DARABONBA_PTR_SET_VALUE(tagSubscriptionCount_, tagSubscriptionCount) };


    // tagTotalCount Field Functions 
    bool hasTagTotalCount() const { return this->tagTotalCount_ != nullptr;};
    void deleteTagTotalCount() { this->tagTotalCount_ = nullptr;};
    inline int64_t tagTotalCount() const { DARABONBA_PTR_GET_DEFAULT(tagTotalCount_, 0L) };
    inline GetArtifactSubscriptionTaskResponseBody& setTagTotalCount(int64_t tagTotalCount) { DARABONBA_PTR_SET_VALUE(tagTotalCount_, tagTotalCount) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline string taskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetArtifactSubscriptionTaskResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The artifact type.
    std::shared_ptr<string> artifactType_ = nullptr;
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // The end time of the artifact subscription task.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the API request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The return message.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the Container Registry namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The name of the Container Registry repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the source namespace.
    std::shared_ptr<string> sourceNamespaceName_ = nullptr;
    // The artifact source.
    std::shared_ptr<string> sourceProvider_ = nullptr;
    // The name of the source repository.
    std::shared_ptr<string> sourceRepoName_ = nullptr;
    // The type of the source repository.
    std::shared_ptr<string> sourceRepoType_ = nullptr;
    // The start time of the artifact subscription task.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The total subscribed tags.
    std::shared_ptr<int64_t> tagSubscriptionCount_ = nullptr;
    // The total number of tags.
    std::shared_ptr<int64_t> tagTotalCount_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The task results.
    std::shared_ptr<string> taskResult_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The type of the task. Valid values:
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
