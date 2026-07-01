// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIPRODUCTIONJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIPRODUCTIONJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitIProductionJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitIProductionJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, outputShrink_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitIProductionJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, outputShrink_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitIProductionJobShrinkRequest() = default ;
    SubmitIProductionJobShrinkRequest(const SubmitIProductionJobShrinkRequest &) = default ;
    SubmitIProductionJobShrinkRequest(SubmitIProductionJobShrinkRequest &&) = default ;
    SubmitIProductionJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitIProductionJobShrinkRequest() = default ;
    SubmitIProductionJobShrinkRequest& operator=(const SubmitIProductionJobShrinkRequest &) = default ;
    SubmitIProductionJobShrinkRequest& operator=(SubmitIProductionJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionName_ == nullptr
        && this->inputShrink_ == nullptr && this->jobParams_ == nullptr && this->modelId_ == nullptr && this->name_ == nullptr && this->outputShrink_ == nullptr
        && this->scheduleConfigShrink_ == nullptr && this->templateId_ == nullptr && this->userData_ == nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline SubmitIProductionJobShrinkRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string getInputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline SubmitIProductionJobShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string getJobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline SubmitIProductionJobShrinkRequest& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitIProductionJobShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitIProductionJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputShrink Field Functions 
    bool hasOutputShrink() const { return this->outputShrink_ != nullptr;};
    void deleteOutputShrink() { this->outputShrink_ = nullptr;};
    inline string getOutputShrink() const { DARABONBA_PTR_GET_DEFAULT(outputShrink_, "") };
    inline SubmitIProductionJobShrinkRequest& setOutputShrink(string outputShrink) { DARABONBA_PTR_SET_VALUE(outputShrink_, outputShrink) };


    // scheduleConfigShrink Field Functions 
    bool hasScheduleConfigShrink() const { return this->scheduleConfigShrink_ != nullptr;};
    void deleteScheduleConfigShrink() { this->scheduleConfigShrink_ = nullptr;};
    inline string getScheduleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfigShrink_, "") };
    inline SubmitIProductionJobShrinkRequest& setScheduleConfigShrink(string scheduleConfigShrink) { DARABONBA_PTR_SET_VALUE(scheduleConfigShrink_, scheduleConfigShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitIProductionJobShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitIProductionJobShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The name of the algorithm function. Valid values:
    // 
    // - **Cover**: Generates a smart cover.
    // 
    // - **VideoClip**: Creates a video summary.
    // 
    // - **VideoDelogo**: Removes logos from a video.
    // 
    // - **VideoDetext**: Removes text from a video.
    // 
    // - **CaptionExtraction**: Extracts captions from a video.
    // 
    // - **VideoGreenScreenMatting**: Performs green screen keying for a video.
    // 
    // - **FaceBeauty**: Applies beauty filters to faces in a video.
    // 
    // - **VideoH2V**: Converts a horizontal video to a vertical video.
    // 
    // - **MusicSegmentDetect**: Detects chorus segments in music.
    // 
    // - **AudioBeatDetection**: Detects the beat of an audio track.
    // 
    // - **AudioQualityAssessment**: Assesses audio quality.
    // 
    // - **SpeechDenoise**: Reduces noise in speech audio.
    // 
    // - **AudioMixing**: Mixes audio tracks.
    // 
    // - **MusicDemix**: Separates vocals from accompaniment in music.
    // 
    // This parameter is required.
    shared_ptr<string> functionName_ {};
    // The input media asset. You can specify an OSS file or a media asset ID.
    // 
    // The requirements for input files vary by algorithm function. For more information, see the supplementary instructions.
    // 
    // This parameter is required.
    shared_ptr<string> inputShrink_ {};
    // The algorithm job parameters, specified as a JSON-formatted string. The content of the JSON object varies by algorithm function. For more information, see the supplementary instructions.
    shared_ptr<string> jobParams_ {};
    // The ID of the algorithm model. If you do not specify this parameter, the system uses the default model for the selected function. We recommend leaving this parameter empty unless you need to use a specific alternative model.
    // 
    // The following function offers an alternative model:
    // 
    // - `VideoDetext`
    // 
    //   - Set `ModelId` to `algo-video-detext-new` to use an advanced subtitle removal algorithm. This model provides higher quality results but is slower and more expensive than the default model.
    shared_ptr<string> modelId_ {};
    // The name of the job, which can be up to 100 characters long.
    shared_ptr<string> name_ {};
    // The output destination. You can specify an OSS file path or a media asset ID.
    // 
    // The output files vary by algorithm function. For more information, see the supplementary instructions.
    // 
    // This parameter is required.
    shared_ptr<string> outputShrink_ {};
    // The configuration for job scheduling.
    shared_ptr<string> scheduleConfigShrink_ {};
    // The ID of the template.
    shared_ptr<string> templateId_ {};
    // Custom user data. The system passes this data through and returns it as-is in the callback or response. The length cannot exceed 256 characters.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
