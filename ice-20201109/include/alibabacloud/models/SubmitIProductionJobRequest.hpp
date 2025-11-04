// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIPRODUCTIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIPRODUCTIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitIProductionJobRequestInput.hpp>
#include <alibabacloud/models/SubmitIProductionJobRequestOutput.hpp>
#include <alibabacloud/models/SubmitIProductionJobRequestScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitIProductionJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitIProductionJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitIProductionJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitIProductionJobRequest() = default ;
    SubmitIProductionJobRequest(const SubmitIProductionJobRequest &) = default ;
    SubmitIProductionJobRequest(SubmitIProductionJobRequest &&) = default ;
    SubmitIProductionJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitIProductionJobRequest() = default ;
    SubmitIProductionJobRequest& operator=(const SubmitIProductionJobRequest &) = default ;
    SubmitIProductionJobRequest& operator=(SubmitIProductionJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionName_ == nullptr
        && return this->input_ == nullptr && return this->jobParams_ == nullptr && return this->modelId_ == nullptr && return this->name_ == nullptr && return this->output_ == nullptr
        && return this->scheduleConfig_ == nullptr && return this->templateId_ == nullptr && return this->userData_ == nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline SubmitIProductionJobRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitIProductionJobRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitIProductionJobRequestInput) };
    inline SubmitIProductionJobRequestInput input() { DARABONBA_PTR_GET(input_, SubmitIProductionJobRequestInput) };
    inline SubmitIProductionJobRequest& setInput(const SubmitIProductionJobRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitIProductionJobRequest& setInput(SubmitIProductionJobRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string jobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline SubmitIProductionJobRequest& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitIProductionJobRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitIProductionJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitIProductionJobRequestOutput & output() const { DARABONBA_PTR_GET_CONST(output_, SubmitIProductionJobRequestOutput) };
    inline SubmitIProductionJobRequestOutput output() { DARABONBA_PTR_GET(output_, SubmitIProductionJobRequestOutput) };
    inline SubmitIProductionJobRequest& setOutput(const SubmitIProductionJobRequestOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitIProductionJobRequest& setOutput(SubmitIProductionJobRequestOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitIProductionJobRequestScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitIProductionJobRequestScheduleConfig) };
    inline SubmitIProductionJobRequestScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitIProductionJobRequestScheduleConfig) };
    inline SubmitIProductionJobRequest& setScheduleConfig(const SubmitIProductionJobRequestScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitIProductionJobRequest& setScheduleConfig(SubmitIProductionJobRequestScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitIProductionJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitIProductionJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


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
    std::shared_ptr<SubmitIProductionJobRequestInput> input_ = nullptr;
    // The algorithm-specific parameters. The parameters are specified as JSON objects and vary based on the algorithm. For more information, see the "Parameters of JobParams" section of this topic.
    std::shared_ptr<string> jobParams_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    // The name of the intelligent production job. The name can be up to 100 characters in length.
    std::shared_ptr<string> name_ = nullptr;
    // The output file. The file can be an OSS object or a media asset.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitIProductionJobRequestOutput> output_ = nullptr;
    // The scheduling configuration.
    std::shared_ptr<SubmitIProductionJobRequestScheduleConfig> scheduleConfig_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The user-defined data that is returned in the response. The value can be up to 1,024 bytes in length.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
