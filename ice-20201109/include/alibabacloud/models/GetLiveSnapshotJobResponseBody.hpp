// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVESNAPSHOTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVESNAPSHOTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveSnapshotJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
      DARABONBA_PTR_TO_JSON(OverwriteFormat, overwriteFormat_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SequenceFormat, sequenceFormat_);
      DARABONBA_PTR_TO_JSON(SnapshotOutput, snapshotOutput_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
      DARABONBA_PTR_FROM_JSON(OverwriteFormat, overwriteFormat_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SequenceFormat, sequenceFormat_);
      DARABONBA_PTR_FROM_JSON(SnapshotOutput, snapshotOutput_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
    };
    GetLiveSnapshotJobResponseBody() = default ;
    GetLiveSnapshotJobResponseBody(const GetLiveSnapshotJobResponseBody &) = default ;
    GetLiveSnapshotJobResponseBody(GetLiveSnapshotJobResponseBody &&) = default ;
    GetLiveSnapshotJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveSnapshotJobResponseBody() = default ;
    GetLiveSnapshotJobResponseBody& operator=(const GetLiveSnapshotJobResponseBody &) = default ;
    GetLiveSnapshotJobResponseBody& operator=(GetLiveSnapshotJobResponseBody &&) = default ;
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
      // The type of the input stream. The value can only be rtmp.
      shared_ptr<string> type_ {};
      // The URL of the input stream.
      shared_ptr<string> url_ {};
    };

    class SnapshotOutput : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnapshotOutput& obj) { 
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      };
      friend void from_json(const Darabonba::Json& j, SnapshotOutput& obj) { 
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      };
      SnapshotOutput() = default ;
      SnapshotOutput(const SnapshotOutput &) = default ;
      SnapshotOutput(SnapshotOutput &&) = default ;
      SnapshotOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnapshotOutput() = default ;
      SnapshotOutput& operator=(const SnapshotOutput &) = default ;
      SnapshotOutput& operator=(SnapshotOutput &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucket_ == nullptr
        && this->endpoint_ == nullptr && this->storageType_ == nullptr; };
      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline SnapshotOutput& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline SnapshotOutput& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline SnapshotOutput& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    protected:
      // The bucket of the output endpoint. If the storage type is set to oss, the OSS bucket is returned.
      shared_ptr<string> bucket_ {};
      // The output endpoint. If the storage type is set to oss, the Object Storage Service (OSS) domain name is returned.
      shared_ptr<string> endpoint_ {};
      // The storage type. The value can only be oss.
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->callbackUrl_ == nullptr
        && this->createTime_ == nullptr && this->jobId_ == nullptr && this->jobName_ == nullptr && this->lastModified_ == nullptr && this->overwriteFormat_ == nullptr
        && this->requestId_ == nullptr && this->sequenceFormat_ == nullptr && this->snapshotOutput_ == nullptr && this->status_ == nullptr && this->streamInput_ == nullptr
        && this->templateId_ == nullptr && this->templateName_ == nullptr && this->timeInterval_ == nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline GetLiveSnapshotJobResponseBody& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetLiveSnapshotJobResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetLiveSnapshotJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline GetLiveSnapshotJobResponseBody& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline GetLiveSnapshotJobResponseBody& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // overwriteFormat Field Functions 
    bool hasOverwriteFormat() const { return this->overwriteFormat_ != nullptr;};
    void deleteOverwriteFormat() { this->overwriteFormat_ = nullptr;};
    inline string getOverwriteFormat() const { DARABONBA_PTR_GET_DEFAULT(overwriteFormat_, "") };
    inline GetLiveSnapshotJobResponseBody& setOverwriteFormat(string overwriteFormat) { DARABONBA_PTR_SET_VALUE(overwriteFormat_, overwriteFormat) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveSnapshotJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sequenceFormat Field Functions 
    bool hasSequenceFormat() const { return this->sequenceFormat_ != nullptr;};
    void deleteSequenceFormat() { this->sequenceFormat_ = nullptr;};
    inline string getSequenceFormat() const { DARABONBA_PTR_GET_DEFAULT(sequenceFormat_, "") };
    inline GetLiveSnapshotJobResponseBody& setSequenceFormat(string sequenceFormat) { DARABONBA_PTR_SET_VALUE(sequenceFormat_, sequenceFormat) };


    // snapshotOutput Field Functions 
    bool hasSnapshotOutput() const { return this->snapshotOutput_ != nullptr;};
    void deleteSnapshotOutput() { this->snapshotOutput_ = nullptr;};
    inline const GetLiveSnapshotJobResponseBody::SnapshotOutput & getSnapshotOutput() const { DARABONBA_PTR_GET_CONST(snapshotOutput_, GetLiveSnapshotJobResponseBody::SnapshotOutput) };
    inline GetLiveSnapshotJobResponseBody::SnapshotOutput getSnapshotOutput() { DARABONBA_PTR_GET(snapshotOutput_, GetLiveSnapshotJobResponseBody::SnapshotOutput) };
    inline GetLiveSnapshotJobResponseBody& setSnapshotOutput(const GetLiveSnapshotJobResponseBody::SnapshotOutput & snapshotOutput) { DARABONBA_PTR_SET_VALUE(snapshotOutput_, snapshotOutput) };
    inline GetLiveSnapshotJobResponseBody& setSnapshotOutput(GetLiveSnapshotJobResponseBody::SnapshotOutput && snapshotOutput) { DARABONBA_PTR_SET_RVALUE(snapshotOutput_, snapshotOutput) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLiveSnapshotJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const GetLiveSnapshotJobResponseBody::StreamInput & getStreamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, GetLiveSnapshotJobResponseBody::StreamInput) };
    inline GetLiveSnapshotJobResponseBody::StreamInput getStreamInput() { DARABONBA_PTR_GET(streamInput_, GetLiveSnapshotJobResponseBody::StreamInput) };
    inline GetLiveSnapshotJobResponseBody& setStreamInput(const GetLiveSnapshotJobResponseBody::StreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline GetLiveSnapshotJobResponseBody& setStreamInput(GetLiveSnapshotJobResponseBody::StreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetLiveSnapshotJobResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetLiveSnapshotJobResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline int32_t getTimeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
    inline GetLiveSnapshotJobResponseBody& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


  protected:
    // The snapshot callback URL.
    shared_ptr<string> callbackUrl_ {};
    // The time when the file was created.
    shared_ptr<string> createTime_ {};
    // The job ID.
    shared_ptr<string> jobId_ {};
    // The name of the job.
    shared_ptr<string> jobName_ {};
    // The time when the file was last modified.
    shared_ptr<string> lastModified_ {};
    // The naming format of the snapshot captured in overwrite mode.
    shared_ptr<string> overwriteFormat_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The naming format of the snapshot captured in time series mode.
    shared_ptr<string> sequenceFormat_ {};
    // The output information.
    shared_ptr<GetLiveSnapshotJobResponseBody::SnapshotOutput> snapshotOutput_ {};
    // The state of the job.
    // 
    // Valid values:
    // 
    // *   init: The job is not started.
    // *   paused: The job is paused.
    // *   started: The job is in progress.
    shared_ptr<string> status_ {};
    // The input information.
    shared_ptr<GetLiveSnapshotJobResponseBody::StreamInput> streamInput_ {};
    // The template ID.
    shared_ptr<string> templateId_ {};
    // The name of the template.
    shared_ptr<string> templateName_ {};
    // The interval between two adjacent snapshots.
    shared_ptr<int32_t> timeInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
