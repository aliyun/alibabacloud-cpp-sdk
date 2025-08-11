// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTINITCONTAINERSINITCONTAINERENVIRONMENTVARS_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTINITCONTAINERSINITCONTAINERENVIRONMENTVARS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& obj) { 
      DARABONBA_PTR_TO_JSON(FieldRefFieldPath, fieldRefFieldPath_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldRefFieldPath, fieldRefFieldPath_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars() = default ;
    CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars(const CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars &) = default ;
    CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars(CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars &&) = default ;
    CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars() = default ;
    CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& operator=(const CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars &) = default ;
    CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& operator=(CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldRefFieldPath_ != nullptr
        && this->key_ != nullptr && this->value_ != nullptr; };
    // fieldRefFieldPath Field Functions 
    bool hasFieldRefFieldPath() const { return this->fieldRefFieldPath_ != nullptr;};
    void deleteFieldRefFieldPath() { this->fieldRefFieldPath_ = nullptr;};
    inline string fieldRefFieldPath() const { DARABONBA_PTR_GET_DEFAULT(fieldRefFieldPath_, "") };
    inline CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& setFieldRefFieldPath(string fieldRefFieldPath) { DARABONBA_PTR_SET_VALUE(fieldRefFieldPath_, fieldRefFieldPath) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // >  This parameter is unavailable for use.
    std::shared_ptr<string> fieldRefFieldPath_ = nullptr;
    // The name of the environment variable. The name can be 1 to 128 characters in length and can contain letters, underscores (_), and digits. It cannot start with a digit. Specify the value in the `[0-9a-zA-Z]` format.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the environment variable. The value can be up to 256 characters in length.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
