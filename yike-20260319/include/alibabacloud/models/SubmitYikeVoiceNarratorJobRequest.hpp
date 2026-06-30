// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITYIKEVOICENARRATORJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITYIKEVOICENARRATORJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class SubmitYikeVoiceNarratorJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitYikeVoiceNarratorJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitYikeVoiceNarratorJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitYikeVoiceNarratorJobRequest() = default ;
    SubmitYikeVoiceNarratorJobRequest(const SubmitYikeVoiceNarratorJobRequest &) = default ;
    SubmitYikeVoiceNarratorJobRequest(SubmitYikeVoiceNarratorJobRequest &&) = default ;
    SubmitYikeVoiceNarratorJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitYikeVoiceNarratorJobRequest() = default ;
    SubmitYikeVoiceNarratorJobRequest& operator=(const SubmitYikeVoiceNarratorJobRequest &) = default ;
    SubmitYikeVoiceNarratorJobRequest& operator=(SubmitYikeVoiceNarratorJobRequest &&) = default ;
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
    inline SubmitYikeVoiceNarratorJobRequest& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitYikeVoiceNarratorJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The node request content. JSON string. Contains the following parameters:
    // - SceneType: string. The common scenarios type. Valid values: `briefing-voiceover`: news broadcast or financial education industry.
    // - TextType: int. The text type. Valid values: `1`: raw text (product or news information, which the system automatically converts into a voiceover script). `2`: voiceover script.
    // - TextContent: string. The text content. Maximum length: 10000 characters.
    // - UserMaterials: Array\\<Object\\>. The list of user materials. Fields: MediaId: the media asset ID (an image or video uploaded to Wanjing Yike).
    // - NarrationVoiceId: string. The narration voice ID. For valid values, see the documentation. Default value: `sys_ElegantProperMiddleAgedWoman`.
    // - VoiceDuration: int. The expected voiceover duration. Set this parameter when `TextType==1`. Unit: seconds. Default value: 60. The final video duration is slightly shorter than the expected duration.
    // - AspectRatio: string. The video aspect ratio. Valid values: `16:9`, `9:16`, `4:3`, `3:4`.
    // - Resolution: string. The video resolution. Valid values: `720P`, `1080P`.
    // - OutputLanguages: Array\\<String\\>. The output video languages. Multiple values are supported (currently only Chinese is supported). Valid values: `CN`: Chinese (default). `EN`: English. `YUE`: Cantonese.
    // - WithSubtitles: bool. Specifies whether to include subtitles. Valid values: true: includes subtitles (default). false: does not include subtitles.
    // 
    // -- The following parameters are for the portrait-mode packaging template and are valid only for the briefing-voiceover type. --
    // - TargetAspectRatio: string. The aspect ratio adapted for portrait mode. Valid values: `16:9`, `9:16`, `4:3`, `3:4`.
    // - Title: string. The main title displayed in the template.
    // - SubHeading: string. The subtitle displayed in the template.
    // - Date: string. The date displayed in the template.
    // - Watermark: object. The watermark displayed in the template. Fields: Text: the watermark text.
    // - EnabledAICover: bool. Specifies whether to use AI to generate a cover image.
    // - IPCharacter: Object. Specifies whether the AI-generated cover image includes an IP character. Fields: MediaId: the media asset ID. MediaUrl: a publicly accessible URL.
    // 
    // This parameter is required.
    shared_ptr<string> jobParams_ {};
    // The custom user parameter. JSON string. The callback result carries this parameter as-is (for example, newsKey).
    // 
    // System reserved field: NotifyAddress. The callback URL. The system sends a callback to this URL after the task is completed.
    // `{"NotifyAddress": "http://xxx.callback.url"}`.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
