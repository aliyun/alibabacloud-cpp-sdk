// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERREQUESTPASSWORDINITIALIZATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERREQUESTPASSWORDINITIALIZATIONCONFIG_HPP_
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
  class CreateUserRequestPasswordInitializationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserRequestPasswordInitializationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordForcedUpdateStatus, passwordForcedUpdateStatus_);
      DARABONBA_PTR_TO_JSON(PasswordInitializationPolicyPriority, passwordInitializationPolicyPriority_);
      DARABONBA_PTR_TO_JSON(PasswordInitializationType, passwordInitializationType_);
      DARABONBA_PTR_TO_JSON(UserNotificationChannels, userNotificationChannels_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserRequestPasswordInitializationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordForcedUpdateStatus, passwordForcedUpdateStatus_);
      DARABONBA_PTR_FROM_JSON(PasswordInitializationPolicyPriority, passwordInitializationPolicyPriority_);
      DARABONBA_PTR_FROM_JSON(PasswordInitializationType, passwordInitializationType_);
      DARABONBA_PTR_FROM_JSON(UserNotificationChannels, userNotificationChannels_);
    };
    CreateUserRequestPasswordInitializationConfig() = default ;
    CreateUserRequestPasswordInitializationConfig(const CreateUserRequestPasswordInitializationConfig &) = default ;
    CreateUserRequestPasswordInitializationConfig(CreateUserRequestPasswordInitializationConfig &&) = default ;
    CreateUserRequestPasswordInitializationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserRequestPasswordInitializationConfig() = default ;
    CreateUserRequestPasswordInitializationConfig& operator=(const CreateUserRequestPasswordInitializationConfig &) = default ;
    CreateUserRequestPasswordInitializationConfig& operator=(CreateUserRequestPasswordInitializationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passwordForcedUpdateStatus_ == nullptr
        && return this->passwordInitializationPolicyPriority_ == nullptr && return this->passwordInitializationType_ == nullptr && return this->userNotificationChannels_ == nullptr; };
    // passwordForcedUpdateStatus Field Functions 
    bool hasPasswordForcedUpdateStatus() const { return this->passwordForcedUpdateStatus_ != nullptr;};
    void deletePasswordForcedUpdateStatus() { this->passwordForcedUpdateStatus_ = nullptr;};
    inline string passwordForcedUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordForcedUpdateStatus_, "") };
    inline CreateUserRequestPasswordInitializationConfig& setPasswordForcedUpdateStatus(string passwordForcedUpdateStatus) { DARABONBA_PTR_SET_VALUE(passwordForcedUpdateStatus_, passwordForcedUpdateStatus) };


    // passwordInitializationPolicyPriority Field Functions 
    bool hasPasswordInitializationPolicyPriority() const { return this->passwordInitializationPolicyPriority_ != nullptr;};
    void deletePasswordInitializationPolicyPriority() { this->passwordInitializationPolicyPriority_ = nullptr;};
    inline string passwordInitializationPolicyPriority() const { DARABONBA_PTR_GET_DEFAULT(passwordInitializationPolicyPriority_, "") };
    inline CreateUserRequestPasswordInitializationConfig& setPasswordInitializationPolicyPriority(string passwordInitializationPolicyPriority) { DARABONBA_PTR_SET_VALUE(passwordInitializationPolicyPriority_, passwordInitializationPolicyPriority) };


    // passwordInitializationType Field Functions 
    bool hasPasswordInitializationType() const { return this->passwordInitializationType_ != nullptr;};
    void deletePasswordInitializationType() { this->passwordInitializationType_ = nullptr;};
    inline string passwordInitializationType() const { DARABONBA_PTR_GET_DEFAULT(passwordInitializationType_, "") };
    inline CreateUserRequestPasswordInitializationConfig& setPasswordInitializationType(string passwordInitializationType) { DARABONBA_PTR_SET_VALUE(passwordInitializationType_, passwordInitializationType) };


    // userNotificationChannels Field Functions 
    bool hasUserNotificationChannels() const { return this->userNotificationChannels_ != nullptr;};
    void deleteUserNotificationChannels() { this->userNotificationChannels_ = nullptr;};
    inline const vector<string> & userNotificationChannels() const { DARABONBA_PTR_GET_CONST(userNotificationChannels_, vector<string>) };
    inline vector<string> userNotificationChannels() { DARABONBA_PTR_GET(userNotificationChannels_, vector<string>) };
    inline CreateUserRequestPasswordInitializationConfig& setUserNotificationChannels(const vector<string> & userNotificationChannels) { DARABONBA_PTR_SET_VALUE(userNotificationChannels_, userNotificationChannels) };
    inline CreateUserRequestPasswordInitializationConfig& setUserNotificationChannels(vector<string> && userNotificationChannels) { DARABONBA_PTR_SET_RVALUE(userNotificationChannels_, userNotificationChannels) };


  protected:
    // Specifies whether to forcibly change the password status. Default value: disabled. Valid values:
    // *   enabled:forcibly changes the password status.
    // * disabled: does not forcibly change the password status.
    std::shared_ptr<string> passwordForcedUpdateStatus_ = nullptr;
    // The priority of the password initialization policy. By default, this parameter does not take effect. Valid values:
    // *   global:The password initialization policy globally takes effect.
    // *   custom: The password initialization policy takes effect based on custom settings.
    std::shared_ptr<string> passwordInitializationPolicyPriority_ = nullptr;
    // The password initialization method. Set the value to random,
    // *   whichindicates that the password is randomly generated.
    std::shared_ptr<string> passwordInitializationType_ = nullptr;
    // The value of the extended field. The value follows the limits on the properties of the extended field.
    std::shared_ptr<vector<string>> userNotificationChannels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
