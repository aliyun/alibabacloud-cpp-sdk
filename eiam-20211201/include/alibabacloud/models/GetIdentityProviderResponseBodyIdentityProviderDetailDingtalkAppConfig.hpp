// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILDINGTALKAPPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILDINGTALKAPPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(DingtalkLoginVersion, dingtalkLoginVersion_);
      DARABONBA_PTR_TO_JSON(DingtalkVersion, dingtalkVersion_);
      DARABONBA_PTR_TO_JSON(EncryptKey, encryptKey_);
      DARABONBA_PTR_TO_JSON(VerificationToken, verificationToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(DingtalkLoginVersion, dingtalkLoginVersion_);
      DARABONBA_PTR_FROM_JSON(DingtalkVersion, dingtalkVersion_);
      DARABONBA_PTR_FROM_JSON(EncryptKey, encryptKey_);
      DARABONBA_PTR_FROM_JSON(VerificationToken, verificationToken_);
    };
    GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig(const GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig(GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig &&) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig& operator=(const GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig& operator=(GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->appSecret_ == nullptr && return this->corpId_ == nullptr && return this->dingtalkLoginVersion_ == nullptr && return this->dingtalkVersion_ == nullptr && return this->encryptKey_ == nullptr
        && return this->verificationToken_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // dingtalkLoginVersion Field Functions 
    bool hasDingtalkLoginVersion() const { return this->dingtalkLoginVersion_ != nullptr;};
    void deleteDingtalkLoginVersion() { this->dingtalkLoginVersion_ = nullptr;};
    inline string dingtalkLoginVersion() const { DARABONBA_PTR_GET_DEFAULT(dingtalkLoginVersion_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig& setDingtalkLoginVersion(string dingtalkLoginVersion) { DARABONBA_PTR_SET_VALUE(dingtalkLoginVersion_, dingtalkLoginVersion) };


    // dingtalkVersion Field Functions 
    bool hasDingtalkVersion() const { return this->dingtalkVersion_ != nullptr;};
    void deleteDingtalkVersion() { this->dingtalkVersion_ = nullptr;};
    inline string dingtalkVersion() const { DARABONBA_PTR_GET_DEFAULT(dingtalkVersion_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig& setDingtalkVersion(string dingtalkVersion) { DARABONBA_PTR_SET_VALUE(dingtalkVersion_, dingtalkVersion) };


    // encryptKey Field Functions 
    bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
    void deleteEncryptKey() { this->encryptKey_ = nullptr;};
    inline string encryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


    // verificationToken Field Functions 
    bool hasVerificationToken() const { return this->verificationToken_ != nullptr;};
    void deleteVerificationToken() { this->verificationToken_ = nullptr;};
    inline string verificationToken() const { DARABONBA_PTR_GET_DEFAULT(verificationToken_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig& setVerificationToken(string verificationToken) { DARABONBA_PTR_SET_VALUE(verificationToken_, verificationToken) };


  protected:
    // The AppKey for the application.
    std::shared_ptr<string> appKey_ = nullptr;
    // The details of the application secret.
    std::shared_ptr<string> appSecret_ = nullptr;
    // DingTalk corpId.
    std::shared_ptr<string> corpId_ = nullptr;
    // IDaaS EIAM 钉钉扫码登录版本
    std::shared_ptr<string> dingtalkLoginVersion_ = nullptr;
    // DingTalk Version.
    std::shared_ptr<string> dingtalkVersion_ = nullptr;
    // DingTalk  encrypt key.
    std::shared_ptr<string> encryptKey_ = nullptr;
    // DingTalk  verification token.
    std::shared_ptr<string> verificationToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
