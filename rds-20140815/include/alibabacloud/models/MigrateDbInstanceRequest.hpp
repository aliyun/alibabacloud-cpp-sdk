// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class MigrateDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SpecifiedTime, specifiedTime_);
      DARABONBA_PTR_TO_JSON(TargetDedicatedHostIdForMaster, targetDedicatedHostIdForMaster_);
      DARABONBA_PTR_TO_JSON(TargetDedicatedHostIdForSlave, targetDedicatedHostIdForSlave_);
      DARABONBA_PTR_TO_JSON(ZoneIdForFollower, zoneIdForFollower_);
      DARABONBA_PTR_TO_JSON(ZoneIdForLog, zoneIdForLog_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SpecifiedTime, specifiedTime_);
      DARABONBA_PTR_FROM_JSON(TargetDedicatedHostIdForMaster, targetDedicatedHostIdForMaster_);
      DARABONBA_PTR_FROM_JSON(TargetDedicatedHostIdForSlave, targetDedicatedHostIdForSlave_);
      DARABONBA_PTR_FROM_JSON(ZoneIdForFollower, zoneIdForFollower_);
      DARABONBA_PTR_FROM_JSON(ZoneIdForLog, zoneIdForLog_);
    };
    MigrateDBInstanceRequest() = default ;
    MigrateDBInstanceRequest(const MigrateDBInstanceRequest &) = default ;
    MigrateDBInstanceRequest(MigrateDBInstanceRequest &&) = default ;
    MigrateDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateDBInstanceRequest() = default ;
    MigrateDBInstanceRequest& operator=(const MigrateDBInstanceRequest &) = default ;
    MigrateDBInstanceRequest& operator=(MigrateDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->dedicatedHostGroupId_ == nullptr && return this->effectiveTime_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->specifiedTime_ == nullptr && return this->targetDedicatedHostIdForMaster_ == nullptr && return this->targetDedicatedHostIdForSlave_ == nullptr && return this->zoneIdForFollower_ == nullptr
        && return this->zoneIdForLog_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline MigrateDBInstanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string dedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline MigrateDBInstanceRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline MigrateDBInstanceRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline MigrateDBInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline MigrateDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline MigrateDBInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline MigrateDBInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // specifiedTime Field Functions 
    bool hasSpecifiedTime() const { return this->specifiedTime_ != nullptr;};
    void deleteSpecifiedTime() { this->specifiedTime_ = nullptr;};
    inline string specifiedTime() const { DARABONBA_PTR_GET_DEFAULT(specifiedTime_, "") };
    inline MigrateDBInstanceRequest& setSpecifiedTime(string specifiedTime) { DARABONBA_PTR_SET_VALUE(specifiedTime_, specifiedTime) };


    // targetDedicatedHostIdForMaster Field Functions 
    bool hasTargetDedicatedHostIdForMaster() const { return this->targetDedicatedHostIdForMaster_ != nullptr;};
    void deleteTargetDedicatedHostIdForMaster() { this->targetDedicatedHostIdForMaster_ = nullptr;};
    inline string targetDedicatedHostIdForMaster() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForMaster_, "") };
    inline MigrateDBInstanceRequest& setTargetDedicatedHostIdForMaster(string targetDedicatedHostIdForMaster) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForMaster_, targetDedicatedHostIdForMaster) };


    // targetDedicatedHostIdForSlave Field Functions 
    bool hasTargetDedicatedHostIdForSlave() const { return this->targetDedicatedHostIdForSlave_ != nullptr;};
    void deleteTargetDedicatedHostIdForSlave() { this->targetDedicatedHostIdForSlave_ = nullptr;};
    inline string targetDedicatedHostIdForSlave() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForSlave_, "") };
    inline MigrateDBInstanceRequest& setTargetDedicatedHostIdForSlave(string targetDedicatedHostIdForSlave) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForSlave_, targetDedicatedHostIdForSlave) };


    // zoneIdForFollower Field Functions 
    bool hasZoneIdForFollower() const { return this->zoneIdForFollower_ != nullptr;};
    void deleteZoneIdForFollower() { this->zoneIdForFollower_ = nullptr;};
    inline string zoneIdForFollower() const { DARABONBA_PTR_GET_DEFAULT(zoneIdForFollower_, "") };
    inline MigrateDBInstanceRequest& setZoneIdForFollower(string zoneIdForFollower) { DARABONBA_PTR_SET_VALUE(zoneIdForFollower_, zoneIdForFollower) };


    // zoneIdForLog Field Functions 
    bool hasZoneIdForLog() const { return this->zoneIdForLog_ != nullptr;};
    void deleteZoneIdForLog() { this->zoneIdForLog_ = nullptr;};
    inline string zoneIdForLog() const { DARABONBA_PTR_GET_DEFAULT(zoneIdForLog_, "") };
    inline MigrateDBInstanceRequest& setZoneIdForLog(string zoneIdForLog) { DARABONBA_PTR_SET_VALUE(zoneIdForLog_, zoneIdForLog) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The dedicated cluster ID. You can call the DescribeDedicatedHostGroups operation to query the dedicated cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dedicatedHostGroupId_ = nullptr;
    // The time when you want the system to start the migration. Valid values:
    // 
    // *   **Immediately**: The system immediately starts the migration. This is the default value.
    // *   **MaintainTime**: The system starts the migration during the specified maintenance window.
    // *   **Specified**: The system starts the migration at the specified point in time.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The point in time when you want the system to start the migration. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // > This parameter must be specified when you set **EffectiveTime** to **Specified**.
    std::shared_ptr<string> specifiedTime_ = nullptr;
    // The ID of the host to which you want to migrate the primary instance. You can call the DescribeDedicatedHosts operation to query the host ID.
    std::shared_ptr<string> targetDedicatedHostIdForMaster_ = nullptr;
    // The ID of the host to which you want to migrate the secondary instance. You can call the DescribeDedicatedHosts operation to query the host ID.
    std::shared_ptr<string> targetDedicatedHostIdForSlave_ = nullptr;
    // The zone ID of the secondary node.
    std::shared_ptr<string> zoneIdForFollower_ = nullptr;
    // The zone ID of the logger instance.
    std::shared_ptr<string> zoneIdForLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
