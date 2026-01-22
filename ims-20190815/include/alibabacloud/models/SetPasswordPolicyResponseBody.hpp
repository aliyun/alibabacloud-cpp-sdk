// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPASSWORDPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETPASSWORDPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetPasswordPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPasswordPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordPolicy, passwordPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPasswordPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordPolicy, passwordPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetPasswordPolicyResponseBody() = default ;
    SetPasswordPolicyResponseBody(const SetPasswordPolicyResponseBody &) = default ;
    SetPasswordPolicyResponseBody(SetPasswordPolicyResponseBody &&) = default ;
    SetPasswordPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPasswordPolicyResponseBody() = default ;
    SetPasswordPolicyResponseBody& operator=(const SetPasswordPolicyResponseBody &) = default ;
    SetPasswordPolicyResponseBody& operator=(SetPasswordPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PasswordPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PasswordPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(HardExpire, hardExpire_);
        DARABONBA_PTR_TO_JSON(InitialPasswordAge, initialPasswordAge_);
        DARABONBA_PTR_TO_JSON(MaxLoginAttemps, maxLoginAttemps_);
        DARABONBA_PTR_TO_JSON(MaxPasswordAge, maxPasswordAge_);
        DARABONBA_PTR_TO_JSON(MinimumPasswordDifferentCharacter, minimumPasswordDifferentCharacter_);
        DARABONBA_PTR_TO_JSON(MinimumPasswordLength, minimumPasswordLength_);
        DARABONBA_PTR_TO_JSON(PasswordNotContainUserName, passwordNotContainUserName_);
        DARABONBA_PTR_TO_JSON(PasswordReusePrevention, passwordReusePrevention_);
        DARABONBA_PTR_TO_JSON(RequireLowercaseCharacters, requireLowercaseCharacters_);
        DARABONBA_PTR_TO_JSON(RequireNumbers, requireNumbers_);
        DARABONBA_PTR_TO_JSON(RequireSymbols, requireSymbols_);
        DARABONBA_PTR_TO_JSON(RequireUppercaseCharacters, requireUppercaseCharacters_);
      };
      friend void from_json(const Darabonba::Json& j, PasswordPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(HardExpire, hardExpire_);
        DARABONBA_PTR_FROM_JSON(InitialPasswordAge, initialPasswordAge_);
        DARABONBA_PTR_FROM_JSON(MaxLoginAttemps, maxLoginAttemps_);
        DARABONBA_PTR_FROM_JSON(MaxPasswordAge, maxPasswordAge_);
        DARABONBA_PTR_FROM_JSON(MinimumPasswordDifferentCharacter, minimumPasswordDifferentCharacter_);
        DARABONBA_PTR_FROM_JSON(MinimumPasswordLength, minimumPasswordLength_);
        DARABONBA_PTR_FROM_JSON(PasswordNotContainUserName, passwordNotContainUserName_);
        DARABONBA_PTR_FROM_JSON(PasswordReusePrevention, passwordReusePrevention_);
        DARABONBA_PTR_FROM_JSON(RequireLowercaseCharacters, requireLowercaseCharacters_);
        DARABONBA_PTR_FROM_JSON(RequireNumbers, requireNumbers_);
        DARABONBA_PTR_FROM_JSON(RequireSymbols, requireSymbols_);
        DARABONBA_PTR_FROM_JSON(RequireUppercaseCharacters, requireUppercaseCharacters_);
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
        && this->initialPasswordAge_ == nullptr && this->maxLoginAttemps_ == nullptr && this->maxPasswordAge_ == nullptr && this->minimumPasswordDifferentCharacter_ == nullptr && this->minimumPasswordLength_ == nullptr
        && this->passwordNotContainUserName_ == nullptr && this->passwordReusePrevention_ == nullptr && this->requireLowercaseCharacters_ == nullptr && this->requireNumbers_ == nullptr && this->requireSymbols_ == nullptr
        && this->requireUppercaseCharacters_ == nullptr; };
      // hardExpire Field Functions 
      bool hasHardExpire() const { return this->hardExpire_ != nullptr;};
      void deleteHardExpire() { this->hardExpire_ = nullptr;};
      inline bool getHardExpire() const { DARABONBA_PTR_GET_DEFAULT(hardExpire_, false) };
      inline PasswordPolicy& setHardExpire(bool hardExpire) { DARABONBA_PTR_SET_VALUE(hardExpire_, hardExpire) };


      // initialPasswordAge Field Functions 
      bool hasInitialPasswordAge() const { return this->initialPasswordAge_ != nullptr;};
      void deleteInitialPasswordAge() { this->initialPasswordAge_ = nullptr;};
      inline int32_t getInitialPasswordAge() const { DARABONBA_PTR_GET_DEFAULT(initialPasswordAge_, 0) };
      inline PasswordPolicy& setInitialPasswordAge(int32_t initialPasswordAge) { DARABONBA_PTR_SET_VALUE(initialPasswordAge_, initialPasswordAge) };


      // maxLoginAttemps Field Functions 
      bool hasMaxLoginAttemps() const { return this->maxLoginAttemps_ != nullptr;};
      void deleteMaxLoginAttemps() { this->maxLoginAttemps_ = nullptr;};
      inline int32_t getMaxLoginAttemps() const { DARABONBA_PTR_GET_DEFAULT(maxLoginAttemps_, 0) };
      inline PasswordPolicy& setMaxLoginAttemps(int32_t maxLoginAttemps) { DARABONBA_PTR_SET_VALUE(maxLoginAttemps_, maxLoginAttemps) };


      // maxPasswordAge Field Functions 
      bool hasMaxPasswordAge() const { return this->maxPasswordAge_ != nullptr;};
      void deleteMaxPasswordAge() { this->maxPasswordAge_ = nullptr;};
      inline int32_t getMaxPasswordAge() const { DARABONBA_PTR_GET_DEFAULT(maxPasswordAge_, 0) };
      inline PasswordPolicy& setMaxPasswordAge(int32_t maxPasswordAge) { DARABONBA_PTR_SET_VALUE(maxPasswordAge_, maxPasswordAge) };


      // minimumPasswordDifferentCharacter Field Functions 
      bool hasMinimumPasswordDifferentCharacter() const { return this->minimumPasswordDifferentCharacter_ != nullptr;};
      void deleteMinimumPasswordDifferentCharacter() { this->minimumPasswordDifferentCharacter_ = nullptr;};
      inline int32_t getMinimumPasswordDifferentCharacter() const { DARABONBA_PTR_GET_DEFAULT(minimumPasswordDifferentCharacter_, 0) };
      inline PasswordPolicy& setMinimumPasswordDifferentCharacter(int32_t minimumPasswordDifferentCharacter) { DARABONBA_PTR_SET_VALUE(minimumPasswordDifferentCharacter_, minimumPasswordDifferentCharacter) };


      // minimumPasswordLength Field Functions 
      bool hasMinimumPasswordLength() const { return this->minimumPasswordLength_ != nullptr;};
      void deleteMinimumPasswordLength() { this->minimumPasswordLength_ = nullptr;};
      inline int32_t getMinimumPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(minimumPasswordLength_, 0) };
      inline PasswordPolicy& setMinimumPasswordLength(int32_t minimumPasswordLength) { DARABONBA_PTR_SET_VALUE(minimumPasswordLength_, minimumPasswordLength) };


      // passwordNotContainUserName Field Functions 
      bool hasPasswordNotContainUserName() const { return this->passwordNotContainUserName_ != nullptr;};
      void deletePasswordNotContainUserName() { this->passwordNotContainUserName_ = nullptr;};
      inline bool getPasswordNotContainUserName() const { DARABONBA_PTR_GET_DEFAULT(passwordNotContainUserName_, false) };
      inline PasswordPolicy& setPasswordNotContainUserName(bool passwordNotContainUserName) { DARABONBA_PTR_SET_VALUE(passwordNotContainUserName_, passwordNotContainUserName) };


      // passwordReusePrevention Field Functions 
      bool hasPasswordReusePrevention() const { return this->passwordReusePrevention_ != nullptr;};
      void deletePasswordReusePrevention() { this->passwordReusePrevention_ = nullptr;};
      inline int32_t getPasswordReusePrevention() const { DARABONBA_PTR_GET_DEFAULT(passwordReusePrevention_, 0) };
      inline PasswordPolicy& setPasswordReusePrevention(int32_t passwordReusePrevention) { DARABONBA_PTR_SET_VALUE(passwordReusePrevention_, passwordReusePrevention) };


      // requireLowercaseCharacters Field Functions 
      bool hasRequireLowercaseCharacters() const { return this->requireLowercaseCharacters_ != nullptr;};
      void deleteRequireLowercaseCharacters() { this->requireLowercaseCharacters_ = nullptr;};
      inline bool getRequireLowercaseCharacters() const { DARABONBA_PTR_GET_DEFAULT(requireLowercaseCharacters_, false) };
      inline PasswordPolicy& setRequireLowercaseCharacters(bool requireLowercaseCharacters) { DARABONBA_PTR_SET_VALUE(requireLowercaseCharacters_, requireLowercaseCharacters) };


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


      // requireUppercaseCharacters Field Functions 
      bool hasRequireUppercaseCharacters() const { return this->requireUppercaseCharacters_ != nullptr;};
      void deleteRequireUppercaseCharacters() { this->requireUppercaseCharacters_ = nullptr;};
      inline bool getRequireUppercaseCharacters() const { DARABONBA_PTR_GET_DEFAULT(requireUppercaseCharacters_, false) };
      inline PasswordPolicy& setRequireUppercaseCharacters(bool requireUppercaseCharacters) { DARABONBA_PTR_SET_VALUE(requireUppercaseCharacters_, requireUppercaseCharacters) };


    protected:
      // Indicates whether to disable logon after the password expires.
      shared_ptr<bool> hardExpire_ {};
      shared_ptr<int32_t> initialPasswordAge_ {};
      // The maximum number of password retries.
      shared_ptr<int32_t> maxLoginAttemps_ {};
      // The validity period of the password.
      shared_ptr<int32_t> maxPasswordAge_ {};
      // The minimum number of unique characters in the password.
      shared_ptr<int32_t> minimumPasswordDifferentCharacter_ {};
      // The minimum number of characters in the password.
      shared_ptr<int32_t> minimumPasswordLength_ {};
      // Indicates whether to exclude the username from the password.
      shared_ptr<bool> passwordNotContainUserName_ {};
      // The policy for password history check.
      shared_ptr<int32_t> passwordReusePrevention_ {};
      // Indicates whether the password must contain lowercase letters.
      shared_ptr<bool> requireLowercaseCharacters_ {};
      // Indicates whether the password must contain digits.
      shared_ptr<bool> requireNumbers_ {};
      // Indicates whether the password must contain special characters.
      shared_ptr<bool> requireSymbols_ {};
      // Indicates whether the password must contain uppercase letters.
      shared_ptr<bool> requireUppercaseCharacters_ {};
    };

    virtual bool empty() const override { return this->passwordPolicy_ == nullptr
        && this->requestId_ == nullptr; };
    // passwordPolicy Field Functions 
    bool hasPasswordPolicy() const { return this->passwordPolicy_ != nullptr;};
    void deletePasswordPolicy() { this->passwordPolicy_ = nullptr;};
    inline const SetPasswordPolicyResponseBody::PasswordPolicy & getPasswordPolicy() const { DARABONBA_PTR_GET_CONST(passwordPolicy_, SetPasswordPolicyResponseBody::PasswordPolicy) };
    inline SetPasswordPolicyResponseBody::PasswordPolicy getPasswordPolicy() { DARABONBA_PTR_GET(passwordPolicy_, SetPasswordPolicyResponseBody::PasswordPolicy) };
    inline SetPasswordPolicyResponseBody& setPasswordPolicy(const SetPasswordPolicyResponseBody::PasswordPolicy & passwordPolicy) { DARABONBA_PTR_SET_VALUE(passwordPolicy_, passwordPolicy) };
    inline SetPasswordPolicyResponseBody& setPasswordPolicy(SetPasswordPolicyResponseBody::PasswordPolicy && passwordPolicy) { DARABONBA_PTR_SET_RVALUE(passwordPolicy_, passwordPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetPasswordPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the password policy.
    shared_ptr<SetPasswordPolicyResponseBody::PasswordPolicy> passwordPolicy_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
