// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class StartDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceTransType, DBInstanceTransType_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SpecifiedTime, specifiedTime_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(TargetDBInstanceClass, targetDBInstanceClass_);
      DARABONBA_PTR_TO_JSON(TargetDedicatedHostIdForLog, targetDedicatedHostIdForLog_);
      DARABONBA_PTR_TO_JSON(TargetDedicatedHostIdForMaster, targetDedicatedHostIdForMaster_);
      DARABONBA_PTR_TO_JSON(TargetDedicatedHostIdForSlave, targetDedicatedHostIdForSlave_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, StartDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceTransType, DBInstanceTransType_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SpecifiedTime, specifiedTime_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(TargetDBInstanceClass, targetDBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(TargetDedicatedHostIdForLog, targetDedicatedHostIdForLog_);
      DARABONBA_PTR_FROM_JSON(TargetDedicatedHostIdForMaster, targetDedicatedHostIdForMaster_);
      DARABONBA_PTR_FROM_JSON(TargetDedicatedHostIdForSlave, targetDedicatedHostIdForSlave_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    StartDBInstanceRequest() = default ;
    StartDBInstanceRequest(const StartDBInstanceRequest &) = default ;
    StartDBInstanceRequest(StartDBInstanceRequest &&) = default ;
    StartDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDBInstanceRequest() = default ;
    StartDBInstanceRequest& operator=(const StartDBInstanceRequest &) = default ;
    StartDBInstanceRequest& operator=(StartDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->DBInstanceTransType_ == nullptr && return this->dedicatedHostGroupId_ == nullptr && return this->effectiveTime_ == nullptr && return this->engineVersion_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->specifiedTime_ == nullptr && return this->storage_ == nullptr
        && return this->targetDBInstanceClass_ == nullptr && return this->targetDedicatedHostIdForLog_ == nullptr && return this->targetDedicatedHostIdForMaster_ == nullptr && return this->targetDedicatedHostIdForSlave_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->zoneId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline StartDBInstanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceTransType Field Functions 
    bool hasDBInstanceTransType() const { return this->DBInstanceTransType_ != nullptr;};
    void deleteDBInstanceTransType() { this->DBInstanceTransType_ = nullptr;};
    inline int32_t DBInstanceTransType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceTransType_, 0) };
    inline StartDBInstanceRequest& setDBInstanceTransType(int32_t DBInstanceTransType) { DARABONBA_PTR_SET_VALUE(DBInstanceTransType_, DBInstanceTransType) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string dedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline StartDBInstanceRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline StartDBInstanceRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline StartDBInstanceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartDBInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline StartDBInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline StartDBInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // specifiedTime Field Functions 
    bool hasSpecifiedTime() const { return this->specifiedTime_ != nullptr;};
    void deleteSpecifiedTime() { this->specifiedTime_ = nullptr;};
    inline string specifiedTime() const { DARABONBA_PTR_GET_DEFAULT(specifiedTime_, "") };
    inline StartDBInstanceRequest& setSpecifiedTime(string specifiedTime) { DARABONBA_PTR_SET_VALUE(specifiedTime_, specifiedTime) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline int32_t storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
    inline StartDBInstanceRequest& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    // targetDBInstanceClass Field Functions 
    bool hasTargetDBInstanceClass() const { return this->targetDBInstanceClass_ != nullptr;};
    void deleteTargetDBInstanceClass() { this->targetDBInstanceClass_ = nullptr;};
    inline string targetDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(targetDBInstanceClass_, "") };
    inline StartDBInstanceRequest& setTargetDBInstanceClass(string targetDBInstanceClass) { DARABONBA_PTR_SET_VALUE(targetDBInstanceClass_, targetDBInstanceClass) };


    // targetDedicatedHostIdForLog Field Functions 
    bool hasTargetDedicatedHostIdForLog() const { return this->targetDedicatedHostIdForLog_ != nullptr;};
    void deleteTargetDedicatedHostIdForLog() { this->targetDedicatedHostIdForLog_ = nullptr;};
    inline string targetDedicatedHostIdForLog() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForLog_, "") };
    inline StartDBInstanceRequest& setTargetDedicatedHostIdForLog(string targetDedicatedHostIdForLog) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForLog_, targetDedicatedHostIdForLog) };


    // targetDedicatedHostIdForMaster Field Functions 
    bool hasTargetDedicatedHostIdForMaster() const { return this->targetDedicatedHostIdForMaster_ != nullptr;};
    void deleteTargetDedicatedHostIdForMaster() { this->targetDedicatedHostIdForMaster_ = nullptr;};
    inline string targetDedicatedHostIdForMaster() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForMaster_, "") };
    inline StartDBInstanceRequest& setTargetDedicatedHostIdForMaster(string targetDedicatedHostIdForMaster) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForMaster_, targetDedicatedHostIdForMaster) };


    // targetDedicatedHostIdForSlave Field Functions 
    bool hasTargetDedicatedHostIdForSlave() const { return this->targetDedicatedHostIdForSlave_ != nullptr;};
    void deleteTargetDedicatedHostIdForSlave() { this->targetDedicatedHostIdForSlave_ = nullptr;};
    inline string targetDedicatedHostIdForSlave() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForSlave_, "") };
    inline StartDBInstanceRequest& setTargetDedicatedHostIdForSlave(string targetDedicatedHostIdForSlave) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForSlave_, targetDedicatedHostIdForSlave) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline StartDBInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline StartDBInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The data migration method of the instance. This parameter is available only for instances that are created in dedicated clusters. Valid values:
    // 
    // *   **0** (default): The system preferentially upgrades or downgrades the instance without a migration. If the resources on the host on which the instance resides are insufficient, the system migrates the instance to another suitable host.
    // *   **1**: The system upgrades or downgrades the instance without a migration. If the upgrade or downgrade is not supported, the system reports an error.
    // *   **2**: The system migrates the data of the instance from the host on which the instance resides to another host. You must also specify **DedicatedHostGroupId**, **TargetDedicatedHostIdForMaster**, and **TargetDedicatedHostIdForSlave**. If you set DBInstanceTransType to 2, you cannot migrate the data of the instance to the host on which the instance resides. If you migrate the data of the instance to the host on which the instance resides, the migration fails.
    std::shared_ptr<int32_t> DBInstanceTransType_ = nullptr;
    // The dedicated cluster ID. This parameter is supported if you call this operation to suspend an RDS instance in the dedicated cluster. You can call the DescribeDedicatedHostGroups operation to query the dedicated cluster ID.
    std::shared_ptr<string> dedicatedHostGroupId_ = nullptr;
    // The effective time. This parameter is available only for instances that are created in dedicated clusters.
    // 
    // *   **Immediate**
    // *   **MaintainTime**: The change takes effect during the planned maintenance window. For more information, see ModifyDBInstanceMaintainTime.
    // *   **SpecificTime**: The change takes effect at a specified point in time.
    // 
    // Default value: MaintainTime.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The database engine version of the instance. This parameter is available only for instances that are created in dedicated clusters.
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The switching time. This parameter is available only for instances that are created in dedicated clusters. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > This parameter must be specified when **EffectiveTime** is set to **Specified**.
    std::shared_ptr<string> specifiedTime_ = nullptr;
    // The storage capacity of the instance. This parameter is available only for instances that are created in dedicated clusters. Valid values: **5 to 2000**. Unit: GB. If you do not specify this parameter, the storage capacity of the instance remains unchanged.
    std::shared_ptr<int32_t> storage_ = nullptr;
    // The instance type of the required instance. This parameter is available only for instances that are created in dedicated clusters.
    std::shared_ptr<string> targetDBInstanceClass_ = nullptr;
    // A deprecated parameter. You do not need to specify this parameter.
    std::shared_ptr<string> targetDedicatedHostIdForLog_ = nullptr;
    // The ID of the host on which the primary instance is created. This parameter is available only for instances that are created in dedicated clusters.
    // 
    // > This parameter must be specified when **DBInstanceTransType** is set to **2**.
    std::shared_ptr<string> targetDedicatedHostIdForMaster_ = nullptr;
    // The ID of the host on which the secondary instance is created. This parameter is available only for instances that are created in dedicated clusters.
    // 
    // > This parameter must be specified when **DBInstanceTransType** is set to **2**.
    std::shared_ptr<string> targetDedicatedHostIdForSlave_ = nullptr;
    // The vSwitch ID. This parameter is available only for instances that are created in dedicated clusters.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID. This parameter is available only for instances that are created in dedicated clusters.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
