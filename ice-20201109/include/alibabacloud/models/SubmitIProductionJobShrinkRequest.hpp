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
        && return this->inputShrink_ == nullptr && return this->jobParams_ == nullptr && return this->modelId_ == nullptr && return this->name_ == nullptr && return this->outputShrink_ == nullptr
        && return this->scheduleConfigShrink_ == nullptr && return this->templateId_ == nullptr && return this->userData_ == nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline SubmitIProductionJobShrinkRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string inputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline SubmitIProductionJobShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string jobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline SubmitIProductionJobShrinkRequest& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitIProductionJobShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitIProductionJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputShrink Field Functions 
    bool hasOutputShrink() const { return this->outputShrink_ != nullptr;};
    void deleteOutputShrink() { this->outputShrink_ = nullptr;};
    inline string outputShrink() const { DARABONBA_PTR_GET_DEFAULT(outputShrink_, "") };
    inline SubmitIProductionJobShrinkRequest& setOutputShrink(string outputShrink) { DARABONBA_PTR_SET_VALUE(outputShrink_, outputShrink) };


    // scheduleConfigShrink Field Functions 
    bool hasScheduleConfigShrink() const { return this->scheduleConfigShrink_ != nullptr;};
    void deleteScheduleConfigShrink() { this->scheduleConfigShrink_ = nullptr;};
    inline string scheduleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfigShrink_, "") };
    inline SubmitIProductionJobShrinkRequest& setScheduleConfigShrink(string scheduleConfigShrink) { DARABONBA_PTR_SET_VALUE(scheduleConfigShrink_, scheduleConfigShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitIProductionJobShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitIProductionJobShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The name of the algorithm that you want to use for the job. Valid values:
    // 
    // *   **Cover**: This algorithm intelligently generates a thumbnail image for a video.
    // *   **VideoClip**: This algorithm intelligently generates a summary for a video.
    // *   **VideoDelogo**: This algorithm removes logos from a video.
    // *   **VideoDetext**: This algorithm removes captions from a video.
    // *   **CaptionExtraction**: This algorithm extracts captions from a video and generates the caption file.
    // *   **VideoGreenScreenMatting**: This algorithm performs green-screen image matting on a video and generates a new video.
    // *   **FaceBeauty**: This algorithm performs video retouching.
    // *   **VideoH2V**: This algorithm transforms a video from the landscape mode to the portrait mode.
    // *   **MusicSegmentDetect**: This algorithm detects the chorus of a song.
    // *   **AudioBeatDetection**: This algorithm detects rhythms.
    // *   **AudioQualityAssessment**: This algorithm assesses the audio quality.
    // *   **SpeechDenoise**: This algorithm performs noise reduction.
    // *   **AudioMixing**: This algorithm mixes audio streams.
    // 
    // This parameter is required.
    std::shared_ptr<string> functionName_ = nullptr;
    // The input file. The file can be an Object Storage Service (OSS) object or a media asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputShrink_ = nullptr;
    // The algorithm-specific parameters. The parameters are specified as JSON objects and vary based on the algorithm. For more information, see the "Parameters of JobParams" section of this topic.
    std::shared_ptr<string> jobParams_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    // The name of the intelligent production job. The name can be up to 100 characters in length.
    std::shared_ptr<string> name_ = nullptr;
    // The output file. The file can be an OSS object or a media asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> outputShrink_ = nullptr;
    // The scheduling configuration.
    std::shared_ptr<string> scheduleConfigShrink_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The user-defined data that is returned in the response. The value can be up to 1,024 bytes in length.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
