// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVETRANSCODEJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVETRANSCODEJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveTranscodeJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveTranscodeJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StartMode, startMode_);
      DARABONBA_PTR_TO_JSON(StreamInput, streamInputShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TimedConfig, timedConfigShrink_);
      DARABONBA_PTR_TO_JSON(TranscodeOutput, transcodeOutputShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveTranscodeJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StartMode, startMode_);
      DARABONBA_PTR_FROM_JSON(StreamInput, streamInputShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TimedConfig, timedConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TranscodeOutput, transcodeOutputShrink_);
    };
    SubmitLiveTranscodeJobShrinkRequest() = default ;
    SubmitLiveTranscodeJobShrinkRequest(const SubmitLiveTranscodeJobShrinkRequest &) = default ;
    SubmitLiveTranscodeJobShrinkRequest(SubmitLiveTranscodeJobShrinkRequest &&) = default ;
    SubmitLiveTranscodeJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveTranscodeJobShrinkRequest() = default ;
    SubmitLiveTranscodeJobShrinkRequest& operator=(const SubmitLiveTranscodeJobShrinkRequest &) = default ;
    SubmitLiveTranscodeJobShrinkRequest& operator=(SubmitLiveTranscodeJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->startMode_ == nullptr && this->streamInputShrink_ == nullptr && this->templateId_ == nullptr && this->timedConfigShrink_ == nullptr && this->transcodeOutputShrink_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitLiveTranscodeJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startMode Field Functions 
    bool hasStartMode() const { return this->startMode_ != nullptr;};
    void deleteStartMode() { this->startMode_ = nullptr;};
    inline int32_t getStartMode() const { DARABONBA_PTR_GET_DEFAULT(startMode_, 0) };
    inline SubmitLiveTranscodeJobShrinkRequest& setStartMode(int32_t startMode) { DARABONBA_PTR_SET_VALUE(startMode_, startMode) };


    // streamInputShrink Field Functions 
    bool hasStreamInputShrink() const { return this->streamInputShrink_ != nullptr;};
    void deleteStreamInputShrink() { this->streamInputShrink_ = nullptr;};
    inline string getStreamInputShrink() const { DARABONBA_PTR_GET_DEFAULT(streamInputShrink_, "") };
    inline SubmitLiveTranscodeJobShrinkRequest& setStreamInputShrink(string streamInputShrink) { DARABONBA_PTR_SET_VALUE(streamInputShrink_, streamInputShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitLiveTranscodeJobShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // timedConfigShrink Field Functions 
    bool hasTimedConfigShrink() const { return this->timedConfigShrink_ != nullptr;};
    void deleteTimedConfigShrink() { this->timedConfigShrink_ = nullptr;};
    inline string getTimedConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(timedConfigShrink_, "") };
    inline SubmitLiveTranscodeJobShrinkRequest& setTimedConfigShrink(string timedConfigShrink) { DARABONBA_PTR_SET_VALUE(timedConfigShrink_, timedConfigShrink) };


    // transcodeOutputShrink Field Functions 
    bool hasTranscodeOutputShrink() const { return this->transcodeOutputShrink_ != nullptr;};
    void deleteTranscodeOutputShrink() { this->transcodeOutputShrink_ = nullptr;};
    inline string getTranscodeOutputShrink() const { DARABONBA_PTR_GET_DEFAULT(transcodeOutputShrink_, "") };
    inline SubmitLiveTranscodeJobShrinkRequest& setTranscodeOutputShrink(string transcodeOutputShrink) { DARABONBA_PTR_SET_VALUE(transcodeOutputShrink_, transcodeOutputShrink) };


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
    shared_ptr<string> streamInputShrink_ {};
    // The template ID.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // The configuration of a timed transcoding job. This parameter is required if you set StartMode to 1.
    shared_ptr<string> timedConfigShrink_ {};
    // The information about the transcoding output.
    // 
    // This parameter is required.
    shared_ptr<string> transcodeOutputShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
