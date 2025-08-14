// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAUDIOTO2DAVATARVIDEOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAUDIOTO2DAVATARVIDEOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAudioTo2DAvatarVideoTaskRequestApp.hpp>
#include <alibabacloud/models/SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo.hpp>
#include <alibabacloud/models/SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo.hpp>
#include <alibabacloud/models/SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitAudioTo2DAvatarVideoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAudioTo2DAvatarVideoTaskRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SubmitAudioTo2DAvatarVideoTaskRequest& obj) { 
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
    SubmitAudioTo2DAvatarVideoTaskRequest() = default ;
    SubmitAudioTo2DAvatarVideoTaskRequest(const SubmitAudioTo2DAvatarVideoTaskRequest &) = default ;
    SubmitAudioTo2DAvatarVideoTaskRequest(SubmitAudioTo2DAvatarVideoTaskRequest &&) = default ;
    SubmitAudioTo2DAvatarVideoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAudioTo2DAvatarVideoTaskRequest() = default ;
    SubmitAudioTo2DAvatarVideoTaskRequest& operator=(const SubmitAudioTo2DAvatarVideoTaskRequest &) = default ;
    SubmitAudioTo2DAvatarVideoTaskRequest& operator=(SubmitAudioTo2DAvatarVideoTaskRequest &&) = default ;
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
    inline const SubmitAudioTo2DAvatarVideoTaskRequestApp & app() const { DARABONBA_PTR_GET_CONST(app_, SubmitAudioTo2DAvatarVideoTaskRequestApp) };
    inline SubmitAudioTo2DAvatarVideoTaskRequestApp app() { DARABONBA_PTR_GET(app_, SubmitAudioTo2DAvatarVideoTaskRequestApp) };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setApp(const SubmitAudioTo2DAvatarVideoTaskRequestApp & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setApp(SubmitAudioTo2DAvatarVideoTaskRequestApp && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


    // audioInfo Field Functions 
    bool hasAudioInfo() const { return this->audioInfo_ != nullptr;};
    void deleteAudioInfo() { this->audioInfo_ = nullptr;};
    inline const SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo & audioInfo() const { DARABONBA_PTR_GET_CONST(audioInfo_, SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo) };
    inline SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo audioInfo() { DARABONBA_PTR_GET(audioInfo_, SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo) };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setAudioInfo(const SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo & audioInfo) { DARABONBA_PTR_SET_VALUE(audioInfo_, audioInfo) };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setAudioInfo(SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo && audioInfo) { DARABONBA_PTR_SET_RVALUE(audioInfo_, audioInfo) };


    // avatarInfo Field Functions 
    bool hasAvatarInfo() const { return this->avatarInfo_ != nullptr;};
    void deleteAvatarInfo() { this->avatarInfo_ = nullptr;};
    inline const SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo & avatarInfo() const { DARABONBA_PTR_GET_CONST(avatarInfo_, SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo) };
    inline SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo avatarInfo() { DARABONBA_PTR_GET(avatarInfo_, SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo) };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setAvatarInfo(const SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo & avatarInfo) { DARABONBA_PTR_SET_VALUE(avatarInfo_, avatarInfo) };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setAvatarInfo(SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo && avatarInfo) { DARABONBA_PTR_SET_RVALUE(avatarInfo_, avatarInfo) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline bool callback() const { DARABONBA_PTR_GET_DEFAULT(callback_, false) };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setCallback(bool callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // callbackParams Field Functions 
    bool hasCallbackParams() const { return this->callbackParams_ != nullptr;};
    void deleteCallbackParams() { this->callbackParams_ = nullptr;};
    inline string callbackParams() const { DARABONBA_PTR_GET_DEFAULT(callbackParams_, "") };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setCallbackParams(string callbackParams) { DARABONBA_PTR_SET_VALUE(callbackParams_, callbackParams) };


    // extParams Field Functions 
    bool hasExtParams() const { return this->extParams_ != nullptr;};
    void deleteExtParams() { this->extParams_ = nullptr;};
    inline string extParams() const { DARABONBA_PTR_GET_DEFAULT(extParams_, "") };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setExtParams(string extParams) { DARABONBA_PTR_SET_VALUE(extParams_, extParams) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // videoInfo Field Functions 
    bool hasVideoInfo() const { return this->videoInfo_ != nullptr;};
    void deleteVideoInfo() { this->videoInfo_ = nullptr;};
    inline const SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo & videoInfo() const { DARABONBA_PTR_GET_CONST(videoInfo_, SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo) };
    inline SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo videoInfo() { DARABONBA_PTR_GET(videoInfo_, SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo) };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setVideoInfo(const SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo & videoInfo) { DARABONBA_PTR_SET_VALUE(videoInfo_, videoInfo) };
    inline SubmitAudioTo2DAvatarVideoTaskRequest& setVideoInfo(SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo && videoInfo) { DARABONBA_PTR_SET_RVALUE(videoInfo_, videoInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<SubmitAudioTo2DAvatarVideoTaskRequestApp> app_ = nullptr;
    std::shared_ptr<SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo> audioInfo_ = nullptr;
    std::shared_ptr<SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo> avatarInfo_ = nullptr;
    std::shared_ptr<bool> callback_ = nullptr;
    std::shared_ptr<string> callbackParams_ = nullptr;
    std::shared_ptr<string> extParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo> videoInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
