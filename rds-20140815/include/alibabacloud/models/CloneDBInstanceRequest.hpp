// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONEDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CloneDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneDBInstanceRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ServerlessConfig, serverlessConfig_);
      DARABONBA_PTR_TO_JSON(TableMeta, tableMeta_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave1, zoneIdSlave1_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave2, zoneIdSlave2_);
    };
    friend void from_json(const Darabonba::Json& j, CloneDBInstanceRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ServerlessConfig, serverlessConfig_);
      DARABONBA_PTR_FROM_JSON(TableMeta, tableMeta_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave1, zoneIdSlave1_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave2, zoneIdSlave2_);
    };
    CloneDBInstanceRequest() = default ;
    CloneDBInstanceRequest(const CloneDBInstanceRequest &) = default ;
    CloneDBInstanceRequest(CloneDBInstanceRequest &&) = default ;
    CloneDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneDBInstanceRequest() = default ;
    CloneDBInstanceRequest& operator=(const CloneDBInstanceRequest &) = default ;
    CloneDBInstanceRequest& operator=(CloneDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. You can specify this parameter to bind a tag to the instance.
      // 
      // * If the specified tag key already exists, the tag key is directly bound to the instance. You can call the ListTagResources operation to query created tags.
      // * If the specified tag key does not exist, the tag key is created and then bound to the instance.
      // * The tag key cannot be an empty string.
      // * This parameter must be used together with the **Tag.Value** parameter.
      shared_ptr<string> key_ {};
      // The tag value that corresponds to the tag key. You can specify this parameter to bind a tag to the instance.
      // 
      // * If the specified tag value already exists for the corresponding tag key, the tag value is directly bound to the instance. You can call the ListTagResources operation to query created tags.
      // * If the specified tag value does not exist for the corresponding tag key, the tag value is created and then bound to the instance.
      // * This parameter must be used together with the **Tag.Key** parameter.
      shared_ptr<string> value_ {};
    };

    class ServerlessConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServerlessConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPause, autoPause_);
        DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
        DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
        DARABONBA_PTR_TO_JSON(SwitchForce, switchForce_);
      };
      friend void from_json(const Darabonba::Json& j, ServerlessConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPause, autoPause_);
        DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
        DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
        DARABONBA_PTR_FROM_JSON(SwitchForce, switchForce_);
      };
      ServerlessConfig() = default ;
      ServerlessConfig(const ServerlessConfig &) = default ;
      ServerlessConfig(ServerlessConfig &&) = default ;
      ServerlessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServerlessConfig() = default ;
      ServerlessConfig& operator=(const ServerlessConfig &) = default ;
      ServerlessConfig& operator=(ServerlessConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoPause_ == nullptr
        && this->maxCapacity_ == nullptr && this->minCapacity_ == nullptr && this->switchForce_ == nullptr; };
      // autoPause Field Functions 
      bool hasAutoPause() const { return this->autoPause_ != nullptr;};
      void deleteAutoPause() { this->autoPause_ = nullptr;};
      inline bool getAutoPause() const { DARABONBA_PTR_GET_DEFAULT(autoPause_, false) };
      inline ServerlessConfig& setAutoPause(bool autoPause) { DARABONBA_PTR_SET_VALUE(autoPause_, autoPause) };


      // maxCapacity Field Functions 
      bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
      void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
      inline double getMaxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0.0) };
      inline ServerlessConfig& setMaxCapacity(double maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


      // minCapacity Field Functions 
      bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
      void deleteMinCapacity() { this->minCapacity_ = nullptr;};
      inline double getMinCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0.0) };
      inline ServerlessConfig& setMinCapacity(double minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


      // switchForce Field Functions 
      bool hasSwitchForce() const { return this->switchForce_ != nullptr;};
      void deleteSwitchForce() { this->switchForce_ = nullptr;};
      inline bool getSwitchForce() const { DARABONBA_PTR_GET_DEFAULT(switchForce_, false) };
      inline ServerlessConfig& setSwitchForce(bool switchForce) { DARABONBA_PTR_SET_VALUE(switchForce_, switchForce) };


    protected:
      shared_ptr<bool> autoPause_ {};
      shared_ptr<double> maxCapacity_ {};
      shared_ptr<double> minCapacity_ {};
      shared_ptr<bool> switchForce_ {};
    };

    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->backupId_ == nullptr && this->backupType_ == nullptr && this->bpeEnabled_ == nullptr && this->burstingEnabled_ == nullptr && this->category_ == nullptr
        && this->clientToken_ == nullptr && this->customExtraInfo_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr
        && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->dbNames_ == nullptr && this->dedicatedHostGroupId_ == nullptr && this->deletionProtection_ == nullptr
        && this->instanceNetworkType_ == nullptr && this->ioAccelerationEnabled_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->privateIpAddress_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerId_ == nullptr && this->restoreTable_ == nullptr && this->restoreTime_ == nullptr && this->serverlessConfig_ == nullptr
        && this->tableMeta_ == nullptr && this->tag_ == nullptr && this->usedTime_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr && this->zoneIdSlave1_ == nullptr && this->zoneIdSlave2_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CloneDBInstanceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CloneDBInstanceRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline CloneDBInstanceRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // bpeEnabled Field Functions 
    bool hasBpeEnabled() const { return this->bpeEnabled_ != nullptr;};
    void deleteBpeEnabled() { this->bpeEnabled_ = nullptr;};
    inline string getBpeEnabled() const { DARABONBA_PTR_GET_DEFAULT(bpeEnabled_, "") };
    inline CloneDBInstanceRequest& setBpeEnabled(string bpeEnabled) { DARABONBA_PTR_SET_VALUE(bpeEnabled_, bpeEnabled) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CloneDBInstanceRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CloneDBInstanceRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CloneDBInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // customExtraInfo Field Functions 
    bool hasCustomExtraInfo() const { return this->customExtraInfo_ != nullptr;};
    void deleteCustomExtraInfo() { this->customExtraInfo_ = nullptr;};
    inline string getCustomExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(customExtraInfo_, "") };
    inline CloneDBInstanceRequest& setCustomExtraInfo(string customExtraInfo) { DARABONBA_PTR_SET_VALUE(customExtraInfo_, customExtraInfo) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CloneDBInstanceRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CloneDBInstanceRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CloneDBInstanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline CloneDBInstanceRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline CloneDBInstanceRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // dbNames Field Functions 
    bool hasDbNames() const { return this->dbNames_ != nullptr;};
    void deleteDbNames() { this->dbNames_ = nullptr;};
    inline string getDbNames() const { DARABONBA_PTR_GET_DEFAULT(dbNames_, "") };
    inline CloneDBInstanceRequest& setDbNames(string dbNames) { DARABONBA_PTR_SET_VALUE(dbNames_, dbNames) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline CloneDBInstanceRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CloneDBInstanceRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline CloneDBInstanceRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string getIoAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline CloneDBInstanceRequest& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CloneDBInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CloneDBInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CloneDBInstanceRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CloneDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloneDBInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTable Field Functions 
    bool hasRestoreTable() const { return this->restoreTable_ != nullptr;};
    void deleteRestoreTable() { this->restoreTable_ = nullptr;};
    inline string getRestoreTable() const { DARABONBA_PTR_GET_DEFAULT(restoreTable_, "") };
    inline CloneDBInstanceRequest& setRestoreTable(string restoreTable) { DARABONBA_PTR_SET_VALUE(restoreTable_, restoreTable) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline CloneDBInstanceRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // serverlessConfig Field Functions 
    bool hasServerlessConfig() const { return this->serverlessConfig_ != nullptr;};
    void deleteServerlessConfig() { this->serverlessConfig_ = nullptr;};
    inline const CloneDBInstanceRequest::ServerlessConfig & getServerlessConfig() const { DARABONBA_PTR_GET_CONST(serverlessConfig_, CloneDBInstanceRequest::ServerlessConfig) };
    inline CloneDBInstanceRequest::ServerlessConfig getServerlessConfig() { DARABONBA_PTR_GET(serverlessConfig_, CloneDBInstanceRequest::ServerlessConfig) };
    inline CloneDBInstanceRequest& setServerlessConfig(const CloneDBInstanceRequest::ServerlessConfig & serverlessConfig) { DARABONBA_PTR_SET_VALUE(serverlessConfig_, serverlessConfig) };
    inline CloneDBInstanceRequest& setServerlessConfig(CloneDBInstanceRequest::ServerlessConfig && serverlessConfig) { DARABONBA_PTR_SET_RVALUE(serverlessConfig_, serverlessConfig) };


    // tableMeta Field Functions 
    bool hasTableMeta() const { return this->tableMeta_ != nullptr;};
    void deleteTableMeta() { this->tableMeta_ = nullptr;};
    inline string getTableMeta() const { DARABONBA_PTR_GET_DEFAULT(tableMeta_, "") };
    inline CloneDBInstanceRequest& setTableMeta(string tableMeta) { DARABONBA_PTR_SET_VALUE(tableMeta_, tableMeta) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CloneDBInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CloneDBInstanceRequest::Tag>) };
    inline vector<CloneDBInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CloneDBInstanceRequest::Tag>) };
    inline CloneDBInstanceRequest& setTag(const vector<CloneDBInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CloneDBInstanceRequest& setTag(vector<CloneDBInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CloneDBInstanceRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CloneDBInstanceRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CloneDBInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CloneDBInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdSlave1 Field Functions 
    bool hasZoneIdSlave1() const { return this->zoneIdSlave1_ != nullptr;};
    void deleteZoneIdSlave1() { this->zoneIdSlave1_ = nullptr;};
    inline string getZoneIdSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave1_, "") };
    inline CloneDBInstanceRequest& setZoneIdSlave1(string zoneIdSlave1) { DARABONBA_PTR_SET_VALUE(zoneIdSlave1_, zoneIdSlave1) };


    // zoneIdSlave2 Field Functions 
    bool hasZoneIdSlave2() const { return this->zoneIdSlave2_ != nullptr;};
    void deleteZoneIdSlave2() { this->zoneIdSlave2_ = nullptr;};
    inline string getZoneIdSlave2() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave2_, "") };
    inline CloneDBInstanceRequest& setZoneIdSlave2(string zoneIdSlave2) { DARABONBA_PTR_SET_VALUE(zoneIdSlave2_, zoneIdSlave2) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // 1. **true**: enables automatic payment. Make sure that your account balance is sufficient.
    // 
    // 1. **false**: generates an unpaid order without deducting fees.
    // 
    // > Default value: true. If your payment method has an insufficient balance, you can set the AutoPay parameter to false. In this case, an unpaid order is generated, and you can log on to the ApsaraDB RDS console to pay the order.
    shared_ptr<bool> autoPay_ {};
    // The ID of the backup set.
    // 
    // You can call the DescribeBackups operation to query backup sets.
    // 
    // >You must specify at least one of the **BackupId** and **RestoreTime** parameters.
    shared_ptr<string> backupId_ {};
    // The backup type. Valid values:
    // 
    // * **FullBackup**: full backup
    // * **IncrementalBackup**: incremental backup
    shared_ptr<string> backupType_ {};
    shared_ptr<string> bpeEnabled_ {};
    // Specifies whether to enable the I/O performance burst feature for cloud disks. Valid values:
    // * **true**: enables the feature.
    // * **false**: disables the feature.
    // > For more information about the I/O performance burst feature, see [What is Premium ESSD?](https://help.aliyun.com/document_detail/2340501.html).
    shared_ptr<bool> burstingEnabled_ {};
    // The instance edition. Valid values:
    // 
    // - **Basic**: Basic Edition
    // - **HighAvailability**: High-availability Edition
    // - **AlwaysOn**: Cluster Edition (SQL Server)
    // - **cluster**: Cluster Edition (MySQL)
    // - **Finance**: Finance Edition (supported only on the China site)
    // 
    // **Serverless instances**
    // - **serverless_basic**: Serverless Basic Edition (supported only for MySQL and PostgreSQL)
    // - **serverless_standard**: MySQL Serverless High-availability Edition
    // - **serverless_ha**: SQL Server Serverless High-availability Edition
    // > You do not need to specify this parameter. The cloned instance inherits the edition of the source instance.
    shared_ptr<string> category_ {};
    // Ensures the idempotence of the request and prevents duplicate submissions. The value is generated by the client and must be unique across different requests. The value can be up to 64 ASCII characters in length and cannot contain non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> customExtraInfo_ {};
    // The instance type. For more information, see [Instance types](https://help.aliyun.com/document_detail/26312.html).
    // 
    // >Default value: the instance type of the source instance.
    shared_ptr<string> DBInstanceClass_ {};
    // The description of the instance. The description must be 2 to 255 characters in length. It must start with a Chinese character or a letter and can contain digits, Chinese characters, letters, underscores (_), and hyphens (-).
    // >The description cannot start with http:// or https://.
    shared_ptr<string> DBInstanceDescription_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Instance storage capacity of the instance. Unit: GB. Instance storage capacity increases in increments of 5 GB. For more information, see [Instance types](https://help.aliyun.com/document_detail/26312.html).
    // >Default value: instance storage capacity of the source instance.
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The instance storage type. Valid values:
    // 
    // * **general_essd**: Premium ESSD (recommended)
    // * **local_ssd**: local SSD
    // * **cloud_ssd**: standard SSD
    // * **cloud_essd**: PL1 ESSD
    // * **cloud_essd2**: PL2 ESSD
    // * **cloud_essd3**: PL3 ESSD
    // 
    // > Serverless instances support only PL1 ESSD and Premium ESSD.
    shared_ptr<string> DBInstanceStorageType_ {};
    // The names of the databases to restore. Format: `OriginalDatabaseName1,OriginalDatabaseName2`.
    shared_ptr<string> dbNames_ {};
    // The ID of the dedicated cluster.
    shared_ptr<string> dedicatedHostGroupId_ {};
    // Specifies whether to enable release protection. Valid values:
    // * **true**: enables release protection.
    // * **false** (default): disables release protection.
    shared_ptr<bool> deletionProtection_ {};
    // The network type of the instance. Valid values:
    // * **VPC**: Virtual Private Cloud (VPC)
    // * **Classic**: classic network
    // 
    // >Default value: the network type of the source instance.
    shared_ptr<string> instanceNetworkType_ {};
    // Specifies whether to enable the Buffer Pool Extension (BPE) feature for cloud disks. Valid values:
    // 
    //  - **1**: enables the feature.
    //  - **0**: disables the feature.
    // 
    // > For more information about the BPE feature, see [Buffer Pool Extension (BPE)](https://help.aliyun.com/document_detail/2527067.html).
    shared_ptr<string> ioAccelerationEnabled_ {};
    // The billing method. Valid values:
    // * **Postpaid**: pay-as-you-go
    // * **Prepaid**: subscription
    // * **Serverless**: serverless. This billing method is not supported for ApsaraDB RDS for MariaDB instances. For more information, see [Overview of serverless ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/411291.html), [Overview of serverless ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/604344.html), and [Overview of serverless ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/607742.html).
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The subscription period of the subscription instance. Valid values:
    // * **Year**: yearly
    // * **Month**: monthly
    // 
    // > This parameter is required if the **PayType** parameter is set to **Prepaid**.
    shared_ptr<string> period_ {};
    // The internal IP address of the new instance. The IP address must be within the IP address range of the specified vSwitch. By default, the system automatically allocates an IP address based on the **VPCId** and **VSwitchId** parameters.
    shared_ptr<string> privateIpAddress_ {};
    // The region ID. You can call the DescribeRegions operation to query region IDs.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to restore individual databases and tables. Set the value to **true** to restore individual databases and tables. Otherwise, leave this parameter empty.
    shared_ptr<string> restoreTable_ {};
    // The point in time to which you want to restore data. The point in time must be within the backup retention period. Specify the time in the ISO 8601 standard in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time must be in UTC.
    // 
    // >You must specify at least one of the **BackupId** and **RestoreTime** parameters.
    shared_ptr<string> restoreTime_ {};
    shared_ptr<CloneDBInstanceRequest::ServerlessConfig> serverlessConfig_ {};
    // The information about the databases and tables to restore. This parameter is required when you restore individual databases and tables. Format:
    // ```[{"type":"db","name":"Original database 1 name","newname":"New database 1 name","tables":[{"type":"table","name":"Table 1 name in database 1","newname":"New table 1 name"},{"type":"table","name":"Table 2 name in database 1","newname":"New table 2 name"}]},{"type":"db","name":"Original database 2 name","newname":"New database 2 name","tables":[{"type":"table","name":"Table 1 name in database 2","newname":"New table 1 name"},{"type":"table","name":"Table 2 name in database 2","newname":"New table 2 name"}]}]```
    shared_ptr<string> tableMeta_ {};
    // The list of tags.
    shared_ptr<vector<CloneDBInstanceRequest::Tag>> tag_ {};
    // The subscription duration. Valid values:
    // * If the **Period** parameter is set to **Year**, the value of the UsedTime parameter ranges from **1** to **3**.
    // * If the **Period** parameter is set to **Month**, the value of the UsedTime parameter ranges from **1** to **9**.
    // 
    // > This parameter is required if the **PayType** parameter is set to **Prepaid**.
    shared_ptr<int32_t> usedTime_ {};
    // The ID of the VPC.
    // >Make sure that the VPC belongs to the specified region.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID. The zone where the vSwitch resides must correspond to the zone ID specified in **ZoneId**.
    // 
    // - The network type **InstanceNetworkType** must be set to **VPC**.
    // - If you specify **ZoneSlaveId1** (secondary zone ID), you must specify two vSwitch IDs and separate them with a comma (,).
    shared_ptr<string> vSwitchId_ {};
    // The primary zone ID. You can call the DescribeRegions operation to query zone IDs.
    // 
    // >Default value: the zone ID of the source instance.
    shared_ptr<string> zoneId_ {};
    // The zone ID of the secondary node. If this parameter is set to the same value as the **ZoneId** parameter, it is a single-zone deployment. If this parameter is set to a different value from the **ZoneId** parameter, it is a multi-zone deployment.
    shared_ptr<string> zoneIdSlave1_ {};
    // <props="intl">The zone ID of the logger node. If this parameter is set to the same value as the **ZoneId** parameter, it is a single-zone deployment. If this parameter is set to a different value from the **ZoneId** parameter, it is a multi-zone deployment.
    // 
    // <props="china">The zone ID of the secondary node or logger node. If this parameter is set to the same value as the **ZoneId** parameter, it is a single-zone deployment. If this parameter is set to a different value from the **ZoneId** parameter, it is a multi-zone deployment.
    shared_ptr<string> zoneIdSlave2_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
