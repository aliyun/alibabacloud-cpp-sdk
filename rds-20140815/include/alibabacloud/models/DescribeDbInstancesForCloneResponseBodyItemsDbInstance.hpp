// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESFORCLONERESPONSEBODYITEMSDBINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESFORCLONERESPONSEBODYITEMSDBINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesForCloneResponseBodyItemsDBInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesForCloneResponseBodyItemsDBInstance& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_TO_JSON(DestroyTime, destroyTime_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GuardDBInstanceId, guardDBInstanceId_);
      DARABONBA_PTR_TO_JSON(InsId, insId_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_TO_JSON(MutriORsignle, mutriORsignle_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicateId, replicateId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TempDBInstanceId, tempDBInstanceId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesForCloneResponseBodyItemsDBInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_FROM_JSON(DestroyTime, destroyTime_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GuardDBInstanceId, guardDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(InsId, insId_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_FROM_JSON(MutriORsignle, mutriORsignle_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicateId, replicateId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TempDBInstanceId, tempDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstancesForCloneResponseBodyItemsDBInstance() = default ;
    DescribeDBInstancesForCloneResponseBodyItemsDBInstance(const DescribeDBInstancesForCloneResponseBodyItemsDBInstance &) = default ;
    DescribeDBInstancesForCloneResponseBodyItemsDBInstance(DescribeDBInstancesForCloneResponseBodyItemsDBInstance &&) = default ;
    DescribeDBInstancesForCloneResponseBodyItemsDBInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesForCloneResponseBodyItemsDBInstance() = default ;
    DescribeDBInstancesForCloneResponseBodyItemsDBInstance& operator=(const DescribeDBInstancesForCloneResponseBodyItemsDBInstance &) = default ;
    DescribeDBInstancesForCloneResponseBodyItemsDBInstance& operator=(DescribeDBInstancesForCloneResponseBodyItemsDBInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->connectionMode_ == nullptr && return this->createTime_ == nullptr && return this->DBInstanceClass_ == nullptr && return this->DBInstanceDescription_ == nullptr && return this->DBInstanceId_ == nullptr
        && return this->DBInstanceNetType_ == nullptr && return this->DBInstanceStatus_ == nullptr && return this->DBInstanceStorageType_ == nullptr && return this->DBInstanceType_ == nullptr && return this->destroyTime_ == nullptr
        && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->expireTime_ == nullptr && return this->guardDBInstanceId_ == nullptr && return this->insId_ == nullptr
        && return this->instanceNetworkType_ == nullptr && return this->lockMode_ == nullptr && return this->lockReason_ == nullptr && return this->masterInstanceId_ == nullptr && return this->mutriORsignle_ == nullptr
        && return this->payType_ == nullptr && return this->readOnlyDBInstanceIds_ == nullptr && return this->regionId_ == nullptr && return this->replicateId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->tempDBInstanceId_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcCloudInstanceId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // connectionMode Field Functions 
    bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
    void deleteConnectionMode() { this->connectionMode_ = nullptr;};
    inline string connectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceNetType Field Functions 
    bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
    void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
    inline string DBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string DBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // DBInstanceType Field Functions 
    bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
    void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
    inline string DBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


    // destroyTime Field Functions 
    bool hasDestroyTime() const { return this->destroyTime_ != nullptr;};
    void deleteDestroyTime() { this->destroyTime_ = nullptr;};
    inline string destroyTime() const { DARABONBA_PTR_GET_DEFAULT(destroyTime_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setDestroyTime(string destroyTime) { DARABONBA_PTR_SET_VALUE(destroyTime_, destroyTime) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // guardDBInstanceId Field Functions 
    bool hasGuardDBInstanceId() const { return this->guardDBInstanceId_ != nullptr;};
    void deleteGuardDBInstanceId() { this->guardDBInstanceId_ = nullptr;};
    inline string guardDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(guardDBInstanceId_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setGuardDBInstanceId(string guardDBInstanceId) { DARABONBA_PTR_SET_VALUE(guardDBInstanceId_, guardDBInstanceId) };


    // insId Field Functions 
    bool hasInsId() const { return this->insId_ != nullptr;};
    void deleteInsId() { this->insId_ = nullptr;};
    inline int32_t insId() const { DARABONBA_PTR_GET_DEFAULT(insId_, 0) };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setInsId(int32_t insId) { DARABONBA_PTR_SET_VALUE(insId_, insId) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // masterInstanceId Field Functions 
    bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
    void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
    inline string masterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


    // mutriORsignle Field Functions 
    bool hasMutriORsignle() const { return this->mutriORsignle_ != nullptr;};
    void deleteMutriORsignle() { this->mutriORsignle_ = nullptr;};
    inline bool mutriORsignle() const { DARABONBA_PTR_GET_DEFAULT(mutriORsignle_, false) };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setMutriORsignle(bool mutriORsignle) { DARABONBA_PTR_SET_VALUE(mutriORsignle_, mutriORsignle) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // readOnlyDBInstanceIds Field Functions 
    bool hasReadOnlyDBInstanceIds() const { return this->readOnlyDBInstanceIds_ != nullptr;};
    void deleteReadOnlyDBInstanceIds() { this->readOnlyDBInstanceIds_ = nullptr;};
    inline const Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds & readOnlyDBInstanceIds() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceIds_, Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds) };
    inline Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds readOnlyDBInstanceIds() { DARABONBA_PTR_GET(readOnlyDBInstanceIds_, Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds) };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setReadOnlyDBInstanceIds(const Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds & readOnlyDBInstanceIds) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setReadOnlyDBInstanceIds(Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds && readOnlyDBInstanceIds) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicateId Field Functions 
    bool hasReplicateId() const { return this->replicateId_ != nullptr;};
    void deleteReplicateId() { this->replicateId_ = nullptr;};
    inline string replicateId() const { DARABONBA_PTR_GET_DEFAULT(replicateId_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setReplicateId(string replicateId) { DARABONBA_PTR_SET_VALUE(replicateId_, replicateId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tempDBInstanceId Field Functions 
    bool hasTempDBInstanceId() const { return this->tempDBInstanceId_ != nullptr;};
    void deleteTempDBInstanceId() { this->tempDBInstanceId_ = nullptr;};
    inline string tempDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(tempDBInstanceId_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setTempDBInstanceId(string tempDBInstanceId) { DARABONBA_PTR_SET_VALUE(tempDBInstanceId_, tempDBInstanceId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcCloudInstanceId Field Functions 
    bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
    void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
    inline string vpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstancesForCloneResponseBodyItemsDBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The RDS edition of the instance. Valid values:
    // 
    // *   **Basic**: RDS Basic Edition
    // *   **HighAvailability**: RDS High-availability Edition
    // *   **Finance**: RDS Enterprise Edition
    std::shared_ptr<string> category_ = nullptr;
    // The connection mode of the instance. Valid values:
    // 
    // *   **Standard**: standard mode
    // *   **Safe**: database proxy mode
    std::shared_ptr<string> connectionMode_ = nullptr;
    // The time when the instance was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The instance type of the instance. For more information, see [Instance types](https://help.aliyun.com/document_detail/26312.html).
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // The name of the instance. It must be 2 to 256 characters in length. The value can contain letters, digits, underscores (_), and hyphens (-). The value must start with a letter.
    // 
    // > The value cannot start with http:// or https://.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The network connection type of the instance. Valid values:
    // 
    // *   **Internet**
    // *   **Intranet**
    std::shared_ptr<string> DBInstanceNetType_ = nullptr;
    // The status of the instance. For more information, see [Instance state table](https://help.aliyun.com/document_detail/26315.html).
    std::shared_ptr<string> DBInstanceStatus_ = nullptr;
    // The storage type of the instance. Valid values:
    // 
    // *   **local_ssd/ephemeral_ssd**: local SSD
    // *   **cloud_ssd**: standard SSD.
    // *   **cloud_essd**: enhanced SSD (ESSD)
    std::shared_ptr<string> DBInstanceStorageType_ = nullptr;
    // The role of the instance. Valid values:
    // 
    // *   **Primary**: primary instance
    // *   **Readonly**: read-only instance
    // *   **Guard**: disaster recovery instance
    // *   **Temp**: temporary instance
    std::shared_ptr<string> DBInstanceType_ = nullptr;
    // The time when the instance was destroyed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> destroyTime_ = nullptr;
    // The database engine of the instance. Valid values:
    // 
    // *   MySQL
    // *   SQLServer
    // *   PostgreSQL
    // *   PPAS
    // *   MariaDB
    std::shared_ptr<string> engine_ = nullptr;
    // The version of the database engine.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The time when the instance expired. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The ID of the disaster recovery instance. This parameter is returned only when the instance is a primary instance and has a disaster recovery instance.
    std::shared_ptr<string> guardDBInstanceId_ = nullptr;
    // The ID of the instance role.
    std::shared_ptr<int32_t> insId_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   **Classic**
    // *   **VPC**
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // The lock method of the instance. Valid values:
    // 
    // *   **Unlock**: The instance is not locked.
    // *   **ManualLock**: The instance is manually locked.
    // *   **LockByExpiration**: The instance is automatically locked after it expires.
    // *   **LockByRestoration**: The instance is automatically locked before a rollback.
    // *   **LockByDiskQuota**: The instance is automatically locked because its storage capacity is exhausted and the instance is inaccessible.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The reason why the instance was locked.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The ID of the primary instance. If the value of this parameter is null, the instance is a primary instance.
    std::shared_ptr<string> masterInstanceId_ = nullptr;
    // Indicates whether multi-region deployment is used. Valid values:
    // 
    // *   **true**: Multi-region deployment is used.
    // *   **false**: Multi-region deployment is not used.
    std::shared_ptr<bool> mutriORsignle_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go
    // *   **Prepaid**: subscription
    std::shared_ptr<string> payType_ = nullptr;
    // An array consisting of the IDs of the read-only instances that are attached to the primary instance.
    std::shared_ptr<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstanceReadOnlyDBInstanceIds> readOnlyDBInstanceIds_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // None.
    std::shared_ptr<string> replicateId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the temporary instance.
    std::shared_ptr<string> tempDBInstanceId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the instance in the VPC.
    std::shared_ptr<string> vpcCloudInstanceId_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID of the instance.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
