// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSNAPSHOTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSNAPSHOTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSnapshotJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotJob, snapshotJob_);
    };
    friend void from_json(const Darabonba::Json& j, GetSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotJob, snapshotJob_);
    };
    GetSnapshotJobResponseBody() = default ;
    GetSnapshotJobResponseBody(const GetSnapshotJobResponseBody &) = default ;
    GetSnapshotJobResponseBody(GetSnapshotJobResponseBody &&) = default ;
    GetSnapshotJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSnapshotJobResponseBody() = default ;
    GetSnapshotJobResponseBody& operator=(const GetSnapshotJobResponseBody &) = default ;
    GetSnapshotJobResponseBody& operator=(GetSnapshotJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnapshotJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnapshotJob& obj) { 
        DARABONBA_PTR_TO_JSON(Async, async_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Input, input_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
        DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, SnapshotJob& obj) { 
        DARABONBA_PTR_FROM_JSON(Async, async_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Input, input_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
        DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      SnapshotJob() = default ;
      SnapshotJob(const SnapshotJob &) = default ;
      SnapshotJob(SnapshotJob &&) = default ;
      SnapshotJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnapshotJob() = default ;
      SnapshotJob& operator=(const SnapshotJob &) = default ;
      SnapshotJob& operator=(SnapshotJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Output : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Output& obj) { 
          DARABONBA_PTR_TO_JSON(Media, media_);
          DARABONBA_PTR_TO_JSON(OssFile, ossFile_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(Media, media_);
          DARABONBA_PTR_FROM_JSON(OssFile, ossFile_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Output() = default ;
        Output(const Output &) = default ;
        Output(Output &&) = default ;
        Output(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Output() = default ;
        Output& operator=(const Output &) = default ;
        Output& operator=(Output &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OssFile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OssFile& obj) { 
            DARABONBA_PTR_TO_JSON(Bucket, bucket_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(Object, object_);
          };
          friend void from_json(const Darabonba::Json& j, OssFile& obj) { 
            DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(Object, object_);
          };
          OssFile() = default ;
          OssFile(const OssFile &) = default ;
          OssFile(OssFile &&) = default ;
          OssFile(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OssFile() = default ;
          OssFile& operator=(const OssFile &) = default ;
          OssFile& operator=(OssFile &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr; };
          // bucket Field Functions 
          bool hasBucket() const { return this->bucket_ != nullptr;};
          void deleteBucket() { this->bucket_ = nullptr;};
          inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
          inline OssFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
          inline OssFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


          // object Field Functions 
          bool hasObject() const { return this->object_ != nullptr;};
          void deleteObject() { this->object_ = nullptr;};
          inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
          inline OssFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


        protected:
          // The OSS bucket.
          shared_ptr<string> bucket_ {};
          // The OSS location.
          shared_ptr<string> location_ {};
          // The OSS object.
          shared_ptr<string> object_ {};
        };

        virtual bool empty() const override { return this->media_ == nullptr
        && this->ossFile_ == nullptr && this->type_ == nullptr; };
        // media Field Functions 
        bool hasMedia() const { return this->media_ != nullptr;};
        void deleteMedia() { this->media_ = nullptr;};
        inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
        inline Output& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


        // ossFile Field Functions 
        bool hasOssFile() const { return this->ossFile_ != nullptr;};
        void deleteOssFile() { this->ossFile_ = nullptr;};
        inline const Output::OssFile & getOssFile() const { DARABONBA_PTR_GET_CONST(ossFile_, Output::OssFile) };
        inline Output::OssFile getOssFile() { DARABONBA_PTR_GET(ossFile_, Output::OssFile) };
        inline Output& setOssFile(const Output::OssFile & ossFile) { DARABONBA_PTR_SET_VALUE(ossFile_, ossFile) };
        inline Output& setOssFile(Output::OssFile && ossFile) { DARABONBA_PTR_SET_RVALUE(ossFile_, ossFile) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The output file. If Type is set to OSS, the URL of an OSS object is returned. If Type is set to Media, the ID of a media asset is returned. The URL of an OSS object can be in one of the following formats:
        // 
        // 1.  oss://bucket/object
        // 2.  http(s)://bucket.oss-[RegionId].aliyuncs.com/object
        // 
        // In the URL, bucket specifies an OSS bucket that resides in the same region as the job, and object specifies the object URL in OSS. If multiple static snapshots were captured, the object must contain the "{Count}" placeholder. In the case of a sprite, the object must contain the "{TileCount}" placeholder. The suffix of the WebVTT snapshot objects must be ".vtt".
        shared_ptr<string> media_ {};
        // The three key elements of OSS.
        shared_ptr<Output::OssFile> ossFile_ {};
        // The type of the output file. Valid values:
        // 
        // 1.  OSS: an OSS object.
        // 2.  Media: a media asset.
        shared_ptr<string> type_ {};
      };

      class Input : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Input& obj) { 
          DARABONBA_PTR_TO_JSON(Media, media_);
          DARABONBA_PTR_TO_JSON(OssFile, ossFile_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Input& obj) { 
          DARABONBA_PTR_FROM_JSON(Media, media_);
          DARABONBA_PTR_FROM_JSON(OssFile, ossFile_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Input() = default ;
        Input(const Input &) = default ;
        Input(Input &&) = default ;
        Input(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Input() = default ;
        Input& operator=(const Input &) = default ;
        Input& operator=(Input &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OssFile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OssFile& obj) { 
            DARABONBA_PTR_TO_JSON(Bucket, bucket_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(Object, object_);
          };
          friend void from_json(const Darabonba::Json& j, OssFile& obj) { 
            DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(Object, object_);
          };
          OssFile() = default ;
          OssFile(const OssFile &) = default ;
          OssFile(OssFile &&) = default ;
          OssFile(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OssFile() = default ;
          OssFile& operator=(const OssFile &) = default ;
          OssFile& operator=(OssFile &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr; };
          // bucket Field Functions 
          bool hasBucket() const { return this->bucket_ != nullptr;};
          void deleteBucket() { this->bucket_ = nullptr;};
          inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
          inline OssFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
          inline OssFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


          // object Field Functions 
          bool hasObject() const { return this->object_ != nullptr;};
          void deleteObject() { this->object_ = nullptr;};
          inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
          inline OssFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


        protected:
          // The OSS bucket.
          shared_ptr<string> bucket_ {};
          // The OSS location.
          shared_ptr<string> location_ {};
          // The OSS object.
          shared_ptr<string> object_ {};
        };

        virtual bool empty() const override { return this->media_ == nullptr
        && this->ossFile_ == nullptr && this->type_ == nullptr; };
        // media Field Functions 
        bool hasMedia() const { return this->media_ != nullptr;};
        void deleteMedia() { this->media_ = nullptr;};
        inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
        inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


        // ossFile Field Functions 
        bool hasOssFile() const { return this->ossFile_ != nullptr;};
        void deleteOssFile() { this->ossFile_ = nullptr;};
        inline const Input::OssFile & getOssFile() const { DARABONBA_PTR_GET_CONST(ossFile_, Input::OssFile) };
        inline Input::OssFile getOssFile() { DARABONBA_PTR_GET(ossFile_, Input::OssFile) };
        inline Input& setOssFile(const Input::OssFile & ossFile) { DARABONBA_PTR_SET_VALUE(ossFile_, ossFile) };
        inline Input& setOssFile(Input::OssFile && ossFile) { DARABONBA_PTR_SET_RVALUE(ossFile_, ossFile) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The input file. If Type is set to OSS, the URL of an OSS object is returned. If Type is set to Media, the ID of a media asset is returned. The URL of an OSS object can be in one of the following formats:
        // 
        // 1.  oss://bucket/object
        // 2.  http(s)://bucket.oss-[RegionId].aliyuncs.com/object In the URL, bucket specifies an OSS bucket that resides in the same region as the job, and object specifies the object URL in OSS.
        shared_ptr<string> media_ {};
        // The three key elements of OSS.
        shared_ptr<Input::OssFile> ossFile_ {};
        // The type of the input file. Valid values:
        // 
        // 1.  OSS: an Object Storage Service (OSS) object.
        // 2.  Media: a media asset.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->async_ == nullptr
        && this->code_ == nullptr && this->count_ == nullptr && this->createTime_ == nullptr && this->finishTime_ == nullptr && this->input_ == nullptr
        && this->jobId_ == nullptr && this->message_ == nullptr && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->output_ == nullptr
        && this->pipelineId_ == nullptr && this->status_ == nullptr && this->submitTime_ == nullptr && this->templateConfig_ == nullptr && this->templateId_ == nullptr
        && this->triggerSource_ == nullptr && this->type_ == nullptr && this->userData_ == nullptr; };
      // async Field Functions 
      bool hasAsync() const { return this->async_ != nullptr;};
      void deleteAsync() { this->async_ = nullptr;};
      inline bool getAsync() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
      inline SnapshotJob& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline SnapshotJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline SnapshotJob& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SnapshotJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline SnapshotJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const SnapshotJob::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, SnapshotJob::Input) };
      inline SnapshotJob::Input getInput() { DARABONBA_PTR_GET(input_, SnapshotJob::Input) };
      inline SnapshotJob& setInput(const SnapshotJob::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline SnapshotJob& setInput(SnapshotJob::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline SnapshotJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline SnapshotJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline SnapshotJob& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SnapshotJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline const SnapshotJob::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, SnapshotJob::Output) };
      inline SnapshotJob::Output getOutput() { DARABONBA_PTR_GET(output_, SnapshotJob::Output) };
      inline SnapshotJob& setOutput(const SnapshotJob::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
      inline SnapshotJob& setOutput(SnapshotJob::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline SnapshotJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SnapshotJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
      inline SnapshotJob& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
      inline SnapshotJob& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline SnapshotJob& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // triggerSource Field Functions 
      bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
      void deleteTriggerSource() { this->triggerSource_ = nullptr;};
      inline string getTriggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
      inline SnapshotJob& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SnapshotJob& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline SnapshotJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // Indicates whether the snapshots were captured in asynchronous mode. Default value: true.
      shared_ptr<bool> async_ {};
      // Error codes
      shared_ptr<string> code_ {};
      // The number of snapshots.
      shared_ptr<int32_t> count_ {};
      // The time when the job was created.
      shared_ptr<string> createTime_ {};
      // The time when the job was complete.
      shared_ptr<string> finishTime_ {};
      // The input of the job.
      shared_ptr<SnapshotJob::Input> input_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The error message that is returned.
      shared_ptr<string> message_ {};
      // The time when the job was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The name of the job.
      shared_ptr<string> name_ {};
      // The output of the job.
      shared_ptr<SnapshotJob::Output> output_ {};
      // The ID of the MPS queue to which the job was submitted.
      shared_ptr<string> pipelineId_ {};
      // The state of the job.
      // 
      // Valid values:
      // 
      // *   Init: The job is submitted.
      // *   Success: The job is successful.
      // *   Fail: The job failed.
      shared_ptr<string> status_ {};
      // The time when the job was submitted.
      shared_ptr<string> submitTime_ {};
      // The snapshot template configuration.
      shared_ptr<string> templateConfig_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The request trigger source.
      // 
      // Valid values:
      // 
      // *   Console
      // *   Workflow
      // *   API
      shared_ptr<string> triggerSource_ {};
      // Snapshot types
      // 
      // Valid values:
      // 
      // *   WebVtt
      // *   Sprite
      // *   Normal
      shared_ptr<string> type_ {};
      // The user-defined parameters.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->snapshotJob_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSnapshotJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotJob Field Functions 
    bool hasSnapshotJob() const { return this->snapshotJob_ != nullptr;};
    void deleteSnapshotJob() { this->snapshotJob_ = nullptr;};
    inline const GetSnapshotJobResponseBody::SnapshotJob & getSnapshotJob() const { DARABONBA_PTR_GET_CONST(snapshotJob_, GetSnapshotJobResponseBody::SnapshotJob) };
    inline GetSnapshotJobResponseBody::SnapshotJob getSnapshotJob() { DARABONBA_PTR_GET(snapshotJob_, GetSnapshotJobResponseBody::SnapshotJob) };
    inline GetSnapshotJobResponseBody& setSnapshotJob(const GetSnapshotJobResponseBody::SnapshotJob & snapshotJob) { DARABONBA_PTR_SET_VALUE(snapshotJob_, snapshotJob) };
    inline GetSnapshotJobResponseBody& setSnapshotJob(GetSnapshotJobResponseBody::SnapshotJob && snapshotJob) { DARABONBA_PTR_SET_RVALUE(snapshotJob_, snapshotJob) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the snapshot job.
    shared_ptr<GetSnapshotJobResponseBody::SnapshotJob> snapshotJob_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
