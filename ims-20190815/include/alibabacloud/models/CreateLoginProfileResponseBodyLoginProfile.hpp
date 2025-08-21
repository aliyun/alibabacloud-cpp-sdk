// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOGINPROFILERESPONSEBODYLOGINPROFILE_HPP_
#define ALIBABACLOUD_MODELS_CREATELOGINPROFILERESPONSEBODYLOGINPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateLoginProfileResponseBodyLoginProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoginProfileResponseBodyLoginProfile& obj) { 
      DARABONBA_PTR_TO_JSON(MFABindRequired, MFABindRequired_);
      DARABONBA_PTR_TO_JSON(PasswordResetRequired, passwordResetRequired_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoginProfileResponseBodyLoginProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(MFABindRequired, MFABindRequired_);
      DARABONBA_PTR_FROM_JSON(PasswordResetRequired, passwordResetRequired_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    CreateLoginProfileResponseBodyLoginProfile() = default ;
    CreateLoginProfileResponseBodyLoginProfile(const CreateLoginProfileResponseBodyLoginProfile &) = default ;
    CreateLoginProfileResponseBodyLoginProfile(CreateLoginProfileResponseBodyLoginProfile &&) = default ;
    CreateLoginProfileResponseBodyLoginProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoginProfileResponseBodyLoginProfile() = default ;
    CreateLoginProfileResponseBodyLoginProfile& operator=(const CreateLoginProfileResponseBodyLoginProfile &) = default ;
    CreateLoginProfileResponseBodyLoginProfile& operator=(CreateLoginProfileResponseBodyLoginProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->MFABindRequired_ != nullptr
        && this->passwordResetRequired_ != nullptr && this->status_ != nullptr && this->updateDate_ != nullptr && this->userPrincipalName_ != nullptr; };
    // MFABindRequired Field Functions 
    bool hasMFABindRequired() const { return this->MFABindRequired_ != nullptr;};
    void deleteMFABindRequired() { this->MFABindRequired_ = nullptr;};
    inline bool MFABindRequired() const { DARABONBA_PTR_GET_DEFAULT(MFABindRequired_, false) };
    inline CreateLoginProfileResponseBodyLoginProfile& setMFABindRequired(bool MFABindRequired) { DARABONBA_PTR_SET_VALUE(MFABindRequired_, MFABindRequired) };


    // passwordResetRequired Field Functions 
    bool hasPasswordResetRequired() const { return this->passwordResetRequired_ != nullptr;};
    void deletePasswordResetRequired() { this->passwordResetRequired_ = nullptr;};
    inline bool passwordResetRequired() const { DARABONBA_PTR_GET_DEFAULT(passwordResetRequired_, false) };
    inline CreateLoginProfileResponseBodyLoginProfile& setPasswordResetRequired(bool passwordResetRequired) { DARABONBA_PTR_SET_VALUE(passwordResetRequired_, passwordResetRequired) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateLoginProfileResponseBodyLoginProfile& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline CreateLoginProfileResponseBodyLoginProfile& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline CreateLoginProfileResponseBodyLoginProfile& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // Indicates whether to forcefully enable MFA for the RAM user.
    std::shared_ptr<bool> MFABindRequired_ = nullptr;
    // Indicates whether the RAM user is required to reset the password upon the next logon.
    std::shared_ptr<bool> passwordResetRequired_ = nullptr;
    // Indicates whether to enable password-based logons to the console.
    std::shared_ptr<string> status_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateDate_ = nullptr;
    // The logon name of the RAM user.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
