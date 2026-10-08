// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEMAJORVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEMAJORVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class UpgradeDBInstanceMajorVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBInstanceMajorVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowDDL, allowDDL_);
      DARABONBA_PTR_TO_JSON(CollectStatMode, collectStatMode_);
      DARABONBA_PTR_TO_JSON(CustomExtraInfo, customExtraInfo_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SwitchOver, switchOver_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(SwitchTimeMode, switchTimeMode_);
      DARABONBA_PTR_TO_JSON(TargetMajorVersion, targetMajorVersion_);
      DARABONBA_PTR_TO_JSON(UpgradeMode, upgradeMode_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave1, zoneIdSlave1_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave2, zoneIdSlave2_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDBInstanceMajorVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowDDL, allowDDL_);
      DARABONBA_PTR_FROM_JSON(CollectStatMode, collectStatMode_);
      DARABONBA_PTR_FROM_JSON(CustomExtraInfo, customExtraInfo_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SwitchOver, switchOver_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(SwitchTimeMode, switchTimeMode_);
      DARABONBA_PTR_FROM_JSON(TargetMajorVersion, targetMajorVersion_);
      DARABONBA_PTR_FROM_JSON(UpgradeMode, upgradeMode_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave1, zoneIdSlave1_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave2, zoneIdSlave2_);
    };
    UpgradeDBInstanceMajorVersionRequest() = default ;
    UpgradeDBInstanceMajorVersionRequest(const UpgradeDBInstanceMajorVersionRequest &) = default ;
    UpgradeDBInstanceMajorVersionRequest(UpgradeDBInstanceMajorVersionRequest &&) = default ;
    UpgradeDBInstanceMajorVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDBInstanceMajorVersionRequest() = default ;
    UpgradeDBInstanceMajorVersionRequest& operator=(const UpgradeDBInstanceMajorVersionRequest &) = default ;
    UpgradeDBInstanceMajorVersionRequest& operator=(UpgradeDBInstanceMajorVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowDDL_ == nullptr
        && this->collectStatMode_ == nullptr && this->customExtraInfo_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceStorage_ == nullptr
        && this->DBInstanceStorageType_ == nullptr && this->instanceNetworkType_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->privateIpAddress_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->switchOver_ == nullptr && this->switchTime_ == nullptr && this->switchTimeMode_ == nullptr && this->targetMajorVersion_ == nullptr
        && this->upgradeMode_ == nullptr && this->usedTime_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr
        && this->zoneIdSlave1_ == nullptr && this->zoneIdSlave2_ == nullptr; };
    // allowDDL Field Functions 
    bool hasAllowDDL() const { return this->allowDDL_ != nullptr;};
    void deleteAllowDDL() { this->allowDDL_ = nullptr;};
    inline bool getAllowDDL() const { DARABONBA_PTR_GET_DEFAULT(allowDDL_, false) };
    inline UpgradeDBInstanceMajorVersionRequest& setAllowDDL(bool allowDDL) { DARABONBA_PTR_SET_VALUE(allowDDL_, allowDDL) };


    // collectStatMode Field Functions 
    bool hasCollectStatMode() const { return this->collectStatMode_ != nullptr;};
    void deleteCollectStatMode() { this->collectStatMode_ = nullptr;};
    inline string getCollectStatMode() const { DARABONBA_PTR_GET_DEFAULT(collectStatMode_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setCollectStatMode(string collectStatMode) { DARABONBA_PTR_SET_VALUE(collectStatMode_, collectStatMode) };


    // customExtraInfo Field Functions 
    bool hasCustomExtraInfo() const { return this->customExtraInfo_ != nullptr;};
    void deleteCustomExtraInfo() { this->customExtraInfo_ = nullptr;};
    inline string getCustomExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(customExtraInfo_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setCustomExtraInfo(string customExtraInfo) { DARABONBA_PTR_SET_VALUE(customExtraInfo_, customExtraInfo) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline UpgradeDBInstanceMajorVersionRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeDBInstanceMajorVersionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // switchOver Field Functions 
    bool hasSwitchOver() const { return this->switchOver_ != nullptr;};
    void deleteSwitchOver() { this->switchOver_ = nullptr;};
    inline string getSwitchOver() const { DARABONBA_PTR_GET_DEFAULT(switchOver_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setSwitchOver(string switchOver) { DARABONBA_PTR_SET_VALUE(switchOver_, switchOver) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // switchTimeMode Field Functions 
    bool hasSwitchTimeMode() const { return this->switchTimeMode_ != nullptr;};
    void deleteSwitchTimeMode() { this->switchTimeMode_ = nullptr;};
    inline string getSwitchTimeMode() const { DARABONBA_PTR_GET_DEFAULT(switchTimeMode_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setSwitchTimeMode(string switchTimeMode) { DARABONBA_PTR_SET_VALUE(switchTimeMode_, switchTimeMode) };


    // targetMajorVersion Field Functions 
    bool hasTargetMajorVersion() const { return this->targetMajorVersion_ != nullptr;};
    void deleteTargetMajorVersion() { this->targetMajorVersion_ = nullptr;};
    inline string getTargetMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMajorVersion_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setTargetMajorVersion(string targetMajorVersion) { DARABONBA_PTR_SET_VALUE(targetMajorVersion_, targetMajorVersion) };


    // upgradeMode Field Functions 
    bool hasUpgradeMode() const { return this->upgradeMode_ != nullptr;};
    void deleteUpgradeMode() { this->upgradeMode_ = nullptr;};
    inline string getUpgradeMode() const { DARABONBA_PTR_GET_DEFAULT(upgradeMode_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setUpgradeMode(string upgradeMode) { DARABONBA_PTR_SET_VALUE(upgradeMode_, upgradeMode) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdSlave1 Field Functions 
    bool hasZoneIdSlave1() const { return this->zoneIdSlave1_ != nullptr;};
    void deleteZoneIdSlave1() { this->zoneIdSlave1_ = nullptr;};
    inline string getZoneIdSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave1_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setZoneIdSlave1(string zoneIdSlave1) { DARABONBA_PTR_SET_VALUE(zoneIdSlave1_, zoneIdSlave1) };


    // zoneIdSlave2 Field Functions 
    bool hasZoneIdSlave2() const { return this->zoneIdSlave2_ != nullptr;};
    void deleteZoneIdSlave2() { this->zoneIdSlave2_ = nullptr;};
    inline string getZoneIdSlave2() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave2_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setZoneIdSlave2(string zoneIdSlave2) { DARABONBA_PTR_SET_VALUE(zoneIdSlave2_, zoneIdSlave2) };


  protected:
    shared_ptr<bool> allowDDL_ {};
    // Specifies when to execute statistics information collection on the database.
    // - **Before**: Execute collection before the switchover. This ensures business stability. If the instance has a large data volume, the upgrade may take a long time.
    // - **After**: Execute collection after the switchover. The upgrade is faster. Accessing tables without generated statistics information after the upgrade may cause inaccurate execution plans. During peak hours, this may cause the database to break down.
    // 
    // > For non-switchover scenarios, "before switchover" means statistics information is collected before the new instance is opened for read/write, and "after switchover" means statistics information is collected after the new instance is opened for read/write.
    shared_ptr<string> collectStatMode_ {};
    shared_ptr<string> customExtraInfo_ {};
    // The instance type after the upgrade. The CPU and memory configurations must be greater than or equal to those of the original instance type. If **UpgradeMode** is set to **inPlaceUpgrade** or **zeroDownTimeUpgrade**, **you do not need to configure** this parameter.
    // 
    // For example, if the original instance type is `pg.n2.small.2c` with 1 CPU core and 2 GB of memory, you can upgrade it to `pg.n2.medium.2c` with 2 CPU cores and 4 GB of memory.
    // 
    // > For the instance type codes of ApsaraDB RDS for PostgreSQL, refer to [Primary ApsaraDB RDS for PostgreSQL instance types](https://help.aliyun.com/document_detail/276990.html).
    shared_ptr<string> DBInstanceClass_ {};
    // The instance ID of the original instance.
    shared_ptr<string> DBInstanceId_ {};
    // The instance storage capacity after the upgrade. Unit: GB. If **UpgradeMode** (upgrade pattern) is set to **inPlaceUpgrade** or **zeroDownTimeUpgrade**, **you do not need to configure** this parameter.
    // 
    // Valid values:
    // - **PL1 ESSD cloud disk**: 20 GB to 3200 GB
    // - **PL2 ESSD cloud disk**: 500 GB to 3200 GB
    // - **PL3 ESSD cloud disk**: 1500 GB to 3200 GB
    // - **Premium performance disk**: 40 GB to 2000 GB
    // 
    // > When upgrading the major engine version of an instance with Premium Local SSDs, storage capacity reduction is supported. For the minimum storage capacity, refer to [Upgrade the major engine version of a database](https://help.aliyun.com/document_detail/203309.html).
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The storage type of the instance after the upgrade.
    // 
    // Valid values:
    // - **cloud_ssd**: standard SSD
    // - **cloud_essd**: PL1 ESSD
    // - **cloud_essd2**: PL2 ESSD
    // - **cloud_essd3**: PL3 ESSD
    // - **general_essd**: premium performance disk
    // 
    // 
    // The major engine version upgrade feature is based on cloud disk snapshots. The supported storage types after the upgrade are as follows:
    // - If the original instance uses a standard SSD, you can select standard SSD.
    // - If the original instance uses an ESSD cloud disk, you can select PL1 ESSD, PL2 ESSD, PL3 ESSD, or premium performance disk.
    // - If the original instance uses Premium Local SSDs, you can select PL1 ESSD, PL2 ESSD, PL3 ESSD, or premium performance disk.
    shared_ptr<string> DBInstanceStorageType_ {};
    // The network type of the instance after the upgrade. Set this parameter to VPC. Only VPC-connected instances support major engine version upgrades.
    // 
    // If the network type is classic network, switch to VPC first. For information about how to view or switch the network type, refer to [Switch the network type](https://help.aliyun.com/document_detail/96761.html).
    shared_ptr<string> instanceNetworkType_ {};
    // The billing method of the instance. Set this parameter to Postpaid for pay-as-you-go billing.
    // 
    // > If you want to change the billing method after the upgrade, refer to [Switch from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96743.html).
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // Reserved parameter. You do not need to configure this parameter.
    shared_ptr<string> period_ {};
    // You do not need to configure this parameter. It specifies the internal IP address of the target instance. The system automatically assigns an IP address based on VPCId and vSwitchId by default.
    shared_ptr<string> privateIpAddress_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The switchover configuration. Specifies whether to switch traffic to the new version instance based on your business requirements.
    // 
    // Valid values:
    // 
    // - **true**: Switchover is performed and automatic switchover is enabled. This option is typically used to execute the formal upgrade after confirming that your business can run stably on the new version.
    // - **false**: Switchover is not performed and automatic switchover is not enabled. This option is typically used to test the compatibility of your application with the new version before the formal upgrade.
    // 
    // > - If you select switchover:
    // >     - Switchover cannot be rolled back after execution. Proceed with caution.
    // >     - During the switchover procedure, the original instance becomes read-only and writes are not allowed. Execute the switchover during off-peak hours.
    // >     - If read-only instances are created for the original instance, you cannot select switchover. You can only upgrade the instance without switchover, and the original read-only instances are not cloned. After the upgrade, create new PostgreSQL read-only instances for the new version instance.
    // > - If you do not select switchover:
    // >     - The business on the original instance is not affected during migration.
    // >     - To upgrade the instance without switchover, change the database connection address in your application to the database connection address of the new instance after migration is complete. For information about how to view the connection address, refer to [View or modify the internal and public endpoints and port numbers](https://help.aliyun.com/document_detail/96788.html).
    shared_ptr<string> switchOver_ {};
    // Reserved parameter. You do not need to configure this parameter.
    shared_ptr<string> switchTime_ {};
    // This parameter is used together with SwitchOver and takes effect only when **SwitchOver** is set to **true**. Specifies the switchover time.
    // 
    // Valid values:
    // - **Immediate**: The switchover takes effect immediately.
    // - **MaintainTime**: The switchover takes effect during the maintenance window. You can call the ModifyDBInstanceMaintainTime operation to modify the maintenance window.
    shared_ptr<string> switchTimeMode_ {};
    // The target major engine version of the instance after the upgrade. This value must be the same as the target version specified during the pre-upgrade check.
    // 
    // > You can call the UpgradeDBInstanceMajorVersionPrecheck operation to perform a pre-upgrade check for the major engine version upgrade.
    shared_ptr<string> targetMajorVersion_ {};
    // The upgrade pattern. Configure this parameter when **SwitchOver** is set to **true**. Valid values:
    // 
    // - **inPlaceUpgrade**: In-place upgrade. The major engine version upgrade task is executed on the original instance without creating a new version instance. After the upgrade, the original instance inherits the existing order, instance name, tags, CloudMonitor alert rules, and backup rules.
    // - **blueGreenDeployment**: Blue-green deployment. The major engine version upgrade retains the original instance and creates a new version instance. The new instance is free of charge during creation. After the new instance is created, fees are incurred and the billing method may change. After the upgrade, both the original and new instances incur fees, and the new instance does not inherit the discounts of the original instance.
    // - **zeroDownTimeUpgrade**: Zero-downtime upgrade. The system uses pg_upgrade to upgrade the original instance to the target version and uses native logical replication for incremental updates. Active switchover is supported during the upgrade procedure, and you can validate the higher version instance before the switchover. From the start of the upgrade until the active switchover, the instance maintains normal read/write operations. During the switchover, the read-only duration is at the second level.
    shared_ptr<string> upgradeMode_ {};
    // Reserved parameter. You do not need to configure this parameter.
    shared_ptr<string> usedTime_ {};
    // The VPC ID. If **UpgradeMode** is set to **inPlaceUpgrade** or **zeroDownTimeUpgrade**, **you do not need to configure** this parameter.
    // 
    // You can call the DescribeDBInstanceAttribute operation to query the VPC ID of the original instance.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID of the target instance. If **UpgradeMode** (upgrade pattern) is set to **inPlaceUpgrade** or **zeroDownTimeUpgrade**, **you do not need to configure** this parameter.
    // - If the original instance is a Basic Edition instance, specify the vSwitch ID of the target instance.
    // - If the original instance is a high-availability series instance, you can specify the vSwitch IDs of the target primary and secondary instances, separated by commas (,).
    // 
    // > The target vSwitch must be in the same zone as the original instance. You can call the DescribeVSwitches operation to query vSwitches.
    shared_ptr<string> vSwitchId_ {};
    // The primary zone ID of the target instance. If **UpgradeMode** is set to **inPlaceUpgrade** or **zeroDownTimeUpgrade**, **you do not need to configure** this parameter.
    // 
    // You can call the DescribeRegions operation to query zone IDs.
    // 
    // ApsaraDB RDS for PostgreSQL allows you to deploy the new instance in a different zone within the same region as the original instance after the upgrade.
    shared_ptr<string> zoneId_ {};
    // This parameter can be configured only when the original instance is a high-availability series instance. Specifies the secondary zone ID of the target instance. If **UpgradeMode** (upgrade pattern) is set to **inPlaceUpgrade** or **zeroDownTimeUpgrade**, **you do not need to configure** this parameter.
    // 
    // ApsaraDB RDS for PostgreSQL allows you to deploy the new secondary instance in a different zone within the same region as the original instance after the upgrade.
    // 
    // You can call the DescribeRegions operation to query zone IDs.
    shared_ptr<string> zoneIdSlave1_ {};
    // Reserved parameter. You do not need to configure this parameter.
    shared_ptr<string> zoneIdSlave2_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
