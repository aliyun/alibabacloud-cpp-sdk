// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyCloudAssistantSettingsRequestAgentUpgradeConfig.hpp>
#include <alibabacloud/models/ModifyCloudAssistantSettingsRequestOssDeliveryConfig.hpp>
#include <alibabacloud/models/ModifyCloudAssistantSettingsRequestSessionManagerConfig.hpp>
#include <alibabacloud/models/ModifyCloudAssistantSettingsRequestSlsDeliveryConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyCloudAssistantSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudAssistantSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentUpgradeConfig, agentUpgradeConfig_);
      DARABONBA_PTR_TO_JSON(OssDeliveryConfig, ossDeliveryConfig_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SessionManagerConfig, sessionManagerConfig_);
      DARABONBA_PTR_TO_JSON(SettingType, settingType_);
      DARABONBA_PTR_TO_JSON(SlsDeliveryConfig, slsDeliveryConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudAssistantSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentUpgradeConfig, agentUpgradeConfig_);
      DARABONBA_PTR_FROM_JSON(OssDeliveryConfig, ossDeliveryConfig_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SessionManagerConfig, sessionManagerConfig_);
      DARABONBA_PTR_FROM_JSON(SettingType, settingType_);
      DARABONBA_PTR_FROM_JSON(SlsDeliveryConfig, slsDeliveryConfig_);
    };
    ModifyCloudAssistantSettingsRequest() = default ;
    ModifyCloudAssistantSettingsRequest(const ModifyCloudAssistantSettingsRequest &) = default ;
    ModifyCloudAssistantSettingsRequest(ModifyCloudAssistantSettingsRequest &&) = default ;
    ModifyCloudAssistantSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudAssistantSettingsRequest() = default ;
    ModifyCloudAssistantSettingsRequest& operator=(const ModifyCloudAssistantSettingsRequest &) = default ;
    ModifyCloudAssistantSettingsRequest& operator=(ModifyCloudAssistantSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentUpgradeConfig_ != nullptr
        && this->ossDeliveryConfig_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->sessionManagerConfig_ != nullptr && this->settingType_ != nullptr && this->slsDeliveryConfig_ != nullptr; };
    // agentUpgradeConfig Field Functions 
    bool hasAgentUpgradeConfig() const { return this->agentUpgradeConfig_ != nullptr;};
    void deleteAgentUpgradeConfig() { this->agentUpgradeConfig_ = nullptr;};
    inline const ModifyCloudAssistantSettingsRequestAgentUpgradeConfig & agentUpgradeConfig() const { DARABONBA_PTR_GET_CONST(agentUpgradeConfig_, ModifyCloudAssistantSettingsRequestAgentUpgradeConfig) };
    inline ModifyCloudAssistantSettingsRequestAgentUpgradeConfig agentUpgradeConfig() { DARABONBA_PTR_GET(agentUpgradeConfig_, ModifyCloudAssistantSettingsRequestAgentUpgradeConfig) };
    inline ModifyCloudAssistantSettingsRequest& setAgentUpgradeConfig(const ModifyCloudAssistantSettingsRequestAgentUpgradeConfig & agentUpgradeConfig) { DARABONBA_PTR_SET_VALUE(agentUpgradeConfig_, agentUpgradeConfig) };
    inline ModifyCloudAssistantSettingsRequest& setAgentUpgradeConfig(ModifyCloudAssistantSettingsRequestAgentUpgradeConfig && agentUpgradeConfig) { DARABONBA_PTR_SET_RVALUE(agentUpgradeConfig_, agentUpgradeConfig) };


    // ossDeliveryConfig Field Functions 
    bool hasOssDeliveryConfig() const { return this->ossDeliveryConfig_ != nullptr;};
    void deleteOssDeliveryConfig() { this->ossDeliveryConfig_ = nullptr;};
    inline const ModifyCloudAssistantSettingsRequestOssDeliveryConfig & ossDeliveryConfig() const { DARABONBA_PTR_GET_CONST(ossDeliveryConfig_, ModifyCloudAssistantSettingsRequestOssDeliveryConfig) };
    inline ModifyCloudAssistantSettingsRequestOssDeliveryConfig ossDeliveryConfig() { DARABONBA_PTR_GET(ossDeliveryConfig_, ModifyCloudAssistantSettingsRequestOssDeliveryConfig) };
    inline ModifyCloudAssistantSettingsRequest& setOssDeliveryConfig(const ModifyCloudAssistantSettingsRequestOssDeliveryConfig & ossDeliveryConfig) { DARABONBA_PTR_SET_VALUE(ossDeliveryConfig_, ossDeliveryConfig) };
    inline ModifyCloudAssistantSettingsRequest& setOssDeliveryConfig(ModifyCloudAssistantSettingsRequestOssDeliveryConfig && ossDeliveryConfig) { DARABONBA_PTR_SET_RVALUE(ossDeliveryConfig_, ossDeliveryConfig) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyCloudAssistantSettingsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCloudAssistantSettingsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCloudAssistantSettingsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyCloudAssistantSettingsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyCloudAssistantSettingsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sessionManagerConfig Field Functions 
    bool hasSessionManagerConfig() const { return this->sessionManagerConfig_ != nullptr;};
    void deleteSessionManagerConfig() { this->sessionManagerConfig_ = nullptr;};
    inline const ModifyCloudAssistantSettingsRequestSessionManagerConfig & sessionManagerConfig() const { DARABONBA_PTR_GET_CONST(sessionManagerConfig_, ModifyCloudAssistantSettingsRequestSessionManagerConfig) };
    inline ModifyCloudAssistantSettingsRequestSessionManagerConfig sessionManagerConfig() { DARABONBA_PTR_GET(sessionManagerConfig_, ModifyCloudAssistantSettingsRequestSessionManagerConfig) };
    inline ModifyCloudAssistantSettingsRequest& setSessionManagerConfig(const ModifyCloudAssistantSettingsRequestSessionManagerConfig & sessionManagerConfig) { DARABONBA_PTR_SET_VALUE(sessionManagerConfig_, sessionManagerConfig) };
    inline ModifyCloudAssistantSettingsRequest& setSessionManagerConfig(ModifyCloudAssistantSettingsRequestSessionManagerConfig && sessionManagerConfig) { DARABONBA_PTR_SET_RVALUE(sessionManagerConfig_, sessionManagerConfig) };


    // settingType Field Functions 
    bool hasSettingType() const { return this->settingType_ != nullptr;};
    void deleteSettingType() { this->settingType_ = nullptr;};
    inline string settingType() const { DARABONBA_PTR_GET_DEFAULT(settingType_, "") };
    inline ModifyCloudAssistantSettingsRequest& setSettingType(string settingType) { DARABONBA_PTR_SET_VALUE(settingType_, settingType) };


    // slsDeliveryConfig Field Functions 
    bool hasSlsDeliveryConfig() const { return this->slsDeliveryConfig_ != nullptr;};
    void deleteSlsDeliveryConfig() { this->slsDeliveryConfig_ = nullptr;};
    inline const ModifyCloudAssistantSettingsRequestSlsDeliveryConfig & slsDeliveryConfig() const { DARABONBA_PTR_GET_CONST(slsDeliveryConfig_, ModifyCloudAssistantSettingsRequestSlsDeliveryConfig) };
    inline ModifyCloudAssistantSettingsRequestSlsDeliveryConfig slsDeliveryConfig() { DARABONBA_PTR_GET(slsDeliveryConfig_, ModifyCloudAssistantSettingsRequestSlsDeliveryConfig) };
    inline ModifyCloudAssistantSettingsRequest& setSlsDeliveryConfig(const ModifyCloudAssistantSettingsRequestSlsDeliveryConfig & slsDeliveryConfig) { DARABONBA_PTR_SET_VALUE(slsDeliveryConfig_, slsDeliveryConfig) };
    inline ModifyCloudAssistantSettingsRequest& setSlsDeliveryConfig(ModifyCloudAssistantSettingsRequestSlsDeliveryConfig && slsDeliveryConfig) { DARABONBA_PTR_SET_RVALUE(slsDeliveryConfig_, slsDeliveryConfig) };


  protected:
    // The configurations for upgrading Cloud Assistant Agent.
    std::shared_ptr<ModifyCloudAssistantSettingsRequestAgentUpgradeConfig> agentUpgradeConfig_ = nullptr;
    // The configurations for delivering records to Object Storage Service (OSS).
    std::shared_ptr<ModifyCloudAssistantSettingsRequestOssDeliveryConfig> ossDeliveryConfig_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Cloud Assistant Session Manager configuration.
    std::shared_ptr<ModifyCloudAssistantSettingsRequestSessionManagerConfig> sessionManagerConfig_ = nullptr;
    // The Cloud Assistant feature. Valid values:
    // 
    // *   SessionManagerDelivery: the Session Record Delivery configurations.
    // *   InvocationDelivery: the Operation Content and Result Delivery configurations.
    // *   AgentUpgradeConfig: the Cloud Assistant Agent Upgrade configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> settingType_ = nullptr;
    // The configurations for delivering records to Simple Log Service.
    std::shared_ptr<ModifyCloudAssistantSettingsRequestSlsDeliveryConfig> slsDeliveryConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
