// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOGINPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOGINPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateLoginProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoginProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MFABindRequired, MFABindRequired_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordResetRequired, passwordResetRequired_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoginProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MFABindRequired, MFABindRequired_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordResetRequired, passwordResetRequired_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    UpdateLoginProfileRequest() = default ;
    UpdateLoginProfileRequest(const UpdateLoginProfileRequest &) = default ;
    UpdateLoginProfileRequest(UpdateLoginProfileRequest &&) = default ;
    UpdateLoginProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoginProfileRequest() = default ;
    UpdateLoginProfileRequest& operator=(const UpdateLoginProfileRequest &) = default ;
    UpdateLoginProfileRequest& operator=(UpdateLoginProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->MFABindRequired_ == nullptr
        && this->password_ == nullptr && this->passwordResetRequired_ == nullptr && this->status_ == nullptr && this->userPrincipalName_ == nullptr; };
    // MFABindRequired Field Functions 
    bool hasMFABindRequired() const { return this->MFABindRequired_ != nullptr;};
    void deleteMFABindRequired() { this->MFABindRequired_ = nullptr;};
    inline bool getMFABindRequired() const { DARABONBA_PTR_GET_DEFAULT(MFABindRequired_, false) };
    inline UpdateLoginProfileRequest& setMFABindRequired(bool MFABindRequired) { DARABONBA_PTR_SET_VALUE(MFABindRequired_, MFABindRequired) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateLoginProfileRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordResetRequired Field Functions 
    bool hasPasswordResetRequired() const { return this->passwordResetRequired_ != nullptr;};
    void deletePasswordResetRequired() { this->passwordResetRequired_ = nullptr;};
    inline bool getPasswordResetRequired() const { DARABONBA_PTR_GET_DEFAULT(passwordResetRequired_, false) };
    inline UpdateLoginProfileRequest& setPasswordResetRequired(bool passwordResetRequired) { DARABONBA_PTR_SET_VALUE(passwordResetRequired_, passwordResetRequired) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateLoginProfileRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline UpdateLoginProfileRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // Specifies whether to forcefully enable multi-factor authentication (MFA) for the RAM user. Valid values:
    // 
    // *   true: forcefully enables MFA for the RAM user. The RAM user must bind an MFA device upon the next logon.
    // *   false: does not forcefully enable MFA for the RAM user.
    shared_ptr<bool> MFABindRequired_ {};
    // The new password that is used to log on to the console.
    // 
    // The new password must meet the complexity requirements.
    shared_ptr<string> password_ {};
    // Specifies whether the RAM user is required to reset the password upon the next logon. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> passwordResetRequired_ {};
    // Specifies whether to enable password-based logons to the console. Valid values:
    // 
    // *   Active: enables password-based logons to the console.
    // *   Inactive: disables password-based logons to the console.
    shared_ptr<string> status_ {};
    // The logon name of the RAM user.
    // 
    // This parameter is required.
    shared_ptr<string> userPrincipalName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
