// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ModifyAutoScalingConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoScalingConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigName, configName_);
      DARABONBA_PTR_TO_JSON(EffectiveTimeEnd, effectiveTimeEnd_);
      DARABONBA_PTR_TO_JSON(EffectiveTimeStart, effectiveTimeStart_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodesMax, nodesMax_);
      DARABONBA_PTR_TO_JSON(NodesMin, nodesMin_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScaleRuleList, scaleRuleListShrink_);
      DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SpecId, specId_);
      DARABONBA_PTR_TO_JSON(StorageCapacityMax, storageCapacityMax_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoScalingConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
      DARABONBA_PTR_FROM_JSON(EffectiveTimeEnd, effectiveTimeEnd_);
      DARABONBA_PTR_FROM_JSON(EffectiveTimeStart, effectiveTimeStart_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodesMax, nodesMax_);
      DARABONBA_PTR_FROM_JSON(NodesMin, nodesMin_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleList, scaleRuleListShrink_);
      DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SpecId, specId_);
      DARABONBA_PTR_FROM_JSON(StorageCapacityMax, storageCapacityMax_);
    };
    ModifyAutoScalingConfigShrinkRequest() = default ;
    ModifyAutoScalingConfigShrinkRequest(const ModifyAutoScalingConfigShrinkRequest &) = default ;
    ModifyAutoScalingConfigShrinkRequest(ModifyAutoScalingConfigShrinkRequest &&) = default ;
    ModifyAutoScalingConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoScalingConfigShrinkRequest() = default ;
    ModifyAutoScalingConfigShrinkRequest& operator=(const ModifyAutoScalingConfigShrinkRequest &) = default ;
    ModifyAutoScalingConfigShrinkRequest& operator=(ModifyAutoScalingConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->configName_ == nullptr && this->effectiveTimeEnd_ == nullptr && this->effectiveTimeStart_ == nullptr && this->enabled_ == nullptr && this->engine_ == nullptr
        && this->instanceId_ == nullptr && this->nodesMax_ == nullptr && this->nodesMin_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scaleRuleListShrink_ == nullptr && this->scaleType_ == nullptr && this->securityToken_ == nullptr
        && this->specId_ == nullptr && this->storageCapacityMax_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ModifyAutoScalingConfigShrinkRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline ModifyAutoScalingConfigShrinkRequest& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // effectiveTimeEnd Field Functions 
    bool hasEffectiveTimeEnd() const { return this->effectiveTimeEnd_ != nullptr;};
    void deleteEffectiveTimeEnd() { this->effectiveTimeEnd_ = nullptr;};
    inline string getEffectiveTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(effectiveTimeEnd_, "") };
    inline ModifyAutoScalingConfigShrinkRequest& setEffectiveTimeEnd(string effectiveTimeEnd) { DARABONBA_PTR_SET_VALUE(effectiveTimeEnd_, effectiveTimeEnd) };


    // effectiveTimeStart Field Functions 
    bool hasEffectiveTimeStart() const { return this->effectiveTimeStart_ != nullptr;};
    void deleteEffectiveTimeStart() { this->effectiveTimeStart_ = nullptr;};
    inline string getEffectiveTimeStart() const { DARABONBA_PTR_GET_DEFAULT(effectiveTimeStart_, "") };
    inline ModifyAutoScalingConfigShrinkRequest& setEffectiveTimeStart(string effectiveTimeStart) { DARABONBA_PTR_SET_VALUE(effectiveTimeStart_, effectiveTimeStart) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModifyAutoScalingConfigShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ModifyAutoScalingConfigShrinkRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyAutoScalingConfigShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodesMax Field Functions 
    bool hasNodesMax() const { return this->nodesMax_ != nullptr;};
    void deleteNodesMax() { this->nodesMax_ = nullptr;};
    inline int32_t getNodesMax() const { DARABONBA_PTR_GET_DEFAULT(nodesMax_, 0) };
    inline ModifyAutoScalingConfigShrinkRequest& setNodesMax(int32_t nodesMax) { DARABONBA_PTR_SET_VALUE(nodesMax_, nodesMax) };


    // nodesMin Field Functions 
    bool hasNodesMin() const { return this->nodesMin_ != nullptr;};
    void deleteNodesMin() { this->nodesMin_ = nullptr;};
    inline int32_t getNodesMin() const { DARABONBA_PTR_GET_DEFAULT(nodesMin_, 0) };
    inline ModifyAutoScalingConfigShrinkRequest& setNodesMin(int32_t nodesMin) { DARABONBA_PTR_SET_VALUE(nodesMin_, nodesMin) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyAutoScalingConfigShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyAutoScalingConfigShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyAutoScalingConfigShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyAutoScalingConfigShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scaleRuleListShrink Field Functions 
    bool hasScaleRuleListShrink() const { return this->scaleRuleListShrink_ != nullptr;};
    void deleteScaleRuleListShrink() { this->scaleRuleListShrink_ = nullptr;};
    inline string getScaleRuleListShrink() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleListShrink_, "") };
    inline ModifyAutoScalingConfigShrinkRequest& setScaleRuleListShrink(string scaleRuleListShrink) { DARABONBA_PTR_SET_VALUE(scaleRuleListShrink_, scaleRuleListShrink) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string getScaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline ModifyAutoScalingConfigShrinkRequest& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyAutoScalingConfigShrinkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline string getSpecId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
    inline ModifyAutoScalingConfigShrinkRequest& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


    // storageCapacityMax Field Functions 
    bool hasStorageCapacityMax() const { return this->storageCapacityMax_ != nullptr;};
    void deleteStorageCapacityMax() { this->storageCapacityMax_ = nullptr;};
    inline int64_t getStorageCapacityMax() const { DARABONBA_PTR_GET_DEFAULT(storageCapacityMax_, 0L) };
    inline ModifyAutoScalingConfigShrinkRequest& setStorageCapacityMax(int64_t storageCapacityMax) { DARABONBA_PTR_SET_VALUE(storageCapacityMax_, storageCapacityMax) };


  protected:
    // This parameter is required.
    shared_ptr<string> configId_ {};
    shared_ptr<string> configName_ {};
    shared_ptr<string> effectiveTimeEnd_ {};
    shared_ptr<string> effectiveTimeStart_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<string> engine_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> nodesMax_ {};
    shared_ptr<int32_t> nodesMin_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> scaleRuleListShrink_ {};
    shared_ptr<string> scaleType_ {};
    shared_ptr<string> securityToken_ {};
    shared_ptr<string> specId_ {};
    shared_ptr<int64_t> storageCapacityMax_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
