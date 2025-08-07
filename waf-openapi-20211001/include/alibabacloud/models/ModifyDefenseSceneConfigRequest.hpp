// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEFENSESCENECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEFENSESCENECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyDefenseSceneConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDefenseSceneConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDefenseSceneConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyDefenseSceneConfigRequest() = default ;
    ModifyDefenseSceneConfigRequest(const ModifyDefenseSceneConfigRequest &) = default ;
    ModifyDefenseSceneConfigRequest(ModifyDefenseSceneConfigRequest &&) = default ;
    ModifyDefenseSceneConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDefenseSceneConfigRequest() = default ;
    ModifyDefenseSceneConfigRequest& operator=(const ModifyDefenseSceneConfigRequest &) = default ;
    ModifyDefenseSceneConfigRequest& operator=(ModifyDefenseSceneConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configKey_ != nullptr
        && this->configValue_ != nullptr && this->defenseScene_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr; };
    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string configKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline ModifyDefenseSceneConfigRequest& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline ModifyDefenseSceneConfigRequest& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string defenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline ModifyDefenseSceneConfigRequest& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDefenseSceneConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDefenseSceneConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyDefenseSceneConfigRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> configKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> configValue_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> defenseScene_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
