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
      DARABONBA_PTR_TO_JSON(InitialPasswordAge, initialPasswordAge_);
      DARABONBA_PTR_TO_JSON(InterceptRiskPasswordOnApi, interceptRiskPasswordOnApi_);
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
      DARABONBA_PTR_FROM_JSON(InitialPasswordAge, initialPasswordAge_);
      DARABONBA_PTR_FROM_JSON(InterceptRiskPasswordOnApi, interceptRiskPasswordOnApi_);
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
    virtual bool empty() const override { return this->hardExpire_ == nullptr
        && this->initialPasswordAge_ == nullptr && this->interceptRiskPasswordOnApi_ == nullptr && this->maxLoginAttemps_ == nullptr && this->maxPasswordAge_ == nullptr && this->minimumPasswordDifferentCharacter_ == nullptr
        && this->minimumPasswordLength_ == nullptr && this->passwordNotContainUserName_ == nullptr && this->passwordReusePrevention_ == nullptr && this->requireLowercaseCharacters_ == nullptr && this->requireNumbers_ == nullptr
        && this->requireSymbols_ == nullptr && this->requireUppercaseCharacters_ == nullptr; };
    // hardExpire Field Functions 
    bool hasHardExpire() const { return this->hardExpire_ != nullptr;};
    void deleteHardExpire() { this->hardExpire_ = nullptr;};
    inline bool getHardExpire() const { DARABONBA_PTR_GET_DEFAULT(hardExpire_, false) };
    inline SetPasswordPolicyRequest& setHardExpire(bool hardExpire) { DARABONBA_PTR_SET_VALUE(hardExpire_, hardExpire) };


    // initialPasswordAge Field Functions 
    bool hasInitialPasswordAge() const { return this->initialPasswordAge_ != nullptr;};
    void deleteInitialPasswordAge() { this->initialPasswordAge_ = nullptr;};
    inline int32_t getInitialPasswordAge() const { DARABONBA_PTR_GET_DEFAULT(initialPasswordAge_, 0) };
    inline SetPasswordPolicyRequest& setInitialPasswordAge(int32_t initialPasswordAge) { DARABONBA_PTR_SET_VALUE(initialPasswordAge_, initialPasswordAge) };


    // interceptRiskPasswordOnApi Field Functions 
    bool hasInterceptRiskPasswordOnApi() const { return this->interceptRiskPasswordOnApi_ != nullptr;};
    void deleteInterceptRiskPasswordOnApi() { this->interceptRiskPasswordOnApi_ = nullptr;};
    inline bool getInterceptRiskPasswordOnApi() const { DARABONBA_PTR_GET_DEFAULT(interceptRiskPasswordOnApi_, false) };
    inline SetPasswordPolicyRequest& setInterceptRiskPasswordOnApi(bool interceptRiskPasswordOnApi) { DARABONBA_PTR_SET_VALUE(interceptRiskPasswordOnApi_, interceptRiskPasswordOnApi) };


    // maxLoginAttemps Field Functions 
    bool hasMaxLoginAttemps() const { return this->maxLoginAttemps_ != nullptr;};
    void deleteMaxLoginAttemps() { this->maxLoginAttemps_ = nullptr;};
    inline int32_t getMaxLoginAttemps() const { DARABONBA_PTR_GET_DEFAULT(maxLoginAttemps_, 0) };
    inline SetPasswordPolicyRequest& setMaxLoginAttemps(int32_t maxLoginAttemps) { DARABONBA_PTR_SET_VALUE(maxLoginAttemps_, maxLoginAttemps) };


    // maxPasswordAge Field Functions 
    bool hasMaxPasswordAge() const { return this->maxPasswordAge_ != nullptr;};
    void deleteMaxPasswordAge() { this->maxPasswordAge_ = nullptr;};
    inline int32_t getMaxPasswordAge() const { DARABONBA_PTR_GET_DEFAULT(maxPasswordAge_, 0) };
    inline SetPasswordPolicyRequest& setMaxPasswordAge(int32_t maxPasswordAge) { DARABONBA_PTR_SET_VALUE(maxPasswordAge_, maxPasswordAge) };


    // minimumPasswordDifferentCharacter Field Functions 
    bool hasMinimumPasswordDifferentCharacter() const { return this->minimumPasswordDifferentCharacter_ != nullptr;};
    void deleteMinimumPasswordDifferentCharacter() { this->minimumPasswordDifferentCharacter_ = nullptr;};
    inline int32_t getMinimumPasswordDifferentCharacter() const { DARABONBA_PTR_GET_DEFAULT(minimumPasswordDifferentCharacter_, 0) };
    inline SetPasswordPolicyRequest& setMinimumPasswordDifferentCharacter(int32_t minimumPasswordDifferentCharacter) { DARABONBA_PTR_SET_VALUE(minimumPasswordDifferentCharacter_, minimumPasswordDifferentCharacter) };


    // minimumPasswordLength Field Functions 
    bool hasMinimumPasswordLength() const { return this->minimumPasswordLength_ != nullptr;};
    void deleteMinimumPasswordLength() { this->minimumPasswordLength_ = nullptr;};
    inline int32_t getMinimumPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(minimumPasswordLength_, 0) };
    inline SetPasswordPolicyRequest& setMinimumPasswordLength(int32_t minimumPasswordLength) { DARABONBA_PTR_SET_VALUE(minimumPasswordLength_, minimumPasswordLength) };


    // passwordNotContainUserName Field Functions 
    bool hasPasswordNotContainUserName() const { return this->passwordNotContainUserName_ != nullptr;};
    void deletePasswordNotContainUserName() { this->passwordNotContainUserName_ = nullptr;};
    inline bool getPasswordNotContainUserName() const { DARABONBA_PTR_GET_DEFAULT(passwordNotContainUserName_, false) };
    inline SetPasswordPolicyRequest& setPasswordNotContainUserName(bool passwordNotContainUserName) { DARABONBA_PTR_SET_VALUE(passwordNotContainUserName_, passwordNotContainUserName) };


    // passwordReusePrevention Field Functions 
    bool hasPasswordReusePrevention() const { return this->passwordReusePrevention_ != nullptr;};
    void deletePasswordReusePrevention() { this->passwordReusePrevention_ = nullptr;};
    inline int32_t getPasswordReusePrevention() const { DARABONBA_PTR_GET_DEFAULT(passwordReusePrevention_, 0) };
    inline SetPasswordPolicyRequest& setPasswordReusePrevention(int32_t passwordReusePrevention) { DARABONBA_PTR_SET_VALUE(passwordReusePrevention_, passwordReusePrevention) };


    // requireLowercaseCharacters Field Functions 
    bool hasRequireLowercaseCharacters() const { return this->requireLowercaseCharacters_ != nullptr;};
    void deleteRequireLowercaseCharacters() { this->requireLowercaseCharacters_ = nullptr;};
    inline bool getRequireLowercaseCharacters() const { DARABONBA_PTR_GET_DEFAULT(requireLowercaseCharacters_, false) };
    inline SetPasswordPolicyRequest& setRequireLowercaseCharacters(bool requireLowercaseCharacters) { DARABONBA_PTR_SET_VALUE(requireLowercaseCharacters_, requireLowercaseCharacters) };


    // requireNumbers Field Functions 
    bool hasRequireNumbers() const { return this->requireNumbers_ != nullptr;};
    void deleteRequireNumbers() { this->requireNumbers_ = nullptr;};
    inline bool getRequireNumbers() const { DARABONBA_PTR_GET_DEFAULT(requireNumbers_, false) };
    inline SetPasswordPolicyRequest& setRequireNumbers(bool requireNumbers) { DARABONBA_PTR_SET_VALUE(requireNumbers_, requireNumbers) };


    // requireSymbols Field Functions 
    bool hasRequireSymbols() const { return this->requireSymbols_ != nullptr;};
    void deleteRequireSymbols() { this->requireSymbols_ = nullptr;};
    inline bool getRequireSymbols() const { DARABONBA_PTR_GET_DEFAULT(requireSymbols_, false) };
    inline SetPasswordPolicyRequest& setRequireSymbols(bool requireSymbols) { DARABONBA_PTR_SET_VALUE(requireSymbols_, requireSymbols) };


    // requireUppercaseCharacters Field Functions 
    bool hasRequireUppercaseCharacters() const { return this->requireUppercaseCharacters_ != nullptr;};
    void deleteRequireUppercaseCharacters() { this->requireUppercaseCharacters_ = nullptr;};
    inline bool getRequireUppercaseCharacters() const { DARABONBA_PTR_GET_DEFAULT(requireUppercaseCharacters_, false) };
    inline SetPasswordPolicyRequest& setRequireUppercaseCharacters(bool requireUppercaseCharacters) { DARABONBA_PTR_SET_VALUE(requireUppercaseCharacters_, requireUppercaseCharacters) };


  protected:
    // Specifies whether to prevent a RAM user from logging on after the password expires. Valid values:
    // 
    // - true: After the password expires, the RAM user cannot log on to the console. The password must be reset by the Alibaba Cloud account or a RAM user with administrative permissions before the RAM user can log on.
    // 
    // - false (default): After the password expires, the RAM user can change the password and then log on.
    shared_ptr<bool> hardExpire_ {};
    // The validity period of an initial password. An initial password is the password that is set when you create a RAM user or re-enable console logon.
    // 
    // Valid values: 0 to 90. Unit: days.
    // 
    // Default value: 14.
    // 
    // A value of 0 disables this feature.
    shared_ptr<int32_t> initialPasswordAge_ {};
    shared_ptr<bool> interceptRiskPasswordOnApi_ {};
    // The maximum number of consecutive logon failures that are allowed. If the number of failures is reached, the account is locked for one hour.
    // 
    // Valid values: 0 to 32.
    // 
    // Default value: 0. A value of 0 disables this feature.
    shared_ptr<int32_t> maxLoginAttemps_ {};
    // The validity period of a password.
    // 
    // Valid values: 0 to 1095. Unit: days.
    // 
    // Default value: 0. A value of 0 indicates that the password never expires.
    shared_ptr<int32_t> maxPasswordAge_ {};
    // The minimum number of unique characters in a password.
    // 
    // Valid values: 0 to 8.
    // 
    // Default value: 0. A value of 0 indicates that no limit is imposed on the number of unique characters.
    shared_ptr<int32_t> minimumPasswordDifferentCharacter_ {};
    // The minimum length of the password.
    // 
    // Valid values: 8 to 32. Default value: 8.
    shared_ptr<int32_t> minimumPasswordLength_ {};
    // Specifies whether the password can contain the username. Valid values:
    // 
    // - true: The password cannot contain the username.
    // 
    // - false (default): The password can contain the username.
    shared_ptr<bool> passwordNotContainUserName_ {};
    // The number of previous passwords that cannot be reused.
    // 
    // Valid values: 0 to 24.
    // 
    // Default value: 0. A value of 0 disables this feature.
    shared_ptr<int32_t> passwordReusePrevention_ {};
    // Specifies whether the password must contain lowercase letters. Valid values:
    // 
    // - true
    // 
    // - false (default)
    shared_ptr<bool> requireLowercaseCharacters_ {};
    // Specifies whether the password must contain digits. Valid values:
    // 
    // - true
    // 
    // - false (default)
    shared_ptr<bool> requireNumbers_ {};
    // Specifies whether the password must contain symbols. Valid values:
    // 
    // - true
    // 
    // - false (default)
    shared_ptr<bool> requireSymbols_ {};
    // Specifies whether the password must contain uppercase letters. Valid values:
    // 
    // - true
    // 
    // - false (default)
    shared_ptr<bool> requireUppercaseCharacters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
