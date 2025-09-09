// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERS_HPP_
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
  class ListUsersResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyUsers& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyUsers& obj) { 
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
    ListUsersResponseBodyUsers() = default ;
    ListUsersResponseBodyUsers(const ListUsersResponseBodyUsers &) = default ;
    ListUsersResponseBodyUsers(ListUsersResponseBodyUsers &&) = default ;
    ListUsersResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyUsers() = default ;
    ListUsersResponseBodyUsers& operator=(const ListUsersResponseBodyUsers &) = default ;
    ListUsersResponseBodyUsers& operator=(ListUsersResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->displayName_ != nullptr && this->effectiveEndTime_ != nullptr && this->effectiveStartTime_ != nullptr && this->email_ != nullptr && this->language_ != nullptr
        && this->languageStatus_ != nullptr && this->mobile_ != nullptr && this->mobileCountryCode_ != nullptr && this->needResetPassword_ != nullptr && this->source_ != nullptr
        && this->sourceUserId_ != nullptr && this->twoFactorMethods_ != nullptr && this->twoFactorStatus_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr
        && this->userState_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListUsersResponseBodyUsers& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListUsersResponseBodyUsers& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline int64_t effectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, 0L) };
    inline ListUsersResponseBodyUsers& setEffectiveEndTime(int64_t effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline int64_t effectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, 0L) };
    inline ListUsersResponseBodyUsers& setEffectiveStartTime(int64_t effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListUsersResponseBodyUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListUsersResponseBodyUsers& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // languageStatus Field Functions 
    bool hasLanguageStatus() const { return this->languageStatus_ != nullptr;};
    void deleteLanguageStatus() { this->languageStatus_ = nullptr;};
    inline string languageStatus() const { DARABONBA_PTR_GET_DEFAULT(languageStatus_, "") };
    inline ListUsersResponseBodyUsers& setLanguageStatus(string languageStatus) { DARABONBA_PTR_SET_VALUE(languageStatus_, languageStatus) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline ListUsersResponseBodyUsers& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // mobileCountryCode Field Functions 
    bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
    void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
    inline string mobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
    inline ListUsersResponseBodyUsers& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


    // needResetPassword Field Functions 
    bool hasNeedResetPassword() const { return this->needResetPassword_ != nullptr;};
    void deleteNeedResetPassword() { this->needResetPassword_ = nullptr;};
    inline bool needResetPassword() const { DARABONBA_PTR_GET_DEFAULT(needResetPassword_, false) };
    inline ListUsersResponseBodyUsers& setNeedResetPassword(bool needResetPassword) { DARABONBA_PTR_SET_VALUE(needResetPassword_, needResetPassword) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListUsersResponseBodyUsers& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceUserId Field Functions 
    bool hasSourceUserId() const { return this->sourceUserId_ != nullptr;};
    void deleteSourceUserId() { this->sourceUserId_ = nullptr;};
    inline string sourceUserId() const { DARABONBA_PTR_GET_DEFAULT(sourceUserId_, "") };
    inline ListUsersResponseBodyUsers& setSourceUserId(string sourceUserId) { DARABONBA_PTR_SET_VALUE(sourceUserId_, sourceUserId) };


    // twoFactorMethods Field Functions 
    bool hasTwoFactorMethods() const { return this->twoFactorMethods_ != nullptr;};
    void deleteTwoFactorMethods() { this->twoFactorMethods_ = nullptr;};
    inline const vector<string> & twoFactorMethods() const { DARABONBA_PTR_GET_CONST(twoFactorMethods_, vector<string>) };
    inline vector<string> twoFactorMethods() { DARABONBA_PTR_GET(twoFactorMethods_, vector<string>) };
    inline ListUsersResponseBodyUsers& setTwoFactorMethods(const vector<string> & twoFactorMethods) { DARABONBA_PTR_SET_VALUE(twoFactorMethods_, twoFactorMethods) };
    inline ListUsersResponseBodyUsers& setTwoFactorMethods(vector<string> && twoFactorMethods) { DARABONBA_PTR_SET_RVALUE(twoFactorMethods_, twoFactorMethods) };


    // twoFactorStatus Field Functions 
    bool hasTwoFactorStatus() const { return this->twoFactorStatus_ != nullptr;};
    void deleteTwoFactorStatus() { this->twoFactorStatus_ = nullptr;};
    inline string twoFactorStatus() const { DARABONBA_PTR_GET_DEFAULT(twoFactorStatus_, "") };
    inline ListUsersResponseBodyUsers& setTwoFactorStatus(string twoFactorStatus) { DARABONBA_PTR_SET_VALUE(twoFactorStatus_, twoFactorStatus) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUsersResponseBodyUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListUsersResponseBodyUsers& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userState Field Functions 
    bool hasUserState() const { return this->userState_ != nullptr;};
    void deleteUserState() { this->userState_ = nullptr;};
    inline const vector<string> & userState() const { DARABONBA_PTR_GET_CONST(userState_, vector<string>) };
    inline vector<string> userState() { DARABONBA_PTR_GET(userState_, vector<string>) };
    inline ListUsersResponseBodyUsers& setUserState(const vector<string> & userState) { DARABONBA_PTR_SET_VALUE(userState_, userState) };
    inline ListUsersResponseBodyUsers& setUserState(vector<string> && userState) { DARABONBA_PTR_SET_RVALUE(userState_, userState) };


  protected:
    // The remarks of the user.
    std::shared_ptr<string> comment_ = nullptr;
    // The display name of the user.
    std::shared_ptr<string> displayName_ = nullptr;
    // The end time of the validity period of the user. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> effectiveEndTime_ = nullptr;
    // The start time of the validity period of the user. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> effectiveStartTime_ = nullptr;
    // The email address of the user.
    std::shared_ptr<string> email_ = nullptr;
    // This parameter is required if LanguageStatus is set to Custom. Valid values:
    // 
    // *   **zh-cn**: simplified Chinese.
    // *   **en**: English.
    std::shared_ptr<string> language_ = nullptr;
    // Indicates whether notifications are sent in the language specified in the global settings or a custom language.
    // 
    // *   **Global**
    // *   **Custom**
    std::shared_ptr<string> languageStatus_ = nullptr;
    // The mobile phone number of the user.
    std::shared_ptr<string> mobile_ = nullptr;
    // The location where the mobile phone number of the user is registered. Valid values:
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
    // *   **JP:** Japan, whose international dialing code is +81.
    // *   **GB**: UK, whose international dialing code is +44.
    // *   **IN**: India, whose international dialing code is +91.
    // *   **KR**: Republic of Korea, whose international dialing code is +82.
    // *   **PH**: Philippines, whose international dialing code is +63.
    // *   **CH**: Switzerland, whose international dialing code is +41.
    // *   **SE**: Sweden, whose international dialing code is +46.
    std::shared_ptr<string> mobileCountryCode_ = nullptr;
    // Indicates whether password reset is required upon the next logon. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> needResetPassword_ = nullptr;
    // The type of the user. Valid values:
    // 
    // *   **Local**: a local user.
    // *   **Ram**: a RAM user.
    // *   **AD**: an AD-authenticated user.
    // *   **LDAP**: an LDAP-authenticated user.
    std::shared_ptr<string> source_ = nullptr;
    // The unique ID of the user.
    // 
    // >  This parameter uniquely identifies a RAM user of the bastion host. A value is returned for this parameter if **Source** is set to **Ram**. No value is returned for this parameter if **Source** is set to **Local**.
    std::shared_ptr<string> sourceUserId_ = nullptr;
    // An array of the enabled two-factor authentication methods.
    std::shared_ptr<vector<string>> twoFactorMethods_ = nullptr;
    // Indicates whether two-factor authentication is enabled for the user. Valid values:
    // 
    // *   **Global**: The global setting applies.
    // *   **Disable**: Two-factor authentication is disabled.
    // *   **Enable**: Two-factor authentication is enabled. The user-specific setting for the authentication method applies.
    std::shared_ptr<string> twoFactorStatus_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The logon name of the user.
    std::shared_ptr<string> userName_ = nullptr;
    // An array that lists the states of users.
    std::shared_ptr<vector<string>> userState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
