// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateGadOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGadOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoCreateProxy, autoCreateProxy_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BabelfishConfig, babelfishConfig_);
      DARABONBA_PTR_TO_JSON(BpeEnabled, bpeEnabled_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ColdDataEnabled, coldDataEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(CreateStrategy, createStrategy_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DBIsIgnoreCase, DBIsIgnoreCase_);
      DARABONBA_PTR_TO_JSON(DBParamGroupId, DBParamGroupId_);
      DARABONBA_PTR_TO_JSON(DBTimeZone, DBTimeZone_);
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(DbListMode, dbListMode_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_TO_JSON(MasterAccountExist, masterAccountExist_);
      DARABONBA_PTR_TO_JSON(MasterAccountName, masterAccountName_);
      DARABONBA_PTR_TO_JSON(MasterAccountPassword, masterAccountPassword_);
      DARABONBA_PTR_TO_JSON(MasterDatabaseName, masterDatabaseName_);
      DARABONBA_PTR_TO_JSON(MasterEngineArchType, masterEngineArchType_);
      DARABONBA_PTR_TO_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_TO_JSON(MasterRegion, masterRegion_);
      DARABONBA_PTR_TO_JSON(MasterShardAccountName, masterShardAccountName_);
      DARABONBA_PTR_TO_JSON(MasterShardAccountPassword, masterShardAccountPassword_);
      DARABONBA_PTR_TO_JSON(NeedCreateSlave, needCreateSlave_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(ServerlessConfig, serverlessConfig_);
      DARABONBA_PTR_TO_JSON(SlaveAccountExist, slaveAccountExist_);
      DARABONBA_PTR_TO_JSON(SlaveAccountName, slaveAccountName_);
      DARABONBA_PTR_TO_JSON(SlaveAccountPassword, slaveAccountPassword_);
      DARABONBA_PTR_TO_JSON(SlaveDatabaseName, slaveDatabaseName_);
      DARABONBA_PTR_TO_JSON(SlaveEngineArchType, slaveEngineArchType_);
      DARABONBA_PTR_TO_JSON(SlaveInstanceId, slaveInstanceId_);
      DARABONBA_PTR_TO_JSON(SlaveReadOnly, slaveReadOnly_);
      DARABONBA_PTR_TO_JSON(SlaveRegion, slaveRegion_);
      DARABONBA_PTR_TO_JSON(StorageAutoScale, storageAutoScale_);
      DARABONBA_PTR_TO_JSON(StorageThreshold, storageThreshold_);
      DARABONBA_PTR_TO_JSON(StorageUpperBound, storageUpperBound_);
      DARABONBA_PTR_TO_JSON(SyncAccountType, syncAccountType_);
      DARABONBA_PTR_TO_JSON(SyncArchitecture, syncArchitecture_);
      DARABONBA_PTR_TO_JSON(SyncConflict, syncConflict_);
      DARABONBA_PTR_TO_JSON(SystemDBCharset, systemDBCharset_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetDedicatedHostIdForLog, targetDedicatedHostIdForLog_);
      DARABONBA_PTR_TO_JSON(TargetDedicatedHostIdForMaster, targetDedicatedHostIdForMaster_);
      DARABONBA_PTR_TO_JSON(TargetDedicatedHostIdForSlave, targetDedicatedHostIdForSlave_);
      DARABONBA_PTR_TO_JSON(TargetMinorVersion, targetMinorVersion_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(UserBackupId, userBackupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WhitelistTemplateList, whitelistTemplateList_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave1, zoneIdSlave1_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave2, zoneIdSlave2_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGadOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoCreateProxy, autoCreateProxy_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BabelfishConfig, babelfishConfig_);
      DARABONBA_PTR_FROM_JSON(BpeEnabled, bpeEnabled_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ColdDataEnabled, coldDataEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(CreateStrategy, createStrategy_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DBIsIgnoreCase, DBIsIgnoreCase_);
      DARABONBA_PTR_FROM_JSON(DBParamGroupId, DBParamGroupId_);
      DARABONBA_PTR_FROM_JSON(DBTimeZone, DBTimeZone_);
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(DbListMode, dbListMode_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_FROM_JSON(MasterAccountExist, masterAccountExist_);
      DARABONBA_PTR_FROM_JSON(MasterAccountName, masterAccountName_);
      DARABONBA_PTR_FROM_JSON(MasterAccountPassword, masterAccountPassword_);
      DARABONBA_PTR_FROM_JSON(MasterDatabaseName, masterDatabaseName_);
      DARABONBA_PTR_FROM_JSON(MasterEngineArchType, masterEngineArchType_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_FROM_JSON(MasterRegion, masterRegion_);
      DARABONBA_PTR_FROM_JSON(MasterShardAccountName, masterShardAccountName_);
      DARABONBA_PTR_FROM_JSON(MasterShardAccountPassword, masterShardAccountPassword_);
      DARABONBA_PTR_FROM_JSON(NeedCreateSlave, needCreateSlave_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(ServerlessConfig, serverlessConfig_);
      DARABONBA_PTR_FROM_JSON(SlaveAccountExist, slaveAccountExist_);
      DARABONBA_PTR_FROM_JSON(SlaveAccountName, slaveAccountName_);
      DARABONBA_PTR_FROM_JSON(SlaveAccountPassword, slaveAccountPassword_);
      DARABONBA_PTR_FROM_JSON(SlaveDatabaseName, slaveDatabaseName_);
      DARABONBA_PTR_FROM_JSON(SlaveEngineArchType, slaveEngineArchType_);
      DARABONBA_PTR_FROM_JSON(SlaveInstanceId, slaveInstanceId_);
      DARABONBA_PTR_FROM_JSON(SlaveReadOnly, slaveReadOnly_);
      DARABONBA_PTR_FROM_JSON(SlaveRegion, slaveRegion_);
      DARABONBA_PTR_FROM_JSON(StorageAutoScale, storageAutoScale_);
      DARABONBA_PTR_FROM_JSON(StorageThreshold, storageThreshold_);
      DARABONBA_PTR_FROM_JSON(StorageUpperBound, storageUpperBound_);
      DARABONBA_PTR_FROM_JSON(SyncAccountType, syncAccountType_);
      DARABONBA_PTR_FROM_JSON(SyncArchitecture, syncArchitecture_);
      DARABONBA_PTR_FROM_JSON(SyncConflict, syncConflict_);
      DARABONBA_PTR_FROM_JSON(SystemDBCharset, systemDBCharset_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetDedicatedHostIdForLog, targetDedicatedHostIdForLog_);
      DARABONBA_PTR_FROM_JSON(TargetDedicatedHostIdForMaster, targetDedicatedHostIdForMaster_);
      DARABONBA_PTR_FROM_JSON(TargetDedicatedHostIdForSlave, targetDedicatedHostIdForSlave_);
      DARABONBA_PTR_FROM_JSON(TargetMinorVersion, targetMinorVersion_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(UserBackupId, userBackupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WhitelistTemplateList, whitelistTemplateList_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave1, zoneIdSlave1_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave2, zoneIdSlave2_);
    };
    CreateGadOrderRequest() = default ;
    CreateGadOrderRequest(const CreateGadOrderRequest &) = default ;
    CreateGadOrderRequest(CreateGadOrderRequest &&) = default ;
    CreateGadOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGadOrderRequest() = default ;
    CreateGadOrderRequest& operator=(const CreateGadOrderRequest &) = default ;
    CreateGadOrderRequest& operator=(CreateGadOrderRequest &&) = default ;
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
      // The tag key. You can call the [ListTagResources](https://help.aliyun.com/document_detail/191187.html) operation to query the tag key.
      // 
      // > - N indicates the sequence number of the tag key. For example, Tag.1.Key indicates the key of the first tag, and Tag.2.Key indicates the key of the second tag. You can specify 1 to 20 tag keys at a time.
      // - This parameter cannot be set to an empty string.
      shared_ptr<string> key_ {};
      // The tag value. You can call the [ListTagResources](https://help.aliyun.com/document_detail/191187.html) operation to query the tag value.
      // > - N indicates the sequence number of the tag value. For example, Tag.1.Value indicates the value of the first tag, and Tag.2.Value indicates the value of the second tag. You can specify 1 to 20 tag values at a time.
      // - This parameter can be set to an empty string.
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
      // Specifies whether to enable the smart pause and start feature for the Serverless instance. Valid values:
      // * **true**: enables the feature.
      // * **false**: disables the feature. This is the default value.
      // 
      // > This parameter is required only for MySQL and PostgreSQL Serverless instances. If no connections are established within 10 minutes, the instance enters the paused state. When a connection is established, the instance is automatically woken up.
      shared_ptr<bool> autoPause_ {};
      // The maximum number of RDS capacity units (RCUs) for automatic scaling of the instance. Valid values:
      // 
      // - MySQL: **1 to 32**
      // - SQL Server: **2 to 16**
      // - PostgreSQL: **1 to 14**
      // 
      // > The value of this parameter must be greater than or equal to the value of **MinCapacity**. Only **integers** are supported.
      shared_ptr<double> maxCapacity_ {};
      // The minimum number of RCUs for automatic scaling of the instance. Valid values:
      // 
      // - MySQL: **0.5 to 32**
      // - SQL Server: **2 to 16** (only integers are supported)
      // - PostgreSQL: **0.5 to 14**
      // 
      // > The value of this parameter must be less than or equal to the value of **MaxCapacity**.
      shared_ptr<double> minCapacity_ {};
      // Specifies whether to enable forced elastic scaling for the Serverless instance. Valid values:
      // * **true**: enables forced elastic scaling.
      // * **false**: disables forced elastic scaling. This is the default value.
      // 
      // > * This parameter is required only for MySQL and PostgreSQL Serverless instances. After this parameter is enabled, the instance will be unavailable for 30 to 120 seconds during forced scaling. Use this feature with caution based on your business requirements.
      // > * Elastic scaling of instance RCUs usually takes effect immediately. However, in some special cases (such as during the execution of large transactions), scaling cannot be completed immediately. In this case, you can enable this parameter to perform forced scaling.
      shared_ptr<bool> switchForce_ {};
    };

    virtual bool empty() const override { return this->amount_ == nullptr
        && this->autoCreateProxy_ == nullptr && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->babelfishConfig_ == nullptr && this->bpeEnabled_ == nullptr
        && this->burstingEnabled_ == nullptr && this->businessInfo_ == nullptr && this->category_ == nullptr && this->clientToken_ == nullptr && this->clusterId_ == nullptr
        && this->coldDataEnabled_ == nullptr && this->connectionMode_ == nullptr && this->connectionString_ == nullptr && this->createStrategy_ == nullptr && this->DBInstanceClass_ == nullptr
        && this->DBInstanceDescription_ == nullptr && this->DBInstanceNetType_ == nullptr && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->DBIsIgnoreCase_ == nullptr
        && this->DBParamGroupId_ == nullptr && this->DBTimeZone_ == nullptr && this->dbList_ == nullptr && this->dbListMode_ == nullptr && this->dedicatedHostGroupId_ == nullptr
        && this->deletionProtection_ == nullptr && this->dryRun_ == nullptr && this->encryptionKey_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr
        && this->instanceNetworkType_ == nullptr && this->ioAccelerationEnabled_ == nullptr && this->masterAccountExist_ == nullptr && this->masterAccountName_ == nullptr && this->masterAccountPassword_ == nullptr
        && this->masterDatabaseName_ == nullptr && this->masterEngineArchType_ == nullptr && this->masterInstanceId_ == nullptr && this->masterRegion_ == nullptr && this->masterShardAccountName_ == nullptr
        && this->masterShardAccountPassword_ == nullptr && this->needCreateSlave_ == nullptr && this->ownerId_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr
        && this->port_ == nullptr && this->privateIpAddress_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->roleARN_ == nullptr
        && this->securityIPList_ == nullptr && this->serverlessConfig_ == nullptr && this->slaveAccountExist_ == nullptr && this->slaveAccountName_ == nullptr && this->slaveAccountPassword_ == nullptr
        && this->slaveDatabaseName_ == nullptr && this->slaveEngineArchType_ == nullptr && this->slaveInstanceId_ == nullptr && this->slaveReadOnly_ == nullptr && this->slaveRegion_ == nullptr
        && this->storageAutoScale_ == nullptr && this->storageThreshold_ == nullptr && this->storageUpperBound_ == nullptr && this->syncAccountType_ == nullptr && this->syncArchitecture_ == nullptr
        && this->syncConflict_ == nullptr && this->systemDBCharset_ == nullptr && this->tag_ == nullptr && this->targetDedicatedHostIdForLog_ == nullptr && this->targetDedicatedHostIdForMaster_ == nullptr
        && this->targetDedicatedHostIdForSlave_ == nullptr && this->targetMinorVersion_ == nullptr && this->usedTime_ == nullptr && this->userBackupId_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->whitelistTemplateList_ == nullptr && this->zoneId_ == nullptr && this->zoneIdSlave1_ == nullptr && this->zoneIdSlave2_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateGadOrderRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoCreateProxy Field Functions 
    bool hasAutoCreateProxy() const { return this->autoCreateProxy_ != nullptr;};
    void deleteAutoCreateProxy() { this->autoCreateProxy_ = nullptr;};
    inline bool getAutoCreateProxy() const { DARABONBA_PTR_GET_DEFAULT(autoCreateProxy_, false) };
    inline CreateGadOrderRequest& setAutoCreateProxy(bool autoCreateProxy) { DARABONBA_PTR_SET_VALUE(autoCreateProxy_, autoCreateProxy) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateGadOrderRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateGadOrderRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // babelfishConfig Field Functions 
    bool hasBabelfishConfig() const { return this->babelfishConfig_ != nullptr;};
    void deleteBabelfishConfig() { this->babelfishConfig_ = nullptr;};
    inline string getBabelfishConfig() const { DARABONBA_PTR_GET_DEFAULT(babelfishConfig_, "") };
    inline CreateGadOrderRequest& setBabelfishConfig(string babelfishConfig) { DARABONBA_PTR_SET_VALUE(babelfishConfig_, babelfishConfig) };


    // bpeEnabled Field Functions 
    bool hasBpeEnabled() const { return this->bpeEnabled_ != nullptr;};
    void deleteBpeEnabled() { this->bpeEnabled_ = nullptr;};
    inline string getBpeEnabled() const { DARABONBA_PTR_GET_DEFAULT(bpeEnabled_, "") };
    inline CreateGadOrderRequest& setBpeEnabled(string bpeEnabled) { DARABONBA_PTR_SET_VALUE(bpeEnabled_, bpeEnabled) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CreateGadOrderRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline CreateGadOrderRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateGadOrderRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateGadOrderRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateGadOrderRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // coldDataEnabled Field Functions 
    bool hasColdDataEnabled() const { return this->coldDataEnabled_ != nullptr;};
    void deleteColdDataEnabled() { this->coldDataEnabled_ = nullptr;};
    inline bool getColdDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(coldDataEnabled_, false) };
    inline CreateGadOrderRequest& setColdDataEnabled(bool coldDataEnabled) { DARABONBA_PTR_SET_VALUE(coldDataEnabled_, coldDataEnabled) };


    // connectionMode Field Functions 
    bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
    void deleteConnectionMode() { this->connectionMode_ = nullptr;};
    inline string getConnectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
    inline CreateGadOrderRequest& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline CreateGadOrderRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // createStrategy Field Functions 
    bool hasCreateStrategy() const { return this->createStrategy_ != nullptr;};
    void deleteCreateStrategy() { this->createStrategy_ = nullptr;};
    inline string getCreateStrategy() const { DARABONBA_PTR_GET_DEFAULT(createStrategy_, "") };
    inline CreateGadOrderRequest& setCreateStrategy(string createStrategy) { DARABONBA_PTR_SET_VALUE(createStrategy_, createStrategy) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CreateGadOrderRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateGadOrderRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceNetType Field Functions 
    bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
    void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
    inline string getDBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
    inline CreateGadOrderRequest& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline CreateGadOrderRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline CreateGadOrderRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // DBIsIgnoreCase Field Functions 
    bool hasDBIsIgnoreCase() const { return this->DBIsIgnoreCase_ != nullptr;};
    void deleteDBIsIgnoreCase() { this->DBIsIgnoreCase_ = nullptr;};
    inline string getDBIsIgnoreCase() const { DARABONBA_PTR_GET_DEFAULT(DBIsIgnoreCase_, "") };
    inline CreateGadOrderRequest& setDBIsIgnoreCase(string DBIsIgnoreCase) { DARABONBA_PTR_SET_VALUE(DBIsIgnoreCase_, DBIsIgnoreCase) };


    // DBParamGroupId Field Functions 
    bool hasDBParamGroupId() const { return this->DBParamGroupId_ != nullptr;};
    void deleteDBParamGroupId() { this->DBParamGroupId_ = nullptr;};
    inline string getDBParamGroupId() const { DARABONBA_PTR_GET_DEFAULT(DBParamGroupId_, "") };
    inline CreateGadOrderRequest& setDBParamGroupId(string DBParamGroupId) { DARABONBA_PTR_SET_VALUE(DBParamGroupId_, DBParamGroupId) };


    // DBTimeZone Field Functions 
    bool hasDBTimeZone() const { return this->DBTimeZone_ != nullptr;};
    void deleteDBTimeZone() { this->DBTimeZone_ = nullptr;};
    inline string getDBTimeZone() const { DARABONBA_PTR_GET_DEFAULT(DBTimeZone_, "") };
    inline CreateGadOrderRequest& setDBTimeZone(string DBTimeZone) { DARABONBA_PTR_SET_VALUE(DBTimeZone_, DBTimeZone) };


    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline string getDbList() const { DARABONBA_PTR_GET_DEFAULT(dbList_, "") };
    inline CreateGadOrderRequest& setDbList(string dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };


    // dbListMode Field Functions 
    bool hasDbListMode() const { return this->dbListMode_ != nullptr;};
    void deleteDbListMode() { this->dbListMode_ = nullptr;};
    inline int32_t getDbListMode() const { DARABONBA_PTR_GET_DEFAULT(dbListMode_, 0) };
    inline CreateGadOrderRequest& setDbListMode(int32_t dbListMode) { DARABONBA_PTR_SET_VALUE(dbListMode_, dbListMode) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline CreateGadOrderRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateGadOrderRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateGadOrderRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline CreateGadOrderRequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateGadOrderRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateGadOrderRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline CreateGadOrderRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string getIoAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline CreateGadOrderRequest& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // masterAccountExist Field Functions 
    bool hasMasterAccountExist() const { return this->masterAccountExist_ != nullptr;};
    void deleteMasterAccountExist() { this->masterAccountExist_ = nullptr;};
    inline bool getMasterAccountExist() const { DARABONBA_PTR_GET_DEFAULT(masterAccountExist_, false) };
    inline CreateGadOrderRequest& setMasterAccountExist(bool masterAccountExist) { DARABONBA_PTR_SET_VALUE(masterAccountExist_, masterAccountExist) };


    // masterAccountName Field Functions 
    bool hasMasterAccountName() const { return this->masterAccountName_ != nullptr;};
    void deleteMasterAccountName() { this->masterAccountName_ = nullptr;};
    inline string getMasterAccountName() const { DARABONBA_PTR_GET_DEFAULT(masterAccountName_, "") };
    inline CreateGadOrderRequest& setMasterAccountName(string masterAccountName) { DARABONBA_PTR_SET_VALUE(masterAccountName_, masterAccountName) };


    // masterAccountPassword Field Functions 
    bool hasMasterAccountPassword() const { return this->masterAccountPassword_ != nullptr;};
    void deleteMasterAccountPassword() { this->masterAccountPassword_ = nullptr;};
    inline string getMasterAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(masterAccountPassword_, "") };
    inline CreateGadOrderRequest& setMasterAccountPassword(string masterAccountPassword) { DARABONBA_PTR_SET_VALUE(masterAccountPassword_, masterAccountPassword) };


    // masterDatabaseName Field Functions 
    bool hasMasterDatabaseName() const { return this->masterDatabaseName_ != nullptr;};
    void deleteMasterDatabaseName() { this->masterDatabaseName_ = nullptr;};
    inline string getMasterDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(masterDatabaseName_, "") };
    inline CreateGadOrderRequest& setMasterDatabaseName(string masterDatabaseName) { DARABONBA_PTR_SET_VALUE(masterDatabaseName_, masterDatabaseName) };


    // masterEngineArchType Field Functions 
    bool hasMasterEngineArchType() const { return this->masterEngineArchType_ != nullptr;};
    void deleteMasterEngineArchType() { this->masterEngineArchType_ = nullptr;};
    inline string getMasterEngineArchType() const { DARABONBA_PTR_GET_DEFAULT(masterEngineArchType_, "") };
    inline CreateGadOrderRequest& setMasterEngineArchType(string masterEngineArchType) { DARABONBA_PTR_SET_VALUE(masterEngineArchType_, masterEngineArchType) };


    // masterInstanceId Field Functions 
    bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
    void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
    inline string getMasterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
    inline CreateGadOrderRequest& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


    // masterRegion Field Functions 
    bool hasMasterRegion() const { return this->masterRegion_ != nullptr;};
    void deleteMasterRegion() { this->masterRegion_ = nullptr;};
    inline string getMasterRegion() const { DARABONBA_PTR_GET_DEFAULT(masterRegion_, "") };
    inline CreateGadOrderRequest& setMasterRegion(string masterRegion) { DARABONBA_PTR_SET_VALUE(masterRegion_, masterRegion) };


    // masterShardAccountName Field Functions 
    bool hasMasterShardAccountName() const { return this->masterShardAccountName_ != nullptr;};
    void deleteMasterShardAccountName() { this->masterShardAccountName_ = nullptr;};
    inline string getMasterShardAccountName() const { DARABONBA_PTR_GET_DEFAULT(masterShardAccountName_, "") };
    inline CreateGadOrderRequest& setMasterShardAccountName(string masterShardAccountName) { DARABONBA_PTR_SET_VALUE(masterShardAccountName_, masterShardAccountName) };


    // masterShardAccountPassword Field Functions 
    bool hasMasterShardAccountPassword() const { return this->masterShardAccountPassword_ != nullptr;};
    void deleteMasterShardAccountPassword() { this->masterShardAccountPassword_ = nullptr;};
    inline string getMasterShardAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(masterShardAccountPassword_, "") };
    inline CreateGadOrderRequest& setMasterShardAccountPassword(string masterShardAccountPassword) { DARABONBA_PTR_SET_VALUE(masterShardAccountPassword_, masterShardAccountPassword) };


    // needCreateSlave Field Functions 
    bool hasNeedCreateSlave() const { return this->needCreateSlave_ != nullptr;};
    void deleteNeedCreateSlave() { this->needCreateSlave_ = nullptr;};
    inline bool getNeedCreateSlave() const { DARABONBA_PTR_GET_DEFAULT(needCreateSlave_, false) };
    inline CreateGadOrderRequest& setNeedCreateSlave(bool needCreateSlave) { DARABONBA_PTR_SET_VALUE(needCreateSlave_, needCreateSlave) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateGadOrderRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateGadOrderRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateGadOrderRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateGadOrderRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateGadOrderRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGadOrderRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateGadOrderRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // roleARN Field Functions 
    bool hasRoleARN() const { return this->roleARN_ != nullptr;};
    void deleteRoleARN() { this->roleARN_ = nullptr;};
    inline string getRoleARN() const { DARABONBA_PTR_GET_DEFAULT(roleARN_, "") };
    inline CreateGadOrderRequest& setRoleARN(string roleARN) { DARABONBA_PTR_SET_VALUE(roleARN_, roleARN) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateGadOrderRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // serverlessConfig Field Functions 
    bool hasServerlessConfig() const { return this->serverlessConfig_ != nullptr;};
    void deleteServerlessConfig() { this->serverlessConfig_ = nullptr;};
    inline const CreateGadOrderRequest::ServerlessConfig & getServerlessConfig() const { DARABONBA_PTR_GET_CONST(serverlessConfig_, CreateGadOrderRequest::ServerlessConfig) };
    inline CreateGadOrderRequest::ServerlessConfig getServerlessConfig() { DARABONBA_PTR_GET(serverlessConfig_, CreateGadOrderRequest::ServerlessConfig) };
    inline CreateGadOrderRequest& setServerlessConfig(const CreateGadOrderRequest::ServerlessConfig & serverlessConfig) { DARABONBA_PTR_SET_VALUE(serverlessConfig_, serverlessConfig) };
    inline CreateGadOrderRequest& setServerlessConfig(CreateGadOrderRequest::ServerlessConfig && serverlessConfig) { DARABONBA_PTR_SET_RVALUE(serverlessConfig_, serverlessConfig) };


    // slaveAccountExist Field Functions 
    bool hasSlaveAccountExist() const { return this->slaveAccountExist_ != nullptr;};
    void deleteSlaveAccountExist() { this->slaveAccountExist_ = nullptr;};
    inline bool getSlaveAccountExist() const { DARABONBA_PTR_GET_DEFAULT(slaveAccountExist_, false) };
    inline CreateGadOrderRequest& setSlaveAccountExist(bool slaveAccountExist) { DARABONBA_PTR_SET_VALUE(slaveAccountExist_, slaveAccountExist) };


    // slaveAccountName Field Functions 
    bool hasSlaveAccountName() const { return this->slaveAccountName_ != nullptr;};
    void deleteSlaveAccountName() { this->slaveAccountName_ = nullptr;};
    inline string getSlaveAccountName() const { DARABONBA_PTR_GET_DEFAULT(slaveAccountName_, "") };
    inline CreateGadOrderRequest& setSlaveAccountName(string slaveAccountName) { DARABONBA_PTR_SET_VALUE(slaveAccountName_, slaveAccountName) };


    // slaveAccountPassword Field Functions 
    bool hasSlaveAccountPassword() const { return this->slaveAccountPassword_ != nullptr;};
    void deleteSlaveAccountPassword() { this->slaveAccountPassword_ = nullptr;};
    inline string getSlaveAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(slaveAccountPassword_, "") };
    inline CreateGadOrderRequest& setSlaveAccountPassword(string slaveAccountPassword) { DARABONBA_PTR_SET_VALUE(slaveAccountPassword_, slaveAccountPassword) };


    // slaveDatabaseName Field Functions 
    bool hasSlaveDatabaseName() const { return this->slaveDatabaseName_ != nullptr;};
    void deleteSlaveDatabaseName() { this->slaveDatabaseName_ = nullptr;};
    inline string getSlaveDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(slaveDatabaseName_, "") };
    inline CreateGadOrderRequest& setSlaveDatabaseName(string slaveDatabaseName) { DARABONBA_PTR_SET_VALUE(slaveDatabaseName_, slaveDatabaseName) };


    // slaveEngineArchType Field Functions 
    bool hasSlaveEngineArchType() const { return this->slaveEngineArchType_ != nullptr;};
    void deleteSlaveEngineArchType() { this->slaveEngineArchType_ = nullptr;};
    inline string getSlaveEngineArchType() const { DARABONBA_PTR_GET_DEFAULT(slaveEngineArchType_, "") };
    inline CreateGadOrderRequest& setSlaveEngineArchType(string slaveEngineArchType) { DARABONBA_PTR_SET_VALUE(slaveEngineArchType_, slaveEngineArchType) };


    // slaveInstanceId Field Functions 
    bool hasSlaveInstanceId() const { return this->slaveInstanceId_ != nullptr;};
    void deleteSlaveInstanceId() { this->slaveInstanceId_ = nullptr;};
    inline string getSlaveInstanceId() const { DARABONBA_PTR_GET_DEFAULT(slaveInstanceId_, "") };
    inline CreateGadOrderRequest& setSlaveInstanceId(string slaveInstanceId) { DARABONBA_PTR_SET_VALUE(slaveInstanceId_, slaveInstanceId) };


    // slaveReadOnly Field Functions 
    bool hasSlaveReadOnly() const { return this->slaveReadOnly_ != nullptr;};
    void deleteSlaveReadOnly() { this->slaveReadOnly_ = nullptr;};
    inline bool getSlaveReadOnly() const { DARABONBA_PTR_GET_DEFAULT(slaveReadOnly_, false) };
    inline CreateGadOrderRequest& setSlaveReadOnly(bool slaveReadOnly) { DARABONBA_PTR_SET_VALUE(slaveReadOnly_, slaveReadOnly) };


    // slaveRegion Field Functions 
    bool hasSlaveRegion() const { return this->slaveRegion_ != nullptr;};
    void deleteSlaveRegion() { this->slaveRegion_ = nullptr;};
    inline string getSlaveRegion() const { DARABONBA_PTR_GET_DEFAULT(slaveRegion_, "") };
    inline CreateGadOrderRequest& setSlaveRegion(string slaveRegion) { DARABONBA_PTR_SET_VALUE(slaveRegion_, slaveRegion) };


    // storageAutoScale Field Functions 
    bool hasStorageAutoScale() const { return this->storageAutoScale_ != nullptr;};
    void deleteStorageAutoScale() { this->storageAutoScale_ = nullptr;};
    inline string getStorageAutoScale() const { DARABONBA_PTR_GET_DEFAULT(storageAutoScale_, "") };
    inline CreateGadOrderRequest& setStorageAutoScale(string storageAutoScale) { DARABONBA_PTR_SET_VALUE(storageAutoScale_, storageAutoScale) };


    // storageThreshold Field Functions 
    bool hasStorageThreshold() const { return this->storageThreshold_ != nullptr;};
    void deleteStorageThreshold() { this->storageThreshold_ = nullptr;};
    inline int32_t getStorageThreshold() const { DARABONBA_PTR_GET_DEFAULT(storageThreshold_, 0) };
    inline CreateGadOrderRequest& setStorageThreshold(int32_t storageThreshold) { DARABONBA_PTR_SET_VALUE(storageThreshold_, storageThreshold) };


    // storageUpperBound Field Functions 
    bool hasStorageUpperBound() const { return this->storageUpperBound_ != nullptr;};
    void deleteStorageUpperBound() { this->storageUpperBound_ = nullptr;};
    inline int32_t getStorageUpperBound() const { DARABONBA_PTR_GET_DEFAULT(storageUpperBound_, 0) };
    inline CreateGadOrderRequest& setStorageUpperBound(int32_t storageUpperBound) { DARABONBA_PTR_SET_VALUE(storageUpperBound_, storageUpperBound) };


    // syncAccountType Field Functions 
    bool hasSyncAccountType() const { return this->syncAccountType_ != nullptr;};
    void deleteSyncAccountType() { this->syncAccountType_ = nullptr;};
    inline string getSyncAccountType() const { DARABONBA_PTR_GET_DEFAULT(syncAccountType_, "") };
    inline CreateGadOrderRequest& setSyncAccountType(string syncAccountType) { DARABONBA_PTR_SET_VALUE(syncAccountType_, syncAccountType) };


    // syncArchitecture Field Functions 
    bool hasSyncArchitecture() const { return this->syncArchitecture_ != nullptr;};
    void deleteSyncArchitecture() { this->syncArchitecture_ = nullptr;};
    inline string getSyncArchitecture() const { DARABONBA_PTR_GET_DEFAULT(syncArchitecture_, "") };
    inline CreateGadOrderRequest& setSyncArchitecture(string syncArchitecture) { DARABONBA_PTR_SET_VALUE(syncArchitecture_, syncArchitecture) };


    // syncConflict Field Functions 
    bool hasSyncConflict() const { return this->syncConflict_ != nullptr;};
    void deleteSyncConflict() { this->syncConflict_ = nullptr;};
    inline string getSyncConflict() const { DARABONBA_PTR_GET_DEFAULT(syncConflict_, "") };
    inline CreateGadOrderRequest& setSyncConflict(string syncConflict) { DARABONBA_PTR_SET_VALUE(syncConflict_, syncConflict) };


    // systemDBCharset Field Functions 
    bool hasSystemDBCharset() const { return this->systemDBCharset_ != nullptr;};
    void deleteSystemDBCharset() { this->systemDBCharset_ = nullptr;};
    inline string getSystemDBCharset() const { DARABONBA_PTR_GET_DEFAULT(systemDBCharset_, "") };
    inline CreateGadOrderRequest& setSystemDBCharset(string systemDBCharset) { DARABONBA_PTR_SET_VALUE(systemDBCharset_, systemDBCharset) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateGadOrderRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateGadOrderRequest::Tag>) };
    inline vector<CreateGadOrderRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateGadOrderRequest::Tag>) };
    inline CreateGadOrderRequest& setTag(const vector<CreateGadOrderRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateGadOrderRequest& setTag(vector<CreateGadOrderRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetDedicatedHostIdForLog Field Functions 
    bool hasTargetDedicatedHostIdForLog() const { return this->targetDedicatedHostIdForLog_ != nullptr;};
    void deleteTargetDedicatedHostIdForLog() { this->targetDedicatedHostIdForLog_ = nullptr;};
    inline string getTargetDedicatedHostIdForLog() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForLog_, "") };
    inline CreateGadOrderRequest& setTargetDedicatedHostIdForLog(string targetDedicatedHostIdForLog) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForLog_, targetDedicatedHostIdForLog) };


    // targetDedicatedHostIdForMaster Field Functions 
    bool hasTargetDedicatedHostIdForMaster() const { return this->targetDedicatedHostIdForMaster_ != nullptr;};
    void deleteTargetDedicatedHostIdForMaster() { this->targetDedicatedHostIdForMaster_ = nullptr;};
    inline string getTargetDedicatedHostIdForMaster() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForMaster_, "") };
    inline CreateGadOrderRequest& setTargetDedicatedHostIdForMaster(string targetDedicatedHostIdForMaster) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForMaster_, targetDedicatedHostIdForMaster) };


    // targetDedicatedHostIdForSlave Field Functions 
    bool hasTargetDedicatedHostIdForSlave() const { return this->targetDedicatedHostIdForSlave_ != nullptr;};
    void deleteTargetDedicatedHostIdForSlave() { this->targetDedicatedHostIdForSlave_ = nullptr;};
    inline string getTargetDedicatedHostIdForSlave() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForSlave_, "") };
    inline CreateGadOrderRequest& setTargetDedicatedHostIdForSlave(string targetDedicatedHostIdForSlave) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForSlave_, targetDedicatedHostIdForSlave) };


    // targetMinorVersion Field Functions 
    bool hasTargetMinorVersion() const { return this->targetMinorVersion_ != nullptr;};
    void deleteTargetMinorVersion() { this->targetMinorVersion_ = nullptr;};
    inline string getTargetMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMinorVersion_, "") };
    inline CreateGadOrderRequest& setTargetMinorVersion(string targetMinorVersion) { DARABONBA_PTR_SET_VALUE(targetMinorVersion_, targetMinorVersion) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateGadOrderRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // userBackupId Field Functions 
    bool hasUserBackupId() const { return this->userBackupId_ != nullptr;};
    void deleteUserBackupId() { this->userBackupId_ = nullptr;};
    inline string getUserBackupId() const { DARABONBA_PTR_GET_DEFAULT(userBackupId_, "") };
    inline CreateGadOrderRequest& setUserBackupId(string userBackupId) { DARABONBA_PTR_SET_VALUE(userBackupId_, userBackupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateGadOrderRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateGadOrderRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // whitelistTemplateList Field Functions 
    bool hasWhitelistTemplateList() const { return this->whitelistTemplateList_ != nullptr;};
    void deleteWhitelistTemplateList() { this->whitelistTemplateList_ = nullptr;};
    inline string getWhitelistTemplateList() const { DARABONBA_PTR_GET_DEFAULT(whitelistTemplateList_, "") };
    inline CreateGadOrderRequest& setWhitelistTemplateList(string whitelistTemplateList) { DARABONBA_PTR_SET_VALUE(whitelistTemplateList_, whitelistTemplateList) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateGadOrderRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdSlave1 Field Functions 
    bool hasZoneIdSlave1() const { return this->zoneIdSlave1_ != nullptr;};
    void deleteZoneIdSlave1() { this->zoneIdSlave1_ = nullptr;};
    inline string getZoneIdSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave1_, "") };
    inline CreateGadOrderRequest& setZoneIdSlave1(string zoneIdSlave1) { DARABONBA_PTR_SET_VALUE(zoneIdSlave1_, zoneIdSlave1) };


    // zoneIdSlave2 Field Functions 
    bool hasZoneIdSlave2() const { return this->zoneIdSlave2_ != nullptr;};
    void deleteZoneIdSlave2() { this->zoneIdSlave2_ = nullptr;};
    inline string getZoneIdSlave2() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave2_, "") };
    inline CreateGadOrderRequest& setZoneIdSlave2(string zoneIdSlave2) { DARABONBA_PTR_SET_VALUE(zoneIdSlave2_, zoneIdSlave2) };


  protected:
    // The number of ApsaraDB RDS for MySQL instances to be created. This parameter is applicable only when you create multiple ApsaraDB RDS for MySQL instances at a time.
    // 
    // Valid values: 1 to 20. Default value: 1.
    shared_ptr<int32_t> amount_ {};
    // Specifies whether to automatically create a proxy. Valid values:
    // 
    // - **true**: enables automatic creation. By default, a general-purpose proxy is created.
    // 
    // - **false**: disables automatic creation.
    shared_ptr<bool> autoCreateProxy_ {};
    // Specifies whether to enable auto-renewal upon expiration. Valid values:
    // - **false**: no. This is the default value.
    // - **true**: yes.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // - true: enables auto-renewal.
    // - false: disables auto-renewal.
    // 
    // Default value: false.
    shared_ptr<string> autoRenew_ {};
    // The configuration information of Babelfish for ApsaraDB RDS for PostgreSQL.
    // 
    // Configuration format: {"babelfishEnabled":"true","migrationMode":"xxxxxxx","masterUsername":"xxxxxxx","masterUserPassword":"xxxxxxxx"}
    // 
    // Parameter descriptions:
    // - **babelfishEnabled**: specifies whether to enable Babelfish. Set the value to **true** to enable Babelfish. By default, Babelfish is disabled if this parameter is not configured.
    // - **migrationMode**: the database mode. Set the value to **single-db** for the single-database mode or **multi-db** for the multi-database mode.
    // - **masterUsername**: the initial administrator account. The username must be 1 to 63 characters in length and can contain lowercase letters, digits, and underscores (_). It must start with a letter and end with a letter or digit. It cannot start with pg.
    // - **masterUserPassword**: the password of the administrator account. The password must be 8 to 32 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. Special characters include `! @ # $ % ^ & * () _ + - =`.
    // 
    // > This parameter is applicable only to ApsaraDB RDS for PostgreSQL instances. For more information about Babelfish for ApsaraDB RDS for PostgreSQL, see [Babelfish overview](https://help.aliyun.com/document_detail/428613.html).
    shared_ptr<string> babelfishConfig_ {};
    shared_ptr<string> bpeEnabled_ {};
    // Specifies whether to enable the I/O performance burst feature for ESSD AutoPL cloud disks. Valid values:
    // 
    // - **true**: enables the feature.
    // - **false**: disables the feature. This is the default value.
    // 
    // > This parameter is supported only when StorageType is set to ESSDAUTOPL.
    shared_ptr<bool> burstingEnabled_ {};
    // The additional parameter that specifies business information.
    shared_ptr<string> businessInfo_ {};
    // The instance edition. Valid values:
    // 
    // General instances:
    // Basic: Basic Edition.
    // HighAvailability: high-availability series.
    // cluster: Cluster Edition for MySQL or PostgreSQL.
    // AlwaysOn: Cluster Edition for SQL Server.
    // Finance: RDS Enterprise Edition.
    // Note: This parameter is required when you create an ApsaraDB RDS for SQL Server instance of the RDS Enterprise Edition, Basic Edition Standard, or Basic Edition Enterprise. For example, when you create a Basic Edition instance of the 2022 RDS Enterprise Edition (2022_ent), you must set this parameter to Basic.
    // Serverless instances:
    // serverless_basic: Serverless Basic Edition. This edition is active only for MySQL and PostgreSQL.
    // 
    // serverless_standard: Serverless high availability series. This edition is active only for MySQL and PostgreSQL.
    // 
    // serverless_ha: SQL Server Serverless high availability series.
    // 
    // Note: This parameter is required when PayType is set to Serverless.
    shared_ptr<string> category_ {};
    // The client token that is used to ensure the idempotence of the request. The portal rewrites this parameter as a random UUID.
    shared_ptr<string> clientToken_ {};
    // The instance ID.
    shared_ptr<string> clusterId_ {};
    // Specifies whether to enable the [data archiving](https://help.aliyun.com/document_detail/2701832.html) feature for premium performance disks. Valid values:
    // 
    // - **true**: enables the feature.
    // - **false**: disables the feature.
    shared_ptr<bool> coldDataEnabled_ {};
    // The access mode of the instance. Valid values:
    // * **Standard**: standard access mode.
    // * **Safe**: database proxy mode.
    // 
    // Default value: allocated by the RDS system.
    // > SQL Server 2012, 2016, and 2017 support only the standard access mode.
    shared_ptr<string> connectionMode_ {};
    // The database connection address.
    shared_ptr<string> connectionString_ {};
    // The policy for creating multiple instances at a time. This parameter takes effect only when the **Amount** parameter is set to a value greater than 1. Valid values:
    // * **Atomicity** (default): atomicity. All instances in the same batch are created successfully, or if one instance fails to be created, all instances fail to be created.
    // * **Partial**: non-atomicity. The creation of an instance is not affected by other instances in the same batch.
    shared_ptr<string> createStrategy_ {};
    // The instance type. Valid values:
    // - **selectdb.xlarge**: 4 cores, 32 GB.
    // - **selectdb.2xlarge**: 8 cores, 64 GB.
    // - **selectdb.4xlarge**: 16 cores, 128 GB.
    // - **selectdb.8xlarge**: 32 cores, 256 GB.
    // - **selectdb.16xlarge**: 64 cores, 512 GB.
    // - **selectdb.24xlarge**: 96 cores, 768 GB.
    // - **selectdb.32xlarge**: 128 cores, 1024 GB.
    shared_ptr<string> DBInstanceClass_ {};
    // The name of the instance. The name must be 2 to 255 characters in length. It must start with a letter or Chinese character and can contain letters, Chinese characters, digits, and hyphens (-).
    shared_ptr<string> DBInstanceDescription_ {};
    // The network connection type of the instance. Set the value to Intranet, which indicates an internal network connection.
    shared_ptr<string> DBInstanceNetType_ {};
    // Instance storage capacity of the instance. Instance storage capacity of a read-only instance must be greater than or equal to that of the primary instance. Valid values: See the **Storage Capacity** column in [Read-only instance types](https://help.aliyun.com/document_detail/145759.html). The value must be a multiple of 5. Unit: GB.
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The storage type of the instance. Valid values:
    // * **local_ssd**: premium local SSD.
    // * **cloud_ssd**: standard SSD.
    // * **cloud_essd**: PL1 ESSD.
    // * **cloud_essd2**: PL2 ESSD.
    // * **cloud_essd3**: PL3 ESSD.
    // * **general_essd**: premium performance disk.
    // 
    // 
    // > * If the primary ApsaraDB RDS for MySQL instance uses premium local SSDs, you can set this parameter only to **local_ssd**. If the primary instance uses cloud disks, you can set this parameter only to a cloud disk storage type.
    // > * ApsaraDB RDS for SQL Server supports only cloud disk storage types.
    shared_ptr<string> DBInstanceStorageType_ {};
    // Specifies whether table names are case-sensitive. Valid values:
    // * **true**: Table names are not case-sensitive. This is the default value.
    // * **false**: Table names are case-sensitive.
    shared_ptr<string> DBIsIgnoreCase_ {};
    // The ID of the parameter template. You can call the DescribeParameterGroups operation to query the ID.
    // > This parameter is supported only for MySQL and PostgreSQL. If you do not specify this parameter, the default parameter template is used. You can also create a custom parameter template and use it here.
    shared_ptr<string> DBParamGroupId_ {};
    // The time zone of the instance. This parameter takes effect only when **Engine** is set to **MySQL** or **PostgreSQL**.
    // 
    // - When **Engine** is set to **MySQL**:
    //     - The parameter settings configure the UTC time zone. Valid values: **-12:59** to **+13:00**.
    //     - An instance with Premium Local SSDs can use a named time zone, such as Asia/Hong_Kong. For more information about named time zones, see [Named time zones](https://help.aliyun.com/document_detail/297356.html).
    // - When **Engine** is set to **PostgreSQL**:
    //     - The parameter settings configure a named time zone. UTC time zones are not supported. For more information about named time zones, see [Named time zones](https://help.aliyun.com/document_detail/297356.html).
    //     - This parameter can be configured only for PostgreSQL instances that use cloud disks.
    // 
    // > - You can make parameter settings for the time zone when you purchase a primary instance. Read-only instances do not support time zone Settings and inherit the time zone of the primary instance.
    // > - If you do not make parameter settings for this parameter, the system selects the default time zone based on the region where the instance is created.
    shared_ptr<string> DBTimeZone_ {};
    // The objects to be migrated or synchronized, in JSON format. For more information, see [Description of migration, synchronization, or change tracking objects](https://help.aliyun.com/document_detail/209545.html).
    // 
    // - The DbList parameter supports up to 1 MB of data.
    // - If DbList contains filter conditions, the total length of DbList, including the filter conditions, cannot exceed 1 MB.
    // - For distributed tasks (such as migration or synchronization tasks with PolarDB-X 1.0 as the source), DbList is split based on physical table shards to generate multiple subtasks. The DbList of each subtask supports up to 1 MB of data.
    shared_ptr<string> dbList_ {};
    // The DbList mode for SQL Server disaster recovery. Set this parameter to 0. Valid values are 0, 1, and 2, and the value must be consistent within the same group.
    shared_ptr<int32_t> dbListMode_ {};
    // The ID of the existing dedicated cluster.
    shared_ptr<string> dedicatedHostGroupId_ {};
    // Specifies whether to enable deletion protection for the resource stack. Valid values:
    // - Enabled: enables deletion protection for the resource stack.
    // - Disabled (default): disables deletion protection for the resource stack. In this case, you can release the resource stack by using the console or calling the DeleteStack operation.
    // 
    // > The deletion protection settings for a nested resource stack are the same as those for the root resource stack.
    shared_ptr<bool> deletionProtection_ {};
    // Specifies whether to perform only a precheck. Valid values:
    // 
    // - **true**: yes. After the precheck succeeds, no changes are made to the instance.
    // - **false** (default): no. After the precheck succeeds, the database instance of the DTS task is modified and the task is run.
    shared_ptr<bool> dryRun_ {};
    // The ID of the encryption key. If encryption is disabled, this parameter is empty.
    // 
    // > After disk encryption is enabled for a cloud disk instance, it cannot be disabled.
    shared_ptr<string> encryptionKey_ {};
    // The database engine type.
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The database engine version of the instance. The valid values vary based on the database engine type.
    shared_ptr<string> engineVersion_ {};
    // The network type of the instance. Set the value to **VPC**.
    // 
    // > - Only VPCs are supported in Alibaba Cloud.
    // > - If you do not specify this parameter, the default value VPC is used.
    shared_ptr<string> instanceNetworkType_ {};
    // Specifies whether to enable the Buffer Pool Extension (BPE) feature for premium performance disks. Valid values:
    // 
    //  - **1**: enables the feature.
    //  - **0**: disables the feature.
    // 
    // > For more information about the Buffer Pool Extension (BPE) feature, see [Buffer Pool Extension (BPE)](https://help.aliyun.com/document_detail/2527067.html).
    shared_ptr<string> ioAccelerationEnabled_ {};
    // Specifies whether the primary instance account exists.
    shared_ptr<bool> masterAccountExist_ {};
    // The privileged account of the primary instance.
    shared_ptr<string> masterAccountName_ {};
    // The password of the primary instance account.
    shared_ptr<string> masterAccountPassword_ {};
    // This parameter is specific to MongoDB. The architecture type of the primary database. Valid values:
    // - 1: replica set.
    // - 2: sharded cluster.
    shared_ptr<string> masterDatabaseName_ {};
    // This parameter is specific to MongoDB. The architecture type of the primary database. Valid values:
    // - 1: replica set.
    // - 2: sharded cluster.
    shared_ptr<string> masterEngineArchType_ {};
    // The primary instance.
    shared_ptr<string> masterInstanceId_ {};
    // The region where the primary instance resides.
    shared_ptr<string> masterRegion_ {};
    // The shard account.
    shared_ptr<string> masterShardAccountName_ {};
    // The password of the shard account.
    shared_ptr<string> masterShardAccountPassword_ {};
    // Specifies whether to purchase a new secondary instance. If this parameter is set to false, an existing instance is used.
    shared_ptr<bool> needCreateSlave_ {};
    shared_ptr<string> ownerId_ {};
    // The billing method of the instance. Valid values:
    // - **PrePaid**: subscription.
    // - **PostPaid**: pay-as-you-go.
    // 
    // > This parameter is required.
    shared_ptr<string> payType_ {};
    // The billing method for subscription instances. Valid values:
    // 
    // - **Year**: yearly.
    // - **Month**: monthly.
    // 
    // > This parameter is valid and required only when the billing method is **PrePaid** (subscription).
    shared_ptr<string> period_ {};
    // The database service port of the destination instance.
    shared_ptr<string> port_ {};
    // Settings for the internal network IP address of the instance. The IP address must be within the IP address range of the specified vSwitch. By default, the system automatically allocates an IP address based on the VpcId and VSwitchId parameters.
    shared_ptr<string> privateIpAddress_ {};
    // The region ID of the primary instance.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The global resource descriptor (ARN) for the authorization of the RDS cloud service account by the primary account to access KMS. You can call the CheckCloudResourceAuthorized operation to query the ARN.
    // >Notice: When you enable cloud disk encryption, you must specify **RoleARN**.</notice>
    shared_ptr<string> roleARN_ {};
    // The IP addresses that are added to the whitelist of the instance. Separate multiple IP addresses with commas (,). Note: If you set this parameter to 127.0.0.1, access from all IP addresses is denied. If you set this parameter to 192.168.0.0/24, access from all IP addresses in the 192.168.0.XX format is allowed.
    shared_ptr<string> securityIPList_ {};
    // The settings of the Serverless instance. This parameter is required when you create a Serverless instance.
    shared_ptr<CreateGadOrderRequest::ServerlessConfig> serverlessConfig_ {};
    // Specifies whether the secondary instance account exists.
    shared_ptr<bool> slaveAccountExist_ {};
    // The account with the same name on the secondary instance.
    shared_ptr<string> slaveAccountName_ {};
    // The password of the secondary instance account.
    shared_ptr<string> slaveAccountPassword_ {};
    // The name of the secondary database.
    shared_ptr<string> slaveDatabaseName_ {};
    // This parameter is specific to MongoDB. The architecture type of the secondary database. Valid values:
    // - 1: replica set.
    // - 2: sharded cluster.
    shared_ptr<string> slaveEngineArchType_ {};
    // The secondary instance.
    shared_ptr<string> slaveInstanceId_ {};
    // Specifies whether the secondary instance is read-only.
    shared_ptr<bool> slaveReadOnly_ {};
    // The region where the secondary instance resides.
    shared_ptr<string> slaveRegion_ {};
    // Specifies whether to enable Automatic storage scaling for the Standard Edition cluster. Valid values:
    // 
    // - Enable: enables Automatic storage scaling.
    // - Disable: shutdown Automatic storage scaling.
    shared_ptr<string> storageAutoScale_ {};
    // The threshold (in percentage) that triggers automatic storage expansion. Valid values:
    // * **10**
    // * **20**
    // * **30**
    // * **40**
    // * **50**
    // 
    // > This parameter is required when **StorageAutoScale** is set to **Enable**.
    shared_ptr<int32_t> storageThreshold_ {};
    // The Settings for the upper limit of Automatic storage scaling for the Standard Edition cluster. Unit: GB.
    // 
    // > The maximum value is 32000.
    shared_ptr<int32_t> storageUpperBound_ {};
    // The synchronization account type.
    shared_ptr<string> syncAccountType_ {};
    // The synchronization topology. Valid values:
    // 
    // - **oneway**: one-way synchronization. This is the default value.
    // - **bidirectional**: two-way synchronization.
    shared_ptr<string> syncArchitecture_ {};
    // The conflict resolution policy.
    shared_ptr<string> syncConflict_ {};
    // **[Deprecated]** This parameter is deprecated and does not need to be configured.
    shared_ptr<string> systemDBCharset_ {};
    // The tags of the data migration instance. This parameter is used as a filter. If this parameter is not empty, only the instance tasks that have the specified tags are returned.
    shared_ptr<vector<CreateGadOrderRequest::Tag>> tag_ {};
    // The ID of the host on which the logger instance is created in the dedicated cluster.
    // 
    // This parameter is required when you create an RDS Enterprise Edition instance in a dedicated cluster. If you do not specify this parameter, the system automatically allocates a host by default.
    // 
    // - You can invoke the DescribeDedicatedHosts operation to query the host information in the dedicated cluster.
    // - If no hosts are active, you can invoke the CreateDedicatedHost operation to create a host.
    shared_ptr<string> targetDedicatedHostIdForLog_ {};
    // The ID of the host on which the primary instance is created in the dedicated cluster.
    // 
    // This parameter is required when you create an instance in a dedicated cluster. If you do not specify this parameter, the system automatically assigns a host.
    // 
    // You can call the DescribeDedicatedHosts operation to query the host information in the dedicated cluster.
    // If no hosts are available, you can call the CreateDedicatedHost operation to create a host.
    shared_ptr<string> targetDedicatedHostIdForMaster_ {};
    // The ID of the host on which the secondary instance is created in the dedicated cluster.
    // 
    // This parameter is required when you create a high availability series or RDS Enterprise Edition instance in a dedicated cluster. If you do not specify this parameter, the system automatically allocates a host by default.
    // 
    // - You can invoke the DescribeDedicatedHosts operation to query the host information in the dedicated cluster.
    // - If no hosts are active, you can invoke the CreateDedicatedHost operation to create a host.
    shared_ptr<string> targetDedicatedHostIdForSlave_ {};
    // The minor engine version of the ApsaraDB RDS instance. This parameter is required only when you create a MySQL or PostgreSQL instance.
    shared_ptr<string> targetMinorVersion_ {};
    // The purchase duration for subscription instances.
    // - When **Period** is set to **Month**, valid values are 1, 2, 3, 4, 5, 6, 7, 8, and 9.
    // - When **Period** is set to **Year**, valid values are 1, 2, 3, and 5.
    // > - This parameter is valid and required only when **PayType** is set to **PrePaid**.
    // - For the billing method of subscription instances, you can specify it in the **Period** parameter.
    shared_ptr<string> usedTime_ {};
    // The ID of the user backup. You can call the ListUserBackupFiles operation to query the ID. If you specify this parameter, the instance is created based on the user backup.
    // 
    // If you specify this parameter, the following limits apply:
    // 
    // - The PayType parameter must be set to Postpaid.
    // - The Engine parameter must be set to MySQL.
    // - The EngineVersion parameter must be set to 5.7.
    // - The Category parameter must be set to Basic.
    shared_ptr<string> userBackupId_ {};
    // The ID of the vSwitch in the VPC.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC.
    shared_ptr<string> vpcId_ {};
    // The whitelist. To configure multiple IP addresses, separate the IP addresses or CIDR blocks with commas (,) without spaces before or after the commas. Example: `192.168.0.1,172.16.213.9`.
    shared_ptr<string> whitelistTemplateList_ {};
    // The zone ID of the primary node.
    shared_ptr<string> zoneId_ {};
    // The zone ID of the secondary node.
    // 
    // - If you set this parameter to **Auto**, it indicates a multi-zone deployment and the system automatically selects an active zone for the secondary node.
    // - If you set this parameter to the same value as **ZoneId**, it is a single-zone deployment.
    // - If you set this parameter to a value different from **ZoneId**, it is a multi-zone deployment.
    shared_ptr<string> zoneIdSlave1_ {};
    // The secondary zone 2.
    // > This parameter is active only for instances of the RDS Enterprise Edition.
    shared_ptr<string> zoneIdSlave2_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
