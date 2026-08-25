// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetPasswordPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordPolicy, passwordPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordPolicy, passwordPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPasswordPolicyResponseBody() = default ;
    GetPasswordPolicyResponseBody(const GetPasswordPolicyResponseBody &) = default ;
    GetPasswordPolicyResponseBody(GetPasswordPolicyResponseBody &&) = default ;
    GetPasswordPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordPolicyResponseBody() = default ;
    GetPasswordPolicyResponseBody& operator=(const GetPasswordPolicyResponseBody &) = default ;
    GetPasswordPolicyResponseBody& operator=(GetPasswordPolicyResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(MinPasswordDifferentChars, minPasswordDifferentChars_);
        DARABONBA_PTR_TO_JSON(MinPasswordLength, minPasswordLength_);
        DARABONBA_PTR_TO_JSON(PasswordNotContainUsername, passwordNotContainUsername_);
        DARABONBA_PTR_TO_JSON(PasswordReusePrevention, passwordReusePrevention_);
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
        DARABONBA_PTR_FROM_JSON(MinPasswordDifferentChars, minPasswordDifferentChars_);
        DARABONBA_PTR_FROM_JSON(MinPasswordLength, minPasswordLength_);
        DARABONBA_PTR_FROM_JSON(PasswordNotContainUsername, passwordNotContainUsername_);
        DARABONBA_PTR_FROM_JSON(PasswordReusePrevention, passwordReusePrevention_);
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
        && this->maxLoginAttempts_ == nullptr && this->maxPasswordAge_ == nullptr && this->maxPasswordLength_ == nullptr && this->minPasswordDifferentChars_ == nullptr && this->minPasswordLength_ == nullptr
        && this->passwordNotContainUsername_ == nullptr && this->passwordReusePrevention_ == nullptr && this->requireLowerCaseChars_ == nullptr && this->requireNumbers_ == nullptr && this->requireSymbols_ == nullptr
        && this->requireUpperCaseChars_ == nullptr; };
      // hardExpire Field Functions 
      bool hasHardExpire() const { return this->hardExpire_ != nullptr;};
      void deleteHardExpire() { this->hardExpire_ = nullptr;};
      inline bool getHardExpire() const { DARABONBA_PTR_GET_DEFAULT(hardExpire_, false) };
      inline PasswordPolicy& setHardExpire(bool hardExpire) { DARABONBA_PTR_SET_VALUE(hardExpire_, hardExpire) };


      // maxLoginAttempts Field Functions 
      bool hasMaxLoginAttempts() const { return this->maxLoginAttempts_ != nullptr;};
      void deleteMaxLoginAttempts() { this->maxLoginAttempts_ = nullptr;};
      inline int32_t getMaxLoginAttempts() const { DARABONBA_PTR_GET_DEFAULT(maxLoginAttempts_, 0) };
      inline PasswordPolicy& setMaxLoginAttempts(int32_t maxLoginAttempts) { DARABONBA_PTR_SET_VALUE(maxLoginAttempts_, maxLoginAttempts) };


      // maxPasswordAge Field Functions 
      bool hasMaxPasswordAge() const { return this->maxPasswordAge_ != nullptr;};
      void deleteMaxPasswordAge() { this->maxPasswordAge_ = nullptr;};
      inline int32_t getMaxPasswordAge() const { DARABONBA_PTR_GET_DEFAULT(maxPasswordAge_, 0) };
      inline PasswordPolicy& setMaxPasswordAge(int32_t maxPasswordAge) { DARABONBA_PTR_SET_VALUE(maxPasswordAge_, maxPasswordAge) };


      // maxPasswordLength Field Functions 
      bool hasMaxPasswordLength() const { return this->maxPasswordLength_ != nullptr;};
      void deleteMaxPasswordLength() { this->maxPasswordLength_ = nullptr;};
      inline int32_t getMaxPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(maxPasswordLength_, 0) };
      inline PasswordPolicy& setMaxPasswordLength(int32_t maxPasswordLength) { DARABONBA_PTR_SET_VALUE(maxPasswordLength_, maxPasswordLength) };


      // minPasswordDifferentChars Field Functions 
      bool hasMinPasswordDifferentChars() const { return this->minPasswordDifferentChars_ != nullptr;};
      void deleteMinPasswordDifferentChars() { this->minPasswordDifferentChars_ = nullptr;};
      inline int32_t getMinPasswordDifferentChars() const { DARABONBA_PTR_GET_DEFAULT(minPasswordDifferentChars_, 0) };
      inline PasswordPolicy& setMinPasswordDifferentChars(int32_t minPasswordDifferentChars) { DARABONBA_PTR_SET_VALUE(minPasswordDifferentChars_, minPasswordDifferentChars) };


      // minPasswordLength Field Functions 
      bool hasMinPasswordLength() const { return this->minPasswordLength_ != nullptr;};
      void deleteMinPasswordLength() { this->minPasswordLength_ = nullptr;};
      inline int32_t getMinPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(minPasswordLength_, 0) };
      inline PasswordPolicy& setMinPasswordLength(int32_t minPasswordLength) { DARABONBA_PTR_SET_VALUE(minPasswordLength_, minPasswordLength) };


      // passwordNotContainUsername Field Functions 
      bool hasPasswordNotContainUsername() const { return this->passwordNotContainUsername_ != nullptr;};
      void deletePasswordNotContainUsername() { this->passwordNotContainUsername_ = nullptr;};
      inline bool getPasswordNotContainUsername() const { DARABONBA_PTR_GET_DEFAULT(passwordNotContainUsername_, false) };
      inline PasswordPolicy& setPasswordNotContainUsername(bool passwordNotContainUsername) { DARABONBA_PTR_SET_VALUE(passwordNotContainUsername_, passwordNotContainUsername) };


      // passwordReusePrevention Field Functions 
      bool hasPasswordReusePrevention() const { return this->passwordReusePrevention_ != nullptr;};
      void deletePasswordReusePrevention() { this->passwordReusePrevention_ = nullptr;};
      inline int32_t getPasswordReusePrevention() const { DARABONBA_PTR_GET_DEFAULT(passwordReusePrevention_, 0) };
      inline PasswordPolicy& setPasswordReusePrevention(int32_t passwordReusePrevention) { DARABONBA_PTR_SET_VALUE(passwordReusePrevention_, passwordReusePrevention) };


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
      // Indicates whether to disable logon after a password expires. Valid values:
      // 
      // *   true: disables logon after a password expires.
      // *   false: does not disable logon after a password expires.
      shared_ptr<bool> hardExpire_ {};
      // The number of password retries.
      // 
      // If wrong passwords are entered for the specified consecutive times, the account is locked for 1 hour.
      // 
      // Valid values: 0 to 32. The value 0 indicates that the number of password retries is not limited.
      shared_ptr<int32_t> maxLoginAttempts_ {};
      // The validity period of a password.
      // 
      // Valid values: 1 to 120. Unit: days.
      shared_ptr<int32_t> maxPasswordAge_ {};
      // The maximum password length.
      shared_ptr<int32_t> maxPasswordLength_ {};
      // The minimum number of different characters in a password.
      // 
      // The minimum value is 0, which indicates that the minimum number of different characters in a password is not limited. The maximum value is the value of the `MinPasswordLength` parameter.
      shared_ptr<int32_t> minPasswordDifferentChars_ {};
      // The minimum password length.
      // 
      // Valid values: 8 to 32 characters.
      shared_ptr<int32_t> minPasswordLength_ {};
      // Indicates whether to exclude the username from the password. Valid values:
      // 
      // *   true: A password cannot contain the username.
      // *   false: A password can contain the username.
      shared_ptr<bool> passwordNotContainUsername_ {};
      // The policy for password history check.
      // 
      // The previous N passwords cannot be reused. Valid values of N: 0 to 24. The value 0 indicates that all historical passwords can be reused.
      // 
      // >  Passwords that are generated before January 5, 2024 are not counted as historical passwords.
      shared_ptr<int32_t> passwordReusePrevention_ {};
      // Indicates whether lowercase letters are required in a password. Valid values:
      // 
      // *   true: Lowercase letters are required in a password.
      // *   false: Lowercase letters are not required in a password.
      shared_ptr<bool> requireLowerCaseChars_ {};
      // Indicates whether digits are required in a password. Valid values:
      // 
      // *   true: Digits are required in a password.
      // *   false: Digits are not required in a password.
      shared_ptr<bool> requireNumbers_ {};
      // Indicates whether special characters are required in a password. Valid values:
      // 
      // *   true: Special characters are required in a password.
      // *   false: Special characters are not required in a password.
      shared_ptr<bool> requireSymbols_ {};
      // Indicates whether uppercase letters are required in a password. Valid values:
      // 
      // *   true: Uppercase letters are required in a password.
      // *   false: Uppercase letters are not required in a password.
      shared_ptr<bool> requireUpperCaseChars_ {};
    };

    virtual bool empty() const override { return this->passwordPolicy_ == nullptr
        && this->requestId_ == nullptr; };
    // passwordPolicy Field Functions 
    bool hasPasswordPolicy() const { return this->passwordPolicy_ != nullptr;};
    void deletePasswordPolicy() { this->passwordPolicy_ = nullptr;};
    inline const GetPasswordPolicyResponseBody::PasswordPolicy & getPasswordPolicy() const { DARABONBA_PTR_GET_CONST(passwordPolicy_, GetPasswordPolicyResponseBody::PasswordPolicy) };
    inline GetPasswordPolicyResponseBody::PasswordPolicy getPasswordPolicy() { DARABONBA_PTR_GET(passwordPolicy_, GetPasswordPolicyResponseBody::PasswordPolicy) };
    inline GetPasswordPolicyResponseBody& setPasswordPolicy(const GetPasswordPolicyResponseBody::PasswordPolicy & passwordPolicy) { DARABONBA_PTR_SET_VALUE(passwordPolicy_, passwordPolicy) };
    inline GetPasswordPolicyResponseBody& setPasswordPolicy(GetPasswordPolicyResponseBody::PasswordPolicy && passwordPolicy) { DARABONBA_PTR_SET_RVALUE(passwordPolicy_, passwordPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPasswordPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The password policy.
    shared_ptr<GetPasswordPolicyResponseBody::PasswordPolicy> passwordPolicy_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
