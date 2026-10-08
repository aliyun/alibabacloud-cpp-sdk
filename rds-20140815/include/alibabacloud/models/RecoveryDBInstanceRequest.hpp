// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERYDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOVERYDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RecoveryDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoveryDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DbNames, dbNames_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(TargetDBInstanceId, targetDBInstanceId_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, RecoveryDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DbNames, dbNames_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(TargetDBInstanceId, targetDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    RecoveryDBInstanceRequest() = default ;
    RecoveryDBInstanceRequest(const RecoveryDBInstanceRequest &) = default ;
    RecoveryDBInstanceRequest(RecoveryDBInstanceRequest &&) = default ;
    RecoveryDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoveryDBInstanceRequest() = default ;
    RecoveryDBInstanceRequest& operator=(const RecoveryDBInstanceRequest &) = default ;
    RecoveryDBInstanceRequest& operator=(RecoveryDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && this->DBInstanceClass_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->dbNames_ == nullptr
        && this->instanceNetworkType_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->privateIpAddress_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->restoreTime_ == nullptr && this->targetDBInstanceId_ == nullptr && this->usedTime_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline RecoveryDBInstanceRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline RecoveryDBInstanceRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline RecoveryDBInstanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline RecoveryDBInstanceRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline RecoveryDBInstanceRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // dbNames Field Functions 
    bool hasDbNames() const { return this->dbNames_ != nullptr;};
    void deleteDbNames() { this->dbNames_ = nullptr;};
    inline string getDbNames() const { DARABONBA_PTR_GET_DEFAULT(dbNames_, "") };
    inline RecoveryDBInstanceRequest& setDbNames(string dbNames) { DARABONBA_PTR_SET_VALUE(dbNames_, dbNames) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline RecoveryDBInstanceRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline RecoveryDBInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline RecoveryDBInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline RecoveryDBInstanceRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RecoveryDBInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline RecoveryDBInstanceRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // targetDBInstanceId Field Functions 
    bool hasTargetDBInstanceId() const { return this->targetDBInstanceId_ != nullptr;};
    void deleteTargetDBInstanceId() { this->targetDBInstanceId_ = nullptr;};
    inline string getTargetDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetDBInstanceId_, "") };
    inline RecoveryDBInstanceRequest& setTargetDBInstanceId(string targetDBInstanceId) { DARABONBA_PTR_SET_VALUE(targetDBInstanceId_, targetDBInstanceId) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline RecoveryDBInstanceRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline RecoveryDBInstanceRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline RecoveryDBInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The backup set ID. You can call the DescribeBackups operation to query backup sets.
    // 
    // If you specify this parameter, the **DBInstanceId** parameter is optional.
    // 
    // > You must specify at least one of **BackupId** and **RestoreTime**.
    shared_ptr<string> backupId_ {};
    // The instance type of the new instance. For more information, see [Instance types](https://help.aliyun.com/document_detail/26312.html).
    shared_ptr<string> DBInstanceClass_ {};
    // The instance ID of the original instance.
    // 
    // > * If you want to recover data by backup set (by specifying the BackupId parameter), this parameter is optional.
    // > * If you want to recover data to a point in time (by specifying the RestoreTime parameter), this parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The instance storage capacity of the new instance. Unit: GB. For details, see [Instance types](https://help.aliyun.com/document_detail/26312.html).
    // 
    // > The disk space of the new instance cannot be smaller than that of the original instance.
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The instance storage type of the new instance. Valid values:
    // * **local_ssd/ephemeral_ssd**: local SSD.
    // * **cloud_ssd**: standard SSD cloud disk.
    // * **cloud_essd**: Enterprise SSD (ESSD) cloud disk.
    shared_ptr<string> DBInstanceStorageType_ {};
    // The database name. To restore data to a new instance, use the following format: `Original database name 1,New database name 2`.
    // 
    // > To restore data to an existing instance, see [CopyDatabaseBetweenInstances](https://help.aliyun.com/document_detail/2628854.html).
    // 
    // This parameter is required.
    shared_ptr<string> dbNames_ {};
    // The network type of the new instance. Valid values:
    // * **Classic**: classic network.
    // * **VPC**: virtual private cloud (VPC).
    // 
    // Default value: the network type of the original instance.
    shared_ptr<string> instanceNetworkType_ {};
    // The billing method of the new instance. Valid values:
    // * **Postpaid**: pay-as-you-go.
    // * **Prepaid**: subscription.
    shared_ptr<string> payType_ {};
    // The unit of the subscription duration of the new instance. Valid values:
    // * **Year**: year.
    // * **Month**: month.
    // 
    // > This parameter is required if **PayType** is set to **Prepaid**.
    shared_ptr<string> period_ {};
    // The internal IP address of the new instance. The IP address must be within the IP address range of the specified vSwitch. By default, the system automatically assigns an IP address based on the values of **VPCId** and **VSwitchId**.
    shared_ptr<string> privateIpAddress_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Any point in time within the backup retention period. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
    // 
    // If you specify this parameter, the **DBInstanceId** parameter is required.
    // 
    // > You must specify at least one of **BackupId** and **RestoreTime**.
    shared_ptr<string> restoreTime_ {};
    // The instance ID of the target instance.
    shared_ptr<string> targetDBInstanceId_ {};
    // The subscription duration of the new instance. Valid values:
    // * If **Period** is set to **Year**, the value of **UsedTime** ranges from **1 to 3**.
    // * If **Period** is set to **Month**, the value of **UsedTime** ranges from **1 to 9**.
    // 
    // > This parameter is required if **PayType** is set to **Prepaid**.
    shared_ptr<string> usedTime_ {};
    // The VPC ID of the new instance.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID of the new instance. Separate multiple values with commas (,).
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
