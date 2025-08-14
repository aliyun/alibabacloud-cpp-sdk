// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAUDIOTO3DAVATARVIDEOTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAUDIOTO3DAVATARVIDEOTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitAudioTo3DAvatarVideoTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAudioTo3DAvatarVideoTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, appShrink_);
      DARABONBA_PTR_TO_JSON(AudioInfo, audioInfoShrink_);
      DARABONBA_PTR_TO_JSON(AvatarInfo, avatarInfoShrink_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(CallbackParams, callbackParams_);
      DARABONBA_PTR_TO_JSON(ExtParams, extParams_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(VideoInfo, videoInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAudioTo3DAvatarVideoTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, appShrink_);
      DARABONBA_PTR_FROM_JSON(AudioInfo, audioInfoShrink_);
      DARABONBA_PTR_FROM_JSON(AvatarInfo, avatarInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(CallbackParams, callbackParams_);
      DARABONBA_PTR_FROM_JSON(ExtParams, extParams_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(VideoInfo, videoInfoShrink_);
    };
    SubmitAudioTo3DAvatarVideoTaskShrinkRequest() = default ;
    SubmitAudioTo3DAvatarVideoTaskShrinkRequest(const SubmitAudioTo3DAvatarVideoTaskShrinkRequest &) = default ;
    SubmitAudioTo3DAvatarVideoTaskShrinkRequest(SubmitAudioTo3DAvatarVideoTaskShrinkRequest &&) = default ;
    SubmitAudioTo3DAvatarVideoTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAudioTo3DAvatarVideoTaskShrinkRequest() = default ;
    SubmitAudioTo3DAvatarVideoTaskShrinkRequest& operator=(const SubmitAudioTo3DAvatarVideoTaskShrinkRequest &) = default ;
    SubmitAudioTo3DAvatarVideoTaskShrinkRequest& operator=(SubmitAudioTo3DAvatarVideoTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appShrink_ != nullptr
        && this->audioInfoShrink_ != nullptr && this->avatarInfoShrink_ != nullptr && this->callback_ != nullptr && this->callbackParams_ != nullptr && this->extParams_ != nullptr
        && this->tenantId_ != nullptr && this->title_ != nullptr && this->url_ != nullptr && this->videoInfoShrink_ != nullptr; };
    // appShrink Field Functions 
    bool hasAppShrink() const { return this->appShrink_ != nullptr;};
    void deleteAppShrink() { this->appShrink_ = nullptr;};
    inline string appShrink() const { DARABONBA_PTR_GET_DEFAULT(appShrink_, "") };
    inline SubmitAudioTo3DAvatarVideoTaskShrinkRequest& setAppShrink(string appShrink) { DARABONBA_PTR_SET_VALUE(appShrink_, appShrink) };


    // audioInfoShrink Field Functions 
    bool hasAudioInfoShrink() const { return this->audioInfoShrink_ != nullptr;};
    void deleteAudioInfoShrink() { this->audioInfoShrink_ = nullptr;};
    inline string audioInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(audioInfoShrink_, "") };
    inline SubmitAudioTo3DAvatarVideoTaskShrinkRequest& setAudioInfoShrink(string audioInfoShrink) { DARABONBA_PTR_SET_VALUE(audioInfoShrink_, audioInfoShrink) };


    // avatarInfoShrink Field Functions 
    bool hasAvatarInfoShrink() const { return this->avatarInfoShrink_ != nullptr;};
    void deleteAvatarInfoShrink() { this->avatarInfoShrink_ = nullptr;};
    inline string avatarInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(avatarInfoShrink_, "") };
    inline SubmitAudioTo3DAvatarVideoTaskShrinkRequest& setAvatarInfoShrink(string avatarInfoShrink) { DARABONBA_PTR_SET_VALUE(avatarInfoShrink_, avatarInfoShrink) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline bool callback() const { DARABONBA_PTR_GET_DEFAULT(callback_, false) };
    inline SubmitAudioTo3DAvatarVideoTaskShrinkRequest& setCallback(bool callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // callbackParams Field Functions 
    bool hasCallbackParams() const { return this->callbackParams_ != nullptr;};
    void deleteCallbackParams() { this->callbackParams_ = nullptr;};
    inline string callbackParams() const { DARABONBA_PTR_GET_DEFAULT(callbackParams_, "") };
    inline SubmitAudioTo3DAvatarVideoTaskShrinkRequest& setCallbackParams(string callbackParams) { DARABONBA_PTR_SET_VALUE(callbackParams_, callbackParams) };


    // extParams Field Functions 
    bool hasExtParams() const { return this->extParams_ != nullptr;};
    void deleteExtParams() { this->extParams_ = nullptr;};
    inline string extParams() const { DARABONBA_PTR_GET_DEFAULT(extParams_, "") };
    inline SubmitAudioTo3DAvatarVideoTaskShrinkRequest& setExtParams(string extParams) { DARABONBA_PTR_SET_VALUE(extParams_, extParams) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline SubmitAudioTo3DAvatarVideoTaskShrinkRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitAudioTo3DAvatarVideoTaskShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitAudioTo3DAvatarVideoTaskShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // videoInfoShrink Field Functions 
    bool hasVideoInfoShrink() const { return this->videoInfoShrink_ != nullptr;};
    void deleteVideoInfoShrink() { this->videoInfoShrink_ = nullptr;};
    inline string videoInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(videoInfoShrink_, "") };
    inline SubmitAudioTo3DAvatarVideoTaskShrinkRequest& setVideoInfoShrink(string videoInfoShrink) { DARABONBA_PTR_SET_VALUE(videoInfoShrink_, videoInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appShrink_ = nullptr;
    std::shared_ptr<string> audioInfoShrink_ = nullptr;
    std::shared_ptr<string> avatarInfoShrink_ = nullptr;
    std::shared_ptr<bool> callback_ = nullptr;
    std::shared_ptr<string> callbackParams_ = nullptr;
    std::shared_ptr<string> extParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> videoInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
