// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODY_HPP_
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
  class DescribeDBInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBInstancesResponseBody() = default ;
    DescribeDBInstancesResponseBody(const DescribeDBInstancesResponseBody &) = default ;
    DescribeDBInstancesResponseBody(DescribeDBInstancesResponseBody &&) = default ;
    DescribeDBInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBody() = default ;
    DescribeDBInstancesResponseBody& operator=(const DescribeDBInstancesResponseBody &) = default ;
    DescribeDBInstancesResponseBody& operator=(DescribeDBInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstances& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstance, DBInstance_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstance, DBInstance_);
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
      class DBInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstance& obj) { 
          DARABONBA_PTR_TO_JSON(BackupRetentionPolicy, backupRetentionPolicy_);
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
          DARABONBA_PTR_TO_JSON(HiddenZoneId, hiddenZoneId_);
          DARABONBA_PTR_TO_JSON(KindCode, kindCode_);
          DARABONBA_PTR_TO_JSON(LastDowngradeTime, lastDowngradeTime_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(MongosList, mongosList_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_TO_JSON(ReplicationFactor, replicationFactor_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
          DARABONBA_PTR_TO_JSON(ShardList, shardList_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcAuthMode, vpcAuthMode_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupRetentionPolicy, backupRetentionPolicy_);
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
          DARABONBA_PTR_FROM_JSON(HiddenZoneId, hiddenZoneId_);
          DARABONBA_PTR_FROM_JSON(KindCode, kindCode_);
          DARABONBA_PTR_FROM_JSON(LastDowngradeTime, lastDowngradeTime_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(MongosList, mongosList_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_FROM_JSON(ReplicationFactor, replicationFactor_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
          DARABONBA_PTR_FROM_JSON(ShardList, shardList_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcAuthMode, vpcAuthMode_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        DBInstance() = default ;
        DBInstance(const DBInstance &) = default ;
        DBInstance(DBInstance &&) = default ;
        DBInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstance() = default ;
        DBInstance& operator=(const DBInstance &) = default ;
        DBInstance& operator=(DBInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
            shared_ptr<string> key_ {};
            // The tag value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class ShardList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ShardList& obj) { 
            DARABONBA_PTR_TO_JSON(ShardAttribute, shardAttribute_);
          };
          friend void from_json(const Darabonba::Json& j, ShardList& obj) { 
            DARABONBA_PTR_FROM_JSON(ShardAttribute, shardAttribute_);
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
          class ShardAttribute : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ShardAttribute& obj) { 
              DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
              DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
              DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
              DARABONBA_PTR_TO_JSON(NodeStorage, nodeStorage_);
              DARABONBA_PTR_TO_JSON(ReadonlyReplicas, readonlyReplicas_);
            };
            friend void from_json(const Darabonba::Json& j, ShardAttribute& obj) { 
              DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
              DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
              DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
              DARABONBA_PTR_FROM_JSON(NodeStorage, nodeStorage_);
              DARABONBA_PTR_FROM_JSON(ReadonlyReplicas, readonlyReplicas_);
            };
            ShardAttribute() = default ;
            ShardAttribute(const ShardAttribute &) = default ;
            ShardAttribute(ShardAttribute &&) = default ;
            ShardAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ShardAttribute() = default ;
            ShardAttribute& operator=(const ShardAttribute &) = default ;
            ShardAttribute& operator=(ShardAttribute &&) = default ;
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
            inline ShardAttribute& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


            // nodeDescription Field Functions 
            bool hasNodeDescription() const { return this->nodeDescription_ != nullptr;};
            void deleteNodeDescription() { this->nodeDescription_ = nullptr;};
            inline string getNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeDescription_, "") };
            inline ShardAttribute& setNodeDescription(string nodeDescription) { DARABONBA_PTR_SET_VALUE(nodeDescription_, nodeDescription) };


            // nodeId Field Functions 
            bool hasNodeId() const { return this->nodeId_ != nullptr;};
            void deleteNodeId() { this->nodeId_ = nullptr;};
            inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
            inline ShardAttribute& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


            // nodeStorage Field Functions 
            bool hasNodeStorage() const { return this->nodeStorage_ != nullptr;};
            void deleteNodeStorage() { this->nodeStorage_ = nullptr;};
            inline int32_t getNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(nodeStorage_, 0) };
            inline ShardAttribute& setNodeStorage(int32_t nodeStorage) { DARABONBA_PTR_SET_VALUE(nodeStorage_, nodeStorage) };


            // readonlyReplicas Field Functions 
            bool hasReadonlyReplicas() const { return this->readonlyReplicas_ != nullptr;};
            void deleteReadonlyReplicas() { this->readonlyReplicas_ = nullptr;};
            inline int32_t getReadonlyReplicas() const { DARABONBA_PTR_GET_DEFAULT(readonlyReplicas_, 0) };
            inline ShardAttribute& setReadonlyReplicas(int32_t readonlyReplicas) { DARABONBA_PTR_SET_VALUE(readonlyReplicas_, readonlyReplicas) };


          protected:
            // The instance type of the shard node.
            shared_ptr<string> nodeClass_ {};
            // The description of the shard node.
            shared_ptr<string> nodeDescription_ {};
            // The ID of the shard node.
            shared_ptr<string> nodeId_ {};
            // The storage capacity of the shard node. Unit: GB.
            shared_ptr<int32_t> nodeStorage_ {};
            // The number of read-only nodes in the shard node. Valid values: **0** to **5**.
            shared_ptr<int32_t> readonlyReplicas_ {};
          };

          virtual bool empty() const override { return this->shardAttribute_ == nullptr; };
          // shardAttribute Field Functions 
          bool hasShardAttribute() const { return this->shardAttribute_ != nullptr;};
          void deleteShardAttribute() { this->shardAttribute_ = nullptr;};
          inline const vector<ShardList::ShardAttribute> & getShardAttribute() const { DARABONBA_PTR_GET_CONST(shardAttribute_, vector<ShardList::ShardAttribute>) };
          inline vector<ShardList::ShardAttribute> getShardAttribute() { DARABONBA_PTR_GET(shardAttribute_, vector<ShardList::ShardAttribute>) };
          inline ShardList& setShardAttribute(const vector<ShardList::ShardAttribute> & shardAttribute) { DARABONBA_PTR_SET_VALUE(shardAttribute_, shardAttribute) };
          inline ShardList& setShardAttribute(vector<ShardList::ShardAttribute> && shardAttribute) { DARABONBA_PTR_SET_RVALUE(shardAttribute_, shardAttribute) };


        protected:
          shared_ptr<vector<ShardList::ShardAttribute>> shardAttribute_ {};
        };

        class MongosList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MongosList& obj) { 
            DARABONBA_PTR_TO_JSON(MongosAttribute, mongosAttribute_);
          };
          friend void from_json(const Darabonba::Json& j, MongosList& obj) { 
            DARABONBA_PTR_FROM_JSON(MongosAttribute, mongosAttribute_);
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
          class MongosAttribute : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MongosAttribute& obj) { 
              DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
              DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
              DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            };
            friend void from_json(const Darabonba::Json& j, MongosAttribute& obj) { 
              DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
              DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
              DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            };
            MongosAttribute() = default ;
            MongosAttribute(const MongosAttribute &) = default ;
            MongosAttribute(MongosAttribute &&) = default ;
            MongosAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MongosAttribute() = default ;
            MongosAttribute& operator=(const MongosAttribute &) = default ;
            MongosAttribute& operator=(MongosAttribute &&) = default ;
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
            inline MongosAttribute& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


            // nodeDescription Field Functions 
            bool hasNodeDescription() const { return this->nodeDescription_ != nullptr;};
            void deleteNodeDescription() { this->nodeDescription_ = nullptr;};
            inline string getNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeDescription_, "") };
            inline MongosAttribute& setNodeDescription(string nodeDescription) { DARABONBA_PTR_SET_VALUE(nodeDescription_, nodeDescription) };


            // nodeId Field Functions 
            bool hasNodeId() const { return this->nodeId_ != nullptr;};
            void deleteNodeId() { this->nodeId_ = nullptr;};
            inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
            inline MongosAttribute& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          protected:
            // The instance type of the mongos node.
            shared_ptr<string> nodeClass_ {};
            // The description of the mongos node.
            shared_ptr<string> nodeDescription_ {};
            // The ID of the mongos node.
            shared_ptr<string> nodeId_ {};
          };

          virtual bool empty() const override { return this->mongosAttribute_ == nullptr; };
          // mongosAttribute Field Functions 
          bool hasMongosAttribute() const { return this->mongosAttribute_ != nullptr;};
          void deleteMongosAttribute() { this->mongosAttribute_ = nullptr;};
          inline const vector<MongosList::MongosAttribute> & getMongosAttribute() const { DARABONBA_PTR_GET_CONST(mongosAttribute_, vector<MongosList::MongosAttribute>) };
          inline vector<MongosList::MongosAttribute> getMongosAttribute() { DARABONBA_PTR_GET(mongosAttribute_, vector<MongosList::MongosAttribute>) };
          inline MongosList& setMongosAttribute(const vector<MongosList::MongosAttribute> & mongosAttribute) { DARABONBA_PTR_SET_VALUE(mongosAttribute_, mongosAttribute) };
          inline MongosList& setMongosAttribute(vector<MongosList::MongosAttribute> && mongosAttribute) { DARABONBA_PTR_SET_RVALUE(mongosAttribute_, mongosAttribute) };


        protected:
          shared_ptr<vector<MongosList::MongosAttribute>> mongosAttribute_ {};
        };

        virtual bool empty() const override { return this->backupRetentionPolicy_ == nullptr
        && this->capacityUnit_ == nullptr && this->chargeType_ == nullptr && this->creationTime_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceDescription_ == nullptr
        && this->DBInstanceId_ == nullptr && this->DBInstanceStatus_ == nullptr && this->DBInstanceStorage_ == nullptr && this->DBInstanceType_ == nullptr && this->destroyTime_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->expireTime_ == nullptr && this->hiddenZoneId_ == nullptr && this->kindCode_ == nullptr
        && this->lastDowngradeTime_ == nullptr && this->lockMode_ == nullptr && this->mongosList_ == nullptr && this->networkType_ == nullptr && this->regionId_ == nullptr
        && this->releaseTime_ == nullptr && this->replicationFactor_ == nullptr && this->resourceGroupId_ == nullptr && this->secondaryZoneId_ == nullptr && this->shardList_ == nullptr
        && this->storageType_ == nullptr && this->tags_ == nullptr && this->vpcAuthMode_ == nullptr && this->zoneId_ == nullptr; };
        // backupRetentionPolicy Field Functions 
        bool hasBackupRetentionPolicy() const { return this->backupRetentionPolicy_ != nullptr;};
        void deleteBackupRetentionPolicy() { this->backupRetentionPolicy_ = nullptr;};
        inline int32_t getBackupRetentionPolicy() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicy_, 0) };
        inline DBInstance& setBackupRetentionPolicy(int32_t backupRetentionPolicy) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicy_, backupRetentionPolicy) };


        // capacityUnit Field Functions 
        bool hasCapacityUnit() const { return this->capacityUnit_ != nullptr;};
        void deleteCapacityUnit() { this->capacityUnit_ = nullptr;};
        inline string getCapacityUnit() const { DARABONBA_PTR_GET_DEFAULT(capacityUnit_, "") };
        inline DBInstance& setCapacityUnit(string capacityUnit) { DARABONBA_PTR_SET_VALUE(capacityUnit_, capacityUnit) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline DBInstance& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline DBInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // DBInstanceClass Field Functions 
        bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
        void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
        inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
        inline DBInstance& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


        // DBInstanceDescription Field Functions 
        bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
        void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
        inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
        inline DBInstance& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // DBInstanceStatus Field Functions 
        bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
        void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
        inline string getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
        inline DBInstance& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


        // DBInstanceStorage Field Functions 
        bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
        void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
        inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
        inline DBInstance& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


        // DBInstanceType Field Functions 
        bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
        void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
        inline string getDBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
        inline DBInstance& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


        // destroyTime Field Functions 
        bool hasDestroyTime() const { return this->destroyTime_ != nullptr;};
        void deleteDestroyTime() { this->destroyTime_ = nullptr;};
        inline string getDestroyTime() const { DARABONBA_PTR_GET_DEFAULT(destroyTime_, "") };
        inline DBInstance& setDestroyTime(string destroyTime) { DARABONBA_PTR_SET_VALUE(destroyTime_, destroyTime) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline DBInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline DBInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline DBInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // hiddenZoneId Field Functions 
        bool hasHiddenZoneId() const { return this->hiddenZoneId_ != nullptr;};
        void deleteHiddenZoneId() { this->hiddenZoneId_ = nullptr;};
        inline string getHiddenZoneId() const { DARABONBA_PTR_GET_DEFAULT(hiddenZoneId_, "") };
        inline DBInstance& setHiddenZoneId(string hiddenZoneId) { DARABONBA_PTR_SET_VALUE(hiddenZoneId_, hiddenZoneId) };


        // kindCode Field Functions 
        bool hasKindCode() const { return this->kindCode_ != nullptr;};
        void deleteKindCode() { this->kindCode_ = nullptr;};
        inline string getKindCode() const { DARABONBA_PTR_GET_DEFAULT(kindCode_, "") };
        inline DBInstance& setKindCode(string kindCode) { DARABONBA_PTR_SET_VALUE(kindCode_, kindCode) };


        // lastDowngradeTime Field Functions 
        bool hasLastDowngradeTime() const { return this->lastDowngradeTime_ != nullptr;};
        void deleteLastDowngradeTime() { this->lastDowngradeTime_ = nullptr;};
        inline string getLastDowngradeTime() const { DARABONBA_PTR_GET_DEFAULT(lastDowngradeTime_, "") };
        inline DBInstance& setLastDowngradeTime(string lastDowngradeTime) { DARABONBA_PTR_SET_VALUE(lastDowngradeTime_, lastDowngradeTime) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline DBInstance& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // mongosList Field Functions 
        bool hasMongosList() const { return this->mongosList_ != nullptr;};
        void deleteMongosList() { this->mongosList_ = nullptr;};
        inline const DBInstance::MongosList & getMongosList() const { DARABONBA_PTR_GET_CONST(mongosList_, DBInstance::MongosList) };
        inline DBInstance::MongosList getMongosList() { DARABONBA_PTR_GET(mongosList_, DBInstance::MongosList) };
        inline DBInstance& setMongosList(const DBInstance::MongosList & mongosList) { DARABONBA_PTR_SET_VALUE(mongosList_, mongosList) };
        inline DBInstance& setMongosList(DBInstance::MongosList && mongosList) { DARABONBA_PTR_SET_RVALUE(mongosList_, mongosList) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline DBInstance& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // releaseTime Field Functions 
        bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
        void deleteReleaseTime() { this->releaseTime_ = nullptr;};
        inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
        inline DBInstance& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


        // replicationFactor Field Functions 
        bool hasReplicationFactor() const { return this->replicationFactor_ != nullptr;};
        void deleteReplicationFactor() { this->replicationFactor_ = nullptr;};
        inline string getReplicationFactor() const { DARABONBA_PTR_GET_DEFAULT(replicationFactor_, "") };
        inline DBInstance& setReplicationFactor(string replicationFactor) { DARABONBA_PTR_SET_VALUE(replicationFactor_, replicationFactor) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DBInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // secondaryZoneId Field Functions 
        bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
        void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
        inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
        inline DBInstance& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


        // shardList Field Functions 
        bool hasShardList() const { return this->shardList_ != nullptr;};
        void deleteShardList() { this->shardList_ = nullptr;};
        inline const DBInstance::ShardList & getShardList() const { DARABONBA_PTR_GET_CONST(shardList_, DBInstance::ShardList) };
        inline DBInstance::ShardList getShardList() { DARABONBA_PTR_GET(shardList_, DBInstance::ShardList) };
        inline DBInstance& setShardList(const DBInstance::ShardList & shardList) { DARABONBA_PTR_SET_VALUE(shardList_, shardList) };
        inline DBInstance& setShardList(DBInstance::ShardList && shardList) { DARABONBA_PTR_SET_RVALUE(shardList_, shardList) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline DBInstance& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DBInstance::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DBInstance::Tags) };
        inline DBInstance::Tags getTags() { DARABONBA_PTR_GET(tags_, DBInstance::Tags) };
        inline DBInstance& setTags(const DBInstance::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DBInstance& setTags(DBInstance::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcAuthMode Field Functions 
        bool hasVpcAuthMode() const { return this->vpcAuthMode_ != nullptr;};
        void deleteVpcAuthMode() { this->vpcAuthMode_ = nullptr;};
        inline string getVpcAuthMode() const { DARABONBA_PTR_GET_DEFAULT(vpcAuthMode_, "") };
        inline DBInstance& setVpcAuthMode(string vpcAuthMode) { DARABONBA_PTR_SET_VALUE(vpcAuthMode_, vpcAuthMode) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The backup retention policy configured for the instance. Valid values:
        // 
        // *   **0**: All backup sets of the instance are immediately deleted when the instance is released.
        // *   **1**: A backup set of the instance is automatically backed up and retained for a long period of time when the instance is released.
        // *   **2**: All backup sets of the instance are automatically backed up and retained for a long period of time when the instance is released.
        shared_ptr<int32_t> backupRetentionPolicy_ {};
        // The I/O throughput consumed by the instance.
        // 
        // >  This parameter is required only when the instance is a serverless instance.
        shared_ptr<string> capacityUnit_ {};
        // The billing method of the instance. Valid values:
        // 
        // *   **PrePaid**: subscription
        // *   **PostPaid:** pay-as-you-go
        shared_ptr<string> chargeType_ {};
        // The time when the instance was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The instance type of the instance.
        shared_ptr<string> DBInstanceClass_ {};
        // The description of the instance.
        shared_ptr<string> DBInstanceDescription_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The status of the instance. For more information, see [Instance states](https://help.aliyun.com/document_detail/63870.html).
        shared_ptr<string> DBInstanceStatus_ {};
        // The storage capacity of the instance.
        shared_ptr<int32_t> DBInstanceStorage_ {};
        // The architecture of the instance.
        // 
        // *   **sharding**: sharded cluster instance
        // *   **replicate**: replica set or standalone instance
        shared_ptr<string> DBInstanceType_ {};
        // The time when the instance data is destroyed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        // 
        // > *   For a subscription instance, the computing resources of the instance are released on the 16th day after expiration, and the data of the instance is retained for seven days. The data is deleted on the 23th day after expiration and cannot be restored.
        // > *   For a pay-as-you-go instance, the computing resources of the instance are released on the 16th day after the payment becomes overdue, and the data of the instance is retained for seven days. The data is deleted on the 23th day after the payment becomes overdue and cannot be restored.
        shared_ptr<string> destroyTime_ {};
        // The engine of the instance.
        shared_ptr<string> engine_ {};
        // The database engine version of the instance. Valid values:
        // 
        // *   **7.0**
        // *   **6.0**
        // *   **5.0**
        // *   **4.4**
        // *   **4.2**
        // *   **4.0**
        // *   **3.4**
        shared_ptr<string> engineVersion_ {};
        // The time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
        shared_ptr<string> expireTime_ {};
        // The secondary zone 2 of the instance in the multi-zone deployment. Valid values:
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
        // > *   This parameter is returned only when the instance is a replica set or sharded cluster instance that runs MongoDB 4.4 or 5.0 and uses the multi-zone deployment.
        // > *   This parameter is returned only if you use the China site (aliyun.com).
        shared_ptr<string> hiddenZoneId_ {};
        // The kind code of the instance. Valid values:
        // 
        // *   **0**: physical machine
        // *   **1**: Elastic Compute Service (ECS) instance
        // *   **2**: Docker cluster
        // *   **18**: Kubernetes cluster
        shared_ptr<string> kindCode_ {};
        // The date when the last downgrade operation was performed.
        shared_ptr<string> lastDowngradeTime_ {};
        // The lock status of the instance. Valid values:
        // 
        // *   **Unlock**: The cluster is unlocked.
        // *   **ManualLock**: The instance is manually locked.
        // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
        // *   **LockByRestoration**: The instance is automatically locked before it is rolled back.
        // *   **LockByDiskQuota**: The instance is automatically locked after the storage space is exhausted.
        // *   **Released**: The instance is released. After an instance is released, the instance cannot be unlocked. You can only restore the backup data of the instance to a new instance. This process requires a long period of time.
        shared_ptr<string> lockMode_ {};
        // The details of the mongos node.
        // 
        // >  This parameter is returned if the instance is a sharded cluster instance.
        shared_ptr<DBInstance::MongosList> mongosList_ {};
        // The network type of the instance. Valid values:
        // 
        // *   **Classic**: classic network
        // *   **VPC**: VPC
        shared_ptr<string> networkType_ {};
        // The region ID of the instance.
        shared_ptr<string> regionId_ {};
        // The time when the instance was released.
        shared_ptr<string> releaseTime_ {};
        // The number of nodes in the instance.
        // 
        // >  This parameter is returned if the instance is a replica set instance.
        shared_ptr<string> replicationFactor_ {};
        // The ID of the resource group to which the instance belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The secondary zone 1 of the instance in the multi-zone deployment. Valid values:
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
        // > *   This parameter is returned only when the instance is a replica set or sharded cluster instance that runs MongoDB 4.4 or 5.0 and uses the multi-zone deployment.
        // > *   This parameter is returned only if you use the China site (aliyun.com).
        shared_ptr<string> secondaryZoneId_ {};
        // The details of the shard node.
        // 
        // >  This parameter is returned if the instance is a sharded cluster instance.
        shared_ptr<DBInstance::ShardList> shardList_ {};
        // The storage type of the instance. Valid values:
        // 
        // *   **cloud_essd**: Enterprise SSD (ESSD)
        // *   **local_ssd**: local SSD
        shared_ptr<string> storageType_ {};
        // The details of the tag.
        shared_ptr<DBInstance::Tags> tags_ {};
        // Indicates whether password-free access over virtual private cloud (VPC) is enabled. Valid values:
        // 
        // *   **Open**: Password-free access over VPC is enabled.
        // *   **Close**: Password-free access over VPC is disabled.
        shared_ptr<string> vpcAuthMode_ {};
        // The zone ID of the instance.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->DBInstance_ == nullptr; };
      // DBInstance Field Functions 
      bool hasDBInstance() const { return this->DBInstance_ != nullptr;};
      void deleteDBInstance() { this->DBInstance_ = nullptr;};
      inline const vector<DBInstances::DBInstance> & getDBInstance() const { DARABONBA_PTR_GET_CONST(DBInstance_, vector<DBInstances::DBInstance>) };
      inline vector<DBInstances::DBInstance> getDBInstance() { DARABONBA_PTR_GET(DBInstance_, vector<DBInstances::DBInstance>) };
      inline DBInstances& setDBInstance(const vector<DBInstances::DBInstance> & dBInstance) { DARABONBA_PTR_SET_VALUE(DBInstance_, dBInstance) };
      inline DBInstances& setDBInstance(vector<DBInstances::DBInstance> && dBInstance) { DARABONBA_PTR_SET_RVALUE(DBInstance_, dBInstance) };


    protected:
      shared_ptr<vector<DBInstances::DBInstance>> DBInstance_ {};
    };

    virtual bool empty() const override { return this->DBInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const DescribeDBInstancesResponseBody::DBInstances & getDBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, DescribeDBInstancesResponseBody::DBInstances) };
    inline DescribeDBInstancesResponseBody::DBInstances getDBInstances() { DARABONBA_PTR_GET(DBInstances_, DescribeDBInstancesResponseBody::DBInstances) };
    inline DescribeDBInstancesResponseBody& setDBInstances(const DescribeDBInstancesResponseBody::DBInstances & dBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, dBInstances) };
    inline DescribeDBInstancesResponseBody& setDBInstances(DescribeDBInstancesResponseBody::DBInstances && dBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, dBInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDBInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the instance.
    shared_ptr<DescribeDBInstancesResponseBody::DBInstances> DBInstances_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of instances in the query results.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
