// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILLARKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILLARKCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_TO_JSON(EncryptKey, encryptKey_);
      DARABONBA_PTR_TO_JSON(EnterpriseNumber, enterpriseNumber_);
      DARABONBA_PTR_TO_JSON(VerificationToken, verificationToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_FROM_JSON(EncryptKey, encryptKey_);
      DARABONBA_PTR_FROM_JSON(EnterpriseNumber, enterpriseNumber_);
      DARABONBA_PTR_FROM_JSON(VerificationToken, verificationToken_);
    };
    GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig(const GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig(GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig &&) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig& operator=(const GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig& operator=(GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appSecret_ == nullptr && return this->encryptKey_ == nullptr && return this->enterpriseNumber_ == nullptr && return this->verificationToken_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


    // encryptKey Field Functions 
    bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
    void deleteEncryptKey() { this->encryptKey_ = nullptr;};
    inline string encryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


    // enterpriseNumber Field Functions 
    bool hasEnterpriseNumber() const { return this->enterpriseNumber_ != nullptr;};
    void deleteEnterpriseNumber() { this->enterpriseNumber_ = nullptr;};
    inline string enterpriseNumber() const { DARABONBA_PTR_GET_DEFAULT(enterpriseNumber_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig& setEnterpriseNumber(string enterpriseNumber) { DARABONBA_PTR_SET_VALUE(enterpriseNumber_, enterpriseNumber) };


    // verificationToken Field Functions 
    bool hasVerificationToken() const { return this->verificationToken_ != nullptr;};
    void deleteVerificationToken() { this->verificationToken_ = nullptr;};
    inline string verificationToken() const { DARABONBA_PTR_GET_DEFAULT(verificationToken_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig& setVerificationToken(string verificationToken) { DARABONBA_PTR_SET_VALUE(verificationToken_, verificationToken) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> appSecret_ = nullptr;
    // Feishu encryptKey.
    std::shared_ptr<string> encryptKey_ = nullptr;
    // Feishu enterprise code.
    std::shared_ptr<string> enterpriseNumber_ = nullptr;
    // Feishu verificationToken.
    std::shared_ptr<string> verificationToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
