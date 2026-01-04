// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
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
  class GetUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
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
    class User : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const User& obj) { 
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
      friend void from_json(const Darabonba::Json& j, User& obj) { 
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
      User() = default ;
      User(const User &) = default ;
      User(User &&) = default ;
      User(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~User() = default ;
      User& operator=(const User &) = default ;
      User& operator=(User &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OrganizationalUnits : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrganizationalUnits& obj) { 
          DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
          DARABONBA_PTR_TO_JSON(OrganizationalUnitName, organizationalUnitName_);
          DARABONBA_PTR_TO_JSON(Primary, primary_);
        };
        friend void from_json(const Darabonba::Json& j, OrganizationalUnits& obj) { 
          DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
          DARABONBA_PTR_FROM_JSON(OrganizationalUnitName, organizationalUnitName_);
          DARABONBA_PTR_FROM_JSON(Primary, primary_);
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
        // Indicates whether the organization is the primary organization.
        shared_ptr<bool> primary_ {};
      };

      class Groups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Groups& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        };
        friend void from_json(const Darabonba::Json& j, Groups& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
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
        // The description of the organizational unit.
        shared_ptr<string> description_ {};
        // The ID of the organizational unit.
        shared_ptr<string> groupId_ {};
        // The name of the organizational unit.
        shared_ptr<string> groupName_ {};
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
        // The identifier of the custom field.
        shared_ptr<string> fieldName_ {};
        // The value of the custom field.
        shared_ptr<string> fieldValue_ {};
      };

      virtual bool empty() const override { return this->accountExpireTime_ == nullptr
        && this->createTime_ == nullptr && this->customFields_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->email_ == nullptr
        && this->emailVerified_ == nullptr && this->groups_ == nullptr && this->instanceId_ == nullptr && this->lockExpireTime_ == nullptr && this->organizationalUnits_ == nullptr
        && this->passwordExpireTime_ == nullptr && this->passwordSet_ == nullptr && this->phoneNumber_ == nullptr && this->phoneNumberVerified_ == nullptr && this->phoneRegion_ == nullptr
        && this->preferredLanguage_ == nullptr && this->primaryOrganizationalUnitId_ == nullptr && this->registerTime_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr
        && this->userExternalId_ == nullptr && this->userId_ == nullptr && this->userSourceId_ == nullptr && this->userSourceType_ == nullptr && this->username_ == nullptr; };
      // accountExpireTime Field Functions 
      bool hasAccountExpireTime() const { return this->accountExpireTime_ != nullptr;};
      void deleteAccountExpireTime() { this->accountExpireTime_ = nullptr;};
      inline int64_t getAccountExpireTime() const { DARABONBA_PTR_GET_DEFAULT(accountExpireTime_, 0L) };
      inline User& setAccountExpireTime(int64_t accountExpireTime) { DARABONBA_PTR_SET_VALUE(accountExpireTime_, accountExpireTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline User& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customFields Field Functions 
      bool hasCustomFields() const { return this->customFields_ != nullptr;};
      void deleteCustomFields() { this->customFields_ = nullptr;};
      inline const vector<User::CustomFields> & getCustomFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<User::CustomFields>) };
      inline vector<User::CustomFields> getCustomFields() { DARABONBA_PTR_GET(customFields_, vector<User::CustomFields>) };
      inline User& setCustomFields(const vector<User::CustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
      inline User& setCustomFields(vector<User::CustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline User& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline User& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline User& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // emailVerified Field Functions 
      bool hasEmailVerified() const { return this->emailVerified_ != nullptr;};
      void deleteEmailVerified() { this->emailVerified_ = nullptr;};
      inline bool getEmailVerified() const { DARABONBA_PTR_GET_DEFAULT(emailVerified_, false) };
      inline User& setEmailVerified(bool emailVerified) { DARABONBA_PTR_SET_VALUE(emailVerified_, emailVerified) };


      // groups Field Functions 
      bool hasGroups() const { return this->groups_ != nullptr;};
      void deleteGroups() { this->groups_ = nullptr;};
      inline const vector<User::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<User::Groups>) };
      inline vector<User::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<User::Groups>) };
      inline User& setGroups(const vector<User::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
      inline User& setGroups(vector<User::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline User& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lockExpireTime Field Functions 
      bool hasLockExpireTime() const { return this->lockExpireTime_ != nullptr;};
      void deleteLockExpireTime() { this->lockExpireTime_ = nullptr;};
      inline int64_t getLockExpireTime() const { DARABONBA_PTR_GET_DEFAULT(lockExpireTime_, 0L) };
      inline User& setLockExpireTime(int64_t lockExpireTime) { DARABONBA_PTR_SET_VALUE(lockExpireTime_, lockExpireTime) };


      // organizationalUnits Field Functions 
      bool hasOrganizationalUnits() const { return this->organizationalUnits_ != nullptr;};
      void deleteOrganizationalUnits() { this->organizationalUnits_ = nullptr;};
      inline const vector<User::OrganizationalUnits> & getOrganizationalUnits() const { DARABONBA_PTR_GET_CONST(organizationalUnits_, vector<User::OrganizationalUnits>) };
      inline vector<User::OrganizationalUnits> getOrganizationalUnits() { DARABONBA_PTR_GET(organizationalUnits_, vector<User::OrganizationalUnits>) };
      inline User& setOrganizationalUnits(const vector<User::OrganizationalUnits> & organizationalUnits) { DARABONBA_PTR_SET_VALUE(organizationalUnits_, organizationalUnits) };
      inline User& setOrganizationalUnits(vector<User::OrganizationalUnits> && organizationalUnits) { DARABONBA_PTR_SET_RVALUE(organizationalUnits_, organizationalUnits) };


      // passwordExpireTime Field Functions 
      bool hasPasswordExpireTime() const { return this->passwordExpireTime_ != nullptr;};
      void deletePasswordExpireTime() { this->passwordExpireTime_ = nullptr;};
      inline int64_t getPasswordExpireTime() const { DARABONBA_PTR_GET_DEFAULT(passwordExpireTime_, 0L) };
      inline User& setPasswordExpireTime(int64_t passwordExpireTime) { DARABONBA_PTR_SET_VALUE(passwordExpireTime_, passwordExpireTime) };


      // passwordSet Field Functions 
      bool hasPasswordSet() const { return this->passwordSet_ != nullptr;};
      void deletePasswordSet() { this->passwordSet_ = nullptr;};
      inline bool getPasswordSet() const { DARABONBA_PTR_GET_DEFAULT(passwordSet_, false) };
      inline User& setPasswordSet(bool passwordSet) { DARABONBA_PTR_SET_VALUE(passwordSet_, passwordSet) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline User& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // phoneNumberVerified Field Functions 
      bool hasPhoneNumberVerified() const { return this->phoneNumberVerified_ != nullptr;};
      void deletePhoneNumberVerified() { this->phoneNumberVerified_ = nullptr;};
      inline bool getPhoneNumberVerified() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberVerified_, false) };
      inline User& setPhoneNumberVerified(bool phoneNumberVerified) { DARABONBA_PTR_SET_VALUE(phoneNumberVerified_, phoneNumberVerified) };


      // phoneRegion Field Functions 
      bool hasPhoneRegion() const { return this->phoneRegion_ != nullptr;};
      void deletePhoneRegion() { this->phoneRegion_ = nullptr;};
      inline string getPhoneRegion() const { DARABONBA_PTR_GET_DEFAULT(phoneRegion_, "") };
      inline User& setPhoneRegion(string phoneRegion) { DARABONBA_PTR_SET_VALUE(phoneRegion_, phoneRegion) };


      // preferredLanguage Field Functions 
      bool hasPreferredLanguage() const { return this->preferredLanguage_ != nullptr;};
      void deletePreferredLanguage() { this->preferredLanguage_ = nullptr;};
      inline string getPreferredLanguage() const { DARABONBA_PTR_GET_DEFAULT(preferredLanguage_, "") };
      inline User& setPreferredLanguage(string preferredLanguage) { DARABONBA_PTR_SET_VALUE(preferredLanguage_, preferredLanguage) };


      // primaryOrganizationalUnitId Field Functions 
      bool hasPrimaryOrganizationalUnitId() const { return this->primaryOrganizationalUnitId_ != nullptr;};
      void deletePrimaryOrganizationalUnitId() { this->primaryOrganizationalUnitId_ = nullptr;};
      inline string getPrimaryOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(primaryOrganizationalUnitId_, "") };
      inline User& setPrimaryOrganizationalUnitId(string primaryOrganizationalUnitId) { DARABONBA_PTR_SET_VALUE(primaryOrganizationalUnitId_, primaryOrganizationalUnitId) };


      // registerTime Field Functions 
      bool hasRegisterTime() const { return this->registerTime_ != nullptr;};
      void deleteRegisterTime() { this->registerTime_ = nullptr;};
      inline int64_t getRegisterTime() const { DARABONBA_PTR_GET_DEFAULT(registerTime_, 0L) };
      inline User& setRegisterTime(int64_t registerTime) { DARABONBA_PTR_SET_VALUE(registerTime_, registerTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline User& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline User& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userExternalId Field Functions 
      bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
      void deleteUserExternalId() { this->userExternalId_ = nullptr;};
      inline string getUserExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
      inline User& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline User& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userSourceId Field Functions 
      bool hasUserSourceId() const { return this->userSourceId_ != nullptr;};
      void deleteUserSourceId() { this->userSourceId_ = nullptr;};
      inline string getUserSourceId() const { DARABONBA_PTR_GET_DEFAULT(userSourceId_, "") };
      inline User& setUserSourceId(string userSourceId) { DARABONBA_PTR_SET_VALUE(userSourceId_, userSourceId) };


      // userSourceType Field Functions 
      bool hasUserSourceType() const { return this->userSourceType_ != nullptr;};
      void deleteUserSourceType() { this->userSourceType_ = nullptr;};
      inline string getUserSourceType() const { DARABONBA_PTR_GET_DEFAULT(userSourceType_, "") };
      inline User& setUserSourceType(string userSourceType) { DARABONBA_PTR_SET_VALUE(userSourceType_, userSourceType) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline User& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // The time when the account expires. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> accountExpireTime_ {};
      // The time when the account was created. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The list of custom fields that describe the account.
      shared_ptr<vector<User::CustomFields>> customFields_ {};
      // The description of the account.
      shared_ptr<string> description_ {};
      // The display name of the account.
      shared_ptr<string> displayName_ {};
      // The email address of the user who owns the account.
      shared_ptr<string> email_ {};
      // Indicates whether the email address has been verified. A value of true indicates that the email address has been verified by the user or has been set to the verified status by the administrator. A value of false indicates that the email address has not been verified.
      shared_ptr<bool> emailVerified_ {};
      // The organizational units to which the account belongs.
      shared_ptr<vector<User::Groups>> groups_ {};
      // The ID of the instance
      shared_ptr<string> instanceId_ {};
      // The time when the account lock expires. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> lockExpireTime_ {};
      // The organizational units to which the account belongs.
      shared_ptr<vector<User::OrganizationalUnits>> organizationalUnits_ {};
      // The time when the password of the account expires. This value is a UNIX timestamp. Unit: milliseconds.
      // 
      // *   If the value -1 is returned, the password does not expire.
      // *   If no value is returned, the password does not expire.
      // *   If a UNIX timestamp is returned, the password expires at the indicated point of time.
      shared_ptr<int64_t> passwordExpireTime_ {};
      // Indicates whether a password is set.
      shared_ptr<bool> passwordSet_ {};
      // The mobile number of the user who owns the account.
      shared_ptr<string> phoneNumber_ {};
      // Indicates whether the mobile number has been verified. A value of true indicates that the mobile number has been verified by the user or has been set to the verified status by the administrator. A value of false indicates that the mobile number has not been verified.
      shared_ptr<bool> phoneNumberVerified_ {};
      // The country code of the mobile number. For example, the country code of China is 86 without 00 or +.
      shared_ptr<string> phoneRegion_ {};
      // Preferred language
      shared_ptr<string> preferredLanguage_ {};
      // The ID of the primary organizational unit to which the account belongs.
      shared_ptr<string> primaryOrganizationalUnitId_ {};
      // The time when the account was registered. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> registerTime_ {};
      // The status of the account. Valid values:
      // 
      // *   enabled: The account is enabled.
      // *   disabled: The account is disabled.
      shared_ptr<string> status_ {};
      // The time when the account was last updated. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> updateTime_ {};
      // The external ID of the account. The external ID can be used by external data to map the data of the account in IDaaS EIAM. By default, the external ID is the account ID.
      // 
      // For accounts with the same source type and source ID, each account has a unique external ID.
      shared_ptr<string> userExternalId_ {};
      // The ID of the account.
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

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->user_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const GetUserResponseBody::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, GetUserResponseBody::User) };
    inline GetUserResponseBody::User getUser() { DARABONBA_PTR_GET(user_, GetUserResponseBody::User) };
    inline GetUserResponseBody& setUser(const GetUserResponseBody::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline GetUserResponseBody& setUser(GetUserResponseBody::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The data object of the account.
    shared_ptr<GetUserResponseBody::User> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
