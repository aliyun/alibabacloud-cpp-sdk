// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVETRANSCODEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVETRANSCODEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLiveTranscodeJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveTranscodeJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(TimedConfig, timedConfig_);
      DARABONBA_PTR_TO_JSON(TranscodeOutput, transcodeOutput_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveTranscodeJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(TimedConfig, timedConfig_);
      DARABONBA_PTR_FROM_JSON(TranscodeOutput, transcodeOutput_);
    };
    UpdateLiveTranscodeJobRequest() = default ;
    UpdateLiveTranscodeJobRequest(const UpdateLiveTranscodeJobRequest &) = default ;
    UpdateLiveTranscodeJobRequest(UpdateLiveTranscodeJobRequest &&) = default ;
    UpdateLiveTranscodeJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveTranscodeJobRequest() = default ;
    UpdateLiveTranscodeJobRequest& operator=(const UpdateLiveTranscodeJobRequest &) = default ;
    UpdateLiveTranscodeJobRequest& operator=(UpdateLiveTranscodeJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeOutput : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeOutput& obj) { 
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeOutput& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      TranscodeOutput() = default ;
      TranscodeOutput(const TranscodeOutput &) = default ;
      TranscodeOutput(TranscodeOutput &&) = default ;
      TranscodeOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeOutput() = default ;
      TranscodeOutput& operator=(const TranscodeOutput &) = default ;
      TranscodeOutput& operator=(TranscodeOutput &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainName_ == nullptr
        && this->type_ == nullptr; };
      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline TranscodeOutput& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TranscodeOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The streaming domain name of ApsaraVideo Live.
      // 
      // This parameter is required.
      shared_ptr<string> domainName_ {};
      // The type of the output stream. A value of LiveCenter indicates that the URL of the output stream is generated based on the domain name of ApsaraVideo Live. The value can only be LiveCenter.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    class TimedConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimedConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, TimedConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      TimedConfig() = default ;
      TimedConfig(const TimedConfig &) = default ;
      TimedConfig(TimedConfig &&) = default ;
      TimedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimedConfig() = default ;
      TimedConfig& operator=(const TimedConfig &) = default ;
      TimedConfig& operator=(TimedConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline TimedConfig& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline TimedConfig& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The stop time of the transcoding job. Note: The time span between the stop time and the current time cannot exceed seven days.
      shared_ptr<string> endTime_ {};
      // The start time of the transcoding job. Note: The time span between the start time and the current time cannot exceed seven days.
      shared_ptr<string> startTime_ {};
    };

    class StreamInput : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamInput& obj) { 
        DARABONBA_PTR_TO_JSON(InputUrl, inputUrl_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, StreamInput& obj) { 
        DARABONBA_PTR_FROM_JSON(InputUrl, inputUrl_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->inputUrl_ == nullptr
        && this->type_ == nullptr; };
      // inputUrl Field Functions 
      bool hasInputUrl() const { return this->inputUrl_ != nullptr;};
      void deleteInputUrl() { this->inputUrl_ = nullptr;};
      inline string getInputUrl() const { DARABONBA_PTR_GET_DEFAULT(inputUrl_, "") };
      inline StreamInput& setInputUrl(string inputUrl) { DARABONBA_PTR_SET_VALUE(inputUrl_, inputUrl) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline StreamInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The URL of the input stream.
      // 
      // This parameter is required.
      shared_ptr<string> inputUrl_ {};
      // The type of the input stream. The value can only be rtmp.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->name_ == nullptr && this->streamInput_ == nullptr && this->timedConfig_ == nullptr && this->transcodeOutput_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline UpdateLiveTranscodeJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateLiveTranscodeJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const UpdateLiveTranscodeJobRequest::StreamInput & getStreamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, UpdateLiveTranscodeJobRequest::StreamInput) };
    inline UpdateLiveTranscodeJobRequest::StreamInput getStreamInput() { DARABONBA_PTR_GET(streamInput_, UpdateLiveTranscodeJobRequest::StreamInput) };
    inline UpdateLiveTranscodeJobRequest& setStreamInput(const UpdateLiveTranscodeJobRequest::StreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline UpdateLiveTranscodeJobRequest& setStreamInput(UpdateLiveTranscodeJobRequest::StreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // timedConfig Field Functions 
    bool hasTimedConfig() const { return this->timedConfig_ != nullptr;};
    void deleteTimedConfig() { this->timedConfig_ = nullptr;};
    inline const UpdateLiveTranscodeJobRequest::TimedConfig & getTimedConfig() const { DARABONBA_PTR_GET_CONST(timedConfig_, UpdateLiveTranscodeJobRequest::TimedConfig) };
    inline UpdateLiveTranscodeJobRequest::TimedConfig getTimedConfig() { DARABONBA_PTR_GET(timedConfig_, UpdateLiveTranscodeJobRequest::TimedConfig) };
    inline UpdateLiveTranscodeJobRequest& setTimedConfig(const UpdateLiveTranscodeJobRequest::TimedConfig & timedConfig) { DARABONBA_PTR_SET_VALUE(timedConfig_, timedConfig) };
    inline UpdateLiveTranscodeJobRequest& setTimedConfig(UpdateLiveTranscodeJobRequest::TimedConfig && timedConfig) { DARABONBA_PTR_SET_RVALUE(timedConfig_, timedConfig) };


    // transcodeOutput Field Functions 
    bool hasTranscodeOutput() const { return this->transcodeOutput_ != nullptr;};
    void deleteTranscodeOutput() { this->transcodeOutput_ = nullptr;};
    inline const UpdateLiveTranscodeJobRequest::TranscodeOutput & getTranscodeOutput() const { DARABONBA_PTR_GET_CONST(transcodeOutput_, UpdateLiveTranscodeJobRequest::TranscodeOutput) };
    inline UpdateLiveTranscodeJobRequest::TranscodeOutput getTranscodeOutput() { DARABONBA_PTR_GET(transcodeOutput_, UpdateLiveTranscodeJobRequest::TranscodeOutput) };
    inline UpdateLiveTranscodeJobRequest& setTranscodeOutput(const UpdateLiveTranscodeJobRequest::TranscodeOutput & transcodeOutput) { DARABONBA_PTR_SET_VALUE(transcodeOutput_, transcodeOutput) };
    inline UpdateLiveTranscodeJobRequest& setTranscodeOutput(UpdateLiveTranscodeJobRequest::TranscodeOutput && transcodeOutput) { DARABONBA_PTR_SET_RVALUE(transcodeOutput_, transcodeOutput) };


  protected:
    // The job ID.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    // The name of the job.
    shared_ptr<string> name_ {};
    // The information about the input stream.
    shared_ptr<UpdateLiveTranscodeJobRequest::StreamInput> streamInput_ {};
    // The configuration of a timed transcoding job.
    shared_ptr<UpdateLiveTranscodeJobRequest::TimedConfig> timedConfig_ {};
    // The information about the transcoding output.
    shared_ptr<UpdateLiveTranscodeJobRequest::TranscodeOutput> transcodeOutput_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
