// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class ModifyDBClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(DBClusterCategory, DBClusterCategory_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeGroupCount, DBNodeGroupCount_);
      DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_TO_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(ElasticIOResource, elasticIOResource_);
      DARABONBA_PTR_TO_JSON(ElasticIOResourceSize, elasticIOResourceSize_);
      DARABONBA_PTR_TO_JSON(ExecutorCount, executorCount_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(DBClusterCategory, DBClusterCategory_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeGroupCount, DBNodeGroupCount_);
      DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_FROM_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(ElasticIOResource, elasticIOResource_);
      DARABONBA_PTR_FROM_JSON(ElasticIOResourceSize, elasticIOResourceSize_);
      DARABONBA_PTR_FROM_JSON(ExecutorCount, executorCount_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
    };
    ModifyDBClusterRequest() = default ;
    ModifyDBClusterRequest(const ModifyDBClusterRequest &) = default ;
    ModifyDBClusterRequest(ModifyDBClusterRequest &&) = default ;
    ModifyDBClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterRequest() = default ;
    ModifyDBClusterRequest& operator=(const ModifyDBClusterRequest &) = default ;
    ModifyDBClusterRequest& operator=(ModifyDBClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeResource_ != nullptr
        && this->DBClusterCategory_ != nullptr && this->DBClusterId_ != nullptr && this->DBNodeClass_ != nullptr && this->DBNodeGroupCount_ != nullptr && this->DBNodeStorage_ != nullptr
        && this->diskPerformanceLevel_ != nullptr && this->elasticIOResource_ != nullptr && this->elasticIOResourceSize_ != nullptr && this->executorCount_ != nullptr && this->mode_ != nullptr
        && this->modifyType_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->storageResource_ != nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline string computeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
    inline ModifyDBClusterRequest& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


    // DBClusterCategory Field Functions 
    bool hasDBClusterCategory() const { return this->DBClusterCategory_ != nullptr;};
    void deleteDBClusterCategory() { this->DBClusterCategory_ = nullptr;};
    inline string DBClusterCategory() const { DARABONBA_PTR_GET_DEFAULT(DBClusterCategory_, "") };
    inline ModifyDBClusterRequest& setDBClusterCategory(string DBClusterCategory) { DARABONBA_PTR_SET_VALUE(DBClusterCategory_, DBClusterCategory) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline ModifyDBClusterRequest& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeGroupCount Field Functions 
    bool hasDBNodeGroupCount() const { return this->DBNodeGroupCount_ != nullptr;};
    void deleteDBNodeGroupCount() { this->DBNodeGroupCount_ = nullptr;};
    inline string DBNodeGroupCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeGroupCount_, "") };
    inline ModifyDBClusterRequest& setDBNodeGroupCount(string DBNodeGroupCount) { DARABONBA_PTR_SET_VALUE(DBNodeGroupCount_, DBNodeGroupCount) };


    // DBNodeStorage Field Functions 
    bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
    void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
    inline string DBNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStorage_, "") };
    inline ModifyDBClusterRequest& setDBNodeStorage(string DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };


    // diskPerformanceLevel Field Functions 
    bool hasDiskPerformanceLevel() const { return this->diskPerformanceLevel_ != nullptr;};
    void deleteDiskPerformanceLevel() { this->diskPerformanceLevel_ = nullptr;};
    inline string diskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(diskPerformanceLevel_, "") };
    inline ModifyDBClusterRequest& setDiskPerformanceLevel(string diskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(diskPerformanceLevel_, diskPerformanceLevel) };


    // elasticIOResource Field Functions 
    bool hasElasticIOResource() const { return this->elasticIOResource_ != nullptr;};
    void deleteElasticIOResource() { this->elasticIOResource_ = nullptr;};
    inline int32_t elasticIOResource() const { DARABONBA_PTR_GET_DEFAULT(elasticIOResource_, 0) };
    inline ModifyDBClusterRequest& setElasticIOResource(int32_t elasticIOResource) { DARABONBA_PTR_SET_VALUE(elasticIOResource_, elasticIOResource) };


    // elasticIOResourceSize Field Functions 
    bool hasElasticIOResourceSize() const { return this->elasticIOResourceSize_ != nullptr;};
    void deleteElasticIOResourceSize() { this->elasticIOResourceSize_ = nullptr;};
    inline string elasticIOResourceSize() const { DARABONBA_PTR_GET_DEFAULT(elasticIOResourceSize_, "") };
    inline ModifyDBClusterRequest& setElasticIOResourceSize(string elasticIOResourceSize) { DARABONBA_PTR_SET_VALUE(elasticIOResourceSize_, elasticIOResourceSize) };


    // executorCount Field Functions 
    bool hasExecutorCount() const { return this->executorCount_ != nullptr;};
    void deleteExecutorCount() { this->executorCount_ = nullptr;};
    inline string executorCount() const { DARABONBA_PTR_GET_DEFAULT(executorCount_, "") };
    inline ModifyDBClusterRequest& setExecutorCount(string executorCount) { DARABONBA_PTR_SET_VALUE(executorCount_, executorCount) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ModifyDBClusterRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string modifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline ModifyDBClusterRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // storageResource Field Functions 
    bool hasStorageResource() const { return this->storageResource_ != nullptr;};
    void deleteStorageResource() { this->storageResource_ = nullptr;};
    inline string storageResource() const { DARABONBA_PTR_GET_DEFAULT(storageResource_, "") };
    inline ModifyDBClusterRequest& setStorageResource(string storageResource) { DARABONBA_PTR_SET_VALUE(storageResource_, storageResource) };


  protected:
    // The computing resources of the cluster. You can call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/190632.html) operation to query the computing resources that are available within a region.
    // 
    // > This parameter must be specified when Mode is set to Flexible.
    std::shared_ptr<string> computeResource_ = nullptr;
    // The edition of the cluster. Valid values:
    // 
    // *   **Cluster**: reserved mode for Cluster Edition.
    // *   **MixedStorage**: elastic mode for Cluster Edition.
    // 
    // > If you set DBClusterCategory to Cluster, you must set Mode to Reserver. If you set DBClusterCategory to MixedStorage, you must set Mode to Flexible. Otherwise, you fail to change the specifications of the cluster.
    std::shared_ptr<string> DBClusterCategory_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The node specifications of the cluster. Valid values:
    // 
    // *   **C8**
    // *   **C32**
    // 
    // > This parameter must be specified when Mode is set to Reserver.
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    // The number of node groups. Valid values: 1 to 200.
    // 
    // > This parameter must be specified when Mode is set to Reserver.
    std::shared_ptr<string> DBNodeGroupCount_ = nullptr;
    // The storage capacity per node. Unit: GB.
    // 
    // *   Valid values when DBClusterClass is set to C8: 100 to 2000.
    // *   Valid values when DBClusterClass is set to C32: 100 to 8000.
    // 
    // > 
    // 
    // *   This parameter must be specified when Mode is set to Reserver.
    // 
    // *   The storage capacity less than 1,000 GB increases in 100 GB increments. The storage capacity greater than 1,000 GB increases in 1,000 GB increments.
    std::shared_ptr<string> DBNodeStorage_ = nullptr;
    // The Enterprise SSD (ESSD) performance level of the cluster. Valid values:
    // 
    // *   PL0
    // *   PL1
    // *   PL2
    // *   PL3
    std::shared_ptr<string> diskPerformanceLevel_ = nullptr;
    // The number of EIUs. The number of EIUs that you can purchase varies based on the single-node EIU specifications.
    // 
    // *   If the single-node EIU specifications are 8 cores and 64 GB, you can purchase up to 32 EIUs.
    // *   If the single-node EIU specifications are 12 cores and 96 GB, you can purchase up to 16 EIUs.
    std::shared_ptr<int32_t> elasticIOResource_ = nullptr;
    // The single-node specifications of an elastic I/O unit (EIU). Valid values:
    // 
    // *   **8Core64GB**: If you set the parameter to **8Core64GB**, the specifications of an EIU are 24 cores and 192 GB memory.
    // *   **12Core96GB**: If you set the parameter to **12Core96GB**, the specifications of an EIU are 36 cores and 288 GB memory.
    // 
    // >  This parameter takes effect only when your cluster meets the following requirements:
    // 
    // *   The cluster is in elastic mode.
    // 
    // *   If the cluster resides in the China (Guangzhou), China (Shenzhen), China (Hangzhou), China (Shanghai), China (Qingdao), China (Beijing), or China (Zhangjiakou) region, the cluster has 16 cores and 64 GB memory or higher specifications.
    // 
    // *   If the cluster resides in another region, the cluster has 32 cores and 128 GB memory or higher specifications.
    std::shared_ptr<string> elasticIOResourceSize_ = nullptr;
    // N/A
    std::shared_ptr<string> executorCount_ = nullptr;
    // The mode of the cluster. Valid values:
    // 
    // *   **Reserver**: the reserved mode.
    // *   **Flexible**: the elastic mode.
    std::shared_ptr<string> mode_ = nullptr;
    // The change type. Valid values:
    // 
    // *   **Upgrade**
    // *   **Downgrade**
    std::shared_ptr<string> modifyType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the cluster. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // N/A
    std::shared_ptr<string> storageResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
