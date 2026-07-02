// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITYIKEVIDEOCLONEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITYIKEVIDEOCLONEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class SubmitYikeVideoCloneJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitYikeVideoCloneJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitYikeVideoCloneJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitYikeVideoCloneJobRequest() = default ;
    SubmitYikeVideoCloneJobRequest(const SubmitYikeVideoCloneJobRequest &) = default ;
    SubmitYikeVideoCloneJobRequest(SubmitYikeVideoCloneJobRequest &&) = default ;
    SubmitYikeVideoCloneJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitYikeVideoCloneJobRequest() = default ;
    SubmitYikeVideoCloneJobRequest& operator=(const SubmitYikeVideoCloneJobRequest &) = default ;
    SubmitYikeVideoCloneJobRequest& operator=(SubmitYikeVideoCloneJobRequest &&) = default ;
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
    inline SubmitYikeVideoCloneJobRequest& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitYikeVideoCloneJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The job request content. JSON string that contains the following parameters:
    // - SceneType: string. The replication scene type. Valid values: `variant-clone`: full replication, applicable to same-category content rewriting scenarios where only partial elements (person/voice/image/text) are replaced.
    // - OriginalVideo: object type that contains the following field: MediaId - the media asset ID (video uploaded to the platform).
    // - SceneConfig: JSON string type. The scene extension parameters. For the variant-clone type, the value is `{"OldProductName":"xxx","ProductName":"xxx"}`.
    // - UserMaterials: Array<Object> type. The list of user materials that contains the following field: MediaId - the media asset ID (image or video uploaded to the platform).
    // - AvatarData: object type. The digital human information. AvatarPortrait: required, string, the portrait image URL. AvatarVoice: optional, string, the audio URL (used as a reference for audio replication).
    // - Resolution: string type. The video resolution. Valid values: `720P`, `1080P`.
    // - WithSubtitles: bool type. Specifies whether to include subtitles. Valid values: true: includes subtitles (default). false: does not include subtitles.
    // 
    // This parameter is required.
    shared_ptr<string> jobParams_ {};
    // The custom user parameter. JSON string. The callback result carries this value as-is (for example, newsKey).
    // 
    // System reserved field NotifyAddress: the callback URL. The system sends a callback to this URL after the task is completed. Example: {"NotifyAddress": "http://xxx.callback.url"}
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
