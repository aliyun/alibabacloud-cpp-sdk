// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
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
        DARABONBA_PTR_TO_JSON(PublicKeyPreference, publicKeyPreference_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityPreference& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyPreference, accessKeyPreference_);
        DARABONBA_PTR_FROM_JSON(LoginProfilePreference, loginProfilePreference_);
        DARABONBA_PTR_FROM_JSON(MFAPreference, MFAPreference_);
        DARABONBA_PTR_FROM_JSON(PublicKeyPreference, publicKeyPreference_);
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
      class PublicKeyPreference : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PublicKeyPreference& obj) { 
          DARABONBA_PTR_TO_JSON(AllowUserToManagePublicKeys, allowUserToManagePublicKeys_);
        };
        friend void from_json(const Darabonba::Json& j, PublicKeyPreference& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowUserToManagePublicKeys, allowUserToManagePublicKeys_);
        };
        PublicKeyPreference() = default ;
        PublicKeyPreference(const PublicKeyPreference &) = default ;
        PublicKeyPreference(PublicKeyPreference &&) = default ;
        PublicKeyPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PublicKeyPreference() = default ;
        PublicKeyPreference& operator=(const PublicKeyPreference &) = default ;
        PublicKeyPreference& operator=(PublicKeyPreference &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowUserToManagePublicKeys_ == nullptr; };
        // allowUserToManagePublicKeys Field Functions 
        bool hasAllowUserToManagePublicKeys() const { return this->allowUserToManagePublicKeys_ != nullptr;};
        void deleteAllowUserToManagePublicKeys() { this->allowUserToManagePublicKeys_ = nullptr;};
        inline bool getAllowUserToManagePublicKeys() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManagePublicKeys_, false) };
        inline PublicKeyPreference& setAllowUserToManagePublicKeys(bool allowUserToManagePublicKeys) { DARABONBA_PTR_SET_VALUE(allowUserToManagePublicKeys_, allowUserToManagePublicKeys) };


      protected:
        // Indicates whether RAM users can manage their public keys. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> allowUserToManagePublicKeys_ {};
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
          DARABONBA_PTR_TO_JSON(EnableSaveMFATicket, enableSaveMFATicket_);
          DARABONBA_PTR_TO_JSON(LoginNetworkMasks, loginNetworkMasks_);
          DARABONBA_PTR_TO_JSON(LoginSessionDuration, loginSessionDuration_);
        };
        friend void from_json(const Darabonba::Json& j, LoginProfilePreference& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowUserToChangePassword, allowUserToChangePassword_);
          DARABONBA_PTR_FROM_JSON(EnableSaveMFATicket, enableSaveMFATicket_);
          DARABONBA_PTR_FROM_JSON(LoginNetworkMasks, loginNetworkMasks_);
          DARABONBA_PTR_FROM_JSON(LoginSessionDuration, loginSessionDuration_);
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
        && this->enableSaveMFATicket_ == nullptr && this->loginNetworkMasks_ == nullptr && this->loginSessionDuration_ == nullptr; };
        // allowUserToChangePassword Field Functions 
        bool hasAllowUserToChangePassword() const { return this->allowUserToChangePassword_ != nullptr;};
        void deleteAllowUserToChangePassword() { this->allowUserToChangePassword_ = nullptr;};
        inline bool getAllowUserToChangePassword() const { DARABONBA_PTR_GET_DEFAULT(allowUserToChangePassword_, false) };
        inline LoginProfilePreference& setAllowUserToChangePassword(bool allowUserToChangePassword) { DARABONBA_PTR_SET_VALUE(allowUserToChangePassword_, allowUserToChangePassword) };


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


      protected:
        // Indicates whether RAM users can change their passwords. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> allowUserToChangePassword_ {};
        // Indicates whether RAM users can save security codes for MFA during logon. Each security code is valid for seven days. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> enableSaveMFATicket_ {};
        // The subnet mask that indicates the IP addresses from which logon to the Alibaba Cloud Management Console is allowed. This parameter applies to password-based logon and single sign-on (SSO). However, this parameter does not apply to API calls that are authenticated based on AccessKey pairs.
        // 
        // *   If you specify a subnet mask, RAM users can use only the IP addresses in the subnet mask to log on to the Alibaba Cloud Management Console.
        // *   If you do not specify a subnet mask, RAM users can use all IP addresses to log on to the Alibaba Cloud Management Console.
        // 
        // If you want to specify more than one subnet mask, separate the masks with semicolons (;). Example: 192.168.0.0/16;10.0.0.0/8.
        shared_ptr<string> loginNetworkMasks_ {};
        // The validity period of the logon session of RAM users. Unit: hours.
        shared_ptr<int32_t> loginSessionDuration_ {};
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
        // Indicates whether Resource Access Management (RAM) users can manage their AccessKey pairs. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> allowUserToManageAccessKeys_ {};
      };

      virtual bool empty() const override { return this->accessKeyPreference_ == nullptr
        && this->loginProfilePreference_ == nullptr && this->MFAPreference_ == nullptr && this->publicKeyPreference_ == nullptr; };
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


      // publicKeyPreference Field Functions 
      bool hasPublicKeyPreference() const { return this->publicKeyPreference_ != nullptr;};
      void deletePublicKeyPreference() { this->publicKeyPreference_ = nullptr;};
      inline const SecurityPreference::PublicKeyPreference & getPublicKeyPreference() const { DARABONBA_PTR_GET_CONST(publicKeyPreference_, SecurityPreference::PublicKeyPreference) };
      inline SecurityPreference::PublicKeyPreference getPublicKeyPreference() { DARABONBA_PTR_GET(publicKeyPreference_, SecurityPreference::PublicKeyPreference) };
      inline SecurityPreference& setPublicKeyPreference(const SecurityPreference::PublicKeyPreference & publicKeyPreference) { DARABONBA_PTR_SET_VALUE(publicKeyPreference_, publicKeyPreference) };
      inline SecurityPreference& setPublicKeyPreference(SecurityPreference::PublicKeyPreference && publicKeyPreference) { DARABONBA_PTR_SET_RVALUE(publicKeyPreference_, publicKeyPreference) };


    protected:
      // The AccessKey pair preference.
      shared_ptr<SecurityPreference::AccessKeyPreference> accessKeyPreference_ {};
      // The logon preference.
      shared_ptr<SecurityPreference::LoginProfilePreference> loginProfilePreference_ {};
      // The multi-factor authentication (MFA) preference.
      shared_ptr<SecurityPreference::MFAPreference> MFAPreference_ {};
      // The public key preference.
      // 
      // >  This parameter is valid only for the Japan site.
      shared_ptr<SecurityPreference::PublicKeyPreference> publicKeyPreference_ {};
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
    // The security preferences.
    shared_ptr<GetSecurityPreferenceResponseBody::SecurityPreference> securityPreference_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
