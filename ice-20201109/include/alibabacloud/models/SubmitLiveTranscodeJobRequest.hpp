// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVETRANSCODEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVETRANSCODEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitLiveTranscodeJobRequestStreamInput.hpp>
#include <alibabacloud/models/SubmitLiveTranscodeJobRequestTimedConfig.hpp>
#include <alibabacloud/models/SubmitLiveTranscodeJobRequestTranscodeOutput.hpp>
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
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->startMode_ == nullptr && return this->streamInput_ == nullptr && return this->templateId_ == nullptr && return this->timedConfig_ == nullptr && return this->transcodeOutput_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitLiveTranscodeJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startMode Field Functions 
    bool hasStartMode() const { return this->startMode_ != nullptr;};
    void deleteStartMode() { this->startMode_ = nullptr;};
    inline int32_t startMode() const { DARABONBA_PTR_GET_DEFAULT(startMode_, 0) };
    inline SubmitLiveTranscodeJobRequest& setStartMode(int32_t startMode) { DARABONBA_PTR_SET_VALUE(startMode_, startMode) };


    // streamInput Field Functions 
    bool hasStreamInput() const { return this->streamInput_ != nullptr;};
    void deleteStreamInput() { this->streamInput_ = nullptr;};
    inline const SubmitLiveTranscodeJobRequestStreamInput & streamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, SubmitLiveTranscodeJobRequestStreamInput) };
    inline SubmitLiveTranscodeJobRequestStreamInput streamInput() { DARABONBA_PTR_GET(streamInput_, SubmitLiveTranscodeJobRequestStreamInput) };
    inline SubmitLiveTranscodeJobRequest& setStreamInput(const SubmitLiveTranscodeJobRequestStreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
    inline SubmitLiveTranscodeJobRequest& setStreamInput(SubmitLiveTranscodeJobRequestStreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitLiveTranscodeJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // timedConfig Field Functions 
    bool hasTimedConfig() const { return this->timedConfig_ != nullptr;};
    void deleteTimedConfig() { this->timedConfig_ = nullptr;};
    inline const SubmitLiveTranscodeJobRequestTimedConfig & timedConfig() const { DARABONBA_PTR_GET_CONST(timedConfig_, SubmitLiveTranscodeJobRequestTimedConfig) };
    inline SubmitLiveTranscodeJobRequestTimedConfig timedConfig() { DARABONBA_PTR_GET(timedConfig_, SubmitLiveTranscodeJobRequestTimedConfig) };
    inline SubmitLiveTranscodeJobRequest& setTimedConfig(const SubmitLiveTranscodeJobRequestTimedConfig & timedConfig) { DARABONBA_PTR_SET_VALUE(timedConfig_, timedConfig) };
    inline SubmitLiveTranscodeJobRequest& setTimedConfig(SubmitLiveTranscodeJobRequestTimedConfig && timedConfig) { DARABONBA_PTR_SET_RVALUE(timedConfig_, timedConfig) };


    // transcodeOutput Field Functions 
    bool hasTranscodeOutput() const { return this->transcodeOutput_ != nullptr;};
    void deleteTranscodeOutput() { this->transcodeOutput_ = nullptr;};
    inline const SubmitLiveTranscodeJobRequestTranscodeOutput & transcodeOutput() const { DARABONBA_PTR_GET_CONST(transcodeOutput_, SubmitLiveTranscodeJobRequestTranscodeOutput) };
    inline SubmitLiveTranscodeJobRequestTranscodeOutput transcodeOutput() { DARABONBA_PTR_GET(transcodeOutput_, SubmitLiveTranscodeJobRequestTranscodeOutput) };
    inline SubmitLiveTranscodeJobRequest& setTranscodeOutput(const SubmitLiveTranscodeJobRequestTranscodeOutput & transcodeOutput) { DARABONBA_PTR_SET_VALUE(transcodeOutput_, transcodeOutput) };
    inline SubmitLiveTranscodeJobRequest& setTranscodeOutput(SubmitLiveTranscodeJobRequestTranscodeOutput && transcodeOutput) { DARABONBA_PTR_SET_RVALUE(transcodeOutput_, transcodeOutput) };


  protected:
    // The name of the transcoding job.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The start mode of the transcoding job.
    // 
    // *   0: The transcoding job immediately starts.
    // *   1: The transcoding job starts at the scheduled time.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> startMode_ = nullptr;
    // The information about the input stream.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitLiveTranscodeJobRequestStreamInput> streamInput_ = nullptr;
    // The template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    // The configuration of a timed transcoding job. This parameter is required if you set StartMode to 1.
    std::shared_ptr<SubmitLiveTranscodeJobRequestTimedConfig> timedConfig_ = nullptr;
    // The information about the transcoding output.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitLiveTranscodeJobRequestTranscodeOutput> transcodeOutput_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
