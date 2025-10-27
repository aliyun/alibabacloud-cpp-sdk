// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADELINDORMV2STREAMENGINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADELINDORMV2STREAMENGINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class UpgradeLindormV2StreamEngineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeLindormV2StreamEngineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomConfig, customConfig_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(SpecId, specId_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeLindormV2StreamEngineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomConfig, customConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(SpecId, specId_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
    };
    UpgradeLindormV2StreamEngineRequest() = default ;
    UpgradeLindormV2StreamEngineRequest(const UpgradeLindormV2StreamEngineRequest &) = default ;
    UpgradeLindormV2StreamEngineRequest(UpgradeLindormV2StreamEngineRequest &&) = default ;
    UpgradeLindormV2StreamEngineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeLindormV2StreamEngineRequest() = default ;
    UpgradeLindormV2StreamEngineRequest& operator=(const UpgradeLindormV2StreamEngineRequest &) = default ;
    UpgradeLindormV2StreamEngineRequest& operator=(UpgradeLindormV2StreamEngineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customConfig_ == nullptr
        && return this->instanceId_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->quantity_ == nullptr && return this->resourceGroupName_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->securityToken_ == nullptr && return this->spec_ == nullptr && return this->specId_ == nullptr
        && return this->upgradeType_ == nullptr; };
    // customConfig Field Functions 
    bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
    void deleteCustomConfig() { this->customConfig_ = nullptr;};
    inline string customConfig() const { DARABONBA_PTR_GET_DEFAULT(customConfig_, "") };
    inline UpgradeLindormV2StreamEngineRequest& setCustomConfig(string customConfig) { DARABONBA_PTR_SET_VALUE(customConfig_, customConfig) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpgradeLindormV2StreamEngineRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpgradeLindormV2StreamEngineRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpgradeLindormV2StreamEngineRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline UpgradeLindormV2StreamEngineRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline UpgradeLindormV2StreamEngineRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpgradeLindormV2StreamEngineRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeLindormV2StreamEngineRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpgradeLindormV2StreamEngineRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline UpgradeLindormV2StreamEngineRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline string specId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
    inline UpgradeLindormV2StreamEngineRequest& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline string upgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, "") };
    inline UpgradeLindormV2StreamEngineRequest& setUpgradeType(string upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


  protected:
    std::shared_ptr<string> customConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> quantity_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spec_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> specId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> upgradeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
