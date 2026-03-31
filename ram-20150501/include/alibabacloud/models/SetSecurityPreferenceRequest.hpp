// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSECURITYPREFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSECURITYPREFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class SetSecurityPreferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSecurityPreferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUserToChangePassword, allowUserToChangePassword_);
      DARABONBA_PTR_TO_JSON(AllowUserToManageAccessKeys, allowUserToManageAccessKeys_);
      DARABONBA_PTR_TO_JSON(AllowUserToManageMFADevices, allowUserToManageMFADevices_);
      DARABONBA_PTR_TO_JSON(AllowUserToManagePublicKeys, allowUserToManagePublicKeys_);
      DARABONBA_PTR_TO_JSON(EnableSaveMFATicket, enableSaveMFATicket_);
      DARABONBA_PTR_TO_JSON(LoginNetworkMasks, loginNetworkMasks_);
      DARABONBA_PTR_TO_JSON(LoginSessionDuration, loginSessionDuration_);
    };
    friend void from_json(const Darabonba::Json& j, SetSecurityPreferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUserToChangePassword, allowUserToChangePassword_);
      DARABONBA_PTR_FROM_JSON(AllowUserToManageAccessKeys, allowUserToManageAccessKeys_);
      DARABONBA_PTR_FROM_JSON(AllowUserToManageMFADevices, allowUserToManageMFADevices_);
      DARABONBA_PTR_FROM_JSON(AllowUserToManagePublicKeys, allowUserToManagePublicKeys_);
      DARABONBA_PTR_FROM_JSON(EnableSaveMFATicket, enableSaveMFATicket_);
      DARABONBA_PTR_FROM_JSON(LoginNetworkMasks, loginNetworkMasks_);
      DARABONBA_PTR_FROM_JSON(LoginSessionDuration, loginSessionDuration_);
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
        && this->allowUserToManageAccessKeys_ == nullptr && this->allowUserToManageMFADevices_ == nullptr && this->allowUserToManagePublicKeys_ == nullptr && this->enableSaveMFATicket_ == nullptr && this->loginNetworkMasks_ == nullptr
        && this->loginSessionDuration_ == nullptr; };
    // allowUserToChangePassword Field Functions 
    bool hasAllowUserToChangePassword() const { return this->allowUserToChangePassword_ != nullptr;};
    void deleteAllowUserToChangePassword() { this->allowUserToChangePassword_ = nullptr;};
    inline bool getAllowUserToChangePassword() const { DARABONBA_PTR_GET_DEFAULT(allowUserToChangePassword_, false) };
    inline SetSecurityPreferenceRequest& setAllowUserToChangePassword(bool allowUserToChangePassword) { DARABONBA_PTR_SET_VALUE(allowUserToChangePassword_, allowUserToChangePassword) };


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


    // allowUserToManagePublicKeys Field Functions 
    bool hasAllowUserToManagePublicKeys() const { return this->allowUserToManagePublicKeys_ != nullptr;};
    void deleteAllowUserToManagePublicKeys() { this->allowUserToManagePublicKeys_ = nullptr;};
    inline bool getAllowUserToManagePublicKeys() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManagePublicKeys_, false) };
    inline SetSecurityPreferenceRequest& setAllowUserToManagePublicKeys(bool allowUserToManagePublicKeys) { DARABONBA_PTR_SET_VALUE(allowUserToManagePublicKeys_, allowUserToManagePublicKeys) };


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


  protected:
    // Specifies whether RAM users can change their passwords. Valid values:
    // 
    // *   true (default)
    // *   false
    shared_ptr<bool> allowUserToChangePassword_ {};
    // Specifies whether RAM users can manage their AccessKey pairs. Valid values:
    // 
    // *   true
    // *   false (default)
    shared_ptr<bool> allowUserToManageAccessKeys_ {};
    // Specifies whether RAM users can manage their MFA devices. Valid values:
    // 
    // *   true (default)
    // *   false
    shared_ptr<bool> allowUserToManageMFADevices_ {};
    // Specifies whether RAM users can manage their public keys. Valid values:
    // 
    // *   true
    // *   false (default)
    // 
    // >  This parameter is valid only for the Japan site.
    shared_ptr<bool> allowUserToManagePublicKeys_ {};
    // Specifies whether to remember the multi-factor authentication (MFA) devices of Resource Access Management (RAM) users for seven days. Valid values:
    // 
    // *   true
    // *   false (default)
    shared_ptr<bool> enableSaveMFATicket_ {};
    // The subnet mask that specifies the IP addresses from which you can log on to the Alibaba Cloud Management Console. This parameter takes effect on password-based logon and single sign-on (SSO). However, this parameter does not take effect on API calls that are authenticated by using AccessKey pairs.
    // 
    // *   If you specify a subnet mask, RAM users can use only the IP addresses in the subnet mask to log on to the Alibaba Cloud Management Console.
    // *   If you do not specify a subnet mask, RAM users can use all IP addresses to log on to the Alibaba Cloud Management Console.
    // 
    // If you need to specify multiple subnet masks, separate the subnet masks with semicolons (;). Example: 192.168.0.0/16;10.0.0.0/8.
    // 
    // You can specify up to 40 subnet masks. The total length of the subnet masks can be a maximum of 512 characters.
    shared_ptr<string> loginNetworkMasks_ {};
    // The validity period of the logon session of RAM users.
    // 
    // Valid values: 1 to 24. Default value: 6. Unit: hours.
    shared_ptr<int32_t> loginSessionDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
