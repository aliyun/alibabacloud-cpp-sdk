// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTEXTTO2DAVATARVIDEOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTEXTTO2DAVATARVIDEOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTextTo2DAvatarVideoTaskRequestApp.hpp>
#include <alibabacloud/models/SubmitTextTo2DAvatarVideoTaskRequestAudioInfo.hpp>
#include <alibabacloud/models/SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo.hpp>
#include <alibabacloud/models/SubmitTextTo2DAvatarVideoTaskRequestVideoInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitTextTo2DAvatarVideoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTextTo2DAvatarVideoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(AudioInfo, audioInfo_);
      DARABONBA_PTR_TO_JSON(AvatarInfo, avatarInfo_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(CallbackParams, callbackParams_);
      DARABONBA_PTR_TO_JSON(ExtParams, extParams_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(VideoInfo, videoInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTextTo2DAvatarVideoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(AudioInfo, audioInfo_);
      DARABONBA_PTR_FROM_JSON(AvatarInfo, avatarInfo_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(CallbackParams, callbackParams_);
      DARABONBA_PTR_FROM_JSON(ExtParams, extParams_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(VideoInfo, videoInfo_);
    };
    SubmitTextTo2DAvatarVideoTaskRequest() = default ;
    SubmitTextTo2DAvatarVideoTaskRequest(const SubmitTextTo2DAvatarVideoTaskRequest &) = default ;
    SubmitTextTo2DAvatarVideoTaskRequest(SubmitTextTo2DAvatarVideoTaskRequest &&) = default ;
    SubmitTextTo2DAvatarVideoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTextTo2DAvatarVideoTaskRequest() = default ;
    SubmitTextTo2DAvatarVideoTaskRequest& operator=(const SubmitTextTo2DAvatarVideoTaskRequest &) = default ;
    SubmitTextTo2DAvatarVideoTaskRequest& operator=(SubmitTextTo2DAvatarVideoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->app_ != nullptr
        && this->audioInfo_ != nullptr && this->avatarInfo_ != nullptr && this->callback_ != nullptr && this->callbackParams_ != nullptr && this->extParams_ != nullptr
        && this->tenantId_ != nullptr && this->text_ != nullptr && this->title_ != nullptr && this->videoInfo_ != nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline const SubmitTextTo2DAvatarVideoTaskRequestApp & app() const { DARABONBA_PTR_GET_CONST(app_, SubmitTextTo2DAvatarVideoTaskRequestApp) };
    inline SubmitTextTo2DAvatarVideoTaskRequestApp app() { DARABONBA_PTR_GET(app_, SubmitTextTo2DAvatarVideoTaskRequestApp) };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setApp(const SubmitTextTo2DAvatarVideoTaskRequestApp & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setApp(SubmitTextTo2DAvatarVideoTaskRequestApp && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


    // audioInfo Field Functions 
    bool hasAudioInfo() const { return this->audioInfo_ != nullptr;};
    void deleteAudioInfo() { this->audioInfo_ = nullptr;};
    inline const SubmitTextTo2DAvatarVideoTaskRequestAudioInfo & audioInfo() const { DARABONBA_PTR_GET_CONST(audioInfo_, SubmitTextTo2DAvatarVideoTaskRequestAudioInfo) };
    inline SubmitTextTo2DAvatarVideoTaskRequestAudioInfo audioInfo() { DARABONBA_PTR_GET(audioInfo_, SubmitTextTo2DAvatarVideoTaskRequestAudioInfo) };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setAudioInfo(const SubmitTextTo2DAvatarVideoTaskRequestAudioInfo & audioInfo) { DARABONBA_PTR_SET_VALUE(audioInfo_, audioInfo) };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setAudioInfo(SubmitTextTo2DAvatarVideoTaskRequestAudioInfo && audioInfo) { DARABONBA_PTR_SET_RVALUE(audioInfo_, audioInfo) };


    // avatarInfo Field Functions 
    bool hasAvatarInfo() const { return this->avatarInfo_ != nullptr;};
    void deleteAvatarInfo() { this->avatarInfo_ = nullptr;};
    inline const SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo & avatarInfo() const { DARABONBA_PTR_GET_CONST(avatarInfo_, SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo) };
    inline SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo avatarInfo() { DARABONBA_PTR_GET(avatarInfo_, SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo) };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setAvatarInfo(const SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo & avatarInfo) { DARABONBA_PTR_SET_VALUE(avatarInfo_, avatarInfo) };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setAvatarInfo(SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo && avatarInfo) { DARABONBA_PTR_SET_RVALUE(avatarInfo_, avatarInfo) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline bool callback() const { DARABONBA_PTR_GET_DEFAULT(callback_, false) };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setCallback(bool callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // callbackParams Field Functions 
    bool hasCallbackParams() const { return this->callbackParams_ != nullptr;};
    void deleteCallbackParams() { this->callbackParams_ = nullptr;};
    inline string callbackParams() const { DARABONBA_PTR_GET_DEFAULT(callbackParams_, "") };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setCallbackParams(string callbackParams) { DARABONBA_PTR_SET_VALUE(callbackParams_, callbackParams) };


    // extParams Field Functions 
    bool hasExtParams() const { return this->extParams_ != nullptr;};
    void deleteExtParams() { this->extParams_ = nullptr;};
    inline string extParams() const { DARABONBA_PTR_GET_DEFAULT(extParams_, "") };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setExtParams(string extParams) { DARABONBA_PTR_SET_VALUE(extParams_, extParams) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // videoInfo Field Functions 
    bool hasVideoInfo() const { return this->videoInfo_ != nullptr;};
    void deleteVideoInfo() { this->videoInfo_ = nullptr;};
    inline const SubmitTextTo2DAvatarVideoTaskRequestVideoInfo & videoInfo() const { DARABONBA_PTR_GET_CONST(videoInfo_, SubmitTextTo2DAvatarVideoTaskRequestVideoInfo) };
    inline SubmitTextTo2DAvatarVideoTaskRequestVideoInfo videoInfo() { DARABONBA_PTR_GET(videoInfo_, SubmitTextTo2DAvatarVideoTaskRequestVideoInfo) };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setVideoInfo(const SubmitTextTo2DAvatarVideoTaskRequestVideoInfo & videoInfo) { DARABONBA_PTR_SET_VALUE(videoInfo_, videoInfo) };
    inline SubmitTextTo2DAvatarVideoTaskRequest& setVideoInfo(SubmitTextTo2DAvatarVideoTaskRequestVideoInfo && videoInfo) { DARABONBA_PTR_SET_RVALUE(videoInfo_, videoInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<SubmitTextTo2DAvatarVideoTaskRequestApp> app_ = nullptr;
    std::shared_ptr<SubmitTextTo2DAvatarVideoTaskRequestAudioInfo> audioInfo_ = nullptr;
    std::shared_ptr<SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo> avatarInfo_ = nullptr;
    std::shared_ptr<bool> callback_ = nullptr;
    std::shared_ptr<string> callbackParams_ = nullptr;
    std::shared_ptr<string> extParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<SubmitTextTo2DAvatarVideoTaskRequestVideoInfo> videoInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
