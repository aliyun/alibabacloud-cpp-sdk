// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetLoginProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoginProfile, loginProfile_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginProfile, loginProfile_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLoginProfileResponseBody() = default ;
    GetLoginProfileResponseBody(const GetLoginProfileResponseBody &) = default ;
    GetLoginProfileResponseBody(GetLoginProfileResponseBody &&) = default ;
    GetLoginProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginProfileResponseBody() = default ;
    GetLoginProfileResponseBody& operator=(const GetLoginProfileResponseBody &) = default ;
    GetLoginProfileResponseBody& operator=(GetLoginProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoginProfile : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoginProfile& obj) { 
        DARABONBA_PTR_TO_JSON(AutoDisableLoginStatus, autoDisableLoginStatus_);
        DARABONBA_PTR_TO_JSON(LastLoginTime, lastLoginTime_);
        DARABONBA_PTR_TO_JSON(MFABindRequired, MFABindRequired_);
        DARABONBA_PTR_TO_JSON(PasswordResetRequired, passwordResetRequired_);
        DARABONBA_PTR_TO_JSON(PasswordStatus, passwordStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
      };
      friend void from_json(const Darabonba::Json& j, LoginProfile& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoDisableLoginStatus, autoDisableLoginStatus_);
        DARABONBA_PTR_FROM_JSON(LastLoginTime, lastLoginTime_);
        DARABONBA_PTR_FROM_JSON(MFABindRequired, MFABindRequired_);
        DARABONBA_PTR_FROM_JSON(PasswordResetRequired, passwordResetRequired_);
        DARABONBA_PTR_FROM_JSON(PasswordStatus, passwordStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
        DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
      };
      LoginProfile() = default ;
      LoginProfile(const LoginProfile &) = default ;
      LoginProfile(LoginProfile &&) = default ;
      LoginProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoginProfile() = default ;
      LoginProfile& operator=(const LoginProfile &) = default ;
      LoginProfile& operator=(LoginProfile &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoDisableLoginStatus_ == nullptr
        && this->lastLoginTime_ == nullptr && this->MFABindRequired_ == nullptr && this->passwordResetRequired_ == nullptr && this->passwordStatus_ == nullptr && this->status_ == nullptr
        && this->updateDate_ == nullptr && this->userPrincipalName_ == nullptr; };
      // autoDisableLoginStatus Field Functions 
      bool hasAutoDisableLoginStatus() const { return this->autoDisableLoginStatus_ != nullptr;};
      void deleteAutoDisableLoginStatus() { this->autoDisableLoginStatus_ = nullptr;};
      inline string getAutoDisableLoginStatus() const { DARABONBA_PTR_GET_DEFAULT(autoDisableLoginStatus_, "") };
      inline LoginProfile& setAutoDisableLoginStatus(string autoDisableLoginStatus) { DARABONBA_PTR_SET_VALUE(autoDisableLoginStatus_, autoDisableLoginStatus) };


      // lastLoginTime Field Functions 
      bool hasLastLoginTime() const { return this->lastLoginTime_ != nullptr;};
      void deleteLastLoginTime() { this->lastLoginTime_ = nullptr;};
      inline string getLastLoginTime() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTime_, "") };
      inline LoginProfile& setLastLoginTime(string lastLoginTime) { DARABONBA_PTR_SET_VALUE(lastLoginTime_, lastLoginTime) };


      // MFABindRequired Field Functions 
      bool hasMFABindRequired() const { return this->MFABindRequired_ != nullptr;};
      void deleteMFABindRequired() { this->MFABindRequired_ = nullptr;};
      inline bool getMFABindRequired() const { DARABONBA_PTR_GET_DEFAULT(MFABindRequired_, false) };
      inline LoginProfile& setMFABindRequired(bool MFABindRequired) { DARABONBA_PTR_SET_VALUE(MFABindRequired_, MFABindRequired) };


      // passwordResetRequired Field Functions 
      bool hasPasswordResetRequired() const { return this->passwordResetRequired_ != nullptr;};
      void deletePasswordResetRequired() { this->passwordResetRequired_ = nullptr;};
      inline bool getPasswordResetRequired() const { DARABONBA_PTR_GET_DEFAULT(passwordResetRequired_, false) };
      inline LoginProfile& setPasswordResetRequired(bool passwordResetRequired) { DARABONBA_PTR_SET_VALUE(passwordResetRequired_, passwordResetRequired) };


      // passwordStatus Field Functions 
      bool hasPasswordStatus() const { return this->passwordStatus_ != nullptr;};
      void deletePasswordStatus() { this->passwordStatus_ = nullptr;};
      inline string getPasswordStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordStatus_, "") };
      inline LoginProfile& setPasswordStatus(string passwordStatus) { DARABONBA_PTR_SET_VALUE(passwordStatus_, passwordStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LoginProfile& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline LoginProfile& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      // userPrincipalName Field Functions 
      bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
      void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
      inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
      inline LoginProfile& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


    protected:
      // Indicates whether console logon is automatically disabled if a RAM user does not log on to the console in the previous specified number of days. The number of days is specified by MaxIdleDaysForUsers. The default value is true, and you cannot change the value.
      shared_ptr<string> autoDisableLoginStatus_ {};
      // The time of the most recent logon. The time is displayed in UTC.
      shared_ptr<string> lastLoginTime_ {};
      // Indicates whether multi-factor authentication (MFA) must be enabled. Valid values:
      // 
      // *   false
      // *   true
      shared_ptr<bool> MFABindRequired_ {};
      // Indicates whether the RAM user is required to reset the password upon the next logon. Valid values:
      // 
      // *   false
      // *   true
      shared_ptr<bool> passwordResetRequired_ {};
      shared_ptr<string> passwordStatus_ {};
      // Indicates whether console logon is enabled. Valid values:
      // 
      // *   Active: enabled.
      // *   Inactive: disabled.
      shared_ptr<string> status_ {};
      // The modification time. The time is displayed in UTC.
      shared_ptr<string> updateDate_ {};
      // The logon name of the RAM user.
      shared_ptr<string> userPrincipalName_ {};
    };

    virtual bool empty() const override { return this->loginProfile_ == nullptr
        && this->requestId_ == nullptr; };
    // loginProfile Field Functions 
    bool hasLoginProfile() const { return this->loginProfile_ != nullptr;};
    void deleteLoginProfile() { this->loginProfile_ = nullptr;};
    inline const GetLoginProfileResponseBody::LoginProfile & getLoginProfile() const { DARABONBA_PTR_GET_CONST(loginProfile_, GetLoginProfileResponseBody::LoginProfile) };
    inline GetLoginProfileResponseBody::LoginProfile getLoginProfile() { DARABONBA_PTR_GET(loginProfile_, GetLoginProfileResponseBody::LoginProfile) };
    inline GetLoginProfileResponseBody& setLoginProfile(const GetLoginProfileResponseBody::LoginProfile & loginProfile) { DARABONBA_PTR_SET_VALUE(loginProfile_, loginProfile) };
    inline GetLoginProfileResponseBody& setLoginProfile(GetLoginProfileResponseBody::LoginProfile && loginProfile) { DARABONBA_PTR_SET_RVALUE(loginProfile_, loginProfile) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLoginProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The console logon configurations.
    shared_ptr<GetLoginProfileResponseBody::LoginProfile> loginProfile_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
