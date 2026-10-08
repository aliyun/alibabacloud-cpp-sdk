// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATETOOTHERZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATETOOTHERZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class MigrateToOtherZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateToOtherZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CustomExtraInfo, customExtraInfo_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_TO_JSON(IsModifySpec, isModifySpec_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave1, zoneIdSlave1_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave2, zoneIdSlave2_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateToOtherZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CustomExtraInfo, customExtraInfo_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_FROM_JSON(IsModifySpec, isModifySpec_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave1, zoneIdSlave1_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave2, zoneIdSlave2_);
    };
    MigrateToOtherZoneRequest() = default ;
    MigrateToOtherZoneRequest(const MigrateToOtherZoneRequest &) = default ;
    MigrateToOtherZoneRequest(MigrateToOtherZoneRequest &&) = default ;
    MigrateToOtherZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateToOtherZoneRequest() = default ;
    MigrateToOtherZoneRequest& operator=(const MigrateToOtherZoneRequest &) = default ;
    MigrateToOtherZoneRequest& operator=(MigrateToOtherZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->customExtraInfo_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr
        && this->effectiveTime_ == nullptr && this->ioAccelerationEnabled_ == nullptr && this->isModifySpec_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->switchTime_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr && this->zoneIdSlave1_ == nullptr && this->zoneIdSlave2_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline MigrateToOtherZoneRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // customExtraInfo Field Functions 
    bool hasCustomExtraInfo() const { return this->customExtraInfo_ != nullptr;};
    void deleteCustomExtraInfo() { this->customExtraInfo_ = nullptr;};
    inline string getCustomExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(customExtraInfo_, "") };
    inline MigrateToOtherZoneRequest& setCustomExtraInfo(string customExtraInfo) { DARABONBA_PTR_SET_VALUE(customExtraInfo_, customExtraInfo) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline MigrateToOtherZoneRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline MigrateToOtherZoneRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int64_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0L) };
    inline MigrateToOtherZoneRequest& setDBInstanceStorage(int64_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline MigrateToOtherZoneRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline MigrateToOtherZoneRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string getIoAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline MigrateToOtherZoneRequest& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // isModifySpec Field Functions 
    bool hasIsModifySpec() const { return this->isModifySpec_ != nullptr;};
    void deleteIsModifySpec() { this->isModifySpec_ = nullptr;};
    inline string getIsModifySpec() const { DARABONBA_PTR_GET_DEFAULT(isModifySpec_, "") };
    inline MigrateToOtherZoneRequest& setIsModifySpec(string isModifySpec) { DARABONBA_PTR_SET_VALUE(isModifySpec_, isModifySpec) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline MigrateToOtherZoneRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline MigrateToOtherZoneRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline MigrateToOtherZoneRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline MigrateToOtherZoneRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline MigrateToOtherZoneRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline MigrateToOtherZoneRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline MigrateToOtherZoneRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline MigrateToOtherZoneRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdSlave1 Field Functions 
    bool hasZoneIdSlave1() const { return this->zoneIdSlave1_ != nullptr;};
    void deleteZoneIdSlave1() { this->zoneIdSlave1_ = nullptr;};
    inline string getZoneIdSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave1_, "") };
    inline MigrateToOtherZoneRequest& setZoneIdSlave1(string zoneIdSlave1) { DARABONBA_PTR_SET_VALUE(zoneIdSlave1_, zoneIdSlave1) };


    // zoneIdSlave2 Field Functions 
    bool hasZoneIdSlave2() const { return this->zoneIdSlave2_ != nullptr;};
    void deleteZoneIdSlave2() { this->zoneIdSlave2_ = nullptr;};
    inline string getZoneIdSlave2() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave2_, "") };
    inline MigrateToOtherZoneRequest& setZoneIdSlave2(string zoneIdSlave2) { DARABONBA_PTR_SET_VALUE(zoneIdSlave2_, zoneIdSlave2) };


  protected:
    // The instance edition. Valid values:
    // 
    // * **Basic**: Basic Edition
    // * **HighAvailability**: High-availability Edition
    // * **AlwaysOn**: SQL Server Cluster Edition
    // * **cluster**: MySQL Cluster Edition
    // * **Finance**: RDS Enterprise Edition
    shared_ptr<string> category_ {};
    shared_ptr<string> customExtraInfo_ {};
    // The target instance type of the destination instance. Only the instance type can be changed. The storage type cannot be changed.
    // When the **IsModifySpec** parameter settings require **true**, you must specify at least one of this parameter and **DBInstanceStorage**.
    // 
    // For more information about instance types, see [Primary ApsaraDB RDS for MySQL instance types](https://help.aliyun.com/document_detail/276975.html).
    shared_ptr<string> DBInstanceClass_ {};
    // The instance ID. You can call DescribeDBInstances to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The destination storage capacity. When the **IsModifySpec** parameter settings require **true**, you must specify at least one of this parameter and **DBInstanceClass**.
    // 
    // Unit: GB.
    // Valid values: The storage capacity varies based on the instance type. For more information, see [Primary ApsaraDB RDS for MySQL instance types](https://help.aliyun.com/document_detail/276975.html).
    shared_ptr<int64_t> DBInstanceStorage_ {};
    // The instance storage type. Valid values:
    // - cloud_essd: PL1 ESSD cloud disk.
    // - cloud_essd2: PL2 ESSD cloud disk.
    // - cloud_essd3: PL3 ESSD cloud disk.
    // - cloud_ssd: standard SSD (not recommended because standard SSDs are no longer available for purchase in some regions).
    shared_ptr<string> DBInstanceStorageType_ {};
    // The effective period. Valid values:
    // * **Immediate**: The migration takes effect immediately. This is the default value.
    // * **MaintainTime**: The migration takes effect during the maintenance window. For more information, see ModifyDBInstanceMaintainTime.
    // * **ScheduleTime**: The migration takes effect at a custom time.
    // 
    // > If you set this parameter to **ScheduleTime**, you must also specify the **SwitchTime** parameter.
    shared_ptr<string> effectiveTime_ {};
    // Specifies whether to enable the Buffer Pool Extension (BPE) feature for premium performance disks. Valid values:
    // 
    //  - **1**: Enable.
    //  - **0**: Disable.
    // 
    // > For more information about the BPE feature, see [Buffer Pool Extension (BPE)](https://help.aliyun.com/document_detail/2527067.html).
    shared_ptr<string> ioAccelerationEnabled_ {};
    // Specifies whether to change the instance specifications during zone migration.
    // 
    // - **true**: Change the specifications. When this parameter is set to **true**, you must specify at least one of the **DBInstanceClass** and **DBInstanceStorage** parameters.
    // - **false**: Do not change the specifications. This is the default value.
    // 
    // > This parameter is applicable only to ApsaraDB RDS for MySQL instances.
    shared_ptr<string> isModifySpec_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The custom time at which the zone switch takes effect. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
    // > This parameter is used together with the **EffectiveTime** parameter and is required only when **EffectiveTime** is set to **ScheduleTime**.
    shared_ptr<string> switchTime_ {};
    // The virtual private cloud (VPC) ID. The VPC cannot be changed during instance migration and must remain the same.
    // 
    // - This parameter is required when you migrate a VPC-connected instance to a different zone.
    // - If the instance engine is SQL Server, the VPC can be changed during instance migration.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID.
    // - This parameter is required when you migrate a VPC-connected instance to a different zone. You can invoke DescribeVSwitches to query the vSwitches that have been created.
    // - When you perform instance migration for an ApsaraDB RDS for PostgreSQL or SQL Server instance to a different zone with a secondary zone configured, you can specify multiple vSwitch IDs separated by commas (,), corresponding to the zones.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the destination zone. You can call DescribeRegions to query the zone ID.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
    // The secondary zone 1.
    // > This parameter is required for instances that are not of the Basic Edition.
    shared_ptr<string> zoneIdSlave1_ {};
    // The secondary zone 2.
    // > This parameter is applicable only to RDS Enterprise Edition instances.
    shared_ptr<string> zoneIdSlave2_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
