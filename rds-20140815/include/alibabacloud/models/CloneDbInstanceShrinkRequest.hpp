// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEDBINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONEDBINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CloneDBInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneDBInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(BpeEnabled, bpeEnabled_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CustomExtraInfo, customExtraInfo_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DbNames, dbNames_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTable, restoreTable_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(ServerlessConfig, serverlessConfigShrink_);
      DARABONBA_PTR_TO_JSON(TableMeta, tableMeta_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave1, zoneIdSlave1_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave2, zoneIdSlave2_);
    };
    friend void from_json(const Darabonba::Json& j, CloneDBInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(BpeEnabled, bpeEnabled_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CustomExtraInfo, customExtraInfo_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DbNames, dbNames_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTable, restoreTable_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(ServerlessConfig, serverlessConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TableMeta, tableMeta_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave1, zoneIdSlave1_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave2, zoneIdSlave2_);
    };
    CloneDBInstanceShrinkRequest() = default ;
    CloneDBInstanceShrinkRequest(const CloneDBInstanceShrinkRequest &) = default ;
    CloneDBInstanceShrinkRequest(CloneDBInstanceShrinkRequest &&) = default ;
    CloneDBInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneDBInstanceShrinkRequest() = default ;
    CloneDBInstanceShrinkRequest& operator=(const CloneDBInstanceShrinkRequest &) = default ;
    CloneDBInstanceShrinkRequest& operator=(CloneDBInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->backupId_ == nullptr && return this->backupType_ == nullptr && return this->bpeEnabled_ == nullptr && return this->burstingEnabled_ == nullptr && return this->category_ == nullptr
        && return this->clientToken_ == nullptr && return this->customExtraInfo_ == nullptr && return this->DBInstanceClass_ == nullptr && return this->DBInstanceDescription_ == nullptr && return this->DBInstanceId_ == nullptr
        && return this->DBInstanceStorage_ == nullptr && return this->DBInstanceStorageType_ == nullptr && return this->dbNames_ == nullptr && return this->dedicatedHostGroupId_ == nullptr && return this->deletionProtection_ == nullptr
        && return this->instanceNetworkType_ == nullptr && return this->ioAccelerationEnabled_ == nullptr && return this->payType_ == nullptr && return this->period_ == nullptr && return this->privateIpAddress_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->restoreTable_ == nullptr && return this->restoreTime_ == nullptr && return this->serverlessConfigShrink_ == nullptr
        && return this->tableMeta_ == nullptr && return this->usedTime_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr
        && return this->zoneIdSlave1_ == nullptr && return this->zoneIdSlave2_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CloneDBInstanceShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CloneDBInstanceShrinkRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline CloneDBInstanceShrinkRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // bpeEnabled Field Functions 
    bool hasBpeEnabled() const { return this->bpeEnabled_ != nullptr;};
    void deleteBpeEnabled() { this->bpeEnabled_ = nullptr;};
    inline string bpeEnabled() const { DARABONBA_PTR_GET_DEFAULT(bpeEnabled_, "") };
    inline CloneDBInstanceShrinkRequest& setBpeEnabled(string bpeEnabled) { DARABONBA_PTR_SET_VALUE(bpeEnabled_, bpeEnabled) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CloneDBInstanceShrinkRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CloneDBInstanceShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CloneDBInstanceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // customExtraInfo Field Functions 
    bool hasCustomExtraInfo() const { return this->customExtraInfo_ != nullptr;};
    void deleteCustomExtraInfo() { this->customExtraInfo_ = nullptr;};
    inline string customExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(customExtraInfo_, "") };
    inline CloneDBInstanceShrinkRequest& setCustomExtraInfo(string customExtraInfo) { DARABONBA_PTR_SET_VALUE(customExtraInfo_, customExtraInfo) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CloneDBInstanceShrinkRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CloneDBInstanceShrinkRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CloneDBInstanceShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline CloneDBInstanceShrinkRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string DBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline CloneDBInstanceShrinkRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // dbNames Field Functions 
    bool hasDbNames() const { return this->dbNames_ != nullptr;};
    void deleteDbNames() { this->dbNames_ = nullptr;};
    inline string dbNames() const { DARABONBA_PTR_GET_DEFAULT(dbNames_, "") };
    inline CloneDBInstanceShrinkRequest& setDbNames(string dbNames) { DARABONBA_PTR_SET_VALUE(dbNames_, dbNames) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string dedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline CloneDBInstanceShrinkRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CloneDBInstanceShrinkRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline CloneDBInstanceShrinkRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string ioAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline CloneDBInstanceShrinkRequest& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CloneDBInstanceShrinkRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CloneDBInstanceShrinkRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CloneDBInstanceShrinkRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CloneDBInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloneDBInstanceShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTable Field Functions 
    bool hasRestoreTable() const { return this->restoreTable_ != nullptr;};
    void deleteRestoreTable() { this->restoreTable_ = nullptr;};
    inline string restoreTable() const { DARABONBA_PTR_GET_DEFAULT(restoreTable_, "") };
    inline CloneDBInstanceShrinkRequest& setRestoreTable(string restoreTable) { DARABONBA_PTR_SET_VALUE(restoreTable_, restoreTable) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string restoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline CloneDBInstanceShrinkRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // serverlessConfigShrink Field Functions 
    bool hasServerlessConfigShrink() const { return this->serverlessConfigShrink_ != nullptr;};
    void deleteServerlessConfigShrink() { this->serverlessConfigShrink_ = nullptr;};
    inline string serverlessConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(serverlessConfigShrink_, "") };
    inline CloneDBInstanceShrinkRequest& setServerlessConfigShrink(string serverlessConfigShrink) { DARABONBA_PTR_SET_VALUE(serverlessConfigShrink_, serverlessConfigShrink) };


    // tableMeta Field Functions 
    bool hasTableMeta() const { return this->tableMeta_ != nullptr;};
    void deleteTableMeta() { this->tableMeta_ = nullptr;};
    inline string tableMeta() const { DARABONBA_PTR_GET_DEFAULT(tableMeta_, "") };
    inline CloneDBInstanceShrinkRequest& setTableMeta(string tableMeta) { DARABONBA_PTR_SET_VALUE(tableMeta_, tableMeta) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CloneDBInstanceShrinkRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CloneDBInstanceShrinkRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CloneDBInstanceShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CloneDBInstanceShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdSlave1 Field Functions 
    bool hasZoneIdSlave1() const { return this->zoneIdSlave1_ != nullptr;};
    void deleteZoneIdSlave1() { this->zoneIdSlave1_ = nullptr;};
    inline string zoneIdSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave1_, "") };
    inline CloneDBInstanceShrinkRequest& setZoneIdSlave1(string zoneIdSlave1) { DARABONBA_PTR_SET_VALUE(zoneIdSlave1_, zoneIdSlave1) };


    // zoneIdSlave2 Field Functions 
    bool hasZoneIdSlave2() const { return this->zoneIdSlave2_ != nullptr;};
    void deleteZoneIdSlave2() { this->zoneIdSlave2_ = nullptr;};
    inline string zoneIdSlave2() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave2_, "") };
    inline CloneDBInstanceShrinkRequest& setZoneIdSlave2(string zoneIdSlave2) { DARABONBA_PTR_SET_VALUE(zoneIdSlave2_, zoneIdSlave2) };


  protected:
    // Specifies whether to enable the automatic payment feature for the new instance. Valid values:
    // 
    // 1.  **true**: enables the feature. You must make sure that your account balance is sufficient.
    // 2.  **false**: disables the feature. An unpaid order is generated.
    // 
    // >  Default value: true. If your account balance is insufficient, you can set the AutoPay parameter to false to generate an unpaid order. Then, you can log on to the ApsaraDB RDS console to complete the payment.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The backup set ID.
    // 
    // You can call the DescribeBackups operation to query the backup set ID.
    // 
    // >  You must specify at least one of the **BackupId** or **RestoreTime** parameters.
    std::shared_ptr<string> backupId_ = nullptr;
    // The type of backup that is used to restore the data of the original instance. Valid values:
    // 
    // *   **FullBackup**
    // *   **IncrementalBackup**
    std::shared_ptr<string> backupType_ = nullptr;
    // A reserved parameter. You do not need to specify this parameter.
    std::shared_ptr<string> bpeEnabled_ = nullptr;
    // An invalid parameter. You do not need to specify this parameter.
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // The RDS edition of the instance. Valid values:
    // 
    // *   **Basic**: RDS Basic Edition.
    // *   **HighAvailability**: RDS High-availability Edition.
    // *   **AlwaysOn**: RDS Cluster Edition for ApsaraDB RDS for SQL Server.
    // *   **cluster**: RDS Cluster Edition for ApsaraDB RDS for MySQL.
    // *   **Finance**: RDS Enterprise Edition. This edition is available only on the China site (aliyun.com).
    // 
    // **Serverless instances**
    // 
    // *   **serverless_basic**: RDS Basic Edition. This edition is available only for serverless instances that run MySQL and PostgreSQL.
    // *   **serverless_standard**: RDS High-availability Edition for ApsaraDB RDS for MySQL
    // *   **serverless_ha**: RDS High-availability Edition for ApsaraDB RDS for SQL Server
    // 
    // >  You do not need to configure this parameter. The value of this parameter is the same as that of the original instance.
    std::shared_ptr<string> category_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> customExtraInfo_ = nullptr;
    // The instance type of the new instance. For information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html).
    // 
    // > By default, the new instance uses the same instance type as the original primary instance.
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // The instance name. The value must be 2 to 255 characters in length The value can contain letters, digits, underscores (_), and hyphens (-), and must start with a letter.
    // 
    // >  The value cannot start with http:// or https://.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The storage capacity of the new instance. Unit: GB. You can increase the storage capacity in increments of 5 GB. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html).
    // 
    // > By default, the new instance has the same storage capacity as the original primary instance.
    std::shared_ptr<int32_t> DBInstanceStorage_ = nullptr;
    // The storage type of the new instance. Valid values:
    // 
    // *   **general_essd** (recommend): general Enterprise SSD (ESSD)
    // *   **local_ssd**: local SSD
    // *   **cloud_ssd**: standard SSD
    // *   **cloud_essd**: performance level 1 (PL1) ESSD
    // *   **cloud_essd2**: PL2 ESSD
    // *   **cloud_essd3**: PL3 ESSD
    // 
    // >  Serverless instances support only PL1 ESSDs and general ESSDs.
    std::shared_ptr<string> DBInstanceStorageType_ = nullptr;
    // The name of the database. If you specify more than one database, the value is in the following format: `Original database name 1,Original database name 2`.
    std::shared_ptr<string> dbNames_ = nullptr;
    // The ID of the dedicated cluster.
    std::shared_ptr<string> dedicatedHostGroupId_ = nullptr;
    // Specifies whether to enable the release protection feature for the new instance. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The network type of the new instance. Valid values:
    // 
    // *   **VPC**
    // *   **Classic**
    // 
    // > By default, the new instance has the same network type as the original primary instance.
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> ioAccelerationEnabled_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    // *   **Serverless**: serverless. This value is not supported for instances that run MariaDB. For more information, see [Overview of serverless ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/411291.html), [Overview of serverless ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/604344.html), and [Overview of serverless ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/607742.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    // The unit that is used to calculate the billing cycle of the new instance. This parameter takes effect only when you select the subscription billing method for the new instance. Valid values:
    // 
    // *   **Year**
    // *   **Month**
    // 
    // >  If you set the PayType parameter to **Prepaid**, you must specify this parameter.
    std::shared_ptr<string> period_ = nullptr;
    // The internal IP address of the new instance, which must be within the CIDR block supported by the specified vSwitch. The system automatically assigns an internal IP address based on the values of the **VPCId** and **VSwitchId** parameters.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to restore only the databases and tables that you specify. The value **1** specifies to restore only the specified databases and tables. If you do not want to restore only the specified databases or tables, you do not need to specify this parameter.
    std::shared_ptr<string> restoreTable_ = nullptr;
    // The point in time to which you want to restore data. The point in time must fall within the specified backup retention period. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // > You must specify at least one of the **BackupId** and **RestoreTime** parameters.
    std::shared_ptr<string> restoreTime_ = nullptr;
    // The specifications for the serverless instance. You must specify this parameter only when you restore data to a new serverless instance.
    // 
    // >  This parameter is available only on the China site (aliyun.com).
    std::shared_ptr<string> serverlessConfigShrink_ = nullptr;
    // The information about the database and table that you want to restore. The value is in the following format: `[{"type":"db","name":"Name of Database 1","newname":"New name of Database 1","tables":[{"type":"table","name":"Name of Table 1 in Database 1","newname":"New name of Table 1"},{"type":"table","name":"Name of Table 2 in Database 1","newname":"New name of Table 2"}]},{"type":"db","name":"Name of Database 2","newname":"New name of Database 2","tables":[{"type":"table","name":"Name of Table 1 in Database 2","newname":"New name of Table 1"},{"type":"table","name":"Name of Table 2 in Database 2","newname":"New name of Table 2"}]}]`
    std::shared_ptr<string> tableMeta_ = nullptr;
    // The subscription duration of the new instance. Valid values:
    // 
    // *   If you set the **Period** parameter to **Year**, the value of the UsedTime parameter ranges from **1 to 3**.
    // *   If you set the **Period** parameter to **Month**, the value of the UsedTime parameter ranges from **1 to 9**.
    // 
    // > If you set the PayType parameter to **Prepaid**, you must also specify this parameter.
    std::shared_ptr<int32_t> usedTime_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    // 
    // >  Make sure that the VPC belongs to the required region.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The ID of the vSwitch. The vSwitch must belong to the zone that is specified by **ZoneId**.
    // 
    // *   If you set **InstanceNetworkType** to **VPC**, you must also specify this parameter.
    // *   If you specify the **ZoneSlaveId1** parameter, you must specify the IDs of two vSwitches for this parameter and separate the IDs with a comma (,).
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID of the primary instance. You can call the DescribeRegions operation to query the zone ID.
    // 
    // >  Set this value to the zone ID of the original instance.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The zone ID of the secondary instance. If you set the ZoneIdSlave1 parameter and the **ZoneId** parameter to the same value, the single-zone deployment method is used. If you set the ZoneIdSlave1 parameter and the **ZoneId** parameter to different values, the multi-zone deployment method is used.
    std::shared_ptr<string> zoneIdSlave1_ = nullptr;
    // The zone ID of the logger instance. If you set the ZoneIdSlave2 parameter to the same value as the **ZoneId** parameter, the single-zone deployment method is used. If you set the ZoneIdSlave2 parameter to a different value from the **ZoneId** parameter, the multi-zone deployment method is used.
    std::shared_ptr<string> zoneIdSlave2_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
