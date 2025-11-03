// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTSUBSCRIPTIONTASKRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTSUBSCRIPTIONTASKRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListArtifactSubscriptionTaskResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactSubscriptionTaskResponseBodyTasks& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListArtifactSubscriptionTaskResponseBodyTasks& obj) { 
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
    ListArtifactSubscriptionTaskResponseBodyTasks() = default ;
    ListArtifactSubscriptionTaskResponseBodyTasks(const ListArtifactSubscriptionTaskResponseBodyTasks &) = default ;
    ListArtifactSubscriptionTaskResponseBodyTasks(ListArtifactSubscriptionTaskResponseBodyTasks &&) = default ;
    ListArtifactSubscriptionTaskResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactSubscriptionTaskResponseBodyTasks() = default ;
    ListArtifactSubscriptionTaskResponseBodyTasks& operator=(const ListArtifactSubscriptionTaskResponseBodyTasks &) = default ;
    ListArtifactSubscriptionTaskResponseBodyTasks& operator=(ListArtifactSubscriptionTaskResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactType_ == nullptr
        && return this->endTime_ == nullptr && return this->instanceId_ == nullptr && return this->message_ == nullptr && return this->namespaceName_ == nullptr && return this->repoName_ == nullptr
        && return this->sourceNamespaceName_ == nullptr && return this->sourceProvider_ == nullptr && return this->sourceRepoName_ == nullptr && return this->sourceRepoType_ == nullptr && return this->startTime_ == nullptr
        && return this->tagSubscriptionCount_ == nullptr && return this->tagTotalCount_ == nullptr && return this->taskId_ == nullptr && return this->taskResult_ == nullptr && return this->taskStatus_ == nullptr
        && return this->taskType_ == nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // sourceNamespaceName Field Functions 
    bool hasSourceNamespaceName() const { return this->sourceNamespaceName_ != nullptr;};
    void deleteSourceNamespaceName() { this->sourceNamespaceName_ = nullptr;};
    inline string sourceNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(sourceNamespaceName_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setSourceNamespaceName(string sourceNamespaceName) { DARABONBA_PTR_SET_VALUE(sourceNamespaceName_, sourceNamespaceName) };


    // sourceProvider Field Functions 
    bool hasSourceProvider() const { return this->sourceProvider_ != nullptr;};
    void deleteSourceProvider() { this->sourceProvider_ = nullptr;};
    inline string sourceProvider() const { DARABONBA_PTR_GET_DEFAULT(sourceProvider_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setSourceProvider(string sourceProvider) { DARABONBA_PTR_SET_VALUE(sourceProvider_, sourceProvider) };


    // sourceRepoName Field Functions 
    bool hasSourceRepoName() const { return this->sourceRepoName_ != nullptr;};
    void deleteSourceRepoName() { this->sourceRepoName_ = nullptr;};
    inline string sourceRepoName() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoName_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setSourceRepoName(string sourceRepoName) { DARABONBA_PTR_SET_VALUE(sourceRepoName_, sourceRepoName) };


    // sourceRepoType Field Functions 
    bool hasSourceRepoType() const { return this->sourceRepoType_ != nullptr;};
    void deleteSourceRepoType() { this->sourceRepoType_ = nullptr;};
    inline string sourceRepoType() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoType_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setSourceRepoType(string sourceRepoType) { DARABONBA_PTR_SET_VALUE(sourceRepoType_, sourceRepoType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagSubscriptionCount Field Functions 
    bool hasTagSubscriptionCount() const { return this->tagSubscriptionCount_ != nullptr;};
    void deleteTagSubscriptionCount() { this->tagSubscriptionCount_ = nullptr;};
    inline int64_t tagSubscriptionCount() const { DARABONBA_PTR_GET_DEFAULT(tagSubscriptionCount_, 0L) };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setTagSubscriptionCount(int64_t tagSubscriptionCount) { DARABONBA_PTR_SET_VALUE(tagSubscriptionCount_, tagSubscriptionCount) };


    // tagTotalCount Field Functions 
    bool hasTagTotalCount() const { return this->tagTotalCount_ != nullptr;};
    void deleteTagTotalCount() { this->tagTotalCount_ = nullptr;};
    inline int64_t tagTotalCount() const { DARABONBA_PTR_GET_DEFAULT(tagTotalCount_, 0L) };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setTagTotalCount(int64_t tagTotalCount) { DARABONBA_PTR_SET_VALUE(tagTotalCount_, tagTotalCount) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline string taskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListArtifactSubscriptionTaskResponseBodyTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The type of the artifact.
    std::shared_ptr<string> artifactType_ = nullptr;
    // The end time of the artifact subscription task.
    std::shared_ptr<string> endTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The name of the repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The name of the source namespace.
    std::shared_ptr<string> sourceNamespaceName_ = nullptr;
    // The artifact source.
    std::shared_ptr<string> sourceProvider_ = nullptr;
    // The name of the source repository.
    std::shared_ptr<string> sourceRepoName_ = nullptr;
    // The type of the source artifact.
    std::shared_ptr<string> sourceRepoType_ = nullptr;
    // The start time of the artifact subscription task.
    std::shared_ptr<string> startTime_ = nullptr;
    // The total number of subscribed tags.
    std::shared_ptr<int64_t> tagSubscriptionCount_ = nullptr;
    // The total number of tags.
    std::shared_ptr<int64_t> tagTotalCount_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The task result.
    std::shared_ptr<string> taskResult_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The type of the task.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
