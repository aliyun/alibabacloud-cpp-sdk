// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMFAAUTHENTICATIONSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMFAAUTHENTICATIONSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateMFAAuthenticationSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMFAAuthenticationSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedVerificationTypes, allowedVerificationTypes_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(MFAAuthenticationSettings, MFAAuthenticationSettings_);
      DARABONBA_PTR_TO_JSON(OperationForRiskLogin, operationForRiskLogin_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMFAAuthenticationSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedVerificationTypes, allowedVerificationTypes_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(MFAAuthenticationSettings, MFAAuthenticationSettings_);
      DARABONBA_PTR_FROM_JSON(OperationForRiskLogin, operationForRiskLogin_);
    };
    UpdateMFAAuthenticationSettingsRequest() = default ;
    UpdateMFAAuthenticationSettingsRequest(const UpdateMFAAuthenticationSettingsRequest &) = default ;
    UpdateMFAAuthenticationSettingsRequest(UpdateMFAAuthenticationSettingsRequest &&) = default ;
    UpdateMFAAuthenticationSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMFAAuthenticationSettingsRequest() = default ;
    UpdateMFAAuthenticationSettingsRequest& operator=(const UpdateMFAAuthenticationSettingsRequest &) = default ;
    UpdateMFAAuthenticationSettingsRequest& operator=(UpdateMFAAuthenticationSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedVerificationTypes_ == nullptr
        && this->directoryId_ == nullptr && this->MFAAuthenticationSettings_ == nullptr && this->operationForRiskLogin_ == nullptr; };
    // allowedVerificationTypes Field Functions 
    bool hasAllowedVerificationTypes() const { return this->allowedVerificationTypes_ != nullptr;};
    void deleteAllowedVerificationTypes() { this->allowedVerificationTypes_ = nullptr;};
    inline const vector<string> & getAllowedVerificationTypes() const { DARABONBA_PTR_GET_CONST(allowedVerificationTypes_, vector<string>) };
    inline vector<string> getAllowedVerificationTypes() { DARABONBA_PTR_GET(allowedVerificationTypes_, vector<string>) };
    inline UpdateMFAAuthenticationSettingsRequest& setAllowedVerificationTypes(const vector<string> & allowedVerificationTypes) { DARABONBA_PTR_SET_VALUE(allowedVerificationTypes_, allowedVerificationTypes) };
    inline UpdateMFAAuthenticationSettingsRequest& setAllowedVerificationTypes(vector<string> && allowedVerificationTypes) { DARABONBA_PTR_SET_RVALUE(allowedVerificationTypes_, allowedVerificationTypes) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateMFAAuthenticationSettingsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // MFAAuthenticationSettings Field Functions 
    bool hasMFAAuthenticationSettings() const { return this->MFAAuthenticationSettings_ != nullptr;};
    void deleteMFAAuthenticationSettings() { this->MFAAuthenticationSettings_ = nullptr;};
    inline string getMFAAuthenticationSettings() const { DARABONBA_PTR_GET_DEFAULT(MFAAuthenticationSettings_, "") };
    inline UpdateMFAAuthenticationSettingsRequest& setMFAAuthenticationSettings(string MFAAuthenticationSettings) { DARABONBA_PTR_SET_VALUE(MFAAuthenticationSettings_, MFAAuthenticationSettings) };


    // operationForRiskLogin Field Functions 
    bool hasOperationForRiskLogin() const { return this->operationForRiskLogin_ != nullptr;};
    void deleteOperationForRiskLogin() { this->operationForRiskLogin_ = nullptr;};
    inline string getOperationForRiskLogin() const { DARABONBA_PTR_GET_DEFAULT(operationForRiskLogin_, "") };
    inline UpdateMFAAuthenticationSettingsRequest& setOperationForRiskLogin(string operationForRiskLogin) { DARABONBA_PTR_SET_VALUE(operationForRiskLogin_, operationForRiskLogin) };


  protected:
    shared_ptr<vector<string>> allowedVerificationTypes_ {};
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
