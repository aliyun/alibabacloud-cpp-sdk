// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPASSWORDPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPASSWORDPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class SetPasswordPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPasswordPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HardExpiry, hardExpiry_);
      DARABONBA_PTR_TO_JSON(MaxLoginAttemps, maxLoginAttemps_);
      DARABONBA_PTR_TO_JSON(MaxPasswordAge, maxPasswordAge_);
      DARABONBA_PTR_TO_JSON(MinimumPasswordLength, minimumPasswordLength_);
      DARABONBA_PTR_TO_JSON(PasswordReusePrevention, passwordReusePrevention_);
      DARABONBA_PTR_TO_JSON(RequireLowercaseCharacters, requireLowercaseCharacters_);
      DARABONBA_PTR_TO_JSON(RequireNumbers, requireNumbers_);
      DARABONBA_PTR_TO_JSON(RequireSymbols, requireSymbols_);
      DARABONBA_PTR_TO_JSON(RequireUppercaseCharacters, requireUppercaseCharacters_);
    };
    friend void from_json(const Darabonba::Json& j, SetPasswordPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HardExpiry, hardExpiry_);
      DARABONBA_PTR_FROM_JSON(MaxLoginAttemps, maxLoginAttemps_);
      DARABONBA_PTR_FROM_JSON(MaxPasswordAge, maxPasswordAge_);
      DARABONBA_PTR_FROM_JSON(MinimumPasswordLength, minimumPasswordLength_);
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
    virtual bool empty() const override { return this->hardExpiry_ == nullptr
        && this->maxLoginAttemps_ == nullptr && this->maxPasswordAge_ == nullptr && this->minimumPasswordLength_ == nullptr && this->passwordReusePrevention_ == nullptr && this->requireLowercaseCharacters_ == nullptr
        && this->requireNumbers_ == nullptr && this->requireSymbols_ == nullptr && this->requireUppercaseCharacters_ == nullptr; };
    // hardExpiry Field Functions 
    bool hasHardExpiry() const { return this->hardExpiry_ != nullptr;};
    void deleteHardExpiry() { this->hardExpiry_ = nullptr;};
    inline bool getHardExpiry() const { DARABONBA_PTR_GET_DEFAULT(hardExpiry_, false) };
    inline SetPasswordPolicyRequest& setHardExpiry(bool hardExpiry) { DARABONBA_PTR_SET_VALUE(hardExpiry_, hardExpiry) };


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


    // minimumPasswordLength Field Functions 
    bool hasMinimumPasswordLength() const { return this->minimumPasswordLength_ != nullptr;};
    void deleteMinimumPasswordLength() { this->minimumPasswordLength_ = nullptr;};
    inline int32_t getMinimumPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(minimumPasswordLength_, 0) };
    inline SetPasswordPolicyRequest& setMinimumPasswordLength(int32_t minimumPasswordLength) { DARABONBA_PTR_SET_VALUE(minimumPasswordLength_, minimumPasswordLength) };


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
    // Specifies whether a password will expire. Valid values: `true` and `false`. Default value: `false`. If you leave this parameter unspecified, the default value false is used.
    // 
    // *   If you set this parameter to `true`, the Alibaba Cloud account to which the RAM users belong must reset the passwords before the RAM users can log on to the Alibaba Cloud Management Console.
    // *   If you set this parameter to `false`, the RAM users can change the passwords after the passwords expire and then log on to the Alibaba Cloud Management Console.
    shared_ptr<bool> hardExpiry_ {};
    // The maximum number of permitted logon attempts within one hour. The number of logon attempts is reset to zero if a RAM user changes the password.
    shared_ptr<int32_t> maxLoginAttemps_ {};
    // The number of days for which a password is valid. If you reset a password, the password validity period restarts. Default value: 0. The default value indicates that the password never expires.
    shared_ptr<int32_t> maxPasswordAge_ {};
    // The minimum number of characters in a password.
    // 
    // Valid values: 8 to 32. Default value: 8.
    shared_ptr<int32_t> minimumPasswordLength_ {};
    // The number of previous passwords that a RAM user is prevented from reusing. Default value: 0. The default value indicates that the RAM user can reuse previous passwords.
    shared_ptr<int32_t> passwordReusePrevention_ {};
    // Specifies whether a password must contain one or more lowercase letters.
    shared_ptr<bool> requireLowercaseCharacters_ {};
    // Specifies whether a password must contain one or more digits.
    shared_ptr<bool> requireNumbers_ {};
    // Specifies whether a password must contain one or more special characters.
    shared_ptr<bool> requireSymbols_ {};
    // Specifies whether a password must contain one or more uppercase letters.
    shared_ptr<bool> requireUppercaseCharacters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
