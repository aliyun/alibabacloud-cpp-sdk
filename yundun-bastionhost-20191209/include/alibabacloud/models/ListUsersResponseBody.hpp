// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
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
  class ListUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListUsersResponseBody() = default ;
    ListUsersResponseBody(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody(ListUsersResponseBody &&) = default ;
    ListUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBody() = default ;
    ListUsersResponseBody& operator=(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody& operator=(ListUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
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
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
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
      inline Users& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Users& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // effectiveEndTime Field Functions 
      bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
      void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
      inline int64_t getEffectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, 0L) };
      inline Users& setEffectiveEndTime(int64_t effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


      // effectiveStartTime Field Functions 
      bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
      void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
      inline int64_t getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, 0L) };
      inline Users& setEffectiveStartTime(int64_t effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Users& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Users& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // languageStatus Field Functions 
      bool hasLanguageStatus() const { return this->languageStatus_ != nullptr;};
      void deleteLanguageStatus() { this->languageStatus_ = nullptr;};
      inline string getLanguageStatus() const { DARABONBA_PTR_GET_DEFAULT(languageStatus_, "") };
      inline Users& setLanguageStatus(string languageStatus) { DARABONBA_PTR_SET_VALUE(languageStatus_, languageStatus) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline Users& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // mobileCountryCode Field Functions 
      bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
      void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
      inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
      inline Users& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


      // needResetPassword Field Functions 
      bool hasNeedResetPassword() const { return this->needResetPassword_ != nullptr;};
      void deleteNeedResetPassword() { this->needResetPassword_ = nullptr;};
      inline bool getNeedResetPassword() const { DARABONBA_PTR_GET_DEFAULT(needResetPassword_, false) };
      inline Users& setNeedResetPassword(bool needResetPassword) { DARABONBA_PTR_SET_VALUE(needResetPassword_, needResetPassword) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Users& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceUserId Field Functions 
      bool hasSourceUserId() const { return this->sourceUserId_ != nullptr;};
      void deleteSourceUserId() { this->sourceUserId_ = nullptr;};
      inline string getSourceUserId() const { DARABONBA_PTR_GET_DEFAULT(sourceUserId_, "") };
      inline Users& setSourceUserId(string sourceUserId) { DARABONBA_PTR_SET_VALUE(sourceUserId_, sourceUserId) };


      // twoFactorMethods Field Functions 
      bool hasTwoFactorMethods() const { return this->twoFactorMethods_ != nullptr;};
      void deleteTwoFactorMethods() { this->twoFactorMethods_ = nullptr;};
      inline const vector<string> & getTwoFactorMethods() const { DARABONBA_PTR_GET_CONST(twoFactorMethods_, vector<string>) };
      inline vector<string> getTwoFactorMethods() { DARABONBA_PTR_GET(twoFactorMethods_, vector<string>) };
      inline Users& setTwoFactorMethods(const vector<string> & twoFactorMethods) { DARABONBA_PTR_SET_VALUE(twoFactorMethods_, twoFactorMethods) };
      inline Users& setTwoFactorMethods(vector<string> && twoFactorMethods) { DARABONBA_PTR_SET_RVALUE(twoFactorMethods_, twoFactorMethods) };


      // twoFactorStatus Field Functions 
      bool hasTwoFactorStatus() const { return this->twoFactorStatus_ != nullptr;};
      void deleteTwoFactorStatus() { this->twoFactorStatus_ = nullptr;};
      inline string getTwoFactorStatus() const { DARABONBA_PTR_GET_DEFAULT(twoFactorStatus_, "") };
      inline Users& setTwoFactorStatus(string twoFactorStatus) { DARABONBA_PTR_SET_VALUE(twoFactorStatus_, twoFactorStatus) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Users& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Users& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // userState Field Functions 
      bool hasUserState() const { return this->userState_ != nullptr;};
      void deleteUserState() { this->userState_ = nullptr;};
      inline const vector<string> & getUserState() const { DARABONBA_PTR_GET_CONST(userState_, vector<string>) };
      inline vector<string> getUserState() { DARABONBA_PTR_GET(userState_, vector<string>) };
      inline Users& setUserState(const vector<string> & userState) { DARABONBA_PTR_SET_VALUE(userState_, userState) };
      inline Users& setUserState(vector<string> && userState) { DARABONBA_PTR_SET_RVALUE(userState_, userState) };


    protected:
      // The remarks of the user.
      shared_ptr<string> comment_ {};
      // The display name of the user.
      shared_ptr<string> displayName_ {};
      // The end time of the validity period of the user. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> effectiveEndTime_ {};
      // The start time of the validity period of the user. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> effectiveStartTime_ {};
      // The email address of the user.
      shared_ptr<string> email_ {};
      // This parameter is required if LanguageStatus is set to Custom. Valid values:
      // 
      // *   **zh-cn**: simplified Chinese.
      // *   **en**: English.
      shared_ptr<string> language_ {};
      // Indicates whether notifications are sent in the language specified in the global settings or a custom language.
      // 
      // *   **Global**
      // *   **Custom**
      shared_ptr<string> languageStatus_ {};
      // The mobile phone number of the user.
      shared_ptr<string> mobile_ {};
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
      shared_ptr<string> mobileCountryCode_ {};
      // Indicates whether password reset is required upon the next logon. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> needResetPassword_ {};
      // The type of the user. Valid values:
      // 
      // *   **Local**: a local user.
      // *   **Ram**: a RAM user.
      // *   **AD**: an AD-authenticated user.
      // *   **LDAP**: an LDAP-authenticated user.
      shared_ptr<string> source_ {};
      // The unique ID of the user.
      // 
      // >  This parameter uniquely identifies a RAM user of the bastion host. A value is returned for this parameter if **Source** is set to **Ram**. No value is returned for this parameter if **Source** is set to **Local**.
      shared_ptr<string> sourceUserId_ {};
      // An array of the enabled two-factor authentication methods.
      shared_ptr<vector<string>> twoFactorMethods_ {};
      // Indicates whether two-factor authentication is enabled for the user. Valid values:
      // 
      // *   **Global**: The global setting applies.
      // *   **Disable**: Two-factor authentication is disabled.
      // *   **Enable**: Two-factor authentication is enabled. The user-specific setting for the authentication method applies.
      shared_ptr<string> twoFactorStatus_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The logon name of the user.
      shared_ptr<string> userName_ {};
      // An array that lists the states of users.
      shared_ptr<vector<string>> userState_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUsersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListUsersResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<ListUsersResponseBody::Users>) };
    inline vector<ListUsersResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<ListUsersResponseBody::Users>) };
    inline ListUsersResponseBody& setUsers(const vector<ListUsersResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersResponseBody& setUsers(vector<ListUsersResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of users returned.
    shared_ptr<int32_t> totalCount_ {};
    // The users returned.
    shared_ptr<vector<ListUsersResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
