// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVALUATERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class EvaluateResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReadonlyReplicas, readonlyReplicas_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicationFactor, replicationFactor_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ShardsInfo, shardsInfo_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReadonlyReplicas, readonlyReplicas_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicationFactor, replicationFactor_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ShardsInfo, shardsInfo_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    EvaluateResourceRequest() = default ;
    EvaluateResourceRequest(const EvaluateResourceRequest &) = default ;
    EvaluateResourceRequest(EvaluateResourceRequest &&) = default ;
    EvaluateResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateResourceRequest() = default ;
    EvaluateResourceRequest& operator=(const EvaluateResourceRequest &) = default ;
    EvaluateResourceRequest& operator=(EvaluateResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceClass_ == nullptr
        && this->DBInstanceId_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->readonlyReplicas_ == nullptr && this->regionId_ == nullptr && this->replicationFactor_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->shardsInfo_ == nullptr && this->storage_ == nullptr && this->zoneId_ == nullptr; };
    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline EvaluateResourceRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline EvaluateResourceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline EvaluateResourceRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline EvaluateResourceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline EvaluateResourceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EvaluateResourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // readonlyReplicas Field Functions 
    bool hasReadonlyReplicas() const { return this->readonlyReplicas_ != nullptr;};
    void deleteReadonlyReplicas() { this->readonlyReplicas_ = nullptr;};
    inline string getReadonlyReplicas() const { DARABONBA_PTR_GET_DEFAULT(readonlyReplicas_, "") };
    inline EvaluateResourceRequest& setReadonlyReplicas(string readonlyReplicas) { DARABONBA_PTR_SET_VALUE(readonlyReplicas_, readonlyReplicas) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EvaluateResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicationFactor Field Functions 
    bool hasReplicationFactor() const { return this->replicationFactor_ != nullptr;};
    void deleteReplicationFactor() { this->replicationFactor_ = nullptr;};
    inline string getReplicationFactor() const { DARABONBA_PTR_GET_DEFAULT(replicationFactor_, "") };
    inline EvaluateResourceRequest& setReplicationFactor(string replicationFactor) { DARABONBA_PTR_SET_VALUE(replicationFactor_, replicationFactor) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline EvaluateResourceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EvaluateResourceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // shardsInfo Field Functions 
    bool hasShardsInfo() const { return this->shardsInfo_ != nullptr;};
    void deleteShardsInfo() { this->shardsInfo_ = nullptr;};
    inline string getShardsInfo() const { DARABONBA_PTR_GET_DEFAULT(shardsInfo_, "") };
    inline EvaluateResourceRequest& setShardsInfo(string shardsInfo) { DARABONBA_PTR_SET_VALUE(shardsInfo_, shardsInfo) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline string getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, "") };
    inline EvaluateResourceRequest& setStorage(string storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline EvaluateResourceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The instance type.
    // 
    // > This parameter is required when you evaluate resources for a replica set instance. For details about instance types, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
    shared_ptr<string> DBInstanceClass_ {};
    // The instance ID. This parameter is required when you evaluate resources for an instance upgrade or downgrade.
    shared_ptr<string> DBInstanceId_ {};
    // The database engine. Set the value to **MongoDB**.
    shared_ptr<string> engine_ {};
    // The database engine version.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of read-only nodes in the instance. Valid values: **1** to **5**.
    // 
    // > This parameter is not required for standalone instances<props="china"> and Serverless instances.
    shared_ptr<string> readonlyReplicas_ {};
    // The ID of the region. For more information, see [DescribeRegions](https://help.aliyun.com/document_detail/61933.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The number of nodes in the instance.
    // 
    // - Set the value to **1** for a standalone instance.
    // 
    // - Set the value to **2** for an instance that uses shared storage.
    // 
    // - For a replica set instance, valid values are **3**, **5**, and **7**.
    // 
    // <props="china">
    // 
    // > This parameter is not required for Serverless instances.
    shared_ptr<string> replicationFactor_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The shard information of the sharded cluster. This parameter is required when you evaluate resources for a sharded cluster instance.
    // 
    // To evaluate resources for a new sharded cluster instance, specify the instance type for each shard in a JSON string. Example:
    // 
    // ```
    // {
    //      "ConfigSvrs":
    //          [{"Storage":20,"DBInstanceClass":"dds.cs.mid"}],
    //      "Mongos":
    //          [{"DBInstanceClass":"dds.mongos.standard"},{"DBInstanceClass":"dds.mongos.standard"}],
    //      "Shards":
    //          [{"Storage":50,"DBInstanceClass":"dds.shard.standard"},{"Storage":50,"DBInstanceClass":"dds.shard.standard"},   {"Storage":50,"DBInstanceClass":"dds.shard.standard"}]
    //  }
    // ```
    // 
    // The parameters in the example are described as follows:
    // 
    // - ConfigSvrs: The ConfigServer nodes.
    // 
    // - Mongos: The Mongos nodes.
    // 
    // - Shards: The shard nodes.
    // 
    // - Storage: The storage space of the target shard.
    // 
    // - DBInstanceClass: The instance type of the target shard. For details about instance types, see [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html).
    // 
    // To evaluate resources for upgrading or downgrading a sharded cluster instance, specify only the node information in a JSON string. Example:
    // 
    // ```
    // {
    //      "NodeId": "d-bp147c4d9ca7****", "NodeClass": "dds.shard.standard"
    // } 
    // ```
    // 
    // The parameters in the example are described as follows:
    // 
    // - NodeId: The ID of the target node.
    // 
    // - NodeClass: The instance type of the target node. For details about instance types, see [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html).
    shared_ptr<string> shardsInfo_ {};
    // The storage space of the replica set. Unit: GB.
    // 
    // > This parameter is required if the instance uses cloud disks.
    shared_ptr<string> storage_ {};
    // The ID of the zone. For more information, see [DescribeRegions](https://help.aliyun.com/document_detail/61933.html).
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
