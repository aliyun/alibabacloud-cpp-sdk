// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTHANDLEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTHANDLEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSmartHandleJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartHandleJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobResult, jobResult_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmartJobInfo, smartJobInfo_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartHandleJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobResult, jobResult_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmartJobInfo, smartJobInfo_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetSmartHandleJobResponseBody() = default ;
    GetSmartHandleJobResponseBody(const GetSmartHandleJobResponseBody &) = default ;
    GetSmartHandleJobResponseBody(GetSmartHandleJobResponseBody &&) = default ;
    GetSmartHandleJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartHandleJobResponseBody() = default ;
    GetSmartHandleJobResponseBody& operator=(const GetSmartHandleJobResponseBody &) = default ;
    GetSmartHandleJobResponseBody& operator=(GetSmartHandleJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SmartJobInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SmartJobInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, SmartJobInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      SmartJobInfo() = default ;
      SmartJobInfo(const SmartJobInfo &) = default ;
      SmartJobInfo(SmartJobInfo &&) = default ;
      SmartJobInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SmartJobInfo() = default ;
      SmartJobInfo& operator=(const SmartJobInfo &) = default ;
      SmartJobInfo& operator=(SmartJobInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OutputConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(Object, object_);
        };
        friend void from_json(const Darabonba::Json& j, OutputConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(Object, object_);
        };
        OutputConfig() = default ;
        OutputConfig(const OutputConfig &) = default ;
        OutputConfig(OutputConfig &&) = default ;
        OutputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputConfig() = default ;
        OutputConfig& operator=(const OutputConfig &) = default ;
        OutputConfig& operator=(OutputConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucket_ == nullptr
        && this->object_ == nullptr; };
        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline OutputConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // object Field Functions 
        bool hasObject() const { return this->object_ != nullptr;};
        void deleteObject() { this->object_ = nullptr;};
        inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
        inline OutputConfig& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      protected:
        // The OSS bucket.
        shared_ptr<string> bucket_ {};
        // The OSS object.
        shared_ptr<string> object_ {};
      };

      class InputConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputConfig& obj) { 
          DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
        };
        friend void from_json(const Darabonba::Json& j, InputConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
        };
        InputConfig() = default ;
        InputConfig(const InputConfig &) = default ;
        InputConfig(InputConfig &&) = default ;
        InputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputConfig() = default ;
        InputConfig& operator=(const InputConfig &) = default ;
        InputConfig& operator=(InputConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->inputFile_ == nullptr; };
        // inputFile Field Functions 
        bool hasInputFile() const { return this->inputFile_ != nullptr;};
        void deleteInputFile() { this->inputFile_ = nullptr;};
        inline string getInputFile() const { DARABONBA_PTR_GET_DEFAULT(inputFile_, "") };
        inline InputConfig& setInputFile(string inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };


      protected:
        // The OSS URL or the ID of the material in the media asset library.
        shared_ptr<string> inputFile_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->inputConfig_ == nullptr && this->jobType_ == nullptr && this->modifiedTime_ == nullptr && this->outputConfig_ == nullptr
        && this->title_ == nullptr && this->userId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SmartJobInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SmartJobInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // inputConfig Field Functions 
      bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
      void deleteInputConfig() { this->inputConfig_ = nullptr;};
      inline const SmartJobInfo::InputConfig & getInputConfig() const { DARABONBA_PTR_GET_CONST(inputConfig_, SmartJobInfo::InputConfig) };
      inline SmartJobInfo::InputConfig getInputConfig() { DARABONBA_PTR_GET(inputConfig_, SmartJobInfo::InputConfig) };
      inline SmartJobInfo& setInputConfig(const SmartJobInfo::InputConfig & inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };
      inline SmartJobInfo& setInputConfig(SmartJobInfo::InputConfig && inputConfig) { DARABONBA_PTR_SET_RVALUE(inputConfig_, inputConfig) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline SmartJobInfo& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline SmartJobInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // outputConfig Field Functions 
      bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
      void deleteOutputConfig() { this->outputConfig_ = nullptr;};
      inline const SmartJobInfo::OutputConfig & getOutputConfig() const { DARABONBA_PTR_GET_CONST(outputConfig_, SmartJobInfo::OutputConfig) };
      inline SmartJobInfo::OutputConfig getOutputConfig() { DARABONBA_PTR_GET(outputConfig_, SmartJobInfo::OutputConfig) };
      inline SmartJobInfo& setOutputConfig(const SmartJobInfo::OutputConfig & outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };
      inline SmartJobInfo& setOutputConfig(SmartJobInfo::OutputConfig && outputConfig) { DARABONBA_PTR_SET_RVALUE(outputConfig_, outputConfig) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline SmartJobInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline SmartJobInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The time when the job was created.
      shared_ptr<string> createTime_ {};
      // The job description.
      shared_ptr<string> description_ {};
      // The input configurations.
      shared_ptr<SmartJobInfo::InputConfig> inputConfig_ {};
      // The job type.
      shared_ptr<string> jobType_ {};
      // The time when the job was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The output configurations.
      shared_ptr<SmartJobInfo::OutputConfig> outputConfig_ {};
      // The job title.
      shared_ptr<string> title_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    class JobResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobResult& obj) { 
        DARABONBA_PTR_TO_JSON(AiResult, aiResult_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(MediaUrl, mediaUrl_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, JobResult& obj) { 
        DARABONBA_PTR_FROM_JSON(AiResult, aiResult_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(MediaUrl, mediaUrl_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
      };
      JobResult() = default ;
      JobResult(const JobResult &) = default ;
      JobResult(JobResult &&) = default ;
      JobResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobResult() = default ;
      JobResult& operator=(const JobResult &) = default ;
      JobResult& operator=(JobResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aiResult_ == nullptr
        && this->mediaId_ == nullptr && this->mediaUrl_ == nullptr && this->usage_ == nullptr; };
      // aiResult Field Functions 
      bool hasAiResult() const { return this->aiResult_ != nullptr;};
      void deleteAiResult() { this->aiResult_ = nullptr;};
      inline string getAiResult() const { DARABONBA_PTR_GET_DEFAULT(aiResult_, "") };
      inline JobResult& setAiResult(string aiResult) { DARABONBA_PTR_SET_VALUE(aiResult_, aiResult) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline JobResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // mediaUrl Field Functions 
      bool hasMediaUrl() const { return this->mediaUrl_ != nullptr;};
      void deleteMediaUrl() { this->mediaUrl_ = nullptr;};
      inline string getMediaUrl() const { DARABONBA_PTR_GET_DEFAULT(mediaUrl_, "") };
      inline JobResult& setMediaUrl(string mediaUrl) { DARABONBA_PTR_SET_VALUE(mediaUrl_, mediaUrl) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
      inline JobResult& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    protected:
      // The AI analysis result.
      shared_ptr<string> aiResult_ {};
      // The ID of the media asset.
      shared_ptr<string> mediaId_ {};
      shared_ptr<string> mediaUrl_ {};
      // The token usage. This parameter is returned only for keyword-based text generation jobs.
      shared_ptr<string> usage_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->jobId_ == nullptr && this->jobResult_ == nullptr && this->output_ == nullptr && this->requestId_ == nullptr
        && this->smartJobInfo_ == nullptr && this->state_ == nullptr && this->userData_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetSmartHandleJobResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSmartHandleJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetSmartHandleJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobResult Field Functions 
    bool hasJobResult() const { return this->jobResult_ != nullptr;};
    void deleteJobResult() { this->jobResult_ = nullptr;};
    inline const GetSmartHandleJobResponseBody::JobResult & getJobResult() const { DARABONBA_PTR_GET_CONST(jobResult_, GetSmartHandleJobResponseBody::JobResult) };
    inline GetSmartHandleJobResponseBody::JobResult getJobResult() { DARABONBA_PTR_GET(jobResult_, GetSmartHandleJobResponseBody::JobResult) };
    inline GetSmartHandleJobResponseBody& setJobResult(const GetSmartHandleJobResponseBody::JobResult & jobResult) { DARABONBA_PTR_SET_VALUE(jobResult_, jobResult) };
    inline GetSmartHandleJobResponseBody& setJobResult(GetSmartHandleJobResponseBody::JobResult && jobResult) { DARABONBA_PTR_SET_RVALUE(jobResult_, jobResult) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline GetSmartHandleJobResponseBody& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmartHandleJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smartJobInfo Field Functions 
    bool hasSmartJobInfo() const { return this->smartJobInfo_ != nullptr;};
    void deleteSmartJobInfo() { this->smartJobInfo_ = nullptr;};
    inline const GetSmartHandleJobResponseBody::SmartJobInfo & getSmartJobInfo() const { DARABONBA_PTR_GET_CONST(smartJobInfo_, GetSmartHandleJobResponseBody::SmartJobInfo) };
    inline GetSmartHandleJobResponseBody::SmartJobInfo getSmartJobInfo() { DARABONBA_PTR_GET(smartJobInfo_, GetSmartHandleJobResponseBody::SmartJobInfo) };
    inline GetSmartHandleJobResponseBody& setSmartJobInfo(const GetSmartHandleJobResponseBody::SmartJobInfo & smartJobInfo) { DARABONBA_PTR_SET_VALUE(smartJobInfo_, smartJobInfo) };
    inline GetSmartHandleJobResponseBody& setSmartJobInfo(GetSmartHandleJobResponseBody::SmartJobInfo && smartJobInfo) { DARABONBA_PTR_SET_RVALUE(smartJobInfo_, smartJobInfo) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetSmartHandleJobResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetSmartHandleJobResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    // The job ID.
    shared_ptr<string> jobId_ {};
    // The job results.
    shared_ptr<GetSmartHandleJobResponseBody::JobResult> jobResult_ {};
    // The job results.
    shared_ptr<string> output_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the intelligent job.
    shared_ptr<GetSmartHandleJobResponseBody::SmartJobInfo> smartJobInfo_ {};
    // The job state.
    // 
    // Valid values:
    // 
    // *   Finished
    // *   Failed
    // *   Executing
    // *   Created
    shared_ptr<string> state_ {};
    // The user-defined data in the JSON format.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
