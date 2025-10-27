// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLINDORMV2INSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLINDORMV2INSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyLindormV2InstanceRequestNodeGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ModifyLindormV2InstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLindormV2InstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudStorageSize, cloudStorageSize_);
      DARABONBA_PTR_TO_JSON(CloudStorageType, cloudStorageType_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeGroupList, nodeGroupList_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLindormV2InstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudStorageSize, cloudStorageSize_);
      DARABONBA_PTR_FROM_JSON(CloudStorageType, cloudStorageType_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupList, nodeGroupList_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
    };
    ModifyLindormV2InstanceRequest() = default ;
    ModifyLindormV2InstanceRequest(const ModifyLindormV2InstanceRequest &) = default ;
    ModifyLindormV2InstanceRequest(ModifyLindormV2InstanceRequest &&) = default ;
    ModifyLindormV2InstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLindormV2InstanceRequest() = default ;
    ModifyLindormV2InstanceRequest& operator=(const ModifyLindormV2InstanceRequest &) = default ;
    ModifyLindormV2InstanceRequest& operator=(ModifyLindormV2InstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudStorageSize_ == nullptr
        && return this->cloudStorageType_ == nullptr && return this->engineType_ == nullptr && return this->instanceId_ == nullptr && return this->nodeGroupList_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->securityToken_ == nullptr
        && return this->upgradeType_ == nullptr; };
    // cloudStorageSize Field Functions 
    bool hasCloudStorageSize() const { return this->cloudStorageSize_ != nullptr;};
    void deleteCloudStorageSize() { this->cloudStorageSize_ = nullptr;};
    inline int64_t cloudStorageSize() const { DARABONBA_PTR_GET_DEFAULT(cloudStorageSize_, 0L) };
    inline ModifyLindormV2InstanceRequest& setCloudStorageSize(int64_t cloudStorageSize) { DARABONBA_PTR_SET_VALUE(cloudStorageSize_, cloudStorageSize) };


    // cloudStorageType Field Functions 
    bool hasCloudStorageType() const { return this->cloudStorageType_ != nullptr;};
    void deleteCloudStorageType() { this->cloudStorageType_ = nullptr;};
    inline string cloudStorageType() const { DARABONBA_PTR_GET_DEFAULT(cloudStorageType_, "") };
    inline ModifyLindormV2InstanceRequest& setCloudStorageType(string cloudStorageType) { DARABONBA_PTR_SET_VALUE(cloudStorageType_, cloudStorageType) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline ModifyLindormV2InstanceRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyLindormV2InstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeGroupList Field Functions 
    bool hasNodeGroupList() const { return this->nodeGroupList_ != nullptr;};
    void deleteNodeGroupList() { this->nodeGroupList_ = nullptr;};
    inline const vector<ModifyLindormV2InstanceRequestNodeGroupList> & nodeGroupList() const { DARABONBA_PTR_GET_CONST(nodeGroupList_, vector<ModifyLindormV2InstanceRequestNodeGroupList>) };
    inline vector<ModifyLindormV2InstanceRequestNodeGroupList> nodeGroupList() { DARABONBA_PTR_GET(nodeGroupList_, vector<ModifyLindormV2InstanceRequestNodeGroupList>) };
    inline ModifyLindormV2InstanceRequest& setNodeGroupList(const vector<ModifyLindormV2InstanceRequestNodeGroupList> & nodeGroupList) { DARABONBA_PTR_SET_VALUE(nodeGroupList_, nodeGroupList) };
    inline ModifyLindormV2InstanceRequest& setNodeGroupList(vector<ModifyLindormV2InstanceRequestNodeGroupList> && nodeGroupList) { DARABONBA_PTR_SET_RVALUE(nodeGroupList_, nodeGroupList) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyLindormV2InstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyLindormV2InstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLindormV2InstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyLindormV2InstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyLindormV2InstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyLindormV2InstanceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline string upgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, "") };
    inline ModifyLindormV2InstanceRequest& setUpgradeType(string upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


  protected:
    std::shared_ptr<int64_t> cloudStorageSize_ = nullptr;
    std::shared_ptr<string> cloudStorageType_ = nullptr;
    std::shared_ptr<string> engineType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<ModifyLindormV2InstanceRequestNodeGroupList>> nodeGroupList_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> upgradeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
