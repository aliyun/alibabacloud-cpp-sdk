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
    // The time when statistics information is collected for the database.
    // - **Before**: Collects statistics information before the switchover. This ensures business stability. If the instance has a large data volume, the upgrade may take a long time.
    // - **After**: Collects statistics information after the switchover. This speeds up the instance upgrade. Accessing tables for which no statistics information is generated after the upgrade may result in inaccurate execution plans and even database breakdown during peak hours.
    // 
    // > If you do not perform a switchover, collecting statistics information before the switchover means collecting statistics information before the new instance enables read and write operations, and collecting statistics information after the switchover means collecting statistics information after the new instance enables read and write operations.
    shared_ptr<string> collectStatMode_ {};
    // An internal reserved parameter. You do not need to configure this parameter.
    shared_ptr<string> customExtraInfo_ {};
    // The instance type after the upgrade. The CPU and memory configurations must be greater than or equal to those of the original instance. If **UpgradeMode** is set to **inPlaceUpgrade** or **zeroDownTimeUpgrade**, you **do not need to configure** this parameter.
    // 
    // For example, if the original instance type is `pg.n2.small.2c` with 1 vCPU and 2 GB of memory, you can upgrade it to `pg.n2.medium.2c` with 2 vCPUs and 4 GB of memory.
    // 
    // > For more information about the instance type codes of ApsaraDB RDS for PostgreSQL, see [Primary ApsaraDB RDS for PostgreSQL instance types](https://help.aliyun.com/document_detail/276990.html).
    shared_ptr<string> DBInstanceClass_ {};
    // The original instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The storage capacity of the instance after the upgrade. Unit: GB. If **UpgradeMode** is set to **inPlaceUpgrade** or **zeroDownTimeUpgrade**, you **do not need to configure** this parameter.
    // 
    // Valid values:
    // - **PL1 ESSD cloud disk**: 20 GB to 3,200 GB
    // - **PL2 ESSD cloud disk**: 500 GB to 3,200 GB
    // - **PL3 ESSD cloud disk**: 1,500 GB to 3,200 GB
    // - **Premium ESSD cloud disk**: 40 GB to 2,000 GB
    // 
    // > When you perform a major engine version upgrade for an instance with Premium Local SSDs, storage capacity reduction is supported. For more information about the minimum storage capacity that you can select, see [Upgrade the major engine version of the database](https://help.aliyun.com/document_detail/203309.html).
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The storage type of the instance after the upgrade.
    // 
    // Valid values:
    // - **cloud_ssd**: standard SSD cloud disk
    // - **cloud_essd**: PL1 ESSD cloud disk
    // - **cloud_essd2**: PL2 ESSD cloud disk
    // - **cloud_essd3**: PL3 ESSD cloud disk
    // - **general_essd**: Premium ESSD cloud disk
    // 
    // The major engine version upgrade feature is based on cloud disk snapshots. The following storage types are supported after the upgrade:
    // - If the original instance uses standard SSD cloud disks, you can select standard SSD cloud disks.
    // - If the original instance uses ESSD cloud disks, you can select PL1 ESSD cloud disks, PL2 ESSD cloud disks, PL3 ESSD cloud disks, or Premium ESSD cloud disks.
    // - If the original instance uses Premium Local SSDs, you can select PL1 ESSD cloud disks, PL2 ESSD cloud disks, PL3 ESSD cloud disks, or Premium ESSD cloud disks.
    shared_ptr<string> DBInstanceStorageType_ {};
    // The network type of the instance after the upgrade. Set the value to VPC. Only VPC-connected instances support major engine version upgrades.
    // 
    // If the network type is classic network, switch the network type to VPC first. For more information about how to view or switch the network type, see [Change the network type of an instance](https://help.aliyun.com/document_detail/96761.html).
    shared_ptr<string> instanceNetworkType_ {};
    // The billing method. Set the value to Postpaid, which indicates the pay-as-you-go billing method.
    // 
    // > If you need to change the billing method of the instance after the upgrade, see [Switch the billing method of an instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96743.html).
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // A reserved parameter. You do not need to configure this parameter.
    shared_ptr<string> period_ {};
    // The internal IP address of the target instance. You do not need to configure this parameter. The system automatically assigns an IP address based on the VPCId and vSwitchId parameters.
    shared_ptr<string> privateIpAddress_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The switchover configuration. Specify whether to switch traffic to the new version instance based on your business requirements.
    // 
    // Valid values:
    // 
    // - **true**: Switchover. The system automatically switches traffic. This option is typically used to execute a formal upgrade after you confirm that your business can run stably on the new version.
    // - **false**: No switchover. The system does not automatically switch traffic. This option is typically used to test the compatibility of your current business with the new version before a formal upgrade.
    // 
    // > - If you choose to perform automatic switchover:
    // >     - No backoff is supported after the switchover. Proceed with caution.
    // >     - During the switchover procedure, the original instance becomes read-only and data cannot be written. Make sure that you perform the switchover during off-peak hours.
    // >     - If read-only instances are created for the original instance, you cannot perform automatic switchover. You can only upgrade the instance without automatic switchover, and the original read-only instances are not cloned. After the upgrade is complete, you must create new read-only instances for the new version instance.
    // > - If you choose not to perform automatic switchover:
    // >     - The business on the original instance is not affected during the migration.
    // >     - If you upgrade the instance without automatic switchover, you must change the database endpoint in your application to the endpoint of the new instance after the migration is complete. For more information about how to view the endpoint, see [View or change the internal and public endpoints and port numbers](https://help.aliyun.com/document_detail/96788.html).
    shared_ptr<string> switchOver_ {};
    // A reserved parameter. You do not need to configure this parameter.
    shared_ptr<string> switchTime_ {};
    // The time when the switchover is performed. This parameter is used together with SwitchOver and takes effect only when **SwitchOver** is set to **true**.
    // 
    // Valid values:
    // - **Immediate**: The switchover takes effect immediately.
    // - **MaintainTime**: The switchover takes effect within the maintenance window. You can call the ModifyDBInstanceMaintainTime operation to modify the maintenance window.
    shared_ptr<string> switchTimeMode_ {};
    // The target major engine version of the instance after the upgrade. The value must be the same as the target version in the settings when you execute the pre-upgrade check.
    // 
    // > You can invoke the UpgradeDBInstanceMajorVersionPrecheck operation to execute a pre-upgrade check for a major engine version upgrade.
    shared_ptr<string> targetMajorVersion_ {};
    // The upgrade mode. If **SwitchOver** is set to **true**, you must configure this parameter. Valid values:
    // 
    // - **inPlaceUpgrade**: In-place upgrade. The major engine version upgrade task is performed on the original instance, and no new version instance is created. The major engine version of the original instance is upgraded, and the original instance will inherit its original orders, instance name, tags, CloudMonitor alert rules, and backup rules.
    // - **blueGreenDeployment**: Blue-green deployment. The major engine version upgrade retains the original instance and creates a new version instance. You are not charged for the new instance while it is being created. After the new instance is created, fees are generated, and the billing method may change. After the upgrade is complete, both the original instance and the new instance generate fees, and the new instance does not enjoy the discounts of the original instance.
    // - **zeroDownTimeUpgrade**: Zero-downtime upgrade. The system uses pg_upgrade to upgrade the original instance to the target version and implements incremental updates through native logical replication. Manual switchover is supported during the upgrade procedure, and you can verify the new version instance before the switchover. From the start of the upgrade to the manual switchover, the instance can maintain normal read and write operations. During the switchover, the read-only duration of the instance is measured in seconds.
    shared_ptr<string> upgradeMode_ {};
    // A reserved parameter. You do not need to configure this parameter.
    shared_ptr<string> usedTime_ {};
    // The VPC ID. If **UpgradeMode** is set to **inPlaceUpgrade** or **zeroDownTimeUpgrade**, you **do not need to configure** this parameter.
    // 
    // You can call the DescribeDBInstanceAttribute operation to view the VPC ID of the original instance.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID of the target instance. If **UpgradeMode** is set to **inPlaceUpgrade** or **zeroDownTimeUpgrade**, you **do not need to configure** this parameter.
    // - If the original instance is a Basic Edition instance, configure the vSwitch ID of the target instance.
    // - If the original instance is a high availability series instance, you can configure the vSwitch IDs of the target primary and secondary instances, separated by commas (,).
    // 
    // > The configured vSwitch of the target instance must be in the same zone as the original instance. You can invoke the DescribeVSwitches operation to query the vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the target primary zone. If **UpgradeMode** is set to **inPlaceUpgrade** or **zeroDownTimeUpgrade**, you **do not need to configure** this parameter.
    // 
    // You can call the DescribeRegions operation to view the zone ID.
    // 
    // ApsaraDB RDS for PostgreSQL supports deploying the new instance in a different zone within the same region as the original instance after the upgrade.
    shared_ptr<string> zoneId_ {};
    // The ID of the target secondary zone. You can configure this parameter only when the original instance is a high availability series instance. If **UpgradeMode** is set to **inPlaceUpgrade** or **zeroDownTimeUpgrade**, you **do not need to configure** this parameter.
    // 
    // ApsaraDB RDS for PostgreSQL supports deploying the new secondary instance in a different zone within the same region as the original instance after the upgrade.
    // 
    // You can invoke the DescribeRegions operation to view the zone ID.
    shared_ptr<string> zoneIdSlave1_ {};
    // A reserved parameter. You do not need to configure this parameter.
    shared_ptr<string> zoneIdSlave2_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
