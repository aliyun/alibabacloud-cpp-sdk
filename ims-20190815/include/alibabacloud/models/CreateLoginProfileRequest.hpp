// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOGINPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOGINPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateLoginProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoginProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MFABindRequired, MFABindRequired_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordResetRequired, passwordResetRequired_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoginProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MFABindRequired, MFABindRequired_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordResetRequired, passwordResetRequired_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    CreateLoginProfileRequest() = default ;
    CreateLoginProfileRequest(const CreateLoginProfileRequest &) = default ;
    CreateLoginProfileRequest(CreateLoginProfileRequest &&) = default ;
    CreateLoginProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoginProfileRequest() = default ;
    CreateLoginProfileRequest& operator=(const CreateLoginProfileRequest &) = default ;
    CreateLoginProfileRequest& operator=(CreateLoginProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->MFABindRequired_ != nullptr
        && this->password_ != nullptr && this->passwordResetRequired_ != nullptr && this->status_ != nullptr && this->userPrincipalName_ != nullptr; };
    // MFABindRequired Field Functions 
    bool hasMFABindRequired() const { return this->MFABindRequired_ != nullptr;};
    void deleteMFABindRequired() { this->MFABindRequired_ = nullptr;};
    inline bool MFABindRequired() const { DARABONBA_PTR_GET_DEFAULT(MFABindRequired_, false) };
    inline CreateLoginProfileRequest& setMFABindRequired(bool MFABindRequired) { DARABONBA_PTR_SET_VALUE(MFABindRequired_, MFABindRequired) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateLoginProfileRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordResetRequired Field Functions 
    bool hasPasswordResetRequired() const { return this->passwordResetRequired_ != nullptr;};
    void deletePasswordResetRequired() { this->passwordResetRequired_ = nullptr;};
    inline bool passwordResetRequired() const { DARABONBA_PTR_GET_DEFAULT(passwordResetRequired_, false) };
    inline CreateLoginProfileRequest& setPasswordResetRequired(bool passwordResetRequired) { DARABONBA_PTR_SET_VALUE(passwordResetRequired_, passwordResetRequired) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateLoginProfileRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline CreateLoginProfileRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // Specifies whether to forcefully enable multi-factor authentication (MFA) for the RAM user. Valid values:
    // 
    // *   true: forcefully enables MFA for the RAM user. The RAM user must bind an MFA device upon the next logon.
    // *   false (default): does not forcefully enable MFA for the RAM user.
    std::shared_ptr<bool> MFABindRequired_ = nullptr;
    // The password that the RAM user uses to log on to the console.
    // 
    // The password must meet the complexity requirements.
    std::shared_ptr<string> password_ = nullptr;
    // Specifies whether the RAM user is required to reset the password upon the next logon. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> passwordResetRequired_ = nullptr;
    // Specifies whether to enable password-based logons to the console. Valid values:
    // 
    // *   Active: Password-based logon is enabled. This is the default value.
    // *   Inactive: Password-based logon is disabled.
    std::shared_ptr<string> status_ = nullptr;
    // The logon name of the RAM user.
    // 
    // This parameter is required.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
