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
    // The task request content. The value is a JSON string that contains the following parameters:
    // 
    // - SceneType: string. The common scenario type. Valid values:
    //   - creator-talk: knowledge explanation. Applicable to scenarios such as news, popular science, and financial explanation.
    //   - avatar-broadcast: digital human broadcasting. A fixed single-shot scenario.
    // - TextType: int. The text type. Valid values:
    //   - 1: raw script. The system automatically converts product or news information into an oral broadcast script. This value is not supported for avatar-broadcast.
    //   - 2: oral broadcast script.
    // - TextContent: string. The text content. Maximum length: 10,000 characters.
    // - UserMaterials: Array\\<Object\\>. The list of user materials. This parameter is not supported for avatar-broadcast. Fields:
    //   - MediaId: the media asset ID. The ID of an image or video uploaded to Wanjing Yike.
    // - AvatarData: object. The digital human information.
    //   - AvatarPortrait: required. String. The URL of the portrait image.
    //   - AvatarVoice: optional. String. The URL of an audio file for voice cloning reference, or a voice ID from the built-in voice library. For more information, see the Wanjing Yike voice library. If this parameter is not specified, the system automatically selects a voice.
    // - VoiceDuration: int. The expected oral broadcast duration. Set this parameter when TextType is set to 1. Unit: seconds. Default value: 60. The final video duration is slightly shorter than the expected duration.
    // - AspectRatio: string. The video dimensions. Valid values: 16:9, 9:16, 4:3, and 3:4.
    // - Resolution: string. The video resolution. Valid values: 720P and 1080P.
    // - WithSubtitles: bool. Specifies whether to add subtitles. Valid values:
    //   - true (default): Add subtitles.
    //   - false: Do not add subtitles.
    // 
    // This parameter is required.
    shared_ptr<string> jobParams_ {};
    // The custom user parameter. The value is a JSON string that is returned as-is in the callback result, for example, newsKey.
    // 
    // The system reserved field NotifyAddress specifies the callback URL. The system sends a callback to this URL after the task is complete. Example: {"NotifyAddress": "http://xxx.callback.url"}.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
