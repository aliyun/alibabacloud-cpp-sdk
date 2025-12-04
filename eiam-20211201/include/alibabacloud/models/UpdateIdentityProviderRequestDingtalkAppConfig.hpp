// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUESTDINGTALKAPPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUESTDINGTALKAPPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateIdentityProviderRequestDingtalkAppConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdentityProviderRequestDingtalkAppConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_TO_JSON(DingtalkLoginVersion, dingtalkLoginVersion_);
      DARABONBA_PTR_TO_JSON(EncryptKey, encryptKey_);
      DARABONBA_PTR_TO_JSON(VerificationToken, verificationToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdentityProviderRequestDingtalkAppConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_FROM_JSON(DingtalkLoginVersion, dingtalkLoginVersion_);
      DARABONBA_PTR_FROM_JSON(EncryptKey, encryptKey_);
      DARABONBA_PTR_FROM_JSON(VerificationToken, verificationToken_);
    };
    UpdateIdentityProviderRequestDingtalkAppConfig() = default ;
    UpdateIdentityProviderRequestDingtalkAppConfig(const UpdateIdentityProviderRequestDingtalkAppConfig &) = default ;
    UpdateIdentityProviderRequestDingtalkAppConfig(UpdateIdentityProviderRequestDingtalkAppConfig &&) = default ;
    UpdateIdentityProviderRequestDingtalkAppConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdentityProviderRequestDingtalkAppConfig() = default ;
    UpdateIdentityProviderRequestDingtalkAppConfig& operator=(const UpdateIdentityProviderRequestDingtalkAppConfig &) = default ;
    UpdateIdentityProviderRequestDingtalkAppConfig& operator=(UpdateIdentityProviderRequestDingtalkAppConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->appSecret_ == nullptr && return this->dingtalkLoginVersion_ == nullptr && return this->encryptKey_ == nullptr && return this->verificationToken_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline UpdateIdentityProviderRequestDingtalkAppConfig& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline UpdateIdentityProviderRequestDingtalkAppConfig& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


    // dingtalkLoginVersion Field Functions 
    bool hasDingtalkLoginVersion() const { return this->dingtalkLoginVersion_ != nullptr;};
    void deleteDingtalkLoginVersion() { this->dingtalkLoginVersion_ = nullptr;};
    inline string dingtalkLoginVersion() const { DARABONBA_PTR_GET_DEFAULT(dingtalkLoginVersion_, "") };
    inline UpdateIdentityProviderRequestDingtalkAppConfig& setDingtalkLoginVersion(string dingtalkLoginVersion) { DARABONBA_PTR_SET_VALUE(dingtalkLoginVersion_, dingtalkLoginVersion) };


    // encryptKey Field Functions 
    bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
    void deleteEncryptKey() { this->encryptKey_ = nullptr;};
    inline string encryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
    inline UpdateIdentityProviderRequestDingtalkAppConfig& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


    // verificationToken Field Functions 
    bool hasVerificationToken() const { return this->verificationToken_ != nullptr;};
    void deleteVerificationToken() { this->verificationToken_ = nullptr;};
    inline string verificationToken() const { DARABONBA_PTR_GET_DEFAULT(verificationToken_, "") };
    inline UpdateIdentityProviderRequestDingtalkAppConfig& setVerificationToken(string verificationToken) { DARABONBA_PTR_SET_VALUE(verificationToken_, verificationToken) };


  protected:
    // 钉钉一方应用的AppKey
    std::shared_ptr<string> appKey_ = nullptr;
    // 钉钉一方应用的AppSecret
    std::shared_ptr<string> appSecret_ = nullptr;
    std::shared_ptr<string> dingtalkLoginVersion_ = nullptr;
    std::shared_ptr<string> encryptKey_ = nullptr;
    std::shared_ptr<string> verificationToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
