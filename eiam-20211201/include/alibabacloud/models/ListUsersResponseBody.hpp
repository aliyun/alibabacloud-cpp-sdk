// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
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
  class ListUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListUsersResponseBody() = default ;
    ListUsersResponseBody(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody(ListUsersResponseBody &&) = default ;
    ListUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBody() = default ;
    ListUsersResponseBody& operator=(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody& operator=(ListUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(AccountExpireTime, accountExpireTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(EmailVerified, emailVerified_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LockExpireTime, lockExpireTime_);
        DARABONBA_PTR_TO_JSON(PasswordExpireTime, passwordExpireTime_);
        DARABONBA_PTR_TO_JSON(PasswordSet, passwordSet_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(PhoneNumberVerified, phoneNumberVerified_);
        DARABONBA_PTR_TO_JSON(PhoneRegion, phoneRegion_);
        DARABONBA_PTR_TO_JSON(RegisterTime, registerTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserExternalId, userExternalId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserSourceId, userSourceId_);
        DARABONBA_PTR_TO_JSON(UserSourceType, userSourceType_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountExpireTime, accountExpireTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(EmailVerified, emailVerified_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LockExpireTime, lockExpireTime_);
        DARABONBA_PTR_FROM_JSON(PasswordExpireTime, passwordExpireTime_);
        DARABONBA_PTR_FROM_JSON(PasswordSet, passwordSet_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(PhoneNumberVerified, phoneNumberVerified_);
        DARABONBA_PTR_FROM_JSON(PhoneRegion, phoneRegion_);
        DARABONBA_PTR_FROM_JSON(RegisterTime, registerTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserExternalId, userExternalId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserSourceId, userSourceId_);
        DARABONBA_PTR_FROM_JSON(UserSourceType, userSourceType_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountExpireTime_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->email_ == nullptr && this->emailVerified_ == nullptr
        && this->instanceId_ == nullptr && this->lockExpireTime_ == nullptr && this->passwordExpireTime_ == nullptr && this->passwordSet_ == nullptr && this->phoneNumber_ == nullptr
        && this->phoneNumberVerified_ == nullptr && this->phoneRegion_ == nullptr && this->registerTime_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr
        && this->userExternalId_ == nullptr && this->userId_ == nullptr && this->userSourceId_ == nullptr && this->userSourceType_ == nullptr && this->username_ == nullptr; };
      // accountExpireTime Field Functions 
      bool hasAccountExpireTime() const { return this->accountExpireTime_ != nullptr;};
      void deleteAccountExpireTime() { this->accountExpireTime_ = nullptr;};
      inline int64_t getAccountExpireTime() const { DARABONBA_PTR_GET_DEFAULT(accountExpireTime_, 0L) };
      inline Users& setAccountExpireTime(int64_t accountExpireTime) { DARABONBA_PTR_SET_VALUE(accountExpireTime_, accountExpireTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Users& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Users& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Users& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Users& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // emailVerified Field Functions 
      bool hasEmailVerified() const { return this->emailVerified_ != nullptr;};
      void deleteEmailVerified() { this->emailVerified_ = nullptr;};
      inline bool getEmailVerified() const { DARABONBA_PTR_GET_DEFAULT(emailVerified_, false) };
      inline Users& setEmailVerified(bool emailVerified) { DARABONBA_PTR_SET_VALUE(emailVerified_, emailVerified) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Users& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lockExpireTime Field Functions 
      bool hasLockExpireTime() const { return this->lockExpireTime_ != nullptr;};
      void deleteLockExpireTime() { this->lockExpireTime_ = nullptr;};
      inline int64_t getLockExpireTime() const { DARABONBA_PTR_GET_DEFAULT(lockExpireTime_, 0L) };
      inline Users& setLockExpireTime(int64_t lockExpireTime) { DARABONBA_PTR_SET_VALUE(lockExpireTime_, lockExpireTime) };


      // passwordExpireTime Field Functions 
      bool hasPasswordExpireTime() const { return this->passwordExpireTime_ != nullptr;};
      void deletePasswordExpireTime() { this->passwordExpireTime_ = nullptr;};
      inline int64_t getPasswordExpireTime() const { DARABONBA_PTR_GET_DEFAULT(passwordExpireTime_, 0L) };
      inline Users& setPasswordExpireTime(int64_t passwordExpireTime) { DARABONBA_PTR_SET_VALUE(passwordExpireTime_, passwordExpireTime) };


      // passwordSet Field Functions 
      bool hasPasswordSet() const { return this->passwordSet_ != nullptr;};
      void deletePasswordSet() { this->passwordSet_ = nullptr;};
      inline bool getPasswordSet() const { DARABONBA_PTR_GET_DEFAULT(passwordSet_, false) };
      inline Users& setPasswordSet(bool passwordSet) { DARABONBA_PTR_SET_VALUE(passwordSet_, passwordSet) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Users& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // phoneNumberVerified Field Functions 
      bool hasPhoneNumberVerified() const { return this->phoneNumberVerified_ != nullptr;};
      void deletePhoneNumberVerified() { this->phoneNumberVerified_ = nullptr;};
      inline bool getPhoneNumberVerified() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberVerified_, false) };
      inline Users& setPhoneNumberVerified(bool phoneNumberVerified) { DARABONBA_PTR_SET_VALUE(phoneNumberVerified_, phoneNumberVerified) };


      // phoneRegion Field Functions 
      bool hasPhoneRegion() const { return this->phoneRegion_ != nullptr;};
      void deletePhoneRegion() { this->phoneRegion_ = nullptr;};
      inline string getPhoneRegion() const { DARABONBA_PTR_GET_DEFAULT(phoneRegion_, "") };
      inline Users& setPhoneRegion(string phoneRegion) { DARABONBA_PTR_SET_VALUE(phoneRegion_, phoneRegion) };


      // registerTime Field Functions 
      bool hasRegisterTime() const { return this->registerTime_ != nullptr;};
      void deleteRegisterTime() { this->registerTime_ = nullptr;};
      inline int64_t getRegisterTime() const { DARABONBA_PTR_GET_DEFAULT(registerTime_, 0L) };
      inline Users& setRegisterTime(int64_t registerTime) { DARABONBA_PTR_SET_VALUE(registerTime_, registerTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Users& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Users& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userExternalId Field Functions 
      bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
      void deleteUserExternalId() { this->userExternalId_ = nullptr;};
      inline string getUserExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
      inline Users& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Users& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userSourceId Field Functions 
      bool hasUserSourceId() const { return this->userSourceId_ != nullptr;};
      void deleteUserSourceId() { this->userSourceId_ = nullptr;};
      inline string getUserSourceId() const { DARABONBA_PTR_GET_DEFAULT(userSourceId_, "") };
      inline Users& setUserSourceId(string userSourceId) { DARABONBA_PTR_SET_VALUE(userSourceId_, userSourceId) };


      // userSourceType Field Functions 
      bool hasUserSourceType() const { return this->userSourceType_ != nullptr;};
      void deleteUserSourceType() { this->userSourceType_ = nullptr;};
      inline string getUserSourceType() const { DARABONBA_PTR_GET_DEFAULT(userSourceType_, "") };
      inline Users& setUserSourceType(string userSourceType) { DARABONBA_PTR_SET_VALUE(userSourceType_, userSourceType) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Users& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // The time when the account expires. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> accountExpireTime_ {};
      // The time when the account was created. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description of the account.
      shared_ptr<string> description_ {};
      // The display name of the account.
      shared_ptr<string> displayName_ {};
      // The email address of the user who owns the account.
      shared_ptr<string> email_ {};
      // Indicates whether the email address has been verified. A value of true indicates that the email address has been verified by the user or has been set to the verified status by the administrator. A value of false indicates that the email address has not been verified.
      shared_ptr<bool> emailVerified_ {};
      // The ID of the instance
      shared_ptr<string> instanceId_ {};
      // The time when the account lock expires. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> lockExpireTime_ {};
      // Time When Password Expires
      shared_ptr<int64_t> passwordExpireTime_ {};
      // Indicates whether a password is set.
      shared_ptr<bool> passwordSet_ {};
      // The mobile number of the user who owns the account.
      shared_ptr<string> phoneNumber_ {};
      // Indicates whether the mobile number has been verified. A value of true indicates that the mobile number has been verified by the user or has been set to the verified status by the administrator. A value of false indicates that the mobile number has not been verified.
      shared_ptr<bool> phoneNumberVerified_ {};
      // The country code of the mobile number. For example, the country code of China is 86 without 00 or +.
      shared_ptr<string> phoneRegion_ {};
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
        && this->totalCount_ == nullptr && this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUsersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListUsersResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<ListUsersResponseBody::Users>) };
    inline vector<ListUsersResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<ListUsersResponseBody::Users>) };
    inline ListUsersResponseBody& setUsers(const vector<ListUsersResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersResponseBody& setUsers(vector<ListUsersResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries in the list.
    shared_ptr<int64_t> totalCount_ {};
    // The list of data objects of accounts.
    shared_ptr<vector<ListUsersResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
