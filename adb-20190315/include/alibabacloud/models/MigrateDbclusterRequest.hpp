// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEDBCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class MigrateDBClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateDBClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductForm, productForm_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(ReservedNodeCount, reservedNodeCount_);
      DARABONBA_PTR_TO_JSON(ReservedNodeSize, reservedNodeSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecondaryVSwitchId, secondaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_TO_JSON(ShardNumber, shardNumber_);
      DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_TO_JSON(StorageResourceSize, storageResourceSize_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateDBClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductForm, productForm_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeCount, reservedNodeCount_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeSize, reservedNodeSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecondaryVSwitchId, secondaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(ShardNumber, shardNumber_);
      DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_FROM_JSON(StorageResourceSize, storageResourceSize_);
    };
    MigrateDBClusterRequest() = default ;
    MigrateDBClusterRequest(const MigrateDBClusterRequest &) = default ;
    MigrateDBClusterRequest(MigrateDBClusterRequest &&) = default ;
    MigrateDBClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateDBClusterRequest() = default ;
    MigrateDBClusterRequest& operator=(const MigrateDBClusterRequest &) = default ;
    MigrateDBClusterRequest& operator=(MigrateDBClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeResource_ != nullptr
        && this->DBClusterId_ != nullptr && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->productForm_ != nullptr
        && this->productVersion_ != nullptr && this->reservedNodeCount_ != nullptr && this->reservedNodeSize_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->secondaryVSwitchId_ != nullptr && this->secondaryZoneId_ != nullptr && this->shardNumber_ != nullptr && this->storageResource_ != nullptr && this->storageResourceSize_ != nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline string computeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
    inline MigrateDBClusterRequest& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline MigrateDBClusterRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline MigrateDBClusterRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline MigrateDBClusterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline MigrateDBClusterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productForm Field Functions 
    bool hasProductForm() const { return this->productForm_ != nullptr;};
    void deleteProductForm() { this->productForm_ = nullptr;};
    inline string productForm() const { DARABONBA_PTR_GET_DEFAULT(productForm_, "") };
    inline MigrateDBClusterRequest& setProductForm(string productForm) { DARABONBA_PTR_SET_VALUE(productForm_, productForm) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline MigrateDBClusterRequest& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // reservedNodeCount Field Functions 
    bool hasReservedNodeCount() const { return this->reservedNodeCount_ != nullptr;};
    void deleteReservedNodeCount() { this->reservedNodeCount_ = nullptr;};
    inline int32_t reservedNodeCount() const { DARABONBA_PTR_GET_DEFAULT(reservedNodeCount_, 0) };
    inline MigrateDBClusterRequest& setReservedNodeCount(int32_t reservedNodeCount) { DARABONBA_PTR_SET_VALUE(reservedNodeCount_, reservedNodeCount) };


    // reservedNodeSize Field Functions 
    bool hasReservedNodeSize() const { return this->reservedNodeSize_ != nullptr;};
    void deleteReservedNodeSize() { this->reservedNodeSize_ = nullptr;};
    inline string reservedNodeSize() const { DARABONBA_PTR_GET_DEFAULT(reservedNodeSize_, "") };
    inline MigrateDBClusterRequest& setReservedNodeSize(string reservedNodeSize) { DARABONBA_PTR_SET_VALUE(reservedNodeSize_, reservedNodeSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline MigrateDBClusterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline MigrateDBClusterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // secondaryVSwitchId Field Functions 
    bool hasSecondaryVSwitchId() const { return this->secondaryVSwitchId_ != nullptr;};
    void deleteSecondaryVSwitchId() { this->secondaryVSwitchId_ = nullptr;};
    inline string secondaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(secondaryVSwitchId_, "") };
    inline MigrateDBClusterRequest& setSecondaryVSwitchId(string secondaryVSwitchId) { DARABONBA_PTR_SET_VALUE(secondaryVSwitchId_, secondaryVSwitchId) };


    // secondaryZoneId Field Functions 
    bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
    void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
    inline string secondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
    inline MigrateDBClusterRequest& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


    // shardNumber Field Functions 
    bool hasShardNumber() const { return this->shardNumber_ != nullptr;};
    void deleteShardNumber() { this->shardNumber_ = nullptr;};
    inline string shardNumber() const { DARABONBA_PTR_GET_DEFAULT(shardNumber_, "") };
    inline MigrateDBClusterRequest& setShardNumber(string shardNumber) { DARABONBA_PTR_SET_VALUE(shardNumber_, shardNumber) };


    // storageResource Field Functions 
    bool hasStorageResource() const { return this->storageResource_ != nullptr;};
    void deleteStorageResource() { this->storageResource_ = nullptr;};
    inline string storageResource() const { DARABONBA_PTR_GET_DEFAULT(storageResource_, "") };
    inline MigrateDBClusterRequest& setStorageResource(string storageResource) { DARABONBA_PTR_SET_VALUE(storageResource_, storageResource) };


    // storageResourceSize Field Functions 
    bool hasStorageResourceSize() const { return this->storageResourceSize_ != nullptr;};
    void deleteStorageResourceSize() { this->storageResourceSize_ = nullptr;};
    inline string storageResourceSize() const { DARABONBA_PTR_GET_DEFAULT(storageResourceSize_, "") };
    inline MigrateDBClusterRequest& setStorageResourceSize(string storageResourceSize) { DARABONBA_PTR_SET_VALUE(storageResourceSize_, storageResourceSize) };


  protected:
    // The amount of reserved computing resources.
    // Valid values: 0ACU to 4096ACU. Step size: 16. Each AnalyticDB compute unit (ACU) is approximately equal to 1 core and 4 GB memory.
    std::shared_ptr<string> computeResource_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> productForm_ = nullptr;
    std::shared_ptr<string> productVersion_ = nullptr;
    std::shared_ptr<int32_t> reservedNodeCount_ = nullptr;
    std::shared_ptr<string> reservedNodeSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> secondaryVSwitchId_ = nullptr;
    std::shared_ptr<string> secondaryZoneId_ = nullptr;
    // The number of shards that you want to change during the data migration.
    std::shared_ptr<string> shardNumber_ = nullptr;
    // The amount of reserved storage resources. Valid values: 0ACU to 2064ACU. The value must be in increments of the number of ACUs specified by the StorageResourceSize parameter × 3 (default value: 24ACU). Each ACU is approximately equal to 1 core and 4 GB memory.
    // 
    // >  This parameter must be specified with a unit.
    std::shared_ptr<string> storageResource_ = nullptr;
    // The node specifications of reserved storage resources. Valid values: 8ACU, 12ACU, and 16ACU.
    std::shared_ptr<string> storageResourceSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
