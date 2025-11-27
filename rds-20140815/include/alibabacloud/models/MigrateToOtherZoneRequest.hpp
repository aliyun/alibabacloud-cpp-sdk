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
        && return this->customExtraInfo_ == nullptr && return this->DBInstanceClass_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBInstanceStorage_ == nullptr && return this->DBInstanceStorageType_ == nullptr
        && return this->effectiveTime_ == nullptr && return this->ioAccelerationEnabled_ == nullptr && return this->isModifySpec_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->switchTime_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->zoneId_ == nullptr && return this->zoneIdSlave1_ == nullptr && return this->zoneIdSlave2_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline MigrateToOtherZoneRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // customExtraInfo Field Functions 
    bool hasCustomExtraInfo() const { return this->customExtraInfo_ != nullptr;};
    void deleteCustomExtraInfo() { this->customExtraInfo_ = nullptr;};
    inline string customExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(customExtraInfo_, "") };
    inline MigrateToOtherZoneRequest& setCustomExtraInfo(string customExtraInfo) { DARABONBA_PTR_SET_VALUE(customExtraInfo_, customExtraInfo) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline MigrateToOtherZoneRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline MigrateToOtherZoneRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int64_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0L) };
    inline MigrateToOtherZoneRequest& setDBInstanceStorage(int64_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string DBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline MigrateToOtherZoneRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline MigrateToOtherZoneRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string ioAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline MigrateToOtherZoneRequest& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // isModifySpec Field Functions 
    bool hasIsModifySpec() const { return this->isModifySpec_ != nullptr;};
    void deleteIsModifySpec() { this->isModifySpec_ = nullptr;};
    inline string isModifySpec() const { DARABONBA_PTR_GET_DEFAULT(isModifySpec_, "") };
    inline MigrateToOtherZoneRequest& setIsModifySpec(string isModifySpec) { DARABONBA_PTR_SET_VALUE(isModifySpec_, isModifySpec) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline MigrateToOtherZoneRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline MigrateToOtherZoneRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline MigrateToOtherZoneRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline MigrateToOtherZoneRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string switchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline MigrateToOtherZoneRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline MigrateToOtherZoneRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline MigrateToOtherZoneRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline MigrateToOtherZoneRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdSlave1 Field Functions 
    bool hasZoneIdSlave1() const { return this->zoneIdSlave1_ != nullptr;};
    void deleteZoneIdSlave1() { this->zoneIdSlave1_ = nullptr;};
    inline string zoneIdSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave1_, "") };
    inline MigrateToOtherZoneRequest& setZoneIdSlave1(string zoneIdSlave1) { DARABONBA_PTR_SET_VALUE(zoneIdSlave1_, zoneIdSlave1) };


    // zoneIdSlave2 Field Functions 
    bool hasZoneIdSlave2() const { return this->zoneIdSlave2_ != nullptr;};
    void deleteZoneIdSlave2() { this->zoneIdSlave2_ = nullptr;};
    inline string zoneIdSlave2() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave2_, "") };
    inline MigrateToOtherZoneRequest& setZoneIdSlave2(string zoneIdSlave2) { DARABONBA_PTR_SET_VALUE(zoneIdSlave2_, zoneIdSlave2) };


  protected:
    // The RDS edition of the instance. Valid values:
    // 
    // *   **Basic**: RDS Basic Edition
    // *   **HighAvailability**: RDS High-availability Edition
    // *   **AlwaysOn**: SQL Server on RDS Cluster Edition
    // *   **cluster**: MySQL on RDS Cluster Edition
    // *   **Finance**: RDS Enterprise Edition
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> customExtraInfo_ = nullptr;
    // The new instance type of the instance. You can change the instance type of the instance. You cannot change the storage type of the instance. If you set **IsModifySpec** to **true**, you must specify at least one of DBInstanceClass and **DBInstanceStorage**.
    // 
    // For more information about instance types, see [Primary ApsaraDB RDS for MySQL instance types](https://help.aliyun.com/document_detail/276975.html).
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The new storage capacity of the instance. If you set **IsModifySpec** to **true**, you must specify at least one of DBInstanceStorage and **DBInstanceClass**.
    // 
    // Unit: GB. The available storage capacity range varies based on the instance type of the instance. For more information, see [Primary ApsaraDB RDS for MySQL instance types](https://help.aliyun.com/document_detail/276975.html).
    std::shared_ptr<int64_t> DBInstanceStorage_ = nullptr;
    // The storage type of the instance. Valid values:
    // 
    // *   **local_ssd**: local SSD. This is the recommended storage type.
    // *   **general_essd**: general Enterprise SSD (ESSD). This is the recommended storage type.
    // *   **cloud_essd**: PL1 ESSD
    // *   **cloud_essd2**: PL2 ESSD
    // *   **cloud_essd3**: PL3 ESSD
    // *   **cloud_ssd**: standard SSD. This storage type is not recommended. Standard SSDs are no longer available for purchase in some Alibaba Cloud regions.
    // 
    // The default value of this parameter is determined by the instance type specified by the **DBInstanceClass** parameter.
    // 
    // *   If the instance type specifies the local SSD storage type, the default value of this parameter is **local_ssd**.
    // *   If the instance type specifies the standard SSD or ESSD storage type, the default value of this parameter is **cloud_essd**.
    // 
    // >  Serverless instances support only PL1 ESSDs and general ESSDs.
    std::shared_ptr<string> DBInstanceStorageType_ = nullptr;
    // The time when you want the change to take effect. Valid values:
    // 
    // *   **Immediately** (default): The change immediately takes effect.
    // *   **MaintainTime**: The change takes effect during the maintenance window. For more information, see ModifyDBInstanceMaintainTime.
    // *   **ScheduleTime**: The change takes effect at the point in time that you specify.
    // 
    // >  If you set this parameter to **ScheduleTime**, you must specify the **SwitchTime** parameter.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> ioAccelerationEnabled_ = nullptr;
    // Specifies whether to change the specifications of the instance during the cross-zone migration. Valid values:
    // 
    // *   **true**: You want to change the specifications of the instance during the cross-zone migration. If you set this parameter to **true**, you must specify at least one of **DBInstanceClass** and **DBInstanceStorage**.
    // *   **false** (default): You do not want to change the specifications of the instance during the cross-zone migration.
    // 
    // > This parameter applies only to instances that run MySQL.
    std::shared_ptr<string> isModifySpec_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The migration time. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // > This parameter is used with **EffectiveTime**. You must specify this parameter only when **EffectiveTime** is set to **ScheduleTime**.
    std::shared_ptr<string> switchTime_ = nullptr;
    // The ID of the virtual private cloud (VPC). Do not change the VPC of the instance when you migrate the instance across zones.
    // 
    // *   This parameter must be specified when the instance resides in a VPC.
    // *   If the instance runs SQL Server, you can change the VPC of the instance.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID.
    // 
    // *   This parameter must be specified when the instance resides in a VPC. You can call the DescribeVSwitches operation to query existing vSwitches.
    // *   If the instance runs PostgreSQL or SQL Server and a secondary zone is specified for the instance, you can specify multiple vSwitch IDs, each of which corresponds to a zone. Separate the vSwitch IDs with commas (,).
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the destination zone. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The secondary zone 1 of the instance.
    // 
    // >  This parameter must be configured if the instance runs RDS editions other than RDS Basic Edition.
    std::shared_ptr<string> zoneIdSlave1_ = nullptr;
    // The secondary zone 2 of the instance.
    // 
    // >  You can specify this parameter only for instances that run RDS Enterprise Edition.
    std::shared_ptr<string> zoneIdSlave2_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
