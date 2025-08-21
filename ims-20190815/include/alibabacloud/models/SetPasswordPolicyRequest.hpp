// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPASSWORDPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPASSWORDPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetPasswordPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPasswordPolicyRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SetPasswordPolicyRequest& obj) { 
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
    SetPasswordPolicyRequest() = default ;
    SetPasswordPolicyRequest(const SetPasswordPolicyRequest &) = default ;
    SetPasswordPolicyRequest(SetPasswordPolicyRequest &&) = default ;
    SetPasswordPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPasswordPolicyRequest() = default ;
    SetPasswordPolicyRequest& operator=(const SetPasswordPolicyRequest &) = default ;
    SetPasswordPolicyRequest& operator=(SetPasswordPolicyRequest &&) = default ;
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
    inline SetPasswordPolicyRequest& setHardExpire(bool hardExpire) { DARABONBA_PTR_SET_VALUE(hardExpire_, hardExpire) };


    // maxLoginAttemps Field Functions 
    bool hasMaxLoginAttemps() const { return this->maxLoginAttemps_ != nullptr;};
    void deleteMaxLoginAttemps() { this->maxLoginAttemps_ = nullptr;};
    inline int32_t maxLoginAttemps() const { DARABONBA_PTR_GET_DEFAULT(maxLoginAttemps_, 0) };
    inline SetPasswordPolicyRequest& setMaxLoginAttemps(int32_t maxLoginAttemps) { DARABONBA_PTR_SET_VALUE(maxLoginAttemps_, maxLoginAttemps) };


    // maxPasswordAge Field Functions 
    bool hasMaxPasswordAge() const { return this->maxPasswordAge_ != nullptr;};
    void deleteMaxPasswordAge() { this->maxPasswordAge_ = nullptr;};
    inline int32_t maxPasswordAge() const { DARABONBA_PTR_GET_DEFAULT(maxPasswordAge_, 0) };
    inline SetPasswordPolicyRequest& setMaxPasswordAge(int32_t maxPasswordAge) { DARABONBA_PTR_SET_VALUE(maxPasswordAge_, maxPasswordAge) };


    // minimumPasswordDifferentCharacter Field Functions 
    bool hasMinimumPasswordDifferentCharacter() const { return this->minimumPasswordDifferentCharacter_ != nullptr;};
    void deleteMinimumPasswordDifferentCharacter() { this->minimumPasswordDifferentCharacter_ = nullptr;};
    inline int32_t minimumPasswordDifferentCharacter() const { DARABONBA_PTR_GET_DEFAULT(minimumPasswordDifferentCharacter_, 0) };
    inline SetPasswordPolicyRequest& setMinimumPasswordDifferentCharacter(int32_t minimumPasswordDifferentCharacter) { DARABONBA_PTR_SET_VALUE(minimumPasswordDifferentCharacter_, minimumPasswordDifferentCharacter) };


    // minimumPasswordLength Field Functions 
    bool hasMinimumPasswordLength() const { return this->minimumPasswordLength_ != nullptr;};
    void deleteMinimumPasswordLength() { this->minimumPasswordLength_ = nullptr;};
    inline int32_t minimumPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(minimumPasswordLength_, 0) };
    inline SetPasswordPolicyRequest& setMinimumPasswordLength(int32_t minimumPasswordLength) { DARABONBA_PTR_SET_VALUE(minimumPasswordLength_, minimumPasswordLength) };


    // passwordNotContainUserName Field Functions 
    bool hasPasswordNotContainUserName() const { return this->passwordNotContainUserName_ != nullptr;};
    void deletePasswordNotContainUserName() { this->passwordNotContainUserName_ = nullptr;};
    inline bool passwordNotContainUserName() const { DARABONBA_PTR_GET_DEFAULT(passwordNotContainUserName_, false) };
    inline SetPasswordPolicyRequest& setPasswordNotContainUserName(bool passwordNotContainUserName) { DARABONBA_PTR_SET_VALUE(passwordNotContainUserName_, passwordNotContainUserName) };


    // passwordReusePrevention Field Functions 
    bool hasPasswordReusePrevention() const { return this->passwordReusePrevention_ != nullptr;};
    void deletePasswordReusePrevention() { this->passwordReusePrevention_ = nullptr;};
    inline int32_t passwordReusePrevention() const { DARABONBA_PTR_GET_DEFAULT(passwordReusePrevention_, 0) };
    inline SetPasswordPolicyRequest& setPasswordReusePrevention(int32_t passwordReusePrevention) { DARABONBA_PTR_SET_VALUE(passwordReusePrevention_, passwordReusePrevention) };


    // requireLowercaseCharacters Field Functions 
    bool hasRequireLowercaseCharacters() const { return this->requireLowercaseCharacters_ != nullptr;};
    void deleteRequireLowercaseCharacters() { this->requireLowercaseCharacters_ = nullptr;};
    inline bool requireLowercaseCharacters() const { DARABONBA_PTR_GET_DEFAULT(requireLowercaseCharacters_, false) };
    inline SetPasswordPolicyRequest& setRequireLowercaseCharacters(bool requireLowercaseCharacters) { DARABONBA_PTR_SET_VALUE(requireLowercaseCharacters_, requireLowercaseCharacters) };


    // requireNumbers Field Functions 
    bool hasRequireNumbers() const { return this->requireNumbers_ != nullptr;};
    void deleteRequireNumbers() { this->requireNumbers_ = nullptr;};
    inline bool requireNumbers() const { DARABONBA_PTR_GET_DEFAULT(requireNumbers_, false) };
    inline SetPasswordPolicyRequest& setRequireNumbers(bool requireNumbers) { DARABONBA_PTR_SET_VALUE(requireNumbers_, requireNumbers) };


    // requireSymbols Field Functions 
    bool hasRequireSymbols() const { return this->requireSymbols_ != nullptr;};
    void deleteRequireSymbols() { this->requireSymbols_ = nullptr;};
    inline bool requireSymbols() const { DARABONBA_PTR_GET_DEFAULT(requireSymbols_, false) };
    inline SetPasswordPolicyRequest& setRequireSymbols(bool requireSymbols) { DARABONBA_PTR_SET_VALUE(requireSymbols_, requireSymbols) };


    // requireUppercaseCharacters Field Functions 
    bool hasRequireUppercaseCharacters() const { return this->requireUppercaseCharacters_ != nullptr;};
    void deleteRequireUppercaseCharacters() { this->requireUppercaseCharacters_ = nullptr;};
    inline bool requireUppercaseCharacters() const { DARABONBA_PTR_GET_DEFAULT(requireUppercaseCharacters_, false) };
    inline SetPasswordPolicyRequest& setRequireUppercaseCharacters(bool requireUppercaseCharacters) { DARABONBA_PTR_SET_VALUE(requireUppercaseCharacters_, requireUppercaseCharacters) };


  protected:
    // Specifies whether to disable logon after the password expires. Valid values:
    // 
    // *   true: After the password expires, you cannot use the password to log on to the console. You can log on to the console only after you reset the password by using your Alibaba Cloud account or as a RAM user that has administrative rights.
    // *   false: After the password expires, you can change the password to log on to the console. This is the default value.
    std::shared_ptr<bool> hardExpire_ = nullptr;
    // The maximum number of password retries. If you enter the wrong passwords for the specified consecutive times, the account is locked for one hour.
    // 
    // Valid values: 0 to 32.
    // 
    // The default value is 0, which indicates that the password retries are not limited.
    std::shared_ptr<int32_t> maxLoginAttemps_ = nullptr;
    // The validity period of the password.
    // 
    // Valid values: 0 to 1095. Unit: days.
    // 
    // The default value is 0, which indicates that the password never expires.
    std::shared_ptr<int32_t> maxPasswordAge_ = nullptr;
    // The minimum number of unique characters in the password.
    // 
    // Valid values: 0 to 8.
    // 
    // The default value is 0, which indicates that no limits are imposed on the number of unique characters in a password.
    std::shared_ptr<int32_t> minimumPasswordDifferentCharacter_ = nullptr;
    // The minimum number of characters in the password.
    // 
    // Valid values: 8 to 32. Default value: 8.
    std::shared_ptr<int32_t> minimumPasswordLength_ = nullptr;
    // Specifies whether to exclude the username from the password. Valid values:
    // 
    // *   true: A password cannot contain the username.
    // *   false: A password can contain the username. This is the default value.
    std::shared_ptr<bool> passwordNotContainUserName_ = nullptr;
    // The policy for password history check.
    // 
    // The previous N passwords cannot be reused. Valid values of N: 0 to 24.
    // 
    // The default value is 0, which indicates that RAM users can reuse previous passwords.
    std::shared_ptr<int32_t> passwordReusePrevention_ = nullptr;
    // Specifies whether the password must contain lowercase letters. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> requireLowercaseCharacters_ = nullptr;
    // Specifies whether the password must contain digits. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> requireNumbers_ = nullptr;
    // Specifies whether the password must contain special characters. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> requireSymbols_ = nullptr;
    // Specifies whether the password must contain uppercase letters. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> requireUppercaseCharacters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
