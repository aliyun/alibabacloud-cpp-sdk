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
        && return this->collectStatMode_ == nullptr && return this->customExtraInfo_ == nullptr && return this->DBInstanceClass_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBInstanceStorage_ == nullptr
        && return this->DBInstanceStorageType_ == nullptr && return this->instanceNetworkType_ == nullptr && return this->payType_ == nullptr && return this->period_ == nullptr && return this->privateIpAddress_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->switchOver_ == nullptr && return this->switchTime_ == nullptr && return this->switchTimeMode_ == nullptr && return this->targetMajorVersion_ == nullptr
        && return this->upgradeMode_ == nullptr && return this->usedTime_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr
        && return this->zoneIdSlave1_ == nullptr && return this->zoneIdSlave2_ == nullptr; };
    // allowDDL Field Functions 
    bool hasAllowDDL() const { return this->allowDDL_ != nullptr;};
    void deleteAllowDDL() { this->allowDDL_ = nullptr;};
    inline bool allowDDL() const { DARABONBA_PTR_GET_DEFAULT(allowDDL_, false) };
    inline UpgradeDBInstanceMajorVersionRequest& setAllowDDL(bool allowDDL) { DARABONBA_PTR_SET_VALUE(allowDDL_, allowDDL) };


    // collectStatMode Field Functions 
    bool hasCollectStatMode() const { return this->collectStatMode_ != nullptr;};
    void deleteCollectStatMode() { this->collectStatMode_ = nullptr;};
    inline string collectStatMode() const { DARABONBA_PTR_GET_DEFAULT(collectStatMode_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setCollectStatMode(string collectStatMode) { DARABONBA_PTR_SET_VALUE(collectStatMode_, collectStatMode) };


    // customExtraInfo Field Functions 
    bool hasCustomExtraInfo() const { return this->customExtraInfo_ != nullptr;};
    void deleteCustomExtraInfo() { this->customExtraInfo_ = nullptr;};
    inline string customExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(customExtraInfo_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setCustomExtraInfo(string customExtraInfo) { DARABONBA_PTR_SET_VALUE(customExtraInfo_, customExtraInfo) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline UpgradeDBInstanceMajorVersionRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string DBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeDBInstanceMajorVersionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // switchOver Field Functions 
    bool hasSwitchOver() const { return this->switchOver_ != nullptr;};
    void deleteSwitchOver() { this->switchOver_ = nullptr;};
    inline string switchOver() const { DARABONBA_PTR_GET_DEFAULT(switchOver_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setSwitchOver(string switchOver) { DARABONBA_PTR_SET_VALUE(switchOver_, switchOver) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string switchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // switchTimeMode Field Functions 
    bool hasSwitchTimeMode() const { return this->switchTimeMode_ != nullptr;};
    void deleteSwitchTimeMode() { this->switchTimeMode_ = nullptr;};
    inline string switchTimeMode() const { DARABONBA_PTR_GET_DEFAULT(switchTimeMode_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setSwitchTimeMode(string switchTimeMode) { DARABONBA_PTR_SET_VALUE(switchTimeMode_, switchTimeMode) };


    // targetMajorVersion Field Functions 
    bool hasTargetMajorVersion() const { return this->targetMajorVersion_ != nullptr;};
    void deleteTargetMajorVersion() { this->targetMajorVersion_ = nullptr;};
    inline string targetMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMajorVersion_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setTargetMajorVersion(string targetMajorVersion) { DARABONBA_PTR_SET_VALUE(targetMajorVersion_, targetMajorVersion) };


    // upgradeMode Field Functions 
    bool hasUpgradeMode() const { return this->upgradeMode_ != nullptr;};
    void deleteUpgradeMode() { this->upgradeMode_ = nullptr;};
    inline string upgradeMode() const { DARABONBA_PTR_GET_DEFAULT(upgradeMode_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setUpgradeMode(string upgradeMode) { DARABONBA_PTR_SET_VALUE(upgradeMode_, upgradeMode) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdSlave1 Field Functions 
    bool hasZoneIdSlave1() const { return this->zoneIdSlave1_ != nullptr;};
    void deleteZoneIdSlave1() { this->zoneIdSlave1_ = nullptr;};
    inline string zoneIdSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave1_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setZoneIdSlave1(string zoneIdSlave1) { DARABONBA_PTR_SET_VALUE(zoneIdSlave1_, zoneIdSlave1) };


    // zoneIdSlave2 Field Functions 
    bool hasZoneIdSlave2() const { return this->zoneIdSlave2_ != nullptr;};
    void deleteZoneIdSlave2() { this->zoneIdSlave2_ = nullptr;};
    inline string zoneIdSlave2() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave2_, "") };
    inline UpgradeDBInstanceMajorVersionRequest& setZoneIdSlave2(string zoneIdSlave2) { DARABONBA_PTR_SET_VALUE(zoneIdSlave2_, zoneIdSlave2) };


  protected:
    std::shared_ptr<bool> allowDDL_ = nullptr;
    // Specify the point in time at which the system collects the statistics of the instance.
    // 
    // *   **Before**: The system collects the statistics of the instance before the switchover to ensure service stability. If the instance contains a large amount of data, the upgrade may require a long period of time.
    // *   **After**: The system collects the statistics of the instance after the switchover to accelerate the upgrade. After the upgrade, if you access tables for which no statistics are generated, the query plans may be inaccurate, and your database service may be unavailable during peak hours.
    // 
    // >  If you set the SwitchOver parameter to false, the value Before specifies that the system collects the statistics of the instance before the instance starts to process read and write requests, and the value After specifies that the system collects the statistics of the instance after the instance starts to process read and write requests.
    std::shared_ptr<string> collectStatMode_ = nullptr;
    std::shared_ptr<string> customExtraInfo_ = nullptr;
    // The new instance type of the instance. The new CPU and memory specifications of the instance must be higher than or equal to the original CPU and memory specifications. If you set the **UpgradeMode** parameter to **inPlaceUpgrade**, you **do not need to configure** this parameter.
    // 
    // For example, you can upgrade the instance type from `pg.n2.small.2c` to `pg.n2.medium.2c`. The pg.n2.small.2c instance type provides 1 CPU core and 2 GB of memory. The pg.n2.medium.2c instance type provides 2 CPU cores and 4 GB of memory.
    // 
    // >  For more information about the instance types of ApsaraDB RDS for PostgreSQL instances, see [Instance types for primary ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/276990.html).
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // The ID of the original instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The new storage capacity of the instance. Unit: GB If you set the **UpgradeMode** parameter to **inPlaceUpgrade**, you **do not need to configure** this parameter.
    // 
    // Valid values:
    // 
    // *   **PL1 ESSD**: 20 GB to 32,000 GB
    // *   **PL2 ESSD**: 500 GB to 3,200 GB
    // *   **PL3 ESSD**: 1,500 GB to 3,200 GB
    // *   **General ESSD**: 40 GB to 2,000 GB
    // 
    // >  If the original instance uses local disks, you can reduce the storage capacity of the instance when you upgrade the major engine version of the instance. For more information about the minimum storage capacity, see [Upgrade the major engine version](https://help.aliyun.com/document_detail/203309.html).
    std::shared_ptr<int32_t> DBInstanceStorage_ = nullptr;
    // The storage type of the instance that runs the required major engine version.
    // 
    // Valid values:
    // 
    // *   **cloud_ssd**: standard SSD
    // *   **cloud_essd**: performance level 1 (PL1) Enterprise SSD (ESSD)
    // *   **cloud_essd2**: PL2 ESSD
    // *   **cloud_essd3**: PL3 ESSD
    // *   **general_essd**: general ESSD
    // 
    // The major engine version upgrade feature is developed based on snapshots for cloud disks. You can select a storage type after the upgrade based on the following items:
    // 
    // *   If the original instance uses standard SSDs, set this parameter to cloud_ssd.
    // *   If the original instance uses ESSDs, set this parameter to cloud_essd, cloud_essd2, cloud_essd3, or general_essd.
    // *   If the original instance uses local SSDs, set this parameter to cloud_essd, cloud_essd2, cloud_essd3, or general_essd.
    std::shared_ptr<string> DBInstanceStorageType_ = nullptr;
    // The network type of the new instance. Set the value to VPC. The major engine version upgrade feature is supported only for instances that reside in VPCs.
    // 
    // If the original instance resides in the classic network, you must migrate the instance to a VPC before you call this operation. For more information about how to view or change the network type of an instance, see [Change the network type of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96761.html).
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // The billing method. Set the value to Postpaid.
    // 
    // >  For more information about how to change the billing method of an instance after the upgrade, see [Change the billing method of an instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96743.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    // A reserved parameter. You do not need to specify this parameter.
    std::shared_ptr<string> period_ = nullptr;
    // The internal IP address of the new instance. You do not need to specify this parameter. The system automatically assigns an internal IP address based on the values of the VPCId and vSwitchId parameters.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to switch your workloads over to the instance that runs the required major engine version based on your business requirements.
    // 
    // Valid values:
    // 
    // *   **true**: The system automatically switches workloads over to the instance. This configuration method is used to perform an upgrade after you verify that the new major engine version is compatible with your workloads.
    // *   **false**: The system does not automatically switch your workloads over to the instance. In most cases, this configuration method is used to test whether the new major engine version is compatible with your workloads before you perform the upgrade.
    // 
    // > 
    // 
    // *   If you set this parameter to true, you must take note of the following items:
    // 
    //     *   After the switchover is complete, you cannot roll your workloads back to the original instance. Proceed with caution.
    //     *   During the switchover, the original instance processes only read requests. We recommend that you perform the switchover during off-peak hours.
    //     *   If read-only instances are attached to the original instance, you can set this parameter only to false. In this case, the read-only instances that are attached to the original instance cannot be cloned. After the upgrade is complete, you must create read-only instances for the instance.
    // 
    // *   If you set this parameter to false, you must take note of the following items:
    // 
    //     *   The data migration does not interrupt your workloads on the original instance.
    //     *   After data is migrated to the instance that runs the required major engine version, you must update the endpoint configuration in your application. This update requires you to replace the endpoint of the original instance with the endpoint of the instance that runs the required major engine version. For more information about how to view the endpoint of an instance, see [Viewing and change of the internal and public endpoints and port numbers](https://help.aliyun.com/document_detail/96788.html).
    std::shared_ptr<string> switchOver_ = nullptr;
    // A reserved parameter. You do not need to specify this parameter.
    std::shared_ptr<string> switchTime_ = nullptr;
    // The point in time at which the workloads are switched over. This parameter is used together with the SwitchOver parameter. This parameter is available only when you set the **SwitchOver** parameter to **true**.
    // 
    // Valid values:
    // 
    // *   **Immediate**: The workloads are immediately switched over.
    // *   **MaintainTime**: The workloads are switched over within the maintenance window that you specify. You can call the ModifyDBInstanceMaintainTime operation to change the maintenance window of an instance.
    std::shared_ptr<string> switchTimeMode_ = nullptr;
    // The major engine version of the new instance. The value of this parameter must be the major engine version on which an upgrade check is performed.
    // 
    // >  You can call the UpgradeDBInstanceMajorVersionPrecheck operation to perform an upgrade check.
    std::shared_ptr<string> targetMajorVersion_ = nullptr;
    // The upgrade mode. This parameter is required when you set the **SwitchOver** parameter to **true**. Valid values:
    // 
    // *   **inPlaceUpgrade**: local upgrade. The major engine version upgrade is performed on the original instance, and no new instance is created. After the upgrade, the original instance runs the required major engine version and inherits the original orders, name, tags, alert rules in CloudMonitor, and backup settings.
    // *   **blueGreenDeployment**: blue-green deployment. After the major engine version of the instance is upgraded, the original instance is retained and a new instance is created. Fees are generated for the new instance based on the billing method that you specified. However, no fees are generated for the creation of the new instance. After the upgrade is complete, fees are generated for both the original and new instances and the new instance cannot enjoy the discounts provided for the original instance.
    std::shared_ptr<string> upgradeMode_ = nullptr;
    // A reserved parameter. You do not need to specify this parameter.
    std::shared_ptr<string> usedTime_ = nullptr;
    // The virtual private cloud (VPC) ID of the instance. If you set the **UpgradeMode** parameter to **inPlaceUpgrade**, you **do not need to configure** this parameter.
    // 
    // You can call the DescribeDBInstanceAttribute operation to query the VPC ID of the original instance.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID of the instance that runs the required major engine version. If you set the **UpgradeMode** parameter to **inPlaceUpgrade**, you **do not need to configure** this parameter.
    // 
    // *   If the original instance runs RDS Basic Edition, configure the vSwitch ID for the instance that runs the required major engine version.
    // *   If the original instance runs RDS High-availability Edition, configure the vSwitch IDs for the instance that runs the required major engine version and its secondary instance. Separate the vSwitch IDs with commas (,).
    // 
    // >  The vSwitches that you specify must reside in the same zone as the original instance. You can call the DescribeVSwitches operation to query the vSwitch IDs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the zone to which the primary instance that runs the required major engine version belongs. If you set the **UpgradeMode** parameter to **inPlaceUpgrade**, you **do not need to configure** this parameter.
    // 
    // You can call the DescribeRegions operation to query zone IDs.
    // 
    // You can select a zone that belongs to the region in which the original instance resides.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The ID of the zone to which the secondary instance runs the required major engine version belongs. This parameter is available only when the original instance runs RDS High-availability Edition. If you set the **UpgradeMode** parameter to **inPlaceUpgrade**, you **do not need to configure** this parameter.
    // 
    // You can select a zone that belongs to the region in which the original instance resides.
    // 
    // You can call the DescribeRegions operation to query zone IDs.
    std::shared_ptr<string> zoneIdSlave1_ = nullptr;
    // A reserved parameter. You do not need to specify this parameter.
    std::shared_ptr<string> zoneIdSlave2_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
