// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINPROFILERESPONSEBODYLOGINPROFILE_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINPROFILERESPONSEBODYLOGINPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetLoginProfileResponseBodyLoginProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginProfileResponseBodyLoginProfile& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDisableLoginStatus, autoDisableLoginStatus_);
      DARABONBA_PTR_TO_JSON(LastLoginTime, lastLoginTime_);
      DARABONBA_PTR_TO_JSON(MFABindRequired, MFABindRequired_);
      DARABONBA_PTR_TO_JSON(PasswordResetRequired, passwordResetRequired_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginProfileResponseBodyLoginProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDisableLoginStatus, autoDisableLoginStatus_);
      DARABONBA_PTR_FROM_JSON(LastLoginTime, lastLoginTime_);
      DARABONBA_PTR_FROM_JSON(MFABindRequired, MFABindRequired_);
      DARABONBA_PTR_FROM_JSON(PasswordResetRequired, passwordResetRequired_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    GetLoginProfileResponseBodyLoginProfile() = default ;
    GetLoginProfileResponseBodyLoginProfile(const GetLoginProfileResponseBodyLoginProfile &) = default ;
    GetLoginProfileResponseBodyLoginProfile(GetLoginProfileResponseBodyLoginProfile &&) = default ;
    GetLoginProfileResponseBodyLoginProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginProfileResponseBodyLoginProfile() = default ;
    GetLoginProfileResponseBodyLoginProfile& operator=(const GetLoginProfileResponseBodyLoginProfile &) = default ;
    GetLoginProfileResponseBodyLoginProfile& operator=(GetLoginProfileResponseBodyLoginProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoDisableLoginStatus_ != nullptr
        && this->lastLoginTime_ != nullptr && this->MFABindRequired_ != nullptr && this->passwordResetRequired_ != nullptr && this->status_ != nullptr && this->updateDate_ != nullptr
        && this->userPrincipalName_ != nullptr; };
    // autoDisableLoginStatus Field Functions 
    bool hasAutoDisableLoginStatus() const { return this->autoDisableLoginStatus_ != nullptr;};
    void deleteAutoDisableLoginStatus() { this->autoDisableLoginStatus_ = nullptr;};
    inline string autoDisableLoginStatus() const { DARABONBA_PTR_GET_DEFAULT(autoDisableLoginStatus_, "") };
    inline GetLoginProfileResponseBodyLoginProfile& setAutoDisableLoginStatus(string autoDisableLoginStatus) { DARABONBA_PTR_SET_VALUE(autoDisableLoginStatus_, autoDisableLoginStatus) };


    // lastLoginTime Field Functions 
    bool hasLastLoginTime() const { return this->lastLoginTime_ != nullptr;};
    void deleteLastLoginTime() { this->lastLoginTime_ = nullptr;};
    inline string lastLoginTime() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTime_, "") };
    inline GetLoginProfileResponseBodyLoginProfile& setLastLoginTime(string lastLoginTime) { DARABONBA_PTR_SET_VALUE(lastLoginTime_, lastLoginTime) };


    // MFABindRequired Field Functions 
    bool hasMFABindRequired() const { return this->MFABindRequired_ != nullptr;};
    void deleteMFABindRequired() { this->MFABindRequired_ = nullptr;};
    inline bool MFABindRequired() const { DARABONBA_PTR_GET_DEFAULT(MFABindRequired_, false) };
    inline GetLoginProfileResponseBodyLoginProfile& setMFABindRequired(bool MFABindRequired) { DARABONBA_PTR_SET_VALUE(MFABindRequired_, MFABindRequired) };


    // passwordResetRequired Field Functions 
    bool hasPasswordResetRequired() const { return this->passwordResetRequired_ != nullptr;};
    void deletePasswordResetRequired() { this->passwordResetRequired_ = nullptr;};
    inline bool passwordResetRequired() const { DARABONBA_PTR_GET_DEFAULT(passwordResetRequired_, false) };
    inline GetLoginProfileResponseBodyLoginProfile& setPasswordResetRequired(bool passwordResetRequired) { DARABONBA_PTR_SET_VALUE(passwordResetRequired_, passwordResetRequired) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLoginProfileResponseBodyLoginProfile& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline GetLoginProfileResponseBodyLoginProfile& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline GetLoginProfileResponseBodyLoginProfile& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // Indicates whether console logon is automatically disabled if a RAM user does not log on to the console in the previous specified number of days. The number of days is specified by MaxIdleDaysForUsers. The default value is true, and you cannot change the value.
    std::shared_ptr<string> autoDisableLoginStatus_ = nullptr;
    // The time of the most recent logon. The time is displayed in UTC.
    std::shared_ptr<string> lastLoginTime_ = nullptr;
    // Indicates whether multi-factor authentication (MFA) must be enabled. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<bool> MFABindRequired_ = nullptr;
    // Indicates whether the RAM user is required to reset the password upon the next logon. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<bool> passwordResetRequired_ = nullptr;
    // Indicates whether console logon is enabled. Valid values:
    // 
    // *   Active: enabled.
    // *   Inactive: disabled.
    std::shared_ptr<string> status_ = nullptr;
    // The modification time. The time is displayed in UTC.
    std::shared_ptr<string> updateDate_ = nullptr;
    // The logon name of the RAM user.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
