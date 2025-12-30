// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVERECORDJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVERECORDJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveRecordJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveRecordJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(RecordOutput, recordOutput_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveRecordJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(RecordOutput, recordOutput_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SubmitLiveRecordJobRequest() = default ;
    SubmitLiveRecordJobRequest(const SubmitLiveRecordJobRequest &) = default ;
    SubmitLiveRecordJobRequest(SubmitLiveRecordJobRequest &&) = default ;
    SubmitLiveRecordJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveRecordJobRequest() = default ;
    SubmitLiveRecordJobRequest& operator=(const SubmitLiveRecordJobRequest &) = default ;
    SubmitLiveRecordJobRequest& operator=(SubmitLiveRecordJobRequest &&) = default ;
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
      // The type of the live stream URL. The value can only be rtmp.
      // 
      // This parameter is required.
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
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->name_ == nullptr
        && this->notifyUrl_ == nullptr && this->recordOutput_ == nullptr && this->streamInput_ == nullptr && this->templateId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitLiveRecordJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline SubmitLiveRecordJobRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // recordOutput Field Functions 
    bool hasRecordOutput() const { return this->recordOutput_ != nullptr;};
    void deleteRecordOutput() { this->recordOutput_ = nullptr;};
    inline const SubmitLiveRecordJobRequest::RecordOutput & getRecordOutput() const { DARABONBA_PTR_GET_CONST(recordOutput_, SubmitLiveRecordJobRequest::RecordOutput) };
    inline SubmitLiveRecordJobRequest::RecordOutput getRecordOutput() { DARABONBA_PTR_GET(recordOutput_, SubmitLiveRecordJobRequest::RecordOutput) };
    inline SubmitLiveRecordJobRequest& setRecordOutput(const SubmitLiveRecordJobRequest::RecordOutput & recordOutput) { DARABONBA_PTR_SET_VALUE(recordOutput_, recordOutput) };
    inline SubmitLiveRecordJobRequest& setRecordOutput(SubmitLiveRecordJobRequest::RecordOutput && recordOutput) { DARABONBA_PTR_SET_RVALUE(recordOutput_, recordOutput) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const SubmitLiveRecordJobRequest::StreamInput & getStreamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, SubmitLiveRecordJobRequest::StreamInput) };
    inline SubmitLiveRecordJobRequest::StreamInput getStreamInput() { DARABONBA_PTR_GET(streamInput_, SubmitLiveRecordJobRequest::StreamInput) };
    inline SubmitLiveRecordJobRequest& setStreamInput(const SubmitLiveRecordJobRequest::StreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline SubmitLiveRecordJobRequest& setStreamInput(SubmitLiveRecordJobRequest::StreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitLiveRecordJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The name of the recording job.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The callback URL.
    shared_ptr<string> notifyUrl_ {};
    // The storage address of the recording.
    // 
    // This parameter is required.
    shared_ptr<SubmitLiveRecordJobRequest::RecordOutput> recordOutput_ {};
    // The URL of the live stream.
    // 
    // This parameter is required.
    shared_ptr<SubmitLiveRecordJobRequest::StreamInput> streamInput_ {};
    // The ID of the recording template.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
