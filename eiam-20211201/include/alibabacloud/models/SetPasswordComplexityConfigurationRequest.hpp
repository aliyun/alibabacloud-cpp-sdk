// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPASSWORDCOMPLEXITYCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPASSWORDCOMPLEXITYCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetPasswordComplexityConfigurationRequestPasswordComplexityRules.hpp>
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
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->passwordComplexityRules_ == nullptr && return this->passwordMinLength_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPasswordComplexityConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // passwordComplexityRules Field Functions 
    bool hasPasswordComplexityRules() const { return this->passwordComplexityRules_ != nullptr;};
    void deletePasswordComplexityRules() { this->passwordComplexityRules_ = nullptr;};
    inline const vector<SetPasswordComplexityConfigurationRequestPasswordComplexityRules> & passwordComplexityRules() const { DARABONBA_PTR_GET_CONST(passwordComplexityRules_, vector<SetPasswordComplexityConfigurationRequestPasswordComplexityRules>) };
    inline vector<SetPasswordComplexityConfigurationRequestPasswordComplexityRules> passwordComplexityRules() { DARABONBA_PTR_GET(passwordComplexityRules_, vector<SetPasswordComplexityConfigurationRequestPasswordComplexityRules>) };
    inline SetPasswordComplexityConfigurationRequest& setPasswordComplexityRules(const vector<SetPasswordComplexityConfigurationRequestPasswordComplexityRules> & passwordComplexityRules) { DARABONBA_PTR_SET_VALUE(passwordComplexityRules_, passwordComplexityRules) };
    inline SetPasswordComplexityConfigurationRequest& setPasswordComplexityRules(vector<SetPasswordComplexityConfigurationRequestPasswordComplexityRules> && passwordComplexityRules) { DARABONBA_PTR_SET_RVALUE(passwordComplexityRules_, passwordComplexityRules) };


    // passwordMinLength Field Functions 
    bool hasPasswordMinLength() const { return this->passwordMinLength_ != nullptr;};
    void deletePasswordMinLength() { this->passwordMinLength_ = nullptr;};
    inline int32_t passwordMinLength() const { DARABONBA_PTR_GET_DEFAULT(passwordMinLength_, 0) };
    inline SetPasswordComplexityConfigurationRequest& setPasswordMinLength(int32_t passwordMinLength) { DARABONBA_PTR_SET_VALUE(passwordMinLength_, passwordMinLength) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The password complexity rules.
    std::shared_ptr<vector<SetPasswordComplexityConfigurationRequestPasswordComplexityRules>> passwordComplexityRules_ = nullptr;
    // The minimum number of characters in a password.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> passwordMinLength_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
