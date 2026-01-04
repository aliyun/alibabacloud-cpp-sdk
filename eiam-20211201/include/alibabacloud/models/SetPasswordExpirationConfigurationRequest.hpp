// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPASSWORDEXPIRATIONCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPASSWORDEXPIRATIONCONFIGURATIONREQUEST_HPP_
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
  class SetPasswordExpirationConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPasswordExpirationConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveAuthenticationSourceIds, effectiveAuthenticationSourceIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PasswordExpirationAction, passwordExpirationAction_);
      DARABONBA_PTR_TO_JSON(PasswordExpirationNotificationChannels, passwordExpirationNotificationChannels_);
      DARABONBA_PTR_TO_JSON(PasswordExpirationNotificationDuration, passwordExpirationNotificationDuration_);
      DARABONBA_PTR_TO_JSON(PasswordExpirationNotificationStatus, passwordExpirationNotificationStatus_);
      DARABONBA_PTR_TO_JSON(PasswordExpirationStatus, passwordExpirationStatus_);
      DARABONBA_PTR_TO_JSON(PasswordForcedUpdateDuration, passwordForcedUpdateDuration_);
      DARABONBA_PTR_TO_JSON(PasswordValidMaxDay, passwordValidMaxDay_);
    };
    friend void from_json(const Darabonba::Json& j, SetPasswordExpirationConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveAuthenticationSourceIds, effectiveAuthenticationSourceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PasswordExpirationAction, passwordExpirationAction_);
      DARABONBA_PTR_FROM_JSON(PasswordExpirationNotificationChannels, passwordExpirationNotificationChannels_);
      DARABONBA_PTR_FROM_JSON(PasswordExpirationNotificationDuration, passwordExpirationNotificationDuration_);
      DARABONBA_PTR_FROM_JSON(PasswordExpirationNotificationStatus, passwordExpirationNotificationStatus_);
      DARABONBA_PTR_FROM_JSON(PasswordExpirationStatus, passwordExpirationStatus_);
      DARABONBA_PTR_FROM_JSON(PasswordForcedUpdateDuration, passwordForcedUpdateDuration_);
      DARABONBA_PTR_FROM_JSON(PasswordValidMaxDay, passwordValidMaxDay_);
    };
    SetPasswordExpirationConfigurationRequest() = default ;
    SetPasswordExpirationConfigurationRequest(const SetPasswordExpirationConfigurationRequest &) = default ;
    SetPasswordExpirationConfigurationRequest(SetPasswordExpirationConfigurationRequest &&) = default ;
    SetPasswordExpirationConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPasswordExpirationConfigurationRequest() = default ;
    SetPasswordExpirationConfigurationRequest& operator=(const SetPasswordExpirationConfigurationRequest &) = default ;
    SetPasswordExpirationConfigurationRequest& operator=(SetPasswordExpirationConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveAuthenticationSourceIds_ == nullptr
        && this->instanceId_ == nullptr && this->passwordExpirationAction_ == nullptr && this->passwordExpirationNotificationChannels_ == nullptr && this->passwordExpirationNotificationDuration_ == nullptr && this->passwordExpirationNotificationStatus_ == nullptr
        && this->passwordExpirationStatus_ == nullptr && this->passwordForcedUpdateDuration_ == nullptr && this->passwordValidMaxDay_ == nullptr; };
    // effectiveAuthenticationSourceIds Field Functions 
    bool hasEffectiveAuthenticationSourceIds() const { return this->effectiveAuthenticationSourceIds_ != nullptr;};
    void deleteEffectiveAuthenticationSourceIds() { this->effectiveAuthenticationSourceIds_ = nullptr;};
    inline const vector<string> & getEffectiveAuthenticationSourceIds() const { DARABONBA_PTR_GET_CONST(effectiveAuthenticationSourceIds_, vector<string>) };
    inline vector<string> getEffectiveAuthenticationSourceIds() { DARABONBA_PTR_GET(effectiveAuthenticationSourceIds_, vector<string>) };
    inline SetPasswordExpirationConfigurationRequest& setEffectiveAuthenticationSourceIds(const vector<string> & effectiveAuthenticationSourceIds) { DARABONBA_PTR_SET_VALUE(effectiveAuthenticationSourceIds_, effectiveAuthenticationSourceIds) };
    inline SetPasswordExpirationConfigurationRequest& setEffectiveAuthenticationSourceIds(vector<string> && effectiveAuthenticationSourceIds) { DARABONBA_PTR_SET_RVALUE(effectiveAuthenticationSourceIds_, effectiveAuthenticationSourceIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPasswordExpirationConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // passwordExpirationAction Field Functions 
    bool hasPasswordExpirationAction() const { return this->passwordExpirationAction_ != nullptr;};
    void deletePasswordExpirationAction() { this->passwordExpirationAction_ = nullptr;};
    inline string getPasswordExpirationAction() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationAction_, "") };
    inline SetPasswordExpirationConfigurationRequest& setPasswordExpirationAction(string passwordExpirationAction) { DARABONBA_PTR_SET_VALUE(passwordExpirationAction_, passwordExpirationAction) };


    // passwordExpirationNotificationChannels Field Functions 
    bool hasPasswordExpirationNotificationChannels() const { return this->passwordExpirationNotificationChannels_ != nullptr;};
    void deletePasswordExpirationNotificationChannels() { this->passwordExpirationNotificationChannels_ = nullptr;};
    inline const vector<string> & getPasswordExpirationNotificationChannels() const { DARABONBA_PTR_GET_CONST(passwordExpirationNotificationChannels_, vector<string>) };
    inline vector<string> getPasswordExpirationNotificationChannels() { DARABONBA_PTR_GET(passwordExpirationNotificationChannels_, vector<string>) };
    inline SetPasswordExpirationConfigurationRequest& setPasswordExpirationNotificationChannels(const vector<string> & passwordExpirationNotificationChannels) { DARABONBA_PTR_SET_VALUE(passwordExpirationNotificationChannels_, passwordExpirationNotificationChannels) };
    inline SetPasswordExpirationConfigurationRequest& setPasswordExpirationNotificationChannels(vector<string> && passwordExpirationNotificationChannels) { DARABONBA_PTR_SET_RVALUE(passwordExpirationNotificationChannels_, passwordExpirationNotificationChannels) };


    // passwordExpirationNotificationDuration Field Functions 
    bool hasPasswordExpirationNotificationDuration() const { return this->passwordExpirationNotificationDuration_ != nullptr;};
    void deletePasswordExpirationNotificationDuration() { this->passwordExpirationNotificationDuration_ = nullptr;};
    inline int32_t getPasswordExpirationNotificationDuration() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationNotificationDuration_, 0) };
    inline SetPasswordExpirationConfigurationRequest& setPasswordExpirationNotificationDuration(int32_t passwordExpirationNotificationDuration) { DARABONBA_PTR_SET_VALUE(passwordExpirationNotificationDuration_, passwordExpirationNotificationDuration) };


    // passwordExpirationNotificationStatus Field Functions 
    bool hasPasswordExpirationNotificationStatus() const { return this->passwordExpirationNotificationStatus_ != nullptr;};
    void deletePasswordExpirationNotificationStatus() { this->passwordExpirationNotificationStatus_ = nullptr;};
    inline string getPasswordExpirationNotificationStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationNotificationStatus_, "") };
    inline SetPasswordExpirationConfigurationRequest& setPasswordExpirationNotificationStatus(string passwordExpirationNotificationStatus) { DARABONBA_PTR_SET_VALUE(passwordExpirationNotificationStatus_, passwordExpirationNotificationStatus) };


    // passwordExpirationStatus Field Functions 
    bool hasPasswordExpirationStatus() const { return this->passwordExpirationStatus_ != nullptr;};
    void deletePasswordExpirationStatus() { this->passwordExpirationStatus_ = nullptr;};
    inline string getPasswordExpirationStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationStatus_, "") };
    inline SetPasswordExpirationConfigurationRequest& setPasswordExpirationStatus(string passwordExpirationStatus) { DARABONBA_PTR_SET_VALUE(passwordExpirationStatus_, passwordExpirationStatus) };


    // passwordForcedUpdateDuration Field Functions 
    bool hasPasswordForcedUpdateDuration() const { return this->passwordForcedUpdateDuration_ != nullptr;};
    void deletePasswordForcedUpdateDuration() { this->passwordForcedUpdateDuration_ = nullptr;};
    inline int32_t getPasswordForcedUpdateDuration() const { DARABONBA_PTR_GET_DEFAULT(passwordForcedUpdateDuration_, 0) };
    inline SetPasswordExpirationConfigurationRequest& setPasswordForcedUpdateDuration(int32_t passwordForcedUpdateDuration) { DARABONBA_PTR_SET_VALUE(passwordForcedUpdateDuration_, passwordForcedUpdateDuration) };


    // passwordValidMaxDay Field Functions 
    bool hasPasswordValidMaxDay() const { return this->passwordValidMaxDay_ != nullptr;};
    void deletePasswordValidMaxDay() { this->passwordValidMaxDay_ = nullptr;};
    inline int32_t getPasswordValidMaxDay() const { DARABONBA_PTR_GET_DEFAULT(passwordValidMaxDay_, 0) };
    inline SetPasswordExpirationConfigurationRequest& setPasswordValidMaxDay(int32_t passwordValidMaxDay) { DARABONBA_PTR_SET_VALUE(passwordValidMaxDay_, passwordValidMaxDay) };


  protected:
    // Effective authentication sourceIds
    shared_ptr<vector<string>> effectiveAuthenticationSourceIds_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The action to take upon password expiration. This parameter must be specified when PasswordExpirationStatus is set to enabled. Valid values:
    // 
    // *   forbid_login: Users cannot log on to IDaaS.
    // *   force_update_password: Users must change the password.
    // *   remind_update_password: IDaaS reminds users to change the password upon each logon.
    shared_ptr<string> passwordExpirationAction_ {};
    // The methods for receiving password expiration notifications. This parameter must be specified when PasswordExpirationNotificationStatus is set to enabled.
    shared_ptr<vector<string>> passwordExpirationNotificationChannels_ {};
    // The number of days before the expiration date during which password expiration notifications are sent. Unit: day. This parameter must be specified when PasswordExpirationNotificationStatus is set to enabled.
    shared_ptr<int32_t> passwordExpirationNotificationDuration_ {};
    // Specifies whether to enable the password expiration notification feature. Valid values:
    // 
    // *   enabled
    // *   disabled
    shared_ptr<string> passwordExpirationNotificationStatus_ {};
    // Specifies whether to enable the password expiration feature. Valid values:
    // 
    // *   enabled
    // *   disabled
    // 
    // This parameter is required.
    shared_ptr<string> passwordExpirationStatus_ {};
    // The number of days before which users must change the password to prevent password expiration. Unit: day. You must set this parameter to a value greater than the value of PasswordExpirationNotificationDuration.
    shared_ptr<int32_t> passwordForcedUpdateDuration_ {};
    // The validity period of a password. Unit: day. This parameter must be specified when PasswordExpirationStatus is set to enabled.
    shared_ptr<int32_t> passwordValidMaxDay_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
