// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMFAAUTHENTICATIONSETTINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMFAAUTHENTICATIONSETTINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateMFAAuthenticationSettingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMFAAuthenticationSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedVerificationTypes, allowedVerificationTypesShrink_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(MFAAuthenticationSettings, MFAAuthenticationSettings_);
      DARABONBA_PTR_TO_JSON(OperationForRiskLogin, operationForRiskLogin_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMFAAuthenticationSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedVerificationTypes, allowedVerificationTypesShrink_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(MFAAuthenticationSettings, MFAAuthenticationSettings_);
      DARABONBA_PTR_FROM_JSON(OperationForRiskLogin, operationForRiskLogin_);
    };
    UpdateMFAAuthenticationSettingsShrinkRequest() = default ;
    UpdateMFAAuthenticationSettingsShrinkRequest(const UpdateMFAAuthenticationSettingsShrinkRequest &) = default ;
    UpdateMFAAuthenticationSettingsShrinkRequest(UpdateMFAAuthenticationSettingsShrinkRequest &&) = default ;
    UpdateMFAAuthenticationSettingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMFAAuthenticationSettingsShrinkRequest() = default ;
    UpdateMFAAuthenticationSettingsShrinkRequest& operator=(const UpdateMFAAuthenticationSettingsShrinkRequest &) = default ;
    UpdateMFAAuthenticationSettingsShrinkRequest& operator=(UpdateMFAAuthenticationSettingsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedVerificationTypesShrink_ == nullptr
        && this->directoryId_ == nullptr && this->MFAAuthenticationSettings_ == nullptr && this->operationForRiskLogin_ == nullptr; };
    // allowedVerificationTypesShrink Field Functions 
    bool hasAllowedVerificationTypesShrink() const { return this->allowedVerificationTypesShrink_ != nullptr;};
    void deleteAllowedVerificationTypesShrink() { this->allowedVerificationTypesShrink_ = nullptr;};
    inline string getAllowedVerificationTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(allowedVerificationTypesShrink_, "") };
    inline UpdateMFAAuthenticationSettingsShrinkRequest& setAllowedVerificationTypesShrink(string allowedVerificationTypesShrink) { DARABONBA_PTR_SET_VALUE(allowedVerificationTypesShrink_, allowedVerificationTypesShrink) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateMFAAuthenticationSettingsShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // MFAAuthenticationSettings Field Functions 
    bool hasMFAAuthenticationSettings() const { return this->MFAAuthenticationSettings_ != nullptr;};
    void deleteMFAAuthenticationSettings() { this->MFAAuthenticationSettings_ = nullptr;};
    inline string getMFAAuthenticationSettings() const { DARABONBA_PTR_GET_DEFAULT(MFAAuthenticationSettings_, "") };
    inline UpdateMFAAuthenticationSettingsShrinkRequest& setMFAAuthenticationSettings(string MFAAuthenticationSettings) { DARABONBA_PTR_SET_VALUE(MFAAuthenticationSettings_, MFAAuthenticationSettings) };


    // operationForRiskLogin Field Functions 
    bool hasOperationForRiskLogin() const { return this->operationForRiskLogin_ != nullptr;};
    void deleteOperationForRiskLogin() { this->operationForRiskLogin_ = nullptr;};
    inline string getOperationForRiskLogin() const { DARABONBA_PTR_GET_DEFAULT(operationForRiskLogin_, "") };
    inline UpdateMFAAuthenticationSettingsShrinkRequest& setOperationForRiskLogin(string operationForRiskLogin) { DARABONBA_PTR_SET_VALUE(operationForRiskLogin_, operationForRiskLogin) };


  protected:
    shared_ptr<string> allowedVerificationTypesShrink_ {};
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The global MFA settings. Valid values:
    // 
    // - Enabled: MFA verification is enabled for all users.
    // - Byuser: MFA verification depends on the individual MFA settings of each user. For more information about individual user MFA settings, see [UpdateUserMFAAuthenticationSettings](https://help.aliyun.com/document_detail/450135.html).
    // - Disabled: MFA verification is disabled for all users.
    // - OnlyRiskyLogin: MFA verification is required only for unusual logon attempts.
    shared_ptr<string> MFAAuthenticationSettings_ {};
    // The action to take when the MFA settings option is set to verify only for unusual logon attempts. Valid values:
    // 
    // - Autonomous: Users can skip MFA binding during unusual logon, but users who have already bound MFA must complete MFA verification.
    // - EnforceVerify: Users who have not bound MFA are required to bind it, and users who have already bound MFA must complete verification.
    shared_ptr<string> operationForRiskLogin_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
