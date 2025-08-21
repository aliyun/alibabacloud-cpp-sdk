// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCELOGINPROFILEPREFERENCE_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCELOGINPROFILEPREFERENCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUserToChangePassword, allowUserToChangePassword_);
      DARABONBA_PTR_TO_JSON(AllowUserToLoginWithPasskey, allowUserToLoginWithPasskey_);
      DARABONBA_PTR_TO_JSON(EnableSaveMFATicket, enableSaveMFATicket_);
      DARABONBA_PTR_TO_JSON(LoginNetworkMasks, loginNetworkMasks_);
      DARABONBA_PTR_TO_JSON(LoginSessionDuration, loginSessionDuration_);
      DARABONBA_PTR_TO_JSON(MFAOperationForLogin, MFAOperationForLogin_);
      DARABONBA_PTR_TO_JSON(OperationForRiskLogin, operationForRiskLogin_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUserToChangePassword, allowUserToChangePassword_);
      DARABONBA_PTR_FROM_JSON(AllowUserToLoginWithPasskey, allowUserToLoginWithPasskey_);
      DARABONBA_PTR_FROM_JSON(EnableSaveMFATicket, enableSaveMFATicket_);
      DARABONBA_PTR_FROM_JSON(LoginNetworkMasks, loginNetworkMasks_);
      DARABONBA_PTR_FROM_JSON(LoginSessionDuration, loginSessionDuration_);
      DARABONBA_PTR_FROM_JSON(MFAOperationForLogin, MFAOperationForLogin_);
      DARABONBA_PTR_FROM_JSON(OperationForRiskLogin, operationForRiskLogin_);
    };
    GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference() = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference(const GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference &) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference(GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference &&) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference() = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference& operator=(const GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference &) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference& operator=(GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowUserToChangePassword_ != nullptr
        && this->allowUserToLoginWithPasskey_ != nullptr && this->enableSaveMFATicket_ != nullptr && this->loginNetworkMasks_ != nullptr && this->loginSessionDuration_ != nullptr && this->MFAOperationForLogin_ != nullptr
        && this->operationForRiskLogin_ != nullptr; };
    // allowUserToChangePassword Field Functions 
    bool hasAllowUserToChangePassword() const { return this->allowUserToChangePassword_ != nullptr;};
    void deleteAllowUserToChangePassword() { this->allowUserToChangePassword_ = nullptr;};
    inline bool allowUserToChangePassword() const { DARABONBA_PTR_GET_DEFAULT(allowUserToChangePassword_, false) };
    inline GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference& setAllowUserToChangePassword(bool allowUserToChangePassword) { DARABONBA_PTR_SET_VALUE(allowUserToChangePassword_, allowUserToChangePassword) };


    // allowUserToLoginWithPasskey Field Functions 
    bool hasAllowUserToLoginWithPasskey() const { return this->allowUserToLoginWithPasskey_ != nullptr;};
    void deleteAllowUserToLoginWithPasskey() { this->allowUserToLoginWithPasskey_ = nullptr;};
    inline bool allowUserToLoginWithPasskey() const { DARABONBA_PTR_GET_DEFAULT(allowUserToLoginWithPasskey_, false) };
    inline GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference& setAllowUserToLoginWithPasskey(bool allowUserToLoginWithPasskey) { DARABONBA_PTR_SET_VALUE(allowUserToLoginWithPasskey_, allowUserToLoginWithPasskey) };


    // enableSaveMFATicket Field Functions 
    bool hasEnableSaveMFATicket() const { return this->enableSaveMFATicket_ != nullptr;};
    void deleteEnableSaveMFATicket() { this->enableSaveMFATicket_ = nullptr;};
    inline bool enableSaveMFATicket() const { DARABONBA_PTR_GET_DEFAULT(enableSaveMFATicket_, false) };
    inline GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference& setEnableSaveMFATicket(bool enableSaveMFATicket) { DARABONBA_PTR_SET_VALUE(enableSaveMFATicket_, enableSaveMFATicket) };


    // loginNetworkMasks Field Functions 
    bool hasLoginNetworkMasks() const { return this->loginNetworkMasks_ != nullptr;};
    void deleteLoginNetworkMasks() { this->loginNetworkMasks_ = nullptr;};
    inline string loginNetworkMasks() const { DARABONBA_PTR_GET_DEFAULT(loginNetworkMasks_, "") };
    inline GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference& setLoginNetworkMasks(string loginNetworkMasks) { DARABONBA_PTR_SET_VALUE(loginNetworkMasks_, loginNetworkMasks) };


    // loginSessionDuration Field Functions 
    bool hasLoginSessionDuration() const { return this->loginSessionDuration_ != nullptr;};
    void deleteLoginSessionDuration() { this->loginSessionDuration_ = nullptr;};
    inline int32_t loginSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(loginSessionDuration_, 0) };
    inline GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference& setLoginSessionDuration(int32_t loginSessionDuration) { DARABONBA_PTR_SET_VALUE(loginSessionDuration_, loginSessionDuration) };


    // MFAOperationForLogin Field Functions 
    bool hasMFAOperationForLogin() const { return this->MFAOperationForLogin_ != nullptr;};
    void deleteMFAOperationForLogin() { this->MFAOperationForLogin_ = nullptr;};
    inline string MFAOperationForLogin() const { DARABONBA_PTR_GET_DEFAULT(MFAOperationForLogin_, "") };
    inline GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference& setMFAOperationForLogin(string MFAOperationForLogin) { DARABONBA_PTR_SET_VALUE(MFAOperationForLogin_, MFAOperationForLogin) };


    // operationForRiskLogin Field Functions 
    bool hasOperationForRiskLogin() const { return this->operationForRiskLogin_ != nullptr;};
    void deleteOperationForRiskLogin() { this->operationForRiskLogin_ = nullptr;};
    inline string operationForRiskLogin() const { DARABONBA_PTR_GET_DEFAULT(operationForRiskLogin_, "") };
    inline GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference& setOperationForRiskLogin(string operationForRiskLogin) { DARABONBA_PTR_SET_VALUE(operationForRiskLogin_, operationForRiskLogin) };


  protected:
    // Indicates whether RAM users can change their passwords. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> allowUserToChangePassword_ = nullptr;
    // Indicates whether a RAM user can use a passkey for logon. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> allowUserToLoginWithPasskey_ = nullptr;
    // Indicates whether RAM users can remember the multi-factor authentication (MFA) devices for seven days. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableSaveMFATicket_ = nullptr;
    // The subnet mask.
    std::shared_ptr<string> loginNetworkMasks_ = nullptr;
    // The validity period of the logon session of RAM users. Unit: hours.
    std::shared_ptr<int32_t> loginSessionDuration_ = nullptr;
    // Indicates whether MFA is required for all RAM users when they log on to the Alibaba Cloud Management Console. Valid values:
    // 
    // *   mandatory: MFA is required for all RAM users. If you use EnforceMFAForLogin, set the value to true.
    // *   independent (default): User-specific settings are applied. If you use EnforceMFAForLogin, set the value to false.
    // *   adaptive: MFA is required only for RAM users who initiated unusual logons.
    std::shared_ptr<string> MFAOperationForLogin_ = nullptr;
    // Indicates whether to enable MFA for RAM users who initiated unusual logons. Valid values:
    // 
    // *   autonomous (default): yes. MFA is prompted for RAM users who initiated unusual logons. However, the RAM users are allowed to skip MFA.
    // *   enforceVerify: MFA is prompted for RAM users who initiated unusual logons and the RAM users cannot skip MFA.
    std::shared_ptr<string> operationForRiskLogin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
