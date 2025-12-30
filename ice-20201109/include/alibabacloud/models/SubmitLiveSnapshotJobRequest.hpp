// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVESNAPSHOTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVESNAPSHOTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveSnapshotJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveSnapshotJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(SnapshotOutput, snapshotOutput_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveSnapshotJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(SnapshotOutput, snapshotOutput_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SubmitLiveSnapshotJobRequest() = default ;
    SubmitLiveSnapshotJobRequest(const SubmitLiveSnapshotJobRequest &) = default ;
    SubmitLiveSnapshotJobRequest(SubmitLiveSnapshotJobRequest &&) = default ;
    SubmitLiveSnapshotJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveSnapshotJobRequest() = default ;
    SubmitLiveSnapshotJobRequest& operator=(const SubmitLiveSnapshotJobRequest &) = default ;
    SubmitLiveSnapshotJobRequest& operator=(SubmitLiveSnapshotJobRequest &&) = default ;
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
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The URL of the input stream.
      // 
      // *   It cannot exceed 255 characters in length.
      // 
      // This parameter is required.
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
      // The bucket of the snapshot output endpoint.
      // 
      // This parameter is required.
      shared_ptr<string> bucket_ {};
      // The output endpoint of the snapshot.
      // 
      // This parameter is required.
      shared_ptr<string> endpoint_ {};
      // The storage type of the snapshot. The value can only be oss.
      // 
      // This parameter is required.
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->callbackUrl_ == nullptr
        && this->jobName_ == nullptr && this->snapshotOutput_ == nullptr && this->streamInput_ == nullptr && this->templateId_ == nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline SubmitLiveSnapshotJobRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline SubmitLiveSnapshotJobRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // snapshotOutput Field Functions 
    bool hasSnapshotOutput() const { return this->snapshotOutput_ != nullptr;};
    void deleteSnapshotOutput() { this->snapshotOutput_ = nullptr;};
    inline const SubmitLiveSnapshotJobRequest::SnapshotOutput & getSnapshotOutput() const { DARABONBA_PTR_GET_CONST(snapshotOutput_, SubmitLiveSnapshotJobRequest::SnapshotOutput) };
    inline SubmitLiveSnapshotJobRequest::SnapshotOutput getSnapshotOutput() { DARABONBA_PTR_GET(snapshotOutput_, SubmitLiveSnapshotJobRequest::SnapshotOutput) };
    inline SubmitLiveSnapshotJobRequest& setSnapshotOutput(const SubmitLiveSnapshotJobRequest::SnapshotOutput & snapshotOutput) { DARABONBA_PTR_SET_VALUE(snapshotOutput_, snapshotOutput) };
    inline SubmitLiveSnapshotJobRequest& setSnapshotOutput(SubmitLiveSnapshotJobRequest::SnapshotOutput && snapshotOutput) { DARABONBA_PTR_SET_RVALUE(snapshotOutput_, snapshotOutput) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const SubmitLiveSnapshotJobRequest::StreamInput & getStreamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, SubmitLiveSnapshotJobRequest::StreamInput) };
    inline SubmitLiveSnapshotJobRequest::StreamInput getStreamInput() { DARABONBA_PTR_GET(streamInput_, SubmitLiveSnapshotJobRequest::StreamInput) };
    inline SubmitLiveSnapshotJobRequest& setStreamInput(const SubmitLiveSnapshotJobRequest::StreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline SubmitLiveSnapshotJobRequest& setStreamInput(SubmitLiveSnapshotJobRequest::StreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitLiveSnapshotJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The snapshot callback URL.
    // 
    // *   It cannot exceed 255 characters in length.
    // *   Both HTTP and HTTPS URLs are supported.
    shared_ptr<string> callbackUrl_ {};
    // The name of the job.
    // 
    // *   It cannot exceed 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> jobName_ {};
    // The information about the output snapshot.
    // 
    // This parameter is required.
    shared_ptr<SubmitLiveSnapshotJobRequest::SnapshotOutput> snapshotOutput_ {};
    // The information about the input stream.
    // 
    // This parameter is required.
    shared_ptr<SubmitLiveSnapshotJobRequest::StreamInput> streamInput_ {};
    // The template ID.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
