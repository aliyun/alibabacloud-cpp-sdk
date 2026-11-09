// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOCREATIVEGENERATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOCREATIVEGENERATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitVideoCreativeGenerationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoCreativeGenerationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AspectRatio, aspectRatio_);
      DARABONBA_PTR_TO_JSON(AvatarData, avatarData_);
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(OutputLanguages, outputLanguages_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(UserMaterials, userMaterials_);
      DARABONBA_PTR_TO_JSON(WithSubtitles, withSubtitles_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoCreativeGenerationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AspectRatio, aspectRatio_);
      DARABONBA_PTR_FROM_JSON(AvatarData, avatarData_);
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(OutputLanguages, outputLanguages_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(UserMaterials, userMaterials_);
      DARABONBA_PTR_FROM_JSON(WithSubtitles, withSubtitles_);
    };
    SubmitVideoCreativeGenerationJobRequest() = default ;
    SubmitVideoCreativeGenerationJobRequest(const SubmitVideoCreativeGenerationJobRequest &) = default ;
    SubmitVideoCreativeGenerationJobRequest(SubmitVideoCreativeGenerationJobRequest &&) = default ;
    SubmitVideoCreativeGenerationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoCreativeGenerationJobRequest() = default ;
    SubmitVideoCreativeGenerationJobRequest& operator=(const SubmitVideoCreativeGenerationJobRequest &) = default ;
    SubmitVideoCreativeGenerationJobRequest& operator=(SubmitVideoCreativeGenerationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aspectRatio_ == nullptr
        && this->avatarData_ == nullptr && this->jobParams_ == nullptr && this->outputLanguages_ == nullptr && this->resolution_ == nullptr && this->sceneType_ == nullptr
        && this->userData_ == nullptr && this->userMaterials_ == nullptr && this->withSubtitles_ == nullptr; };
    // aspectRatio Field Functions 
    bool hasAspectRatio() const { return this->aspectRatio_ != nullptr;};
    void deleteAspectRatio() { this->aspectRatio_ = nullptr;};
    inline string getAspectRatio() const { DARABONBA_PTR_GET_DEFAULT(aspectRatio_, "") };
    inline SubmitVideoCreativeGenerationJobRequest& setAspectRatio(string aspectRatio) { DARABONBA_PTR_SET_VALUE(aspectRatio_, aspectRatio) };


    // avatarData Field Functions 
    bool hasAvatarData() const { return this->avatarData_ != nullptr;};
    void deleteAvatarData() { this->avatarData_ = nullptr;};
    inline string getAvatarData() const { DARABONBA_PTR_GET_DEFAULT(avatarData_, "") };
    inline SubmitVideoCreativeGenerationJobRequest& setAvatarData(string avatarData) { DARABONBA_PTR_SET_VALUE(avatarData_, avatarData) };


    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string getJobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline SubmitVideoCreativeGenerationJobRequest& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // outputLanguages Field Functions 
    bool hasOutputLanguages() const { return this->outputLanguages_ != nullptr;};
    void deleteOutputLanguages() { this->outputLanguages_ = nullptr;};
    inline string getOutputLanguages() const { DARABONBA_PTR_GET_DEFAULT(outputLanguages_, "") };
    inline SubmitVideoCreativeGenerationJobRequest& setOutputLanguages(string outputLanguages) { DARABONBA_PTR_SET_VALUE(outputLanguages_, outputLanguages) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline SubmitVideoCreativeGenerationJobRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // sceneType Field Functions 
    bool hasSceneType() const { return this->sceneType_ != nullptr;};
    void deleteSceneType() { this->sceneType_ = nullptr;};
    inline string getSceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, "") };
    inline SubmitVideoCreativeGenerationJobRequest& setSceneType(string sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitVideoCreativeGenerationJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userMaterials Field Functions 
    bool hasUserMaterials() const { return this->userMaterials_ != nullptr;};
    void deleteUserMaterials() { this->userMaterials_ = nullptr;};
    inline string getUserMaterials() const { DARABONBA_PTR_GET_DEFAULT(userMaterials_, "") };
    inline SubmitVideoCreativeGenerationJobRequest& setUserMaterials(string userMaterials) { DARABONBA_PTR_SET_VALUE(userMaterials_, userMaterials) };


    // withSubtitles Field Functions 
    bool hasWithSubtitles() const { return this->withSubtitles_ != nullptr;};
    void deleteWithSubtitles() { this->withSubtitles_ = nullptr;};
    inline bool getWithSubtitles() const { DARABONBA_PTR_GET_DEFAULT(withSubtitles_, false) };
    inline SubmitVideoCreativeGenerationJobRequest& setWithSubtitles(bool withSubtitles) { DARABONBA_PTR_SET_VALUE(withSubtitles_, withSubtitles) };


  protected:
    // The aspect ratio. Valid values: 16:9 (default), 9:16, 4:3, and 3:4.
    // 
    // This parameter is required.
    shared_ptr<string> aspectRatio_ {};
    // The digital human information. The value is a JSON string. This parameter is required for the `creator-talk`, `creator-sales`, and `avatar-broadcast` scenes. It includes the following fields:
    // - AvatarPortrait: The digital human portrait. This field is required. The value is a string that represents the media asset ID of the portrait image or the image URL.
    // - AvatarVoice: The digital human voice. This field is optional. The value is a string that represents the voice audio ID or the audio URL.
    shared_ptr<string> avatarData_ {};
    // The job parameters. The value is a JSON string. This parameter includes the following fields:
    // - TextType: The text type. This field is required. The value is an integer. Valid values: 1 (original draft, such as product or news information, which the system automatically converts into a voiceover script) and 2 (voiceover script).
    // - TextContent: The text content. This field is required. The value is a string. The maximum length is 10,000 characters.
    // - VoiceDuration: The expected voiceover duration. This field is optional. The value is an integer. This field is configured when TextType is set to 1. Unit: seconds. Default value: 60. The final video duration will be slightly shorter than the expected duration.
    // - NarrationVoiceId: The narration voice ID. This field is valid only for the `briefing-voiceover` scene.
    // - SceneImage: The scene image. This field is optional. This field takes effect only for the three creator marketing scenes (creator-sales, creator-talk, and product-showcase). If you specify valid fields for other scenes, an InvalidParameter error is returned. If both fields are empty (including not specified or an empty object {}), it is equivalent to not providing this parameter, and the behavior is consistent with the existing process without rejecting the job. The Prompt and BackgroundMediaId or BackgroundMediaUrl fields are both optional, can coexist, and are not mutually exclusive. If only Prompt is specified, the text mode is used to generate the scene image. If only the background image is specified, the background image mode is used to fuse based on the background image. If both are specified, the background image takes precedence. If both BackgroundMediaId and BackgroundMediaUrl are specified, BackgroundMediaUrl takes precedence. This field includes the following sub-fields:
    //   - Prompt: The text description of the scene image. This field is optional. The value is a string. The maximum length is 2,000 characters. If the length exceeds the limit, an InvalidParameter error is returned. An empty string is considered as not provided.
    //   - BackgroundMediaId: The media asset ID of the background image. This field is optional. The value is a string. During submission, it is parsed into a URL by ice-media. If the parsing fails, the job is immediately rejected.
    //   - BackgroundMediaUrl: The direct URL of the background image. This field is optional. The value is a string. The URL must use the HTTP or HTTPS protocol. In this case, media asset parsing is not performed.
    // 
    // This parameter is required.
    shared_ptr<string> jobParams_ {};
    // The output languages. The value is a JSON array string. Valid values: CN, EN, and YUE. The `avatar-broadcast` and `creator-sales` scenes only support Chinese.
    shared_ptr<string> outputLanguages_ {};
    // The resolution. Valid values:
    // - 1080P
    // - 720P (default)
    // 
    // This parameter is required.
    shared_ptr<string> resolution_ {};
    // The scene type. Valid values:
    // - briefing-voiceover: News broadcast (supplements video footage based on the voiceover or uses no digital human).
    // - creator-talk: Creator explanation (multiple shots for news, science, or finance).
    // - creator-sales: Creator product promotion (three-part structure for product promotion, reviews, or store visits).
    // - avatar-broadcast: Digital human broadcast (fixed single shot for broadcasts, announcements, or templates).
    // 
    // This parameter is required.
    shared_ptr<string> sceneType_ {};
    // The custom parameters. The value is a JSON string. The value is returned as-is in query or callback results. The maximum length is 8,192 characters. System reserved words:
    // * NotifyAddress: The callback URL. The URL must use the HTTP or HTTPS protocol. The maximum length is 2,048 characters. The callback is triggered after the node reaches the desired state.
    // * UserId: The UID of the actual resource ownership. If this field is missing, the system falls back to CallerUid.
    shared_ptr<string> userData_ {};
    // The list of user materials. The value is a JSON array string. This parameter includes the following fields:
    // - MediaId: The media asset ID. This is the ID of the image or video uploaded to the platform.
    // - Type: The media type.
    // - Action: The method of using the material. Valid values: `match` (matches suitable clips from the video material based on the voiceover) and `insert` (inserts the video material before the CTA shot. This is intelligently analyzed after shots are generated based on the voiceover. This value is valid only for videos). Default value: `match`.
    shared_ptr<string> userMaterials_ {};
    // Specifies whether to include subtitles. Default value: true.
    shared_ptr<bool> withSubtitles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
