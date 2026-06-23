// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDEXPIRATIONCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDEXPIRATIONCONFIGURATIONRESPONSEBODY_HPP_
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
  class GetPasswordExpirationConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordExpirationConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordExpirationConfiguration, passwordExpirationConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordExpirationConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordExpirationConfiguration, passwordExpirationConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPasswordExpirationConfigurationResponseBody() = default ;
    GetPasswordExpirationConfigurationResponseBody(const GetPasswordExpirationConfigurationResponseBody &) = default ;
    GetPasswordExpirationConfigurationResponseBody(GetPasswordExpirationConfigurationResponseBody &&) = default ;
    GetPasswordExpirationConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordExpirationConfigurationResponseBody() = default ;
    GetPasswordExpirationConfigurationResponseBody& operator=(const GetPasswordExpirationConfigurationResponseBody &) = default ;
    GetPasswordExpirationConfigurationResponseBody& operator=(GetPasswordExpirationConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PasswordExpirationConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PasswordExpirationConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(EffectiveAuthenticationSourceIds, effectiveAuthenticationSourceIds_);
        DARABONBA_PTR_TO_JSON(PasswordExpirationAction, passwordExpirationAction_);
        DARABONBA_PTR_TO_JSON(PasswordExpirationNotificationChannels, passwordExpirationNotificationChannels_);
        DARABONBA_PTR_TO_JSON(PasswordExpirationNotificationDuration, passwordExpirationNotificationDuration_);
        DARABONBA_PTR_TO_JSON(PasswordExpirationNotificationStatus, passwordExpirationNotificationStatus_);
        DARABONBA_PTR_TO_JSON(PasswordExpirationStatus, passwordExpirationStatus_);
        DARABONBA_PTR_TO_JSON(PasswordForcedUpdateDuration, passwordForcedUpdateDuration_);
        DARABONBA_PTR_TO_JSON(PasswordValidMaxDay, passwordValidMaxDay_);
      };
      friend void from_json(const Darabonba::Json& j, PasswordExpirationConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(EffectiveAuthenticationSourceIds, effectiveAuthenticationSourceIds_);
        DARABONBA_PTR_FROM_JSON(PasswordExpirationAction, passwordExpirationAction_);
        DARABONBA_PTR_FROM_JSON(PasswordExpirationNotificationChannels, passwordExpirationNotificationChannels_);
        DARABONBA_PTR_FROM_JSON(PasswordExpirationNotificationDuration, passwordExpirationNotificationDuration_);
        DARABONBA_PTR_FROM_JSON(PasswordExpirationNotificationStatus, passwordExpirationNotificationStatus_);
        DARABONBA_PTR_FROM_JSON(PasswordExpirationStatus, passwordExpirationStatus_);
        DARABONBA_PTR_FROM_JSON(PasswordForcedUpdateDuration, passwordForcedUpdateDuration_);
        DARABONBA_PTR_FROM_JSON(PasswordValidMaxDay, passwordValidMaxDay_);
      };
      PasswordExpirationConfiguration() = default ;
      PasswordExpirationConfiguration(const PasswordExpirationConfiguration &) = default ;
      PasswordExpirationConfiguration(PasswordExpirationConfiguration &&) = default ;
      PasswordExpirationConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PasswordExpirationConfiguration() = default ;
      PasswordExpirationConfiguration& operator=(const PasswordExpirationConfiguration &) = default ;
      PasswordExpirationConfiguration& operator=(PasswordExpirationConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->effectiveAuthenticationSourceIds_ == nullptr
        && this->passwordExpirationAction_ == nullptr && this->passwordExpirationNotificationChannels_ == nullptr && this->passwordExpirationNotificationDuration_ == nullptr && this->passwordExpirationNotificationStatus_ == nullptr && this->passwordExpirationStatus_ == nullptr
        && this->passwordForcedUpdateDuration_ == nullptr && this->passwordValidMaxDay_ == nullptr; };
      // effectiveAuthenticationSourceIds Field Functions 
      bool hasEffectiveAuthenticationSourceIds() const { return this->effectiveAuthenticationSourceIds_ != nullptr;};
      void deleteEffectiveAuthenticationSourceIds() { this->effectiveAuthenticationSourceIds_ = nullptr;};
      inline const vector<string> & getEffectiveAuthenticationSourceIds() const { DARABONBA_PTR_GET_CONST(effectiveAuthenticationSourceIds_, vector<string>) };
      inline vector<string> getEffectiveAuthenticationSourceIds() { DARABONBA_PTR_GET(effectiveAuthenticationSourceIds_, vector<string>) };
      inline PasswordExpirationConfiguration& setEffectiveAuthenticationSourceIds(const vector<string> & effectiveAuthenticationSourceIds) { DARABONBA_PTR_SET_VALUE(effectiveAuthenticationSourceIds_, effectiveAuthenticationSourceIds) };
      inline PasswordExpirationConfiguration& setEffectiveAuthenticationSourceIds(vector<string> && effectiveAuthenticationSourceIds) { DARABONBA_PTR_SET_RVALUE(effectiveAuthenticationSourceIds_, effectiveAuthenticationSourceIds) };


      // passwordExpirationAction Field Functions 
      bool hasPasswordExpirationAction() const { return this->passwordExpirationAction_ != nullptr;};
      void deletePasswordExpirationAction() { this->passwordExpirationAction_ = nullptr;};
      inline string getPasswordExpirationAction() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationAction_, "") };
      inline PasswordExpirationConfiguration& setPasswordExpirationAction(string passwordExpirationAction) { DARABONBA_PTR_SET_VALUE(passwordExpirationAction_, passwordExpirationAction) };


      // passwordExpirationNotificationChannels Field Functions 
      bool hasPasswordExpirationNotificationChannels() const { return this->passwordExpirationNotificationChannels_ != nullptr;};
      void deletePasswordExpirationNotificationChannels() { this->passwordExpirationNotificationChannels_ = nullptr;};
      inline const vector<string> & getPasswordExpirationNotificationChannels() const { DARABONBA_PTR_GET_CONST(passwordExpirationNotificationChannels_, vector<string>) };
      inline vector<string> getPasswordExpirationNotificationChannels() { DARABONBA_PTR_GET(passwordExpirationNotificationChannels_, vector<string>) };
      inline PasswordExpirationConfiguration& setPasswordExpirationNotificationChannels(const vector<string> & passwordExpirationNotificationChannels) { DARABONBA_PTR_SET_VALUE(passwordExpirationNotificationChannels_, passwordExpirationNotificationChannels) };
      inline PasswordExpirationConfiguration& setPasswordExpirationNotificationChannels(vector<string> && passwordExpirationNotificationChannels) { DARABONBA_PTR_SET_RVALUE(passwordExpirationNotificationChannels_, passwordExpirationNotificationChannels) };


      // passwordExpirationNotificationDuration Field Functions 
      bool hasPasswordExpirationNotificationDuration() const { return this->passwordExpirationNotificationDuration_ != nullptr;};
      void deletePasswordExpirationNotificationDuration() { this->passwordExpirationNotificationDuration_ = nullptr;};
      inline int32_t getPasswordExpirationNotificationDuration() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationNotificationDuration_, 0) };
      inline PasswordExpirationConfiguration& setPasswordExpirationNotificationDuration(int32_t passwordExpirationNotificationDuration) { DARABONBA_PTR_SET_VALUE(passwordExpirationNotificationDuration_, passwordExpirationNotificationDuration) };


      // passwordExpirationNotificationStatus Field Functions 
      bool hasPasswordExpirationNotificationStatus() const { return this->passwordExpirationNotificationStatus_ != nullptr;};
      void deletePasswordExpirationNotificationStatus() { this->passwordExpirationNotificationStatus_ = nullptr;};
      inline string getPasswordExpirationNotificationStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationNotificationStatus_, "") };
      inline PasswordExpirationConfiguration& setPasswordExpirationNotificationStatus(string passwordExpirationNotificationStatus) { DARABONBA_PTR_SET_VALUE(passwordExpirationNotificationStatus_, passwordExpirationNotificationStatus) };


      // passwordExpirationStatus Field Functions 
      bool hasPasswordExpirationStatus() const { return this->passwordExpirationStatus_ != nullptr;};
      void deletePasswordExpirationStatus() { this->passwordExpirationStatus_ = nullptr;};
      inline string getPasswordExpirationStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationStatus_, "") };
      inline PasswordExpirationConfiguration& setPasswordExpirationStatus(string passwordExpirationStatus) { DARABONBA_PTR_SET_VALUE(passwordExpirationStatus_, passwordExpirationStatus) };


      // passwordForcedUpdateDuration Field Functions 
      bool hasPasswordForcedUpdateDuration() const { return this->passwordForcedUpdateDuration_ != nullptr;};
      void deletePasswordForcedUpdateDuration() { this->passwordForcedUpdateDuration_ = nullptr;};
      inline int32_t getPasswordForcedUpdateDuration() const { DARABONBA_PTR_GET_DEFAULT(passwordForcedUpdateDuration_, 0) };
      inline PasswordExpirationConfiguration& setPasswordForcedUpdateDuration(int32_t passwordForcedUpdateDuration) { DARABONBA_PTR_SET_VALUE(passwordForcedUpdateDuration_, passwordForcedUpdateDuration) };


      // passwordValidMaxDay Field Functions 
      bool hasPasswordValidMaxDay() const { return this->passwordValidMaxDay_ != nullptr;};
      void deletePasswordValidMaxDay() { this->passwordValidMaxDay_ = nullptr;};
      inline int32_t getPasswordValidMaxDay() const { DARABONBA_PTR_GET_DEFAULT(passwordValidMaxDay_, 0) };
      inline PasswordExpirationConfiguration& setPasswordValidMaxDay(int32_t passwordValidMaxDay) { DARABONBA_PTR_SET_VALUE(passwordValidMaxDay_, passwordValidMaxDay) };


    protected:
      // The list of effective authentication source IDs. Default value: ["ia_all"].
      // 
      // - ia_all: All authentication sources. If this value is specified, no other values can be specified.
      // - ia_password: Account password logon.
      // - ia_otp_sms: SMS verification code logon.
      // - ia_webauthn: WebAuthn authenticator logon.
      // - idp_xxx: Authentication method of a specific identity provider.
      shared_ptr<vector<string>> effectiveAuthenticationSourceIds_ {};
      // The action to take when a password expires. Valid values:
      // 
      // - forbid_login: Forbid logon.
      // - force_update_password: Force password change.
      // - remind_update_password: Remind password change.
      shared_ptr<string> passwordExpirationAction_ {};
      // The list of password expiration notification channels.
      shared_ptr<vector<string>> passwordExpirationNotificationChannels_ {};
      // The advance notice period before password expiration. Unit: days.
      shared_ptr<int32_t> passwordExpirationNotificationDuration_ {};
      // The status of password expiration notification. Valid values:
      // 
      // - enabled: Enabled.
      // - disabled: Disabled.
      shared_ptr<string> passwordExpirationNotificationStatus_ {};
      // The status of the password expiration configuration. Valid values:
      // 
      // - enabled: Enabled.
      // - disabled: Disabled.
      shared_ptr<string> passwordExpirationStatus_ {};
      // The grace period for forced password change after expiration. Unit: days.
      shared_ptr<int32_t> passwordForcedUpdateDuration_ {};
      // The maximum validity period of a password. Unit: days.
      shared_ptr<int32_t> passwordValidMaxDay_ {};
    };

    virtual bool empty() const override { return this->passwordExpirationConfiguration_ == nullptr
        && this->requestId_ == nullptr; };
    // passwordExpirationConfiguration Field Functions 
    bool hasPasswordExpirationConfiguration() const { return this->passwordExpirationConfiguration_ != nullptr;};
    void deletePasswordExpirationConfiguration() { this->passwordExpirationConfiguration_ = nullptr;};
    inline const GetPasswordExpirationConfigurationResponseBody::PasswordExpirationConfiguration & getPasswordExpirationConfiguration() const { DARABONBA_PTR_GET_CONST(passwordExpirationConfiguration_, GetPasswordExpirationConfigurationResponseBody::PasswordExpirationConfiguration) };
    inline GetPasswordExpirationConfigurationResponseBody::PasswordExpirationConfiguration getPasswordExpirationConfiguration() { DARABONBA_PTR_GET(passwordExpirationConfiguration_, GetPasswordExpirationConfigurationResponseBody::PasswordExpirationConfiguration) };
    inline GetPasswordExpirationConfigurationResponseBody& setPasswordExpirationConfiguration(const GetPasswordExpirationConfigurationResponseBody::PasswordExpirationConfiguration & passwordExpirationConfiguration) { DARABONBA_PTR_SET_VALUE(passwordExpirationConfiguration_, passwordExpirationConfiguration) };
    inline GetPasswordExpirationConfigurationResponseBody& setPasswordExpirationConfiguration(GetPasswordExpirationConfigurationResponseBody::PasswordExpirationConfiguration && passwordExpirationConfiguration) { DARABONBA_PTR_SET_RVALUE(passwordExpirationConfiguration_, passwordExpirationConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPasswordExpirationConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The password expiration configuration.
    shared_ptr<GetPasswordExpirationConfigurationResponseBody::PasswordExpirationConfiguration> passwordExpirationConfiguration_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
