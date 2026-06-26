// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINPREFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINPREFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetLoginPreferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginPreferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoginPreference, loginPreference_);
      DARABONBA_PTR_TO_JSON(PasswordPolicy, passwordPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginPreferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginPreference, loginPreference_);
      DARABONBA_PTR_FROM_JSON(PasswordPolicy, passwordPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLoginPreferenceResponseBody() = default ;
    GetLoginPreferenceResponseBody(const GetLoginPreferenceResponseBody &) = default ;
    GetLoginPreferenceResponseBody(GetLoginPreferenceResponseBody &&) = default ;
    GetLoginPreferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginPreferenceResponseBody() = default ;
    GetLoginPreferenceResponseBody& operator=(const GetLoginPreferenceResponseBody &) = default ;
    GetLoginPreferenceResponseBody& operator=(GetLoginPreferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PasswordPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PasswordPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(HardExpire, hardExpire_);
        DARABONBA_PTR_TO_JSON(MaxLoginAttempts, maxLoginAttempts_);
        DARABONBA_PTR_TO_JSON(MaxPasswordAge, maxPasswordAge_);
        DARABONBA_PTR_TO_JSON(MaxPasswordLength, maxPasswordLength_);
        DARABONBA_PTR_TO_JSON(MinPasswordLength, minPasswordLength_);
        DARABONBA_PTR_TO_JSON(PasswordNotContainUserName, passwordNotContainUserName_);
        DARABONBA_PTR_TO_JSON(RequireLowerCaseChars, requireLowerCaseChars_);
        DARABONBA_PTR_TO_JSON(RequireNumbers, requireNumbers_);
        DARABONBA_PTR_TO_JSON(RequireSymbols, requireSymbols_);
        DARABONBA_PTR_TO_JSON(RequireUpperCaseChars, requireUpperCaseChars_);
      };
      friend void from_json(const Darabonba::Json& j, PasswordPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(HardExpire, hardExpire_);
        DARABONBA_PTR_FROM_JSON(MaxLoginAttempts, maxLoginAttempts_);
        DARABONBA_PTR_FROM_JSON(MaxPasswordAge, maxPasswordAge_);
        DARABONBA_PTR_FROM_JSON(MaxPasswordLength, maxPasswordLength_);
        DARABONBA_PTR_FROM_JSON(MinPasswordLength, minPasswordLength_);
        DARABONBA_PTR_FROM_JSON(PasswordNotContainUserName, passwordNotContainUserName_);
        DARABONBA_PTR_FROM_JSON(RequireLowerCaseChars, requireLowerCaseChars_);
        DARABONBA_PTR_FROM_JSON(RequireNumbers, requireNumbers_);
        DARABONBA_PTR_FROM_JSON(RequireSymbols, requireSymbols_);
        DARABONBA_PTR_FROM_JSON(RequireUpperCaseChars, requireUpperCaseChars_);
      };
      PasswordPolicy() = default ;
      PasswordPolicy(const PasswordPolicy &) = default ;
      PasswordPolicy(PasswordPolicy &&) = default ;
      PasswordPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PasswordPolicy() = default ;
      PasswordPolicy& operator=(const PasswordPolicy &) = default ;
      PasswordPolicy& operator=(PasswordPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hardExpire_ == nullptr
        && this->maxLoginAttempts_ == nullptr && this->maxPasswordAge_ == nullptr && this->maxPasswordLength_ == nullptr && this->minPasswordLength_ == nullptr && this->passwordNotContainUserName_ == nullptr
        && this->requireLowerCaseChars_ == nullptr && this->requireNumbers_ == nullptr && this->requireSymbols_ == nullptr && this->requireUpperCaseChars_ == nullptr; };
      // hardExpire Field Functions 
      bool hasHardExpire() const { return this->hardExpire_ != nullptr;};
      void deleteHardExpire() { this->hardExpire_ = nullptr;};
      inline bool getHardExpire() const { DARABONBA_PTR_GET_DEFAULT(hardExpire_, false) };
      inline PasswordPolicy& setHardExpire(bool hardExpire) { DARABONBA_PTR_SET_VALUE(hardExpire_, hardExpire) };


      // maxLoginAttempts Field Functions 
      bool hasMaxLoginAttempts() const { return this->maxLoginAttempts_ != nullptr;};
      void deleteMaxLoginAttempts() { this->maxLoginAttempts_ = nullptr;};
      inline int64_t getMaxLoginAttempts() const { DARABONBA_PTR_GET_DEFAULT(maxLoginAttempts_, 0L) };
      inline PasswordPolicy& setMaxLoginAttempts(int64_t maxLoginAttempts) { DARABONBA_PTR_SET_VALUE(maxLoginAttempts_, maxLoginAttempts) };


      // maxPasswordAge Field Functions 
      bool hasMaxPasswordAge() const { return this->maxPasswordAge_ != nullptr;};
      void deleteMaxPasswordAge() { this->maxPasswordAge_ = nullptr;};
      inline int64_t getMaxPasswordAge() const { DARABONBA_PTR_GET_DEFAULT(maxPasswordAge_, 0L) };
      inline PasswordPolicy& setMaxPasswordAge(int64_t maxPasswordAge) { DARABONBA_PTR_SET_VALUE(maxPasswordAge_, maxPasswordAge) };


      // maxPasswordLength Field Functions 
      bool hasMaxPasswordLength() const { return this->maxPasswordLength_ != nullptr;};
      void deleteMaxPasswordLength() { this->maxPasswordLength_ = nullptr;};
      inline int32_t getMaxPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(maxPasswordLength_, 0) };
      inline PasswordPolicy& setMaxPasswordLength(int32_t maxPasswordLength) { DARABONBA_PTR_SET_VALUE(maxPasswordLength_, maxPasswordLength) };


      // minPasswordLength Field Functions 
      bool hasMinPasswordLength() const { return this->minPasswordLength_ != nullptr;};
      void deleteMinPasswordLength() { this->minPasswordLength_ = nullptr;};
      inline int32_t getMinPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(minPasswordLength_, 0) };
      inline PasswordPolicy& setMinPasswordLength(int32_t minPasswordLength) { DARABONBA_PTR_SET_VALUE(minPasswordLength_, minPasswordLength) };


      // passwordNotContainUserName Field Functions 
      bool hasPasswordNotContainUserName() const { return this->passwordNotContainUserName_ != nullptr;};
      void deletePasswordNotContainUserName() { this->passwordNotContainUserName_ = nullptr;};
      inline bool getPasswordNotContainUserName() const { DARABONBA_PTR_GET_DEFAULT(passwordNotContainUserName_, false) };
      inline PasswordPolicy& setPasswordNotContainUserName(bool passwordNotContainUserName) { DARABONBA_PTR_SET_VALUE(passwordNotContainUserName_, passwordNotContainUserName) };


      // requireLowerCaseChars Field Functions 
      bool hasRequireLowerCaseChars() const { return this->requireLowerCaseChars_ != nullptr;};
      void deleteRequireLowerCaseChars() { this->requireLowerCaseChars_ = nullptr;};
      inline bool getRequireLowerCaseChars() const { DARABONBA_PTR_GET_DEFAULT(requireLowerCaseChars_, false) };
      inline PasswordPolicy& setRequireLowerCaseChars(bool requireLowerCaseChars) { DARABONBA_PTR_SET_VALUE(requireLowerCaseChars_, requireLowerCaseChars) };


      // requireNumbers Field Functions 
      bool hasRequireNumbers() const { return this->requireNumbers_ != nullptr;};
      void deleteRequireNumbers() { this->requireNumbers_ = nullptr;};
      inline bool getRequireNumbers() const { DARABONBA_PTR_GET_DEFAULT(requireNumbers_, false) };
      inline PasswordPolicy& setRequireNumbers(bool requireNumbers) { DARABONBA_PTR_SET_VALUE(requireNumbers_, requireNumbers) };


      // requireSymbols Field Functions 
      bool hasRequireSymbols() const { return this->requireSymbols_ != nullptr;};
      void deleteRequireSymbols() { this->requireSymbols_ = nullptr;};
      inline bool getRequireSymbols() const { DARABONBA_PTR_GET_DEFAULT(requireSymbols_, false) };
      inline PasswordPolicy& setRequireSymbols(bool requireSymbols) { DARABONBA_PTR_SET_VALUE(requireSymbols_, requireSymbols) };


      // requireUpperCaseChars Field Functions 
      bool hasRequireUpperCaseChars() const { return this->requireUpperCaseChars_ != nullptr;};
      void deleteRequireUpperCaseChars() { this->requireUpperCaseChars_ = nullptr;};
      inline bool getRequireUpperCaseChars() const { DARABONBA_PTR_GET_DEFAULT(requireUpperCaseChars_, false) };
      inline PasswordPolicy& setRequireUpperCaseChars(bool requireUpperCaseChars) { DARABONBA_PTR_SET_VALUE(requireUpperCaseChars_, requireUpperCaseChars) };


    protected:
      shared_ptr<bool> hardExpire_ {};
      shared_ptr<int64_t> maxLoginAttempts_ {};
      shared_ptr<int64_t> maxPasswordAge_ {};
      shared_ptr<int32_t> maxPasswordLength_ {};
      shared_ptr<int32_t> minPasswordLength_ {};
      shared_ptr<bool> passwordNotContainUserName_ {};
      shared_ptr<bool> requireLowerCaseChars_ {};
      shared_ptr<bool> requireNumbers_ {};
      shared_ptr<bool> requireSymbols_ {};
      shared_ptr<bool> requireUpperCaseChars_ {};
    };

    class LoginPreference : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoginPreference& obj) { 
        DARABONBA_PTR_TO_JSON(EnablePasswordLogin, enablePasswordLogin_);
      };
      friend void from_json(const Darabonba::Json& j, LoginPreference& obj) { 
        DARABONBA_PTR_FROM_JSON(EnablePasswordLogin, enablePasswordLogin_);
      };
      LoginPreference() = default ;
      LoginPreference(const LoginPreference &) = default ;
      LoginPreference(LoginPreference &&) = default ;
      LoginPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoginPreference() = default ;
      LoginPreference& operator=(const LoginPreference &) = default ;
      LoginPreference& operator=(LoginPreference &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enablePasswordLogin_ == nullptr; };
      // enablePasswordLogin Field Functions 
      bool hasEnablePasswordLogin() const { return this->enablePasswordLogin_ != nullptr;};
      void deleteEnablePasswordLogin() { this->enablePasswordLogin_ = nullptr;};
      inline bool getEnablePasswordLogin() const { DARABONBA_PTR_GET_DEFAULT(enablePasswordLogin_, false) };
      inline LoginPreference& setEnablePasswordLogin(bool enablePasswordLogin) { DARABONBA_PTR_SET_VALUE(enablePasswordLogin_, enablePasswordLogin) };


    protected:
      shared_ptr<bool> enablePasswordLogin_ {};
    };

    virtual bool empty() const override { return this->loginPreference_ == nullptr
        && this->passwordPolicy_ == nullptr && this->requestId_ == nullptr; };
    // loginPreference Field Functions 
    bool hasLoginPreference() const { return this->loginPreference_ != nullptr;};
    void deleteLoginPreference() { this->loginPreference_ = nullptr;};
    inline const GetLoginPreferenceResponseBody::LoginPreference & getLoginPreference() const { DARABONBA_PTR_GET_CONST(loginPreference_, GetLoginPreferenceResponseBody::LoginPreference) };
    inline GetLoginPreferenceResponseBody::LoginPreference getLoginPreference() { DARABONBA_PTR_GET(loginPreference_, GetLoginPreferenceResponseBody::LoginPreference) };
    inline GetLoginPreferenceResponseBody& setLoginPreference(const GetLoginPreferenceResponseBody::LoginPreference & loginPreference) { DARABONBA_PTR_SET_VALUE(loginPreference_, loginPreference) };
    inline GetLoginPreferenceResponseBody& setLoginPreference(GetLoginPreferenceResponseBody::LoginPreference && loginPreference) { DARABONBA_PTR_SET_RVALUE(loginPreference_, loginPreference) };


    // passwordPolicy Field Functions 
    bool hasPasswordPolicy() const { return this->passwordPolicy_ != nullptr;};
    void deletePasswordPolicy() { this->passwordPolicy_ = nullptr;};
    inline const GetLoginPreferenceResponseBody::PasswordPolicy & getPasswordPolicy() const { DARABONBA_PTR_GET_CONST(passwordPolicy_, GetLoginPreferenceResponseBody::PasswordPolicy) };
    inline GetLoginPreferenceResponseBody::PasswordPolicy getPasswordPolicy() { DARABONBA_PTR_GET(passwordPolicy_, GetLoginPreferenceResponseBody::PasswordPolicy) };
    inline GetLoginPreferenceResponseBody& setPasswordPolicy(const GetLoginPreferenceResponseBody::PasswordPolicy & passwordPolicy) { DARABONBA_PTR_SET_VALUE(passwordPolicy_, passwordPolicy) };
    inline GetLoginPreferenceResponseBody& setPasswordPolicy(GetLoginPreferenceResponseBody::PasswordPolicy && passwordPolicy) { DARABONBA_PTR_SET_RVALUE(passwordPolicy_, passwordPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLoginPreferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetLoginPreferenceResponseBody::LoginPreference> loginPreference_ {};
    shared_ptr<GetLoginPreferenceResponseBody::PasswordPolicy> passwordPolicy_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
