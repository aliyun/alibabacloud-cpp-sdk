// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVERECORDJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVERECORDJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveRecordJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveRecordJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordJob, recordJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveRecordJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordJob, recordJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLiveRecordJobResponseBody() = default ;
    GetLiveRecordJobResponseBody(const GetLiveRecordJobResponseBody &) = default ;
    GetLiveRecordJobResponseBody(GetLiveRecordJobResponseBody &&) = default ;
    GetLiveRecordJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveRecordJobResponseBody() = default ;
    GetLiveRecordJobResponseBody& operator=(const GetLiveRecordJobResponseBody &) = default ;
    GetLiveRecordJobResponseBody& operator=(GetLiveRecordJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordJob& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
        DARABONBA_PTR_TO_JSON(RecordOutput, recordOutput_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, RecordJob& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
        DARABONBA_PTR_FROM_JSON(RecordOutput, recordOutput_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      RecordJob() = default ;
      RecordJob(const RecordJob &) = default ;
      RecordJob(RecordJob &&) = default ;
      RecordJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordJob() = default ;
      RecordJob& operator=(const RecordJob &) = default ;
      RecordJob& operator=(RecordJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StreamInput : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StreamInput& obj) { 
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, StreamInput& obj) { 
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        StreamInput() = default ;
        StreamInput(const StreamInput &) = default ;
        StreamInput(StreamInput &&) = default ;
        StreamInput(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StreamInput() = default ;
        StreamInput& operator=(const StreamInput &) = default ;
        StreamInput& operator=(StreamInput &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->url_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline StreamInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline StreamInput& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The type of the live stream. The value can only be rtmp.
        shared_ptr<string> type_ {};
        // The URL of the live stream.
        shared_ptr<string> url_ {};
      };

      class RecordOutput : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordOutput& obj) { 
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, RecordOutput& obj) { 
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        RecordOutput() = default ;
        RecordOutput(const RecordOutput &) = default ;
        RecordOutput(RecordOutput &&) = default ;
        RecordOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordOutput() = default ;
        RecordOutput& operator=(const RecordOutput &) = default ;
        RecordOutput& operator=(RecordOutput &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucket_ == nullptr
        && this->endpoint_ == nullptr && this->type_ == nullptr; };
        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline RecordOutput& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline RecordOutput& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RecordOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The bucket name.
        shared_ptr<string> bucket_ {};
        // The endpoint of the storage service.
        shared_ptr<string> endpoint_ {};
        // The type of the storage address.
        // 
        // Valid values:
        // 
        // *   vod
        // *   oss
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->jobId_ == nullptr && this->name_ == nullptr && this->notifyUrl_ == nullptr && this->recordOutput_ == nullptr && this->status_ == nullptr
        && this->streamInput_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RecordJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline RecordJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RecordJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notifyUrl Field Functions 
      bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
      void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
      inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
      inline RecordJob& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


      // recordOutput Field Functions 
      bool hasRecordOutput() const { return this->recordOutput_ != nullptr;};
      void deleteRecordOutput() { this->recordOutput_ = nullptr;};
      inline const RecordJob::RecordOutput & getRecordOutput() const { DARABONBA_PTR_GET_CONST(recordOutput_, RecordJob::RecordOutput) };
      inline RecordJob::RecordOutput getRecordOutput() { DARABONBA_PTR_GET(recordOutput_, RecordJob::RecordOutput) };
      inline RecordJob& setRecordOutput(const RecordJob::RecordOutput & recordOutput) { DARABONBA_PTR_SET_VALUE(recordOutput_, recordOutput) };
      inline RecordJob& setRecordOutput(RecordJob::RecordOutput && recordOutput) { DARABONBA_PTR_SET_RVALUE(recordOutput_, recordOutput) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RecordJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // streamInput Field Functions 
      bool hasStreamInput() const { return this->streamInput_ != nullptr;};
      void deleteStreamInput() { this->streamInput_ = nullptr;};
      inline const RecordJob::StreamInput & getStreamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, RecordJob::StreamInput) };
      inline RecordJob::StreamInput getStreamInput() { DARABONBA_PTR_GET(streamInput_, RecordJob::StreamInput) };
      inline RecordJob& setStreamInput(const RecordJob::StreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
      inline RecordJob& setStreamInput(RecordJob::StreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline RecordJob& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline RecordJob& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The time when the job was created.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> createTime_ {};
      // The ID of the recording job.
      shared_ptr<string> jobId_ {};
      // The name of the recording job.
      shared_ptr<string> name_ {};
      // The callback URL.
      shared_ptr<string> notifyUrl_ {};
      // The storage address of the recording.
      shared_ptr<RecordJob::RecordOutput> recordOutput_ {};
      // The state of the recording job.
      // 
      // Valid values:
      // 
      // *   paused: The job is paused.
      // *   initial: The job is not started.
      // *   started: The job is in progress.
      shared_ptr<string> status_ {};
      // The URL of the live stream.
      shared_ptr<RecordJob::StreamInput> streamInput_ {};
      // The ID of the recording template.
      shared_ptr<string> templateId_ {};
      // The name of the recording template.
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->recordJob_ == nullptr
        && this->requestId_ == nullptr; };
    // recordJob Field Functions 
    bool hasRecordJob() const { return this->recordJob_ != nullptr;};
    void deleteRecordJob() { this->recordJob_ = nullptr;};
    inline const GetLiveRecordJobResponseBody::RecordJob & getRecordJob() const { DARABONBA_PTR_GET_CONST(recordJob_, GetLiveRecordJobResponseBody::RecordJob) };
    inline GetLiveRecordJobResponseBody::RecordJob getRecordJob() { DARABONBA_PTR_GET(recordJob_, GetLiveRecordJobResponseBody::RecordJob) };
    inline GetLiveRecordJobResponseBody& setRecordJob(const GetLiveRecordJobResponseBody::RecordJob & recordJob) { DARABONBA_PTR_SET_VALUE(recordJob_, recordJob) };
    inline GetLiveRecordJobResponseBody& setRecordJob(GetLiveRecordJobResponseBody::RecordJob && recordJob) { DARABONBA_PTR_SET_RVALUE(recordJob_, recordJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveRecordJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the recording job.
    shared_ptr<GetLiveRecordJobResponseBody::RecordJob> recordJob_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
