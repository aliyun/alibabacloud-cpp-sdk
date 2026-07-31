// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
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
  class GetUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    GetUserResponseBody() = default ;
    GetUserResponseBody(const GetUserResponseBody &) = default ;
    GetUserResponseBody(GetUserResponseBody &&) = default ;
    GetUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBody() = default ;
    GetUserResponseBody& operator=(const GetUserResponseBody &) = default ;
    GetUserResponseBody& operator=(GetUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class User : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const User& obj) { 
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
      friend void from_json(const Darabonba::Json& j, User& obj) { 
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
      User() = default ;
      User(const User &) = default ;
      User(User &&) = default ;
      User(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~User() = default ;
      User& operator=(const User &) = default ;
      User& operator=(User &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->displayName_ == nullptr && this->effectiveEndTime_ == nullptr && this->effectiveStartTime_ == nullptr && this->email_ == nullptr && this->language_ == nullptr
        && this->languageStatus_ == nullptr && this->mobile_ == nullptr && this->mobileCountryCode_ == nullptr && this->needResetPassword_ == nullptr && this->source_ == nullptr
        && this->sourceUserId_ == nullptr && this->twoFactorMethods_ == nullptr && this->twoFactorStatus_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr
        && this->userState_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline User& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline User& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // effectiveEndTime Field Functions 
      bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
      void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
      inline int64_t getEffectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, 0L) };
      inline User& setEffectiveEndTime(int64_t effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


      // effectiveStartTime Field Functions 
      bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
      void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
      inline int64_t getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, 0L) };
      inline User& setEffectiveStartTime(int64_t effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline User& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline User& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // languageStatus Field Functions 
      bool hasLanguageStatus() const { return this->languageStatus_ != nullptr;};
      void deleteLanguageStatus() { this->languageStatus_ = nullptr;};
      inline string getLanguageStatus() const { DARABONBA_PTR_GET_DEFAULT(languageStatus_, "") };
      inline User& setLanguageStatus(string languageStatus) { DARABONBA_PTR_SET_VALUE(languageStatus_, languageStatus) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline User& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // mobileCountryCode Field Functions 
      bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
      void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
      inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
      inline User& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


      // needResetPassword Field Functions 
      bool hasNeedResetPassword() const { return this->needResetPassword_ != nullptr;};
      void deleteNeedResetPassword() { this->needResetPassword_ = nullptr;};
      inline bool getNeedResetPassword() const { DARABONBA_PTR_GET_DEFAULT(needResetPassword_, false) };
      inline User& setNeedResetPassword(bool needResetPassword) { DARABONBA_PTR_SET_VALUE(needResetPassword_, needResetPassword) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline User& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceUserId Field Functions 
      bool hasSourceUserId() const { return this->sourceUserId_ != nullptr;};
      void deleteSourceUserId() { this->sourceUserId_ = nullptr;};
      inline string getSourceUserId() const { DARABONBA_PTR_GET_DEFAULT(sourceUserId_, "") };
      inline User& setSourceUserId(string sourceUserId) { DARABONBA_PTR_SET_VALUE(sourceUserId_, sourceUserId) };


      // twoFactorMethods Field Functions 
      bool hasTwoFactorMethods() const { return this->twoFactorMethods_ != nullptr;};
      void deleteTwoFactorMethods() { this->twoFactorMethods_ = nullptr;};
      inline const vector<string> & getTwoFactorMethods() const { DARABONBA_PTR_GET_CONST(twoFactorMethods_, vector<string>) };
      inline vector<string> getTwoFactorMethods() { DARABONBA_PTR_GET(twoFactorMethods_, vector<string>) };
      inline User& setTwoFactorMethods(const vector<string> & twoFactorMethods) { DARABONBA_PTR_SET_VALUE(twoFactorMethods_, twoFactorMethods) };
      inline User& setTwoFactorMethods(vector<string> && twoFactorMethods) { DARABONBA_PTR_SET_RVALUE(twoFactorMethods_, twoFactorMethods) };


      // twoFactorStatus Field Functions 
      bool hasTwoFactorStatus() const { return this->twoFactorStatus_ != nullptr;};
      void deleteTwoFactorStatus() { this->twoFactorStatus_ = nullptr;};
      inline string getTwoFactorStatus() const { DARABONBA_PTR_GET_DEFAULT(twoFactorStatus_, "") };
      inline User& setTwoFactorStatus(string twoFactorStatus) { DARABONBA_PTR_SET_VALUE(twoFactorStatus_, twoFactorStatus) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline User& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline User& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // userState Field Functions 
      bool hasUserState() const { return this->userState_ != nullptr;};
      void deleteUserState() { this->userState_ = nullptr;};
      inline const vector<string> & getUserState() const { DARABONBA_PTR_GET_CONST(userState_, vector<string>) };
      inline vector<string> getUserState() { DARABONBA_PTR_GET(userState_, vector<string>) };
      inline User& setUserState(const vector<string> & userState) { DARABONBA_PTR_SET_VALUE(userState_, userState) };
      inline User& setUserState(vector<string> && userState) { DARABONBA_PTR_SET_RVALUE(userState_, userState) };


    protected:
      // The remarks of the user.
      shared_ptr<string> comment_ {};
      // The display name of the user.
      shared_ptr<string> displayName_ {};
      // The end time of the validity period of the user, in seconds (UNIX timestamp format).
      shared_ptr<int64_t> effectiveEndTime_ {};
      // The start time of the validity period of the user, in seconds (UNIX timestamp format).
      shared_ptr<int64_t> effectiveStartTime_ {};
      // The email address of the user.
      shared_ptr<string> email_ {};
      // The notification language. This parameter is required when LanguageStatus is set to Custom. Valid values:
      // 
      // - **zh-cn**: Simplified Chinese.
      // - **en**: English.
      shared_ptr<string> language_ {};
      // The notification language setting. Valid values:
      // 
      // - **Global**: follows the global settings.
      // - **Custom**: custom settings.
      shared_ptr<string> languageStatus_ {};
      // The mobile phone number of the user.
      shared_ptr<string> mobile_ {};
      // The country code of the mobile phone number of the user. Valid values:
      // - **CN**: the Chinese mainland (+86)
      // - **HK**: Hong Kong (China) (+852)
      // - **MO**: Macao (China) (+853)
      // - **TW**: Taiwan (China) (+886)
      // - **RU**: Russia (+7)
      // - **SG**: Singapore (+65)
      // - **MY**: Malaysia (+60)
      // - **ID**: Indonesia (+62)
      // - **DE**: Germany (+49)
      // - **AU**: Australia (+61)
      // - **US**: United States (+1)
      // - **AE**: Dubai (+971)
      // - **JP**: Japan (+81)
      // - **GB**: United Kingdom (+44)
      // - **IN**: India (+91)
      // - **KR**: South Korea (+82)
      // - **PH**: Philippines (+63)
      // - **CH**: Switzerland (+41)
      // - **SE**: Sweden (+46)
      shared_ptr<string> mobileCountryCode_ {};
      // Indicates whether the password must be reset upon the next logon. Valid values:
      // - **true**: The password must be reset.
      // - **false**: The password does not need to be reset.
      shared_ptr<bool> needResetPassword_ {};
      // The source of the user. Valid values:
      // - **Local**: a local user.
      // - **Ram**: a Resource Access Management (RAM) user.
      shared_ptr<string> source_ {};
      // The unique identity of the user.
      // > This parameter is the unique identity of the Resource Access Management (RAM) user that corresponds to the Bastionhost user. This parameter is returned when the user source is a RAM user (the value of **Source** is **Ram**). If the user source is a local user (the value of **Source** is **Local**), this parameter is empty.
      shared_ptr<string> sourceUserId_ {};
      // The array of enabled two-factor authentication methods.
      shared_ptr<vector<string>> twoFactorMethods_ {};
      // The two-factor authentication status of the user. Valid values:
      // 
      // - **Global**: follows the global settings.
      // - **Disable**: two-factor authentication is disabled.
      // - **Enable**: two-factor authentication is enabled and follows the individual user settings.
      shared_ptr<string> twoFactorStatus_ {};
      // The ID of the user.
      shared_ptr<string> userId_ {};
      // The logon name of the user.
      shared_ptr<string> userName_ {};
      // The user status array.
      shared_ptr<vector<string>> userState_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->user_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const GetUserResponseBody::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, GetUserResponseBody::User) };
    inline GetUserResponseBody::User getUser() { DARABONBA_PTR_GET(user_, GetUserResponseBody::User) };
    inline GetUserResponseBody& setUser(const GetUserResponseBody::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline GetUserResponseBody& setUser(GetUserResponseBody::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The unique request ID generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
    // The details of the queried user.
    shared_ptr<GetUserResponseBody::User> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
