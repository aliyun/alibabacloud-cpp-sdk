// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAUDIOTO3DAVATARVIDEOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAUDIOTO3DAVATARVIDEOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAudioTo3DAvatarVideoTaskRequestApp.hpp>
#include <alibabacloud/models/SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo.hpp>
#include <alibabacloud/models/SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo.hpp>
#include <alibabacloud/models/SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitAudioTo3DAvatarVideoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAudioTo3DAvatarVideoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(AudioInfo, audioInfo_);
      DARABONBA_PTR_TO_JSON(AvatarInfo, avatarInfo_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(CallbackParams, callbackParams_);
      DARABONBA_PTR_TO_JSON(ExtParams, extParams_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(VideoInfo, videoInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAudioTo3DAvatarVideoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(AudioInfo, audioInfo_);
      DARABONBA_PTR_FROM_JSON(AvatarInfo, avatarInfo_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(CallbackParams, callbackParams_);
      DARABONBA_PTR_FROM_JSON(ExtParams, extParams_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(VideoInfo, videoInfo_);
    };
    SubmitAudioTo3DAvatarVideoTaskRequest() = default ;
    SubmitAudioTo3DAvatarVideoTaskRequest(const SubmitAudioTo3DAvatarVideoTaskRequest &) = default ;
    SubmitAudioTo3DAvatarVideoTaskRequest(SubmitAudioTo3DAvatarVideoTaskRequest &&) = default ;
    SubmitAudioTo3DAvatarVideoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAudioTo3DAvatarVideoTaskRequest() = default ;
    SubmitAudioTo3DAvatarVideoTaskRequest& operator=(const SubmitAudioTo3DAvatarVideoTaskRequest &) = default ;
    SubmitAudioTo3DAvatarVideoTaskRequest& operator=(SubmitAudioTo3DAvatarVideoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->app_ != nullptr
        && this->audioInfo_ != nullptr && this->avatarInfo_ != nullptr && this->callback_ != nullptr && this->callbackParams_ != nullptr && this->extParams_ != nullptr
        && this->tenantId_ != nullptr && this->title_ != nullptr && this->url_ != nullptr && this->videoInfo_ != nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline const SubmitAudioTo3DAvatarVideoTaskRequestApp & app() const { DARABONBA_PTR_GET_CONST(app_, SubmitAudioTo3DAvatarVideoTaskRequestApp) };
    inline SubmitAudioTo3DAvatarVideoTaskRequestApp app() { DARABONBA_PTR_GET(app_, SubmitAudioTo3DAvatarVideoTaskRequestApp) };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setApp(const SubmitAudioTo3DAvatarVideoTaskRequestApp & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setApp(SubmitAudioTo3DAvatarVideoTaskRequestApp && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


    // audioInfo Field Functions 
    bool hasAudioInfo() const { return this->audioInfo_ != nullptr;};
    void deleteAudioInfo() { this->audioInfo_ = nullptr;};
    inline const SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo & audioInfo() const { DARABONBA_PTR_GET_CONST(audioInfo_, SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo) };
    inline SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo audioInfo() { DARABONBA_PTR_GET(audioInfo_, SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo) };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setAudioInfo(const SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo & audioInfo) { DARABONBA_PTR_SET_VALUE(audioInfo_, audioInfo) };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setAudioInfo(SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo && audioInfo) { DARABONBA_PTR_SET_RVALUE(audioInfo_, audioInfo) };


    // avatarInfo Field Functions 
    bool hasAvatarInfo() const { return this->avatarInfo_ != nullptr;};
    void deleteAvatarInfo() { this->avatarInfo_ = nullptr;};
    inline const SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo & avatarInfo() const { DARABONBA_PTR_GET_CONST(avatarInfo_, SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo) };
    inline SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo avatarInfo() { DARABONBA_PTR_GET(avatarInfo_, SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo) };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setAvatarInfo(const SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo & avatarInfo) { DARABONBA_PTR_SET_VALUE(avatarInfo_, avatarInfo) };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setAvatarInfo(SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo && avatarInfo) { DARABONBA_PTR_SET_RVALUE(avatarInfo_, avatarInfo) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline bool callback() const { DARABONBA_PTR_GET_DEFAULT(callback_, false) };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setCallback(bool callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // callbackParams Field Functions 
    bool hasCallbackParams() const { return this->callbackParams_ != nullptr;};
    void deleteCallbackParams() { this->callbackParams_ = nullptr;};
    inline string callbackParams() const { DARABONBA_PTR_GET_DEFAULT(callbackParams_, "") };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setCallbackParams(string callbackParams) { DARABONBA_PTR_SET_VALUE(callbackParams_, callbackParams) };


    // extParams Field Functions 
    bool hasExtParams() const { return this->extParams_ != nullptr;};
    void deleteExtParams() { this->extParams_ = nullptr;};
    inline string extParams() const { DARABONBA_PTR_GET_DEFAULT(extParams_, "") };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setExtParams(string extParams) { DARABONBA_PTR_SET_VALUE(extParams_, extParams) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // videoInfo Field Functions 
    bool hasVideoInfo() const { return this->videoInfo_ != nullptr;};
    void deleteVideoInfo() { this->videoInfo_ = nullptr;};
    inline const SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo & videoInfo() const { DARABONBA_PTR_GET_CONST(videoInfo_, SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo) };
    inline SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo videoInfo() { DARABONBA_PTR_GET(videoInfo_, SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo) };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setVideoInfo(const SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo & videoInfo) { DARABONBA_PTR_SET_VALUE(videoInfo_, videoInfo) };
    inline SubmitAudioTo3DAvatarVideoTaskRequest& setVideoInfo(SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo && videoInfo) { DARABONBA_PTR_SET_RVALUE(videoInfo_, videoInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<SubmitAudioTo3DAvatarVideoTaskRequestApp> app_ = nullptr;
    std::shared_ptr<SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo> audioInfo_ = nullptr;
    std::shared_ptr<SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo> avatarInfo_ = nullptr;
    std::shared_ptr<bool> callback_ = nullptr;
    std::shared_ptr<string> callbackParams_ = nullptr;
    std::shared_ptr<string> extParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo> videoInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
