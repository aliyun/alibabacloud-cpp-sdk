// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESOVERVIEWRESPONSEBODY_HPP_
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
  class DescribeDBInstancesOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBInstancesOverviewResponseBody() = default ;
    DescribeDBInstancesOverviewResponseBody(const DescribeDBInstancesOverviewResponseBody &) = default ;
    DescribeDBInstancesOverviewResponseBody(DescribeDBInstancesOverviewResponseBody &&) = default ;
    DescribeDBInstancesOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesOverviewResponseBody() = default ;
    DescribeDBInstancesOverviewResponseBody& operator=(const DescribeDBInstancesOverviewResponseBody &) = default ;
    DescribeDBInstancesOverviewResponseBody& operator=(DescribeDBInstancesOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstances& obj) { 
        DARABONBA_PTR_TO_JSON(CapacityUnit, capacityUnit_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
        DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
        DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
        DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
        DARABONBA_PTR_TO_JSON(DestroyTime, destroyTime_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(KindCode, kindCode_);
        DARABONBA_PTR_TO_JSON(LastDowngradeTime, lastDowngradeTime_);
        DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
        DARABONBA_PTR_TO_JSON(MongosList, mongosList_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ReplicationFactor, replicationFactor_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ShardList, shardList_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcAuthMode, vpcAuthMode_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(CapacityUnit, capacityUnit_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
        DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
        DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
        DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
        DARABONBA_PTR_FROM_JSON(DestroyTime, destroyTime_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(KindCode, kindCode_);
        DARABONBA_PTR_FROM_JSON(LastDowngradeTime, lastDowngradeTime_);
        DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
        DARABONBA_PTR_FROM_JSON(MongosList, mongosList_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ReplicationFactor, replicationFactor_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ShardList, shardList_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcAuthMode, vpcAuthMode_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      DBInstances() = default ;
      DBInstances(const DBInstances &) = default ;
      DBInstances(DBInstances &&) = default ;
      DBInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBInstances() = default ;
      DBInstances& operator=(const DBInstances &) = default ;
      DBInstances& operator=(DBInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
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
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key. Valid values of N: **1** to **20**.
        // 
        // *   The key cannot start with `aliyun`, `acs:`, `http://`, or `https://`.
        // *   It can be up to 64 characters in length.
        // *   It cannot be an empty string.
        shared_ptr<string> key_ {};
        // The tag value. Valid values of N: **1** to **20**.
        // 
        // *   The value cannot start with `aliyun`, `acs:`, `http://`, or `https://`.
        // *   The value can be up to 128 characters in length.
        // *   The value can be an empty string.
        shared_ptr<string> value_ {};
      };

      class ShardList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ShardList& obj) { 
          DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
          DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeStorage, nodeStorage_);
          DARABONBA_PTR_TO_JSON(ReadonlyReplicas, readonlyReplicas_);
        };
        friend void from_json(const Darabonba::Json& j, ShardList& obj) { 
          DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
          DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeStorage, nodeStorage_);
          DARABONBA_PTR_FROM_JSON(ReadonlyReplicas, readonlyReplicas_);
        };
        ShardList() = default ;
        ShardList(const ShardList &) = default ;
        ShardList(ShardList &&) = default ;
        ShardList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ShardList() = default ;
        ShardList& operator=(const ShardList &) = default ;
        ShardList& operator=(ShardList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nodeClass_ == nullptr
        && this->nodeDescription_ == nullptr && this->nodeId_ == nullptr && this->nodeStorage_ == nullptr && this->readonlyReplicas_ == nullptr; };
        // nodeClass Field Functions 
        bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
        void deleteNodeClass() { this->nodeClass_ = nullptr;};
        inline string getNodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
        inline ShardList& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


        // nodeDescription Field Functions 
        bool hasNodeDescription() const { return this->nodeDescription_ != nullptr;};
        void deleteNodeDescription() { this->nodeDescription_ = nullptr;};
        inline string getNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeDescription_, "") };
        inline ShardList& setNodeDescription(string nodeDescription) { DARABONBA_PTR_SET_VALUE(nodeDescription_, nodeDescription) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline ShardList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeStorage Field Functions 
        bool hasNodeStorage() const { return this->nodeStorage_ != nullptr;};
        void deleteNodeStorage() { this->nodeStorage_ = nullptr;};
        inline int32_t getNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(nodeStorage_, 0) };
        inline ShardList& setNodeStorage(int32_t nodeStorage) { DARABONBA_PTR_SET_VALUE(nodeStorage_, nodeStorage) };


        // readonlyReplicas Field Functions 
        bool hasReadonlyReplicas() const { return this->readonlyReplicas_ != nullptr;};
        void deleteReadonlyReplicas() { this->readonlyReplicas_ = nullptr;};
        inline int32_t getReadonlyReplicas() const { DARABONBA_PTR_GET_DEFAULT(readonlyReplicas_, 0) };
        inline ShardList& setReadonlyReplicas(int32_t readonlyReplicas) { DARABONBA_PTR_SET_VALUE(readonlyReplicas_, readonlyReplicas) };


      protected:
        // The instance type of the shard node.
        shared_ptr<string> nodeClass_ {};
        // The description of the shard node.
        shared_ptr<string> nodeDescription_ {};
        // The ID of the shard node.
        shared_ptr<string> nodeId_ {};
        // The storage space of the shard node. Unit: GB.
        shared_ptr<int32_t> nodeStorage_ {};
        // The number of read-only nodes in the shard node. Valid values: **0** to **5**.
        shared_ptr<int32_t> readonlyReplicas_ {};
      };

      class MongosList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MongosList& obj) { 
          DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
          DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        };
        friend void from_json(const Darabonba::Json& j, MongosList& obj) { 
          DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
          DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        };
        MongosList() = default ;
        MongosList(const MongosList &) = default ;
        MongosList(MongosList &&) = default ;
        MongosList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MongosList() = default ;
        MongosList& operator=(const MongosList &) = default ;
        MongosList& operator=(MongosList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nodeClass_ == nullptr
        && this->nodeDescription_ == nullptr && this->nodeId_ == nullptr; };
        // nodeClass Field Functions 
        bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
        void deleteNodeClass() { this->nodeClass_ = nullptr;};
        inline string getNodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
        inline MongosList& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


        // nodeDescription Field Functions 
        bool hasNodeDescription() const { return this->nodeDescription_ != nullptr;};
        void deleteNodeDescription() { this->nodeDescription_ = nullptr;};
        inline string getNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeDescription_, "") };
        inline MongosList& setNodeDescription(string nodeDescription) { DARABONBA_PTR_SET_VALUE(nodeDescription_, nodeDescription) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline MongosList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      protected:
        // The instance type of the mongos node.
        shared_ptr<string> nodeClass_ {};
        // The description of the mongos node.
        shared_ptr<string> nodeDescription_ {};
        // The ID of the mongos node.
        shared_ptr<string> nodeId_ {};
      };

      virtual bool empty() const override { return this->capacityUnit_ == nullptr
        && this->chargeType_ == nullptr && this->creationTime_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr
        && this->DBInstanceStatus_ == nullptr && this->DBInstanceStorage_ == nullptr && this->DBInstanceType_ == nullptr && this->destroyTime_ == nullptr && this->engine_ == nullptr
        && this->engineVersion_ == nullptr && this->expireTime_ == nullptr && this->kindCode_ == nullptr && this->lastDowngradeTime_ == nullptr && this->lockMode_ == nullptr
        && this->mongosList_ == nullptr && this->networkType_ == nullptr && this->regionId_ == nullptr && this->replicationFactor_ == nullptr && this->resourceGroupId_ == nullptr
        && this->shardList_ == nullptr && this->tags_ == nullptr && this->vpcAuthMode_ == nullptr && this->zoneId_ == nullptr; };
      // capacityUnit Field Functions 
      bool hasCapacityUnit() const { return this->capacityUnit_ != nullptr;};
      void deleteCapacityUnit() { this->capacityUnit_ = nullptr;};
      inline string getCapacityUnit() const { DARABONBA_PTR_GET_DEFAULT(capacityUnit_, "") };
      inline DBInstances& setCapacityUnit(string capacityUnit) { DARABONBA_PTR_SET_VALUE(capacityUnit_, capacityUnit) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline DBInstances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline DBInstances& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // DBInstanceClass Field Functions 
      bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
      void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
      inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
      inline DBInstances& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


      // DBInstanceDescription Field Functions 
      bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
      void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
      inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
      inline DBInstances& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline DBInstances& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // DBInstanceStatus Field Functions 
      bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
      void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
      inline string getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
      inline DBInstances& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


      // DBInstanceStorage Field Functions 
      bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
      void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
      inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
      inline DBInstances& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


      // DBInstanceType Field Functions 
      bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
      void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
      inline string getDBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
      inline DBInstances& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


      // destroyTime Field Functions 
      bool hasDestroyTime() const { return this->destroyTime_ != nullptr;};
      void deleteDestroyTime() { this->destroyTime_ = nullptr;};
      inline string getDestroyTime() const { DARABONBA_PTR_GET_DEFAULT(destroyTime_, "") };
      inline DBInstances& setDestroyTime(string destroyTime) { DARABONBA_PTR_SET_VALUE(destroyTime_, destroyTime) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline DBInstances& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline DBInstances& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline DBInstances& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // kindCode Field Functions 
      bool hasKindCode() const { return this->kindCode_ != nullptr;};
      void deleteKindCode() { this->kindCode_ = nullptr;};
      inline string getKindCode() const { DARABONBA_PTR_GET_DEFAULT(kindCode_, "") };
      inline DBInstances& setKindCode(string kindCode) { DARABONBA_PTR_SET_VALUE(kindCode_, kindCode) };


      // lastDowngradeTime Field Functions 
      bool hasLastDowngradeTime() const { return this->lastDowngradeTime_ != nullptr;};
      void deleteLastDowngradeTime() { this->lastDowngradeTime_ = nullptr;};
      inline string getLastDowngradeTime() const { DARABONBA_PTR_GET_DEFAULT(lastDowngradeTime_, "") };
      inline DBInstances& setLastDowngradeTime(string lastDowngradeTime) { DARABONBA_PTR_SET_VALUE(lastDowngradeTime_, lastDowngradeTime) };


      // lockMode Field Functions 
      bool hasLockMode() const { return this->lockMode_ != nullptr;};
      void deleteLockMode() { this->lockMode_ = nullptr;};
      inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
      inline DBInstances& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


      // mongosList Field Functions 
      bool hasMongosList() const { return this->mongosList_ != nullptr;};
      void deleteMongosList() { this->mongosList_ = nullptr;};
      inline const vector<DBInstances::MongosList> & getMongosList() const { DARABONBA_PTR_GET_CONST(mongosList_, vector<DBInstances::MongosList>) };
      inline vector<DBInstances::MongosList> getMongosList() { DARABONBA_PTR_GET(mongosList_, vector<DBInstances::MongosList>) };
      inline DBInstances& setMongosList(const vector<DBInstances::MongosList> & mongosList) { DARABONBA_PTR_SET_VALUE(mongosList_, mongosList) };
      inline DBInstances& setMongosList(vector<DBInstances::MongosList> && mongosList) { DARABONBA_PTR_SET_RVALUE(mongosList_, mongosList) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline DBInstances& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DBInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // replicationFactor Field Functions 
      bool hasReplicationFactor() const { return this->replicationFactor_ != nullptr;};
      void deleteReplicationFactor() { this->replicationFactor_ = nullptr;};
      inline string getReplicationFactor() const { DARABONBA_PTR_GET_DEFAULT(replicationFactor_, "") };
      inline DBInstances& setReplicationFactor(string replicationFactor) { DARABONBA_PTR_SET_VALUE(replicationFactor_, replicationFactor) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline DBInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // shardList Field Functions 
      bool hasShardList() const { return this->shardList_ != nullptr;};
      void deleteShardList() { this->shardList_ = nullptr;};
      inline const vector<DBInstances::ShardList> & getShardList() const { DARABONBA_PTR_GET_CONST(shardList_, vector<DBInstances::ShardList>) };
      inline vector<DBInstances::ShardList> getShardList() { DARABONBA_PTR_GET(shardList_, vector<DBInstances::ShardList>) };
      inline DBInstances& setShardList(const vector<DBInstances::ShardList> & shardList) { DARABONBA_PTR_SET_VALUE(shardList_, shardList) };
      inline DBInstances& setShardList(vector<DBInstances::ShardList> && shardList) { DARABONBA_PTR_SET_RVALUE(shardList_, shardList) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<DBInstances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DBInstances::Tags>) };
      inline vector<DBInstances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DBInstances::Tags>) };
      inline DBInstances& setTags(const vector<DBInstances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DBInstances& setTags(vector<DBInstances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcAuthMode Field Functions 
      bool hasVpcAuthMode() const { return this->vpcAuthMode_ != nullptr;};
      void deleteVpcAuthMode() { this->vpcAuthMode_ = nullptr;};
      inline string getVpcAuthMode() const { DARABONBA_PTR_GET_DEFAULT(vpcAuthMode_, "") };
      inline DBInstances& setVpcAuthMode(string vpcAuthMode) { DARABONBA_PTR_SET_VALUE(vpcAuthMode_, vpcAuthMode) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline DBInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The read and write throughput consumed by the instance.
      // 
      // > 
      // 
      // *   This parameter is returned when the instance is a serverless instance.
      // 
      // *   Serverless instances are available only in the China site (aliyun.com).
      shared_ptr<string> capacityUnit_ {};
      // The billing method of the instance. Valid values:
      // 
      // *   **PrePaid**: subscription
      // *   **PostPaid**: pay-as-you-go
      shared_ptr<string> chargeType_ {};
      // The time when the instance was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The instance type. The instance type varies based on the instance architecture. For more information about instance types supported by different instance architectures, see the following references:
      // 
      // *   [Standalone instance types](https://help.aliyun.com/document_detail/311407.html)
      // *   [Replica set instance types](https://help.aliyun.com/document_detail/311410.html)
      // *   [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html)
      shared_ptr<string> DBInstanceClass_ {};
      // The description of the instance.
      shared_ptr<string> DBInstanceDescription_ {};
      // The instance ID.
      shared_ptr<string> DBInstanceId_ {};
      // The state of the instance. For more information about valid values, see [Instance states](https://help.aliyun.com/document_detail/63870.html).
      shared_ptr<string> DBInstanceStatus_ {};
      // The storage space of the instance. Unit: GB.
      shared_ptr<int32_t> DBInstanceStorage_ {};
      // The architecture of the instance. Valid values:
      // 
      // *   **sharding**: sharded cluster instance
      // *   **replicate**: replica set or standalone instance
      shared_ptr<string> DBInstanceType_ {};
      // The time when the instance data was destroyed. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> destroyTime_ {};
      // The database engine of the instance. Set the value to **MongoDB**.
      shared_ptr<string> engine_ {};
      // The database engine version of the instance.
      shared_ptr<string> engineVersion_ {};
      // The time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
      shared_ptr<string> expireTime_ {};
      // The kind code of the instance. Valid values:
      // 
      // *   **0**: physical machine
      // *   **1**: Elastic Compute Service (ECS) instance
      // *   **2**: Docker cluster
      // *   **18**: Kubernetes cluster
      shared_ptr<string> kindCode_ {};
      // The date when the last downgrade operation was performed.
      shared_ptr<string> lastDowngradeTime_ {};
      // Indicates whether the instance is locked. Valid values:
      // 
      // *   **Unlock**: The instance is not locked.
      // *   **ManualLock**: The instance is manually locked.
      // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
      // *   **LockByRestoration**: The instance is automatically locked before it is rolled back.
      // *   **LockByDiskQuota**: The instance is automatically locked after the storage space is exhausted.
      // *   **Released**: The instance is released. After an instance is released, the instance cannot be unlocked. You can only restore the backup data of the instance to a new instance. This process requires a long period of time.
      shared_ptr<string> lockMode_ {};
      // The details of the mongos nodes.
      // 
      // >  This parameter is returned when the instance is a sharded cluster instance.
      shared_ptr<vector<DBInstances::MongosList>> mongosList_ {};
      // The network type of the instance. Valid values:
      // 
      // *   **Classic**
      // *   **VPC**
      shared_ptr<string> networkType_ {};
      // The region ID of the instance.
      shared_ptr<string> regionId_ {};
      // The number of nodes in the instance.
      // 
      // >  This parameter is returned when the instance is a replica set instance.
      shared_ptr<string> replicationFactor_ {};
      // The ID of the resource group to which the instance belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The details of the shard nodes.
      // 
      // >  This parameter is returned when the instance is a sharded cluster instance.
      shared_ptr<vector<DBInstances::ShardList>> shardList_ {};
      // The tags to add to the instance.
      shared_ptr<vector<DBInstances::Tags>> tags_ {};
      // Indicates whether password-free access over VPC is enabled. Valid values:
      // 
      // *   **Open**: Password-free access over VPC is enabled.
      // *   **Close**: Password-free access over VPC is disabled.
      shared_ptr<string> vpcAuthMode_ {};
      // The zone ID of the instance.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->DBInstances_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const vector<DescribeDBInstancesOverviewResponseBody::DBInstances> & getDBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, vector<DescribeDBInstancesOverviewResponseBody::DBInstances>) };
    inline vector<DescribeDBInstancesOverviewResponseBody::DBInstances> getDBInstances() { DARABONBA_PTR_GET(DBInstances_, vector<DescribeDBInstancesOverviewResponseBody::DBInstances>) };
    inline DescribeDBInstancesOverviewResponseBody& setDBInstances(const vector<DescribeDBInstancesOverviewResponseBody::DBInstances> & dBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, dBInstances) };
    inline DescribeDBInstancesOverviewResponseBody& setDBInstances(vector<DescribeDBInstancesOverviewResponseBody::DBInstances> && dBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, dBInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancesOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeDBInstancesOverviewResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information of instances.
    shared_ptr<vector<DescribeDBInstancesOverviewResponseBody::DBInstances>> DBInstances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of instances in the query results.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
