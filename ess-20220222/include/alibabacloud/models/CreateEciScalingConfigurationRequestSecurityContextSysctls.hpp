// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTSECURITYCONTEXTSYSCTLS_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTSECURITYCONTEXTSYSCTLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestSecurityContextSysctls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestSecurityContextSysctls& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestSecurityContextSysctls& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateEciScalingConfigurationRequestSecurityContextSysctls() = default ;
    CreateEciScalingConfigurationRequestSecurityContextSysctls(const CreateEciScalingConfigurationRequestSecurityContextSysctls &) = default ;
    CreateEciScalingConfigurationRequestSecurityContextSysctls(CreateEciScalingConfigurationRequestSecurityContextSysctls &&) = default ;
    CreateEciScalingConfigurationRequestSecurityContextSysctls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestSecurityContextSysctls() = default ;
    CreateEciScalingConfigurationRequestSecurityContextSysctls& operator=(const CreateEciScalingConfigurationRequestSecurityContextSysctls &) = default ;
    CreateEciScalingConfigurationRequestSecurityContextSysctls& operator=(CreateEciScalingConfigurationRequestSecurityContextSysctls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEciScalingConfigurationRequestSecurityContextSysctls& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateEciScalingConfigurationRequestSecurityContextSysctls& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The variable name of the security context in which the container group runs.
    std::shared_ptr<string> name_ = nullptr;
    // The variable value of the security context in which the elastic container instance runs.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
