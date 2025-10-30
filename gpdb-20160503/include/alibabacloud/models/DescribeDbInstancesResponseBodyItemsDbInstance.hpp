// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSDBINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSDBINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstancesResponseBodyItemsDBInstanceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstancesResponseBodyItemsDBInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBodyItemsDBInstance& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceCategory, DBInstanceCategory_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceMode, DBInstanceMode_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceDeployType, instanceDeployType_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MasterNodeNum, masterNodeNum_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ProdType, prodType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SegNodeNum, segNodeNum_);
      DARABONBA_PTR_TO_JSON(ServerlessMode, serverlessMode_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBodyItemsDBInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceCategory, DBInstanceCategory_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceMode, DBInstanceMode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceDeployType, instanceDeployType_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MasterNodeNum, masterNodeNum_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ProdType, prodType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SegNodeNum, segNodeNum_);
      DARABONBA_PTR_FROM_JSON(ServerlessMode, serverlessMode_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstancesResponseBodyItemsDBInstance() = default ;
    DescribeDBInstancesResponseBodyItemsDBInstance(const DescribeDBInstancesResponseBodyItemsDBInstance &) = default ;
    DescribeDBInstancesResponseBodyItemsDBInstance(DescribeDBInstancesResponseBodyItemsDBInstance &&) = default ;
    DescribeDBInstancesResponseBodyItemsDBInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBodyItemsDBInstance() = default ;
    DescribeDBInstancesResponseBodyItemsDBInstance& operator=(const DescribeDBInstancesResponseBodyItemsDBInstance &) = default ;
    DescribeDBInstancesResponseBodyItemsDBInstance& operator=(DescribeDBInstancesResponseBodyItemsDBInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionMode_ == nullptr
        && return this->createTime_ == nullptr && return this->DBInstanceCategory_ == nullptr && return this->DBInstanceDescription_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBInstanceMode_ == nullptr
        && return this->DBInstanceNetType_ == nullptr && return this->DBInstanceStatus_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->expireTime_ == nullptr
        && return this->instanceDeployType_ == nullptr && return this->instanceNetworkType_ == nullptr && return this->lockMode_ == nullptr && return this->lockReason_ == nullptr && return this->masterNodeNum_ == nullptr
        && return this->payType_ == nullptr && return this->prodType_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->segNodeNum_ == nullptr
        && return this->serverlessMode_ == nullptr && return this->storageSize_ == nullptr && return this->storageType_ == nullptr && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // connectionMode Field Functions 
    bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
    void deleteConnectionMode() { this->connectionMode_ = nullptr;};
    inline string connectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBInstanceCategory Field Functions 
    bool hasDBInstanceCategory() const { return this->DBInstanceCategory_ != nullptr;};
    void deleteDBInstanceCategory() { this->DBInstanceCategory_ = nullptr;};
    inline string DBInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCategory_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceCategory(string DBInstanceCategory) { DARABONBA_PTR_SET_VALUE(DBInstanceCategory_, DBInstanceCategory) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceMode Field Functions 
    bool hasDBInstanceMode() const { return this->DBInstanceMode_ != nullptr;};
    void deleteDBInstanceMode() { this->DBInstanceMode_ = nullptr;};
    inline string DBInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceMode_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceMode(string DBInstanceMode) { DARABONBA_PTR_SET_VALUE(DBInstanceMode_, DBInstanceMode) };


    // DBInstanceNetType Field Functions 
    bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
    void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
    inline string DBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceDeployType Field Functions 
    bool hasInstanceDeployType() const { return this->instanceDeployType_ != nullptr;};
    void deleteInstanceDeployType() { this->instanceDeployType_ = nullptr;};
    inline string instanceDeployType() const { DARABONBA_PTR_GET_DEFAULT(instanceDeployType_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setInstanceDeployType(string instanceDeployType) { DARABONBA_PTR_SET_VALUE(instanceDeployType_, instanceDeployType) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // masterNodeNum Field Functions 
    bool hasMasterNodeNum() const { return this->masterNodeNum_ != nullptr;};
    void deleteMasterNodeNum() { this->masterNodeNum_ = nullptr;};
    inline int32_t masterNodeNum() const { DARABONBA_PTR_GET_DEFAULT(masterNodeNum_, 0) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setMasterNodeNum(int32_t masterNodeNum) { DARABONBA_PTR_SET_VALUE(masterNodeNum_, masterNodeNum) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // prodType Field Functions 
    bool hasProdType() const { return this->prodType_ != nullptr;};
    void deleteProdType() { this->prodType_ = nullptr;};
    inline string prodType() const { DARABONBA_PTR_GET_DEFAULT(prodType_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setProdType(string prodType) { DARABONBA_PTR_SET_VALUE(prodType_, prodType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // segNodeNum Field Functions 
    bool hasSegNodeNum() const { return this->segNodeNum_ != nullptr;};
    void deleteSegNodeNum() { this->segNodeNum_ = nullptr;};
    inline string segNodeNum() const { DARABONBA_PTR_GET_DEFAULT(segNodeNum_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setSegNodeNum(string segNodeNum) { DARABONBA_PTR_SET_VALUE(segNodeNum_, segNodeNum) };


    // serverlessMode Field Functions 
    bool hasServerlessMode() const { return this->serverlessMode_ != nullptr;};
    void deleteServerlessMode() { this->serverlessMode_ = nullptr;};
    inline string serverlessMode() const { DARABONBA_PTR_GET_DEFAULT(serverlessMode_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setServerlessMode(string serverlessMode) { DARABONBA_PTR_SET_VALUE(serverlessMode_, serverlessMode) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline string storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDBInstancesResponseBodyItemsDBInstanceTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDBInstancesResponseBodyItemsDBInstanceTags) };
    inline Models::DescribeDBInstancesResponseBodyItemsDBInstanceTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDBInstancesResponseBodyItemsDBInstanceTags) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setTags(const Models::DescribeDBInstancesResponseBodyItemsDBInstanceTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setTags(Models::DescribeDBInstancesResponseBodyItemsDBInstanceTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // An invalid parameter. It is no longer returned when you call this operation.
    // 
    // You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/86910.html) operation to query the access mode of an instance.
    std::shared_ptr<string> connectionMode_ = nullptr;
    // The time when the instance was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The edition of the instance. Valid values:
    // 
    // *   **Basic**: Basic Edition.
    // *   **HighAvailability**: High-availability Edition.
    // *   **Finance**: Enterprise Edition.
    std::shared_ptr<string> DBInstanceCategory_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The resource type of the instance. Valid values:
    // 
    // *   **Serverless**: Serverless mode.
    // *   **StorageElastic**: elastic storage mode.
    // *   **Classic**: reserved storage mode.
    std::shared_ptr<string> DBInstanceMode_ = nullptr;
    // The type of the network interface card (NIC) that is used by the instance. Valid values:
    // 
    // *   **0**: Internet.
    // *   **1**: internal network.
    // *   **2**: VPC.
    std::shared_ptr<string> DBInstanceNetType_ = nullptr;
    // The status of the instance. For more information, see [Instance statuses](https://help.aliyun.com/document_detail/86944.html).
    std::shared_ptr<string> DBInstanceStatus_ = nullptr;
    // The database engine of the instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version of the instance.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The expiration time of the instance. The time is displayed in UTC.
    // 
    // >  The expiration time of a pay-as-you-go instance is `2999-09-08T16:00:00Z`.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The resource type of the instance. Valid values:
    // 
    // *   **cluster**: Serverless mode or elastic storage mode.
    // *   **replicaSet**: reserved storage mode.
    std::shared_ptr<string> instanceDeployType_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   **Classic**: classic network.
    // *   **VPC**: VPC.
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // The lock mode of the instance. Valid values:
    // 
    // *   **Unlock**: The instance is not locked.
    // *   **ManualLock**: The instance is manually locked.
    // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
    // *   **LockByRestoration**: The instance is automatically locked due to instance restoration.
    // *   **LockByDiskQuota**: The instance is automatically locked due to exhausted storage.
    // *   **LockReadInstanceByDiskQuota**: The instance is a read-only instance and is automatically locked when the disk space is full.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The reason why the instance is locked. Valid values:
    // 
    // *   **0**: The instance is not locked.
    // *   **1**: The instance is manually locked.
    // *   **2**: The instance is automatically locked due to instance expiration.
    // *   **3**: The instance is automatically locked due to instance restoration.
    // *   **4**: The instance is automatically locked due to exhausted storage.
    // 
    // >  If the instance is in reserved storage mode and is not locked, null is returned.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The number of coordinator nodes.
    std::shared_ptr<int32_t> masterNodeNum_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    std::shared_ptr<string> payType_ = nullptr;
    // product type
    std::shared_ptr<string> prodType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The number of compute nodes.
    std::shared_ptr<string> segNodeNum_ = nullptr;
    // The type of the Serverless mode. Valid values:
    // 
    // *   **Manual**: manual scheduling.
    // *   **Auto**: automatic scheduling.
    // 
    // >  This parameter is returned only for instances in Serverless mode.
    std::shared_ptr<string> serverlessMode_ = nullptr;
    // The storage capacity of the instance. Unit: GB.
    std::shared_ptr<string> storageSize_ = nullptr;
    // The storage type of the instance. Valid values:
    // 
    // *   **cloud_essd**: enhanced SSD (ESSD).
    // *   **cloud_efficiency**: ultra disk.
    std::shared_ptr<string> storageType_ = nullptr;
    // The tags that are added to the instance.
    std::shared_ptr<Models::DescribeDBInstancesResponseBodyItemsDBInstanceTags> tags_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The VPC ID of the instance.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
