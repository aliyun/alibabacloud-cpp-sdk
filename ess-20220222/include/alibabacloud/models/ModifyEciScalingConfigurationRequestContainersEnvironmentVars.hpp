// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSENVIRONMENTVARS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSENVIRONMENTVARS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestContainersEnvironmentVarsFieldRef.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestContainersEnvironmentVars : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestContainersEnvironmentVars& obj) { 
      DARABONBA_PTR_TO_JSON(FieldRef, fieldRef_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestContainersEnvironmentVars& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldRef, fieldRef_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ModifyEciScalingConfigurationRequestContainersEnvironmentVars() = default ;
    ModifyEciScalingConfigurationRequestContainersEnvironmentVars(const ModifyEciScalingConfigurationRequestContainersEnvironmentVars &) = default ;
    ModifyEciScalingConfigurationRequestContainersEnvironmentVars(ModifyEciScalingConfigurationRequestContainersEnvironmentVars &&) = default ;
    ModifyEciScalingConfigurationRequestContainersEnvironmentVars(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestContainersEnvironmentVars() = default ;
    ModifyEciScalingConfigurationRequestContainersEnvironmentVars& operator=(const ModifyEciScalingConfigurationRequestContainersEnvironmentVars &) = default ;
    ModifyEciScalingConfigurationRequestContainersEnvironmentVars& operator=(ModifyEciScalingConfigurationRequestContainersEnvironmentVars &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldRef_ != nullptr
        && this->key_ != nullptr && this->value_ != nullptr; };
    // fieldRef Field Functions 
    bool hasFieldRef() const { return this->fieldRef_ != nullptr;};
    void deleteFieldRef() { this->fieldRef_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestContainersEnvironmentVarsFieldRef & fieldRef() const { DARABONBA_PTR_GET_CONST(fieldRef_, Models::ModifyEciScalingConfigurationRequestContainersEnvironmentVarsFieldRef) };
    inline Models::ModifyEciScalingConfigurationRequestContainersEnvironmentVarsFieldRef fieldRef() { DARABONBA_PTR_GET(fieldRef_, Models::ModifyEciScalingConfigurationRequestContainersEnvironmentVarsFieldRef) };
    inline ModifyEciScalingConfigurationRequestContainersEnvironmentVars& setFieldRef(const Models::ModifyEciScalingConfigurationRequestContainersEnvironmentVarsFieldRef & fieldRef) { DARABONBA_PTR_SET_VALUE(fieldRef_, fieldRef) };
    inline ModifyEciScalingConfigurationRequestContainersEnvironmentVars& setFieldRef(Models::ModifyEciScalingConfigurationRequestContainersEnvironmentVarsFieldRef && fieldRef) { DARABONBA_PTR_SET_RVALUE(fieldRef_, fieldRef) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ModifyEciScalingConfigurationRequestContainersEnvironmentVars& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ModifyEciScalingConfigurationRequestContainersEnvironmentVars& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestContainersEnvironmentVarsFieldRef> fieldRef_ = nullptr;
    // The name of the environment variable. The name can be 1 to 128 characters in length, and can contain letters, underscores (_), and digits. The name cannot start with a digit. Specify the value in the `[0-9a-zA-Z]` format.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the environment variable. The value can be up to 256 characters in length.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
