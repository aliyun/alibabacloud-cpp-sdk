// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPASSWORDCOMPLEXITYCONFIGURATIONREQUESTPASSWORDCOMPLEXITYRULES_HPP_
#define ALIBABACLOUD_MODELS_SETPASSWORDCOMPLEXITYCONFIGURATIONREQUESTPASSWORDCOMPLEXITYRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetPasswordComplexityConfigurationRequestPasswordComplexityRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPasswordComplexityConfigurationRequestPasswordComplexityRules& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordCheckType, passwordCheckType_);
    };
    friend void from_json(const Darabonba::Json& j, SetPasswordComplexityConfigurationRequestPasswordComplexityRules& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordCheckType, passwordCheckType_);
    };
    SetPasswordComplexityConfigurationRequestPasswordComplexityRules() = default ;
    SetPasswordComplexityConfigurationRequestPasswordComplexityRules(const SetPasswordComplexityConfigurationRequestPasswordComplexityRules &) = default ;
    SetPasswordComplexityConfigurationRequestPasswordComplexityRules(SetPasswordComplexityConfigurationRequestPasswordComplexityRules &&) = default ;
    SetPasswordComplexityConfigurationRequestPasswordComplexityRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPasswordComplexityConfigurationRequestPasswordComplexityRules() = default ;
    SetPasswordComplexityConfigurationRequestPasswordComplexityRules& operator=(const SetPasswordComplexityConfigurationRequestPasswordComplexityRules &) = default ;
    SetPasswordComplexityConfigurationRequestPasswordComplexityRules& operator=(SetPasswordComplexityConfigurationRequestPasswordComplexityRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passwordCheckType_ == nullptr; };
    // passwordCheckType Field Functions 
    bool hasPasswordCheckType() const { return this->passwordCheckType_ != nullptr;};
    void deletePasswordCheckType() { this->passwordCheckType_ = nullptr;};
    inline string passwordCheckType() const { DARABONBA_PTR_GET_DEFAULT(passwordCheckType_, "") };
    inline SetPasswordComplexityConfigurationRequestPasswordComplexityRules& setPasswordCheckType(string passwordCheckType) { DARABONBA_PTR_SET_VALUE(passwordCheckType_, passwordCheckType) };


  protected:
    // The type of the password check. Valid values:
    // 
    // *   inclusion_upper_case: The password must contain uppercase letters.
    // *   inclusion_lower_case: The password must contain lowercase letters.
    // *   inclusion_special_case: The password must contain one or more of the following special characters: @ % + \\ / \\" ! # $ ^ ? : , ( ) { } [ ] ~ - _ .
    // *   inclusion_number: The password must contain digits.
    // *   exclusion_username: The password cannot contain a username.
    // *   exclusion_email: The password cannot contain an email prefix.
    // *   exclusion_phone_number: The password cannot contain a mobile number.
    // *   exclusion_display_name: The password cannot contain a display name.
    std::shared_ptr<string> passwordCheckType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
