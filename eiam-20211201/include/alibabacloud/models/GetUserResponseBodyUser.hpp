// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSER_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUserResponseBodyUserCustomFields.hpp>
#include <alibabacloud/models/GetUserResponseBodyUserGroups.hpp>
#include <alibabacloud/models/GetUserResponseBodyUserOrganizationalUnits.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetUserResponseBodyUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyUser& obj) { 
      DARABONBA_PTR_TO_JSON(AccountExpireTime, accountExpireTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomFields, customFields_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EmailVerified, emailVerified_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LockExpireTime, lockExpireTime_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnits, organizationalUnits_);
      DARABONBA_PTR_TO_JSON(PasswordExpireTime, passwordExpireTime_);
      DARABONBA_PTR_TO_JSON(PasswordSet, passwordSet_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(PhoneNumberVerified, phoneNumberVerified_);
      DARABONBA_PTR_TO_JSON(PhoneRegion, phoneRegion_);
      DARABONBA_PTR_TO_JSON(PreferredLanguage, preferredLanguage_);
      DARABONBA_PTR_TO_JSON(PrimaryOrganizationalUnitId, primaryOrganizationalUnitId_);
      DARABONBA_PTR_TO_JSON(RegisterTime, registerTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserExternalId, userExternalId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserSourceId, userSourceId_);
      DARABONBA_PTR_TO_JSON(UserSourceType, userSourceType_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyUser& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountExpireTime, accountExpireTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomFields, customFields_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EmailVerified, emailVerified_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LockExpireTime, lockExpireTime_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnits, organizationalUnits_);
      DARABONBA_PTR_FROM_JSON(PasswordExpireTime, passwordExpireTime_);
      DARABONBA_PTR_FROM_JSON(PasswordSet, passwordSet_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(PhoneNumberVerified, phoneNumberVerified_);
      DARABONBA_PTR_FROM_JSON(PhoneRegion, phoneRegion_);
      DARABONBA_PTR_FROM_JSON(PreferredLanguage, preferredLanguage_);
      DARABONBA_PTR_FROM_JSON(PrimaryOrganizationalUnitId, primaryOrganizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(RegisterTime, registerTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserExternalId, userExternalId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserSourceId, userSourceId_);
      DARABONBA_PTR_FROM_JSON(UserSourceType, userSourceType_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    GetUserResponseBodyUser() = default ;
    GetUserResponseBodyUser(const GetUserResponseBodyUser &) = default ;
    GetUserResponseBodyUser(GetUserResponseBodyUser &&) = default ;
    GetUserResponseBodyUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyUser() = default ;
    GetUserResponseBodyUser& operator=(const GetUserResponseBodyUser &) = default ;
    GetUserResponseBodyUser& operator=(GetUserResponseBodyUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountExpireTime_ == nullptr
        && return this->createTime_ == nullptr && return this->customFields_ == nullptr && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->email_ == nullptr
        && return this->emailVerified_ == nullptr && return this->groups_ == nullptr && return this->instanceId_ == nullptr && return this->lockExpireTime_ == nullptr && return this->organizationalUnits_ == nullptr
        && return this->passwordExpireTime_ == nullptr && return this->passwordSet_ == nullptr && return this->phoneNumber_ == nullptr && return this->phoneNumberVerified_ == nullptr && return this->phoneRegion_ == nullptr
        && return this->preferredLanguage_ == nullptr && return this->primaryOrganizationalUnitId_ == nullptr && return this->registerTime_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr
        && return this->userExternalId_ == nullptr && return this->userId_ == nullptr && return this->userSourceId_ == nullptr && return this->userSourceType_ == nullptr && return this->username_ == nullptr; };
    // accountExpireTime Field Functions 
    bool hasAccountExpireTime() const { return this->accountExpireTime_ != nullptr;};
    void deleteAccountExpireTime() { this->accountExpireTime_ = nullptr;};
    inline int64_t accountExpireTime() const { DARABONBA_PTR_GET_DEFAULT(accountExpireTime_, 0L) };
    inline GetUserResponseBodyUser& setAccountExpireTime(int64_t accountExpireTime) { DARABONBA_PTR_SET_VALUE(accountExpireTime_, accountExpireTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetUserResponseBodyUser& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<Models::GetUserResponseBodyUserCustomFields> & customFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<Models::GetUserResponseBodyUserCustomFields>) };
    inline vector<Models::GetUserResponseBodyUserCustomFields> customFields() { DARABONBA_PTR_GET(customFields_, vector<Models::GetUserResponseBodyUserCustomFields>) };
    inline GetUserResponseBodyUser& setCustomFields(const vector<Models::GetUserResponseBodyUserCustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline GetUserResponseBodyUser& setCustomFields(vector<Models::GetUserResponseBodyUserCustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetUserResponseBodyUser& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetUserResponseBodyUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetUserResponseBodyUser& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerified Field Functions 
    bool hasEmailVerified() const { return this->emailVerified_ != nullptr;};
    void deleteEmailVerified() { this->emailVerified_ = nullptr;};
    inline bool emailVerified() const { DARABONBA_PTR_GET_DEFAULT(emailVerified_, false) };
    inline GetUserResponseBodyUser& setEmailVerified(bool emailVerified) { DARABONBA_PTR_SET_VALUE(emailVerified_, emailVerified) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<Models::GetUserResponseBodyUserGroups> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<Models::GetUserResponseBodyUserGroups>) };
    inline vector<Models::GetUserResponseBodyUserGroups> groups() { DARABONBA_PTR_GET(groups_, vector<Models::GetUserResponseBodyUserGroups>) };
    inline GetUserResponseBodyUser& setGroups(const vector<Models::GetUserResponseBodyUserGroups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline GetUserResponseBodyUser& setGroups(vector<Models::GetUserResponseBodyUserGroups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetUserResponseBodyUser& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lockExpireTime Field Functions 
    bool hasLockExpireTime() const { return this->lockExpireTime_ != nullptr;};
    void deleteLockExpireTime() { this->lockExpireTime_ = nullptr;};
    inline int64_t lockExpireTime() const { DARABONBA_PTR_GET_DEFAULT(lockExpireTime_, 0L) };
    inline GetUserResponseBodyUser& setLockExpireTime(int64_t lockExpireTime) { DARABONBA_PTR_SET_VALUE(lockExpireTime_, lockExpireTime) };


    // organizationalUnits Field Functions 
    bool hasOrganizationalUnits() const { return this->organizationalUnits_ != nullptr;};
    void deleteOrganizationalUnits() { this->organizationalUnits_ = nullptr;};
    inline const vector<Models::GetUserResponseBodyUserOrganizationalUnits> & organizationalUnits() const { DARABONBA_PTR_GET_CONST(organizationalUnits_, vector<Models::GetUserResponseBodyUserOrganizationalUnits>) };
    inline vector<Models::GetUserResponseBodyUserOrganizationalUnits> organizationalUnits() { DARABONBA_PTR_GET(organizationalUnits_, vector<Models::GetUserResponseBodyUserOrganizationalUnits>) };
    inline GetUserResponseBodyUser& setOrganizationalUnits(const vector<Models::GetUserResponseBodyUserOrganizationalUnits> & organizationalUnits) { DARABONBA_PTR_SET_VALUE(organizationalUnits_, organizationalUnits) };
    inline GetUserResponseBodyUser& setOrganizationalUnits(vector<Models::GetUserResponseBodyUserOrganizationalUnits> && organizationalUnits) { DARABONBA_PTR_SET_RVALUE(organizationalUnits_, organizationalUnits) };


    // passwordExpireTime Field Functions 
    bool hasPasswordExpireTime() const { return this->passwordExpireTime_ != nullptr;};
    void deletePasswordExpireTime() { this->passwordExpireTime_ = nullptr;};
    inline int64_t passwordExpireTime() const { DARABONBA_PTR_GET_DEFAULT(passwordExpireTime_, 0L) };
    inline GetUserResponseBodyUser& setPasswordExpireTime(int64_t passwordExpireTime) { DARABONBA_PTR_SET_VALUE(passwordExpireTime_, passwordExpireTime) };


    // passwordSet Field Functions 
    bool hasPasswordSet() const { return this->passwordSet_ != nullptr;};
    void deletePasswordSet() { this->passwordSet_ = nullptr;};
    inline bool passwordSet() const { DARABONBA_PTR_GET_DEFAULT(passwordSet_, false) };
    inline GetUserResponseBodyUser& setPasswordSet(bool passwordSet) { DARABONBA_PTR_SET_VALUE(passwordSet_, passwordSet) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetUserResponseBodyUser& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // phoneNumberVerified Field Functions 
    bool hasPhoneNumberVerified() const { return this->phoneNumberVerified_ != nullptr;};
    void deletePhoneNumberVerified() { this->phoneNumberVerified_ = nullptr;};
    inline bool phoneNumberVerified() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberVerified_, false) };
    inline GetUserResponseBodyUser& setPhoneNumberVerified(bool phoneNumberVerified) { DARABONBA_PTR_SET_VALUE(phoneNumberVerified_, phoneNumberVerified) };


    // phoneRegion Field Functions 
    bool hasPhoneRegion() const { return this->phoneRegion_ != nullptr;};
    void deletePhoneRegion() { this->phoneRegion_ = nullptr;};
    inline string phoneRegion() const { DARABONBA_PTR_GET_DEFAULT(phoneRegion_, "") };
    inline GetUserResponseBodyUser& setPhoneRegion(string phoneRegion) { DARABONBA_PTR_SET_VALUE(phoneRegion_, phoneRegion) };


    // preferredLanguage Field Functions 
    bool hasPreferredLanguage() const { return this->preferredLanguage_ != nullptr;};
    void deletePreferredLanguage() { this->preferredLanguage_ = nullptr;};
    inline string preferredLanguage() const { DARABONBA_PTR_GET_DEFAULT(preferredLanguage_, "") };
    inline GetUserResponseBodyUser& setPreferredLanguage(string preferredLanguage) { DARABONBA_PTR_SET_VALUE(preferredLanguage_, preferredLanguage) };


    // primaryOrganizationalUnitId Field Functions 
    bool hasPrimaryOrganizationalUnitId() const { return this->primaryOrganizationalUnitId_ != nullptr;};
    void deletePrimaryOrganizationalUnitId() { this->primaryOrganizationalUnitId_ = nullptr;};
    inline string primaryOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(primaryOrganizationalUnitId_, "") };
    inline GetUserResponseBodyUser& setPrimaryOrganizationalUnitId(string primaryOrganizationalUnitId) { DARABONBA_PTR_SET_VALUE(primaryOrganizationalUnitId_, primaryOrganizationalUnitId) };


    // registerTime Field Functions 
    bool hasRegisterTime() const { return this->registerTime_ != nullptr;};
    void deleteRegisterTime() { this->registerTime_ = nullptr;};
    inline int64_t registerTime() const { DARABONBA_PTR_GET_DEFAULT(registerTime_, 0L) };
    inline GetUserResponseBodyUser& setRegisterTime(int64_t registerTime) { DARABONBA_PTR_SET_VALUE(registerTime_, registerTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUserResponseBodyUser& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetUserResponseBodyUser& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userExternalId Field Functions 
    bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
    void deleteUserExternalId() { this->userExternalId_ = nullptr;};
    inline string userExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
    inline GetUserResponseBodyUser& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserResponseBodyUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userSourceId Field Functions 
    bool hasUserSourceId() const { return this->userSourceId_ != nullptr;};
    void deleteUserSourceId() { this->userSourceId_ = nullptr;};
    inline string userSourceId() const { DARABONBA_PTR_GET_DEFAULT(userSourceId_, "") };
    inline GetUserResponseBodyUser& setUserSourceId(string userSourceId) { DARABONBA_PTR_SET_VALUE(userSourceId_, userSourceId) };


    // userSourceType Field Functions 
    bool hasUserSourceType() const { return this->userSourceType_ != nullptr;};
    void deleteUserSourceType() { this->userSourceType_ = nullptr;};
    inline string userSourceType() const { DARABONBA_PTR_GET_DEFAULT(userSourceType_, "") };
    inline GetUserResponseBodyUser& setUserSourceType(string userSourceType) { DARABONBA_PTR_SET_VALUE(userSourceType_, userSourceType) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetUserResponseBodyUser& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The time when the account expires. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> accountExpireTime_ = nullptr;
    // The time when the account was created. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The list of custom fields that describe the account.
    std::shared_ptr<vector<Models::GetUserResponseBodyUserCustomFields>> customFields_ = nullptr;
    // The description of the account.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the account.
    std::shared_ptr<string> displayName_ = nullptr;
    // The email address of the user who owns the account.
    std::shared_ptr<string> email_ = nullptr;
    // Indicates whether the email address has been verified. A value of true indicates that the email address has been verified by the user or has been set to the verified status by the administrator. A value of false indicates that the email address has not been verified.
    std::shared_ptr<bool> emailVerified_ = nullptr;
    // The organizational units to which the account belongs.
    std::shared_ptr<vector<Models::GetUserResponseBodyUserGroups>> groups_ = nullptr;
    // The ID of the instance
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time when the account lock expires. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> lockExpireTime_ = nullptr;
    // The organizational units to which the account belongs.
    std::shared_ptr<vector<Models::GetUserResponseBodyUserOrganizationalUnits>> organizationalUnits_ = nullptr;
    // The time when the password of the account expires. This value is a UNIX timestamp. Unit: milliseconds.
    // 
    // *   If the value -1 is returned, the password does not expire.
    // *   If no value is returned, the password does not expire.
    // *   If a UNIX timestamp is returned, the password expires at the indicated point of time.
    std::shared_ptr<int64_t> passwordExpireTime_ = nullptr;
    // Indicates whether a password is set.
    std::shared_ptr<bool> passwordSet_ = nullptr;
    // The mobile number of the user who owns the account.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    // Indicates whether the mobile number has been verified. A value of true indicates that the mobile number has been verified by the user or has been set to the verified status by the administrator. A value of false indicates that the mobile number has not been verified.
    std::shared_ptr<bool> phoneNumberVerified_ = nullptr;
    // The country code of the mobile number. For example, the country code of China is 86 without 00 or +.
    std::shared_ptr<string> phoneRegion_ = nullptr;
    // Preferred language
    std::shared_ptr<string> preferredLanguage_ = nullptr;
    // The ID of the primary organizational unit to which the account belongs.
    std::shared_ptr<string> primaryOrganizationalUnitId_ = nullptr;
    // The time when the account was registered. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> registerTime_ = nullptr;
    // The status of the account. Valid values:
    // 
    // *   enabled: The account is enabled.
    // *   disabled: The account is disabled.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the account was last updated. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The external ID of the account. The external ID can be used by external data to map the data of the account in IDaaS EIAM. By default, the external ID is the account ID.
    // 
    // For accounts with the same source type and source ID, each account has a unique external ID.
    std::shared_ptr<string> userExternalId_ = nullptr;
    // The ID of the account.
    std::shared_ptr<string> userId_ = nullptr;
    // The source ID of the account.
    // 
    // If the account was created in IDaaS, its source ID is the ID of the IDaaS instance. If the account was imported, its source ID is the enterprise ID in the source. For example, if the account was imported from DingTalk, its source ID is the corpId value of the enterprise in DingTalk.
    std::shared_ptr<string> userSourceId_ = nullptr;
    // The source type of the account. Valid values:
    // 
    // *   build_in: The account was created in IDaaS.
    // *   ding_talk: The account was imported from DingTalk.
    // *   ad: The account was imported from Microsoft Active Directory (AD).
    // *   ldap: The account was imported from a Lightweight Directory Access Protocol (LDAP) service.
    std::shared_ptr<string> userSourceType_ = nullptr;
    // The username of the account.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
