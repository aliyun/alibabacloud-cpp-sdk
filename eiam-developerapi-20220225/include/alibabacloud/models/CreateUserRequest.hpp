// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateUserRequestCustomFields.hpp>
#include <alibabacloud/models/CreateUserRequestPasswordInitializationConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class CreateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(customFields, customFields_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(emailVerified, emailVerified_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(passwordInitializationConfig, passwordInitializationConfig_);
      DARABONBA_PTR_TO_JSON(phoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(phoneNumberVerified, phoneNumberVerified_);
      DARABONBA_PTR_TO_JSON(phoneRegion, phoneRegion_);
      DARABONBA_PTR_TO_JSON(primaryOrganizationalUnitId, primaryOrganizationalUnitId_);
      DARABONBA_PTR_TO_JSON(userExternalId, userExternalId_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(customFields, customFields_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(emailVerified, emailVerified_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(passwordInitializationConfig, passwordInitializationConfig_);
      DARABONBA_PTR_FROM_JSON(phoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(phoneNumberVerified, phoneNumberVerified_);
      DARABONBA_PTR_FROM_JSON(phoneRegion, phoneRegion_);
      DARABONBA_PTR_FROM_JSON(primaryOrganizationalUnitId, primaryOrganizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(userExternalId, userExternalId_);
      DARABONBA_PTR_FROM_JSON(username, username_);
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
    virtual bool empty() const override { return this->customFields_ == nullptr
        && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->email_ == nullptr && return this->emailVerified_ == nullptr && return this->password_ == nullptr
        && return this->passwordInitializationConfig_ == nullptr && return this->phoneNumber_ == nullptr && return this->phoneNumberVerified_ == nullptr && return this->phoneRegion_ == nullptr && return this->primaryOrganizationalUnitId_ == nullptr
        && return this->userExternalId_ == nullptr && return this->username_ == nullptr; };
    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<CreateUserRequestCustomFields> & customFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<CreateUserRequestCustomFields>) };
    inline vector<CreateUserRequestCustomFields> customFields() { DARABONBA_PTR_GET(customFields_, vector<CreateUserRequestCustomFields>) };
    inline CreateUserRequest& setCustomFields(const vector<CreateUserRequestCustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline CreateUserRequest& setCustomFields(vector<CreateUserRequestCustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUserRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateUserRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateUserRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerified Field Functions 
    bool hasEmailVerified() const { return this->emailVerified_ != nullptr;};
    void deleteEmailVerified() { this->emailVerified_ = nullptr;};
    inline bool emailVerified() const { DARABONBA_PTR_GET_DEFAULT(emailVerified_, false) };
    inline CreateUserRequest& setEmailVerified(bool emailVerified) { DARABONBA_PTR_SET_VALUE(emailVerified_, emailVerified) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateUserRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInitializationConfig Field Functions 
    bool hasPasswordInitializationConfig() const { return this->passwordInitializationConfig_ != nullptr;};
    void deletePasswordInitializationConfig() { this->passwordInitializationConfig_ = nullptr;};
    inline const CreateUserRequestPasswordInitializationConfig & passwordInitializationConfig() const { DARABONBA_PTR_GET_CONST(passwordInitializationConfig_, CreateUserRequestPasswordInitializationConfig) };
    inline CreateUserRequestPasswordInitializationConfig passwordInitializationConfig() { DARABONBA_PTR_GET(passwordInitializationConfig_, CreateUserRequestPasswordInitializationConfig) };
    inline CreateUserRequest& setPasswordInitializationConfig(const CreateUserRequestPasswordInitializationConfig & passwordInitializationConfig) { DARABONBA_PTR_SET_VALUE(passwordInitializationConfig_, passwordInitializationConfig) };
    inline CreateUserRequest& setPasswordInitializationConfig(CreateUserRequestPasswordInitializationConfig && passwordInitializationConfig) { DARABONBA_PTR_SET_RVALUE(passwordInitializationConfig_, passwordInitializationConfig) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline CreateUserRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // phoneNumberVerified Field Functions 
    bool hasPhoneNumberVerified() const { return this->phoneNumberVerified_ != nullptr;};
    void deletePhoneNumberVerified() { this->phoneNumberVerified_ = nullptr;};
    inline bool phoneNumberVerified() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberVerified_, false) };
    inline CreateUserRequest& setPhoneNumberVerified(bool phoneNumberVerified) { DARABONBA_PTR_SET_VALUE(phoneNumberVerified_, phoneNumberVerified) };


    // phoneRegion Field Functions 
    bool hasPhoneRegion() const { return this->phoneRegion_ != nullptr;};
    void deletePhoneRegion() { this->phoneRegion_ = nullptr;};
    inline string phoneRegion() const { DARABONBA_PTR_GET_DEFAULT(phoneRegion_, "") };
    inline CreateUserRequest& setPhoneRegion(string phoneRegion) { DARABONBA_PTR_SET_VALUE(phoneRegion_, phoneRegion) };


    // primaryOrganizationalUnitId Field Functions 
    bool hasPrimaryOrganizationalUnitId() const { return this->primaryOrganizationalUnitId_ != nullptr;};
    void deletePrimaryOrganizationalUnitId() { this->primaryOrganizationalUnitId_ = nullptr;};
    inline string primaryOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(primaryOrganizationalUnitId_, "") };
    inline CreateUserRequest& setPrimaryOrganizationalUnitId(string primaryOrganizationalUnitId) { DARABONBA_PTR_SET_VALUE(primaryOrganizationalUnitId_, primaryOrganizationalUnitId) };


    // userExternalId Field Functions 
    bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
    void deleteUserExternalId() { this->userExternalId_ = nullptr;};
    inline string userExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
    inline CreateUserRequest& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateUserRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // Custom fields
    std::shared_ptr<vector<CreateUserRequestCustomFields>> customFields_ = nullptr;
    // The description of the account. The description can be up to 256 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the account. The display name can be up to 64 characters in length.
    std::shared_ptr<string> displayName_ = nullptr;
    // The email address of the user who owns the account.
    std::shared_ptr<string> email_ = nullptr;
    // Indicates whether the email address is verified. This field is required if an email address is specified. If you have no special requirement, set this parameter to true.
    std::shared_ptr<bool> emailVerified_ = nullptr;
    // The password of the account. For information about the password rules, go to the Create User panel in the Identity as a Service (IDaaS) console.
    std::shared_ptr<string> password_ = nullptr;
    // Configure the initial password
    std::shared_ptr<CreateUserRequestPasswordInitializationConfig> passwordInitializationConfig_ = nullptr;
    // The mobile number of the user who owns the account.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    // Indicates whether the mobile number is verified. This field is required if a mobile number is specified. If you have no special requirement, set this parameter to true.
    std::shared_ptr<bool> phoneNumberVerified_ = nullptr;
    // The country code of the mobile number. For example, the country code of China is 86 without 00 or +. This parameter is required if a mobile number is specified.
    std::shared_ptr<string> phoneRegion_ = nullptr;
    // The ID of the primary organizational unit.
    // 
    // This parameter is required.
    std::shared_ptr<string> primaryOrganizationalUnitId_ = nullptr;
    // The external ID of the account. The external ID can be used to map external data to the data of the account in EIAM of Identity as a Service (IDaaS). By default, the external ID is the account ID.
    std::shared_ptr<string> userExternalId_ = nullptr;
    // The username of the account.
    // 
    // This parameter is required.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
