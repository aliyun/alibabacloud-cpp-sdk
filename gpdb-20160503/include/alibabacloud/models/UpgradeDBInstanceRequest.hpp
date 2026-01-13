// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class UpgradeDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CacheStorageSize, cacheStorageSize_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceGroupCount, DBInstanceGroupCount_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(MasterNodeNum, masterNodeNum_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SegDiskPerformanceLevel, segDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(SegNodeNum, segNodeNum_);
      DARABONBA_PTR_TO_JSON(SegStorageType, segStorageType_);
      DARABONBA_PTR_TO_JSON(ServerlessResource, serverlessResource_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheStorageSize, cacheStorageSize_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceGroupCount, DBInstanceGroupCount_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(MasterNodeNum, masterNodeNum_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SegDiskPerformanceLevel, segDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(SegNodeNum, segNodeNum_);
      DARABONBA_PTR_FROM_JSON(SegStorageType, segStorageType_);
      DARABONBA_PTR_FROM_JSON(ServerlessResource, serverlessResource_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
    };
    UpgradeDBInstanceRequest() = default ;
    UpgradeDBInstanceRequest(const UpgradeDBInstanceRequest &) = default ;
    UpgradeDBInstanceRequest(UpgradeDBInstanceRequest &&) = default ;
    UpgradeDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDBInstanceRequest() = default ;
    UpgradeDBInstanceRequest& operator=(const UpgradeDBInstanceRequest &) = default ;
    UpgradeDBInstanceRequest& operator=(UpgradeDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheStorageSize_ == nullptr
        && this->DBInstanceClass_ == nullptr && this->DBInstanceGroupCount_ == nullptr && this->DBInstanceId_ == nullptr && this->instanceSpec_ == nullptr && this->masterNodeNum_ == nullptr
        && this->ownerId_ == nullptr && this->payType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->segDiskPerformanceLevel_ == nullptr
        && this->segNodeNum_ == nullptr && this->segStorageType_ == nullptr && this->serverlessResource_ == nullptr && this->storageSize_ == nullptr && this->upgradeType_ == nullptr; };
    // cacheStorageSize Field Functions 
    bool hasCacheStorageSize() const { return this->cacheStorageSize_ != nullptr;};
    void deleteCacheStorageSize() { this->cacheStorageSize_ = nullptr;};
    inline string getCacheStorageSize() const { DARABONBA_PTR_GET_DEFAULT(cacheStorageSize_, "") };
    inline UpgradeDBInstanceRequest& setCacheStorageSize(string cacheStorageSize) { DARABONBA_PTR_SET_VALUE(cacheStorageSize_, cacheStorageSize) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline UpgradeDBInstanceRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceGroupCount Field Functions 
    bool hasDBInstanceGroupCount() const { return this->DBInstanceGroupCount_ != nullptr;};
    void deleteDBInstanceGroupCount() { this->DBInstanceGroupCount_ = nullptr;};
    inline string getDBInstanceGroupCount() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceGroupCount_, "") };
    inline UpgradeDBInstanceRequest& setDBInstanceGroupCount(string DBInstanceGroupCount) { DARABONBA_PTR_SET_VALUE(DBInstanceGroupCount_, DBInstanceGroupCount) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpgradeDBInstanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline UpgradeDBInstanceRequest& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // masterNodeNum Field Functions 
    bool hasMasterNodeNum() const { return this->masterNodeNum_ != nullptr;};
    void deleteMasterNodeNum() { this->masterNodeNum_ = nullptr;};
    inline string getMasterNodeNum() const { DARABONBA_PTR_GET_DEFAULT(masterNodeNum_, "") };
    inline UpgradeDBInstanceRequest& setMasterNodeNum(string masterNodeNum) { DARABONBA_PTR_SET_VALUE(masterNodeNum_, masterNodeNum) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpgradeDBInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline UpgradeDBInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpgradeDBInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // segDiskPerformanceLevel Field Functions 
    bool hasSegDiskPerformanceLevel() const { return this->segDiskPerformanceLevel_ != nullptr;};
    void deleteSegDiskPerformanceLevel() { this->segDiskPerformanceLevel_ = nullptr;};
    inline string getSegDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(segDiskPerformanceLevel_, "") };
    inline UpgradeDBInstanceRequest& setSegDiskPerformanceLevel(string segDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(segDiskPerformanceLevel_, segDiskPerformanceLevel) };


    // segNodeNum Field Functions 
    bool hasSegNodeNum() const { return this->segNodeNum_ != nullptr;};
    void deleteSegNodeNum() { this->segNodeNum_ = nullptr;};
    inline string getSegNodeNum() const { DARABONBA_PTR_GET_DEFAULT(segNodeNum_, "") };
    inline UpgradeDBInstanceRequest& setSegNodeNum(string segNodeNum) { DARABONBA_PTR_SET_VALUE(segNodeNum_, segNodeNum) };


    // segStorageType Field Functions 
    bool hasSegStorageType() const { return this->segStorageType_ != nullptr;};
    void deleteSegStorageType() { this->segStorageType_ = nullptr;};
    inline string getSegStorageType() const { DARABONBA_PTR_GET_DEFAULT(segStorageType_, "") };
    inline UpgradeDBInstanceRequest& setSegStorageType(string segStorageType) { DARABONBA_PTR_SET_VALUE(segStorageType_, segStorageType) };


    // serverlessResource Field Functions 
    bool hasServerlessResource() const { return this->serverlessResource_ != nullptr;};
    void deleteServerlessResource() { this->serverlessResource_ = nullptr;};
    inline string getServerlessResource() const { DARABONBA_PTR_GET_DEFAULT(serverlessResource_, "") };
    inline UpgradeDBInstanceRequest& setServerlessResource(string serverlessResource) { DARABONBA_PTR_SET_VALUE(serverlessResource_, serverlessResource) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline string getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
    inline UpgradeDBInstanceRequest& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline int64_t getUpgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, 0L) };
    inline UpgradeDBInstanceRequest& setUpgradeType(int64_t upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


  protected:
    shared_ptr<string> cacheStorageSize_ {};
    // This parameter is no longer used.
    shared_ptr<string> DBInstanceClass_ {};
    // This parameter is no longer used.
    shared_ptr<string> DBInstanceGroupCount_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the IDs of all AnalyticDB for PostgreSQL instances within a region.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The specifications of each compute node. For information about the supported specifications, see [Instance specifications](https://help.aliyun.com/document_detail/35406.html).
    // 
    // > This parameter is available only for instances in elastic storage mode.
    shared_ptr<string> instanceSpec_ {};
    // This parameter is no longer used.
    shared_ptr<string> masterNodeNum_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is no longer used.
    shared_ptr<string> payType_ {};
    // The region ID of the instance.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the instance belongs. For information about how to obtain the ID of a resource group, see [View basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    // The performance level of Enterprise SSDs (ESSDs). Valid values:
    // 
    // *   **pl0**
    // *   **pl1**
    // *   **pl2**
    shared_ptr<string> segDiskPerformanceLevel_ {};
    // The number of compute nodes. The number of compute nodes varies based on the instance resource type and edition.
    // 
    // *   Valid values for High-availability Edition instances in elastic storage mode: 4 to 512, in 4 increments.
    // *   Valid values for High-performance Edition instances in elastic storage mode: 2 to 512, in 2 increments.
    // *   Valid values for instances in manual Serverless mode: 2 to 512, in 2 increments.
    shared_ptr<string> segNodeNum_ {};
    // The disk storage type of the instance after the change. The disk storage type can be changed only to ESSD. Set the value to **cloud_essd**.
    shared_ptr<string> segStorageType_ {};
    shared_ptr<string> serverlessResource_ {};
    // The storage capacity of each compute node. Unit: GB. Valid values: 50 to 6000, in 50 increments.
    // 
    // >  This parameter is available only for instances in elastic storage mode.
    shared_ptr<string> storageSize_ {};
    // The type of the instance configuration change. Valid values:
    // 
    // *   **0** (default): changes the number of compute nodes.
    // *   **1**: changes the specifications and storage capacity of each compute node.
    // *   **2**: changes the number of coordinator nodes.
    // *   **3**: changes the disk storage type and ESSD performance level of the instance.
    // 
    // > 
    // 
    // *   The supported changes to compute node configurations vary based on the instance resource type. For more information, see the "Usage notes" section of the [Change compute node configurations](https://help.aliyun.com/document_detail/50956.html) topic.
    // 
    // *   After you specify a change type, only the corresponding parameters take effect. For example, if you set **UpgradeType** to 0, the parameter that is used to change the number of compute nodes takes effect, but the parameter that is used to change the number of coordinator nodes does not.
    // *   The number of coordinator nodes can be changed only on the China site (aliyun.com).
    // *   The disk storage type can be changed only from ultra disks to ESSDs.
    shared_ptr<int64_t> upgradeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
