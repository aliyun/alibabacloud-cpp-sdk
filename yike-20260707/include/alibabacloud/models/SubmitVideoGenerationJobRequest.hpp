// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOGENERATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOGENERATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitVideoGenerationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoGenerationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AspectRatio, aspectRatio_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobParameters, jobParameters_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(N, n_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoGenerationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AspectRatio, aspectRatio_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobParameters, jobParameters_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(N, n_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitVideoGenerationJobRequest() = default ;
    SubmitVideoGenerationJobRequest(const SubmitVideoGenerationJobRequest &) = default ;
    SubmitVideoGenerationJobRequest(SubmitVideoGenerationJobRequest &&) = default ;
    SubmitVideoGenerationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoGenerationJobRequest() = default ;
    SubmitVideoGenerationJobRequest& operator=(const SubmitVideoGenerationJobRequest &) = default ;
    SubmitVideoGenerationJobRequest& operator=(SubmitVideoGenerationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aspectRatio_ == nullptr
        && this->clientToken_ == nullptr && this->duration_ == nullptr && this->input_ == nullptr && this->jobParameters_ == nullptr && this->jobType_ == nullptr
        && this->model_ == nullptr && this->n_ == nullptr && this->output_ == nullptr && this->resolution_ == nullptr && this->scene_ == nullptr
        && this->userData_ == nullptr; };
    // aspectRatio Field Functions 
    bool hasAspectRatio() const { return this->aspectRatio_ != nullptr;};
    void deleteAspectRatio() { this->aspectRatio_ = nullptr;};
    inline string getAspectRatio() const { DARABONBA_PTR_GET_DEFAULT(aspectRatio_, "") };
    inline SubmitVideoGenerationJobRequest& setAspectRatio(string aspectRatio) { DARABONBA_PTR_SET_VALUE(aspectRatio_, aspectRatio) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitVideoGenerationJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline SubmitVideoGenerationJobRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitVideoGenerationJobRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // jobParameters Field Functions 
    bool hasJobParameters() const { return this->jobParameters_ != nullptr;};
    void deleteJobParameters() { this->jobParameters_ = nullptr;};
    inline string getJobParameters() const { DARABONBA_PTR_GET_DEFAULT(jobParameters_, "") };
    inline SubmitVideoGenerationJobRequest& setJobParameters(string jobParameters) { DARABONBA_PTR_SET_VALUE(jobParameters_, jobParameters) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline SubmitVideoGenerationJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline SubmitVideoGenerationJobRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // n Field Functions 
    bool hasN() const { return this->n_ != nullptr;};
    void deleteN() { this->n_ = nullptr;};
    inline int32_t getN() const { DARABONBA_PTR_GET_DEFAULT(n_, 0) };
    inline SubmitVideoGenerationJobRequest& setN(int32_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline SubmitVideoGenerationJobRequest& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline SubmitVideoGenerationJobRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline SubmitVideoGenerationJobRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitVideoGenerationJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The aspect ratio. Valid values: 16:9 (default), 9:16, 4:3, 3:4, 1:1, and adaptive (valid only for wan3.0-video and wan3.0-video-prime).
    shared_ptr<string> aspectRatio_ {};
    // The idempotency parameter. A unique, case-sensitive, 32-character random string. This parameter ensures that the request is completed no more than once, preventing duplicate operations caused by multiple retries.
    shared_ptr<string> clientToken_ {};
    // The output duration. Valid values: 4 to 15 seconds. Default value: 5 seconds.
    // - For wan3.0-video and wan3.0-video-prime, the maximum duration is 30 seconds.
    shared_ptr<string> duration_ {};
    // The task input. This parameter is required. The value is a JSON string that contains the following fields:
    // - Prompt: the prompt. This field is required. Data type: String.
    // - Medias: the media list.
    //   - If JobType is set to image_to_video, this field is required and only one media file is required.
    //   - If JobType is set to first_last_frame, this field is required and exactly two media files are required.
    //   - If JobType is set to reference_to_video, this field is required and up to 9 media files are allowed. For wan3.0-video and wan3.0-video-prime, up to 20 media files are allowed, including up to 10 images, 5 videos, and 5 audio files. The total duration of audio and video files cannot exceed 15 seconds.
    // > The Media structure contains the following fields: Type, the media type. Data type: String. Valid values: image, video, and audio. URL, the download URL of the media file. Data type: String. MediaId, the media asset ID. Data type: String.
    // >
    shared_ptr<string> input_ {};
    // The task feature parameters. The value is a JSON string that contains the following fields:
    // - EnableAudio: specifies whether to output audio. Data type: Boolean. This field is optional. Valid values:
    //   - true: outputs audio.
    //   - false: does not output audio.
    // - Watermark: specifies whether to include a watermark. Data type: Boolean. This field is optional. Valid values:
    //   - true: adds an "AI-generated" watermark to the lower-right corner of the video.
    //   - false: does not add a watermark to the generated video.
    // - PromptExtend: specifies whether to enable intelligent prompt rewriting. Data type: Boolean. This field is optional. This field is valid only for wan3.0-video and wan3.0-video-prime. Valid values:
    //   - true: enables intelligent prompt rewriting. This is the default value.
    //   - false: disables intelligent prompt rewriting.
    // - PostProcessing: the post-processing feature switch. Data type: Object. This field contains the EnableSubtitleRemoval field. Data type: Boolean. Valid values:
    //   - true: enables subtitle removal.
    //   - false: disables subtitle removal.
    shared_ptr<string> jobParameters_ {};
    // The task type. This parameter is required. Valid values:
    // - text_to_video: text-to-video
    // - image_to_video: image-to-video
    // - first_last_frame: first and last frames to video
    // - reference_to_video: reference to video
    shared_ptr<string> jobType_ {};
    // The model name. This parameter is required. Valid values:
    // - Wonder-Ultra
    // - Wonder-Pro
    // - Wonder-Standard
    // - wan3.0-video
    // - wan3.0-video-prime
    // - happyhorse-1.1
    // - happyhorse-1.0
    // - wan2.7
    shared_ptr<string> model_ {};
    // The number of outputs. Valid values: 1 to 4. Default value: 1.
    shared_ptr<int32_t> n_ {};
    // The output configuration. The value is a JSON string. OssUri is the optional customer OSS output directory. If this parameter is not specified, a signed URL for the service-generated output is returned.
    shared_ptr<string> output_ {};
    // The resolution. Valid values:
    // - 1080P
    // - 720P: the default value
    // - 480P: valid only for wan3.0-video and wan3.0-video-prime
    shared_ptr<string> resolution_ {};
    // The scene type. Valid values: general.
    shared_ptr<string> scene_ {};
    // The user-defined parameters. The value is a JSON string. The callback result returns this parameter as is. The system reserved field NotifyAddress specifies the callback URL. The system calls this URL after the task is completed.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
