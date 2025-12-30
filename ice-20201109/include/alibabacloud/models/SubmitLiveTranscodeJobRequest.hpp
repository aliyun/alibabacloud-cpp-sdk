// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVETRANSCODEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVETRANSCODEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveTranscodeJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveTranscodeJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StartMode, startMode_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TimedConfig, timedConfig_);
      DARABONBA_PTR_TO_JSON(TranscodeOutput, transcodeOutput_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveTranscodeJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StartMode, startMode_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TimedConfig, timedConfig_);
      DARABONBA_PTR_FROM_JSON(TranscodeOutput, transcodeOutput_);
    };
    SubmitLiveTranscodeJobRequest() = default ;
    SubmitLiveTranscodeJobRequest(const SubmitLiveTranscodeJobRequest &) = default ;
    SubmitLiveTranscodeJobRequest(SubmitLiveTranscodeJobRequest &&) = default ;
    SubmitLiveTranscodeJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveTranscodeJobRequest() = default ;
    SubmitLiveTranscodeJobRequest& operator=(const SubmitLiveTranscodeJobRequest &) = default ;
    SubmitLiveTranscodeJobRequest& operator=(SubmitLiveTranscodeJobRequest &&) = default ;
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

    virtual bool empty() const override { return this->name_ == nullptr
        && this->startMode_ == nullptr && this->streamInput_ == nullptr && this->templateId_ == nullptr && this->timedConfig_ == nullptr && this->transcodeOutput_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitLiveTranscodeJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startMode Field Functions 
    bool hasStartMode() const { return this->startMode_ != nullptr;};
    void deleteStartMode() { this->startMode_ = nullptr;};
    inline int32_t getStartMode() const { DARABONBA_PTR_GET_DEFAULT(startMode_, 0) };
    inline SubmitLiveTranscodeJobRequest& setStartMode(int32_t startMode) { DARABONBA_PTR_SET_VALUE(startMode_, startMode) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const SubmitLiveTranscodeJobRequest::StreamInput & getStreamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, SubmitLiveTranscodeJobRequest::StreamInput) };
    inline SubmitLiveTranscodeJobRequest::StreamInput getStreamInput() { DARABONBA_PTR_GET(streamInput_, SubmitLiveTranscodeJobRequest::StreamInput) };
    inline SubmitLiveTranscodeJobRequest& setStreamInput(const SubmitLiveTranscodeJobRequest::StreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline SubmitLiveTranscodeJobRequest& setStreamInput(SubmitLiveTranscodeJobRequest::StreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitLiveTranscodeJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // timedConfig Field Functions 
    bool hasTimedConfig() const { return this->timedConfig_ != nullptr;};
    void deleteTimedConfig() { this->timedConfig_ = nullptr;};
    inline const SubmitLiveTranscodeJobRequest::TimedConfig & getTimedConfig() const { DARABONBA_PTR_GET_CONST(timedConfig_, SubmitLiveTranscodeJobRequest::TimedConfig) };
    inline SubmitLiveTranscodeJobRequest::TimedConfig getTimedConfig() { DARABONBA_PTR_GET(timedConfig_, SubmitLiveTranscodeJobRequest::TimedConfig) };
    inline SubmitLiveTranscodeJobRequest& setTimedConfig(const SubmitLiveTranscodeJobRequest::TimedConfig & timedConfig) { DARABONBA_PTR_SET_VALUE(timedConfig_, timedConfig) };
    inline SubmitLiveTranscodeJobRequest& setTimedConfig(SubmitLiveTranscodeJobRequest::TimedConfig && timedConfig) { DARABONBA_PTR_SET_RVALUE(timedConfig_, timedConfig) };


    // transcodeOutput Field Functions 
    bool hasTranscodeOutput() const { return this->transcodeOutput_ != nullptr;};
    void deleteTranscodeOutput() { this->transcodeOutput_ = nullptr;};
    inline const SubmitLiveTranscodeJobRequest::TranscodeOutput & getTranscodeOutput() const { DARABONBA_PTR_GET_CONST(transcodeOutput_, SubmitLiveTranscodeJobRequest::TranscodeOutput) };
    inline SubmitLiveTranscodeJobRequest::TranscodeOutput getTranscodeOutput() { DARABONBA_PTR_GET(transcodeOutput_, SubmitLiveTranscodeJobRequest::TranscodeOutput) };
    inline SubmitLiveTranscodeJobRequest& setTranscodeOutput(const SubmitLiveTranscodeJobRequest::TranscodeOutput & transcodeOutput) { DARABONBA_PTR_SET_VALUE(transcodeOutput_, transcodeOutput) };
    inline SubmitLiveTranscodeJobRequest& setTranscodeOutput(SubmitLiveTranscodeJobRequest::TranscodeOutput && transcodeOutput) { DARABONBA_PTR_SET_RVALUE(transcodeOutput_, transcodeOutput) };


  protected:
    // The name of the transcoding job.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The start mode of the transcoding job.
    // 
    // *   0: The transcoding job immediately starts.
    // *   1: The transcoding job starts at the scheduled time.
    // 
    // This parameter is required.
    shared_ptr<int32_t> startMode_ {};
    // The information about the input stream.
    // 
    // This parameter is required.
    shared_ptr<SubmitLiveTranscodeJobRequest::StreamInput> streamInput_ {};
    // The template ID.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // The configuration of a timed transcoding job. This parameter is required if you set StartMode to 1.
    shared_ptr<SubmitLiveTranscodeJobRequest::TimedConfig> timedConfig_ {};
    // The information about the transcoding output.
    // 
    // This parameter is required.
    shared_ptr<SubmitLiveTranscodeJobRequest::TranscodeOutput> transcodeOutput_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
