// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_TO_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LanguageStatus, languageStatus_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(MobileCountryCode, mobileCountryCode_);
      DARABONBA_PTR_TO_JSON(NeedResetPassword, needResetPassword_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceUserId, sourceUserId_);
      DARABONBA_PTR_TO_JSON(TwoFactorMethods, twoFactorMethods_);
      DARABONBA_PTR_TO_JSON(TwoFactorStatus, twoFactorStatus_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LanguageStatus, languageStatus_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(MobileCountryCode, mobileCountryCode_);
      DARABONBA_PTR_FROM_JSON(NeedResetPassword, needResetPassword_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceUserId, sourceUserId_);
      DARABONBA_PTR_FROM_JSON(TwoFactorMethods, twoFactorMethods_);
      DARABONBA_PTR_FROM_JSON(TwoFactorStatus, twoFactorStatus_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateUserRequest() = default ;
    CreateUserRequest(const CreateUserRequest &) = default ;
    CreateUserRequest(CreateUserRequest &&) = default ;
    CreateUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserRequest() = default ;
    CreateUserRequest& operator=(const CreateUserRequest &) = default ;
    CreateUserRequest& operator=(CreateUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->displayName_ == nullptr && this->effectiveEndTime_ == nullptr && this->effectiveStartTime_ == nullptr && this->email_ == nullptr && this->instanceId_ == nullptr
        && this->language_ == nullptr && this->languageStatus_ == nullptr && this->mobile_ == nullptr && this->mobileCountryCode_ == nullptr && this->needResetPassword_ == nullptr
        && this->password_ == nullptr && this->regionId_ == nullptr && this->source_ == nullptr && this->sourceUserId_ == nullptr && this->twoFactorMethods_ == nullptr
        && this->twoFactorStatus_ == nullptr && this->userName_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateUserRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateUserRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline int64_t getEffectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, 0L) };
    inline CreateUserRequest& setEffectiveEndTime(int64_t effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline int64_t getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, 0L) };
    inline CreateUserRequest& setEffectiveStartTime(int64_t effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateUserRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateUserRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // languageStatus Field Functions 
    bool hasLanguageStatus() const { return this->languageStatus_ != nullptr;};
    void deleteLanguageStatus() { this->languageStatus_ = nullptr;};
    inline string getLanguageStatus() const { DARABONBA_PTR_GET_DEFAULT(languageStatus_, "") };
    inline CreateUserRequest& setLanguageStatus(string languageStatus) { DARABONBA_PTR_SET_VALUE(languageStatus_, languageStatus) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline CreateUserRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // mobileCountryCode Field Functions 
    bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
    void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
    inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
    inline CreateUserRequest& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


    // needResetPassword Field Functions 
    bool hasNeedResetPassword() const { return this->needResetPassword_ != nullptr;};
    void deleteNeedResetPassword() { this->needResetPassword_ = nullptr;};
    inline bool getNeedResetPassword() const { DARABONBA_PTR_GET_DEFAULT(needResetPassword_, false) };
    inline CreateUserRequest& setNeedResetPassword(bool needResetPassword) { DARABONBA_PTR_SET_VALUE(needResetPassword_, needResetPassword) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateUserRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateUserRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceUserId Field Functions 
    bool hasSourceUserId() const { return this->sourceUserId_ != nullptr;};
    void deleteSourceUserId() { this->sourceUserId_ = nullptr;};
    inline string getSourceUserId() const { DARABONBA_PTR_GET_DEFAULT(sourceUserId_, "") };
    inline CreateUserRequest& setSourceUserId(string sourceUserId) { DARABONBA_PTR_SET_VALUE(sourceUserId_, sourceUserId) };


    // twoFactorMethods Field Functions 
    bool hasTwoFactorMethods() const { return this->twoFactorMethods_ != nullptr;};
    void deleteTwoFactorMethods() { this->twoFactorMethods_ = nullptr;};
    inline string getTwoFactorMethods() const { DARABONBA_PTR_GET_DEFAULT(twoFactorMethods_, "") };
    inline CreateUserRequest& setTwoFactorMethods(string twoFactorMethods) { DARABONBA_PTR_SET_VALUE(twoFactorMethods_, twoFactorMethods) };


    // twoFactorStatus Field Functions 
    bool hasTwoFactorStatus() const { return this->twoFactorStatus_ != nullptr;};
    void deleteTwoFactorStatus() { this->twoFactorStatus_ = nullptr;};
    inline string getTwoFactorStatus() const { DARABONBA_PTR_GET_DEFAULT(twoFactorStatus_, "") };
    inline CreateUserRequest& setTwoFactorStatus(string twoFactorStatus) { DARABONBA_PTR_SET_VALUE(twoFactorStatus_, twoFactorStatus) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateUserRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The remarks of the user that you want to add. The remarks can be up to 500 characters in length.
    shared_ptr<string> comment_ {};
    // The display name of the user that you want to add. The display name can be up to 128 characters in length.
    // 
    // >  If you leave this parameter empty, the logon name is used as the display name.
    shared_ptr<string> displayName_ {};
    // The end time of the validity period of the user. Specify a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> effectiveEndTime_ {};
    // The start time of the validity period of the user. Specify a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> effectiveStartTime_ {};
    // The email address of the user that you want to add.
    // 
    // > 
    // 
    // *   This parameter is required if TwoFactorStatus is set to Enable and TwoFactorMethods is set to email, or if TwoFactorStatus is set to Global and TwoFactorMethods is set to email in the global two-factor authentication settings.
    // 
    // *   You can call the [GetInstanceTwoFactor](https://help.aliyun.com/document_detail/462968.html) operation to query the global two-factor authentication settings.
    shared_ptr<string> email_ {};
    // The ID of the bastion host to which you want to add a user.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required if LanguageStatus is set to Custom. Valid values:
    // 
    // *   **zh-cn**: simplified Chinese.
    // *   **en**: English.
    shared_ptr<string> language_ {};
    // Specifies whether to send notifications in the language specified in the global settings or a custom language.
    // 
    // *   **Global**
    // *   **Custom**
    // 
    // >  If you leave this parameter empty, the default value Global is used.
    shared_ptr<string> languageStatus_ {};
    // The mobile phone number of the user that you want to add.
    // 
    // > 
    // 
    // *   This parameter is required if TwoFactorStatus is set to Enable and TwoFactorMethods is set to sms or dingtalk, or if TwoFactorStatus is set to Global and TwoFactorMethods is set to sms or dingtalk in the global two-factor authentication settings.
    // 
    // *   You can call the [GetInstanceTwoFactor](https://help.aliyun.com/document_detail/462968.html) operation to query the global two-factor authentication settings.
    shared_ptr<string> mobile_ {};
    // The location where the mobile phone number of the user is registered. Default value: CN. Valid values:
    // 
    // *   **CN**: the Chinese mainland, whose international dialing code is +86.
    // *   **HK**: Hong Kong (China), whose international dialing code is +852.
    // *   **MO**: Macao (China), whose international dialing code is +853.
    // *   **TW**: Taiwan (China), whose international dialing code is +886.
    // *   **RU**: Russia, whose international dialing code is +7.
    // *   **SG**: Singapore, whose international dialing code is +65.
    // *   **MY**: Malaysia, whose international dialing code is +60.
    // *   **ID**: Indonesia, whose international dialing code is +62.
    // *   **DE**: Germany, whose international dialing code is +49.
    // *   **AU**: Australia, whose international dialing code is +61.
    // *   **US**: US, whose international dialing code is +1.
    // *   **AE**: United Arab Emirates, whose international dialing code is +971.
    // *   **JP**: Japan, whose international dialing code is +81.
    // *   **GB**: UK, whose international dialing code is +44.
    // *   **IN**: India, whose international dialing code is +91.
    // *   **KR**: Republic of Korea, whose international dialing code is +82.
    // *   **PH**: Philippines, whose international dialing code is +63.
    // *   **CH**: Switzerland, whose international dialing code is +41.
    // *   **SE:** Sweden, whose international dialing code is +46.
    // *   **SA:** Saudi Arabia, whose international dialing code is +966.
    shared_ptr<string> mobileCountryCode_ {};
    // Specifies whether password reset is required upon the next logon. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  If you leave this parameter empty, the default value false is used.
    shared_ptr<bool> needResetPassword_ {};
    // The logon password of the user that you want to add. The logon password must be 8 to 128 characters in length. It must contain uppercase letters, lowercase letters, digits, and special characters.
    // 
    // > This parameter is required if Source is set to Local.
    shared_ptr<string> password_ {};
    // The region ID of the bastion host to which you want to add a user.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The type of the user that you want to add. Valid values:
    // 
    // *   **Local**: a local user.
    // *   **Ram**: a RAM user.
    // *   **AD**: an AD-authenticated user.
    // *   **LDAP**: an LDAP-authenticated user.
    // 
    // This parameter is required.
    shared_ptr<string> source_ {};
    // The unique ID of the user that you want to add.
    // 
    // > 
    // 
    // *   This parameter uniquely identifies a RAM user of the bastion host. This parameter is required if Source is set to Ram. You can call the [ListUsers](https://help.aliyun.com/document_detail/28684.html) operation in RAM to obtain the unique ID of the user from the UserId response parameter.
    // 
    // *   This parameter is required if Source is set to AD or LDAP. Specify the distinguished name (DN) of the Active Directory (AD)-authenticated user or Lightweight Directory Access Protocol (LDAP)-authenticated user that you want to add.
    shared_ptr<string> sourceUserId_ {};
    // The two-factor authentication method. You can select only one method. Valid values:
    // 
    // *   **sms**: text message-based two-factor authentication.
    // *   **email**: email-based two-factor authentication.
    // *   **dingtalk**: DingTalk-based two-factor authentication.
    // *   **totp OTP**: one-time password (OTP) token-based two-factor authentication.
    // 
    // >  If TwoFactorStatus is set to Enable, you must select one of the preceding values for TwoFactorMethods.
    shared_ptr<string> twoFactorMethods_ {};
    // Specifies whether two-factor authentication is enabled for the user. Valid values:
    // 
    // *   **Global**: The global settings apply.
    // *   **Disable**: Two-factor authentication is disabled.
    // *   **Enable**: Two-factor authentication is enabled and user-specific settings apply.
    // 
    // >  If you leave this parameter empty, the default value Global is used.
    shared_ptr<string> twoFactorStatus_ {};
    // The logon name of the user that you want to add. The logon name must be 1 to 128 characters in length and can contain only letters, digits, and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
