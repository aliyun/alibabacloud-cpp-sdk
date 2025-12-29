// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABILITYZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABILITYZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeAvailabilityZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailabilityZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExcludeSecondaryZoneId, excludeSecondaryZoneId_);
      DARABONBA_PTR_TO_JSON(ExcludeZoneId, excludeZoneId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MongoType, mongoType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicationFactor, replicationFactor_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StorageSupport, storageSupport_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailabilityZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExcludeSecondaryZoneId, excludeSecondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(ExcludeZoneId, excludeZoneId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MongoType, mongoType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicationFactor, replicationFactor_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StorageSupport, storageSupport_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAvailabilityZonesRequest() = default ;
    DescribeAvailabilityZonesRequest(const DescribeAvailabilityZonesRequest &) = default ;
    DescribeAvailabilityZonesRequest(DescribeAvailabilityZonesRequest &&) = default ;
    DescribeAvailabilityZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailabilityZonesRequest() = default ;
    DescribeAvailabilityZonesRequest& operator=(const DescribeAvailabilityZonesRequest &) = default ;
    DescribeAvailabilityZonesRequest& operator=(DescribeAvailabilityZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->DBInstanceClass_ == nullptr && this->dbType_ == nullptr && this->engineVersion_ == nullptr && this->excludeSecondaryZoneId_ == nullptr && this->excludeZoneId_ == nullptr
        && this->instanceChargeType_ == nullptr && this->instanceType_ == nullptr && this->mongoType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->replicationFactor_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->storageSupport_ == nullptr && this->storageType_ == nullptr && this->zoneId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DescribeAvailabilityZonesRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline DescribeAvailabilityZonesRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeAvailabilityZonesRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeAvailabilityZonesRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // excludeSecondaryZoneId Field Functions 
    bool hasExcludeSecondaryZoneId() const { return this->excludeSecondaryZoneId_ != nullptr;};
    void deleteExcludeSecondaryZoneId() { this->excludeSecondaryZoneId_ = nullptr;};
    inline string getExcludeSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(excludeSecondaryZoneId_, "") };
    inline DescribeAvailabilityZonesRequest& setExcludeSecondaryZoneId(string excludeSecondaryZoneId) { DARABONBA_PTR_SET_VALUE(excludeSecondaryZoneId_, excludeSecondaryZoneId) };


    // excludeZoneId Field Functions 
    bool hasExcludeZoneId() const { return this->excludeZoneId_ != nullptr;};
    void deleteExcludeZoneId() { this->excludeZoneId_ = nullptr;};
    inline string getExcludeZoneId() const { DARABONBA_PTR_GET_DEFAULT(excludeZoneId_, "") };
    inline DescribeAvailabilityZonesRequest& setExcludeZoneId(string excludeZoneId) { DARABONBA_PTR_SET_VALUE(excludeZoneId_, excludeZoneId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeAvailabilityZonesRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeAvailabilityZonesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // mongoType Field Functions 
    bool hasMongoType() const { return this->mongoType_ != nullptr;};
    void deleteMongoType() { this->mongoType_ = nullptr;};
    inline string getMongoType() const { DARABONBA_PTR_GET_DEFAULT(mongoType_, "") };
    inline DescribeAvailabilityZonesRequest& setMongoType(string mongoType) { DARABONBA_PTR_SET_VALUE(mongoType_, mongoType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeAvailabilityZonesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeAvailabilityZonesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailabilityZonesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicationFactor Field Functions 
    bool hasReplicationFactor() const { return this->replicationFactor_ != nullptr;};
    void deleteReplicationFactor() { this->replicationFactor_ = nullptr;};
    inline string getReplicationFactor() const { DARABONBA_PTR_GET_DEFAULT(replicationFactor_, "") };
    inline DescribeAvailabilityZonesRequest& setReplicationFactor(string replicationFactor) { DARABONBA_PTR_SET_VALUE(replicationFactor_, replicationFactor) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeAvailabilityZonesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeAvailabilityZonesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAvailabilityZonesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // storageSupport Field Functions 
    bool hasStorageSupport() const { return this->storageSupport_ != nullptr;};
    void deleteStorageSupport() { this->storageSupport_ = nullptr;};
    inline string getStorageSupport() const { DARABONBA_PTR_GET_DEFAULT(storageSupport_, "") };
    inline DescribeAvailabilityZonesRequest& setStorageSupport(string storageSupport) { DARABONBA_PTR_SET_VALUE(storageSupport_, storageSupport) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeAvailabilityZonesRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAvailabilityZonesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The language of the returned **RegionName** and **ZoneName** parameter values. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    shared_ptr<string> acceptLanguage_ {};
    // The instance type of the instance.
    shared_ptr<string> DBInstanceClass_ {};
    // The architecture of the instance. Valid values:
    // 
    // *   **normal**: replica set instance
    // *   **sharding**: sharded cluster instance
    shared_ptr<string> dbType_ {};
    // The database engine version of the instance.
    shared_ptr<string> engineVersion_ {};
    // The secondary zone ID that is excluded from the query results. You can configure the ExcludeZoneId and ExcludeSecondaryZoneId parameters to specify the IDs of multiple zones that are excluded from the query results.
    shared_ptr<string> excludeSecondaryZoneId_ {};
    // The zone ID that is excluded from the query results.
    shared_ptr<string> excludeZoneId_ {};
    // The billing method of the product. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid:** pay-as-you-go
    shared_ptr<string> instanceChargeType_ {};
    // The architecture of the instance. Valid values:
    // 
    // *   **sharding**: sharded cluster instance
    // *   **replicate**: replica set or standalone instance
    shared_ptr<string> instanceType_ {};
    // The edition of the instance. High-Available Edition and Preview Edition (dbfs) are supported.
    shared_ptr<string> mongoType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the latest available regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The number of nodes in the instance.
    // 
    // >  This parameter is available only for replica set instances.
    // 
    // Valid values:
    // 
    // *   1
    // *   3
    // *   5
    // *   7
    shared_ptr<string> replicationFactor_ {};
    // The ID of the resource group. For more information, see [View basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The storage type. Valid values:
    // 
    // *   **cloud**: displays only zones available for instances that use cloud disks.
    // *   **local**: only displays zones available for instances that use local disks instances.
    // *   **default** or unspecified: displays zones available for instances that use cloud disks and those that use local disks.
    shared_ptr<string> storageSupport_ {};
    // The storage type. Valid values:
    // 
    // *   **cloud_essd1**: PL1 Enterprise SSDs (ESSDs)
    // *   **cloud_essd2**: PL2 ESSDs
    // *   **cloud_essd3**: PL3 ESSDs
    // *   **local_ssd**: local SSDs
    // 
    // > *   Instances that run MongoDB 4.4 or later only use cloud disks to store data. If you do not specify this parameter, the value **cloud_essd1** is used by default.
    // > *   Instances that run MongoDB 4.2 and earlier only use local disks to store data. If you do not specify this parameter, the value **local_ssd** is used by default.
    shared_ptr<string> storageType_ {};
    // The zone ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query available zones.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
