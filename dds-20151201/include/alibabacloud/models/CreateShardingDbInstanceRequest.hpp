// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESHARDINGDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESHARDINGDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class CreateShardingDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateShardingDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigServer, configServer_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(GlobalSecurityGroupIds, globalSecurityGroupIds_);
      DARABONBA_PTR_TO_JSON(HiddenZoneId, hiddenZoneId_);
      DARABONBA_PTR_TO_JSON(Mongos, mongos_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicaSet, replicaSet_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SrcDBInstanceId, srcDBInstanceId_);
      DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
      DARABONBA_PTR_TO_JSON(StorageEngine, storageEngine_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateShardingDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigServer, configServer_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupIds, globalSecurityGroupIds_);
      DARABONBA_PTR_FROM_JSON(HiddenZoneId, hiddenZoneId_);
      DARABONBA_PTR_FROM_JSON(Mongos, mongos_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicaSet, replicaSet_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SrcDBInstanceId, srcDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
      DARABONBA_PTR_FROM_JSON(StorageEngine, storageEngine_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateShardingDBInstanceRequest() = default ;
    CreateShardingDBInstanceRequest(const CreateShardingDBInstanceRequest &) = default ;
    CreateShardingDBInstanceRequest(CreateShardingDBInstanceRequest &&) = default ;
    CreateShardingDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateShardingDBInstanceRequest() = default ;
    CreateShardingDBInstanceRequest& operator=(const CreateShardingDBInstanceRequest &) = default ;
    CreateShardingDBInstanceRequest& operator=(CreateShardingDBInstanceRequest &&) = default ;
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
      // The tag key.
      // 
      // >  **N** specifies the serial number of the tag. For example, **Tag.1.Key** specifies the key of the first tag and **Tag.2.Key** specifies the key of the second tag.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // >  **N** specifies the serial number of the tag. For example, **Tag.1.Value** specifies the value of the first tag and Tag.2.Value specifies the value of the second tag.
      shared_ptr<string> value_ {};
    };

    class ReplicaSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReplicaSet& obj) { 
        DARABONBA_PTR_TO_JSON(Class, class_);
        DARABONBA_PTR_TO_JSON(ReadonlyReplicas, readonlyReplicas_);
        DARABONBA_PTR_TO_JSON(Storage, storage_);
      };
      friend void from_json(const Darabonba::Json& j, ReplicaSet& obj) { 
        DARABONBA_PTR_FROM_JSON(Class, class_);
        DARABONBA_PTR_FROM_JSON(ReadonlyReplicas, readonlyReplicas_);
        DARABONBA_PTR_FROM_JSON(Storage, storage_);
      };
      ReplicaSet() = default ;
      ReplicaSet(const ReplicaSet &) = default ;
      ReplicaSet(ReplicaSet &&) = default ;
      ReplicaSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReplicaSet() = default ;
      ReplicaSet& operator=(const ReplicaSet &) = default ;
      ReplicaSet& operator=(ReplicaSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->class_ == nullptr
        && this->readonlyReplicas_ == nullptr && this->storage_ == nullptr; };
      // class Field Functions 
      bool hasClass() const { return this->class_ != nullptr;};
      void deleteClass() { this->class_ = nullptr;};
      inline string getClass() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
      inline ReplicaSet& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


      // readonlyReplicas Field Functions 
      bool hasReadonlyReplicas() const { return this->readonlyReplicas_ != nullptr;};
      void deleteReadonlyReplicas() { this->readonlyReplicas_ = nullptr;};
      inline int32_t getReadonlyReplicas() const { DARABONBA_PTR_GET_DEFAULT(readonlyReplicas_, 0) };
      inline ReplicaSet& setReadonlyReplicas(int32_t readonlyReplicas) { DARABONBA_PTR_SET_VALUE(readonlyReplicas_, readonlyReplicas) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
      inline ReplicaSet& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    protected:
      // The instance type of the shard component. For more information, see [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html).
      // 
      // > 
      // 
      // *   **N** specifies the serial number of the shard component for which the instance type is specified. For example, **ReplicaSet.2.Class** specifies the instance type of the second shard component.
      // 
      // *   Valid values of **N**: **2** to **32**.
      // 
      // This parameter is required.
      shared_ptr<string> class_ {};
      // The number of read-only nodes in the shard component.
      // 
      // Valid values: **0**, **1, 2, 3, 4, and 5**. Default value: **0**.
      // 
      // >  **N** specifies the serial number of the shard component for which you want to set the number of read-only nodes. **ReplicaSet.2.ReadonlyReplicas** specifies the number of read-only nodes in the second shard component.
      shared_ptr<int32_t> readonlyReplicas_ {};
      // The storage capacity of the shard component. Unit: GB.
      // 
      // > 
      // 
      // *   The values that can be specified for this parameter vary based on the instance types. For more information, see [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html).
      // 
      // *   **N** specifies the serial number of the shard component for which the storage capacity is specified. For example, **ReplicaSet.2.Storage** specifies the storage capacity of the second shard component.
      // 
      // This parameter is required.
      shared_ptr<int32_t> storage_ {};
    };

    class Mongos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Mongos& obj) { 
        DARABONBA_PTR_TO_JSON(Class, class_);
      };
      friend void from_json(const Darabonba::Json& j, Mongos& obj) { 
        DARABONBA_PTR_FROM_JSON(Class, class_);
      };
      Mongos() = default ;
      Mongos(const Mongos &) = default ;
      Mongos(Mongos &&) = default ;
      Mongos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Mongos() = default ;
      Mongos& operator=(const Mongos &) = default ;
      Mongos& operator=(Mongos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->class_ == nullptr; };
      // class Field Functions 
      bool hasClass() const { return this->class_ != nullptr;};
      void deleteClass() { this->class_ = nullptr;};
      inline string getClass() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
      inline Mongos& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


    protected:
      // The instance type of the mongos node. For more information, see [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html).
      // 
      // > *   **N** specifies the serial number of the mongos node for which the instance type is specified. For example, **Mongos.2.Class** specifies the instance type of the second mongos node.
      // > *   Valid values for **N**: **2** to **32**.
      // 
      // This parameter is required.
      shared_ptr<string> class_ {};
    };

    class ConfigServer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigServer& obj) { 
        DARABONBA_PTR_TO_JSON(Class, class_);
        DARABONBA_PTR_TO_JSON(Storage, storage_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigServer& obj) { 
        DARABONBA_PTR_FROM_JSON(Class, class_);
        DARABONBA_PTR_FROM_JSON(Storage, storage_);
      };
      ConfigServer() = default ;
      ConfigServer(const ConfigServer &) = default ;
      ConfigServer(ConfigServer &&) = default ;
      ConfigServer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigServer() = default ;
      ConfigServer& operator=(const ConfigServer &) = default ;
      ConfigServer& operator=(ConfigServer &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->class_ == nullptr
        && this->storage_ == nullptr; };
      // class Field Functions 
      bool hasClass() const { return this->class_ != nullptr;};
      void deleteClass() { this->class_ = nullptr;};
      inline string getClass() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
      inline ConfigServer& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
      inline ConfigServer& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    protected:
      // The instance type of the ConfigServer node. Valid values:
      // 
      // *   **mdb.shard.2x.xlarge.d**: 4 cores, 8 GB (dedicated). Only instances that run MongoDB 4.4 and later support this instance type.
      // *   **dds.cs.mid** :1 core, 2 GB (general-purpose). Only instances that run MongoDB 4.2 and earlier support this instance type.
      // 
      // This parameter is required.
      shared_ptr<string> class_ {};
      // The storage space of the ConfigServer node. Unit: GB.
      // 
      // > The values that can be specified for this parameter vary based on the instance types. For more information, see [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html).
      // 
      // This parameter is required.
      shared_ptr<int32_t> storage_ {};
    };

    virtual bool empty() const override { return this->accountPassword_ == nullptr
        && this->autoRenew_ == nullptr && this->backupId_ == nullptr && this->chargeType_ == nullptr && this->clientToken_ == nullptr && this->configServer_ == nullptr
        && this->DBInstanceDescription_ == nullptr && this->destRegion_ == nullptr && this->encrypted_ == nullptr && this->encryptionKey_ == nullptr && this->engine_ == nullptr
        && this->engineVersion_ == nullptr && this->globalSecurityGroupIds_ == nullptr && this->hiddenZoneId_ == nullptr && this->mongos_ == nullptr && this->networkType_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->period_ == nullptr && this->protocolType_ == nullptr && this->provisionedIops_ == nullptr
        && this->regionId_ == nullptr && this->replicaSet_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->restoreTime_ == nullptr && this->restoreType_ == nullptr && this->secondaryZoneId_ == nullptr && this->securityIPList_ == nullptr && this->srcDBInstanceId_ == nullptr
        && this->srcRegion_ == nullptr && this->storageEngine_ == nullptr && this->storageType_ == nullptr && this->tag_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateShardingDBInstanceRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateShardingDBInstanceRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CreateShardingDBInstanceRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateShardingDBInstanceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateShardingDBInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configServer Field Functions 
    bool hasConfigServer() const { return this->configServer_ != nullptr;};
    void deleteConfigServer() { this->configServer_ = nullptr;};
    inline const vector<CreateShardingDBInstanceRequest::ConfigServer> & getConfigServer() const { DARABONBA_PTR_GET_CONST(configServer_, vector<CreateShardingDBInstanceRequest::ConfigServer>) };
    inline vector<CreateShardingDBInstanceRequest::ConfigServer> getConfigServer() { DARABONBA_PTR_GET(configServer_, vector<CreateShardingDBInstanceRequest::ConfigServer>) };
    inline CreateShardingDBInstanceRequest& setConfigServer(const vector<CreateShardingDBInstanceRequest::ConfigServer> & configServer) { DARABONBA_PTR_SET_VALUE(configServer_, configServer) };
    inline CreateShardingDBInstanceRequest& setConfigServer(vector<CreateShardingDBInstanceRequest::ConfigServer> && configServer) { DARABONBA_PTR_SET_RVALUE(configServer_, configServer) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateShardingDBInstanceRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // destRegion Field Functions 
    bool hasDestRegion() const { return this->destRegion_ != nullptr;};
    void deleteDestRegion() { this->destRegion_ = nullptr;};
    inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
    inline CreateShardingDBInstanceRequest& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CreateShardingDBInstanceRequest& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline CreateShardingDBInstanceRequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateShardingDBInstanceRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateShardingDBInstanceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // globalSecurityGroupIds Field Functions 
    bool hasGlobalSecurityGroupIds() const { return this->globalSecurityGroupIds_ != nullptr;};
    void deleteGlobalSecurityGroupIds() { this->globalSecurityGroupIds_ = nullptr;};
    inline string getGlobalSecurityGroupIds() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupIds_, "") };
    inline CreateShardingDBInstanceRequest& setGlobalSecurityGroupIds(string globalSecurityGroupIds) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupIds_, globalSecurityGroupIds) };


    // hiddenZoneId Field Functions 
    bool hasHiddenZoneId() const { return this->hiddenZoneId_ != nullptr;};
    void deleteHiddenZoneId() { this->hiddenZoneId_ = nullptr;};
    inline string getHiddenZoneId() const { DARABONBA_PTR_GET_DEFAULT(hiddenZoneId_, "") };
    inline CreateShardingDBInstanceRequest& setHiddenZoneId(string hiddenZoneId) { DARABONBA_PTR_SET_VALUE(hiddenZoneId_, hiddenZoneId) };


    // mongos Field Functions 
    bool hasMongos() const { return this->mongos_ != nullptr;};
    void deleteMongos() { this->mongos_ = nullptr;};
    inline const vector<CreateShardingDBInstanceRequest::Mongos> & getMongos() const { DARABONBA_PTR_GET_CONST(mongos_, vector<CreateShardingDBInstanceRequest::Mongos>) };
    inline vector<CreateShardingDBInstanceRequest::Mongos> getMongos() { DARABONBA_PTR_GET(mongos_, vector<CreateShardingDBInstanceRequest::Mongos>) };
    inline CreateShardingDBInstanceRequest& setMongos(const vector<CreateShardingDBInstanceRequest::Mongos> & mongos) { DARABONBA_PTR_SET_VALUE(mongos_, mongos) };
    inline CreateShardingDBInstanceRequest& setMongos(vector<CreateShardingDBInstanceRequest::Mongos> && mongos) { DARABONBA_PTR_SET_RVALUE(mongos_, mongos) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateShardingDBInstanceRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateShardingDBInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateShardingDBInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateShardingDBInstanceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline CreateShardingDBInstanceRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline CreateShardingDBInstanceRequest& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateShardingDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicaSet Field Functions 
    bool hasReplicaSet() const { return this->replicaSet_ != nullptr;};
    void deleteReplicaSet() { this->replicaSet_ = nullptr;};
    inline const vector<CreateShardingDBInstanceRequest::ReplicaSet> & getReplicaSet() const { DARABONBA_PTR_GET_CONST(replicaSet_, vector<CreateShardingDBInstanceRequest::ReplicaSet>) };
    inline vector<CreateShardingDBInstanceRequest::ReplicaSet> getReplicaSet() { DARABONBA_PTR_GET(replicaSet_, vector<CreateShardingDBInstanceRequest::ReplicaSet>) };
    inline CreateShardingDBInstanceRequest& setReplicaSet(const vector<CreateShardingDBInstanceRequest::ReplicaSet> & replicaSet) { DARABONBA_PTR_SET_VALUE(replicaSet_, replicaSet) };
    inline CreateShardingDBInstanceRequest& setReplicaSet(vector<CreateShardingDBInstanceRequest::ReplicaSet> && replicaSet) { DARABONBA_PTR_SET_RVALUE(replicaSet_, replicaSet) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateShardingDBInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateShardingDBInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateShardingDBInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline CreateShardingDBInstanceRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline CreateShardingDBInstanceRequest& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // secondaryZoneId Field Functions 
    bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
    void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
    inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
    inline CreateShardingDBInstanceRequest& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateShardingDBInstanceRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // srcDBInstanceId Field Functions 
    bool hasSrcDBInstanceId() const { return this->srcDBInstanceId_ != nullptr;};
    void deleteSrcDBInstanceId() { this->srcDBInstanceId_ = nullptr;};
    inline string getSrcDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(srcDBInstanceId_, "") };
    inline CreateShardingDBInstanceRequest& setSrcDBInstanceId(string srcDBInstanceId) { DARABONBA_PTR_SET_VALUE(srcDBInstanceId_, srcDBInstanceId) };


    // srcRegion Field Functions 
    bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
    void deleteSrcRegion() { this->srcRegion_ = nullptr;};
    inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
    inline CreateShardingDBInstanceRequest& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


    // storageEngine Field Functions 
    bool hasStorageEngine() const { return this->storageEngine_ != nullptr;};
    void deleteStorageEngine() { this->storageEngine_ = nullptr;};
    inline string getStorageEngine() const { DARABONBA_PTR_GET_DEFAULT(storageEngine_, "") };
    inline CreateShardingDBInstanceRequest& setStorageEngine(string storageEngine) { DARABONBA_PTR_SET_VALUE(storageEngine_, storageEngine) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateShardingDBInstanceRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateShardingDBInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateShardingDBInstanceRequest::Tag>) };
    inline vector<CreateShardingDBInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateShardingDBInstanceRequest::Tag>) };
    inline CreateShardingDBInstanceRequest& setTag(const vector<CreateShardingDBInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateShardingDBInstanceRequest& setTag(vector<CreateShardingDBInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateShardingDBInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateShardingDBInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateShardingDBInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The password of the root account. The password must meet the following requirements:
    // 
    // *   The password contains at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // *   The following special characters are supported: ! @ # $ % ^ & \\* ( ) _ + - =.
    // *   The password must be 8 to 32 characters in length.
    // 
    // >  For more information about how to resolve failed database connections due to special characters, see [What do I do if my instance is not connected due to special characters in the password in the connection string of the instance?](https://help.aliyun.com/document_detail/471568.html)
    shared_ptr<string> accountPassword_ {};
    // Specifies whether to enable auto-renewal for the instance. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // > This parameter is available and optional if you set the value of **ChargeType** to **PrePaid**.
    shared_ptr<string> autoRenew_ {};
    // The ID of the backup set. 
    // 
    // > When you call this operation to clone an instance based on the backup set, this parameter is required. The **SrcDBInstanceId** parameter is also required.
    shared_ptr<string> backupId_ {};
    // The billing method of the instance. Valid values:
    // 
    // *   **PostPaid** (default): pay-as-you-go
    // *   **PrePaid**: subscription
    // 
    // >  If you set this parameter to **PrePaid**, you must also configure the **Period** parameter.
    shared_ptr<string> chargeType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The ConfigServer nodes of the instance.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateShardingDBInstanceRequest::ConfigServer>> configServer_ {};
    // The name of the instance. The name of the instance must meet the following requirements:
    // 
    // *   The name must start with a letter.
    // *   It can contain digits, letters, underscores (_), and hyphens (-).
    // *   It must be 2 to 256 characters in length.
    shared_ptr<string> DBInstanceDescription_ {};
    // The region of the backup set used for the cross-region backup and restoration.
    // 
    // >  This parameter is required when you set the RestoreType parameter to 3.
    shared_ptr<string> destRegion_ {};
    // Specifies whether to enable disk encryption.
    shared_ptr<bool> encrypted_ {};
    // The ID of the custom key.
    shared_ptr<string> encryptionKey_ {};
    // The database engine of the instance. Set the value to **MongoDB**.
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The database engine version of the instance. Valid values:
    // 
    // *   **7.0**
    // *   **6.0**
    // *   **5.0**
    // *   **4.4**
    // *   **4.2**
    // *   **4.0**
    // 
    // > 
    // 
    // *   For more information about the limits on database versions and storage engines, see [MongoDB versions and storage engines](https://help.aliyun.com/document_detail/61906.html).
    // 
    // *   If you call this operation to clone an instance, set the value of this parameter to the database engine version of the source instance.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The global IP address whitelist template of the instance. Separate multiple templates with commas (,). The template name must be globally unique.
    shared_ptr<string> globalSecurityGroupIds_ {};
    // The ID of secondary zone 2 for multi-zone deployment. Valid values:
    // 
    // *   **cn-hangzhou-g**: Hangzhou Zone G
    // *   **cn-hangzhou-h**: Hangzhou Zone H
    // *   **cn-hangzhou-i**: Hangzhou Zone I
    // *   **cn-hongkong-b**: Hong Kong Zone B
    // *   **cn-hongkong-c**: Hong Kong Zone C
    // *   **cn-hongkong-d**: Hong Kong Zone D
    // *   **cn-wulanchabu-a**: Ulanqab Zone A
    // *   **cn-wulanchabu-b**: Ulanqab Zone B
    // *   **cn-wulanchabu-c**: Ulanqab Zone C
    // *   **ap-southeast-1a**: Singapore Zone A
    // *   **ap-southeast-1b**: Singapore Zone B
    // *   **ap-southeast-1c**: Singapore Zone C
    // *   **ap-southeast-5a**: Jakarta Zone A
    // *   **ap-southeast-5b**: Jakarta Zone B
    // *   **ap-southeast-5c**: Jakarta Zone C
    // *   **eu-central-1a**: Frankfurt Zone A
    // *   **eu-central-1b**: Frankfurt Zone B
    // *   **eu-central-1c**: Frankfurt Zone C
    // 
    // > *   This parameter is available and required if you set the value of **EngineVersion** to **4.4** or **5.0**.
    // > *   The value of this parameter cannot be the same as the value of **ZoneId** or **SecondaryZoneId**.
    // > *   For more information about the multi-zone deployment policy of a sharded cluster instance, see [Create a multi-zone sharded cluster instance](https://help.aliyun.com/document_detail/117865.html).
    shared_ptr<string> hiddenZoneId_ {};
    // The mongos nodes of the instance.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateShardingDBInstanceRequest::Mongos>> mongos_ {};
    // The network type of the instance. Set the value to VPC.
    // 
    // ****
    shared_ptr<string> networkType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The subscription period of the instance. Unit: months.
    // 
    // Valid values: **1** to **9**, **12**, **24**, **36**, and **60**.
    // 
    // > When you set the **ChargeType** parameter to **PrePaid**, this parameter is valid and required.
    shared_ptr<int32_t> period_ {};
    // The access protocol type of the instance. Valid values:
    // 
    // *   **mongodb**
    // *   **dynamodb**
    shared_ptr<string> protocolType_ {};
    // The provisioned IOPS of the instance:
    shared_ptr<int64_t> provisionedIops_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The information of the shard component.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateShardingDBInstanceRequest::ReplicaSet>> replicaSet_ {};
    // The resource group ID. For more information, see [View the basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The point in time to restore the instance, which must be within seven days. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in Coordinated Universal Time (UTC).
    // 
    // > This parameter is required only if you call this operation to clone an instance. If you specify this parameter, you must also specify **SrcDBInstanceId**.
    shared_ptr<string> restoreTime_ {};
    // The restoration type of the instance. Valid values:
    // 
    // *   1: restores the instance data to the specified point in time.
    // *   2: restores the data of the released instance to the specified backup set.
    // *   3: restores the instance data to the specified cross-region backup set.
    shared_ptr<string> restoreType_ {};
    // The ID of secondary zone 1 for multi-zone deployment. Valid values:
    // 
    // *   **cn-hangzhou-g**: Hangzhou Zone G
    // *   **cn-hangzhou-h**: Hangzhou Zone H
    // *   **cn-hangzhou-i**: Hangzhou Zone I
    // *   **cn-hongkong-b**: Hong Kong Zone B
    // *   **cn-hongkong-c**: Hong Kong Zone C
    // *   **cn-hongkong-d**: Hong Kong Zone D
    // *   **cn-wulanchabu-a**: Ulanqab Zone A
    // *   **cn-wulanchabu-b**: Ulanqab Zone B
    // *   **cn-wulanchabu-c**: Ulanqab Zone C
    // *   **ap-southeast-1a**: Singapore Zone A
    // *   **ap-southeast-1b**: Singapore Zone B
    // *   **ap-southeast-1c**: Singapore Zone C
    // *   **ap-southeast-5a**: Jakarta Zone A
    // *   **ap-southeast-5b**: Jakarta Zone B
    // *   **ap-southeast-5c**: Jakarta Zone C
    // *   **eu-central-1a**: Frankfurt Zone A
    // *   **eu-central-1b**: Frankfurt Zone B
    // *   **eu-central-1c**: Frankfurt Zone C
    // 
    // > *   This parameter is available and required if you set the value of **EngineVersion** to **4.4** or **5.0**.
    // > *   The value of this parameter cannot be the same as the value of **ZoneId** or **HiddenZoneId**.
    // > *   For more information about the multi-zone deployment policy of a sharded cluster instance, see [Create a multi-zone sharded cluster instance](https://help.aliyun.com/document_detail/117865.html).
    shared_ptr<string> secondaryZoneId_ {};
    // The IP addresses in an IP address whitelist of the instance. Multiple IP addresses are separated by commas (,), and each IP address in the IP address whitelist must be unique. The following types of values are supported:
    // 
    // *   0.0.0.0/0
    // *   IP addresses, such as 10.23.12.24.
    // *   CIDR blocks, such as 10.23.12.0/24. In this case, 24 indicates that the prefix of each IP address is 24-bit long. You can replace 24 with a value within the range of 1 to 32.
    // 
    // > *   A maximum of 1,000 IP addresses and CIDR blocks can be configured for each instance.
    // > *   If you enter 0.0.0.0/0, all IP addresses can access the instance. This may introduce security risks to the instance. Proceed with caution.
    shared_ptr<string> securityIPList_ {};
    // The source instance ID.
    // 
    // > This parameter is required only if you call this operation to clone an instance. If you specify this parameter, you must also specify **RestoreTime**.
    shared_ptr<string> srcDBInstanceId_ {};
    // The region ID of the instance.
    // 
    // > This parameter is required when restore type is set to 2 or 3.
    shared_ptr<string> srcRegion_ {};
    // The storage engine of the instance. Set the value to **WiredTiger**.
    // 
    // > 
    // 
    // *   If you call this operation to clone an instance, set the value of this parameter to the storage engine of the source instance.
    // 
    // *   For more information about the limits on database versions and storage engines, see [MongoDB versions and storage engines](https://help.aliyun.com/document_detail/61906.html).
    shared_ptr<string> storageEngine_ {};
    // The storage type of the instance. Valid values:
    // 
    // *   **cloud_essd1**: ESSD PL1
    // *   **cloud_essd2**: ESSD PL2
    // *   **cloud_essd3**: ESSD PL3
    // *   **local_ssd**: local SSD
    // 
    // > *   Instances of MongoDB 4.4 and later support only cloud disks. **cloud_essd1** is selected if you leave this parameter empty.
    // > *   Instances of MongoDB 4.2 and earlier support only local disks. **local_ssd** is selected if you leave this parameter empty.
    shared_ptr<string> storageType_ {};
    // The custom tags that you want to add to the instance.
    shared_ptr<vector<CreateShardingDBInstanceRequest::Tag>> tag_ {};
    // The vSwitch ID of the instance.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC.
    shared_ptr<string> vpcId_ {};
    // The zone ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the most recent zone list.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
