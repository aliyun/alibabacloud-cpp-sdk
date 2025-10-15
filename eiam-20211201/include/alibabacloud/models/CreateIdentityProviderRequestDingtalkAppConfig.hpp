// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTDINGTALKAPPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTDINGTALKAPPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestDingtalkAppConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestDingtalkAppConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(DingtalkVersion, dingtalkVersion_);
      DARABONBA_PTR_TO_JSON(EncryptKey, encryptKey_);
      DARABONBA_PTR_TO_JSON(VerificationToken, verificationToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestDingtalkAppConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(DingtalkVersion, dingtalkVersion_);
      DARABONBA_PTR_FROM_JSON(EncryptKey, encryptKey_);
      DARABONBA_PTR_FROM_JSON(VerificationToken, verificationToken_);
    };
    CreateIdentityProviderRequestDingtalkAppConfig() = default ;
    CreateIdentityProviderRequestDingtalkAppConfig(const CreateIdentityProviderRequestDingtalkAppConfig &) = default ;
    CreateIdentityProviderRequestDingtalkAppConfig(CreateIdentityProviderRequestDingtalkAppConfig &&) = default ;
    CreateIdentityProviderRequestDingtalkAppConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestDingtalkAppConfig() = default ;
    CreateIdentityProviderRequestDingtalkAppConfig& operator=(const CreateIdentityProviderRequestDingtalkAppConfig &) = default ;
    CreateIdentityProviderRequestDingtalkAppConfig& operator=(CreateIdentityProviderRequestDingtalkAppConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->appSecret_ == nullptr && return this->corpId_ == nullptr && return this->dingtalkVersion_ == nullptr && return this->encryptKey_ == nullptr && return this->verificationToken_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline CreateIdentityProviderRequestDingtalkAppConfig& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline CreateIdentityProviderRequestDingtalkAppConfig& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline CreateIdentityProviderRequestDingtalkAppConfig& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // dingtalkVersion Field Functions 
    bool hasDingtalkVersion() const { return this->dingtalkVersion_ != nullptr;};
    void deleteDingtalkVersion() { this->dingtalkVersion_ = nullptr;};
    inline string dingtalkVersion() const { DARABONBA_PTR_GET_DEFAULT(dingtalkVersion_, "") };
    inline CreateIdentityProviderRequestDingtalkAppConfig& setDingtalkVersion(string dingtalkVersion) { DARABONBA_PTR_SET_VALUE(dingtalkVersion_, dingtalkVersion) };


    // encryptKey Field Functions 
    bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
    void deleteEncryptKey() { this->encryptKey_ = nullptr;};
    inline string encryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
    inline CreateIdentityProviderRequestDingtalkAppConfig& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


    // verificationToken Field Functions 
    bool hasVerificationToken() const { return this->verificationToken_ != nullptr;};
    void deleteVerificationToken() { this->verificationToken_ = nullptr;};
    inline string verificationToken() const { DARABONBA_PTR_GET_DEFAULT(verificationToken_, "") };
    inline CreateIdentityProviderRequestDingtalkAppConfig& setVerificationToken(string verificationToken) { DARABONBA_PTR_SET_VALUE(verificationToken_, verificationToken) };


  protected:
    // AppKey of the DingTalk application.
    std::shared_ptr<string> appKey_ = nullptr;
    // AppSecret of the DingTalk application.
    std::shared_ptr<string> appSecret_ = nullptr;
    // CorpId of the DingTalk application.
    std::shared_ptr<string> corpId_ = nullptr;
    // DingTalk edition. Valid values:
    // 
    // public_dingtalk – Standard DingTalk.
    // 
    // private_dingtalk – Dedicated DingTalk.
    std::shared_ptr<string> dingtalkVersion_ = nullptr;
    // DingTalk encrypt key.
    std::shared_ptr<string> encryptKey_ = nullptr;
    // DingTalk verification token.
    std::shared_ptr<string> verificationToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
