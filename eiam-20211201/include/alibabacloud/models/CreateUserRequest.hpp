// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERREQUEST_HPP_
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
  class CreateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CustomFields, customFields_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EmailVerified, emailVerified_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitIds, organizationalUnitIds_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInitializationConfig, passwordInitializationConfig_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(PhoneNumberVerified, phoneNumberVerified_);
      DARABONBA_PTR_TO_JSON(PhoneRegion, phoneRegion_);
      DARABONBA_PTR_TO_JSON(PrimaryOrganizationalUnitId, primaryOrganizationalUnitId_);
      DARABONBA_PTR_TO_JSON(UserExternalId, userExternalId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CustomFields, customFields_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EmailVerified, emailVerified_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitIds, organizationalUnitIds_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInitializationConfig, passwordInitializationConfig_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(PhoneNumberVerified, phoneNumberVerified_);
      DARABONBA_PTR_FROM_JSON(PhoneRegion, phoneRegion_);
      DARABONBA_PTR_FROM_JSON(PrimaryOrganizationalUnitId, primaryOrganizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(UserExternalId, userExternalId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    CreateUserRequest() = default ;
    CreateUserRequest(const CreateUserRequest &) = default ;
    CreateUserRequest(CreateUserRequest &&) = default ;
    CreateUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserRequest() = default ;
    CreateUserRequest& operator=(const CreateUserRequest &) = default ;
    CreateUserRequest& operator=(CreateUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PasswordInitializationConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PasswordInitializationConfig& obj) { 
        DARABONBA_PTR_TO_JSON(PasswordForcedUpdateStatus, passwordForcedUpdateStatus_);
        DARABONBA_PTR_TO_JSON(PasswordInitializationPolicyPriority, passwordInitializationPolicyPriority_);
        DARABONBA_PTR_TO_JSON(PasswordInitializationType, passwordInitializationType_);
        DARABONBA_PTR_TO_JSON(UserNotificationChannels, userNotificationChannels_);
      };
      friend void from_json(const Darabonba::Json& j, PasswordInitializationConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(PasswordForcedUpdateStatus, passwordForcedUpdateStatus_);
        DARABONBA_PTR_FROM_JSON(PasswordInitializationPolicyPriority, passwordInitializationPolicyPriority_);
        DARABONBA_PTR_FROM_JSON(PasswordInitializationType, passwordInitializationType_);
        DARABONBA_PTR_FROM_JSON(UserNotificationChannels, userNotificationChannels_);
      };
      PasswordInitializationConfig() = default ;
      PasswordInitializationConfig(const PasswordInitializationConfig &) = default ;
      PasswordInitializationConfig(PasswordInitializationConfig &&) = default ;
      PasswordInitializationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PasswordInitializationConfig() = default ;
      PasswordInitializationConfig& operator=(const PasswordInitializationConfig &) = default ;
      PasswordInitializationConfig& operator=(PasswordInitializationConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->passwordForcedUpdateStatus_ == nullptr
        && this->passwordInitializationPolicyPriority_ == nullptr && this->passwordInitializationType_ == nullptr && this->userNotificationChannels_ == nullptr; };
      // passwordForcedUpdateStatus Field Functions 
      bool hasPasswordForcedUpdateStatus() const { return this->passwordForcedUpdateStatus_ != nullptr;};
      void deletePasswordForcedUpdateStatus() { this->passwordForcedUpdateStatus_ = nullptr;};
      inline string getPasswordForcedUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordForcedUpdateStatus_, "") };
      inline PasswordInitializationConfig& setPasswordForcedUpdateStatus(string passwordForcedUpdateStatus) { DARABONBA_PTR_SET_VALUE(passwordForcedUpdateStatus_, passwordForcedUpdateStatus) };


      // passwordInitializationPolicyPriority Field Functions 
      bool hasPasswordInitializationPolicyPriority() const { return this->passwordInitializationPolicyPriority_ != nullptr;};
      void deletePasswordInitializationPolicyPriority() { this->passwordInitializationPolicyPriority_ = nullptr;};
      inline string getPasswordInitializationPolicyPriority() const { DARABONBA_PTR_GET_DEFAULT(passwordInitializationPolicyPriority_, "") };
      inline PasswordInitializationConfig& setPasswordInitializationPolicyPriority(string passwordInitializationPolicyPriority) { DARABONBA_PTR_SET_VALUE(passwordInitializationPolicyPriority_, passwordInitializationPolicyPriority) };


      // passwordInitializationType Field Functions 
      bool hasPasswordInitializationType() const { return this->passwordInitializationType_ != nullptr;};
      void deletePasswordInitializationType() { this->passwordInitializationType_ = nullptr;};
      inline string getPasswordInitializationType() const { DARABONBA_PTR_GET_DEFAULT(passwordInitializationType_, "") };
      inline PasswordInitializationConfig& setPasswordInitializationType(string passwordInitializationType) { DARABONBA_PTR_SET_VALUE(passwordInitializationType_, passwordInitializationType) };


      // userNotificationChannels Field Functions 
      bool hasUserNotificationChannels() const { return this->userNotificationChannels_ != nullptr;};
      void deleteUserNotificationChannels() { this->userNotificationChannels_ = nullptr;};
      inline const vector<string> & getUserNotificationChannels() const { DARABONBA_PTR_GET_CONST(userNotificationChannels_, vector<string>) };
      inline vector<string> getUserNotificationChannels() { DARABONBA_PTR_GET(userNotificationChannels_, vector<string>) };
      inline PasswordInitializationConfig& setUserNotificationChannels(const vector<string> & userNotificationChannels) { DARABONBA_PTR_SET_VALUE(userNotificationChannels_, userNotificationChannels) };
      inline PasswordInitializationConfig& setUserNotificationChannels(vector<string> && userNotificationChannels) { DARABONBA_PTR_SET_RVALUE(userNotificationChannels_, userNotificationChannels) };


    protected:
      // Specifies whether to forcibly change the password status. Default value: disabled. Valid values:
      // *   enabled:forcibly changes the password status.
      // * disabled: does not forcibly change the password status.
      shared_ptr<string> passwordForcedUpdateStatus_ {};
      // The priority of the password initialization policy. By default, this parameter does not take effect. Valid values:
      // *   global:The password initialization policy globally takes effect.
      // *   custom: The password initialization policy takes effect based on custom settings.
      shared_ptr<string> passwordInitializationPolicyPriority_ {};
      // The password initialization method. Set the value to random,
      // *   whichindicates that the password is randomly generated.
      shared_ptr<string> passwordInitializationType_ {};
      // The value of the extended field. The value follows the limits on the properties of the extended field.
      shared_ptr<vector<string>> userNotificationChannels_ {};
    };

    class CustomFields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomFields& obj) { 
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      };
      friend void from_json(const Darabonba::Json& j, CustomFields& obj) { 
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      };
      CustomFields() = default ;
      CustomFields(const CustomFields &) = default ;
      CustomFields(CustomFields &&) = default ;
      CustomFields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomFields() = default ;
      CustomFields& operator=(const CustomFields &) = default ;
      CustomFields& operator=(CustomFields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fieldName_ == nullptr
        && this->fieldValue_ == nullptr; };
      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline CustomFields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // fieldValue Field Functions 
      bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
      void deleteFieldValue() { this->fieldValue_ = nullptr;};
      inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
      inline CustomFields& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    protected:
      // The name of the extended field. You must create the extended field in advance. To create an extended field, log on to the IDaaS console. In the left-side navigation pane, choose Accounts > Extended Fields, and then click Create Field on the Extended Fields page.
      shared_ptr<string> fieldName_ {};
      // The value of the extended field. The value follows the limits on the properties of the extended field.
      shared_ptr<string> fieldValue_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->customFields_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->email_ == nullptr && this->emailVerified_ == nullptr
        && this->instanceId_ == nullptr && this->organizationalUnitIds_ == nullptr && this->password_ == nullptr && this->passwordInitializationConfig_ == nullptr && this->phoneNumber_ == nullptr
        && this->phoneNumberVerified_ == nullptr && this->phoneRegion_ == nullptr && this->primaryOrganizationalUnitId_ == nullptr && this->userExternalId_ == nullptr && this->username_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateUserRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<CreateUserRequest::CustomFields> & getCustomFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<CreateUserRequest::CustomFields>) };
    inline vector<CreateUserRequest::CustomFields> getCustomFields() { DARABONBA_PTR_GET(customFields_, vector<CreateUserRequest::CustomFields>) };
    inline CreateUserRequest& setCustomFields(const vector<CreateUserRequest::CustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline CreateUserRequest& setCustomFields(vector<CreateUserRequest::CustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUserRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateUserRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateUserRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerified Field Functions 
    bool hasEmailVerified() const { return this->emailVerified_ != nullptr;};
    void deleteEmailVerified() { this->emailVerified_ = nullptr;};
    inline bool getEmailVerified() const { DARABONBA_PTR_GET_DEFAULT(emailVerified_, false) };
    inline CreateUserRequest& setEmailVerified(bool emailVerified) { DARABONBA_PTR_SET_VALUE(emailVerified_, emailVerified) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // organizationalUnitIds Field Functions 
    bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
    void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
    inline const vector<string> & getOrganizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
    inline vector<string> getOrganizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
    inline CreateUserRequest& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
    inline CreateUserRequest& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateUserRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInitializationConfig Field Functions 
    bool hasPasswordInitializationConfig() const { return this->passwordInitializationConfig_ != nullptr;};
    void deletePasswordInitializationConfig() { this->passwordInitializationConfig_ = nullptr;};
    inline const CreateUserRequest::PasswordInitializationConfig & getPasswordInitializationConfig() const { DARABONBA_PTR_GET_CONST(passwordInitializationConfig_, CreateUserRequest::PasswordInitializationConfig) };
    inline CreateUserRequest::PasswordInitializationConfig getPasswordInitializationConfig() { DARABONBA_PTR_GET(passwordInitializationConfig_, CreateUserRequest::PasswordInitializationConfig) };
    inline CreateUserRequest& setPasswordInitializationConfig(const CreateUserRequest::PasswordInitializationConfig & passwordInitializationConfig) { DARABONBA_PTR_SET_VALUE(passwordInitializationConfig_, passwordInitializationConfig) };
    inline CreateUserRequest& setPasswordInitializationConfig(CreateUserRequest::PasswordInitializationConfig && passwordInitializationConfig) { DARABONBA_PTR_SET_RVALUE(passwordInitializationConfig_, passwordInitializationConfig) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline CreateUserRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // phoneNumberVerified Field Functions 
    bool hasPhoneNumberVerified() const { return this->phoneNumberVerified_ != nullptr;};
    void deletePhoneNumberVerified() { this->phoneNumberVerified_ = nullptr;};
    inline bool getPhoneNumberVerified() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberVerified_, false) };
    inline CreateUserRequest& setPhoneNumberVerified(bool phoneNumberVerified) { DARABONBA_PTR_SET_VALUE(phoneNumberVerified_, phoneNumberVerified) };


    // phoneRegion Field Functions 
    bool hasPhoneRegion() const { return this->phoneRegion_ != nullptr;};
    void deletePhoneRegion() { this->phoneRegion_ = nullptr;};
    inline string getPhoneRegion() const { DARABONBA_PTR_GET_DEFAULT(phoneRegion_, "") };
    inline CreateUserRequest& setPhoneRegion(string phoneRegion) { DARABONBA_PTR_SET_VALUE(phoneRegion_, phoneRegion) };


    // primaryOrganizationalUnitId Field Functions 
    bool hasPrimaryOrganizationalUnitId() const { return this->primaryOrganizationalUnitId_ != nullptr;};
    void deletePrimaryOrganizationalUnitId() { this->primaryOrganizationalUnitId_ = nullptr;};
    inline string getPrimaryOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(primaryOrganizationalUnitId_, "") };
    inline CreateUserRequest& setPrimaryOrganizationalUnitId(string primaryOrganizationalUnitId) { DARABONBA_PTR_SET_VALUE(primaryOrganizationalUnitId_, primaryOrganizationalUnitId) };


    // userExternalId Field Functions 
    bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
    void deleteUserExternalId() { this->userExternalId_ = nullptr;};
    inline string getUserExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
    inline CreateUserRequest& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateUserRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The password initialization method. Set the value to random,
    // 
    // *   which indicates that the password is randomly generated.
    shared_ptr<string> clientToken_ {};
    // The custom extended fields.
    shared_ptr<vector<CreateUserRequest::CustomFields>> customFields_ {};
    // The description of the organization. The value can be up to 256 characters in length.
    shared_ptr<string> description_ {};
    // The display name of the account. The display name can be up to 64 characters in length.
    shared_ptr<string> displayName_ {};
    // The name of the account. The name can be up to 64 characters in length and can contain letters, digits, underscores (_), periods (.), at signs (@), and hyphens (-).
    shared_ptr<string> email_ {};
    // The description of the account. The description can be up to 256 characters in length.
    shared_ptr<bool> emailVerified_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether the mobile phone number is a trusted mobile phone number. This parameter is required if the PhoneNumber parameter is specified. If you have no special business requirements, set this parameter to true.
    shared_ptr<vector<string>> organizationalUnitIds_ {};
    // The password of the account. For more information,view the password policyof the instanceinthe IDaaS console.
    shared_ptr<string> password_ {};
    // The configurations for password initialization.
    shared_ptr<CreateUserRequest::PasswordInitializationConfig> passwordInitializationConfig_ {};
    // The ID of the account.
    shared_ptr<string> phoneNumber_ {};
    // The email address of the user who owns the account. The email address prefix can contain letters, digits, underscores (_), periods (.), and hyphens (-).
    shared_ptr<bool> phoneNumberVerified_ {};
    // The IDs of organizational units to which the account belongs. An account can belong to multiple organizational units.
    shared_ptr<string> phoneRegion_ {};
    // 主组织ID。
    // 
    // This parameter is required.
    shared_ptr<string> primaryOrganizationalUnitId_ {};
    // The display name of the account. The display name can be up to 64 characters in length.
    shared_ptr<string> userExternalId_ {};
    // The name of the extended field. You must create the extended field in advance. To create an extended field, log on to the IDaaS console. In the left-side navigation pane, choose Accounts > Extended Fields, and then click Create Field on the Extended Fields page.
    // 
    // This parameter is required.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
