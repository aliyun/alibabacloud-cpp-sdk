// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODY_HPP_
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
  class GetSecurityPreferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityPreferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityPreference, securityPreference_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityPreferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityPreference, securityPreference_);
    };
    GetSecurityPreferenceResponseBody() = default ;
    GetSecurityPreferenceResponseBody(const GetSecurityPreferenceResponseBody &) = default ;
    GetSecurityPreferenceResponseBody(GetSecurityPreferenceResponseBody &&) = default ;
    GetSecurityPreferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityPreferenceResponseBody() = default ;
    GetSecurityPreferenceResponseBody& operator=(const GetSecurityPreferenceResponseBody &) = default ;
    GetSecurityPreferenceResponseBody& operator=(GetSecurityPreferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityPreference : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityPreference& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyPreference, accessKeyPreference_);
        DARABONBA_PTR_TO_JSON(LoginProfilePreference, loginProfilePreference_);
        DARABONBA_PTR_TO_JSON(MFAPreference, MFAPreference_);
        DARABONBA_PTR_TO_JSON(MaxIdleDays, maxIdleDays_);
        DARABONBA_PTR_TO_JSON(PersonalInfoPreference, personalInfoPreference_);
        DARABONBA_PTR_TO_JSON(VerificationPreference, verificationPreference_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityPreference& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyPreference, accessKeyPreference_);
        DARABONBA_PTR_FROM_JSON(LoginProfilePreference, loginProfilePreference_);
        DARABONBA_PTR_FROM_JSON(MFAPreference, MFAPreference_);
        DARABONBA_PTR_FROM_JSON(MaxIdleDays, maxIdleDays_);
        DARABONBA_PTR_FROM_JSON(PersonalInfoPreference, personalInfoPreference_);
        DARABONBA_PTR_FROM_JSON(VerificationPreference, verificationPreference_);
      };
      SecurityPreference() = default ;
      SecurityPreference(const SecurityPreference &) = default ;
      SecurityPreference(SecurityPreference &&) = default ;
      SecurityPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityPreference() = default ;
      SecurityPreference& operator=(const SecurityPreference &) = default ;
      SecurityPreference& operator=(SecurityPreference &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VerificationPreference : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VerificationPreference& obj) { 
          DARABONBA_PTR_TO_JSON(VerificationTypes, verificationTypes_);
        };
        friend void from_json(const Darabonba::Json& j, VerificationPreference& obj) { 
          DARABONBA_PTR_FROM_JSON(VerificationTypes, verificationTypes_);
        };
        VerificationPreference() = default ;
        VerificationPreference(const VerificationPreference &) = default ;
        VerificationPreference(VerificationPreference &&) = default ;
        VerificationPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VerificationPreference() = default ;
        VerificationPreference& operator=(const VerificationPreference &) = default ;
        VerificationPreference& operator=(VerificationPreference &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->verificationTypes_ == nullptr; };
        // verificationTypes Field Functions 
        bool hasVerificationTypes() const { return this->verificationTypes_ != nullptr;};
        void deleteVerificationTypes() { this->verificationTypes_ = nullptr;};
        inline const vector<string> & getVerificationTypes() const { DARABONBA_PTR_GET_CONST(verificationTypes_, vector<string>) };
        inline vector<string> getVerificationTypes() { DARABONBA_PTR_GET(verificationTypes_, vector<string>) };
        inline VerificationPreference& setVerificationTypes(const vector<string> & verificationTypes) { DARABONBA_PTR_SET_VALUE(verificationTypes_, verificationTypes) };
        inline VerificationPreference& setVerificationTypes(vector<string> && verificationTypes) { DARABONBA_PTR_SET_RVALUE(verificationTypes_, verificationTypes) };


      protected:
        // The MFA methods.
        shared_ptr<vector<string>> verificationTypes_ {};
      };

      class PersonalInfoPreference : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PersonalInfoPreference& obj) { 
          DARABONBA_PTR_TO_JSON(AllowUserToManagePersonalDingTalk, allowUserToManagePersonalDingTalk_);
        };
        friend void from_json(const Darabonba::Json& j, PersonalInfoPreference& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowUserToManagePersonalDingTalk, allowUserToManagePersonalDingTalk_);
        };
        PersonalInfoPreference() = default ;
        PersonalInfoPreference(const PersonalInfoPreference &) = default ;
        PersonalInfoPreference(PersonalInfoPreference &&) = default ;
        PersonalInfoPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PersonalInfoPreference() = default ;
        PersonalInfoPreference& operator=(const PersonalInfoPreference &) = default ;
        PersonalInfoPreference& operator=(PersonalInfoPreference &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowUserToManagePersonalDingTalk_ == nullptr; };
        // allowUserToManagePersonalDingTalk Field Functions 
        bool hasAllowUserToManagePersonalDingTalk() const { return this->allowUserToManagePersonalDingTalk_ != nullptr;};
        void deleteAllowUserToManagePersonalDingTalk() { this->allowUserToManagePersonalDingTalk_ = nullptr;};
        inline bool getAllowUserToManagePersonalDingTalk() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManagePersonalDingTalk_, false) };
        inline PersonalInfoPreference& setAllowUserToManagePersonalDingTalk(bool allowUserToManagePersonalDingTalk) { DARABONBA_PTR_SET_VALUE(allowUserToManagePersonalDingTalk_, allowUserToManagePersonalDingTalk) };


      protected:
        // Indicates whether RAM users can manage their personal DingTalk accounts, such as binding and unbinding of the accounts. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> allowUserToManagePersonalDingTalk_ {};
      };

      class MaxIdleDays : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MaxIdleDays& obj) { 
          DARABONBA_PTR_TO_JSON(MaxIdleDaysForAccessKeys, maxIdleDaysForAccessKeys_);
          DARABONBA_PTR_TO_JSON(MaxIdleDaysForUsers, maxIdleDaysForUsers_);
        };
        friend void from_json(const Darabonba::Json& j, MaxIdleDays& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxIdleDaysForAccessKeys, maxIdleDaysForAccessKeys_);
          DARABONBA_PTR_FROM_JSON(MaxIdleDaysForUsers, maxIdleDaysForUsers_);
        };
        MaxIdleDays() = default ;
        MaxIdleDays(const MaxIdleDays &) = default ;
        MaxIdleDays(MaxIdleDays &&) = default ;
        MaxIdleDays(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MaxIdleDays() = default ;
        MaxIdleDays& operator=(const MaxIdleDays &) = default ;
        MaxIdleDays& operator=(MaxIdleDays &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxIdleDaysForAccessKeys_ == nullptr
        && this->maxIdleDaysForUsers_ == nullptr; };
        // maxIdleDaysForAccessKeys Field Functions 
        bool hasMaxIdleDaysForAccessKeys() const { return this->maxIdleDaysForAccessKeys_ != nullptr;};
        void deleteMaxIdleDaysForAccessKeys() { this->maxIdleDaysForAccessKeys_ = nullptr;};
        inline int32_t getMaxIdleDaysForAccessKeys() const { DARABONBA_PTR_GET_DEFAULT(maxIdleDaysForAccessKeys_, 0) };
        inline MaxIdleDays& setMaxIdleDaysForAccessKeys(int32_t maxIdleDaysForAccessKeys) { DARABONBA_PTR_SET_VALUE(maxIdleDaysForAccessKeys_, maxIdleDaysForAccessKeys) };


        // maxIdleDaysForUsers Field Functions 
        bool hasMaxIdleDaysForUsers() const { return this->maxIdleDaysForUsers_ != nullptr;};
        void deleteMaxIdleDaysForUsers() { this->maxIdleDaysForUsers_ = nullptr;};
        inline int32_t getMaxIdleDaysForUsers() const { DARABONBA_PTR_GET_DEFAULT(maxIdleDaysForUsers_, 0) };
        inline MaxIdleDays& setMaxIdleDaysForUsers(int32_t maxIdleDaysForUsers) { DARABONBA_PTR_SET_VALUE(maxIdleDaysForUsers_, maxIdleDaysForUsers) };


      protected:
        // The maximum number of days that the AccessKey pair of a RAM user can stay unused. If an AccessKey pair is not used in the previous specified number of days, the AccessKey pair is automatically disabled on the next day. The default value is 730. You cannot change the value.
        shared_ptr<int32_t> maxIdleDaysForAccessKeys_ {};
        // The maximum number of days that a RAM user can stay idle. If a RAM user for whom console logon is enabled does not log on to the console in the previous specified number of days, console logon is automatically disabled for the RAM user on the next day. Single sign-on (SSO) is not involved. The default value is 730. You cannot change the value.
        shared_ptr<int32_t> maxIdleDaysForUsers_ {};
      };

      class MFAPreference : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MFAPreference& obj) { 
          DARABONBA_PTR_TO_JSON(AllowUserToManageMFADevices, allowUserToManageMFADevices_);
        };
        friend void from_json(const Darabonba::Json& j, MFAPreference& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowUserToManageMFADevices, allowUserToManageMFADevices_);
        };
        MFAPreference() = default ;
        MFAPreference(const MFAPreference &) = default ;
        MFAPreference(MFAPreference &&) = default ;
        MFAPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MFAPreference() = default ;
        MFAPreference& operator=(const MFAPreference &) = default ;
        MFAPreference& operator=(MFAPreference &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowUserToManageMFADevices_ == nullptr; };
        // allowUserToManageMFADevices Field Functions 
        bool hasAllowUserToManageMFADevices() const { return this->allowUserToManageMFADevices_ != nullptr;};
        void deleteAllowUserToManageMFADevices() { this->allowUserToManageMFADevices_ = nullptr;};
        inline bool getAllowUserToManageMFADevices() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManageMFADevices_, false) };
        inline MFAPreference& setAllowUserToManageMFADevices(bool allowUserToManageMFADevices) { DARABONBA_PTR_SET_VALUE(allowUserToManageMFADevices_, allowUserToManageMFADevices) };


      protected:
        // Indicates whether RAM users can manage their MFA devices. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> allowUserToManageMFADevices_ {};
      };

      class LoginProfilePreference : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LoginProfilePreference& obj) { 
          DARABONBA_PTR_TO_JSON(AllowUserToChangePassword, allowUserToChangePassword_);
          DARABONBA_PTR_TO_JSON(AllowUserToLoginWithPasskey, allowUserToLoginWithPasskey_);
          DARABONBA_PTR_TO_JSON(EnableSaveMFATicket, enableSaveMFATicket_);
          DARABONBA_PTR_TO_JSON(LoginNetworkMasks, loginNetworkMasks_);
          DARABONBA_PTR_TO_JSON(LoginSessionDuration, loginSessionDuration_);
          DARABONBA_PTR_TO_JSON(MFAOperationForLogin, MFAOperationForLogin_);
          DARABONBA_PTR_TO_JSON(OperationForRiskLogin, operationForRiskLogin_);
        };
        friend void from_json(const Darabonba::Json& j, LoginProfilePreference& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowUserToChangePassword, allowUserToChangePassword_);
          DARABONBA_PTR_FROM_JSON(AllowUserToLoginWithPasskey, allowUserToLoginWithPasskey_);
          DARABONBA_PTR_FROM_JSON(EnableSaveMFATicket, enableSaveMFATicket_);
          DARABONBA_PTR_FROM_JSON(LoginNetworkMasks, loginNetworkMasks_);
          DARABONBA_PTR_FROM_JSON(LoginSessionDuration, loginSessionDuration_);
          DARABONBA_PTR_FROM_JSON(MFAOperationForLogin, MFAOperationForLogin_);
          DARABONBA_PTR_FROM_JSON(OperationForRiskLogin, operationForRiskLogin_);
        };
        LoginProfilePreference() = default ;
        LoginProfilePreference(const LoginProfilePreference &) = default ;
        LoginProfilePreference(LoginProfilePreference &&) = default ;
        LoginProfilePreference(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LoginProfilePreference() = default ;
        LoginProfilePreference& operator=(const LoginProfilePreference &) = default ;
        LoginProfilePreference& operator=(LoginProfilePreference &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowUserToChangePassword_ == nullptr
        && this->allowUserToLoginWithPasskey_ == nullptr && this->enableSaveMFATicket_ == nullptr && this->loginNetworkMasks_ == nullptr && this->loginSessionDuration_ == nullptr && this->MFAOperationForLogin_ == nullptr
        && this->operationForRiskLogin_ == nullptr; };
        // allowUserToChangePassword Field Functions 
        bool hasAllowUserToChangePassword() const { return this->allowUserToChangePassword_ != nullptr;};
        void deleteAllowUserToChangePassword() { this->allowUserToChangePassword_ = nullptr;};
        inline bool getAllowUserToChangePassword() const { DARABONBA_PTR_GET_DEFAULT(allowUserToChangePassword_, false) };
        inline LoginProfilePreference& setAllowUserToChangePassword(bool allowUserToChangePassword) { DARABONBA_PTR_SET_VALUE(allowUserToChangePassword_, allowUserToChangePassword) };


        // allowUserToLoginWithPasskey Field Functions 
        bool hasAllowUserToLoginWithPasskey() const { return this->allowUserToLoginWithPasskey_ != nullptr;};
        void deleteAllowUserToLoginWithPasskey() { this->allowUserToLoginWithPasskey_ = nullptr;};
        inline bool getAllowUserToLoginWithPasskey() const { DARABONBA_PTR_GET_DEFAULT(allowUserToLoginWithPasskey_, false) };
        inline LoginProfilePreference& setAllowUserToLoginWithPasskey(bool allowUserToLoginWithPasskey) { DARABONBA_PTR_SET_VALUE(allowUserToLoginWithPasskey_, allowUserToLoginWithPasskey) };


        // enableSaveMFATicket Field Functions 
        bool hasEnableSaveMFATicket() const { return this->enableSaveMFATicket_ != nullptr;};
        void deleteEnableSaveMFATicket() { this->enableSaveMFATicket_ = nullptr;};
        inline bool getEnableSaveMFATicket() const { DARABONBA_PTR_GET_DEFAULT(enableSaveMFATicket_, false) };
        inline LoginProfilePreference& setEnableSaveMFATicket(bool enableSaveMFATicket) { DARABONBA_PTR_SET_VALUE(enableSaveMFATicket_, enableSaveMFATicket) };


        // loginNetworkMasks Field Functions 
        bool hasLoginNetworkMasks() const { return this->loginNetworkMasks_ != nullptr;};
        void deleteLoginNetworkMasks() { this->loginNetworkMasks_ = nullptr;};
        inline string getLoginNetworkMasks() const { DARABONBA_PTR_GET_DEFAULT(loginNetworkMasks_, "") };
        inline LoginProfilePreference& setLoginNetworkMasks(string loginNetworkMasks) { DARABONBA_PTR_SET_VALUE(loginNetworkMasks_, loginNetworkMasks) };


        // loginSessionDuration Field Functions 
        bool hasLoginSessionDuration() const { return this->loginSessionDuration_ != nullptr;};
        void deleteLoginSessionDuration() { this->loginSessionDuration_ = nullptr;};
        inline int32_t getLoginSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(loginSessionDuration_, 0) };
        inline LoginProfilePreference& setLoginSessionDuration(int32_t loginSessionDuration) { DARABONBA_PTR_SET_VALUE(loginSessionDuration_, loginSessionDuration) };


        // MFAOperationForLogin Field Functions 
        bool hasMFAOperationForLogin() const { return this->MFAOperationForLogin_ != nullptr;};
        void deleteMFAOperationForLogin() { this->MFAOperationForLogin_ = nullptr;};
        inline string getMFAOperationForLogin() const { DARABONBA_PTR_GET_DEFAULT(MFAOperationForLogin_, "") };
        inline LoginProfilePreference& setMFAOperationForLogin(string MFAOperationForLogin) { DARABONBA_PTR_SET_VALUE(MFAOperationForLogin_, MFAOperationForLogin) };


        // operationForRiskLogin Field Functions 
        bool hasOperationForRiskLogin() const { return this->operationForRiskLogin_ != nullptr;};
        void deleteOperationForRiskLogin() { this->operationForRiskLogin_ = nullptr;};
        inline string getOperationForRiskLogin() const { DARABONBA_PTR_GET_DEFAULT(operationForRiskLogin_, "") };
        inline LoginProfilePreference& setOperationForRiskLogin(string operationForRiskLogin) { DARABONBA_PTR_SET_VALUE(operationForRiskLogin_, operationForRiskLogin) };


      protected:
        // Indicates whether RAM users can change their passwords. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> allowUserToChangePassword_ {};
        // Indicates whether a RAM user can use a passkey for logon. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> allowUserToLoginWithPasskey_ {};
        // Indicates whether RAM users can remember the multi-factor authentication (MFA) devices for seven days. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> enableSaveMFATicket_ {};
        // The subnet mask.
        shared_ptr<string> loginNetworkMasks_ {};
        // The validity period of the logon session of RAM users. Unit: hours.
        shared_ptr<int32_t> loginSessionDuration_ {};
        // Indicates whether MFA is required for all RAM users when they log on to the Alibaba Cloud Management Console. Valid values:
        // 
        // *   mandatory: MFA is required for all RAM users. If you use EnforceMFAForLogin, set the value to true.
        // *   independent (default): User-specific settings are applied. If you use EnforceMFAForLogin, set the value to false.
        // *   adaptive: MFA is required only for RAM users who initiated unusual logons.
        shared_ptr<string> MFAOperationForLogin_ {};
        // Indicates whether to enable MFA for RAM users who initiated unusual logons. Valid values:
        // 
        // *   autonomous (default): yes. MFA is prompted for RAM users who initiated unusual logons. However, the RAM users are allowed to skip MFA.
        // *   enforceVerify: MFA is prompted for RAM users who initiated unusual logons and the RAM users cannot skip MFA.
        shared_ptr<string> operationForRiskLogin_ {};
      };

      class AccessKeyPreference : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccessKeyPreference& obj) { 
          DARABONBA_PTR_TO_JSON(AllowUserToManageAccessKeys, allowUserToManageAccessKeys_);
        };
        friend void from_json(const Darabonba::Json& j, AccessKeyPreference& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowUserToManageAccessKeys, allowUserToManageAccessKeys_);
        };
        AccessKeyPreference() = default ;
        AccessKeyPreference(const AccessKeyPreference &) = default ;
        AccessKeyPreference(AccessKeyPreference &&) = default ;
        AccessKeyPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccessKeyPreference() = default ;
        AccessKeyPreference& operator=(const AccessKeyPreference &) = default ;
        AccessKeyPreference& operator=(AccessKeyPreference &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowUserToManageAccessKeys_ == nullptr; };
        // allowUserToManageAccessKeys Field Functions 
        bool hasAllowUserToManageAccessKeys() const { return this->allowUserToManageAccessKeys_ != nullptr;};
        void deleteAllowUserToManageAccessKeys() { this->allowUserToManageAccessKeys_ = nullptr;};
        inline bool getAllowUserToManageAccessKeys() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManageAccessKeys_, false) };
        inline AccessKeyPreference& setAllowUserToManageAccessKeys(bool allowUserToManageAccessKeys) { DARABONBA_PTR_SET_VALUE(allowUserToManageAccessKeys_, allowUserToManageAccessKeys) };


      protected:
        // Indicates whether RAM users can manage their AccessKey pairs. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> allowUserToManageAccessKeys_ {};
      };

      virtual bool empty() const override { return this->accessKeyPreference_ == nullptr
        && this->loginProfilePreference_ == nullptr && this->MFAPreference_ == nullptr && this->maxIdleDays_ == nullptr && this->personalInfoPreference_ == nullptr && this->verificationPreference_ == nullptr; };
      // accessKeyPreference Field Functions 
      bool hasAccessKeyPreference() const { return this->accessKeyPreference_ != nullptr;};
      void deleteAccessKeyPreference() { this->accessKeyPreference_ = nullptr;};
      inline const SecurityPreference::AccessKeyPreference & getAccessKeyPreference() const { DARABONBA_PTR_GET_CONST(accessKeyPreference_, SecurityPreference::AccessKeyPreference) };
      inline SecurityPreference::AccessKeyPreference getAccessKeyPreference() { DARABONBA_PTR_GET(accessKeyPreference_, SecurityPreference::AccessKeyPreference) };
      inline SecurityPreference& setAccessKeyPreference(const SecurityPreference::AccessKeyPreference & accessKeyPreference) { DARABONBA_PTR_SET_VALUE(accessKeyPreference_, accessKeyPreference) };
      inline SecurityPreference& setAccessKeyPreference(SecurityPreference::AccessKeyPreference && accessKeyPreference) { DARABONBA_PTR_SET_RVALUE(accessKeyPreference_, accessKeyPreference) };


      // loginProfilePreference Field Functions 
      bool hasLoginProfilePreference() const { return this->loginProfilePreference_ != nullptr;};
      void deleteLoginProfilePreference() { this->loginProfilePreference_ = nullptr;};
      inline const SecurityPreference::LoginProfilePreference & getLoginProfilePreference() const { DARABONBA_PTR_GET_CONST(loginProfilePreference_, SecurityPreference::LoginProfilePreference) };
      inline SecurityPreference::LoginProfilePreference getLoginProfilePreference() { DARABONBA_PTR_GET(loginProfilePreference_, SecurityPreference::LoginProfilePreference) };
      inline SecurityPreference& setLoginProfilePreference(const SecurityPreference::LoginProfilePreference & loginProfilePreference) { DARABONBA_PTR_SET_VALUE(loginProfilePreference_, loginProfilePreference) };
      inline SecurityPreference& setLoginProfilePreference(SecurityPreference::LoginProfilePreference && loginProfilePreference) { DARABONBA_PTR_SET_RVALUE(loginProfilePreference_, loginProfilePreference) };


      // MFAPreference Field Functions 
      bool hasMFAPreference() const { return this->MFAPreference_ != nullptr;};
      void deleteMFAPreference() { this->MFAPreference_ = nullptr;};
      inline const SecurityPreference::MFAPreference & getMFAPreference() const { DARABONBA_PTR_GET_CONST(MFAPreference_, SecurityPreference::MFAPreference) };
      inline SecurityPreference::MFAPreference getMFAPreference() { DARABONBA_PTR_GET(MFAPreference_, SecurityPreference::MFAPreference) };
      inline SecurityPreference& setMFAPreference(const SecurityPreference::MFAPreference & mFAPreference) { DARABONBA_PTR_SET_VALUE(MFAPreference_, mFAPreference) };
      inline SecurityPreference& setMFAPreference(SecurityPreference::MFAPreference && mFAPreference) { DARABONBA_PTR_SET_RVALUE(MFAPreference_, mFAPreference) };


      // maxIdleDays Field Functions 
      bool hasMaxIdleDays() const { return this->maxIdleDays_ != nullptr;};
      void deleteMaxIdleDays() { this->maxIdleDays_ = nullptr;};
      inline const SecurityPreference::MaxIdleDays & getMaxIdleDays() const { DARABONBA_PTR_GET_CONST(maxIdleDays_, SecurityPreference::MaxIdleDays) };
      inline SecurityPreference::MaxIdleDays getMaxIdleDays() { DARABONBA_PTR_GET(maxIdleDays_, SecurityPreference::MaxIdleDays) };
      inline SecurityPreference& setMaxIdleDays(const SecurityPreference::MaxIdleDays & maxIdleDays) { DARABONBA_PTR_SET_VALUE(maxIdleDays_, maxIdleDays) };
      inline SecurityPreference& setMaxIdleDays(SecurityPreference::MaxIdleDays && maxIdleDays) { DARABONBA_PTR_SET_RVALUE(maxIdleDays_, maxIdleDays) };


      // personalInfoPreference Field Functions 
      bool hasPersonalInfoPreference() const { return this->personalInfoPreference_ != nullptr;};
      void deletePersonalInfoPreference() { this->personalInfoPreference_ = nullptr;};
      inline const SecurityPreference::PersonalInfoPreference & getPersonalInfoPreference() const { DARABONBA_PTR_GET_CONST(personalInfoPreference_, SecurityPreference::PersonalInfoPreference) };
      inline SecurityPreference::PersonalInfoPreference getPersonalInfoPreference() { DARABONBA_PTR_GET(personalInfoPreference_, SecurityPreference::PersonalInfoPreference) };
      inline SecurityPreference& setPersonalInfoPreference(const SecurityPreference::PersonalInfoPreference & personalInfoPreference) { DARABONBA_PTR_SET_VALUE(personalInfoPreference_, personalInfoPreference) };
      inline SecurityPreference& setPersonalInfoPreference(SecurityPreference::PersonalInfoPreference && personalInfoPreference) { DARABONBA_PTR_SET_RVALUE(personalInfoPreference_, personalInfoPreference) };


      // verificationPreference Field Functions 
      bool hasVerificationPreference() const { return this->verificationPreference_ != nullptr;};
      void deleteVerificationPreference() { this->verificationPreference_ = nullptr;};
      inline const SecurityPreference::VerificationPreference & getVerificationPreference() const { DARABONBA_PTR_GET_CONST(verificationPreference_, SecurityPreference::VerificationPreference) };
      inline SecurityPreference::VerificationPreference getVerificationPreference() { DARABONBA_PTR_GET(verificationPreference_, SecurityPreference::VerificationPreference) };
      inline SecurityPreference& setVerificationPreference(const SecurityPreference::VerificationPreference & verificationPreference) { DARABONBA_PTR_SET_VALUE(verificationPreference_, verificationPreference) };
      inline SecurityPreference& setVerificationPreference(SecurityPreference::VerificationPreference && verificationPreference) { DARABONBA_PTR_SET_RVALUE(verificationPreference_, verificationPreference) };


    protected:
      // The AccessKey pair preference.
      shared_ptr<SecurityPreference::AccessKeyPreference> accessKeyPreference_ {};
      // The logon preference.
      shared_ptr<SecurityPreference::LoginProfilePreference> loginProfilePreference_ {};
      // The MFA preference.
      shared_ptr<SecurityPreference::MFAPreference> MFAPreference_ {};
      // The maximum idle periods. Unit: days.
      shared_ptr<SecurityPreference::MaxIdleDays> maxIdleDays_ {};
      // The personal information preference.
      shared_ptr<SecurityPreference::PersonalInfoPreference> personalInfoPreference_ {};
      // The MFA method preference.
      shared_ptr<SecurityPreference::VerificationPreference> verificationPreference_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityPreference_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecurityPreferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityPreference Field Functions 
    bool hasSecurityPreference() const { return this->securityPreference_ != nullptr;};
    void deleteSecurityPreference() { this->securityPreference_ = nullptr;};
    inline const GetSecurityPreferenceResponseBody::SecurityPreference & getSecurityPreference() const { DARABONBA_PTR_GET_CONST(securityPreference_, GetSecurityPreferenceResponseBody::SecurityPreference) };
    inline GetSecurityPreferenceResponseBody::SecurityPreference getSecurityPreference() { DARABONBA_PTR_GET(securityPreference_, GetSecurityPreferenceResponseBody::SecurityPreference) };
    inline GetSecurityPreferenceResponseBody& setSecurityPreference(const GetSecurityPreferenceResponseBody::SecurityPreference & securityPreference) { DARABONBA_PTR_SET_VALUE(securityPreference_, securityPreference) };
    inline GetSecurityPreferenceResponseBody& setSecurityPreference(GetSecurityPreferenceResponseBody::SecurityPreference && securityPreference) { DARABONBA_PTR_SET_RVALUE(securityPreference_, securityPreference) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of security preferences.
    shared_ptr<GetSecurityPreferenceResponseBody::SecurityPreference> securityPreference_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
