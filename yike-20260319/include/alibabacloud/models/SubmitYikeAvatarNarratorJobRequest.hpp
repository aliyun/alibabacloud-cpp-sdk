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
    // The node request content. JSON string that contains the following parameters:
    // 
    // - SceneType: string. The common scenario type. Valid values:
    //   - creator-talk: knowledge explanation, suitable for news, science, and finance explanation scenarios.
    //   - avatar-broadcast: digital human broadcast, fixed single-shot scenario.
    //   - creator-sales-oneshot: influencer marketing, single-shot oral broadcast mixed-editing scenario.
    // - TextType: int. The text type. Valid values:
    //   - 1: raw script (product or news information, automatically converted to oral broadcast script by the system. Not supported for avatar-broadcast).
    //   - 2: oral broadcast script.
    // - TextContent: string. The text content. Maximum length: 10000 characters.
    // - UserMaterials: Array<Object>. The user material list (not supported for avatar-broadcast). Contains the following fields:
    //   - MediaId: the media asset ID (image or video uploaded to Wanjing Yike).
    //   - Type: the media type (valid values: image, video).
    //   - Action: the material usage method. Valid values:
    //     - match: intelligently matches suitable segments from video materials based on the oral broadcast script.
    //     - insert: intelligently determines the insertion position of video materials based on the oral broadcast script.
    //     - insert_first: prepends the video material.
    //     - insert_last: appends the video material.
    // - AvatarData: object. The digital human information.
    //   - AvatarPortrait: required. String. The portrait image URL.
    //   - AvatarVoice: optional. String. An audio URL (used as a reference for voice cloning) or a voice ID from the library (refer to the Wanjing Yike voice library. The system selects automatically if not specified).
    // - VoiceDuration: int. The expected oral broadcast duration. Set this parameter when TextType is 1. Unit: seconds. Default value: 60. The final video duration is slightly less than the expected duration.
    // - AspectRatio: string. The output dimensions. Valid values: 16:9, 9:16, 4:3, 3:4.
    // - Resolution: string. The video resolution. Valid values: 720P, 1080P.
    // - WithSubtitles: bool. Specifies whether to include subtitles. Valid values:
    //   - true: includes subtitles. This is the default value.
    //   - false: does not include subtitles.
    // - EnabledAICover: bool. Specifies whether to generate a cover image (AI-generated based on the oral broadcast content).
    // - IPCharacter: object. The AI cover character. Specify either MediaId or MediaUrl.
    // - EndCard: string. The video ending image (image media asset ID or URL). Commonly used for marketing CTA conversion.
    // 
    // This parameter is required.
    shared_ptr<string> jobParams_ {};
    // The custom user parameter. JSON string. The callback result carries this parameter as-is (for example, newsKey).
    // 
    // System reserved field: NotifyAddress. The callback URL. The system sends a callback to this URL after the task is completed. Example: {"NotifyAddress": "http://xxx.callback.url"}.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
