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
    // The type of the instance.
    // 
    // > This parameter is required when you check whether resources are sufficient for creating or upgrading a replica set instance. For more information about instance types, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
    shared_ptr<string> DBInstanceClass_ {};
    // The ID of the instance. This parameter is required when you check whether resources are sufficient for upgrading an instance.
    shared_ptr<string> DBInstanceId_ {};
    // The database engine of the instance. Set the value to **MongoDB**.
    shared_ptr<string> engine_ {};
    // The version of the database engine.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of read-only nodes in the instance. Valid values: **1** to **5**.
    // 
    // > This parameter is not required for standalone or serverless instances.
    shared_ptr<string> readonlyReplicas_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The number of nodes in the instance.
    // 
    // *   Set the value to **1** for standalone instances.
    // *   Valid values for replica set instances: **3**, **5**, and **7**
    // 
    // > This parameter is not required for serverless instances.
    shared_ptr<string> replicationFactor_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The node information about the sharded cluster instance. This parameter is required when you check whether resources are sufficient for creating or upgrading a sharded cluster instance.
    // 
    // To check whether resources are sufficient for creating a sharded cluster instance, specify the specifications of each node in the instance. The value must be a JSON string. Example:
    // 
    //     {
    //          "ConfigSvrs":
    //              [{"Storage":20,"DBInstanceClass":"dds.cs.mid"}],
    //          "Mongos":
    //              [{"DBInstanceClass":"dds.mongos.standard"},{"DBInstanceClass":"dds.mongos.standard"}],
    //          "Shards":
    //              [{"Storage":50,"DBInstanceClass":"dds.shard.standard"},{"Storage":50,"DBInstanceClass":"dds.shard.standard"},   {"Storage":50,"DBInstanceClass":"dds.shard.standard"}]
    //      }
    // 
    // Parameters in the example:
    // 
    // *   ConfigSvrs: the Configserver node.
    // *   Mongos: the mongos node.
    // *   Shards: the shard node.
    // *   Storage: the storage space of the node.
    // *   DBInstanceClass: the instance type of the node. For more information, see [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html).
    // 
    // To check whether resources are sufficient for upgrading a single node of a sharded cluster instance, specify only the information about the node to be upgraded. The value must be a JSON string. Example:
    // 
    //     {
    //          "NodeId": "d-bp147c4d9ca7****", "NodeClass": "dds.shard.standard"
    //     } 
    // 
    // Parameters in the example:
    // 
    // *   NodeId: the ID of the node.
    // *   NodeClass: the instance type of the node. For more information, see [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html).
    shared_ptr<string> shardsInfo_ {};
    // The storage capacity of the replica set instance. Unit: GB.
    // 
    // > This parameter is required for the instances that use cloud disks.
    shared_ptr<string> storage_ {};
    // The zone ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the zone ID.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
