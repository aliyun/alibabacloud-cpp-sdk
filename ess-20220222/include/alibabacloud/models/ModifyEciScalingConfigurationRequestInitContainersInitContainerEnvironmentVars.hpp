// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTINITCONTAINERSINITCONTAINERENVIRONMENTVARS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTINITCONTAINERSINITCONTAINERENVIRONMENTVARS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& obj) { 
      DARABONBA_PTR_TO_JSON(FieldRef, fieldRef_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldRef, fieldRef_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars() = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars(const ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars &) = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars(ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars &&) = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars() = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& operator=(const ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars &) = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& operator=(ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldRef_ != nullptr
        && this->key_ != nullptr && this->value_ != nullptr; };
    // fieldRef Field Functions 
    bool hasFieldRef() const { return this->fieldRef_ != nullptr;};
    void deleteFieldRef() { this->fieldRef_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef & fieldRef() const { DARABONBA_PTR_GET_CONST(fieldRef_, Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef) };
    inline Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef fieldRef() { DARABONBA_PTR_GET(fieldRef_, Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef) };
    inline ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& setFieldRef(const Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef & fieldRef) { DARABONBA_PTR_SET_VALUE(fieldRef_, fieldRef) };
    inline ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& setFieldRef(Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef && fieldRef) { DARABONBA_PTR_SET_RVALUE(fieldRef_, fieldRef) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef> fieldRef_ = nullptr;
    // The name of the environment variable. The name can be 1 to 128 characters in length, and can contain letters, underscores (_), and digits. The name cannot start with a digit. Specify the value in the `[0-9a-zA-Z]` format.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the environment variable. The value can be up to 256 characters in length.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
