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
      // The key of the tag.
      // > - **N** in the parameter name specifies the sequence number of the tag. For example, **Tag.1.Key** specifies the key of the first tag, and **Tag.2.Key** specifies the key of the second tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      // > **N** in the parameter name specifies the sequence number of the tag. For example, **Tag.1.Value** specifies the value of the first tag, and **Tag.2.Value** specifies the value of the second tag.
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
      // The specifications of the shard node. For more information, see [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html).
      // 
      // > - **N** in the parameter name specifies the sequence number of the shard node. For example, **ReplicaSet.2.Class** specifies the specifications of the second shard node.
      // > - Valid values of **N**: **2** to **32**.
      // 
      // This parameter is required.
      shared_ptr<string> class_ {};
      // The number of read-only nodes in the shard node.
      // 
      // Valid values: **0** to **5**. Default value: **0**.
      // > **N** in the parameter name specifies the sequence number of the shard node. For example, **ReplicaSet.2.ReadonlyReplicas** specifies the number of read-only nodes in the second shard node.
      shared_ptr<int32_t> readonlyReplicas_ {};
      // The storage capacity of the shard node. Unit: GB.
      // 
      // > - The valid values are subject to the instance specifications. For more information, see [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html).
      // > - **N** in the parameter name specifies the sequence number of the shard node. For example, **ReplicaSet.2.Storage** specifies the storage capacity of the second shard node.
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
      // The specifications of the mongos node. For more information, see [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html).
      // 
      // > - **N** in the parameter name specifies the sequence number of the mongos node. For example, **Mongos.2.Class** specifies the specifications of the second mongos node.
      // > - Valid values of **N**: **2** to **32**.
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
      // The specifications of the ConfigServer node. Valid values:
      // - **mdb.shard.2x.xlarge.d**: 4 cores, 8 GB (dedicated). This specification is supported only for instances of version 4.4 and later.
      // - **dds.cs.mid**: 1 core, 2 GB (general-purpose). This specification is supported only for instances of version 4.2 and earlier.
      // 
      // This parameter is required.
      shared_ptr<string> class_ {};
      // The storage capacity of the ConfigServer node. Unit: GB.
      // 
      // > The valid values are subject to the instance specifications. For more information, see [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html).
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
    // - It must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // - Special characters include !@#$%^&*()_+-=.
    // - It must be 8 to 32 characters in length.
    // 
    // > For more information about how to troubleshoot connection failures caused by special characters in database connection string, see [What do I do if database connection to an ApsaraDB for MongoDB instance fails because the username or password in database connection string contains special characters?](https://help.aliyun.com/document_detail/471568.html).
    shared_ptr<string> accountPassword_ {};
    // Specifies whether to enable auto-renewal for the instance. Valid values:
    // 
    // - **true**: Enables auto-renewal.
    // - **false**: Disables auto-renewal. You must manually renew the instance. This is the default value.
    // 
    // > This parameter is available and optional only when the **ChargeType** parameter is set to **PrePaid**.
    shared_ptr<string> autoRenew_ {};
    // The ID of the cluster backup.
    // 
    // 
    // > - This parameter is required only when RestoreType is set to 2 or 3.
    shared_ptr<string> backupId_ {};
    // The billing method of the instance. Valid values:
    // 
    // - **PostPaid**: Pay-as-you-go. This is the default value.
    // - **PrePaid**: Subscription.
    // 
    // > If you set this parameter to **PrePaid**, you must also specify the **Period** parameter.
    shared_ptr<string> chargeType_ {};
    // The client token that is used to ensure the idempotence of the request and prevent duplicate submissions. You can use the client to generate the token, but you must ensure that the token is unique among different requests. The token can contain a maximum of 64 ASCII characters and cannot contain non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The information about the ConfigServer nodes.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateShardingDBInstanceRequest::ConfigServer>> configServer_ {};
    // The name of the instance. The name must meet the following requirements:
    // - It must start with a letter or a Chinese character.
    // - It can contain digits, letters, Chinese characters, underscores (_), periods (.), and hyphens (-).
    // - It must be 2 to 256 characters in length.
    shared_ptr<string> DBInstanceDescription_ {};
    // The region where the cross-region backup is stored.
    shared_ptr<string> destRegion_ {};
    // Specifies whether to enable cloud disk encryption.
    shared_ptr<bool> encrypted_ {};
    // The ID of the custom key.
    shared_ptr<string> encryptionKey_ {};
    // The database engine. Set the value to **MongoDB**.
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The database version number. Valid values:
    // - **8.0**
    // - **7.0**
    // - **6.0**
    // - **5.0**
    // - **4.4**
    // - **4.2**
    // - **4.0**
    // 
    // > - For more information about the constraints on storage engines and versions, see [Versions and storage engines](https://help.aliyun.com/document_detail/61906.html).
    // > - When you call this operation to clone an instance, the value of this parameter must be the same as that of the source instance.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The global IP address whitelist templates of the instance. Separate multiple templates with commas (,). Duplicate templates are not supported.
    shared_ptr<string> globalSecurityGroupIds_ {};
    // The secondary zone 2 for multi-zone deployment. Valid values:
    // - **cn-hangzhou-g**: Hangzhou Zone G.
    // - **cn-hangzhou-h**: Hangzhou Zone H.
    // - **cn-hangzhou-i**: Hangzhou Zone I.
    // - **cn-hongkong-b**: Hong Kong (China) Zone B.
    // - **cn-hongkong-c**: Hong Kong (China) Zone C.
    // - **cn-hongkong-d**: Hong Kong (China) Zone D.
    // - **cn-wulanchabu-a**: Ulanqab Zone A.
    // - **cn-wulanchabu-b**: Ulanqab Zone B.
    // - **cn-wulanchabu-c**: Ulanqab Zone C.
    // - **ap-southeast-1a**: Singapore Zone A.
    // - **ap-southeast-1b**: Singapore Zone B.
    // - **ap-southeast-1c**: Singapore Zone C.
    // - **ap-southeast-5a**: Jakarta Zone A.
    // - **ap-southeast-5b**: Jakarta Zone B.
    // - **ap-southeast-5c**: Jakarta Zone C.
    // - **eu-central-1a**: Frankfurt Zone A.
    // - **eu-central-1b**: Frankfurt Zone B.
    // - **eu-central-1c**: Frankfurt Zone C.
    // 
    // > - This parameter is available only when the instance uses cloud disks.
    // > - The value of this parameter cannot be the same as the value of **ZoneId** or **SecondaryZoneId**.
    // > - For more information about the multi-zone deployment policy for sharded cluster instances, see [Create a multi-zone sharded cluster instance](https://help.aliyun.com/document_detail/117865.html).
    shared_ptr<string> hiddenZoneId_ {};
    // The information about the mongos nodes.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateShardingDBInstanceRequest::Mongos>> mongos_ {};
    // The network type of the instance. Valid values:
    // 
    // - **VPC**: VPC.
    shared_ptr<string> networkType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The subscription duration of the instance. Unit: months.
    // 
    // Valid values: **1** to **9**, **12**, **24**, **36**, and **60**.
    // > This parameter is required and takes effect only when the **ChargeType** parameter is set to **PrePaid**.
    shared_ptr<int32_t> period_ {};
    // The type of the access protocol. Valid values:
    // - **mongodb**: MongoDB protocol.
    // - **dynamodb**: DynamoDB protocol.
    shared_ptr<string> protocolType_ {};
    // The provisioned IOPS.
    shared_ptr<int64_t> provisionedIops_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The information about the shard nodes.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateShardingDBInstanceRequest::ReplicaSet>> replicaSet_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The point in time to which you want to restore the instance. You can specify any point in time within the last seven days. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time must be in UTC.
    // > This parameter is required only when you call this operation to clone an instance. You must also specify the **SrcDBInstanceId** parameter.
    shared_ptr<string> restoreTime_ {};
    // The backup restoration type. Valid values:
    // 
    // - 1: Restore the instance to a specified point in time.
    // - 2: Restore a released instance to a specified backup set.
    // - 3: Restore the instance to a specified cross-region backup set.
    shared_ptr<string> restoreType_ {};
    // The secondary zone 1 for multi-zone deployment. Valid values:
    // - **cn-hangzhou-g**: Hangzhou Zone G.
    // - **cn-hangzhou-h**: Hangzhou Zone H.
    // - **cn-hangzhou-i**: Hangzhou Zone I.
    // - **cn-hongkong-b**: Hong Kong (China) Zone B.
    // - **cn-hongkong-c**: Hong Kong (China) Zone C.
    // - **cn-hongkong-d**: Hong Kong (China) Zone D.
    // - **cn-wulanchabu-a**: Ulanqab Zone A.
    // - **cn-wulanchabu-b**: Ulanqab Zone B.
    // - **cn-wulanchabu-c**: Ulanqab Zone C.
    // - **ap-southeast-1a**: Singapore Zone A.
    // - **ap-southeast-1b**: Singapore Zone B.
    // - **ap-southeast-1c**: Singapore Zone C.
    // - **ap-southeast-5a**: Jakarta Zone A.
    // - **ap-southeast-5b**: Jakarta Zone B.
    // - **ap-southeast-5c**: Jakarta Zone C.
    // - **eu-central-1a**: Frankfurt Zone A.
    // - **eu-central-1b**: Frankfurt Zone B.
    // - **eu-central-1c**: Frankfurt Zone C.
    // >- This parameter is available only when the instance uses cloud disks.
    // >- The value of this parameter cannot be the same as the value of **ZoneId** or **HiddenZoneId**.
    // >- For more information about the multi-zone deployment policy for sharded cluster instances, see [Create a multi-zone sharded cluster instance](https://help.aliyun.com/document_detail/117865.html).
    shared_ptr<string> secondaryZoneId_ {};
    // The IP address whitelist of the instance. Separate multiple IP addresses with commas (,). Duplicate IP addresses are not supported. The following formats are supported:
    // - 0.0.0.0/0
    // - IP addresses, such as 10.23.12.24.
    // - CIDR blocks, such as 10.23.12.0/24. 24 indicates the length of the prefix in the CIDR block, and the prefix length ranges from 1 to 32.
    // 
    // > - You can add up to 1,000 IP addresses or CIDR blocks to the whitelist of an instance. The total number of IP addresses or CIDR blocks in all whitelist groups cannot exceed 1,000.
    // > - 0.0.0.0/0 indicates that all IP addresses can access the instance. This is a high-risk setting. Configure this parameter with caution.
    shared_ptr<string> securityIPList_ {};
    // The source instance ID.
    // > This parameter is required only when you call this operation to clone an instance. You must also specify the **RestoreTime** parameter.
    shared_ptr<string> srcDBInstanceId_ {};
    // The region where the source instance is located.
    // 
    // >- This parameter is required when the backup restoration type is rebuilding a deleted instance.
    // >- This parameter is required when the backup restoration type is cross-region backup cloning.
    shared_ptr<string> srcRegion_ {};
    // The storage engine of the instance. Set the value to **WiredTiger**.
    // 
    // > - When you call this operation to clone an instance, the value of this parameter must be the same as that of the source instance.
    // > - For more information about the constraints on storage engines and versions, see [Versions and storage engines](https://help.aliyun.com/document_detail/61906.html).
    shared_ptr<string> storageEngine_ {};
    // The storage type. Valid values: 
    // 
    // - **cloud_essd1**: PL1 ESSD.
    // - **cloud_essd2**: PL2 ESSD.
    // - **cloud_essd3**: PL3 ESSD.
    // - **local_ssd**: local SSD.
    // 
    // > - Instances of version 4.4 and later support only cloud disks. If you do not specify this parameter, **cloud_essd1** is selected by default.
    // > - Instances of version 4.2 and earlier support only local disks. If you do not specify this parameter, **local_ssd** is selected by default.
    shared_ptr<string> storageType_ {};
    // The custom tags.
    shared_ptr<vector<CreateShardingDBInstanceRequest::Tag>> tag_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID.
    shared_ptr<string> vpcId_ {};
    // The zone ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
