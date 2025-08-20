// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDPFEISHUSUBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IDPFEISHUSUBCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class IdpFeishuSubConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdpFeishuSubConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(EventAesKey, eventAesKey_);
      DARABONBA_PTR_TO_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_TO_JSON(EventVerifyToken, eventVerifyToken_);
      DARABONBA_PTR_TO_JSON(RedirectUri, redirectUri_);
    };
    friend void from_json(const Darabonba::Json& j, IdpFeishuSubConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(EventAesKey, eventAesKey_);
      DARABONBA_PTR_FROM_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_FROM_JSON(EventVerifyToken, eventVerifyToken_);
      DARABONBA_PTR_FROM_JSON(RedirectUri, redirectUri_);
    };
    IdpFeishuSubConfig() = default ;
    IdpFeishuSubConfig(const IdpFeishuSubConfig &) = default ;
    IdpFeishuSubConfig(IdpFeishuSubConfig &&) = default ;
    IdpFeishuSubConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdpFeishuSubConfig() = default ;
    IdpFeishuSubConfig& operator=(const IdpFeishuSubConfig &) = default ;
    IdpFeishuSubConfig& operator=(IdpFeishuSubConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appSecret_ != nullptr && this->corpId_ != nullptr && this->eventAesKey_ != nullptr && this->eventLabel_ != nullptr && this->eventVerifyToken_ != nullptr
        && this->redirectUri_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline IdpFeishuSubConfig& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline IdpFeishuSubConfig& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline IdpFeishuSubConfig& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // eventAesKey Field Functions 
    bool hasEventAesKey() const { return this->eventAesKey_ != nullptr;};
    void deleteEventAesKey() { this->eventAesKey_ = nullptr;};
    inline string eventAesKey() const { DARABONBA_PTR_GET_DEFAULT(eventAesKey_, "") };
    inline IdpFeishuSubConfig& setEventAesKey(string eventAesKey) { DARABONBA_PTR_SET_VALUE(eventAesKey_, eventAesKey) };


    // eventLabel Field Functions 
    bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
    void deleteEventLabel() { this->eventLabel_ = nullptr;};
    inline string eventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
    inline IdpFeishuSubConfig& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


    // eventVerifyToken Field Functions 
    bool hasEventVerifyToken() const { return this->eventVerifyToken_ != nullptr;};
    void deleteEventVerifyToken() { this->eventVerifyToken_ = nullptr;};
    inline string eventVerifyToken() const { DARABONBA_PTR_GET_DEFAULT(eventVerifyToken_, "") };
    inline IdpFeishuSubConfig& setEventVerifyToken(string eventVerifyToken) { DARABONBA_PTR_SET_VALUE(eventVerifyToken_, eventVerifyToken) };


    // redirectUri Field Functions 
    bool hasRedirectUri() const { return this->redirectUri_ != nullptr;};
    void deleteRedirectUri() { this->redirectUri_ = nullptr;};
    inline string redirectUri() const { DARABONBA_PTR_GET_DEFAULT(redirectUri_, "") };
    inline IdpFeishuSubConfig& setRedirectUri(string redirectUri) { DARABONBA_PTR_SET_VALUE(redirectUri_, redirectUri) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appSecret_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> eventAesKey_ = nullptr;
    std::shared_ptr<string> eventLabel_ = nullptr;
    std::shared_ptr<string> eventVerifyToken_ = nullptr;
    std::shared_ptr<string> redirectUri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
