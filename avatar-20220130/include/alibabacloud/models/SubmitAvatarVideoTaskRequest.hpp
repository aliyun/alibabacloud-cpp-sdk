// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAVATARVIDEOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAVATARVIDEOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAvatarVideoTaskRequestApp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitAvatarVideoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAvatarVideoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(CallbackParams, callbackParams_);
      DARABONBA_PTR_TO_JSON(ExtParams, extParams_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(VideoParams, videoParams_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAvatarVideoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(CallbackParams, callbackParams_);
      DARABONBA_PTR_FROM_JSON(ExtParams, extParams_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(VideoParams, videoParams_);
    };
    SubmitAvatarVideoTaskRequest() = default ;
    SubmitAvatarVideoTaskRequest(const SubmitAvatarVideoTaskRequest &) = default ;
    SubmitAvatarVideoTaskRequest(SubmitAvatarVideoTaskRequest &&) = default ;
    SubmitAvatarVideoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAvatarVideoTaskRequest() = default ;
    SubmitAvatarVideoTaskRequest& operator=(const SubmitAvatarVideoTaskRequest &) = default ;
    SubmitAvatarVideoTaskRequest& operator=(SubmitAvatarVideoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->app_ != nullptr
        && this->callback_ != nullptr && this->callbackParams_ != nullptr && this->extParams_ != nullptr && this->tenantId_ != nullptr && this->title_ != nullptr
        && this->videoParams_ != nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline const SubmitAvatarVideoTaskRequestApp & app() const { DARABONBA_PTR_GET_CONST(app_, SubmitAvatarVideoTaskRequestApp) };
    inline SubmitAvatarVideoTaskRequestApp app() { DARABONBA_PTR_GET(app_, SubmitAvatarVideoTaskRequestApp) };
    inline SubmitAvatarVideoTaskRequest& setApp(const SubmitAvatarVideoTaskRequestApp & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
    inline SubmitAvatarVideoTaskRequest& setApp(SubmitAvatarVideoTaskRequestApp && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline bool callback() const { DARABONBA_PTR_GET_DEFAULT(callback_, false) };
    inline SubmitAvatarVideoTaskRequest& setCallback(bool callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // callbackParams Field Functions 
    bool hasCallbackParams() const { return this->callbackParams_ != nullptr;};
    void deleteCallbackParams() { this->callbackParams_ = nullptr;};
    inline string callbackParams() const { DARABONBA_PTR_GET_DEFAULT(callbackParams_, "") };
    inline SubmitAvatarVideoTaskRequest& setCallbackParams(string callbackParams) { DARABONBA_PTR_SET_VALUE(callbackParams_, callbackParams) };


    // extParams Field Functions 
    bool hasExtParams() const { return this->extParams_ != nullptr;};
    void deleteExtParams() { this->extParams_ = nullptr;};
    inline string extParams() const { DARABONBA_PTR_GET_DEFAULT(extParams_, "") };
    inline SubmitAvatarVideoTaskRequest& setExtParams(string extParams) { DARABONBA_PTR_SET_VALUE(extParams_, extParams) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline SubmitAvatarVideoTaskRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitAvatarVideoTaskRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // videoParams Field Functions 
    bool hasVideoParams() const { return this->videoParams_ != nullptr;};
    void deleteVideoParams() { this->videoParams_ = nullptr;};
    inline string videoParams() const { DARABONBA_PTR_GET_DEFAULT(videoParams_, "") };
    inline SubmitAvatarVideoTaskRequest& setVideoParams(string videoParams) { DARABONBA_PTR_SET_VALUE(videoParams_, videoParams) };


  protected:
    // This parameter is required.
    std::shared_ptr<SubmitAvatarVideoTaskRequestApp> app_ = nullptr;
    std::shared_ptr<bool> callback_ = nullptr;
    std::shared_ptr<string> callbackParams_ = nullptr;
    std::shared_ptr<string> extParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
