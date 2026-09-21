// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTTASKRESPONSEBODY_HPP_
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
  class DescribeAgentTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgentTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgentTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    DescribeAgentTaskResponseBody() = default ;
    DescribeAgentTaskResponseBody(const DescribeAgentTaskResponseBody &) = default ;
    DescribeAgentTaskResponseBody(DescribeAgentTaskResponseBody &&) = default ;
    DescribeAgentTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgentTaskResponseBody() = default ;
    DescribeAgentTaskResponseBody& operator=(const DescribeAgentTaskResponseBody &) = default ;
    DescribeAgentTaskResponseBody& operator=(DescribeAgentTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(ArtifactCount, artifactCount_);
        DARABONBA_PTR_TO_JSON(Artifacts, artifacts_);
        DARABONBA_PTR_TO_JSON(CurrentStatus, currentStatus_);
        DARABONBA_PTR_TO_JSON(DigestSource, digestSource_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(RunningAt, runningAt_);
        DARABONBA_PTR_TO_JSON(Steps, steps_);
        DARABONBA_PTR_TO_JSON(TaskDigest, taskDigest_);
        DARABONBA_PTR_TO_JSON(TaskDuration, taskDuration_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
        DARABONBA_PTR_TO_JSON(UserPrompt, userPrompt_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(ArtifactCount, artifactCount_);
        DARABONBA_PTR_FROM_JSON(Artifacts, artifacts_);
        DARABONBA_PTR_FROM_JSON(CurrentStatus, currentStatus_);
        DARABONBA_PTR_FROM_JSON(DigestSource, digestSource_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(RunningAt, runningAt_);
        DARABONBA_PTR_FROM_JSON(Steps, steps_);
        DARABONBA_PTR_FROM_JSON(TaskDigest, taskDigest_);
        DARABONBA_PTR_FROM_JSON(TaskDuration, taskDuration_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
        DARABONBA_PTR_FROM_JSON(UserPrompt, userPrompt_);
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
      class Artifacts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Artifacts& obj) { 
          DARABONBA_PTR_TO_JSON(ContentType, contentType_);
          DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        };
        friend void from_json(const Darabonba::Json& j, Artifacts& obj) { 
          DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
          DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        };
        Artifacts() = default ;
        Artifacts(const Artifacts &) = default ;
        Artifacts(Artifacts &&) = default ;
        Artifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Artifacts() = default ;
        Artifacts& operator=(const Artifacts &) = default ;
        Artifacts& operator=(Artifacts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contentType_ == nullptr
        && this->downloadUrl_ == nullptr && this->name_ == nullptr && this->size_ == nullptr && this->updatedTime_ == nullptr; };
        // contentType Field Functions 
        bool hasContentType() const { return this->contentType_ != nullptr;};
        void deleteContentType() { this->contentType_ = nullptr;};
        inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
        inline Artifacts& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline Artifacts& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Artifacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Artifacts& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
        inline Artifacts& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      protected:
        // The MIME type.
        shared_ptr<string> contentType_ {};
        // The OSS pre-signed download URL.
        shared_ptr<string> downloadUrl_ {};
        // The file name.
        shared_ptr<string> name_ {};
        // The file size in bytes.
        shared_ptr<int64_t> size_ {};
        // The upload time in ISO 8601 format.
        shared_ptr<string> updatedTime_ {};
      };

      virtual bool empty() const override { return this->artifactCount_ == nullptr
        && this->artifacts_ == nullptr && this->currentStatus_ == nullptr && this->digestSource_ == nullptr && this->instanceId_ == nullptr && this->reason_ == nullptr
        && this->runningAt_ == nullptr && this->steps_ == nullptr && this->taskDigest_ == nullptr && this->taskDuration_ == nullptr && this->taskId_ == nullptr
        && this->taskResult_ == nullptr && this->userPrompt_ == nullptr; };
      // artifactCount Field Functions 
      bool hasArtifactCount() const { return this->artifactCount_ != nullptr;};
      void deleteArtifactCount() { this->artifactCount_ = nullptr;};
      inline int32_t getArtifactCount() const { DARABONBA_PTR_GET_DEFAULT(artifactCount_, 0) };
      inline Tasks& setArtifactCount(int32_t artifactCount) { DARABONBA_PTR_SET_VALUE(artifactCount_, artifactCount) };


      // artifacts Field Functions 
      bool hasArtifacts() const { return this->artifacts_ != nullptr;};
      void deleteArtifacts() { this->artifacts_ = nullptr;};
      inline const vector<Tasks::Artifacts> & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, vector<Tasks::Artifacts>) };
      inline vector<Tasks::Artifacts> getArtifacts() { DARABONBA_PTR_GET(artifacts_, vector<Tasks::Artifacts>) };
      inline Tasks& setArtifacts(const vector<Tasks::Artifacts> & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
      inline Tasks& setArtifacts(vector<Tasks::Artifacts> && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


      // currentStatus Field Functions 
      bool hasCurrentStatus() const { return this->currentStatus_ != nullptr;};
      void deleteCurrentStatus() { this->currentStatus_ = nullptr;};
      inline string getCurrentStatus() const { DARABONBA_PTR_GET_DEFAULT(currentStatus_, "") };
      inline Tasks& setCurrentStatus(string currentStatus) { DARABONBA_PTR_SET_VALUE(currentStatus_, currentStatus) };


      // digestSource Field Functions 
      bool hasDigestSource() const { return this->digestSource_ != nullptr;};
      void deleteDigestSource() { this->digestSource_ = nullptr;};
      inline string getDigestSource() const { DARABONBA_PTR_GET_DEFAULT(digestSource_, "") };
      inline Tasks& setDigestSource(string digestSource) { DARABONBA_PTR_SET_VALUE(digestSource_, digestSource) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Tasks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Tasks& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // runningAt Field Functions 
      bool hasRunningAt() const { return this->runningAt_ != nullptr;};
      void deleteRunningAt() { this->runningAt_ = nullptr;};
      inline string getRunningAt() const { DARABONBA_PTR_GET_DEFAULT(runningAt_, "") };
      inline Tasks& setRunningAt(string runningAt) { DARABONBA_PTR_SET_VALUE(runningAt_, runningAt) };


      // steps Field Functions 
      bool hasSteps() const { return this->steps_ != nullptr;};
      void deleteSteps() { this->steps_ = nullptr;};
      inline string getSteps() const { DARABONBA_PTR_GET_DEFAULT(steps_, "") };
      inline Tasks& setSteps(string steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };


      // taskDigest Field Functions 
      bool hasTaskDigest() const { return this->taskDigest_ != nullptr;};
      void deleteTaskDigest() { this->taskDigest_ = nullptr;};
      inline string getTaskDigest() const { DARABONBA_PTR_GET_DEFAULT(taskDigest_, "") };
      inline Tasks& setTaskDigest(string taskDigest) { DARABONBA_PTR_SET_VALUE(taskDigest_, taskDigest) };


      // taskDuration Field Functions 
      bool hasTaskDuration() const { return this->taskDuration_ != nullptr;};
      void deleteTaskDuration() { this->taskDuration_ = nullptr;};
      inline string getTaskDuration() const { DARABONBA_PTR_GET_DEFAULT(taskDuration_, "") };
      inline Tasks& setTaskDuration(string taskDuration) { DARABONBA_PTR_SET_VALUE(taskDuration_, taskDuration) };


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


      // userPrompt Field Functions 
      bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
      void deleteUserPrompt() { this->userPrompt_ = nullptr;};
      inline string getUserPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
      inline Tasks& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


    protected:
      // The number of task artifacts.
      shared_ptr<int32_t> artifactCount_ {};
      // The list of uploaded task artifacts.
      shared_ptr<vector<Tasks::Artifacts>> artifacts_ {};
      // The current status of the task. Valid values:
      // 
      // - PENDING: The task is being created.
      // - RUNNING: The task is running.
      // - COMPLETED: The task is completed.
      // - FAILED: The task failed.
      // - TIMEOUT: The task execution timed out.
      shared_ptr<string> currentStatus_ {};
      // The source of the digest. Valid values:
      // 
      // - PROMPT_AUTO: auto-generated.
      // - RESULT_AUTO: result refinement.
      // - USER: user-edited.
      shared_ptr<string> digestSource_ {};
      // The Mobile node ID.
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> reason_ {};
      // The time when the task was created, in ISO 8601 format.
      shared_ptr<string> runningAt_ {};
      // The number of steps executed.
      shared_ptr<string> steps_ {};
      // The task digest text, up to 25 characters.
      shared_ptr<string> taskDigest_ {};
      // The task duration. This field is returned only when CurrentStatus is FAILED or COMPLETED.
      shared_ptr<string> taskDuration_ {};
      // The task ID, which is globally unique.
      shared_ptr<string> taskId_ {};
      // The task result in the desired state. This field is returned only when CurrentStatus is COMPLETED or FAILED.
      shared_ptr<string> taskResult_ {};
      // The user instruction in natural language. The Agent performs operations based on this instruction.
      shared_ptr<string> userPrompt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->tasks_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAgentTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeAgentTaskResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAgentTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgentTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<DescribeAgentTaskResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<DescribeAgentTaskResponseBody::Tasks>) };
    inline vector<DescribeAgentTaskResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<DescribeAgentTaskResponseBody::Tasks>) };
    inline DescribeAgentTaskResponseBody& setTasks(const vector<DescribeAgentTaskResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DescribeAgentTaskResponseBody& setTasks(vector<DescribeAgentTaskResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The API status code.
    shared_ptr<string> code_ {};
    // The number of tasks.
    shared_ptr<int32_t> count_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of tasks.
    shared_ptr<vector<DescribeAgentTaskResponseBody::Tasks>> tasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
