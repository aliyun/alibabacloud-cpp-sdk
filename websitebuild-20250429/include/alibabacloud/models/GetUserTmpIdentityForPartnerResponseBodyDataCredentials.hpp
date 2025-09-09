// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERTMPIDENTITYFORPARTNERRESPONSEBODYDATACREDENTIALS_HPP_
#define ALIBABACLOUD_MODELS_GETUSERTMPIDENTITYFORPARTNERRESPONSEBODYDATACREDENTIALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetUserTmpIdentityForPartnerResponseBodyDataCredentials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserTmpIdentityForPartnerResponseBodyDataCredentials& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptedAccessKeyId, encryptedAccessKeyId_);
      DARABONBA_PTR_TO_JSON(EncryptedAccessKeySecret, encryptedAccessKeySecret_);
      DARABONBA_PTR_TO_JSON(EncryptedSecurityToken, encryptedSecurityToken_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserTmpIdentityForPartnerResponseBodyDataCredentials& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptedAccessKeyId, encryptedAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(EncryptedAccessKeySecret, encryptedAccessKeySecret_);
      DARABONBA_PTR_FROM_JSON(EncryptedSecurityToken, encryptedSecurityToken_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
    };
    GetUserTmpIdentityForPartnerResponseBodyDataCredentials() = default ;
    GetUserTmpIdentityForPartnerResponseBodyDataCredentials(const GetUserTmpIdentityForPartnerResponseBodyDataCredentials &) = default ;
    GetUserTmpIdentityForPartnerResponseBodyDataCredentials(GetUserTmpIdentityForPartnerResponseBodyDataCredentials &&) = default ;
    GetUserTmpIdentityForPartnerResponseBodyDataCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserTmpIdentityForPartnerResponseBodyDataCredentials() = default ;
    GetUserTmpIdentityForPartnerResponseBodyDataCredentials& operator=(const GetUserTmpIdentityForPartnerResponseBodyDataCredentials &) = default ;
    GetUserTmpIdentityForPartnerResponseBodyDataCredentials& operator=(GetUserTmpIdentityForPartnerResponseBodyDataCredentials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryptedAccessKeyId_ != nullptr
        && this->encryptedAccessKeySecret_ != nullptr && this->encryptedSecurityToken_ != nullptr && this->expiration_ != nullptr; };
    // encryptedAccessKeyId Field Functions 
    bool hasEncryptedAccessKeyId() const { return this->encryptedAccessKeyId_ != nullptr;};
    void deleteEncryptedAccessKeyId() { this->encryptedAccessKeyId_ = nullptr;};
    inline string encryptedAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptedAccessKeyId_, "") };
    inline GetUserTmpIdentityForPartnerResponseBodyDataCredentials& setEncryptedAccessKeyId(string encryptedAccessKeyId) { DARABONBA_PTR_SET_VALUE(encryptedAccessKeyId_, encryptedAccessKeyId) };


    // encryptedAccessKeySecret Field Functions 
    bool hasEncryptedAccessKeySecret() const { return this->encryptedAccessKeySecret_ != nullptr;};
    void deleteEncryptedAccessKeySecret() { this->encryptedAccessKeySecret_ = nullptr;};
    inline string encryptedAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(encryptedAccessKeySecret_, "") };
    inline GetUserTmpIdentityForPartnerResponseBodyDataCredentials& setEncryptedAccessKeySecret(string encryptedAccessKeySecret) { DARABONBA_PTR_SET_VALUE(encryptedAccessKeySecret_, encryptedAccessKeySecret) };


    // encryptedSecurityToken Field Functions 
    bool hasEncryptedSecurityToken() const { return this->encryptedSecurityToken_ != nullptr;};
    void deleteEncryptedSecurityToken() { this->encryptedSecurityToken_ = nullptr;};
    inline string encryptedSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(encryptedSecurityToken_, "") };
    inline GetUserTmpIdentityForPartnerResponseBodyDataCredentials& setEncryptedSecurityToken(string encryptedSecurityToken) { DARABONBA_PTR_SET_VALUE(encryptedSecurityToken_, encryptedSecurityToken) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline GetUserTmpIdentityForPartnerResponseBodyDataCredentials& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


  protected:
    std::shared_ptr<string> encryptedAccessKeyId_ = nullptr;
    std::shared_ptr<string> encryptedAccessKeySecret_ = nullptr;
    std::shared_ptr<string> encryptedSecurityToken_ = nullptr;
    std::shared_ptr<string> expiration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
