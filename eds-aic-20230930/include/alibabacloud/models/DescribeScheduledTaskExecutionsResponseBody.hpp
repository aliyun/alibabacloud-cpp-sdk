// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULEDTASKEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULEDTASKEXECUTIONSRESPONSEBODY_HPP_
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
  class DescribeScheduledTaskExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScheduledTaskExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Executions, executions_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScheduledTaskExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Executions, executions_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeScheduledTaskExecutionsResponseBody() = default ;
    DescribeScheduledTaskExecutionsResponseBody(const DescribeScheduledTaskExecutionsResponseBody &) = default ;
    DescribeScheduledTaskExecutionsResponseBody(DescribeScheduledTaskExecutionsResponseBody &&) = default ;
    DescribeScheduledTaskExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScheduledTaskExecutionsResponseBody() = default ;
    DescribeScheduledTaskExecutionsResponseBody& operator=(const DescribeScheduledTaskExecutionsResponseBody &) = default ;
    DescribeScheduledTaskExecutionsResponseBody& operator=(DescribeScheduledTaskExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Executions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Executions& obj) { 
        DARABONBA_PTR_TO_JSON(ArtifactCount, artifactCount_);
        DARABONBA_PTR_TO_JSON(Artifacts, artifacts_);
        DARABONBA_PTR_TO_JSON(CompletedAt, completedAt_);
        DARABONBA_PTR_TO_JSON(ConfigSnapshot, configSnapshot_);
        DARABONBA_PTR_TO_JSON(DurationMs, durationMs_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(ScheduledId, scheduledId_);
        DARABONBA_PTR_TO_JSON(StartedAt, startedAt_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Executions& obj) { 
        DARABONBA_PTR_FROM_JSON(ArtifactCount, artifactCount_);
        DARABONBA_PTR_FROM_JSON(Artifacts, artifacts_);
        DARABONBA_PTR_FROM_JSON(CompletedAt, completedAt_);
        DARABONBA_PTR_FROM_JSON(ConfigSnapshot, configSnapshot_);
        DARABONBA_PTR_FROM_JSON(DurationMs, durationMs_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(ScheduledId, scheduledId_);
        DARABONBA_PTR_FROM_JSON(StartedAt, startedAt_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      Executions() = default ;
      Executions(const Executions &) = default ;
      Executions(Executions &&) = default ;
      Executions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Executions() = default ;
      Executions& operator=(const Executions &) = default ;
      Executions& operator=(Executions &&) = default ;
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
        && this->artifacts_ == nullptr && this->completedAt_ == nullptr && this->configSnapshot_ == nullptr && this->durationMs_ == nullptr && this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->instanceId_ == nullptr && this->output_ == nullptr && this->scheduledId_ == nullptr && this->startedAt_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr; };
      // artifactCount Field Functions 
      bool hasArtifactCount() const { return this->artifactCount_ != nullptr;};
      void deleteArtifactCount() { this->artifactCount_ = nullptr;};
      inline int32_t getArtifactCount() const { DARABONBA_PTR_GET_DEFAULT(artifactCount_, 0) };
      inline Executions& setArtifactCount(int32_t artifactCount) { DARABONBA_PTR_SET_VALUE(artifactCount_, artifactCount) };


      // artifacts Field Functions 
      bool hasArtifacts() const { return this->artifacts_ != nullptr;};
      void deleteArtifacts() { this->artifacts_ = nullptr;};
      inline const vector<Executions::Artifacts> & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, vector<Executions::Artifacts>) };
      inline vector<Executions::Artifacts> getArtifacts() { DARABONBA_PTR_GET(artifacts_, vector<Executions::Artifacts>) };
      inline Executions& setArtifacts(const vector<Executions::Artifacts> & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
      inline Executions& setArtifacts(vector<Executions::Artifacts> && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


      // completedAt Field Functions 
      bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
      void deleteCompletedAt() { this->completedAt_ = nullptr;};
      inline string getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, "") };
      inline Executions& setCompletedAt(string completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


      // configSnapshot Field Functions 
      bool hasConfigSnapshot() const { return this->configSnapshot_ != nullptr;};
      void deleteConfigSnapshot() { this->configSnapshot_ = nullptr;};
      inline string getConfigSnapshot() const { DARABONBA_PTR_GET_DEFAULT(configSnapshot_, "") };
      inline Executions& setConfigSnapshot(string configSnapshot) { DARABONBA_PTR_SET_VALUE(configSnapshot_, configSnapshot) };


      // durationMs Field Functions 
      bool hasDurationMs() const { return this->durationMs_ != nullptr;};
      void deleteDurationMs() { this->durationMs_ = nullptr;};
      inline int64_t getDurationMs() const { DARABONBA_PTR_GET_DEFAULT(durationMs_, 0L) };
      inline Executions& setDurationMs(int64_t durationMs) { DARABONBA_PTR_SET_VALUE(durationMs_, durationMs) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Executions& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Executions& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Executions& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline Executions& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      // scheduledId Field Functions 
      bool hasScheduledId() const { return this->scheduledId_ != nullptr;};
      void deleteScheduledId() { this->scheduledId_ = nullptr;};
      inline string getScheduledId() const { DARABONBA_PTR_GET_DEFAULT(scheduledId_, "") };
      inline Executions& setScheduledId(string scheduledId) { DARABONBA_PTR_SET_VALUE(scheduledId_, scheduledId) };


      // startedAt Field Functions 
      bool hasStartedAt() const { return this->startedAt_ != nullptr;};
      void deleteStartedAt() { this->startedAt_ = nullptr;};
      inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
      inline Executions& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Executions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Executions& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The number of task artifacts.
      shared_ptr<int32_t> artifactCount_ {};
      // The list of uploaded task artifacts.
      shared_ptr<vector<Executions::Artifacts>> artifacts_ {};
      // The end time.
      shared_ptr<string> completedAt_ {};
      // The configuration snapshot in JSON format.
      shared_ptr<string> configSnapshot_ {};
      // The execution duration in milliseconds.
      shared_ptr<int64_t> durationMs_ {};
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The error message.
      shared_ptr<string> errorMessage_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The execution output in JSON format.
      shared_ptr<string> output_ {};
      // The ID of the scheduled task.
      shared_ptr<string> scheduledId_ {};
      // The start time.
      shared_ptr<string> startedAt_ {};
      // The execution status.
      shared_ptr<string> status_ {};
      // The ID of the scheduled task execution record.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->executions_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeScheduledTaskExecutionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // executions Field Functions 
    bool hasExecutions() const { return this->executions_ != nullptr;};
    void deleteExecutions() { this->executions_ = nullptr;};
    inline const vector<DescribeScheduledTaskExecutionsResponseBody::Executions> & getExecutions() const { DARABONBA_PTR_GET_CONST(executions_, vector<DescribeScheduledTaskExecutionsResponseBody::Executions>) };
    inline vector<DescribeScheduledTaskExecutionsResponseBody::Executions> getExecutions() { DARABONBA_PTR_GET(executions_, vector<DescribeScheduledTaskExecutionsResponseBody::Executions>) };
    inline DescribeScheduledTaskExecutionsResponseBody& setExecutions(const vector<DescribeScheduledTaskExecutionsResponseBody::Executions> & executions) { DARABONBA_PTR_SET_VALUE(executions_, executions) };
    inline DescribeScheduledTaskExecutionsResponseBody& setExecutions(vector<DescribeScheduledTaskExecutionsResponseBody::Executions> && executions) { DARABONBA_PTR_SET_RVALUE(executions_, executions) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeScheduledTaskExecutionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeScheduledTaskExecutionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeScheduledTaskExecutionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScheduledTaskExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScheduledTaskExecutionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code of the operation.
    shared_ptr<string> code_ {};
    // The list of task execution records.
    shared_ptr<vector<DescribeScheduledTaskExecutionsResponseBody::Executions>> executions_ {};
    // The maximum number of results returned in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The pagination token for the next page.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of results returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
