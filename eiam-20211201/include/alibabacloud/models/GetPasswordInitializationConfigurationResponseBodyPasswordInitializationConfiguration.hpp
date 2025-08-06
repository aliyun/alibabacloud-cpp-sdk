// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDINITIALIZATIONCONFIGURATIONRESPONSEBODYPASSWORDINITIALIZATIONCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDINITIALIZATIONCONFIGURATIONRESPONSEBODYPASSWORDINITIALIZATIONCONFIGURATION_HPP_
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
  class GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordForcedUpdateStatus, passwordForcedUpdateStatus_);
      DARABONBA_PTR_TO_JSON(PasswordInitializationNotificationChannels, passwordInitializationNotificationChannels_);
      DARABONBA_PTR_TO_JSON(PasswordInitializationStatus, passwordInitializationStatus_);
      DARABONBA_PTR_TO_JSON(PasswordInitializationType, passwordInitializationType_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordForcedUpdateStatus, passwordForcedUpdateStatus_);
      DARABONBA_PTR_FROM_JSON(PasswordInitializationNotificationChannels, passwordInitializationNotificationChannels_);
      DARABONBA_PTR_FROM_JSON(PasswordInitializationStatus, passwordInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(PasswordInitializationType, passwordInitializationType_);
    };
    GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration() = default ;
    GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration(const GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration &) = default ;
    GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration(GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration &&) = default ;
    GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration() = default ;
    GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration& operator=(const GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration &) = default ;
    GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration& operator=(GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passwordForcedUpdateStatus_ != nullptr
        && this->passwordInitializationNotificationChannels_ != nullptr && this->passwordInitializationStatus_ != nullptr && this->passwordInitializationType_ != nullptr; };
    // passwordForcedUpdateStatus Field Functions 
    bool hasPasswordForcedUpdateStatus() const { return this->passwordForcedUpdateStatus_ != nullptr;};
    void deletePasswordForcedUpdateStatus() { this->passwordForcedUpdateStatus_ = nullptr;};
    inline string passwordForcedUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordForcedUpdateStatus_, "") };
    inline GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration& setPasswordForcedUpdateStatus(string passwordForcedUpdateStatus) { DARABONBA_PTR_SET_VALUE(passwordForcedUpdateStatus_, passwordForcedUpdateStatus) };


    // passwordInitializationNotificationChannels Field Functions 
    bool hasPasswordInitializationNotificationChannels() const { return this->passwordInitializationNotificationChannels_ != nullptr;};
    void deletePasswordInitializationNotificationChannels() { this->passwordInitializationNotificationChannels_ = nullptr;};
    inline const vector<string> & passwordInitializationNotificationChannels() const { DARABONBA_PTR_GET_CONST(passwordInitializationNotificationChannels_, vector<string>) };
    inline vector<string> passwordInitializationNotificationChannels() { DARABONBA_PTR_GET(passwordInitializationNotificationChannels_, vector<string>) };
    inline GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration& setPasswordInitializationNotificationChannels(const vector<string> & passwordInitializationNotificationChannels) { DARABONBA_PTR_SET_VALUE(passwordInitializationNotificationChannels_, passwordInitializationNotificationChannels) };
    inline GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration& setPasswordInitializationNotificationChannels(vector<string> && passwordInitializationNotificationChannels) { DARABONBA_PTR_SET_RVALUE(passwordInitializationNotificationChannels_, passwordInitializationNotificationChannels) };


    // passwordInitializationStatus Field Functions 
    bool hasPasswordInitializationStatus() const { return this->passwordInitializationStatus_ != nullptr;};
    void deletePasswordInitializationStatus() { this->passwordInitializationStatus_ = nullptr;};
    inline string passwordInitializationStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordInitializationStatus_, "") };
    inline GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration& setPasswordInitializationStatus(string passwordInitializationStatus) { DARABONBA_PTR_SET_VALUE(passwordInitializationStatus_, passwordInitializationStatus) };


    // passwordInitializationType Field Functions 
    bool hasPasswordInitializationType() const { return this->passwordInitializationType_ != nullptr;};
    void deletePasswordInitializationType() { this->passwordInitializationType_ = nullptr;};
    inline string passwordInitializationType() const { DARABONBA_PTR_GET_DEFAULT(passwordInitializationType_, "") };
    inline GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration& setPasswordInitializationType(string passwordInitializationType) { DARABONBA_PTR_SET_VALUE(passwordInitializationType_, passwordInitializationType) };


  protected:
    // Indicates whether forcible password change upon first logon is enabled. Valid values:
    // 
    // *   enabled
    // *   disabled
    std::shared_ptr<string> passwordForcedUpdateStatus_ = nullptr;
    // The methods for receiving password initialization notifications.
    std::shared_ptr<vector<string>> passwordInitializationNotificationChannels_ = nullptr;
    // Indicates whether the password initialization feature is enabled. Valid values:
    // 
    // *   enabled
    // *   disabled
    std::shared_ptr<string> passwordInitializationStatus_ = nullptr;
    // The password initialization method. Set the value to random.
    // 
    // *   random: A randomly generated password is used.
    std::shared_ptr<string> passwordInitializationType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
