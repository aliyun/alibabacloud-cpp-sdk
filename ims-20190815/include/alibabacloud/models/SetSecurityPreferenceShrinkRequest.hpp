// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSECURITYPREFERENCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSECURITYPREFERENCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetSecurityPreferenceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSecurityPreferenceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUserToChangePassword, allowUserToChangePassword_);
      DARABONBA_PTR_TO_JSON(AllowUserToLoginWithPasskey, allowUserToLoginWithPasskey_);
      DARABONBA_PTR_TO_JSON(AllowUserToManageAccessKeys, allowUserToManageAccessKeys_);
      DARABONBA_PTR_TO_JSON(AllowUserToManageMFADevices, allowUserToManageMFADevices_);
      DARABONBA_PTR_TO_JSON(AllowUserToManagePersonalDingTalk, allowUserToManagePersonalDingTalk_);
      DARABONBA_PTR_TO_JSON(EnableSaveMFATicket, enableSaveMFATicket_);
      DARABONBA_PTR_TO_JSON(LoginNetworkMasks, loginNetworkMasks_);
      DARABONBA_PTR_TO_JSON(LoginSessionDuration, loginSessionDuration_);
      DARABONBA_PTR_TO_JSON(MFAOperationForLogin, MFAOperationForLogin_);
      DARABONBA_PTR_TO_JSON(MaxIdleDaysForAccessKeys, maxIdleDaysForAccessKeys_);
      DARABONBA_PTR_TO_JSON(MaxIdleDaysForUsers, maxIdleDaysForUsers_);
      DARABONBA_PTR_TO_JSON(OperationForRiskLogin, operationForRiskLogin_);
      DARABONBA_PTR_TO_JSON(VerificationTypes, verificationTypesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SetSecurityPreferenceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUserToChangePassword, allowUserToChangePassword_);
      DARABONBA_PTR_FROM_JSON(AllowUserToLoginWithPasskey, allowUserToLoginWithPasskey_);
      DARABONBA_PTR_FROM_JSON(AllowUserToManageAccessKeys, allowUserToManageAccessKeys_);
      DARABONBA_PTR_FROM_JSON(AllowUserToManageMFADevices, allowUserToManageMFADevices_);
      DARABONBA_PTR_FROM_JSON(AllowUserToManagePersonalDingTalk, allowUserToManagePersonalDingTalk_);
      DARABONBA_PTR_FROM_JSON(EnableSaveMFATicket, enableSaveMFATicket_);
      DARABONBA_PTR_FROM_JSON(LoginNetworkMasks, loginNetworkMasks_);
      DARABONBA_PTR_FROM_JSON(LoginSessionDuration, loginSessionDuration_);
      DARABONBA_PTR_FROM_JSON(MFAOperationForLogin, MFAOperationForLogin_);
      DARABONBA_PTR_FROM_JSON(MaxIdleDaysForAccessKeys, maxIdleDaysForAccessKeys_);
      DARABONBA_PTR_FROM_JSON(MaxIdleDaysForUsers, maxIdleDaysForUsers_);
      DARABONBA_PTR_FROM_JSON(OperationForRiskLogin, operationForRiskLogin_);
      DARABONBA_PTR_FROM_JSON(VerificationTypes, verificationTypesShrink_);
    };
    SetSecurityPreferenceShrinkRequest() = default ;
    SetSecurityPreferenceShrinkRequest(const SetSecurityPreferenceShrinkRequest &) = default ;
    SetSecurityPreferenceShrinkRequest(SetSecurityPreferenceShrinkRequest &&) = default ;
    SetSecurityPreferenceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSecurityPreferenceShrinkRequest() = default ;
    SetSecurityPreferenceShrinkRequest& operator=(const SetSecurityPreferenceShrinkRequest &) = default ;
    SetSecurityPreferenceShrinkRequest& operator=(SetSecurityPreferenceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowUserToChangePassword_ == nullptr
        && this->allowUserToLoginWithPasskey_ == nullptr && this->allowUserToManageAccessKeys_ == nullptr && this->allowUserToManageMFADevices_ == nullptr && this->allowUserToManagePersonalDingTalk_ == nullptr && this->enableSaveMFATicket_ == nullptr
        && this->loginNetworkMasks_ == nullptr && this->loginSessionDuration_ == nullptr && this->MFAOperationForLogin_ == nullptr && this->maxIdleDaysForAccessKeys_ == nullptr && this->maxIdleDaysForUsers_ == nullptr
        && this->operationForRiskLogin_ == nullptr && this->verificationTypesShrink_ == nullptr; };
    // allowUserToChangePassword Field Functions 
    bool hasAllowUserToChangePassword() const { return this->allowUserToChangePassword_ != nullptr;};
    void deleteAllowUserToChangePassword() { this->allowUserToChangePassword_ = nullptr;};
    inline bool getAllowUserToChangePassword() const { DARABONBA_PTR_GET_DEFAULT(allowUserToChangePassword_, false) };
    inline SetSecurityPreferenceShrinkRequest& setAllowUserToChangePassword(bool allowUserToChangePassword) { DARABONBA_PTR_SET_VALUE(allowUserToChangePassword_, allowUserToChangePassword) };


    // allowUserToLoginWithPasskey Field Functions 
    bool hasAllowUserToLoginWithPasskey() const { return this->allowUserToLoginWithPasskey_ != nullptr;};
    void deleteAllowUserToLoginWithPasskey() { this->allowUserToLoginWithPasskey_ = nullptr;};
    inline bool getAllowUserToLoginWithPasskey() const { DARABONBA_PTR_GET_DEFAULT(allowUserToLoginWithPasskey_, false) };
    inline SetSecurityPreferenceShrinkRequest& setAllowUserToLoginWithPasskey(bool allowUserToLoginWithPasskey) { DARABONBA_PTR_SET_VALUE(allowUserToLoginWithPasskey_, allowUserToLoginWithPasskey) };


    // allowUserToManageAccessKeys Field Functions 
    bool hasAllowUserToManageAccessKeys() const { return this->allowUserToManageAccessKeys_ != nullptr;};
    void deleteAllowUserToManageAccessKeys() { this->allowUserToManageAccessKeys_ = nullptr;};
    inline bool getAllowUserToManageAccessKeys() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManageAccessKeys_, false) };
    inline SetSecurityPreferenceShrinkRequest& setAllowUserToManageAccessKeys(bool allowUserToManageAccessKeys) { DARABONBA_PTR_SET_VALUE(allowUserToManageAccessKeys_, allowUserToManageAccessKeys) };


    // allowUserToManageMFADevices Field Functions 
    bool hasAllowUserToManageMFADevices() const { return this->allowUserToManageMFADevices_ != nullptr;};
    void deleteAllowUserToManageMFADevices() { this->allowUserToManageMFADevices_ = nullptr;};
    inline bool getAllowUserToManageMFADevices() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManageMFADevices_, false) };
    inline SetSecurityPreferenceShrinkRequest& setAllowUserToManageMFADevices(bool allowUserToManageMFADevices) { DARABONBA_PTR_SET_VALUE(allowUserToManageMFADevices_, allowUserToManageMFADevices) };


    // allowUserToManagePersonalDingTalk Field Functions 
    bool hasAllowUserToManagePersonalDingTalk() const { return this->allowUserToManagePersonalDingTalk_ != nullptr;};
    void deleteAllowUserToManagePersonalDingTalk() { this->allowUserToManagePersonalDingTalk_ = nullptr;};
    inline bool getAllowUserToManagePersonalDingTalk() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManagePersonalDingTalk_, false) };
    inline SetSecurityPreferenceShrinkRequest& setAllowUserToManagePersonalDingTalk(bool allowUserToManagePersonalDingTalk) { DARABONBA_PTR_SET_VALUE(allowUserToManagePersonalDingTalk_, allowUserToManagePersonalDingTalk) };


    // enableSaveMFATicket Field Functions 
    bool hasEnableSaveMFATicket() const { return this->enableSaveMFATicket_ != nullptr;};
    void deleteEnableSaveMFATicket() { this->enableSaveMFATicket_ = nullptr;};
    inline bool getEnableSaveMFATicket() const { DARABONBA_PTR_GET_DEFAULT(enableSaveMFATicket_, false) };
    inline SetSecurityPreferenceShrinkRequest& setEnableSaveMFATicket(bool enableSaveMFATicket) { DARABONBA_PTR_SET_VALUE(enableSaveMFATicket_, enableSaveMFATicket) };


    // loginNetworkMasks Field Functions 
    bool hasLoginNetworkMasks() const { return this->loginNetworkMasks_ != nullptr;};
    void deleteLoginNetworkMasks() { this->loginNetworkMasks_ = nullptr;};
    inline string getLoginNetworkMasks() const { DARABONBA_PTR_GET_DEFAULT(loginNetworkMasks_, "") };
    inline SetSecurityPreferenceShrinkRequest& setLoginNetworkMasks(string loginNetworkMasks) { DARABONBA_PTR_SET_VALUE(loginNetworkMasks_, loginNetworkMasks) };


    // loginSessionDuration Field Functions 
    bool hasLoginSessionDuration() const { return this->loginSessionDuration_ != nullptr;};
    void deleteLoginSessionDuration() { this->loginSessionDuration_ = nullptr;};
    inline int32_t getLoginSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(loginSessionDuration_, 0) };
    inline SetSecurityPreferenceShrinkRequest& setLoginSessionDuration(int32_t loginSessionDuration) { DARABONBA_PTR_SET_VALUE(loginSessionDuration_, loginSessionDuration) };


    // MFAOperationForLogin Field Functions 
    bool hasMFAOperationForLogin() const { return this->MFAOperationForLogin_ != nullptr;};
    void deleteMFAOperationForLogin() { this->MFAOperationForLogin_ = nullptr;};
    inline string getMFAOperationForLogin() const { DARABONBA_PTR_GET_DEFAULT(MFAOperationForLogin_, "") };
    inline SetSecurityPreferenceShrinkRequest& setMFAOperationForLogin(string MFAOperationForLogin) { DARABONBA_PTR_SET_VALUE(MFAOperationForLogin_, MFAOperationForLogin) };


    // maxIdleDaysForAccessKeys Field Functions 
    bool hasMaxIdleDaysForAccessKeys() const { return this->maxIdleDaysForAccessKeys_ != nullptr;};
    void deleteMaxIdleDaysForAccessKeys() { this->maxIdleDaysForAccessKeys_ = nullptr;};
    inline int32_t getMaxIdleDaysForAccessKeys() const { DARABONBA_PTR_GET_DEFAULT(maxIdleDaysForAccessKeys_, 0) };
    inline SetSecurityPreferenceShrinkRequest& setMaxIdleDaysForAccessKeys(int32_t maxIdleDaysForAccessKeys) { DARABONBA_PTR_SET_VALUE(maxIdleDaysForAccessKeys_, maxIdleDaysForAccessKeys) };


    // maxIdleDaysForUsers Field Functions 
    bool hasMaxIdleDaysForUsers() const { return this->maxIdleDaysForUsers_ != nullptr;};
    void deleteMaxIdleDaysForUsers() { this->maxIdleDaysForUsers_ = nullptr;};
    inline int32_t getMaxIdleDaysForUsers() const { DARABONBA_PTR_GET_DEFAULT(maxIdleDaysForUsers_, 0) };
    inline SetSecurityPreferenceShrinkRequest& setMaxIdleDaysForUsers(int32_t maxIdleDaysForUsers) { DARABONBA_PTR_SET_VALUE(maxIdleDaysForUsers_, maxIdleDaysForUsers) };


    // operationForRiskLogin Field Functions 
    bool hasOperationForRiskLogin() const { return this->operationForRiskLogin_ != nullptr;};
    void deleteOperationForRiskLogin() { this->operationForRiskLogin_ = nullptr;};
    inline string getOperationForRiskLogin() const { DARABONBA_PTR_GET_DEFAULT(operationForRiskLogin_, "") };
    inline SetSecurityPreferenceShrinkRequest& setOperationForRiskLogin(string operationForRiskLogin) { DARABONBA_PTR_SET_VALUE(operationForRiskLogin_, operationForRiskLogin) };


    // verificationTypesShrink Field Functions 
    bool hasVerificationTypesShrink() const { return this->verificationTypesShrink_ != nullptr;};
    void deleteVerificationTypesShrink() { this->verificationTypesShrink_ = nullptr;};
    inline string getVerificationTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(verificationTypesShrink_, "") };
    inline SetSecurityPreferenceShrinkRequest& setVerificationTypesShrink(string verificationTypesShrink) { DARABONBA_PTR_SET_VALUE(verificationTypesShrink_, verificationTypesShrink) };


  protected:
    // Specifies whether RAM users can manage their own passwords. Valid values:
    // 
    // - true (default)
    // 
    // - false
    shared_ptr<bool> allowUserToChangePassword_ {};
    // Specifies whether RAM users can log on using passkeys. Valid values:
    // 
    // - true (default)
    // 
    // - false
    shared_ptr<bool> allowUserToLoginWithPasskey_ {};
    // Specifies whether RAM users can manage their own AccessKey pairs. Valid values:
    // 
    // - true:
    // 
    // - false (default)
    shared_ptr<bool> allowUserToManageAccessKeys_ {};
    // Specifies whether RAM users can manage their own MFA devices. Valid values:
    // 
    // - true (default)
    // 
    // - false
    shared_ptr<bool> allowUserToManageMFADevices_ {};
    // Specifies whether RAM users can attach or detach their personal DingTalk accounts. Valid values:
    // 
    // - true (default)
    // 
    // - false
    shared_ptr<bool> allowUserToManagePersonalDingTalk_ {};
    // Specifies whether to save the multi-factor authentication (MFA) status for seven days after a RAM user logs on using MFA. Valid values:
    // 
    // - true
    // 
    // - false (default)
    shared_ptr<bool> enableSaveMFATicket_ {};
    // Specifies the IP addresses or CIDR blocks from which RAM users are allowed to sign in to the Alibaba Cloud console.
    // 
    // - This restriction applies to both password-based and single sign-on (SSO) logons.
    // 
    // - It does not affect API calls made with an AccessKey pair.
    // 
    // - If a mask is not configured, logons are allowed from any IP address.
    // 
    // Separate multiple entries with a semicolon (`;`). For example: 192.168.0.0/16;10.0.0.0/8.
    // 
    // The mask is limited to a maximum of 40 entries and a total length of 512 characters.
    shared_ptr<string> loginNetworkMasks_ {};
    // The duration of a logon session for a RAM user.
    // 
    // Valid values: 1 to 24. Unit: hours.
    // 
    // Default value: 6.
    shared_ptr<int32_t> loginSessionDuration_ {};
    // Specifies whether MFA is required for logon. This parameter replaces `EnforceMFAForLogin`. The `EnforceMFAForLogin` parameter is still valid, but using this new parameter is recommended. Valid values:
    // 
    // - mandatory: Enforces MFA for all RAM users. This value corresponds to `true` for the `EnforceMFAForLogin` parameter.
    // 
    // - independent (default): The MFA requirement depends on the configuration of each RAM user. This value corresponds to `false` for the `EnforceMFAForLogin` parameter.
    // 
    // - adaptive: Enforces MFA only for abnormal logons.
    shared_ptr<string> MFAOperationForLogin_ {};
    // The maximum number of days that a RAM user\\"s AccessKey pair can be idle. If an AccessKey pair is not used within the specified period, it is automatically disabled the next day. Valid values:
    // 
    // - 90
    // 
    // - 180
    // 
    // - 365
    // 
    // - 730 (default)
    shared_ptr<int32_t> maxIdleDaysForAccessKeys_ {};
    // The maximum number of days that a RAM user can be idle. If a RAM user with console logon enabled does not log on within this period, their console logon is automatically disabled the next day. This setting does not apply to single sign-on (SSO) logons. Valid values:
    // 
    // - 90
    // 
    // - 180
    // 
    // - 365
    // 
    // - 730 (default)
    shared_ptr<int32_t> maxIdleDaysForUsers_ {};
    // This parameter is deprecated.
    shared_ptr<string> operationForRiskLogin_ {};
    // The MFA methods.
    shared_ptr<string> verificationTypesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
