// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
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
  class ListUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(accountExpireTime, accountExpireTime_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(email, email_);
        DARABONBA_PTR_TO_JSON(emailVerified, emailVerified_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(lockExpireTime, lockExpireTime_);
        DARABONBA_PTR_TO_JSON(passwordSet, passwordSet_);
        DARABONBA_PTR_TO_JSON(phoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(phoneNumberVerified, phoneNumberVerified_);
        DARABONBA_PTR_TO_JSON(phoneRegion, phoneRegion_);
        DARABONBA_PTR_TO_JSON(registerTime, registerTime_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(userExternalId, userExternalId_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(userSourceId, userSourceId_);
        DARABONBA_PTR_TO_JSON(userSourceType, userSourceType_);
        DARABONBA_PTR_TO_JSON(username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(accountExpireTime, accountExpireTime_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(email, email_);
        DARABONBA_PTR_FROM_JSON(emailVerified, emailVerified_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(lockExpireTime, lockExpireTime_);
        DARABONBA_PTR_FROM_JSON(passwordSet, passwordSet_);
        DARABONBA_PTR_FROM_JSON(phoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(phoneNumberVerified, phoneNumberVerified_);
        DARABONBA_PTR_FROM_JSON(phoneRegion, phoneRegion_);
        DARABONBA_PTR_FROM_JSON(registerTime, registerTime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(userExternalId, userExternalId_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(userSourceId, userSourceId_);
        DARABONBA_PTR_FROM_JSON(userSourceType, userSourceType_);
        DARABONBA_PTR_FROM_JSON(username, username_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountExpireTime_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->email_ == nullptr && this->emailVerified_ == nullptr
        && this->instanceId_ == nullptr && this->lockExpireTime_ == nullptr && this->passwordSet_ == nullptr && this->phoneNumber_ == nullptr && this->phoneNumberVerified_ == nullptr
        && this->phoneRegion_ == nullptr && this->registerTime_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr && this->userExternalId_ == nullptr
        && this->userId_ == nullptr && this->userSourceId_ == nullptr && this->userSourceType_ == nullptr && this->username_ == nullptr; };
      // accountExpireTime Field Functions 
      bool hasAccountExpireTime() const { return this->accountExpireTime_ != nullptr;};
      void deleteAccountExpireTime() { this->accountExpireTime_ = nullptr;};
      inline int64_t getAccountExpireTime() const { DARABONBA_PTR_GET_DEFAULT(accountExpireTime_, 0L) };
      inline Data& setAccountExpireTime(int64_t accountExpireTime) { DARABONBA_PTR_SET_VALUE(accountExpireTime_, accountExpireTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // emailVerified Field Functions 
      bool hasEmailVerified() const { return this->emailVerified_ != nullptr;};
      void deleteEmailVerified() { this->emailVerified_ = nullptr;};
      inline bool getEmailVerified() const { DARABONBA_PTR_GET_DEFAULT(emailVerified_, false) };
      inline Data& setEmailVerified(bool emailVerified) { DARABONBA_PTR_SET_VALUE(emailVerified_, emailVerified) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lockExpireTime Field Functions 
      bool hasLockExpireTime() const { return this->lockExpireTime_ != nullptr;};
      void deleteLockExpireTime() { this->lockExpireTime_ = nullptr;};
      inline int64_t getLockExpireTime() const { DARABONBA_PTR_GET_DEFAULT(lockExpireTime_, 0L) };
      inline Data& setLockExpireTime(int64_t lockExpireTime) { DARABONBA_PTR_SET_VALUE(lockExpireTime_, lockExpireTime) };


      // passwordSet Field Functions 
      bool hasPasswordSet() const { return this->passwordSet_ != nullptr;};
      void deletePasswordSet() { this->passwordSet_ = nullptr;};
      inline bool getPasswordSet() const { DARABONBA_PTR_GET_DEFAULT(passwordSet_, false) };
      inline Data& setPasswordSet(bool passwordSet) { DARABONBA_PTR_SET_VALUE(passwordSet_, passwordSet) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Data& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // phoneNumberVerified Field Functions 
      bool hasPhoneNumberVerified() const { return this->phoneNumberVerified_ != nullptr;};
      void deletePhoneNumberVerified() { this->phoneNumberVerified_ = nullptr;};
      inline bool getPhoneNumberVerified() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberVerified_, false) };
      inline Data& setPhoneNumberVerified(bool phoneNumberVerified) { DARABONBA_PTR_SET_VALUE(phoneNumberVerified_, phoneNumberVerified) };


      // phoneRegion Field Functions 
      bool hasPhoneRegion() const { return this->phoneRegion_ != nullptr;};
      void deletePhoneRegion() { this->phoneRegion_ = nullptr;};
      inline string getPhoneRegion() const { DARABONBA_PTR_GET_DEFAULT(phoneRegion_, "") };
      inline Data& setPhoneRegion(string phoneRegion) { DARABONBA_PTR_SET_VALUE(phoneRegion_, phoneRegion) };


      // registerTime Field Functions 
      bool hasRegisterTime() const { return this->registerTime_ != nullptr;};
      void deleteRegisterTime() { this->registerTime_ = nullptr;};
      inline int64_t getRegisterTime() const { DARABONBA_PTR_GET_DEFAULT(registerTime_, 0L) };
      inline Data& setRegisterTime(int64_t registerTime) { DARABONBA_PTR_SET_VALUE(registerTime_, registerTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Data& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userExternalId Field Functions 
      bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
      void deleteUserExternalId() { this->userExternalId_ = nullptr;};
      inline string getUserExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
      inline Data& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userSourceId Field Functions 
      bool hasUserSourceId() const { return this->userSourceId_ != nullptr;};
      void deleteUserSourceId() { this->userSourceId_ = nullptr;};
      inline string getUserSourceId() const { DARABONBA_PTR_GET_DEFAULT(userSourceId_, "") };
      inline Data& setUserSourceId(string userSourceId) { DARABONBA_PTR_SET_VALUE(userSourceId_, userSourceId) };


      // userSourceType Field Functions 
      bool hasUserSourceType() const { return this->userSourceType_ != nullptr;};
      void deleteUserSourceType() { this->userSourceType_ = nullptr;};
      inline string getUserSourceType() const { DARABONBA_PTR_GET_DEFAULT(userSourceType_, "") };
      inline Data& setUserSourceType(string userSourceType) { DARABONBA_PTR_SET_VALUE(userSourceType_, userSourceType) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Data& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // The time when the account expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> accountExpireTime_ {};
      // The time when the account was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> description_ {};
      // The display name of the account.
      shared_ptr<string> displayName_ {};
      // The email address of the user who owns the account.
      shared_ptr<string> email_ {};
      // Indicates whether the email address has been verified. A value of true indicates that the email address has been verified by the user or has been set to the verified status by the administrator. A value of false indicates that the email address has not been verified.
      shared_ptr<bool> emailVerified_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The time when the account lock expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> lockExpireTime_ {};
      shared_ptr<bool> passwordSet_ {};
      // The mobile number of the user who owns the account.
      shared_ptr<string> phoneNumber_ {};
      // Indicates whether the mobile number has been verified. A value of true indicates that the mobile number has been verified by the user or has been set to the verified status by the administrator. A value of false indicates that the mobile number has not been verified.
      shared_ptr<bool> phoneNumberVerified_ {};
      // The country code of the mobile number. For example, the country code of China is 86 without 00 or +.
      shared_ptr<string> phoneRegion_ {};
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

    virtual bool empty() const override { return this->data_ == nullptr
        && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListUsersResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListUsersResponseBody::Data>) };
    inline vector<ListUsersResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListUsersResponseBody::Data>) };
    inline ListUsersResponseBody& setData(const vector<ListUsersResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUsersResponseBody& setData(vector<ListUsersResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUsersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried EIAM accounts.
    shared_ptr<vector<ListUsersResponseBody::Data>> data_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
