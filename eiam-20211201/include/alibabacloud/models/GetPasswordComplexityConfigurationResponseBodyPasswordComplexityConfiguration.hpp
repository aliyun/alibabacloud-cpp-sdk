// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDCOMPLEXITYCONFIGURATIONRESPONSEBODYPASSWORDCOMPLEXITYCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDCOMPLEXITYCONFIGURATIONRESPONSEBODYPASSWORDCOMPLEXITYCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordComplexityRules, passwordComplexityRules_);
      DARABONBA_PTR_TO_JSON(PasswordMinLength, passwordMinLength_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordComplexityRules, passwordComplexityRules_);
      DARABONBA_PTR_FROM_JSON(PasswordMinLength, passwordMinLength_);
    };
    GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration() = default ;
    GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration(const GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration &) = default ;
    GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration(GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration &&) = default ;
    GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration() = default ;
    GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration& operator=(const GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration &) = default ;
    GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration& operator=(GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passwordComplexityRules_ == nullptr
        && return this->passwordMinLength_ == nullptr; };
    // passwordComplexityRules Field Functions 
    bool hasPasswordComplexityRules() const { return this->passwordComplexityRules_ != nullptr;};
    void deletePasswordComplexityRules() { this->passwordComplexityRules_ = nullptr;};
    inline const vector<Models::GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules> & passwordComplexityRules() const { DARABONBA_PTR_GET_CONST(passwordComplexityRules_, vector<Models::GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules>) };
    inline vector<Models::GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules> passwordComplexityRules() { DARABONBA_PTR_GET(passwordComplexityRules_, vector<Models::GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules>) };
    inline GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration& setPasswordComplexityRules(const vector<Models::GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules> & passwordComplexityRules) { DARABONBA_PTR_SET_VALUE(passwordComplexityRules_, passwordComplexityRules) };
    inline GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration& setPasswordComplexityRules(vector<Models::GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules> && passwordComplexityRules) { DARABONBA_PTR_SET_RVALUE(passwordComplexityRules_, passwordComplexityRules) };


    // passwordMinLength Field Functions 
    bool hasPasswordMinLength() const { return this->passwordMinLength_ != nullptr;};
    void deletePasswordMinLength() { this->passwordMinLength_ = nullptr;};
    inline int32_t passwordMinLength() const { DARABONBA_PTR_GET_DEFAULT(passwordMinLength_, 0) };
    inline GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration& setPasswordMinLength(int32_t passwordMinLength) { DARABONBA_PTR_SET_VALUE(passwordMinLength_, passwordMinLength) };


  protected:
    // The password complexity rules.
    std::shared_ptr<vector<Models::GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfigurationPasswordComplexityRules>> passwordComplexityRules_ = nullptr;
    // The minimum number of characters in a password.
    std::shared_ptr<int32_t> passwordMinLength_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
