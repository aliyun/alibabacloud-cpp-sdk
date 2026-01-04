// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDINITIALIZATIONCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDINITIALIZATIONCONFIGURATIONRESPONSEBODY_HPP_
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
  class GetPasswordInitializationConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordInitializationConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordInitializationConfiguration, passwordInitializationConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordInitializationConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordInitializationConfiguration, passwordInitializationConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPasswordInitializationConfigurationResponseBody() = default ;
    GetPasswordInitializationConfigurationResponseBody(const GetPasswordInitializationConfigurationResponseBody &) = default ;
    GetPasswordInitializationConfigurationResponseBody(GetPasswordInitializationConfigurationResponseBody &&) = default ;
    GetPasswordInitializationConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordInitializationConfigurationResponseBody() = default ;
    GetPasswordInitializationConfigurationResponseBody& operator=(const GetPasswordInitializationConfigurationResponseBody &) = default ;
    GetPasswordInitializationConfigurationResponseBody& operator=(GetPasswordInitializationConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PasswordInitializationConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PasswordInitializationConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(PasswordForcedUpdateStatus, passwordForcedUpdateStatus_);
        DARABONBA_PTR_TO_JSON(PasswordInitializationNotificationChannels, passwordInitializationNotificationChannels_);
        DARABONBA_PTR_TO_JSON(PasswordInitializationStatus, passwordInitializationStatus_);
        DARABONBA_PTR_TO_JSON(PasswordInitializationType, passwordInitializationType_);
      };
      friend void from_json(const Darabonba::Json& j, PasswordInitializationConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(PasswordForcedUpdateStatus, passwordForcedUpdateStatus_);
        DARABONBA_PTR_FROM_JSON(PasswordInitializationNotificationChannels, passwordInitializationNotificationChannels_);
        DARABONBA_PTR_FROM_JSON(PasswordInitializationStatus, passwordInitializationStatus_);
        DARABONBA_PTR_FROM_JSON(PasswordInitializationType, passwordInitializationType_);
      };
      PasswordInitializationConfiguration() = default ;
      PasswordInitializationConfiguration(const PasswordInitializationConfiguration &) = default ;
      PasswordInitializationConfiguration(PasswordInitializationConfiguration &&) = default ;
      PasswordInitializationConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PasswordInitializationConfiguration() = default ;
      PasswordInitializationConfiguration& operator=(const PasswordInitializationConfiguration &) = default ;
      PasswordInitializationConfiguration& operator=(PasswordInitializationConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->passwordForcedUpdateStatus_ == nullptr
        && this->passwordInitializationNotificationChannels_ == nullptr && this->passwordInitializationStatus_ == nullptr && this->passwordInitializationType_ == nullptr; };
      // passwordForcedUpdateStatus Field Functions 
      bool hasPasswordForcedUpdateStatus() const { return this->passwordForcedUpdateStatus_ != nullptr;};
      void deletePasswordForcedUpdateStatus() { this->passwordForcedUpdateStatus_ = nullptr;};
      inline string getPasswordForcedUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordForcedUpdateStatus_, "") };
      inline PasswordInitializationConfiguration& setPasswordForcedUpdateStatus(string passwordForcedUpdateStatus) { DARABONBA_PTR_SET_VALUE(passwordForcedUpdateStatus_, passwordForcedUpdateStatus) };


      // passwordInitializationNotificationChannels Field Functions 
      bool hasPasswordInitializationNotificationChannels() const { return this->passwordInitializationNotificationChannels_ != nullptr;};
      void deletePasswordInitializationNotificationChannels() { this->passwordInitializationNotificationChannels_ = nullptr;};
      inline const vector<string> & getPasswordInitializationNotificationChannels() const { DARABONBA_PTR_GET_CONST(passwordInitializationNotificationChannels_, vector<string>) };
      inline vector<string> getPasswordInitializationNotificationChannels() { DARABONBA_PTR_GET(passwordInitializationNotificationChannels_, vector<string>) };
      inline PasswordInitializationConfiguration& setPasswordInitializationNotificationChannels(const vector<string> & passwordInitializationNotificationChannels) { DARABONBA_PTR_SET_VALUE(passwordInitializationNotificationChannels_, passwordInitializationNotificationChannels) };
      inline PasswordInitializationConfiguration& setPasswordInitializationNotificationChannels(vector<string> && passwordInitializationNotificationChannels) { DARABONBA_PTR_SET_RVALUE(passwordInitializationNotificationChannels_, passwordInitializationNotificationChannels) };


      // passwordInitializationStatus Field Functions 
      bool hasPasswordInitializationStatus() const { return this->passwordInitializationStatus_ != nullptr;};
      void deletePasswordInitializationStatus() { this->passwordInitializationStatus_ = nullptr;};
      inline string getPasswordInitializationStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordInitializationStatus_, "") };
      inline PasswordInitializationConfiguration& setPasswordInitializationStatus(string passwordInitializationStatus) { DARABONBA_PTR_SET_VALUE(passwordInitializationStatus_, passwordInitializationStatus) };


      // passwordInitializationType Field Functions 
      bool hasPasswordInitializationType() const { return this->passwordInitializationType_ != nullptr;};
      void deletePasswordInitializationType() { this->passwordInitializationType_ = nullptr;};
      inline string getPasswordInitializationType() const { DARABONBA_PTR_GET_DEFAULT(passwordInitializationType_, "") };
      inline PasswordInitializationConfiguration& setPasswordInitializationType(string passwordInitializationType) { DARABONBA_PTR_SET_VALUE(passwordInitializationType_, passwordInitializationType) };


    protected:
      // Indicates whether forcible password change upon first logon is enabled. Valid values:
      // 
      // *   enabled
      // *   disabled
      shared_ptr<string> passwordForcedUpdateStatus_ {};
      // The methods for receiving password initialization notifications.
      shared_ptr<vector<string>> passwordInitializationNotificationChannels_ {};
      // Indicates whether the password initialization feature is enabled. Valid values:
      // 
      // *   enabled
      // *   disabled
      shared_ptr<string> passwordInitializationStatus_ {};
      // The password initialization method. Set the value to random.
      // 
      // *   random: A randomly generated password is used.
      shared_ptr<string> passwordInitializationType_ {};
    };

    virtual bool empty() const override { return this->passwordInitializationConfiguration_ == nullptr
        && this->requestId_ == nullptr; };
    // passwordInitializationConfiguration Field Functions 
    bool hasPasswordInitializationConfiguration() const { return this->passwordInitializationConfiguration_ != nullptr;};
    void deletePasswordInitializationConfiguration() { this->passwordInitializationConfiguration_ = nullptr;};
    inline const GetPasswordInitializationConfigurationResponseBody::PasswordInitializationConfiguration & getPasswordInitializationConfiguration() const { DARABONBA_PTR_GET_CONST(passwordInitializationConfiguration_, GetPasswordInitializationConfigurationResponseBody::PasswordInitializationConfiguration) };
    inline GetPasswordInitializationConfigurationResponseBody::PasswordInitializationConfiguration getPasswordInitializationConfiguration() { DARABONBA_PTR_GET(passwordInitializationConfiguration_, GetPasswordInitializationConfigurationResponseBody::PasswordInitializationConfiguration) };
    inline GetPasswordInitializationConfigurationResponseBody& setPasswordInitializationConfiguration(const GetPasswordInitializationConfigurationResponseBody::PasswordInitializationConfiguration & passwordInitializationConfiguration) { DARABONBA_PTR_SET_VALUE(passwordInitializationConfiguration_, passwordInitializationConfiguration) };
    inline GetPasswordInitializationConfigurationResponseBody& setPasswordInitializationConfiguration(GetPasswordInitializationConfigurationResponseBody::PasswordInitializationConfiguration && passwordInitializationConfiguration) { DARABONBA_PTR_SET_RVALUE(passwordInitializationConfiguration_, passwordInitializationConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPasswordInitializationConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The password initialization configurations.
    shared_ptr<GetPasswordInitializationConfigurationResponseBody::PasswordInitializationConfiguration> passwordInitializationConfiguration_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
