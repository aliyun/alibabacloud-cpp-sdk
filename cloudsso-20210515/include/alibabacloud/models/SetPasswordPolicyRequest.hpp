// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPASSWORDPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPASSWORDPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class SetPasswordPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPasswordPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(MaxLoginAttempts, maxLoginAttempts_);
      DARABONBA_PTR_TO_JSON(MaxPasswordAge, maxPasswordAge_);
      DARABONBA_PTR_TO_JSON(MinPasswordDifferentChars, minPasswordDifferentChars_);
      DARABONBA_PTR_TO_JSON(MinPasswordLength, minPasswordLength_);
      DARABONBA_PTR_TO_JSON(PasswordNotContainUsername, passwordNotContainUsername_);
      DARABONBA_PTR_TO_JSON(PasswordReusePrevention, passwordReusePrevention_);
    };
    friend void from_json(const Darabonba::Json& j, SetPasswordPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(MaxLoginAttempts, maxLoginAttempts_);
      DARABONBA_PTR_FROM_JSON(MaxPasswordAge, maxPasswordAge_);
      DARABONBA_PTR_FROM_JSON(MinPasswordDifferentChars, minPasswordDifferentChars_);
      DARABONBA_PTR_FROM_JSON(MinPasswordLength, minPasswordLength_);
      DARABONBA_PTR_FROM_JSON(PasswordNotContainUsername, passwordNotContainUsername_);
      DARABONBA_PTR_FROM_JSON(PasswordReusePrevention, passwordReusePrevention_);
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
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->maxLoginAttempts_ == nullptr && this->maxPasswordAge_ == nullptr && this->minPasswordDifferentChars_ == nullptr && this->minPasswordLength_ == nullptr && this->passwordNotContainUsername_ == nullptr
        && this->passwordReusePrevention_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline SetPasswordPolicyRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // maxLoginAttempts Field Functions 
    bool hasMaxLoginAttempts() const { return this->maxLoginAttempts_ != nullptr;};
    void deleteMaxLoginAttempts() { this->maxLoginAttempts_ = nullptr;};
    inline int32_t getMaxLoginAttempts() const { DARABONBA_PTR_GET_DEFAULT(maxLoginAttempts_, 0) };
    inline SetPasswordPolicyRequest& setMaxLoginAttempts(int32_t maxLoginAttempts) { DARABONBA_PTR_SET_VALUE(maxLoginAttempts_, maxLoginAttempts) };


    // maxPasswordAge Field Functions 
    bool hasMaxPasswordAge() const { return this->maxPasswordAge_ != nullptr;};
    void deleteMaxPasswordAge() { this->maxPasswordAge_ = nullptr;};
    inline int32_t getMaxPasswordAge() const { DARABONBA_PTR_GET_DEFAULT(maxPasswordAge_, 0) };
    inline SetPasswordPolicyRequest& setMaxPasswordAge(int32_t maxPasswordAge) { DARABONBA_PTR_SET_VALUE(maxPasswordAge_, maxPasswordAge) };


    // minPasswordDifferentChars Field Functions 
    bool hasMinPasswordDifferentChars() const { return this->minPasswordDifferentChars_ != nullptr;};
    void deleteMinPasswordDifferentChars() { this->minPasswordDifferentChars_ = nullptr;};
    inline int32_t getMinPasswordDifferentChars() const { DARABONBA_PTR_GET_DEFAULT(minPasswordDifferentChars_, 0) };
    inline SetPasswordPolicyRequest& setMinPasswordDifferentChars(int32_t minPasswordDifferentChars) { DARABONBA_PTR_SET_VALUE(minPasswordDifferentChars_, minPasswordDifferentChars) };


    // minPasswordLength Field Functions 
    bool hasMinPasswordLength() const { return this->minPasswordLength_ != nullptr;};
    void deleteMinPasswordLength() { this->minPasswordLength_ = nullptr;};
    inline int32_t getMinPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(minPasswordLength_, 0) };
    inline SetPasswordPolicyRequest& setMinPasswordLength(int32_t minPasswordLength) { DARABONBA_PTR_SET_VALUE(minPasswordLength_, minPasswordLength) };


    // passwordNotContainUsername Field Functions 
    bool hasPasswordNotContainUsername() const { return this->passwordNotContainUsername_ != nullptr;};
    void deletePasswordNotContainUsername() { this->passwordNotContainUsername_ = nullptr;};
    inline bool getPasswordNotContainUsername() const { DARABONBA_PTR_GET_DEFAULT(passwordNotContainUsername_, false) };
    inline SetPasswordPolicyRequest& setPasswordNotContainUsername(bool passwordNotContainUsername) { DARABONBA_PTR_SET_VALUE(passwordNotContainUsername_, passwordNotContainUsername) };


    // passwordReusePrevention Field Functions 
    bool hasPasswordReusePrevention() const { return this->passwordReusePrevention_ != nullptr;};
    void deletePasswordReusePrevention() { this->passwordReusePrevention_ = nullptr;};
    inline int32_t getPasswordReusePrevention() const { DARABONBA_PTR_GET_DEFAULT(passwordReusePrevention_, 0) };
    inline SetPasswordPolicyRequest& setPasswordReusePrevention(int32_t passwordReusePrevention) { DARABONBA_PTR_SET_VALUE(passwordReusePrevention_, passwordReusePrevention) };


  protected:
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The number of password retries.
    // 
    // If you enter wrong passwords for the specified consecutive times, the account is locked for 1 hour.
    // 
    // Valid values: 0 to 32. The value 0 specifies that the number of password retries is not limited.
    shared_ptr<int32_t> maxLoginAttempts_ {};
    // The validity period of a password.
    // 
    // Valid values: 1 to 120. Unit: days.
    shared_ptr<int32_t> maxPasswordAge_ {};
    // The minimum number of unique characters in a password.
    // 
    // The minimum value is 0, which specifies that the minimum number of unique characters in a password is not limited. The maximum value is the value of the `MinPasswordLength` parameter.
    shared_ptr<int32_t> minPasswordDifferentChars_ {};
    // The minimum password length.
    // 
    // Valid values: 8 to 32 characters.
    shared_ptr<int32_t> minPasswordLength_ {};
    // Specifies whether a password can contain the username. Valid value:
    // 
    // *   true: A password cannot contain the username.
    // *   false: A password can contain the username.
    shared_ptr<bool> passwordNotContainUsername_ {};
    // The policy for password history check.
    // 
    // The previous N passwords cannot be reused. Valid values of N: 0 to 24. The value 0 specifies that all historical passwords can be reused.
    // 
    // >  Passwords that are generated before January 5, 2024 are not counted as historical passwords.
    shared_ptr<int32_t> passwordReusePrevention_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
