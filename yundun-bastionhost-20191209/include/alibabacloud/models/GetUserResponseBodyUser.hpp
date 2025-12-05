// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSER_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetUserResponseBodyUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyUser& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_TO_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LanguageStatus, languageStatus_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(MobileCountryCode, mobileCountryCode_);
      DARABONBA_PTR_TO_JSON(NeedResetPassword, needResetPassword_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceUserId, sourceUserId_);
      DARABONBA_PTR_TO_JSON(TwoFactorMethods, twoFactorMethods_);
      DARABONBA_PTR_TO_JSON(TwoFactorStatus, twoFactorStatus_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserState, userState_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyUser& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LanguageStatus, languageStatus_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(MobileCountryCode, mobileCountryCode_);
      DARABONBA_PTR_FROM_JSON(NeedResetPassword, needResetPassword_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceUserId, sourceUserId_);
      DARABONBA_PTR_FROM_JSON(TwoFactorMethods, twoFactorMethods_);
      DARABONBA_PTR_FROM_JSON(TwoFactorStatus, twoFactorStatus_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserState, userState_);
    };
    GetUserResponseBodyUser() = default ;
    GetUserResponseBodyUser(const GetUserResponseBodyUser &) = default ;
    GetUserResponseBodyUser(GetUserResponseBodyUser &&) = default ;
    GetUserResponseBodyUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyUser() = default ;
    GetUserResponseBodyUser& operator=(const GetUserResponseBodyUser &) = default ;
    GetUserResponseBodyUser& operator=(GetUserResponseBodyUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->displayName_ == nullptr && return this->effectiveEndTime_ == nullptr && return this->effectiveStartTime_ == nullptr && return this->email_ == nullptr && return this->language_ == nullptr
        && return this->languageStatus_ == nullptr && return this->mobile_ == nullptr && return this->mobileCountryCode_ == nullptr && return this->needResetPassword_ == nullptr && return this->source_ == nullptr
        && return this->sourceUserId_ == nullptr && return this->twoFactorMethods_ == nullptr && return this->twoFactorStatus_ == nullptr && return this->userId_ == nullptr && return this->userName_ == nullptr
        && return this->userState_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetUserResponseBodyUser& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetUserResponseBodyUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline int64_t effectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, 0L) };
    inline GetUserResponseBodyUser& setEffectiveEndTime(int64_t effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline int64_t effectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, 0L) };
    inline GetUserResponseBodyUser& setEffectiveStartTime(int64_t effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetUserResponseBodyUser& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetUserResponseBodyUser& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // languageStatus Field Functions 
    bool hasLanguageStatus() const { return this->languageStatus_ != nullptr;};
    void deleteLanguageStatus() { this->languageStatus_ = nullptr;};
    inline string languageStatus() const { DARABONBA_PTR_GET_DEFAULT(languageStatus_, "") };
    inline GetUserResponseBodyUser& setLanguageStatus(string languageStatus) { DARABONBA_PTR_SET_VALUE(languageStatus_, languageStatus) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline GetUserResponseBodyUser& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // mobileCountryCode Field Functions 
    bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
    void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
    inline string mobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
    inline GetUserResponseBodyUser& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


    // needResetPassword Field Functions 
    bool hasNeedResetPassword() const { return this->needResetPassword_ != nullptr;};
    void deleteNeedResetPassword() { this->needResetPassword_ = nullptr;};
    inline bool needResetPassword() const { DARABONBA_PTR_GET_DEFAULT(needResetPassword_, false) };
    inline GetUserResponseBodyUser& setNeedResetPassword(bool needResetPassword) { DARABONBA_PTR_SET_VALUE(needResetPassword_, needResetPassword) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetUserResponseBodyUser& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceUserId Field Functions 
    bool hasSourceUserId() const { return this->sourceUserId_ != nullptr;};
    void deleteSourceUserId() { this->sourceUserId_ = nullptr;};
    inline string sourceUserId() const { DARABONBA_PTR_GET_DEFAULT(sourceUserId_, "") };
    inline GetUserResponseBodyUser& setSourceUserId(string sourceUserId) { DARABONBA_PTR_SET_VALUE(sourceUserId_, sourceUserId) };


    // twoFactorMethods Field Functions 
    bool hasTwoFactorMethods() const { return this->twoFactorMethods_ != nullptr;};
    void deleteTwoFactorMethods() { this->twoFactorMethods_ = nullptr;};
    inline const vector<string> & twoFactorMethods() const { DARABONBA_PTR_GET_CONST(twoFactorMethods_, vector<string>) };
    inline vector<string> twoFactorMethods() { DARABONBA_PTR_GET(twoFactorMethods_, vector<string>) };
    inline GetUserResponseBodyUser& setTwoFactorMethods(const vector<string> & twoFactorMethods) { DARABONBA_PTR_SET_VALUE(twoFactorMethods_, twoFactorMethods) };
    inline GetUserResponseBodyUser& setTwoFactorMethods(vector<string> && twoFactorMethods) { DARABONBA_PTR_SET_RVALUE(twoFactorMethods_, twoFactorMethods) };


    // twoFactorStatus Field Functions 
    bool hasTwoFactorStatus() const { return this->twoFactorStatus_ != nullptr;};
    void deleteTwoFactorStatus() { this->twoFactorStatus_ = nullptr;};
    inline string twoFactorStatus() const { DARABONBA_PTR_GET_DEFAULT(twoFactorStatus_, "") };
    inline GetUserResponseBodyUser& setTwoFactorStatus(string twoFactorStatus) { DARABONBA_PTR_SET_VALUE(twoFactorStatus_, twoFactorStatus) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserResponseBodyUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetUserResponseBodyUser& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userState Field Functions 
    bool hasUserState() const { return this->userState_ != nullptr;};
    void deleteUserState() { this->userState_ = nullptr;};
    inline const vector<string> & userState() const { DARABONBA_PTR_GET_CONST(userState_, vector<string>) };
    inline vector<string> userState() { DARABONBA_PTR_GET(userState_, vector<string>) };
    inline GetUserResponseBodyUser& setUserState(const vector<string> & userState) { DARABONBA_PTR_SET_VALUE(userState_, userState) };
    inline GetUserResponseBodyUser& setUserState(vector<string> && userState) { DARABONBA_PTR_SET_RVALUE(userState_, userState) };


  protected:
    // The description of the user.
    std::shared_ptr<string> comment_ = nullptr;
    // The display name of the user.
    std::shared_ptr<string> displayName_ = nullptr;
    // The end of the validity period of the user. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> effectiveEndTime_ = nullptr;
    // The beginning of the validity period of the user. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> effectiveStartTime_ = nullptr;
    // The email address of the user.
    std::shared_ptr<string> email_ = nullptr;
    // This parameter is required if LanguageStatus is set to Custom.
    // 
    // - **zh-cn**: simplified Chinese.
    // - **en**: English.
    std::shared_ptr<string> language_ = nullptr;
    // Indicates whether notifications are sent in the language specified in the global settings or a custom language.
    // 
    // *   **Global**: Global
    // *   **Custom**: Custom
    std::shared_ptr<string> languageStatus_ = nullptr;
    // The mobile phone number of the user.
    std::shared_ptr<string> mobile_ = nullptr;
    // The location in which the mobile number of the user is registered. Valid values:
    // 
    // *   **CN**: the Chinese mainland, whose country calling code is +86
    // *   **HK**: Hong Kong (China), whose country calling code is +852
    // *   **MO**: Macao (China), whose country calling code is +853
    // *   **TW**: Taiwan (China), whose country calling code is +886
    // *   **RU**: Russia, whose country calling code is +7
    // *   **SG**: Singapore, whose country calling code is +65
    // *   **MY**: Malaysia, whose country calling code is +60
    // *   **ID**: Indonesia, whose country calling code is +62
    // *   **DE**: Germany, whose country calling code is +49
    // *   **AU**: Australia, whose country calling code is +61
    // *   **US**: US, whose country calling code is +1
    // *   **AE**: United Arab Emirates, whose country calling code is +971
    // *   **JP:** Japan, whose country calling code is +81
    // *   **GB**: UK, whose country calling code is +44
    // *   **IN**: India, whose country calling code is +91
    // *   **KR**: Republic of Korea, whose country calling code is +82
    // *   **PH**: Philippines, whose country calling code is +63
    // *   **CH**: Switzerland, whose country calling code is +41
    // *   **SE**: Sweden, whose country calling code is +46
    std::shared_ptr<string> mobileCountryCode_ = nullptr;
    // Specifies whether password reset is required upon the next logon. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> needResetPassword_ = nullptr;
    // The source of the user. Valid values:
    // 
    // *   **Local**: a local user
    // *   **Ram**: a RAM user
    std::shared_ptr<string> source_ = nullptr;
    // The unique ID of the user.
    // 
    // > This parameter uniquely identifies a RAM user of the bastion host. A value is returned for this parameter if the **Source** parameter is set to **Ram**. No value is returned for this parameter if the **Source** parameter is set to **Local**.
    std::shared_ptr<string> sourceUserId_ = nullptr;
    // An array that consists of the details of the two-factor authentication method.
    std::shared_ptr<vector<string>> twoFactorMethods_ = nullptr;
    // The two-factor authentication status of the user. Valid values:
    // 
    // *   **Global**: The global settings are used.
    // *   **Disable**: The two-factor authentication is disabled.
    // *   **Enable**: The two-factor authentication is enabled and the user-specific setting is used.
    std::shared_ptr<string> twoFactorStatus_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
    // The logon name of the user.
    std::shared_ptr<string> userName_ = nullptr;
    // An array that consists of the details of the user status.
    std::shared_ptr<vector<string>> userState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
