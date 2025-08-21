// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDPOLICYRESPONSEBODYPASSWORDPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDPOLICYRESPONSEBODYPASSWORDPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetPasswordPolicyResponseBodyPasswordPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordPolicyResponseBodyPasswordPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(HardExpire, hardExpire_);
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
    friend void from_json(const Darabonba::Json& j, GetPasswordPolicyResponseBodyPasswordPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(HardExpire, hardExpire_);
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
    GetPasswordPolicyResponseBodyPasswordPolicy() = default ;
    GetPasswordPolicyResponseBodyPasswordPolicy(const GetPasswordPolicyResponseBodyPasswordPolicy &) = default ;
    GetPasswordPolicyResponseBodyPasswordPolicy(GetPasswordPolicyResponseBodyPasswordPolicy &&) = default ;
    GetPasswordPolicyResponseBodyPasswordPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordPolicyResponseBodyPasswordPolicy() = default ;
    GetPasswordPolicyResponseBodyPasswordPolicy& operator=(const GetPasswordPolicyResponseBodyPasswordPolicy &) = default ;
    GetPasswordPolicyResponseBodyPasswordPolicy& operator=(GetPasswordPolicyResponseBodyPasswordPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hardExpire_ != nullptr
        && this->maxLoginAttemps_ != nullptr && this->maxPasswordAge_ != nullptr && this->minimumPasswordDifferentCharacter_ != nullptr && this->minimumPasswordLength_ != nullptr && this->passwordNotContainUserName_ != nullptr
        && this->passwordReusePrevention_ != nullptr && this->requireLowercaseCharacters_ != nullptr && this->requireNumbers_ != nullptr && this->requireSymbols_ != nullptr && this->requireUppercaseCharacters_ != nullptr; };
    // hardExpire Field Functions 
    bool hasHardExpire() const { return this->hardExpire_ != nullptr;};
    void deleteHardExpire() { this->hardExpire_ = nullptr;};
    inline bool hardExpire() const { DARABONBA_PTR_GET_DEFAULT(hardExpire_, false) };
    inline GetPasswordPolicyResponseBodyPasswordPolicy& setHardExpire(bool hardExpire) { DARABONBA_PTR_SET_VALUE(hardExpire_, hardExpire) };


    // maxLoginAttemps Field Functions 
    bool hasMaxLoginAttemps() const { return this->maxLoginAttemps_ != nullptr;};
    void deleteMaxLoginAttemps() { this->maxLoginAttemps_ = nullptr;};
    inline int32_t maxLoginAttemps() const { DARABONBA_PTR_GET_DEFAULT(maxLoginAttemps_, 0) };
    inline GetPasswordPolicyResponseBodyPasswordPolicy& setMaxLoginAttemps(int32_t maxLoginAttemps) { DARABONBA_PTR_SET_VALUE(maxLoginAttemps_, maxLoginAttemps) };


    // maxPasswordAge Field Functions 
    bool hasMaxPasswordAge() const { return this->maxPasswordAge_ != nullptr;};
    void deleteMaxPasswordAge() { this->maxPasswordAge_ = nullptr;};
    inline int32_t maxPasswordAge() const { DARABONBA_PTR_GET_DEFAULT(maxPasswordAge_, 0) };
    inline GetPasswordPolicyResponseBodyPasswordPolicy& setMaxPasswordAge(int32_t maxPasswordAge) { DARABONBA_PTR_SET_VALUE(maxPasswordAge_, maxPasswordAge) };


    // minimumPasswordDifferentCharacter Field Functions 
    bool hasMinimumPasswordDifferentCharacter() const { return this->minimumPasswordDifferentCharacter_ != nullptr;};
    void deleteMinimumPasswordDifferentCharacter() { this->minimumPasswordDifferentCharacter_ = nullptr;};
    inline int32_t minimumPasswordDifferentCharacter() const { DARABONBA_PTR_GET_DEFAULT(minimumPasswordDifferentCharacter_, 0) };
    inline GetPasswordPolicyResponseBodyPasswordPolicy& setMinimumPasswordDifferentCharacter(int32_t minimumPasswordDifferentCharacter) { DARABONBA_PTR_SET_VALUE(minimumPasswordDifferentCharacter_, minimumPasswordDifferentCharacter) };


    // minimumPasswordLength Field Functions 
    bool hasMinimumPasswordLength() const { return this->minimumPasswordLength_ != nullptr;};
    void deleteMinimumPasswordLength() { this->minimumPasswordLength_ = nullptr;};
    inline int32_t minimumPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(minimumPasswordLength_, 0) };
    inline GetPasswordPolicyResponseBodyPasswordPolicy& setMinimumPasswordLength(int32_t minimumPasswordLength) { DARABONBA_PTR_SET_VALUE(minimumPasswordLength_, minimumPasswordLength) };


    // passwordNotContainUserName Field Functions 
    bool hasPasswordNotContainUserName() const { return this->passwordNotContainUserName_ != nullptr;};
    void deletePasswordNotContainUserName() { this->passwordNotContainUserName_ = nullptr;};
    inline bool passwordNotContainUserName() const { DARABONBA_PTR_GET_DEFAULT(passwordNotContainUserName_, false) };
    inline GetPasswordPolicyResponseBodyPasswordPolicy& setPasswordNotContainUserName(bool passwordNotContainUserName) { DARABONBA_PTR_SET_VALUE(passwordNotContainUserName_, passwordNotContainUserName) };


    // passwordReusePrevention Field Functions 
    bool hasPasswordReusePrevention() const { return this->passwordReusePrevention_ != nullptr;};
    void deletePasswordReusePrevention() { this->passwordReusePrevention_ = nullptr;};
    inline int32_t passwordReusePrevention() const { DARABONBA_PTR_GET_DEFAULT(passwordReusePrevention_, 0) };
    inline GetPasswordPolicyResponseBodyPasswordPolicy& setPasswordReusePrevention(int32_t passwordReusePrevention) { DARABONBA_PTR_SET_VALUE(passwordReusePrevention_, passwordReusePrevention) };


    // requireLowercaseCharacters Field Functions 
    bool hasRequireLowercaseCharacters() const { return this->requireLowercaseCharacters_ != nullptr;};
    void deleteRequireLowercaseCharacters() { this->requireLowercaseCharacters_ = nullptr;};
    inline bool requireLowercaseCharacters() const { DARABONBA_PTR_GET_DEFAULT(requireLowercaseCharacters_, false) };
    inline GetPasswordPolicyResponseBodyPasswordPolicy& setRequireLowercaseCharacters(bool requireLowercaseCharacters) { DARABONBA_PTR_SET_VALUE(requireLowercaseCharacters_, requireLowercaseCharacters) };


    // requireNumbers Field Functions 
    bool hasRequireNumbers() const { return this->requireNumbers_ != nullptr;};
    void deleteRequireNumbers() { this->requireNumbers_ = nullptr;};
    inline bool requireNumbers() const { DARABONBA_PTR_GET_DEFAULT(requireNumbers_, false) };
    inline GetPasswordPolicyResponseBodyPasswordPolicy& setRequireNumbers(bool requireNumbers) { DARABONBA_PTR_SET_VALUE(requireNumbers_, requireNumbers) };


    // requireSymbols Field Functions 
    bool hasRequireSymbols() const { return this->requireSymbols_ != nullptr;};
    void deleteRequireSymbols() { this->requireSymbols_ = nullptr;};
    inline bool requireSymbols() const { DARABONBA_PTR_GET_DEFAULT(requireSymbols_, false) };
    inline GetPasswordPolicyResponseBodyPasswordPolicy& setRequireSymbols(bool requireSymbols) { DARABONBA_PTR_SET_VALUE(requireSymbols_, requireSymbols) };


    // requireUppercaseCharacters Field Functions 
    bool hasRequireUppercaseCharacters() const { return this->requireUppercaseCharacters_ != nullptr;};
    void deleteRequireUppercaseCharacters() { this->requireUppercaseCharacters_ = nullptr;};
    inline bool requireUppercaseCharacters() const { DARABONBA_PTR_GET_DEFAULT(requireUppercaseCharacters_, false) };
    inline GetPasswordPolicyResponseBodyPasswordPolicy& setRequireUppercaseCharacters(bool requireUppercaseCharacters) { DARABONBA_PTR_SET_VALUE(requireUppercaseCharacters_, requireUppercaseCharacters) };


  protected:
    // Indicates whether to disable logon after the password expires.
    std::shared_ptr<bool> hardExpire_ = nullptr;
    // The maximum number of password retries.
    std::shared_ptr<int32_t> maxLoginAttemps_ = nullptr;
    // The validity period of the password.
    std::shared_ptr<int32_t> maxPasswordAge_ = nullptr;
    // The minimum number of unique characters in the password.
    std::shared_ptr<int32_t> minimumPasswordDifferentCharacter_ = nullptr;
    // The minimum required number of characters in a password.
    std::shared_ptr<int32_t> minimumPasswordLength_ = nullptr;
    // Indicates whether to exclude the username from the password.
    std::shared_ptr<bool> passwordNotContainUserName_ = nullptr;
    // The policy for password history check.
    std::shared_ptr<int32_t> passwordReusePrevention_ = nullptr;
    // Indicates whether the password must contain lowercase letters.
    std::shared_ptr<bool> requireLowercaseCharacters_ = nullptr;
    // Indicates whether the password must contain digits.
    std::shared_ptr<bool> requireNumbers_ = nullptr;
    // Indicates whether the password must contain special characters.
    std::shared_ptr<bool> requireSymbols_ = nullptr;
    // Indicates whether the password must contain uppercase letters.
    std::shared_ptr<bool> requireUppercaseCharacters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
