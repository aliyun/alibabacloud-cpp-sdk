// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class OrganizationalUnits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrganizationalUnits& obj) { 
        DARABONBA_PTR_TO_JSON(organizationalUnitId, organizationalUnitId_);
        DARABONBA_PTR_TO_JSON(organizationalUnitName, organizationalUnitName_);
        DARABONBA_PTR_TO_JSON(primary, primary_);
      };
      friend void from_json(const Darabonba::Json& j, OrganizationalUnits& obj) { 
        DARABONBA_PTR_FROM_JSON(organizationalUnitId, organizationalUnitId_);
        DARABONBA_PTR_FROM_JSON(organizationalUnitName, organizationalUnitName_);
        DARABONBA_PTR_FROM_JSON(primary, primary_);
      };
      OrganizationalUnits() = default ;
      OrganizationalUnits(const OrganizationalUnits &) = default ;
      OrganizationalUnits(OrganizationalUnits &&) = default ;
      OrganizationalUnits(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrganizationalUnits() = default ;
      OrganizationalUnits& operator=(const OrganizationalUnits &) = default ;
      OrganizationalUnits& operator=(OrganizationalUnits &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->organizationalUnitId_ == nullptr
        && this->organizationalUnitName_ == nullptr && this->primary_ == nullptr; };
      // organizationalUnitId Field Functions 
      bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
      void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
      inline string getOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
      inline OrganizationalUnits& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


      // organizationalUnitName Field Functions 
      bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
      void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
      inline string getOrganizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
      inline OrganizationalUnits& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


      // primary Field Functions 
      bool hasPrimary() const { return this->primary_ != nullptr;};
      void deletePrimary() { this->primary_ = nullptr;};
      inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
      inline OrganizationalUnits& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


    protected:
      // The ID of the organizational unit.
      shared_ptr<string> organizationalUnitId_ {};
      // The name of the organizational unit.
      shared_ptr<string> organizationalUnitName_ {};
      // Indicates whether the organizational unit is the primary organizational unit.
      shared_ptr<bool> primary_ {};
    };

    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(groupId, groupId_);
        DARABONBA_PTR_TO_JSON(groupName, groupName_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(groupId, groupId_);
        DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Groups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Groups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Groups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    protected:
      // The group description.
      shared_ptr<string> description_ {};
      // The group ID.
      shared_ptr<string> groupId_ {};
      // The group name.
      shared_ptr<string> groupName_ {};
    };

    class CustomFields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomFields& obj) { 
        DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
      };
      friend void from_json(const Darabonba::Json& j, CustomFields& obj) { 
        DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
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
      // The name of the extended field.
      shared_ptr<string> fieldName_ {};
      // The value of the extended field. Field values are returned as strings regardless of the data types of the fields. For example, true or false is returned for a Boolean field.
      shared_ptr<string> fieldValue_ {};
    };

    virtual bool empty() const override { return this->accountExpireTime_ == nullptr
        && this->createTime_ == nullptr && this->customFields_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->email_ == nullptr
        && this->emailVerified_ == nullptr && this->groups_ == nullptr && this->instanceId_ == nullptr && this->lockExpireTime_ == nullptr && this->organizationalUnits_ == nullptr
        && this->passwordSet_ == nullptr && this->phoneNumber_ == nullptr && this->phoneNumberVerified_ == nullptr && this->phoneRegion_ == nullptr && this->primaryOrganizationalUnitId_ == nullptr
        && this->registerTime_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr && this->userExternalId_ == nullptr && this->userId_ == nullptr
        && this->userSourceId_ == nullptr && this->userSourceType_ == nullptr && this->username_ == nullptr; };
    // accountExpireTime Field Functions 
    bool hasAccountExpireTime() const { return this->accountExpireTime_ != nullptr;};
    void deleteAccountExpireTime() { this->accountExpireTime_ = nullptr;};
    inline int64_t getAccountExpireTime() const { DARABONBA_PTR_GET_DEFAULT(accountExpireTime_, 0L) };
    inline GetUserResponseBody& setAccountExpireTime(int64_t accountExpireTime) { DARABONBA_PTR_SET_VALUE(accountExpireTime_, accountExpireTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetUserResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<GetUserResponseBody::CustomFields> & getCustomFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<GetUserResponseBody::CustomFields>) };
    inline vector<GetUserResponseBody::CustomFields> getCustomFields() { DARABONBA_PTR_GET(customFields_, vector<GetUserResponseBody::CustomFields>) };
    inline GetUserResponseBody& setCustomFields(const vector<GetUserResponseBody::CustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline GetUserResponseBody& setCustomFields(vector<GetUserResponseBody::CustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetUserResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetUserResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetUserResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerified Field Functions 
    bool hasEmailVerified() const { return this->emailVerified_ != nullptr;};
    void deleteEmailVerified() { this->emailVerified_ = nullptr;};
    inline bool getEmailVerified() const { DARABONBA_PTR_GET_DEFAULT(emailVerified_, false) };
    inline GetUserResponseBody& setEmailVerified(bool emailVerified) { DARABONBA_PTR_SET_VALUE(emailVerified_, emailVerified) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<GetUserResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<GetUserResponseBody::Groups>) };
    inline vector<GetUserResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<GetUserResponseBody::Groups>) };
    inline GetUserResponseBody& setGroups(const vector<GetUserResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline GetUserResponseBody& setGroups(vector<GetUserResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetUserResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lockExpireTime Field Functions 
    bool hasLockExpireTime() const { return this->lockExpireTime_ != nullptr;};
    void deleteLockExpireTime() { this->lockExpireTime_ = nullptr;};
    inline int64_t getLockExpireTime() const { DARABONBA_PTR_GET_DEFAULT(lockExpireTime_, 0L) };
    inline GetUserResponseBody& setLockExpireTime(int64_t lockExpireTime) { DARABONBA_PTR_SET_VALUE(lockExpireTime_, lockExpireTime) };


    // organizationalUnits Field Functions 
    bool hasOrganizationalUnits() const { return this->organizationalUnits_ != nullptr;};
    void deleteOrganizationalUnits() { this->organizationalUnits_ = nullptr;};
    inline const vector<GetUserResponseBody::OrganizationalUnits> & getOrganizationalUnits() const { DARABONBA_PTR_GET_CONST(organizationalUnits_, vector<GetUserResponseBody::OrganizationalUnits>) };
    inline vector<GetUserResponseBody::OrganizationalUnits> getOrganizationalUnits() { DARABONBA_PTR_GET(organizationalUnits_, vector<GetUserResponseBody::OrganizationalUnits>) };
    inline GetUserResponseBody& setOrganizationalUnits(const vector<GetUserResponseBody::OrganizationalUnits> & organizationalUnits) { DARABONBA_PTR_SET_VALUE(organizationalUnits_, organizationalUnits) };
    inline GetUserResponseBody& setOrganizationalUnits(vector<GetUserResponseBody::OrganizationalUnits> && organizationalUnits) { DARABONBA_PTR_SET_RVALUE(organizationalUnits_, organizationalUnits) };


    // passwordSet Field Functions 
    bool hasPasswordSet() const { return this->passwordSet_ != nullptr;};
    void deletePasswordSet() { this->passwordSet_ = nullptr;};
    inline bool getPasswordSet() const { DARABONBA_PTR_GET_DEFAULT(passwordSet_, false) };
    inline GetUserResponseBody& setPasswordSet(bool passwordSet) { DARABONBA_PTR_SET_VALUE(passwordSet_, passwordSet) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetUserResponseBody& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // phoneNumberVerified Field Functions 
    bool hasPhoneNumberVerified() const { return this->phoneNumberVerified_ != nullptr;};
    void deletePhoneNumberVerified() { this->phoneNumberVerified_ = nullptr;};
    inline bool getPhoneNumberVerified() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberVerified_, false) };
    inline GetUserResponseBody& setPhoneNumberVerified(bool phoneNumberVerified) { DARABONBA_PTR_SET_VALUE(phoneNumberVerified_, phoneNumberVerified) };


    // phoneRegion Field Functions 
    bool hasPhoneRegion() const { return this->phoneRegion_ != nullptr;};
    void deletePhoneRegion() { this->phoneRegion_ = nullptr;};
    inline string getPhoneRegion() const { DARABONBA_PTR_GET_DEFAULT(phoneRegion_, "") };
    inline GetUserResponseBody& setPhoneRegion(string phoneRegion) { DARABONBA_PTR_SET_VALUE(phoneRegion_, phoneRegion) };


    // primaryOrganizationalUnitId Field Functions 
    bool hasPrimaryOrganizationalUnitId() const { return this->primaryOrganizationalUnitId_ != nullptr;};
    void deletePrimaryOrganizationalUnitId() { this->primaryOrganizationalUnitId_ = nullptr;};
    inline string getPrimaryOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(primaryOrganizationalUnitId_, "") };
    inline GetUserResponseBody& setPrimaryOrganizationalUnitId(string primaryOrganizationalUnitId) { DARABONBA_PTR_SET_VALUE(primaryOrganizationalUnitId_, primaryOrganizationalUnitId) };


    // registerTime Field Functions 
    bool hasRegisterTime() const { return this->registerTime_ != nullptr;};
    void deleteRegisterTime() { this->registerTime_ = nullptr;};
    inline int64_t getRegisterTime() const { DARABONBA_PTR_GET_DEFAULT(registerTime_, 0L) };
    inline GetUserResponseBody& setRegisterTime(int64_t registerTime) { DARABONBA_PTR_SET_VALUE(registerTime_, registerTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUserResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetUserResponseBody& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userExternalId Field Functions 
    bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
    void deleteUserExternalId() { this->userExternalId_ = nullptr;};
    inline string getUserExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
    inline GetUserResponseBody& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userSourceId Field Functions 
    bool hasUserSourceId() const { return this->userSourceId_ != nullptr;};
    void deleteUserSourceId() { this->userSourceId_ = nullptr;};
    inline string getUserSourceId() const { DARABONBA_PTR_GET_DEFAULT(userSourceId_, "") };
    inline GetUserResponseBody& setUserSourceId(string userSourceId) { DARABONBA_PTR_SET_VALUE(userSourceId_, userSourceId) };


    // userSourceType Field Functions 
    bool hasUserSourceType() const { return this->userSourceType_ != nullptr;};
    void deleteUserSourceType() { this->userSourceType_ = nullptr;};
    inline string getUserSourceType() const { DARABONBA_PTR_GET_DEFAULT(userSourceType_, "") };
    inline GetUserResponseBody& setUserSourceType(string userSourceType) { DARABONBA_PTR_SET_VALUE(userSourceType_, userSourceType) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetUserResponseBody& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The time when the account expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> accountExpireTime_ {};
    // The time when the account was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> createTime_ {};
    // The extended fields of the account.
    shared_ptr<vector<GetUserResponseBody::CustomFields>> customFields_ {};
    // The description of the account.
    shared_ptr<string> description_ {};
    // The display name of the account.
    shared_ptr<string> displayName_ {};
    // The email address of the user.
    shared_ptr<string> email_ {};
    // Indicates whether the email address has been verified. A value of true indicates that the email address has been verified by the user or has been set to the verified status by the administrator. A value of false indicates that the email address has not been verified.
    shared_ptr<bool> emailVerified_ {};
    // The groups to which the account belongs.
    shared_ptr<vector<GetUserResponseBody::Groups>> groups_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The time when the account lock expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> lockExpireTime_ {};
    // The organizational units to which the account belongs.
    shared_ptr<vector<GetUserResponseBody::OrganizationalUnits>> organizationalUnits_ {};
    // Indicates whether the password is set.
    shared_ptr<bool> passwordSet_ {};
    // The mobile number of the user who owns the account.
    shared_ptr<string> phoneNumber_ {};
    // Indicates whether the mobile number has been verified. A value of true indicates that the mobile number has been verified by the user or has been set to the verified status by the administrator. A value of false indicates that the mobile number has not been verified.
    shared_ptr<bool> phoneNumberVerified_ {};
    // The country code of the mobile number. For example, the country code of China is 86 without 00 or +.
    shared_ptr<string> phoneRegion_ {};
    // The ID of the primary organizational unit of the account.
    shared_ptr<string> primaryOrganizationalUnitId_ {};
    // The time when the account was registered. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> registerTime_ {};
    // The status of the account. Valid values: enabled disabled
    shared_ptr<string> status_ {};
    // The time when the account was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> updateTime_ {};
    // The external ID of the account. The external ID can be used to map external data to the data of the account in EIAM of Identity as a Service (IDaaS). By default, the external ID is the account ID.
    // 
    // Note: For accounts with the same source type and source ID, each account has a unique external ID.
    shared_ptr<string> userExternalId_ {};
    // The account ID.
    shared_ptr<string> userId_ {};
    // The source ID of the account.
    // 
    // If the account was created in IDaaS, its source ID is the ID of the IDaaS instance. If the account was imported, its source ID is the enterprise ID in the source. For example, if the account was imported from DingTalk, its source ID is the corpId value of the enterprise in DingTalk.
    shared_ptr<string> userSourceId_ {};
    // The source type of the account. Valid values:
    // 
    // *   build_in: The account was created in IDaaS.
    // *   ding_talk: The account was imported from DingTalk.
    // *   ad: The account was imported from Microsoft Active Directory (AD).
    // *   ldap: The account was imported from a Lightweight Directory Access Protocol (LDAP) service.
    shared_ptr<string> userSourceType_ {};
    // The username of the account.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
