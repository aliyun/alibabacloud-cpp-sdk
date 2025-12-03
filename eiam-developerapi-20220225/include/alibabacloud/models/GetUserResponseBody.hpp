// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUserResponseBodyCustomFields.hpp>
#include <alibabacloud/models/GetUserResponseBodyGroups.hpp>
#include <alibabacloud/models/GetUserResponseBodyOrganizationalUnits.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accountExpireTime, accountExpireTime_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(customFields, customFields_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(emailVerified, emailVerified_);
      DARABONBA_PTR_TO_JSON(groups, groups_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(lockExpireTime, lockExpireTime_);
      DARABONBA_PTR_TO_JSON(organizationalUnits, organizationalUnits_);
      DARABONBA_PTR_TO_JSON(passwordSet, passwordSet_);
      DARABONBA_PTR_TO_JSON(phoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(phoneNumberVerified, phoneNumberVerified_);
      DARABONBA_PTR_TO_JSON(phoneRegion, phoneRegion_);
      DARABONBA_PTR_TO_JSON(primaryOrganizationalUnitId, primaryOrganizationalUnitId_);
      DARABONBA_PTR_TO_JSON(registerTime, registerTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userExternalId, userExternalId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(userSourceId, userSourceId_);
      DARABONBA_PTR_TO_JSON(userSourceType, userSourceType_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accountExpireTime, accountExpireTime_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(customFields, customFields_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(emailVerified, emailVerified_);
      DARABONBA_PTR_FROM_JSON(groups, groups_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(lockExpireTime, lockExpireTime_);
      DARABONBA_PTR_FROM_JSON(organizationalUnits, organizationalUnits_);
      DARABONBA_PTR_FROM_JSON(passwordSet, passwordSet_);
      DARABONBA_PTR_FROM_JSON(phoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(phoneNumberVerified, phoneNumberVerified_);
      DARABONBA_PTR_FROM_JSON(phoneRegion, phoneRegion_);
      DARABONBA_PTR_FROM_JSON(primaryOrganizationalUnitId, primaryOrganizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(registerTime, registerTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userExternalId, userExternalId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(userSourceId, userSourceId_);
      DARABONBA_PTR_FROM_JSON(userSourceType, userSourceType_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    GetUserResponseBody() = default ;
    GetUserResponseBody(const GetUserResponseBody &) = default ;
    GetUserResponseBody(GetUserResponseBody &&) = default ;
    GetUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBody() = default ;
    GetUserResponseBody& operator=(const GetUserResponseBody &) = default ;
    GetUserResponseBody& operator=(GetUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountExpireTime_ == nullptr
        && return this->createTime_ == nullptr && return this->customFields_ == nullptr && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->email_ == nullptr
        && return this->emailVerified_ == nullptr && return this->groups_ == nullptr && return this->instanceId_ == nullptr && return this->lockExpireTime_ == nullptr && return this->organizationalUnits_ == nullptr
        && return this->passwordSet_ == nullptr && return this->phoneNumber_ == nullptr && return this->phoneNumberVerified_ == nullptr && return this->phoneRegion_ == nullptr && return this->primaryOrganizationalUnitId_ == nullptr
        && return this->registerTime_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr && return this->userExternalId_ == nullptr && return this->userId_ == nullptr
        && return this->userSourceId_ == nullptr && return this->userSourceType_ == nullptr && return this->username_ == nullptr; };
    // accountExpireTime Field Functions 
    bool hasAccountExpireTime() const { return this->accountExpireTime_ != nullptr;};
    void deleteAccountExpireTime() { this->accountExpireTime_ = nullptr;};
    inline int64_t accountExpireTime() const { DARABONBA_PTR_GET_DEFAULT(accountExpireTime_, 0L) };
    inline GetUserResponseBody& setAccountExpireTime(int64_t accountExpireTime) { DARABONBA_PTR_SET_VALUE(accountExpireTime_, accountExpireTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetUserResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<GetUserResponseBodyCustomFields> & customFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<GetUserResponseBodyCustomFields>) };
    inline vector<GetUserResponseBodyCustomFields> customFields() { DARABONBA_PTR_GET(customFields_, vector<GetUserResponseBodyCustomFields>) };
    inline GetUserResponseBody& setCustomFields(const vector<GetUserResponseBodyCustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline GetUserResponseBody& setCustomFields(vector<GetUserResponseBodyCustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetUserResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetUserResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetUserResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerified Field Functions 
    bool hasEmailVerified() const { return this->emailVerified_ != nullptr;};
    void deleteEmailVerified() { this->emailVerified_ = nullptr;};
    inline bool emailVerified() const { DARABONBA_PTR_GET_DEFAULT(emailVerified_, false) };
    inline GetUserResponseBody& setEmailVerified(bool emailVerified) { DARABONBA_PTR_SET_VALUE(emailVerified_, emailVerified) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<GetUserResponseBodyGroups> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<GetUserResponseBodyGroups>) };
    inline vector<GetUserResponseBodyGroups> groups() { DARABONBA_PTR_GET(groups_, vector<GetUserResponseBodyGroups>) };
    inline GetUserResponseBody& setGroups(const vector<GetUserResponseBodyGroups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline GetUserResponseBody& setGroups(vector<GetUserResponseBodyGroups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetUserResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lockExpireTime Field Functions 
    bool hasLockExpireTime() const { return this->lockExpireTime_ != nullptr;};
    void deleteLockExpireTime() { this->lockExpireTime_ = nullptr;};
    inline int64_t lockExpireTime() const { DARABONBA_PTR_GET_DEFAULT(lockExpireTime_, 0L) };
    inline GetUserResponseBody& setLockExpireTime(int64_t lockExpireTime) { DARABONBA_PTR_SET_VALUE(lockExpireTime_, lockExpireTime) };


    // organizationalUnits Field Functions 
    bool hasOrganizationalUnits() const { return this->organizationalUnits_ != nullptr;};
    void deleteOrganizationalUnits() { this->organizationalUnits_ = nullptr;};
    inline const vector<GetUserResponseBodyOrganizationalUnits> & organizationalUnits() const { DARABONBA_PTR_GET_CONST(organizationalUnits_, vector<GetUserResponseBodyOrganizationalUnits>) };
    inline vector<GetUserResponseBodyOrganizationalUnits> organizationalUnits() { DARABONBA_PTR_GET(organizationalUnits_, vector<GetUserResponseBodyOrganizationalUnits>) };
    inline GetUserResponseBody& setOrganizationalUnits(const vector<GetUserResponseBodyOrganizationalUnits> & organizationalUnits) { DARABONBA_PTR_SET_VALUE(organizationalUnits_, organizationalUnits) };
    inline GetUserResponseBody& setOrganizationalUnits(vector<GetUserResponseBodyOrganizationalUnits> && organizationalUnits) { DARABONBA_PTR_SET_RVALUE(organizationalUnits_, organizationalUnits) };


    // passwordSet Field Functions 
    bool hasPasswordSet() const { return this->passwordSet_ != nullptr;};
    void deletePasswordSet() { this->passwordSet_ = nullptr;};
    inline bool passwordSet() const { DARABONBA_PTR_GET_DEFAULT(passwordSet_, false) };
    inline GetUserResponseBody& setPasswordSet(bool passwordSet) { DARABONBA_PTR_SET_VALUE(passwordSet_, passwordSet) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetUserResponseBody& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // phoneNumberVerified Field Functions 
    bool hasPhoneNumberVerified() const { return this->phoneNumberVerified_ != nullptr;};
    void deletePhoneNumberVerified() { this->phoneNumberVerified_ = nullptr;};
    inline bool phoneNumberVerified() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberVerified_, false) };
    inline GetUserResponseBody& setPhoneNumberVerified(bool phoneNumberVerified) { DARABONBA_PTR_SET_VALUE(phoneNumberVerified_, phoneNumberVerified) };


    // phoneRegion Field Functions 
    bool hasPhoneRegion() const { return this->phoneRegion_ != nullptr;};
    void deletePhoneRegion() { this->phoneRegion_ = nullptr;};
    inline string phoneRegion() const { DARABONBA_PTR_GET_DEFAULT(phoneRegion_, "") };
    inline GetUserResponseBody& setPhoneRegion(string phoneRegion) { DARABONBA_PTR_SET_VALUE(phoneRegion_, phoneRegion) };


    // primaryOrganizationalUnitId Field Functions 
    bool hasPrimaryOrganizationalUnitId() const { return this->primaryOrganizationalUnitId_ != nullptr;};
    void deletePrimaryOrganizationalUnitId() { this->primaryOrganizationalUnitId_ = nullptr;};
    inline string primaryOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(primaryOrganizationalUnitId_, "") };
    inline GetUserResponseBody& setPrimaryOrganizationalUnitId(string primaryOrganizationalUnitId) { DARABONBA_PTR_SET_VALUE(primaryOrganizationalUnitId_, primaryOrganizationalUnitId) };


    // registerTime Field Functions 
    bool hasRegisterTime() const { return this->registerTime_ != nullptr;};
    void deleteRegisterTime() { this->registerTime_ = nullptr;};
    inline int64_t registerTime() const { DARABONBA_PTR_GET_DEFAULT(registerTime_, 0L) };
    inline GetUserResponseBody& setRegisterTime(int64_t registerTime) { DARABONBA_PTR_SET_VALUE(registerTime_, registerTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUserResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetUserResponseBody& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userExternalId Field Functions 
    bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
    void deleteUserExternalId() { this->userExternalId_ = nullptr;};
    inline string userExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
    inline GetUserResponseBody& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userSourceId Field Functions 
    bool hasUserSourceId() const { return this->userSourceId_ != nullptr;};
    void deleteUserSourceId() { this->userSourceId_ = nullptr;};
    inline string userSourceId() const { DARABONBA_PTR_GET_DEFAULT(userSourceId_, "") };
    inline GetUserResponseBody& setUserSourceId(string userSourceId) { DARABONBA_PTR_SET_VALUE(userSourceId_, userSourceId) };


    // userSourceType Field Functions 
    bool hasUserSourceType() const { return this->userSourceType_ != nullptr;};
    void deleteUserSourceType() { this->userSourceType_ = nullptr;};
    inline string userSourceType() const { DARABONBA_PTR_GET_DEFAULT(userSourceType_, "") };
    inline GetUserResponseBody& setUserSourceType(string userSourceType) { DARABONBA_PTR_SET_VALUE(userSourceType_, userSourceType) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetUserResponseBody& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The time when the account expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> accountExpireTime_ = nullptr;
    // The time when the account was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The extended fields of the account.
    std::shared_ptr<vector<GetUserResponseBodyCustomFields>> customFields_ = nullptr;
    // The description of the account.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the account.
    std::shared_ptr<string> displayName_ = nullptr;
    // The email address of the user.
    std::shared_ptr<string> email_ = nullptr;
    // Indicates whether the email address has been verified. A value of true indicates that the email address has been verified by the user or has been set to the verified status by the administrator. A value of false indicates that the email address has not been verified.
    std::shared_ptr<bool> emailVerified_ = nullptr;
    // The groups to which the account belongs.
    std::shared_ptr<vector<GetUserResponseBodyGroups>> groups_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time when the account lock expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> lockExpireTime_ = nullptr;
    // The organizational units to which the account belongs.
    std::shared_ptr<vector<GetUserResponseBodyOrganizationalUnits>> organizationalUnits_ = nullptr;
    // Indicates whether the password is set.
    std::shared_ptr<bool> passwordSet_ = nullptr;
    // The mobile number of the user who owns the account.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    // Indicates whether the mobile number has been verified. A value of true indicates that the mobile number has been verified by the user or has been set to the verified status by the administrator. A value of false indicates that the mobile number has not been verified.
    std::shared_ptr<bool> phoneNumberVerified_ = nullptr;
    // The country code of the mobile number. For example, the country code of China is 86 without 00 or +.
    std::shared_ptr<string> phoneRegion_ = nullptr;
    // The ID of the primary organizational unit of the account.
    std::shared_ptr<string> primaryOrganizationalUnitId_ = nullptr;
    // The time when the account was registered. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> registerTime_ = nullptr;
    // The status of the account. Valid values: enabled disabled
    std::shared_ptr<string> status_ = nullptr;
    // The time when the account was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The external ID of the account. The external ID can be used to map external data to the data of the account in EIAM of Identity as a Service (IDaaS). By default, the external ID is the account ID.
    // 
    // Note: For accounts with the same source type and source ID, each account has a unique external ID.
    std::shared_ptr<string> userExternalId_ = nullptr;
    // The account ID.
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
} // namespace EiamDeveloperapi20220225
#endif
