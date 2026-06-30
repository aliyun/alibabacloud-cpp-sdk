// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITYIKEAVATARNARRATORJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITYIKEAVATARNARRATORJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class SubmitYikeAvatarNarratorJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitYikeAvatarNarratorJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitYikeAvatarNarratorJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitYikeAvatarNarratorJobRequest() = default ;
    SubmitYikeAvatarNarratorJobRequest(const SubmitYikeAvatarNarratorJobRequest &) = default ;
    SubmitYikeAvatarNarratorJobRequest(SubmitYikeAvatarNarratorJobRequest &&) = default ;
    SubmitYikeAvatarNarratorJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitYikeAvatarNarratorJobRequest() = default ;
    SubmitYikeAvatarNarratorJobRequest& operator=(const SubmitYikeAvatarNarratorJobRequest &) = default ;
    SubmitYikeAvatarNarratorJobRequest& operator=(SubmitYikeAvatarNarratorJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobParams_ == nullptr
        && this->userData_ == nullptr; };
    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string getJobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline SubmitYikeAvatarNarratorJobRequest& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitYikeAvatarNarratorJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The node request content. JSON string. This parameter contains the following fields:
    // 
    // - SceneType: string. The common scenario type. Valid values: `creator-talk`: knowledge sharing, applicable to influencer sharing and explanation scenarios in industries such as finance and education.
    // - TextType: int. The text type. Valid values: 1: raw script (product or news information, which the system automatically converts to an oral broadcast script). 2: oral broadcast script.
    // - TextContent: string. The text content. Maximum length: 10000 characters.
    // - UserMaterials: Array\\<Object\\>. The list of user materials. Fields: MediaId: the media asset ID (image or video uploaded to Wanjing Yike).
    // - AvatarData: object. The digital human information. AvatarPortrait: required, string, the URL of the portrait image. AvatarVoice: optional, string, the audio URL (used as a reference for voice cloning) or a voice ID from the library (see the Wanjing Yike voice library. The system selects automatically).
    // - VoiceDuration: int. The expected oral broadcast duration. Settings for this field apply when TextType is 1. Unit: seconds. Default value: 60. The final video duration is slightly shorter than the expected duration.
    // - AspectRatio: string. The video dimensions. Valid values: 16:9, 9:16, 4:3, 3:4.
    // - Resolution: string. The video resolution. Valid values: 720P, 1080P.
    // - OutputLanguages: Array. The output video languages. Multiple values are supported. Currently, only Chinese is supported. Valid values: CN: Chinese (default). EN: English. YUE: Cantonese.
    // - WithSubtitles: bool. Specifies whether to include subtitles. Valid values: true: include subtitles (default). false: do not include subtitles.
    // 
    // -- The following parameters are for the vertical screen packaging template and are valid only for the creator-talk type. --
    // - TargetAspectRatio: string. The dimensions adapted for vertical screen. Valid values: `16:9`, `9:16`, `4:3`, `3:4`.
    // - Title: string. The main title displayed in the template.
    // - SubHeading: string. The subtitle displayed in the template.
    // - Date: string. The date displayed in the template.
    // - Watermark: object. The watermark displayed in the template. Fields: Text: the watermark text.
    // - EnabledAICover: bool. Specifies whether to use AI to generate a cover image.
    // - IPCharacter: Object. Specifies whether the AI-generated cover image includes an IP character. Fields: MediaId: the media asset ID. MediaUrl: a publicly accessible URL.
    // 
    // This parameter is required.
    shared_ptr<string> jobParams_ {};
    // The custom user parameter. JSON string. This parameter is returned as-is in the callback result (for example, newsKey).
    // 
    // The system reserved field NotifyAddress specifies the callback URL. The system sends a callback to this URL after the task is complete. Example: {"NotifyAddress": "http://xxx.callback.url"}.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
