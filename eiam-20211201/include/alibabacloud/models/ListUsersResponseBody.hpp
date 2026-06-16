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
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
      // The account expiration time. This is a Unix timestamp in milliseconds.
      shared_ptr<int64_t> accountExpireTime_ {};
      // The creation time. This is a Unix timestamp in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The user description.
      shared_ptr<string> description_ {};
      // The display name.
      shared_ptr<string> displayName_ {};
      // The email address.
      shared_ptr<string> email_ {};
      // Indicates whether the email address is verified. `true` means the user has verified the email address or an administrator has marked it as verified. `false` means the email address is not verified.
      shared_ptr<bool> emailVerified_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The account lock expiration time. This is a Unix timestamp in milliseconds.
      shared_ptr<int64_t> lockExpireTime_ {};
      // The password expiration time. This is a Unix timestamp in milliseconds.
      shared_ptr<int64_t> passwordExpireTime_ {};
      // Indicates whether a password is set.
      shared_ptr<bool> passwordSet_ {};
      // The phone number.
      shared_ptr<string> phoneNumber_ {};
      // Indicates whether the phone number is verified. `true` means the user has verified the phone number or an administrator has marked it as verified. `false` means the phone number is not verified.
      shared_ptr<bool> phoneNumberVerified_ {};
      // The country calling code. For example, specify `86` for Chinese mainland. Do not include `00` or a plus sign (+).
      shared_ptr<string> phoneRegion_ {};
      // The registration time. This is a Unix timestamp in milliseconds.
      shared_ptr<int64_t> registerTime_ {};
      // The status. Valid values:
      // 
      // - `enabled`: The user is enabled.
      // 
      // - `disabled`: The user is disabled.
      shared_ptr<string> status_ {};
      // The last update time. This is a Unix timestamp in milliseconds.
      shared_ptr<int64_t> updateTime_ {};
      // The external user ID. This ID maps data from an external system to a user in IDaaS. It defaults to the user ID.
      // 
      // Note: The external user ID must be unique for the same source type and source ID.
      shared_ptr<string> userExternalId_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The user source ID.
      // 
      // If the user is built-in, this is the instance ID. For users from other sources, this is the enterprise ID from the source, such as the `corpId` for a DingTalk organization.
      shared_ptr<string> userSourceId_ {};
      // The user source type. Valid values:
      // 
      // - `build_in`: The user is a built-in user.
      // 
      // - `ding_talk`: The user is imported from DingTalk.
      // 
      // - `ad`: The user is imported from AD.
      // 
      // - `ldap`: The user is imported from LDAP.
      shared_ptr<string> userSourceType_ {};
      // The user name.
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->users_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUsersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUsersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


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
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
    // The list of users.
    shared_ptr<vector<ListUsersResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
