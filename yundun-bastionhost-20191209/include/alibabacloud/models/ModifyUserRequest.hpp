// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(TwoFactorMethods, twoFactorMethods_);
      DARABONBA_PTR_TO_JSON(TwoFactorStatus, twoFactorStatus_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(TwoFactorMethods, twoFactorMethods_);
      DARABONBA_PTR_FROM_JSON(TwoFactorStatus, twoFactorStatus_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ModifyUserRequest() = default ;
    ModifyUserRequest(const ModifyUserRequest &) = default ;
    ModifyUserRequest(ModifyUserRequest &&) = default ;
    ModifyUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserRequest() = default ;
    ModifyUserRequest& operator=(const ModifyUserRequest &) = default ;
    ModifyUserRequest& operator=(ModifyUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->displayName_ == nullptr && this->effectiveEndTime_ == nullptr && this->effectiveStartTime_ == nullptr && this->email_ == nullptr && this->instanceId_ == nullptr
        && this->language_ == nullptr && this->languageStatus_ == nullptr && this->mobile_ == nullptr && this->mobileCountryCode_ == nullptr && this->needResetPassword_ == nullptr
        && this->password_ == nullptr && this->regionId_ == nullptr && this->twoFactorMethods_ == nullptr && this->twoFactorStatus_ == nullptr && this->userId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyUserRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ModifyUserRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline int64_t getEffectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, 0L) };
    inline ModifyUserRequest& setEffectiveEndTime(int64_t effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline int64_t getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, 0L) };
    inline ModifyUserRequest& setEffectiveStartTime(int64_t effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ModifyUserRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ModifyUserRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // languageStatus Field Functions 
    bool hasLanguageStatus() const { return this->languageStatus_ != nullptr;};
    void deleteLanguageStatus() { this->languageStatus_ = nullptr;};
    inline string getLanguageStatus() const { DARABONBA_PTR_GET_DEFAULT(languageStatus_, "") };
    inline ModifyUserRequest& setLanguageStatus(string languageStatus) { DARABONBA_PTR_SET_VALUE(languageStatus_, languageStatus) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline ModifyUserRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // mobileCountryCode Field Functions 
    bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
    void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
    inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
    inline ModifyUserRequest& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


    // needResetPassword Field Functions 
    bool hasNeedResetPassword() const { return this->needResetPassword_ != nullptr;};
    void deleteNeedResetPassword() { this->needResetPassword_ = nullptr;};
    inline bool getNeedResetPassword() const { DARABONBA_PTR_GET_DEFAULT(needResetPassword_, false) };
    inline ModifyUserRequest& setNeedResetPassword(bool needResetPassword) { DARABONBA_PTR_SET_VALUE(needResetPassword_, needResetPassword) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyUserRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // twoFactorMethods Field Functions 
    bool hasTwoFactorMethods() const { return this->twoFactorMethods_ != nullptr;};
    void deleteTwoFactorMethods() { this->twoFactorMethods_ = nullptr;};
    inline string getTwoFactorMethods() const { DARABONBA_PTR_GET_DEFAULT(twoFactorMethods_, "") };
    inline ModifyUserRequest& setTwoFactorMethods(string twoFactorMethods) { DARABONBA_PTR_SET_VALUE(twoFactorMethods_, twoFactorMethods) };


    // twoFactorStatus Field Functions 
    bool hasTwoFactorStatus() const { return this->twoFactorStatus_ != nullptr;};
    void deleteTwoFactorStatus() { this->twoFactorStatus_ = nullptr;};
    inline string getTwoFactorStatus() const { DARABONBA_PTR_GET_DEFAULT(twoFactorStatus_, "") };
    inline ModifyUserRequest& setTwoFactorStatus(string twoFactorStatus) { DARABONBA_PTR_SET_VALUE(twoFactorStatus_, twoFactorStatus) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ModifyUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The new remarks of the user. The remarks can be up to 500 characters in length.
    // 
    // >  Leave this parameter empty if you do not want to change the remarks of the user.
    shared_ptr<string> comment_ {};
    // The new display name of the user. The display name can be up to 128 characters in length.
    // 
    // >  Leave this parameter empty if you do not want to change the display name of the user.
    shared_ptr<string> displayName_ {};
    // The end time of the validity period of the user. Specify a UNIX timestamp. Unit: seconds.
    // 
    // >  Leave this parameter empty if you do not want to change the end time of the validity period.
    shared_ptr<int64_t> effectiveEndTime_ {};
    // The start time of the validity period of the user. Specify a UNIX timestamp. Unit: seconds.
    // 
    // >  Leave this parameter empty if you do not want to change the start time of the validity period.
    shared_ptr<int64_t> effectiveStartTime_ {};
    // The new email address of the user.
    // 
    // > 
    // 
    // *   This parameter is required if TwoFactorStatus is set to Enable and TwoFactorMethods is set to email, or if TwoFactorStatus is set to Global and TwoFactorMethods is set to email in the global two-factor authentication settings.
    // 
    // *   You can call the [GetInstanceTwoFactor](https://help.aliyun.com/document_detail/462968.html) operation to query the global two-factor authentication settings.
    // 
    // *   Leave this parameter empty if you do not want to change the email address of the user.
    shared_ptr<string> email_ {};
    // The ID of the bastion host on which you want to modify the information about the user.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required if LanguageStatus is set to Custom.
    // 
    // - **zh-cn**: simplified Chinese
    // - **en**: English
    shared_ptr<string> language_ {};
    // Specifies whether to send notifications in the language specified in the global settings or a custom language.
    // 
    // *   **Global**
    // *   **Custom**
    // 
    // >  Leave this parameter empty if you do not want to change the natural language used to notify the user.
    shared_ptr<string> languageStatus_ {};
    // The new mobile phone number of the user.
    // 
    // > 
    // 
    // *   This parameter is required if TwoFactorStatus is set to Enable and TwoFactorMethods is set to sms or dingtalk, or if TwoFactorStatus is set to Global and TwoFactorMethods is set to sms or dingtalk in the global two-factor authentication settings.
    // 
    // *   You can call the [GetInstanceTwoFactor](https://help.aliyun.com/document_detail/462968.html) operation to query the global two-factor authentication settings.
    // 
    // *   Leave this parameter empty if you do not want to change the mobile phone number of the user.
    shared_ptr<string> mobile_ {};
    // The country where the new mobile number of the user is registered. Valid values:
    // 
    // *   **CN:** the Chinese mainland, whose country calling code is +86
    // *   **HK:** Hong Kong (China), whose country calling code is +852
    // *   **MO:** Macao (China), whose country calling code is +853
    // *   **TW:** Taiwan (China), whose country calling code is +886
    // *   **RU:** Russia, whose country calling code is +7
    // *   **SG:** Singapore, whose country calling code is +65
    // *   **MY:** Malaysia, whose country calling code is +60
    // *   **ID:** Indonesia, whose country calling code is +62
    // *   **DE:** Germany, whose country calling code is +49
    // *   **AU:** Australia, whose country calling code is +61
    // *   **US:** US, whose country calling code is +1
    // *   **AE:** United Arab Emirates, whose country calling code is +971
    // *   **JP:** Japan, whose country calling code is +81
    // *   **GB:** UK, whose country calling code is +44
    // *   **IN:** India, whose country calling code is +91
    // *   **KR:** Republic of Korea, whose country calling code is +82
    // *   **PH:** Philippines, whose country calling code is +63
    // *   **CH:** Switzerland, whose country calling code is +41
    // *   **SE:** Sweden, whose country calling code is +46
    // *   **SA:** Saudi Arabia, whose country calling code is +966
    shared_ptr<string> mobileCountryCode_ {};
    // Specifies whether password reset is required upon the next logon. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  Leave this parameter empty if you do not want to change the password reset settings for the user.
    shared_ptr<bool> needResetPassword_ {};
    // The new password of the user. The password must be 8 to 128 characters in length. It must contain uppercase letters, lowercase letters, digits, and special characters.
    // 
    // > Leave this parameter empty if you do not want to change the password of the user.
    shared_ptr<string> password_ {};
    // The region ID of the bastion host on which you want to modify the information about the user.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The two-factor authentication method. You can select only one method. Valid values:
    // 
    // *   **sms**: text message-based two-factor authentication.
    // *   **email**: email-based two-factor authentication.
    // *   **dingtalk**: DingTalk-based two-factor authentication.
    // *   **totp OTP:** one-time password (OTP) token-based two-factor authentication.
    // 
    // >  If TwoFactorStatus is set to Enable, you must specify one of the valid values as TwoFactorMethods.
    shared_ptr<string> twoFactorMethods_ {};
    // Specifies whether two-factor authentication is enabled for the user. Valid values:
    // 
    // *   **Global**: The global settings apply.
    // *   **Disable**: Two-factor authentication is disabled.
    // *   **Enable**: Two-factor authentication is enabled and user-specific settings apply.
    // 
    // >  Leave this parameter empty if you do not want to change the two-factory authentication settings for the user.
    shared_ptr<string> twoFactorStatus_ {};
    // The ID of the user whose information you want to modify.
    // 
    // >  You can call the [ListUsers](https://help.aliyun.com/document_detail/204522.html) operation to query the user ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
