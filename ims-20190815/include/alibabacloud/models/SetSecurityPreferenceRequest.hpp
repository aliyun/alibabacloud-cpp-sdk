// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSECURITYPREFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSECURITYPREFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetSecurityPreferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSecurityPreferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUserToChangePassword, allowUserToChangePassword_);
      DARABONBA_PTR_TO_JSON(AllowUserToLoginWithPasskey, allowUserToLoginWithPasskey_);
      DARABONBA_PTR_TO_JSON(AllowUserToManageAccessKeys, allowUserToManageAccessKeys_);
      DARABONBA_PTR_TO_JSON(AllowUserToManageMFADevices, allowUserToManageMFADevices_);
      DARABONBA_PTR_TO_JSON(AllowUserToManagePersonalDingTalk, allowUserToManagePersonalDingTalk_);
      DARABONBA_PTR_TO_JSON(AllowUserToManageServiceCredentials, allowUserToManageServiceCredentials_);
      DARABONBA_PTR_TO_JSON(EnableSaveMFATicket, enableSaveMFATicket_);
      DARABONBA_PTR_TO_JSON(LoginNetworkMasks, loginNetworkMasks_);
      DARABONBA_PTR_TO_JSON(LoginSessionDuration, loginSessionDuration_);
      DARABONBA_PTR_TO_JSON(MFAOperationForLogin, MFAOperationForLogin_);
      DARABONBA_PTR_TO_JSON(MaxIdleDaysForAccessKeys, maxIdleDaysForAccessKeys_);
      DARABONBA_PTR_TO_JSON(MaxIdleDaysForUsers, maxIdleDaysForUsers_);
      DARABONBA_PTR_TO_JSON(OperationForRiskLogin, operationForRiskLogin_);
      DARABONBA_PTR_TO_JSON(VerificationTypes, verificationTypes_);
    };
    friend void from_json(const Darabonba::Json& j, SetSecurityPreferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUserToChangePassword, allowUserToChangePassword_);
      DARABONBA_PTR_FROM_JSON(AllowUserToLoginWithPasskey, allowUserToLoginWithPasskey_);
      DARABONBA_PTR_FROM_JSON(AllowUserToManageAccessKeys, allowUserToManageAccessKeys_);
      DARABONBA_PTR_FROM_JSON(AllowUserToManageMFADevices, allowUserToManageMFADevices_);
      DARABONBA_PTR_FROM_JSON(AllowUserToManagePersonalDingTalk, allowUserToManagePersonalDingTalk_);
      DARABONBA_PTR_FROM_JSON(AllowUserToManageServiceCredentials, allowUserToManageServiceCredentials_);
      DARABONBA_PTR_FROM_JSON(EnableSaveMFATicket, enableSaveMFATicket_);
      DARABONBA_PTR_FROM_JSON(LoginNetworkMasks, loginNetworkMasks_);
      DARABONBA_PTR_FROM_JSON(LoginSessionDuration, loginSessionDuration_);
      DARABONBA_PTR_FROM_JSON(MFAOperationForLogin, MFAOperationForLogin_);
      DARABONBA_PTR_FROM_JSON(MaxIdleDaysForAccessKeys, maxIdleDaysForAccessKeys_);
      DARABONBA_PTR_FROM_JSON(MaxIdleDaysForUsers, maxIdleDaysForUsers_);
      DARABONBA_PTR_FROM_JSON(OperationForRiskLogin, operationForRiskLogin_);
      DARABONBA_PTR_FROM_JSON(VerificationTypes, verificationTypes_);
    };
    SetSecurityPreferenceRequest() = default ;
    SetSecurityPreferenceRequest(const SetSecurityPreferenceRequest &) = default ;
    SetSecurityPreferenceRequest(SetSecurityPreferenceRequest &&) = default ;
    SetSecurityPreferenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSecurityPreferenceRequest() = default ;
    SetSecurityPreferenceRequest& operator=(const SetSecurityPreferenceRequest &) = default ;
    SetSecurityPreferenceRequest& operator=(SetSecurityPreferenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowUserToChangePassword_ == nullptr
        && this->allowUserToLoginWithPasskey_ == nullptr && this->allowUserToManageAccessKeys_ == nullptr && this->allowUserToManageMFADevices_ == nullptr && this->allowUserToManagePersonalDingTalk_ == nullptr && this->allowUserToManageServiceCredentials_ == nullptr
        && this->enableSaveMFATicket_ == nullptr && this->loginNetworkMasks_ == nullptr && this->loginSessionDuration_ == nullptr && this->MFAOperationForLogin_ == nullptr && this->maxIdleDaysForAccessKeys_ == nullptr
        && this->maxIdleDaysForUsers_ == nullptr && this->operationForRiskLogin_ == nullptr && this->verificationTypes_ == nullptr; };
    // allowUserToChangePassword Field Functions 
    bool hasAllowUserToChangePassword() const { return this->allowUserToChangePassword_ != nullptr;};
    void deleteAllowUserToChangePassword() { this->allowUserToChangePassword_ = nullptr;};
    inline bool getAllowUserToChangePassword() const { DARABONBA_PTR_GET_DEFAULT(allowUserToChangePassword_, false) };
    inline SetSecurityPreferenceRequest& setAllowUserToChangePassword(bool allowUserToChangePassword) { DARABONBA_PTR_SET_VALUE(allowUserToChangePassword_, allowUserToChangePassword) };


    // allowUserToLoginWithPasskey Field Functions 
    bool hasAllowUserToLoginWithPasskey() const { return this->allowUserToLoginWithPasskey_ != nullptr;};
    void deleteAllowUserToLoginWithPasskey() { this->allowUserToLoginWithPasskey_ = nullptr;};
    inline bool getAllowUserToLoginWithPasskey() const { DARABONBA_PTR_GET_DEFAULT(allowUserToLoginWithPasskey_, false) };
    inline SetSecurityPreferenceRequest& setAllowUserToLoginWithPasskey(bool allowUserToLoginWithPasskey) { DARABONBA_PTR_SET_VALUE(allowUserToLoginWithPasskey_, allowUserToLoginWithPasskey) };


    // allowUserToManageAccessKeys Field Functions 
    bool hasAllowUserToManageAccessKeys() const { return this->allowUserToManageAccessKeys_ != nullptr;};
    void deleteAllowUserToManageAccessKeys() { this->allowUserToManageAccessKeys_ = nullptr;};
    inline bool getAllowUserToManageAccessKeys() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManageAccessKeys_, false) };
    inline SetSecurityPreferenceRequest& setAllowUserToManageAccessKeys(bool allowUserToManageAccessKeys) { DARABONBA_PTR_SET_VALUE(allowUserToManageAccessKeys_, allowUserToManageAccessKeys) };


    // allowUserToManageMFADevices Field Functions 
    bool hasAllowUserToManageMFADevices() const { return this->allowUserToManageMFADevices_ != nullptr;};
    void deleteAllowUserToManageMFADevices() { this->allowUserToManageMFADevices_ = nullptr;};
    inline bool getAllowUserToManageMFADevices() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManageMFADevices_, false) };
    inline SetSecurityPreferenceRequest& setAllowUserToManageMFADevices(bool allowUserToManageMFADevices) { DARABONBA_PTR_SET_VALUE(allowUserToManageMFADevices_, allowUserToManageMFADevices) };


    // allowUserToManagePersonalDingTalk Field Functions 
    bool hasAllowUserToManagePersonalDingTalk() const { return this->allowUserToManagePersonalDingTalk_ != nullptr;};
    void deleteAllowUserToManagePersonalDingTalk() { this->allowUserToManagePersonalDingTalk_ = nullptr;};
    inline bool getAllowUserToManagePersonalDingTalk() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManagePersonalDingTalk_, false) };
    inline SetSecurityPreferenceRequest& setAllowUserToManagePersonalDingTalk(bool allowUserToManagePersonalDingTalk) { DARABONBA_PTR_SET_VALUE(allowUserToManagePersonalDingTalk_, allowUserToManagePersonalDingTalk) };


    // allowUserToManageServiceCredentials Field Functions 
    bool hasAllowUserToManageServiceCredentials() const { return this->allowUserToManageServiceCredentials_ != nullptr;};
    void deleteAllowUserToManageServiceCredentials() { this->allowUserToManageServiceCredentials_ = nullptr;};
    inline bool getAllowUserToManageServiceCredentials() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManageServiceCredentials_, false) };
    inline SetSecurityPreferenceRequest& setAllowUserToManageServiceCredentials(bool allowUserToManageServiceCredentials) { DARABONBA_PTR_SET_VALUE(allowUserToManageServiceCredentials_, allowUserToManageServiceCredentials) };


    // enableSaveMFATicket Field Functions 
    bool hasEnableSaveMFATicket() const { return this->enableSaveMFATicket_ != nullptr;};
    void deleteEnableSaveMFATicket() { this->enableSaveMFATicket_ = nullptr;};
    inline bool getEnableSaveMFATicket() const { DARABONBA_PTR_GET_DEFAULT(enableSaveMFATicket_, false) };
    inline SetSecurityPreferenceRequest& setEnableSaveMFATicket(bool enableSaveMFATicket) { DARABONBA_PTR_SET_VALUE(enableSaveMFATicket_, enableSaveMFATicket) };


    // loginNetworkMasks Field Functions 
    bool hasLoginNetworkMasks() const { return this->loginNetworkMasks_ != nullptr;};
    void deleteLoginNetworkMasks() { this->loginNetworkMasks_ = nullptr;};
    inline string getLoginNetworkMasks() const { DARABONBA_PTR_GET_DEFAULT(loginNetworkMasks_, "") };
    inline SetSecurityPreferenceRequest& setLoginNetworkMasks(string loginNetworkMasks) { DARABONBA_PTR_SET_VALUE(loginNetworkMasks_, loginNetworkMasks) };


    // loginSessionDuration Field Functions 
    bool hasLoginSessionDuration() const { return this->loginSessionDuration_ != nullptr;};
    void deleteLoginSessionDuration() { this->loginSessionDuration_ = nullptr;};
    inline int32_t getLoginSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(loginSessionDuration_, 0) };
    inline SetSecurityPreferenceRequest& setLoginSessionDuration(int32_t loginSessionDuration) { DARABONBA_PTR_SET_VALUE(loginSessionDuration_, loginSessionDuration) };


    // MFAOperationForLogin Field Functions 
    bool hasMFAOperationForLogin() const { return this->MFAOperationForLogin_ != nullptr;};
    void deleteMFAOperationForLogin() { this->MFAOperationForLogin_ = nullptr;};
    inline string getMFAOperationForLogin() const { DARABONBA_PTR_GET_DEFAULT(MFAOperationForLogin_, "") };
    inline SetSecurityPreferenceRequest& setMFAOperationForLogin(string MFAOperationForLogin) { DARABONBA_PTR_SET_VALUE(MFAOperationForLogin_, MFAOperationForLogin) };


    // maxIdleDaysForAccessKeys Field Functions 
    bool hasMaxIdleDaysForAccessKeys() const { return this->maxIdleDaysForAccessKeys_ != nullptr;};
    void deleteMaxIdleDaysForAccessKeys() { this->maxIdleDaysForAccessKeys_ = nullptr;};
    inline int32_t getMaxIdleDaysForAccessKeys() const { DARABONBA_PTR_GET_DEFAULT(maxIdleDaysForAccessKeys_, 0) };
    inline SetSecurityPreferenceRequest& setMaxIdleDaysForAccessKeys(int32_t maxIdleDaysForAccessKeys) { DARABONBA_PTR_SET_VALUE(maxIdleDaysForAccessKeys_, maxIdleDaysForAccessKeys) };


    // maxIdleDaysForUsers Field Functions 
    bool hasMaxIdleDaysForUsers() const { return this->maxIdleDaysForUsers_ != nullptr;};
    void deleteMaxIdleDaysForUsers() { this->maxIdleDaysForUsers_ = nullptr;};
    inline int32_t getMaxIdleDaysForUsers() const { DARABONBA_PTR_GET_DEFAULT(maxIdleDaysForUsers_, 0) };
    inline SetSecurityPreferenceRequest& setMaxIdleDaysForUsers(int32_t maxIdleDaysForUsers) { DARABONBA_PTR_SET_VALUE(maxIdleDaysForUsers_, maxIdleDaysForUsers) };


    // operationForRiskLogin Field Functions 
    bool hasOperationForRiskLogin() const { return this->operationForRiskLogin_ != nullptr;};
    void deleteOperationForRiskLogin() { this->operationForRiskLogin_ = nullptr;};
    inline string getOperationForRiskLogin() const { DARABONBA_PTR_GET_DEFAULT(operationForRiskLogin_, "") };
    inline SetSecurityPreferenceRequest& setOperationForRiskLogin(string operationForRiskLogin) { DARABONBA_PTR_SET_VALUE(operationForRiskLogin_, operationForRiskLogin) };


    // verificationTypes Field Functions 
    bool hasVerificationTypes() const { return this->verificationTypes_ != nullptr;};
    void deleteVerificationTypes() { this->verificationTypes_ = nullptr;};
    inline const vector<string> & getVerificationTypes() const { DARABONBA_PTR_GET_CONST(verificationTypes_, vector<string>) };
    inline vector<string> getVerificationTypes() { DARABONBA_PTR_GET(verificationTypes_, vector<string>) };
    inline SetSecurityPreferenceRequest& setVerificationTypes(const vector<string> & verificationTypes) { DARABONBA_PTR_SET_VALUE(verificationTypes_, verificationTypes) };
    inline SetSecurityPreferenceRequest& setVerificationTypes(vector<string> && verificationTypes) { DARABONBA_PTR_SET_RVALUE(verificationTypes_, verificationTypes) };


  protected:
    // Specifies whether RAM users can change their own passwords. Valid values:
    // 
    // - true (default): Allowed.
    // 
    // - false: Not allowed.
    shared_ptr<bool> allowUserToChangePassword_ {};
    // Specifies whether RAM users can use passkeys to log on to the console. Valid values:
    // 
    // - true (default): Allowed.
    // 
    // - false: Not allowed.
    shared_ptr<bool> allowUserToLoginWithPasskey_ {};
    // Specifies whether RAM users can manage their own AccessKeys. Valid values:
    // 
    // - true: Allowed.
    // 
    // - false (default): Not allowed.
    shared_ptr<bool> allowUserToManageAccessKeys_ {};
    // Specifies whether RAM users can manage their own MFA devices. Valid values:
    // 
    // - true (default): Allowed.
    // 
    // - false: Not allowed.
    shared_ptr<bool> allowUserToManageMFADevices_ {};
    // Specifies whether RAM users can link or unlink their personal DingTalk accounts. Valid values:
    // 
    // - true (default): Allowed.
    // 
    // - false: Not allowed.
    shared_ptr<bool> allowUserToManagePersonalDingTalk_ {};
    // Specifies whether RAM users can manage their own API keys. Valid values:
    // 
    // - true: Allowed.
    // 
    // - false: Not allowed.
    shared_ptr<bool> allowUserToManageServiceCredentials_ {};
    // Specifies whether a RAM user who logs on with multi-factor authentication (MFA) can skip MFA for the next seven days. Valid values:
    // 
    // - true: Allowed.
    // 
    // - false (default): Not allowed.
    shared_ptr<bool> enableSaveMFATicket_ {};
    // The IP address mask that is used to log on to the console. This mask applies to password-based logons and single sign-on (SSO) logons, but does not affect API calls that are initiated by using an AccessKey pair.
    // 
    // - If you specify a mask, RAM users can log on to the console only from the specified IP addresses.
    // 
    // - If you do not specify a mask, RAM users can log on to the console from all IP addresses.
    // 
    // If you need to specify multiple masks, separate them with semicolons (`;`). Example: `192.168.0.0/16;10.0.0.0/8`.
    // 
    // You can specify up to 40 masks. The total length cannot exceed 512 characters.
    shared_ptr<string> loginNetworkMasks_ {};
    // The session duration of a RAM user who logs on to the console. Unit: hours.
    // 
    // Valid values: 1 to 24.
    // 
    // Default value: 6.
    shared_ptr<int32_t> loginSessionDuration_ {};
    // Specifies the MFA policy for user logon. This parameter replaces `EnforceMFAForLogin`. We recommend that you use this parameter. `EnforceMFAForLogin` is still valid. Valid values:
    // 
    // - `mandatory`: enforces MFA for all RAM users. This is equivalent to setting `EnforceMFAForLogin` to `true`.
    // 
    // - `independent` (default): The MFA settings for each RAM user are not affected. This is equivalent to setting `EnforceMFAForLogin` to `false`.
    // 
    // - `adaptive`: enforces MFA only for unusual logons.
    shared_ptr<string> MFAOperationForLogin_ {};
    // The maximum idle period of the AccessKey pairs of RAM users. An AccessKey pair that is not used for the specified period of time is automatically disabled on the next day. You can set the value to one of the following numbers:
    // 
    // - 90
    // 
    // - 180
    // 
    // - 365
    // 
    // - 730 (default)
    shared_ptr<int32_t> maxIdleDaysForAccessKeys_ {};
    // The maximum idle period of RAM users. If a RAM user who can log on to the console does not log on to the console for the specified period of time (SSO logons are not included), the console logon feature of the RAM user is disabled on the next day. You can set the value to one of the following numbers:
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
    shared_ptr<vector<string>> verificationTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
