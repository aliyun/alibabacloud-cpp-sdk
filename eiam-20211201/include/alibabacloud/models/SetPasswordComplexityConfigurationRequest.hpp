// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPASSWORDCOMPLEXITYCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPASSWORDCOMPLEXITYCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetPasswordComplexityConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPasswordComplexityConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PasswordComplexityRules, passwordComplexityRules_);
      DARABONBA_PTR_TO_JSON(PasswordMinLength, passwordMinLength_);
    };
    friend void from_json(const Darabonba::Json& j, SetPasswordComplexityConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PasswordComplexityRules, passwordComplexityRules_);
      DARABONBA_PTR_FROM_JSON(PasswordMinLength, passwordMinLength_);
    };
    SetPasswordComplexityConfigurationRequest() = default ;
    SetPasswordComplexityConfigurationRequest(const SetPasswordComplexityConfigurationRequest &) = default ;
    SetPasswordComplexityConfigurationRequest(SetPasswordComplexityConfigurationRequest &&) = default ;
    SetPasswordComplexityConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPasswordComplexityConfigurationRequest() = default ;
    SetPasswordComplexityConfigurationRequest& operator=(const SetPasswordComplexityConfigurationRequest &) = default ;
    SetPasswordComplexityConfigurationRequest& operator=(SetPasswordComplexityConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PasswordComplexityRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PasswordComplexityRules& obj) { 
        DARABONBA_PTR_TO_JSON(PasswordCheckType, passwordCheckType_);
      };
      friend void from_json(const Darabonba::Json& j, PasswordComplexityRules& obj) { 
        DARABONBA_PTR_FROM_JSON(PasswordCheckType, passwordCheckType_);
      };
      PasswordComplexityRules() = default ;
      PasswordComplexityRules(const PasswordComplexityRules &) = default ;
      PasswordComplexityRules(PasswordComplexityRules &&) = default ;
      PasswordComplexityRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PasswordComplexityRules() = default ;
      PasswordComplexityRules& operator=(const PasswordComplexityRules &) = default ;
      PasswordComplexityRules& operator=(PasswordComplexityRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->passwordCheckType_ == nullptr; };
      // passwordCheckType Field Functions 
      bool hasPasswordCheckType() const { return this->passwordCheckType_ != nullptr;};
      void deletePasswordCheckType() { this->passwordCheckType_ = nullptr;};
      inline string getPasswordCheckType() const { DARABONBA_PTR_GET_DEFAULT(passwordCheckType_, "") };
      inline PasswordComplexityRules& setPasswordCheckType(string passwordCheckType) { DARABONBA_PTR_SET_VALUE(passwordCheckType_, passwordCheckType) };


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
      shared_ptr<string> passwordCheckType_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->passwordComplexityRules_ == nullptr && this->passwordMinLength_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPasswordComplexityConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // passwordComplexityRules Field Functions 
    bool hasPasswordComplexityRules() const { return this->passwordComplexityRules_ != nullptr;};
    void deletePasswordComplexityRules() { this->passwordComplexityRules_ = nullptr;};
    inline const vector<SetPasswordComplexityConfigurationRequest::PasswordComplexityRules> & getPasswordComplexityRules() const { DARABONBA_PTR_GET_CONST(passwordComplexityRules_, vector<SetPasswordComplexityConfigurationRequest::PasswordComplexityRules>) };
    inline vector<SetPasswordComplexityConfigurationRequest::PasswordComplexityRules> getPasswordComplexityRules() { DARABONBA_PTR_GET(passwordComplexityRules_, vector<SetPasswordComplexityConfigurationRequest::PasswordComplexityRules>) };
    inline SetPasswordComplexityConfigurationRequest& setPasswordComplexityRules(const vector<SetPasswordComplexityConfigurationRequest::PasswordComplexityRules> & passwordComplexityRules) { DARABONBA_PTR_SET_VALUE(passwordComplexityRules_, passwordComplexityRules) };
    inline SetPasswordComplexityConfigurationRequest& setPasswordComplexityRules(vector<SetPasswordComplexityConfigurationRequest::PasswordComplexityRules> && passwordComplexityRules) { DARABONBA_PTR_SET_RVALUE(passwordComplexityRules_, passwordComplexityRules) };


    // passwordMinLength Field Functions 
    bool hasPasswordMinLength() const { return this->passwordMinLength_ != nullptr;};
    void deletePasswordMinLength() { this->passwordMinLength_ = nullptr;};
    inline int32_t getPasswordMinLength() const { DARABONBA_PTR_GET_DEFAULT(passwordMinLength_, 0) };
    inline SetPasswordComplexityConfigurationRequest& setPasswordMinLength(int32_t passwordMinLength) { DARABONBA_PTR_SET_VALUE(passwordMinLength_, passwordMinLength) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The password complexity rules.
    shared_ptr<vector<SetPasswordComplexityConfigurationRequest::PasswordComplexityRules>> passwordComplexityRules_ {};
    // The minimum number of characters in a password.
    // 
    // This parameter is required.
    shared_ptr<int32_t> passwordMinLength_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
