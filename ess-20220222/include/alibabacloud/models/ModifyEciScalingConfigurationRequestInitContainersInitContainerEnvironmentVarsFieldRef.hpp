// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTINITCONTAINERSINITCONTAINERENVIRONMENTVARSFIELDREF_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTINITCONTAINERSINITCONTAINERENVIRONMENTVARSFIELDREF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef& obj) { 
      DARABONBA_PTR_TO_JSON(FieldPath, fieldPath_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldPath, fieldPath_);
    };
    ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef() = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef(const ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef &) = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef(ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef &&) = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef() = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef& operator=(const ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef &) = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef& operator=(ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldPath_ != nullptr; };
    // fieldPath Field Functions 
    bool hasFieldPath() const { return this->fieldPath_ != nullptr;};
    void deleteFieldPath() { this->fieldPath_ = nullptr;};
    inline string fieldPath() const { DARABONBA_PTR_GET_DEFAULT(fieldPath_, "") };
    inline ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVarsFieldRef& setFieldPath(string fieldPath) { DARABONBA_PTR_SET_VALUE(fieldPath_, fieldPath) };


  protected:
    std::shared_ptr<string> fieldPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
