// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyCloudAssistantSettingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudAssistantSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentUpgradeConfig, agentUpgradeConfigShrink_);
      DARABONBA_PTR_TO_JSON(OssDeliveryConfig, ossDeliveryConfigShrink_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SessionManagerConfig, sessionManagerConfigShrink_);
      DARABONBA_PTR_TO_JSON(SettingType, settingType_);
      DARABONBA_PTR_TO_JSON(SlsDeliveryConfig, slsDeliveryConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudAssistantSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentUpgradeConfig, agentUpgradeConfigShrink_);
      DARABONBA_PTR_FROM_JSON(OssDeliveryConfig, ossDeliveryConfigShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SessionManagerConfig, sessionManagerConfigShrink_);
      DARABONBA_PTR_FROM_JSON(SettingType, settingType_);
      DARABONBA_PTR_FROM_JSON(SlsDeliveryConfig, slsDeliveryConfigShrink_);
    };
    ModifyCloudAssistantSettingsShrinkRequest() = default ;
    ModifyCloudAssistantSettingsShrinkRequest(const ModifyCloudAssistantSettingsShrinkRequest &) = default ;
    ModifyCloudAssistantSettingsShrinkRequest(ModifyCloudAssistantSettingsShrinkRequest &&) = default ;
    ModifyCloudAssistantSettingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudAssistantSettingsShrinkRequest() = default ;
    ModifyCloudAssistantSettingsShrinkRequest& operator=(const ModifyCloudAssistantSettingsShrinkRequest &) = default ;
    ModifyCloudAssistantSettingsShrinkRequest& operator=(ModifyCloudAssistantSettingsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentUpgradeConfigShrink_ != nullptr
        && this->ossDeliveryConfigShrink_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->sessionManagerConfigShrink_ != nullptr && this->settingType_ != nullptr && this->slsDeliveryConfigShrink_ != nullptr; };
    // agentUpgradeConfigShrink Field Functions 
    bool hasAgentUpgradeConfigShrink() const { return this->agentUpgradeConfigShrink_ != nullptr;};
    void deleteAgentUpgradeConfigShrink() { this->agentUpgradeConfigShrink_ = nullptr;};
    inline string agentUpgradeConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(agentUpgradeConfigShrink_, "") };
    inline ModifyCloudAssistantSettingsShrinkRequest& setAgentUpgradeConfigShrink(string agentUpgradeConfigShrink) { DARABONBA_PTR_SET_VALUE(agentUpgradeConfigShrink_, agentUpgradeConfigShrink) };


    // ossDeliveryConfigShrink Field Functions 
    bool hasOssDeliveryConfigShrink() const { return this->ossDeliveryConfigShrink_ != nullptr;};
    void deleteOssDeliveryConfigShrink() { this->ossDeliveryConfigShrink_ = nullptr;};
    inline string ossDeliveryConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(ossDeliveryConfigShrink_, "") };
    inline ModifyCloudAssistantSettingsShrinkRequest& setOssDeliveryConfigShrink(string ossDeliveryConfigShrink) { DARABONBA_PTR_SET_VALUE(ossDeliveryConfigShrink_, ossDeliveryConfigShrink) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyCloudAssistantSettingsShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCloudAssistantSettingsShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCloudAssistantSettingsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyCloudAssistantSettingsShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyCloudAssistantSettingsShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sessionManagerConfigShrink Field Functions 
    bool hasSessionManagerConfigShrink() const { return this->sessionManagerConfigShrink_ != nullptr;};
    void deleteSessionManagerConfigShrink() { this->sessionManagerConfigShrink_ = nullptr;};
    inline string sessionManagerConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(sessionManagerConfigShrink_, "") };
    inline ModifyCloudAssistantSettingsShrinkRequest& setSessionManagerConfigShrink(string sessionManagerConfigShrink) { DARABONBA_PTR_SET_VALUE(sessionManagerConfigShrink_, sessionManagerConfigShrink) };


    // settingType Field Functions 
    bool hasSettingType() const { return this->settingType_ != nullptr;};
    void deleteSettingType() { this->settingType_ = nullptr;};
    inline string settingType() const { DARABONBA_PTR_GET_DEFAULT(settingType_, "") };
    inline ModifyCloudAssistantSettingsShrinkRequest& setSettingType(string settingType) { DARABONBA_PTR_SET_VALUE(settingType_, settingType) };


    // slsDeliveryConfigShrink Field Functions 
    bool hasSlsDeliveryConfigShrink() const { return this->slsDeliveryConfigShrink_ != nullptr;};
    void deleteSlsDeliveryConfigShrink() { this->slsDeliveryConfigShrink_ = nullptr;};
    inline string slsDeliveryConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(slsDeliveryConfigShrink_, "") };
    inline ModifyCloudAssistantSettingsShrinkRequest& setSlsDeliveryConfigShrink(string slsDeliveryConfigShrink) { DARABONBA_PTR_SET_VALUE(slsDeliveryConfigShrink_, slsDeliveryConfigShrink) };


  protected:
    // The configurations for upgrading Cloud Assistant Agent.
    std::shared_ptr<string> agentUpgradeConfigShrink_ = nullptr;
    // The configurations for delivering records to Object Storage Service (OSS).
    std::shared_ptr<string> ossDeliveryConfigShrink_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Cloud Assistant Session Manager configuration.
    std::shared_ptr<string> sessionManagerConfigShrink_ = nullptr;
    // The Cloud Assistant feature. Valid values:
    // 
    // *   SessionManagerDelivery: the Session Record Delivery configurations.
    // *   InvocationDelivery: the Operation Content and Result Delivery configurations.
    // *   AgentUpgradeConfig: the Cloud Assistant Agent Upgrade configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> settingType_ = nullptr;
    // The configurations for delivering records to Simple Log Service.
    std::shared_ptr<string> slsDeliveryConfigShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
