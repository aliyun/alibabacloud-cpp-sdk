// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOSCALINGCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOSCALINGCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class CreateAutoScalingConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoScalingConfigShrinkRequest& obj) { 
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
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoScalingConfigShrinkRequest& obj) { 
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
    };
    CreateAutoScalingConfigShrinkRequest() = default ;
    CreateAutoScalingConfigShrinkRequest(const CreateAutoScalingConfigShrinkRequest &) = default ;
    CreateAutoScalingConfigShrinkRequest(CreateAutoScalingConfigShrinkRequest &&) = default ;
    CreateAutoScalingConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoScalingConfigShrinkRequest() = default ;
    CreateAutoScalingConfigShrinkRequest& operator=(const CreateAutoScalingConfigShrinkRequest &) = default ;
    CreateAutoScalingConfigShrinkRequest& operator=(CreateAutoScalingConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configName_ == nullptr
        && return this->effectiveTimeEnd_ == nullptr && return this->effectiveTimeStart_ == nullptr && return this->enabled_ == nullptr && return this->engine_ == nullptr && return this->instanceId_ == nullptr
        && return this->nodesMax_ == nullptr && return this->nodesMin_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->scaleRuleListShrink_ == nullptr && return this->scaleType_ == nullptr && return this->securityToken_ == nullptr && return this->specId_ == nullptr; };
    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string configName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline CreateAutoScalingConfigShrinkRequest& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // effectiveTimeEnd Field Functions 
    bool hasEffectiveTimeEnd() const { return this->effectiveTimeEnd_ != nullptr;};
    void deleteEffectiveTimeEnd() { this->effectiveTimeEnd_ = nullptr;};
    inline string effectiveTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(effectiveTimeEnd_, "") };
    inline CreateAutoScalingConfigShrinkRequest& setEffectiveTimeEnd(string effectiveTimeEnd) { DARABONBA_PTR_SET_VALUE(effectiveTimeEnd_, effectiveTimeEnd) };


    // effectiveTimeStart Field Functions 
    bool hasEffectiveTimeStart() const { return this->effectiveTimeStart_ != nullptr;};
    void deleteEffectiveTimeStart() { this->effectiveTimeStart_ = nullptr;};
    inline string effectiveTimeStart() const { DARABONBA_PTR_GET_DEFAULT(effectiveTimeStart_, "") };
    inline CreateAutoScalingConfigShrinkRequest& setEffectiveTimeStart(string effectiveTimeStart) { DARABONBA_PTR_SET_VALUE(effectiveTimeStart_, effectiveTimeStart) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateAutoScalingConfigShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateAutoScalingConfigShrinkRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAutoScalingConfigShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodesMax Field Functions 
    bool hasNodesMax() const { return this->nodesMax_ != nullptr;};
    void deleteNodesMax() { this->nodesMax_ = nullptr;};
    inline int32_t nodesMax() const { DARABONBA_PTR_GET_DEFAULT(nodesMax_, 0) };
    inline CreateAutoScalingConfigShrinkRequest& setNodesMax(int32_t nodesMax) { DARABONBA_PTR_SET_VALUE(nodesMax_, nodesMax) };


    // nodesMin Field Functions 
    bool hasNodesMin() const { return this->nodesMin_ != nullptr;};
    void deleteNodesMin() { this->nodesMin_ = nullptr;};
    inline int32_t nodesMin() const { DARABONBA_PTR_GET_DEFAULT(nodesMin_, 0) };
    inline CreateAutoScalingConfigShrinkRequest& setNodesMin(int32_t nodesMin) { DARABONBA_PTR_SET_VALUE(nodesMin_, nodesMin) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateAutoScalingConfigShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAutoScalingConfigShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAutoScalingConfigShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateAutoScalingConfigShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scaleRuleListShrink Field Functions 
    bool hasScaleRuleListShrink() const { return this->scaleRuleListShrink_ != nullptr;};
    void deleteScaleRuleListShrink() { this->scaleRuleListShrink_ = nullptr;};
    inline string scaleRuleListShrink() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleListShrink_, "") };
    inline CreateAutoScalingConfigShrinkRequest& setScaleRuleListShrink(string scaleRuleListShrink) { DARABONBA_PTR_SET_VALUE(scaleRuleListShrink_, scaleRuleListShrink) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string scaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline CreateAutoScalingConfigShrinkRequest& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateAutoScalingConfigShrinkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline string specId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
    inline CreateAutoScalingConfigShrinkRequest& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> configName_ = nullptr;
    std::shared_ptr<string> effectiveTimeEnd_ = nullptr;
    std::shared_ptr<string> effectiveTimeStart_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> engine_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> nodesMax_ = nullptr;
    std::shared_ptr<int32_t> nodesMin_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> scaleRuleListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scaleType_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> specId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
