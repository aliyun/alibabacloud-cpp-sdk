// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDEXPIRATIONCONFIGURATIONRESPONSEBODYPASSWORDEXPIRATIONCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDEXPIRATIONCONFIGURATIONRESPONSEBODYPASSWORDEXPIRATIONCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveAuthenticationSourceIds, effectiveAuthenticationSourceIds_);
      DARABONBA_PTR_TO_JSON(PasswordExpirationAction, passwordExpirationAction_);
      DARABONBA_PTR_TO_JSON(PasswordExpirationNotificationChannels, passwordExpirationNotificationChannels_);
      DARABONBA_PTR_TO_JSON(PasswordExpirationNotificationDuration, passwordExpirationNotificationDuration_);
      DARABONBA_PTR_TO_JSON(PasswordExpirationNotificationStatus, passwordExpirationNotificationStatus_);
      DARABONBA_PTR_TO_JSON(PasswordExpirationStatus, passwordExpirationStatus_);
      DARABONBA_PTR_TO_JSON(PasswordForcedUpdateDuration, passwordForcedUpdateDuration_);
      DARABONBA_PTR_TO_JSON(PasswordValidMaxDay, passwordValidMaxDay_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveAuthenticationSourceIds, effectiveAuthenticationSourceIds_);
      DARABONBA_PTR_FROM_JSON(PasswordExpirationAction, passwordExpirationAction_);
      DARABONBA_PTR_FROM_JSON(PasswordExpirationNotificationChannels, passwordExpirationNotificationChannels_);
      DARABONBA_PTR_FROM_JSON(PasswordExpirationNotificationDuration, passwordExpirationNotificationDuration_);
      DARABONBA_PTR_FROM_JSON(PasswordExpirationNotificationStatus, passwordExpirationNotificationStatus_);
      DARABONBA_PTR_FROM_JSON(PasswordExpirationStatus, passwordExpirationStatus_);
      DARABONBA_PTR_FROM_JSON(PasswordForcedUpdateDuration, passwordForcedUpdateDuration_);
      DARABONBA_PTR_FROM_JSON(PasswordValidMaxDay, passwordValidMaxDay_);
    };
    GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration() = default ;
    GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration(const GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration &) = default ;
    GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration(GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration &&) = default ;
    GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration() = default ;
    GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& operator=(const GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration &) = default ;
    GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& operator=(GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveAuthenticationSourceIds_ == nullptr
        && return this->passwordExpirationAction_ == nullptr && return this->passwordExpirationNotificationChannels_ == nullptr && return this->passwordExpirationNotificationDuration_ == nullptr && return this->passwordExpirationNotificationStatus_ == nullptr && return this->passwordExpirationStatus_ == nullptr
        && return this->passwordForcedUpdateDuration_ == nullptr && return this->passwordValidMaxDay_ == nullptr; };
    // effectiveAuthenticationSourceIds Field Functions 
    bool hasEffectiveAuthenticationSourceIds() const { return this->effectiveAuthenticationSourceIds_ != nullptr;};
    void deleteEffectiveAuthenticationSourceIds() { this->effectiveAuthenticationSourceIds_ = nullptr;};
    inline const vector<string> & effectiveAuthenticationSourceIds() const { DARABONBA_PTR_GET_CONST(effectiveAuthenticationSourceIds_, vector<string>) };
    inline vector<string> effectiveAuthenticationSourceIds() { DARABONBA_PTR_GET(effectiveAuthenticationSourceIds_, vector<string>) };
    inline GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& setEffectiveAuthenticationSourceIds(const vector<string> & effectiveAuthenticationSourceIds) { DARABONBA_PTR_SET_VALUE(effectiveAuthenticationSourceIds_, effectiveAuthenticationSourceIds) };
    inline GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& setEffectiveAuthenticationSourceIds(vector<string> && effectiveAuthenticationSourceIds) { DARABONBA_PTR_SET_RVALUE(effectiveAuthenticationSourceIds_, effectiveAuthenticationSourceIds) };


    // passwordExpirationAction Field Functions 
    bool hasPasswordExpirationAction() const { return this->passwordExpirationAction_ != nullptr;};
    void deletePasswordExpirationAction() { this->passwordExpirationAction_ = nullptr;};
    inline string passwordExpirationAction() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationAction_, "") };
    inline GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& setPasswordExpirationAction(string passwordExpirationAction) { DARABONBA_PTR_SET_VALUE(passwordExpirationAction_, passwordExpirationAction) };


    // passwordExpirationNotificationChannels Field Functions 
    bool hasPasswordExpirationNotificationChannels() const { return this->passwordExpirationNotificationChannels_ != nullptr;};
    void deletePasswordExpirationNotificationChannels() { this->passwordExpirationNotificationChannels_ = nullptr;};
    inline const vector<string> & passwordExpirationNotificationChannels() const { DARABONBA_PTR_GET_CONST(passwordExpirationNotificationChannels_, vector<string>) };
    inline vector<string> passwordExpirationNotificationChannels() { DARABONBA_PTR_GET(passwordExpirationNotificationChannels_, vector<string>) };
    inline GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& setPasswordExpirationNotificationChannels(const vector<string> & passwordExpirationNotificationChannels) { DARABONBA_PTR_SET_VALUE(passwordExpirationNotificationChannels_, passwordExpirationNotificationChannels) };
    inline GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& setPasswordExpirationNotificationChannels(vector<string> && passwordExpirationNotificationChannels) { DARABONBA_PTR_SET_RVALUE(passwordExpirationNotificationChannels_, passwordExpirationNotificationChannels) };


    // passwordExpirationNotificationDuration Field Functions 
    bool hasPasswordExpirationNotificationDuration() const { return this->passwordExpirationNotificationDuration_ != nullptr;};
    void deletePasswordExpirationNotificationDuration() { this->passwordExpirationNotificationDuration_ = nullptr;};
    inline int32_t passwordExpirationNotificationDuration() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationNotificationDuration_, 0) };
    inline GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& setPasswordExpirationNotificationDuration(int32_t passwordExpirationNotificationDuration) { DARABONBA_PTR_SET_VALUE(passwordExpirationNotificationDuration_, passwordExpirationNotificationDuration) };


    // passwordExpirationNotificationStatus Field Functions 
    bool hasPasswordExpirationNotificationStatus() const { return this->passwordExpirationNotificationStatus_ != nullptr;};
    void deletePasswordExpirationNotificationStatus() { this->passwordExpirationNotificationStatus_ = nullptr;};
    inline string passwordExpirationNotificationStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationNotificationStatus_, "") };
    inline GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& setPasswordExpirationNotificationStatus(string passwordExpirationNotificationStatus) { DARABONBA_PTR_SET_VALUE(passwordExpirationNotificationStatus_, passwordExpirationNotificationStatus) };


    // passwordExpirationStatus Field Functions 
    bool hasPasswordExpirationStatus() const { return this->passwordExpirationStatus_ != nullptr;};
    void deletePasswordExpirationStatus() { this->passwordExpirationStatus_ = nullptr;};
    inline string passwordExpirationStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationStatus_, "") };
    inline GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& setPasswordExpirationStatus(string passwordExpirationStatus) { DARABONBA_PTR_SET_VALUE(passwordExpirationStatus_, passwordExpirationStatus) };


    // passwordForcedUpdateDuration Field Functions 
    bool hasPasswordForcedUpdateDuration() const { return this->passwordForcedUpdateDuration_ != nullptr;};
    void deletePasswordForcedUpdateDuration() { this->passwordForcedUpdateDuration_ = nullptr;};
    inline int32_t passwordForcedUpdateDuration() const { DARABONBA_PTR_GET_DEFAULT(passwordForcedUpdateDuration_, 0) };
    inline GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& setPasswordForcedUpdateDuration(int32_t passwordForcedUpdateDuration) { DARABONBA_PTR_SET_VALUE(passwordForcedUpdateDuration_, passwordForcedUpdateDuration) };


    // passwordValidMaxDay Field Functions 
    bool hasPasswordValidMaxDay() const { return this->passwordValidMaxDay_ != nullptr;};
    void deletePasswordValidMaxDay() { this->passwordValidMaxDay_ = nullptr;};
    inline int32_t passwordValidMaxDay() const { DARABONBA_PTR_GET_DEFAULT(passwordValidMaxDay_, 0) };
    inline GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration& setPasswordValidMaxDay(int32_t passwordValidMaxDay) { DARABONBA_PTR_SET_VALUE(passwordValidMaxDay_, passwordValidMaxDay) };


  protected:
    // The list of valid authentication IDs. The default is all ["ia_all"]
    // 
    // ia_all: All. If you fill in this value, you cannot fill in other values
    // 
    // ia_password: Account password login
    // 
    // ia_otp_sms: SMS verification code login method
    // 
    // ia_webauthn: WebAuthn authenticator login method
    // 
    // idp_xxx: Specific identity provider authentication method
    std::shared_ptr<vector<string>> effectiveAuthenticationSourceIds_ = nullptr;
    // The action to take when a password expires. Valid values:
    // 
    // *   forbid_login: Prohibit the user from using the password to log on to IDaaS.
    // *   force_update_password: Force the user to change the password.
    // *   remind_update_password: Remind the user to change the password.
    std::shared_ptr<string> passwordExpirationAction_ = nullptr;
    // The methods for receiving password expiration notifications.
    std::shared_ptr<vector<string>> passwordExpirationNotificationChannels_ = nullptr;
    // The number of days before the expiration date during which password expiration notifications are sent. Unit: day.
    std::shared_ptr<int32_t> passwordExpirationNotificationDuration_ = nullptr;
    // Indicates whether the password expiration notification feature is enabled. Valid values:
    // 
    // *   enabled
    // *   disabled
    std::shared_ptr<string> passwordExpirationNotificationStatus_ = nullptr;
    // Indicates whether the password expiration feature is enabled. Valid values:
    // 
    // *   enabled
    // *   disabled
    std::shared_ptr<string> passwordExpirationStatus_ = nullptr;
    // The number of days before which users must change the password to prevent password expiration. Unit: day.
    std::shared_ptr<int32_t> passwordForcedUpdateDuration_ = nullptr;
    // The validity period of a password. Unit: day.
    std::shared_ptr<int32_t> passwordValidMaxDay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
