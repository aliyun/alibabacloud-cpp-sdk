// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGETRANSCODEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGETRANSCODEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetEdgeTranscodeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEdgeTranscodeJobResponseBody() = default ;
    GetEdgeTranscodeJobResponseBody(const GetEdgeTranscodeJobResponseBody &) = default ;
    GetEdgeTranscodeJobResponseBody(GetEdgeTranscodeJobResponseBody &&) = default ;
    GetEdgeTranscodeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeTranscodeJobResponseBody() = default ;
    GetEdgeTranscodeJobResponseBody& operator=(const GetEdgeTranscodeJobResponseBody &) = default ;
    GetEdgeTranscodeJobResponseBody& operator=(GetEdgeTranscodeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Job : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Job& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(LastStartAt, lastStartAt_);
        DARABONBA_PTR_TO_JSON(LastStopAt, lastStopAt_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
        DARABONBA_PTR_TO_JSON(StreamOutput, streamOutput_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Job& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(LastStartAt, lastStartAt_);
        DARABONBA_PTR_FROM_JSON(LastStopAt, lastStopAt_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
        DARABONBA_PTR_FROM_JSON(StreamOutput, streamOutput_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Job() = default ;
      Job(const Job &) = default ;
      Job(Job &&) = default ;
      Job(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Job() = default ;
      Job& operator=(const Job &) = default ;
      Job& operator=(Job &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->jobId_ == nullptr && this->lastStartAt_ == nullptr && this->lastStopAt_ == nullptr && this->name_ == nullptr && this->status_ == nullptr
        && this->streamInput_ == nullptr && this->streamOutput_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->type_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Job& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Job& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // lastStartAt Field Functions 
      bool hasLastStartAt() const { return this->lastStartAt_ != nullptr;};
      void deleteLastStartAt() { this->lastStartAt_ = nullptr;};
      inline string getLastStartAt() const { DARABONBA_PTR_GET_DEFAULT(lastStartAt_, "") };
      inline Job& setLastStartAt(string lastStartAt) { DARABONBA_PTR_SET_VALUE(lastStartAt_, lastStartAt) };


      // lastStopAt Field Functions 
      bool hasLastStopAt() const { return this->lastStopAt_ != nullptr;};
      void deleteLastStopAt() { this->lastStopAt_ = nullptr;};
      inline string getLastStopAt() const { DARABONBA_PTR_GET_DEFAULT(lastStopAt_, "") };
      inline Job& setLastStopAt(string lastStopAt) { DARABONBA_PTR_SET_VALUE(lastStopAt_, lastStopAt) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Job& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Job& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // streamInput Field Functions 
      bool hasStreamInput() const { return this->streamInput_ != nullptr;};
      void deleteStreamInput() { this->streamInput_ = nullptr;};
      inline string getStreamInput() const { DARABONBA_PTR_GET_DEFAULT(streamInput_, "") };
      inline Job& setStreamInput(string streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };


      // streamOutput Field Functions 
      bool hasStreamOutput() const { return this->streamOutput_ != nullptr;};
      void deleteStreamOutput() { this->streamOutput_ = nullptr;};
      inline string getStreamOutput() const { DARABONBA_PTR_GET_DEFAULT(streamOutput_, "") };
      inline Job& setStreamOutput(string streamOutput) { DARABONBA_PTR_SET_VALUE(streamOutput_, streamOutput) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Job& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Job& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Job& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The time when the task was created.
      shared_ptr<string> createTime_ {};
      // The ID of the task.
      shared_ptr<string> jobId_ {};
      // The time when the task was last started.
      shared_ptr<string> lastStartAt_ {};
      // The time when the task was last stopped.
      shared_ptr<string> lastStopAt_ {};
      // The name of the task.
      shared_ptr<string> name_ {};
      // The status of the task. Valid values:
      // 
      // *   0: not started
      // *   1: in progress
      shared_ptr<string> status_ {};
      // The URL of the input stream.
      shared_ptr<string> streamInput_ {};
      // The URL of the output stream.
      shared_ptr<string> streamOutput_ {};
      // The ID of the edge transcoding template used by the task.
      shared_ptr<string> templateId_ {};
      // The name of the edge transcoding template used by the task.
      shared_ptr<string> templateName_ {};
      // The type of edge transcoding. Valid values:
      // 
      // *   common: standard transcoding and Narrowband HD™ 1.0 transcoding
      // *   nbhd-2: Narrowband HD™ 2.0 transcoding
      // *   ultra-hd: ultra-high definition transcoding
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->job_ == nullptr
        && this->requestId_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetEdgeTranscodeJobResponseBody::Job & getJob() const { DARABONBA_PTR_GET_CONST(job_, GetEdgeTranscodeJobResponseBody::Job) };
    inline GetEdgeTranscodeJobResponseBody::Job getJob() { DARABONBA_PTR_GET(job_, GetEdgeTranscodeJobResponseBody::Job) };
    inline GetEdgeTranscodeJobResponseBody& setJob(const GetEdgeTranscodeJobResponseBody::Job & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetEdgeTranscodeJobResponseBody& setJob(GetEdgeTranscodeJobResponseBody::Job && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeTranscodeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the edge transcoding task.
    shared_ptr<GetEdgeTranscodeJobResponseBody::Job> job_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
