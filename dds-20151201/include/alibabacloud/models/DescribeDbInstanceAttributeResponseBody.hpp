// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeDBInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceAttributeResponseBody() = default ;
    DescribeDBInstanceAttributeResponseBody(const DescribeDBInstanceAttributeResponseBody &) = default ;
    DescribeDBInstanceAttributeResponseBody(DescribeDBInstanceAttributeResponseBody &&) = default ;
    DescribeDBInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBody() = default ;
    DescribeDBInstanceAttributeResponseBody& operator=(const DescribeDBInstanceAttributeResponseBody &) = default ;
    DescribeDBInstanceAttributeResponseBody& operator=(DescribeDBInstanceAttributeResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
          DARABONBA_PTR_TO_JSON(CapacityUnit, capacityUnit_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(ConfigserverList, configserverList_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(CurrentKernelVersion, currentKernelVersion_);
          DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
          DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DBInstanceOrderStatus, DBInstanceOrderStatus_);
          DARABONBA_PTR_TO_JSON(DBInstanceReleaseProtection, DBInstanceReleaseProtection_);
          DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
          DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_TO_JSON(DestroyTime, destroyTime_);
          DARABONBA_PTR_TO_JSON(DisasterRecoveryInfo, disasterRecoveryInfo_);
          DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(HiddenZoneId, hiddenZoneId_);
          DARABONBA_PTR_TO_JSON(KindCode, kindCode_);
          DARABONBA_PTR_TO_JSON(LastDowngradeTime, lastDowngradeTime_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
          DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
          DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
          DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
          DARABONBA_PTR_TO_JSON(MaxMBPS, maxMBPS_);
          DARABONBA_PTR_TO_JSON(MongosList, mongosList_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
          DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
          DARABONBA_PTR_TO_JSON(ReadonlyReplicas, readonlyReplicas_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReplacateId, replacateId_);
          DARABONBA_PTR_TO_JSON(ReplicaSetName, replicaSetName_);
          DARABONBA_PTR_TO_JSON(ReplicaSets, replicaSets_);
          DARABONBA_PTR_TO_JSON(ReplicationFactor, replicationFactor_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SearchNodeClass, searchNodeClass_);
          DARABONBA_PTR_TO_JSON(SearchNodeCount, searchNodeCount_);
          DARABONBA_PTR_TO_JSON(SearchNodeStorage, searchNodeStorage_);
          DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
          DARABONBA_PTR_TO_JSON(ShardList, shardList_);
          DARABONBA_PTR_TO_JSON(StorageEngine, storageEngine_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(SyncPercent, syncPercent_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UseClusterBackup, useClusterBackup_);
          DARABONBA_PTR_TO_JSON(VPCCloudInstanceIds, VPCCloudInstanceIds_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcAuthMode, vpcAuthMode_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
          DARABONBA_PTR_FROM_JSON(CapacityUnit, capacityUnit_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(ConfigserverList, configserverList_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(CurrentKernelVersion, currentKernelVersion_);
          DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
          DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBInstanceOrderStatus, DBInstanceOrderStatus_);
          DARABONBA_PTR_FROM_JSON(DBInstanceReleaseProtection, DBInstanceReleaseProtection_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
          DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_FROM_JSON(DestroyTime, destroyTime_);
          DARABONBA_PTR_FROM_JSON(DisasterRecoveryInfo, disasterRecoveryInfo_);
          DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(HiddenZoneId, hiddenZoneId_);
          DARABONBA_PTR_FROM_JSON(KindCode, kindCode_);
          DARABONBA_PTR_FROM_JSON(LastDowngradeTime, lastDowngradeTime_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
          DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
          DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
          DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
          DARABONBA_PTR_FROM_JSON(MaxMBPS, maxMBPS_);
          DARABONBA_PTR_FROM_JSON(MongosList, mongosList_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
          DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
          DARABONBA_PTR_FROM_JSON(ReadonlyReplicas, readonlyReplicas_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReplacateId, replacateId_);
          DARABONBA_PTR_FROM_JSON(ReplicaSetName, replicaSetName_);
          DARABONBA_PTR_FROM_JSON(ReplicaSets, replicaSets_);
          DARABONBA_PTR_FROM_JSON(ReplicationFactor, replicationFactor_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SearchNodeClass, searchNodeClass_);
          DARABONBA_PTR_FROM_JSON(SearchNodeCount, searchNodeCount_);
          DARABONBA_PTR_FROM_JSON(SearchNodeStorage, searchNodeStorage_);
          DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
          DARABONBA_PTR_FROM_JSON(ShardList, shardList_);
          DARABONBA_PTR_FROM_JSON(StorageEngine, storageEngine_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(SyncPercent, syncPercent_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UseClusterBackup, useClusterBackup_);
          DARABONBA_PTR_FROM_JSON(VPCCloudInstanceIds, VPCCloudInstanceIds_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
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
              DARABONBA_PTR_TO_JSON(ConnectString, connectString_);
              DARABONBA_PTR_TO_JSON(CurrentKernelVersion, currentKernelVersion_);
              DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
              DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
              DARABONBA_PTR_TO_JSON(MaxDiskMbps, maxDiskMbps_);
              DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
              DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
              DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
              DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
              DARABONBA_PTR_TO_JSON(NodeStorage, nodeStorage_);
              DARABONBA_PTR_TO_JSON(Port, port_);
              DARABONBA_PTR_TO_JSON(ReadonlyReplicas, readonlyReplicas_);
              DARABONBA_PTR_TO_JSON(ReplicaSetName, replicaSetName_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, ShardAttribute& obj) { 
              DARABONBA_PTR_FROM_JSON(ConnectString, connectString_);
              DARABONBA_PTR_FROM_JSON(CurrentKernelVersion, currentKernelVersion_);
              DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
              DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
              DARABONBA_PTR_FROM_JSON(MaxDiskMbps, maxDiskMbps_);
              DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
              DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
              DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
              DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
              DARABONBA_PTR_FROM_JSON(NodeStorage, nodeStorage_);
              DARABONBA_PTR_FROM_JSON(Port, port_);
              DARABONBA_PTR_FROM_JSON(ReadonlyReplicas, readonlyReplicas_);
              DARABONBA_PTR_FROM_JSON(ReplicaSetName, replicaSetName_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
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
            virtual bool empty() const override { return this->connectString_ == nullptr
        && this->currentKernelVersion_ == nullptr && this->lockMode_ == nullptr && this->maxConnections_ == nullptr && this->maxDiskMbps_ == nullptr && this->maxIOPS_ == nullptr
        && this->nodeClass_ == nullptr && this->nodeDescription_ == nullptr && this->nodeId_ == nullptr && this->nodeStorage_ == nullptr && this->port_ == nullptr
        && this->readonlyReplicas_ == nullptr && this->replicaSetName_ == nullptr && this->status_ == nullptr; };
            // connectString Field Functions 
            bool hasConnectString() const { return this->connectString_ != nullptr;};
            void deleteConnectString() { this->connectString_ = nullptr;};
            inline string getConnectString() const { DARABONBA_PTR_GET_DEFAULT(connectString_, "") };
            inline ShardAttribute& setConnectString(string connectString) { DARABONBA_PTR_SET_VALUE(connectString_, connectString) };


            // currentKernelVersion Field Functions 
            bool hasCurrentKernelVersion() const { return this->currentKernelVersion_ != nullptr;};
            void deleteCurrentKernelVersion() { this->currentKernelVersion_ = nullptr;};
            inline string getCurrentKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(currentKernelVersion_, "") };
            inline ShardAttribute& setCurrentKernelVersion(string currentKernelVersion) { DARABONBA_PTR_SET_VALUE(currentKernelVersion_, currentKernelVersion) };


            // lockMode Field Functions 
            bool hasLockMode() const { return this->lockMode_ != nullptr;};
            void deleteLockMode() { this->lockMode_ = nullptr;};
            inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
            inline ShardAttribute& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


            // maxConnections Field Functions 
            bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
            void deleteMaxConnections() { this->maxConnections_ = nullptr;};
            inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
            inline ShardAttribute& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


            // maxDiskMbps Field Functions 
            bool hasMaxDiskMbps() const { return this->maxDiskMbps_ != nullptr;};
            void deleteMaxDiskMbps() { this->maxDiskMbps_ = nullptr;};
            inline string getMaxDiskMbps() const { DARABONBA_PTR_GET_DEFAULT(maxDiskMbps_, "") };
            inline ShardAttribute& setMaxDiskMbps(string maxDiskMbps) { DARABONBA_PTR_SET_VALUE(maxDiskMbps_, maxDiskMbps) };


            // maxIOPS Field Functions 
            bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
            void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
            inline int32_t getMaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, 0) };
            inline ShardAttribute& setMaxIOPS(int32_t maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


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


            // port Field Functions 
            bool hasPort() const { return this->port_ != nullptr;};
            void deletePort() { this->port_ = nullptr;};
            inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
            inline ShardAttribute& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


            // readonlyReplicas Field Functions 
            bool hasReadonlyReplicas() const { return this->readonlyReplicas_ != nullptr;};
            void deleteReadonlyReplicas() { this->readonlyReplicas_ = nullptr;};
            inline int32_t getReadonlyReplicas() const { DARABONBA_PTR_GET_DEFAULT(readonlyReplicas_, 0) };
            inline ShardAttribute& setReadonlyReplicas(int32_t readonlyReplicas) { DARABONBA_PTR_SET_VALUE(readonlyReplicas_, readonlyReplicas) };


            // replicaSetName Field Functions 
            bool hasReplicaSetName() const { return this->replicaSetName_ != nullptr;};
            void deleteReplicaSetName() { this->replicaSetName_ = nullptr;};
            inline string getReplicaSetName() const { DARABONBA_PTR_GET_DEFAULT(replicaSetName_, "") };
            inline ShardAttribute& setReplicaSetName(string replicaSetName) { DARABONBA_PTR_SET_VALUE(replicaSetName_, replicaSetName) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline ShardAttribute& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // The endpoint of the shard node.
            shared_ptr<string> connectString_ {};
            // The minor version of the current MongoDB kernel.
            shared_ptr<string> currentKernelVersion_ {};
            // The lock status of the shard node. Valid values:
            // 
            // *   **Unlock**: The instance is not locked.
            // *   **ManualLock**: The instance is manually locked.
            // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
            // *   **LockByRestoration**: The instance is automatically locked before a rollback.
            // *   **LockByDiskQuota**: The instance is automatically locked because its storage capacity is exhausted and the instance is inaccessible.
            shared_ptr<string> lockMode_ {};
            // The maximum number of connections to the shard node.
            shared_ptr<int32_t> maxConnections_ {};
            // The maximum MBPS of the shard node.
            shared_ptr<string> maxDiskMbps_ {};
            // The maximum IOPS of the shard node.
            shared_ptr<int32_t> maxIOPS_ {};
            // The instance type of the shard node.
            shared_ptr<string> nodeClass_ {};
            // The name of the shard node.
            shared_ptr<string> nodeDescription_ {};
            // The ID of the shard node.
            shared_ptr<string> nodeId_ {};
            // The storage capacity of the shard node. Unit: GB.
            shared_ptr<int32_t> nodeStorage_ {};
            // The port number that is used to connect to the shard node.
            shared_ptr<int32_t> port_ {};
            // The number of read-only nodes in the shard node. Valid values: **0** to **5**. The value must be an integer.
            shared_ptr<int32_t> readonlyReplicas_ {};
            shared_ptr<string> replicaSetName_ {};
            // The status of the shard node. For more information, see [Instance states](https://help.aliyun.com/document_detail/63870.html).
            shared_ptr<string> status_ {};
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

        class ReplicaSets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReplicaSets& obj) { 
            DARABONBA_PTR_TO_JSON(ReplicaSet, replicaSet_);
          };
          friend void from_json(const Darabonba::Json& j, ReplicaSets& obj) { 
            DARABONBA_PTR_FROM_JSON(ReplicaSet, replicaSet_);
          };
          ReplicaSets() = default ;
          ReplicaSets(const ReplicaSets &) = default ;
          ReplicaSets(ReplicaSets &&) = default ;
          ReplicaSets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReplicaSets() = default ;
          ReplicaSets& operator=(const ReplicaSets &) = default ;
          ReplicaSets& operator=(ReplicaSets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReplicaSet : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReplicaSet& obj) { 
              DARABONBA_PTR_TO_JSON(ConnectionDomain, connectionDomain_);
              DARABONBA_PTR_TO_JSON(ConnectionPort, connectionPort_);
              DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
              DARABONBA_PTR_TO_JSON(ReplicaSetRole, replicaSetRole_);
              DARABONBA_PTR_TO_JSON(VPCCloudInstanceId, VPCCloudInstanceId_);
              DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
              DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
            };
            friend void from_json(const Darabonba::Json& j, ReplicaSet& obj) { 
              DARABONBA_PTR_FROM_JSON(ConnectionDomain, connectionDomain_);
              DARABONBA_PTR_FROM_JSON(ConnectionPort, connectionPort_);
              DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
              DARABONBA_PTR_FROM_JSON(ReplicaSetRole, replicaSetRole_);
              DARABONBA_PTR_FROM_JSON(VPCCloudInstanceId, VPCCloudInstanceId_);
              DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
              DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
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
            virtual bool empty() const override { return this->connectionDomain_ == nullptr
        && this->connectionPort_ == nullptr && this->networkType_ == nullptr && this->replicaSetRole_ == nullptr && this->VPCCloudInstanceId_ == nullptr && this->VPCId_ == nullptr
        && this->vSwitchId_ == nullptr; };
            // connectionDomain Field Functions 
            bool hasConnectionDomain() const { return this->connectionDomain_ != nullptr;};
            void deleteConnectionDomain() { this->connectionDomain_ = nullptr;};
            inline string getConnectionDomain() const { DARABONBA_PTR_GET_DEFAULT(connectionDomain_, "") };
            inline ReplicaSet& setConnectionDomain(string connectionDomain) { DARABONBA_PTR_SET_VALUE(connectionDomain_, connectionDomain) };


            // connectionPort Field Functions 
            bool hasConnectionPort() const { return this->connectionPort_ != nullptr;};
            void deleteConnectionPort() { this->connectionPort_ = nullptr;};
            inline string getConnectionPort() const { DARABONBA_PTR_GET_DEFAULT(connectionPort_, "") };
            inline ReplicaSet& setConnectionPort(string connectionPort) { DARABONBA_PTR_SET_VALUE(connectionPort_, connectionPort) };


            // networkType Field Functions 
            bool hasNetworkType() const { return this->networkType_ != nullptr;};
            void deleteNetworkType() { this->networkType_ = nullptr;};
            inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
            inline ReplicaSet& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


            // replicaSetRole Field Functions 
            bool hasReplicaSetRole() const { return this->replicaSetRole_ != nullptr;};
            void deleteReplicaSetRole() { this->replicaSetRole_ = nullptr;};
            inline string getReplicaSetRole() const { DARABONBA_PTR_GET_DEFAULT(replicaSetRole_, "") };
            inline ReplicaSet& setReplicaSetRole(string replicaSetRole) { DARABONBA_PTR_SET_VALUE(replicaSetRole_, replicaSetRole) };


            // VPCCloudInstanceId Field Functions 
            bool hasVPCCloudInstanceId() const { return this->VPCCloudInstanceId_ != nullptr;};
            void deleteVPCCloudInstanceId() { this->VPCCloudInstanceId_ = nullptr;};
            inline string getVPCCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(VPCCloudInstanceId_, "") };
            inline ReplicaSet& setVPCCloudInstanceId(string VPCCloudInstanceId) { DARABONBA_PTR_SET_VALUE(VPCCloudInstanceId_, VPCCloudInstanceId) };


            // VPCId Field Functions 
            bool hasVPCId() const { return this->VPCId_ != nullptr;};
            void deleteVPCId() { this->VPCId_ = nullptr;};
            inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
            inline ReplicaSet& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


            // vSwitchId Field Functions 
            bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
            void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
            inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
            inline ReplicaSet& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          protected:
            // The endpoint of the node.
            shared_ptr<string> connectionDomain_ {};
            // The port number that is used to connect to the node.
            shared_ptr<string> connectionPort_ {};
            // The network type of the instance. Valid values:
            // 
            // *   **Classic**: classic network
            // *   **VPC**: VPC
            shared_ptr<string> networkType_ {};
            // The role of the node. Valid values:
            // 
            // *   **Primary**
            // *   **Secondary**
            shared_ptr<string> replicaSetRole_ {};
            // The instance ID.
            // 
            // >  This parameter is returned if the network type of the instance is VPC.
            shared_ptr<string> VPCCloudInstanceId_ {};
            // The VPC ID of the instance.
            // 
            // >  This parameter is returned if the network type of the instance is VPC.
            shared_ptr<string> VPCId_ {};
            // The vSwitch ID of the instance.
            // 
            // >  This parameter is returned if the network type of the instance is virtual private cloud (VPC).
            shared_ptr<string> vSwitchId_ {};
          };

          virtual bool empty() const override { return this->replicaSet_ == nullptr; };
          // replicaSet Field Functions 
          bool hasReplicaSet() const { return this->replicaSet_ != nullptr;};
          void deleteReplicaSet() { this->replicaSet_ = nullptr;};
          inline const vector<ReplicaSets::ReplicaSet> & getReplicaSet() const { DARABONBA_PTR_GET_CONST(replicaSet_, vector<ReplicaSets::ReplicaSet>) };
          inline vector<ReplicaSets::ReplicaSet> getReplicaSet() { DARABONBA_PTR_GET(replicaSet_, vector<ReplicaSets::ReplicaSet>) };
          inline ReplicaSets& setReplicaSet(const vector<ReplicaSets::ReplicaSet> & replicaSet) { DARABONBA_PTR_SET_VALUE(replicaSet_, replicaSet) };
          inline ReplicaSets& setReplicaSet(vector<ReplicaSets::ReplicaSet> && replicaSet) { DARABONBA_PTR_SET_RVALUE(replicaSet_, replicaSet) };


        protected:
          shared_ptr<vector<ReplicaSets::ReplicaSet>> replicaSet_ {};
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
              DARABONBA_PTR_TO_JSON(ConnectSting, connectSting_);
              DARABONBA_PTR_TO_JSON(ConnectString, connectString_);
              DARABONBA_PTR_TO_JSON(CurrentKernelVersion, currentKernelVersion_);
              DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
              DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
              DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
              DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
              DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
              DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
              DARABONBA_PTR_TO_JSON(Port, port_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
              DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
              DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
            };
            friend void from_json(const Darabonba::Json& j, MongosAttribute& obj) { 
              DARABONBA_PTR_FROM_JSON(ConnectSting, connectSting_);
              DARABONBA_PTR_FROM_JSON(ConnectString, connectString_);
              DARABONBA_PTR_FROM_JSON(CurrentKernelVersion, currentKernelVersion_);
              DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
              DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
              DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
              DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
              DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
              DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
              DARABONBA_PTR_FROM_JSON(Port, port_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
              DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
              DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
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
            virtual bool empty() const override { return this->connectSting_ == nullptr
        && this->connectString_ == nullptr && this->currentKernelVersion_ == nullptr && this->lockMode_ == nullptr && this->maxConnections_ == nullptr && this->maxIOPS_ == nullptr
        && this->nodeClass_ == nullptr && this->nodeDescription_ == nullptr && this->nodeId_ == nullptr && this->port_ == nullptr && this->status_ == nullptr
        && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcCloudInstanceId_ == nullptr; };
            // connectSting Field Functions 
            bool hasConnectSting() const { return this->connectSting_ != nullptr;};
            void deleteConnectSting() { this->connectSting_ = nullptr;};
            inline string getConnectSting() const { DARABONBA_PTR_GET_DEFAULT(connectSting_, "") };
            inline MongosAttribute& setConnectSting(string connectSting) { DARABONBA_PTR_SET_VALUE(connectSting_, connectSting) };


            // connectString Field Functions 
            bool hasConnectString() const { return this->connectString_ != nullptr;};
            void deleteConnectString() { this->connectString_ = nullptr;};
            inline string getConnectString() const { DARABONBA_PTR_GET_DEFAULT(connectString_, "") };
            inline MongosAttribute& setConnectString(string connectString) { DARABONBA_PTR_SET_VALUE(connectString_, connectString) };


            // currentKernelVersion Field Functions 
            bool hasCurrentKernelVersion() const { return this->currentKernelVersion_ != nullptr;};
            void deleteCurrentKernelVersion() { this->currentKernelVersion_ = nullptr;};
            inline string getCurrentKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(currentKernelVersion_, "") };
            inline MongosAttribute& setCurrentKernelVersion(string currentKernelVersion) { DARABONBA_PTR_SET_VALUE(currentKernelVersion_, currentKernelVersion) };


            // lockMode Field Functions 
            bool hasLockMode() const { return this->lockMode_ != nullptr;};
            void deleteLockMode() { this->lockMode_ = nullptr;};
            inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
            inline MongosAttribute& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


            // maxConnections Field Functions 
            bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
            void deleteMaxConnections() { this->maxConnections_ = nullptr;};
            inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
            inline MongosAttribute& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


            // maxIOPS Field Functions 
            bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
            void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
            inline int32_t getMaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, 0) };
            inline MongosAttribute& setMaxIOPS(int32_t maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


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


            // port Field Functions 
            bool hasPort() const { return this->port_ != nullptr;};
            void deletePort() { this->port_ = nullptr;};
            inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
            inline MongosAttribute& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline MongosAttribute& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // VPCId Field Functions 
            bool hasVPCId() const { return this->VPCId_ != nullptr;};
            void deleteVPCId() { this->VPCId_ = nullptr;};
            inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
            inline MongosAttribute& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


            // vSwitchId Field Functions 
            bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
            void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
            inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
            inline MongosAttribute& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


            // vpcCloudInstanceId Field Functions 
            bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
            void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
            inline string getVpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
            inline MongosAttribute& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


          protected:
            // The endpoint of the mongos node.
            shared_ptr<string> connectSting_ {};
            // The endpoint of the mongos node.
            shared_ptr<string> connectString_ {};
            // The minor version of the current MongoDB kernel.
            shared_ptr<string> currentKernelVersion_ {};
            // The lock status of the instance. Valid values:
            // 
            // *   **Unlock**: The instance is not locked.
            // *   **ManualLock**: The instance is manually locked.
            // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
            // *   **LockByRestoration**: The instance is automatically locked before a rollback.
            // *   **LockByDiskQuota**: The instance is automatically locked because its storage capacity is exhausted and the instance is inaccessible.
            shared_ptr<string> lockMode_ {};
            // The maximum number of connections to the mongos node.
            shared_ptr<int32_t> maxConnections_ {};
            // The maximum IOPS of the mongos node.
            shared_ptr<int32_t> maxIOPS_ {};
            // The instance type of the mongos node.
            shared_ptr<string> nodeClass_ {};
            // The name of the mongos node.
            shared_ptr<string> nodeDescription_ {};
            // The ID of the mongos node.
            shared_ptr<string> nodeId_ {};
            // The port number that is used to connect to the mongos node.
            shared_ptr<int32_t> port_ {};
            // The status of the mongos node. For more information, see [Instance states](https://help.aliyun.com/document_detail/63870.html).
            shared_ptr<string> status_ {};
            // The VPC ID of the instance.
            // 
            // >  This parameter is returned if the network type of the instance is VPC.
            shared_ptr<string> VPCId_ {};
            // The vSwitch ID of the instance.
            // 
            // >  This parameter is returned if the network type of the instance is VPC.
            shared_ptr<string> vSwitchId_ {};
            // The ID of the mongos node.
            shared_ptr<string> vpcCloudInstanceId_ {};
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

        class ConfigserverList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConfigserverList& obj) { 
            DARABONBA_PTR_TO_JSON(ConfigserverAttribute, configserverAttribute_);
          };
          friend void from_json(const Darabonba::Json& j, ConfigserverList& obj) { 
            DARABONBA_PTR_FROM_JSON(ConfigserverAttribute, configserverAttribute_);
          };
          ConfigserverList() = default ;
          ConfigserverList(const ConfigserverList &) = default ;
          ConfigserverList(ConfigserverList &&) = default ;
          ConfigserverList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConfigserverList() = default ;
          ConfigserverList& operator=(const ConfigserverList &) = default ;
          ConfigserverList& operator=(ConfigserverList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ConfigserverAttribute : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConfigserverAttribute& obj) { 
              DARABONBA_PTR_TO_JSON(ConnectString, connectString_);
              DARABONBA_PTR_TO_JSON(CurrentKernelVersion, currentKernelVersion_);
              DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
              DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
              DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
              DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
              DARABONBA_PTR_TO_JSON(NodeDescription, nodeDescription_);
              DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
              DARABONBA_PTR_TO_JSON(NodeStorage, nodeStorage_);
              DARABONBA_PTR_TO_JSON(Port, port_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, ConfigserverAttribute& obj) { 
              DARABONBA_PTR_FROM_JSON(ConnectString, connectString_);
              DARABONBA_PTR_FROM_JSON(CurrentKernelVersion, currentKernelVersion_);
              DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
              DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
              DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
              DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
              DARABONBA_PTR_FROM_JSON(NodeDescription, nodeDescription_);
              DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
              DARABONBA_PTR_FROM_JSON(NodeStorage, nodeStorage_);
              DARABONBA_PTR_FROM_JSON(Port, port_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            ConfigserverAttribute() = default ;
            ConfigserverAttribute(const ConfigserverAttribute &) = default ;
            ConfigserverAttribute(ConfigserverAttribute &&) = default ;
            ConfigserverAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConfigserverAttribute() = default ;
            ConfigserverAttribute& operator=(const ConfigserverAttribute &) = default ;
            ConfigserverAttribute& operator=(ConfigserverAttribute &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->connectString_ == nullptr
        && this->currentKernelVersion_ == nullptr && this->lockMode_ == nullptr && this->maxConnections_ == nullptr && this->maxIOPS_ == nullptr && this->nodeClass_ == nullptr
        && this->nodeDescription_ == nullptr && this->nodeId_ == nullptr && this->nodeStorage_ == nullptr && this->port_ == nullptr && this->status_ == nullptr; };
            // connectString Field Functions 
            bool hasConnectString() const { return this->connectString_ != nullptr;};
            void deleteConnectString() { this->connectString_ = nullptr;};
            inline string getConnectString() const { DARABONBA_PTR_GET_DEFAULT(connectString_, "") };
            inline ConfigserverAttribute& setConnectString(string connectString) { DARABONBA_PTR_SET_VALUE(connectString_, connectString) };


            // currentKernelVersion Field Functions 
            bool hasCurrentKernelVersion() const { return this->currentKernelVersion_ != nullptr;};
            void deleteCurrentKernelVersion() { this->currentKernelVersion_ = nullptr;};
            inline string getCurrentKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(currentKernelVersion_, "") };
            inline ConfigserverAttribute& setCurrentKernelVersion(string currentKernelVersion) { DARABONBA_PTR_SET_VALUE(currentKernelVersion_, currentKernelVersion) };


            // lockMode Field Functions 
            bool hasLockMode() const { return this->lockMode_ != nullptr;};
            void deleteLockMode() { this->lockMode_ = nullptr;};
            inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
            inline ConfigserverAttribute& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


            // maxConnections Field Functions 
            bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
            void deleteMaxConnections() { this->maxConnections_ = nullptr;};
            inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
            inline ConfigserverAttribute& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


            // maxIOPS Field Functions 
            bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
            void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
            inline int32_t getMaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, 0) };
            inline ConfigserverAttribute& setMaxIOPS(int32_t maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


            // nodeClass Field Functions 
            bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
            void deleteNodeClass() { this->nodeClass_ = nullptr;};
            inline string getNodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
            inline ConfigserverAttribute& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


            // nodeDescription Field Functions 
            bool hasNodeDescription() const { return this->nodeDescription_ != nullptr;};
            void deleteNodeDescription() { this->nodeDescription_ = nullptr;};
            inline string getNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeDescription_, "") };
            inline ConfigserverAttribute& setNodeDescription(string nodeDescription) { DARABONBA_PTR_SET_VALUE(nodeDescription_, nodeDescription) };


            // nodeId Field Functions 
            bool hasNodeId() const { return this->nodeId_ != nullptr;};
            void deleteNodeId() { this->nodeId_ = nullptr;};
            inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
            inline ConfigserverAttribute& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


            // nodeStorage Field Functions 
            bool hasNodeStorage() const { return this->nodeStorage_ != nullptr;};
            void deleteNodeStorage() { this->nodeStorage_ = nullptr;};
            inline int32_t getNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(nodeStorage_, 0) };
            inline ConfigserverAttribute& setNodeStorage(int32_t nodeStorage) { DARABONBA_PTR_SET_VALUE(nodeStorage_, nodeStorage) };


            // port Field Functions 
            bool hasPort() const { return this->port_ != nullptr;};
            void deletePort() { this->port_ = nullptr;};
            inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
            inline ConfigserverAttribute& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline ConfigserverAttribute& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // The endpoint of the Configserver node.
            shared_ptr<string> connectString_ {};
            // The minor version of the current MongoDB kernel.
            shared_ptr<string> currentKernelVersion_ {};
            // The lock status of the Configserver node. Valid values:
            // 
            // *   **Unlock**: The instance is not locked.
            // *   **ManualLock**: The instance is manually locked.
            // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
            // *   **LockByRestoration**: The instance is automatically locked before a rollback.
            // *   **LockByDiskQuota**: The instance is automatically locked because its storage capacity is exhausted and the instance is inaccessible.
            shared_ptr<string> lockMode_ {};
            // The maximum number of connections to the Configserver node.
            shared_ptr<int32_t> maxConnections_ {};
            // The maximum IOPS of the Configserver node.
            shared_ptr<int32_t> maxIOPS_ {};
            // The instance type of the Configserver node.
            shared_ptr<string> nodeClass_ {};
            // The name of the Configserver node.
            shared_ptr<string> nodeDescription_ {};
            // The ID of the Configserver node.
            shared_ptr<string> nodeId_ {};
            // The storage capacity of the Configserver node. Unit: GB.
            shared_ptr<int32_t> nodeStorage_ {};
            // The port number that is used to connect to the Configserver node.
            shared_ptr<int32_t> port_ {};
            // The status of the Configserver node. For more information, see [Instance states](https://help.aliyun.com/document_detail/63870.html).
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->configserverAttribute_ == nullptr; };
          // configserverAttribute Field Functions 
          bool hasConfigserverAttribute() const { return this->configserverAttribute_ != nullptr;};
          void deleteConfigserverAttribute() { this->configserverAttribute_ = nullptr;};
          inline const vector<ConfigserverList::ConfigserverAttribute> & getConfigserverAttribute() const { DARABONBA_PTR_GET_CONST(configserverAttribute_, vector<ConfigserverList::ConfigserverAttribute>) };
          inline vector<ConfigserverList::ConfigserverAttribute> getConfigserverAttribute() { DARABONBA_PTR_GET(configserverAttribute_, vector<ConfigserverList::ConfigserverAttribute>) };
          inline ConfigserverList& setConfigserverAttribute(const vector<ConfigserverList::ConfigserverAttribute> & configserverAttribute) { DARABONBA_PTR_SET_VALUE(configserverAttribute_, configserverAttribute) };
          inline ConfigserverList& setConfigserverAttribute(vector<ConfigserverList::ConfigserverAttribute> && configserverAttribute) { DARABONBA_PTR_SET_RVALUE(configserverAttribute_, configserverAttribute) };


        protected:
          shared_ptr<vector<ConfigserverList::ConfigserverAttribute>> configserverAttribute_ {};
        };

        virtual bool empty() const override { return this->burstingEnabled_ == nullptr
        && this->capacityUnit_ == nullptr && this->chargeType_ == nullptr && this->configserverList_ == nullptr && this->creationTime_ == nullptr && this->currentKernelVersion_ == nullptr
        && this->DBInstanceClass_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceOrderStatus_ == nullptr && this->DBInstanceReleaseProtection_ == nullptr
        && this->DBInstanceStatus_ == nullptr && this->DBInstanceStorage_ == nullptr && this->DBInstanceType_ == nullptr && this->destroyTime_ == nullptr && this->disasterRecoveryInfo_ == nullptr
        && this->encrypted_ == nullptr && this->encryptionKey_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->expireTime_ == nullptr
        && this->hiddenZoneId_ == nullptr && this->kindCode_ == nullptr && this->lastDowngradeTime_ == nullptr && this->lockMode_ == nullptr && this->maintainEndTime_ == nullptr
        && this->maintainStartTime_ == nullptr && this->maxConnections_ == nullptr && this->maxIOPS_ == nullptr && this->maxMBPS_ == nullptr && this->mongosList_ == nullptr
        && this->networkType_ == nullptr && this->protocolType_ == nullptr && this->provisionedIops_ == nullptr && this->readonlyReplicas_ == nullptr && this->regionId_ == nullptr
        && this->replacateId_ == nullptr && this->replicaSetName_ == nullptr && this->replicaSets_ == nullptr && this->replicationFactor_ == nullptr && this->resourceGroupId_ == nullptr
        && this->searchNodeClass_ == nullptr && this->searchNodeCount_ == nullptr && this->searchNodeStorage_ == nullptr && this->secondaryZoneId_ == nullptr && this->shardList_ == nullptr
        && this->storageEngine_ == nullptr && this->storageType_ == nullptr && this->syncPercent_ == nullptr && this->tags_ == nullptr && this->useClusterBackup_ == nullptr
        && this->VPCCloudInstanceIds_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcAuthMode_ == nullptr && this->zoneId_ == nullptr; };
        // burstingEnabled Field Functions 
        bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
        void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
        inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
        inline DBInstance& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


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


        // configserverList Field Functions 
        bool hasConfigserverList() const { return this->configserverList_ != nullptr;};
        void deleteConfigserverList() { this->configserverList_ = nullptr;};
        inline const DBInstance::ConfigserverList & getConfigserverList() const { DARABONBA_PTR_GET_CONST(configserverList_, DBInstance::ConfigserverList) };
        inline DBInstance::ConfigserverList getConfigserverList() { DARABONBA_PTR_GET(configserverList_, DBInstance::ConfigserverList) };
        inline DBInstance& setConfigserverList(const DBInstance::ConfigserverList & configserverList) { DARABONBA_PTR_SET_VALUE(configserverList_, configserverList) };
        inline DBInstance& setConfigserverList(DBInstance::ConfigserverList && configserverList) { DARABONBA_PTR_SET_RVALUE(configserverList_, configserverList) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline DBInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // currentKernelVersion Field Functions 
        bool hasCurrentKernelVersion() const { return this->currentKernelVersion_ != nullptr;};
        void deleteCurrentKernelVersion() { this->currentKernelVersion_ = nullptr;};
        inline string getCurrentKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(currentKernelVersion_, "") };
        inline DBInstance& setCurrentKernelVersion(string currentKernelVersion) { DARABONBA_PTR_SET_VALUE(currentKernelVersion_, currentKernelVersion) };


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


        // DBInstanceOrderStatus Field Functions 
        bool hasDBInstanceOrderStatus() const { return this->DBInstanceOrderStatus_ != nullptr;};
        void deleteDBInstanceOrderStatus() { this->DBInstanceOrderStatus_ = nullptr;};
        inline string getDBInstanceOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceOrderStatus_, "") };
        inline DBInstance& setDBInstanceOrderStatus(string DBInstanceOrderStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceOrderStatus_, DBInstanceOrderStatus) };


        // DBInstanceReleaseProtection Field Functions 
        bool hasDBInstanceReleaseProtection() const { return this->DBInstanceReleaseProtection_ != nullptr;};
        void deleteDBInstanceReleaseProtection() { this->DBInstanceReleaseProtection_ = nullptr;};
        inline bool getDBInstanceReleaseProtection() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceReleaseProtection_, false) };
        inline DBInstance& setDBInstanceReleaseProtection(bool DBInstanceReleaseProtection) { DARABONBA_PTR_SET_VALUE(DBInstanceReleaseProtection_, DBInstanceReleaseProtection) };


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


        // disasterRecoveryInfo Field Functions 
        bool hasDisasterRecoveryInfo() const { return this->disasterRecoveryInfo_ != nullptr;};
        void deleteDisasterRecoveryInfo() { this->disasterRecoveryInfo_ = nullptr;};
        inline string getDisasterRecoveryInfo() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryInfo_, "") };
        inline DBInstance& setDisasterRecoveryInfo(string disasterRecoveryInfo) { DARABONBA_PTR_SET_VALUE(disasterRecoveryInfo_, disasterRecoveryInfo) };


        // encrypted Field Functions 
        bool hasEncrypted() const { return this->encrypted_ != nullptr;};
        void deleteEncrypted() { this->encrypted_ = nullptr;};
        inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
        inline DBInstance& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


        // encryptionKey Field Functions 
        bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
        void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
        inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
        inline DBInstance& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


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


        // maintainEndTime Field Functions 
        bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
        void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
        inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
        inline DBInstance& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


        // maintainStartTime Field Functions 
        bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
        void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
        inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
        inline DBInstance& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


        // maxConnections Field Functions 
        bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
        void deleteMaxConnections() { this->maxConnections_ = nullptr;};
        inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
        inline DBInstance& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


        // maxIOPS Field Functions 
        bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
        void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
        inline int32_t getMaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, 0) };
        inline DBInstance& setMaxIOPS(int32_t maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


        // maxMBPS Field Functions 
        bool hasMaxMBPS() const { return this->maxMBPS_ != nullptr;};
        void deleteMaxMBPS() { this->maxMBPS_ = nullptr;};
        inline int32_t getMaxMBPS() const { DARABONBA_PTR_GET_DEFAULT(maxMBPS_, 0) };
        inline DBInstance& setMaxMBPS(int32_t maxMBPS) { DARABONBA_PTR_SET_VALUE(maxMBPS_, maxMBPS) };


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


        // protocolType Field Functions 
        bool hasProtocolType() const { return this->protocolType_ != nullptr;};
        void deleteProtocolType() { this->protocolType_ = nullptr;};
        inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
        inline DBInstance& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


        // provisionedIops Field Functions 
        bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
        void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
        inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
        inline DBInstance& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


        // readonlyReplicas Field Functions 
        bool hasReadonlyReplicas() const { return this->readonlyReplicas_ != nullptr;};
        void deleteReadonlyReplicas() { this->readonlyReplicas_ = nullptr;};
        inline string getReadonlyReplicas() const { DARABONBA_PTR_GET_DEFAULT(readonlyReplicas_, "") };
        inline DBInstance& setReadonlyReplicas(string readonlyReplicas) { DARABONBA_PTR_SET_VALUE(readonlyReplicas_, readonlyReplicas) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // replacateId Field Functions 
        bool hasReplacateId() const { return this->replacateId_ != nullptr;};
        void deleteReplacateId() { this->replacateId_ = nullptr;};
        inline string getReplacateId() const { DARABONBA_PTR_GET_DEFAULT(replacateId_, "") };
        inline DBInstance& setReplacateId(string replacateId) { DARABONBA_PTR_SET_VALUE(replacateId_, replacateId) };


        // replicaSetName Field Functions 
        bool hasReplicaSetName() const { return this->replicaSetName_ != nullptr;};
        void deleteReplicaSetName() { this->replicaSetName_ = nullptr;};
        inline string getReplicaSetName() const { DARABONBA_PTR_GET_DEFAULT(replicaSetName_, "") };
        inline DBInstance& setReplicaSetName(string replicaSetName) { DARABONBA_PTR_SET_VALUE(replicaSetName_, replicaSetName) };


        // replicaSets Field Functions 
        bool hasReplicaSets() const { return this->replicaSets_ != nullptr;};
        void deleteReplicaSets() { this->replicaSets_ = nullptr;};
        inline const DBInstance::ReplicaSets & getReplicaSets() const { DARABONBA_PTR_GET_CONST(replicaSets_, DBInstance::ReplicaSets) };
        inline DBInstance::ReplicaSets getReplicaSets() { DARABONBA_PTR_GET(replicaSets_, DBInstance::ReplicaSets) };
        inline DBInstance& setReplicaSets(const DBInstance::ReplicaSets & replicaSets) { DARABONBA_PTR_SET_VALUE(replicaSets_, replicaSets) };
        inline DBInstance& setReplicaSets(DBInstance::ReplicaSets && replicaSets) { DARABONBA_PTR_SET_RVALUE(replicaSets_, replicaSets) };


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


        // searchNodeClass Field Functions 
        bool hasSearchNodeClass() const { return this->searchNodeClass_ != nullptr;};
        void deleteSearchNodeClass() { this->searchNodeClass_ = nullptr;};
        inline string getSearchNodeClass() const { DARABONBA_PTR_GET_DEFAULT(searchNodeClass_, "") };
        inline DBInstance& setSearchNodeClass(string searchNodeClass) { DARABONBA_PTR_SET_VALUE(searchNodeClass_, searchNodeClass) };


        // searchNodeCount Field Functions 
        bool hasSearchNodeCount() const { return this->searchNodeCount_ != nullptr;};
        void deleteSearchNodeCount() { this->searchNodeCount_ = nullptr;};
        inline int32_t getSearchNodeCount() const { DARABONBA_PTR_GET_DEFAULT(searchNodeCount_, 0) };
        inline DBInstance& setSearchNodeCount(int32_t searchNodeCount) { DARABONBA_PTR_SET_VALUE(searchNodeCount_, searchNodeCount) };


        // searchNodeStorage Field Functions 
        bool hasSearchNodeStorage() const { return this->searchNodeStorage_ != nullptr;};
        void deleteSearchNodeStorage() { this->searchNodeStorage_ = nullptr;};
        inline int32_t getSearchNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(searchNodeStorage_, 0) };
        inline DBInstance& setSearchNodeStorage(int32_t searchNodeStorage) { DARABONBA_PTR_SET_VALUE(searchNodeStorage_, searchNodeStorage) };


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


        // storageEngine Field Functions 
        bool hasStorageEngine() const { return this->storageEngine_ != nullptr;};
        void deleteStorageEngine() { this->storageEngine_ = nullptr;};
        inline string getStorageEngine() const { DARABONBA_PTR_GET_DEFAULT(storageEngine_, "") };
        inline DBInstance& setStorageEngine(string storageEngine) { DARABONBA_PTR_SET_VALUE(storageEngine_, storageEngine) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline DBInstance& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // syncPercent Field Functions 
        bool hasSyncPercent() const { return this->syncPercent_ != nullptr;};
        void deleteSyncPercent() { this->syncPercent_ = nullptr;};
        inline string getSyncPercent() const { DARABONBA_PTR_GET_DEFAULT(syncPercent_, "") };
        inline DBInstance& setSyncPercent(string syncPercent) { DARABONBA_PTR_SET_VALUE(syncPercent_, syncPercent) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DBInstance::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DBInstance::Tags) };
        inline DBInstance::Tags getTags() { DARABONBA_PTR_GET(tags_, DBInstance::Tags) };
        inline DBInstance& setTags(const DBInstance::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DBInstance& setTags(DBInstance::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // useClusterBackup Field Functions 
        bool hasUseClusterBackup() const { return this->useClusterBackup_ != nullptr;};
        void deleteUseClusterBackup() { this->useClusterBackup_ = nullptr;};
        inline bool getUseClusterBackup() const { DARABONBA_PTR_GET_DEFAULT(useClusterBackup_, false) };
        inline DBInstance& setUseClusterBackup(bool useClusterBackup) { DARABONBA_PTR_SET_VALUE(useClusterBackup_, useClusterBackup) };


        // VPCCloudInstanceIds Field Functions 
        bool hasVPCCloudInstanceIds() const { return this->VPCCloudInstanceIds_ != nullptr;};
        void deleteVPCCloudInstanceIds() { this->VPCCloudInstanceIds_ = nullptr;};
        inline string getVPCCloudInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(VPCCloudInstanceIds_, "") };
        inline DBInstance& setVPCCloudInstanceIds(string VPCCloudInstanceIds) { DARABONBA_PTR_SET_VALUE(VPCCloudInstanceIds_, VPCCloudInstanceIds) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline DBInstance& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


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
        // Indicates whether performance burst is enabled for the ESSD AutoPL disk.
        shared_ptr<bool> burstingEnabled_ {};
        // The read and write throughput consumed by the instance.
        shared_ptr<string> capacityUnit_ {};
        // The billing method of the instance. Valid values:
        // 
        // *   **PrePaid**: subscription
        // *   **PostPaid**: pay-as-you-go
        shared_ptr<string> chargeType_ {};
        // The details of the ConfigServer node.
        // 
        // >  This parameter is returned if the instance is a sharded cluster instance.
        shared_ptr<DBInstance::ConfigserverList> configserverList_ {};
        // The time when the instance was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The minor version of the current database in the instance.
        shared_ptr<string> currentKernelVersion_ {};
        // The instance type of the instance.
        shared_ptr<string> DBInstanceClass_ {};
        // The name of the instance.
        shared_ptr<string> DBInstanceDescription_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The status of the orders generated for the instance. Valid values:
        // 
        // *   **all_completed**: All orders are being produced or complete.
        // *   **order_unpaid**: The instance has unpaid orders.
        // *   **order_wait_for_produce**: Orders are being delivered for production.
        // 
        // >  The order production process includes the following steps: place an order, pay for an order, deliver an order for production, produce an order, and complete the production.
        // 
        // *   If an order is in the **order_wait_for_produce** state for a long time, an error occurs when the order is being delivered for production. The system will automatically retry.
        // *   The instance status changes only when the order is in the producing and complete state, such as changing configurations and running.
        shared_ptr<string> DBInstanceOrderStatus_ {};
        // Indicates whether release protection is enabled for the instance. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> DBInstanceReleaseProtection_ {};
        // The status of the instance. For more information, see [Instance states](https://help.aliyun.com/document_detail/63870.html).
        shared_ptr<string> DBInstanceStatus_ {};
        // The storage capacity of the instance.
        shared_ptr<int32_t> DBInstanceStorage_ {};
        // The architecture of the instance. Valid values:
        // 
        // *   **replicate**: replica set instance
        // *   **sharding**: sharded cluster instance
        shared_ptr<string> DBInstanceType_ {};
        // The time when the instance data was destroyed. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> destroyTime_ {};
        shared_ptr<string> disasterRecoveryInfo_ {};
        // Indicates whether disk encryption is enabled.
        shared_ptr<bool> encrypted_ {};
        // The Key Management Service (KMS) key used for disk encryption.
        shared_ptr<string> encryptionKey_ {};
        // The database engine of the instance.
        shared_ptr<string> engine_ {};
        // The database engine version of the instance.
        // 
        // *   **6.0**
        // *   **5.0**
        // *   **4.4**
        // *   **4.2**
        // *   **4.0**
        shared_ptr<string> engineVersion_ {};
        // The time when the subscription instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
        // 
        // >  This parameter is returned if the instance is a subscription instance.
        shared_ptr<string> expireTime_ {};
        // The ID of the secondary zone 2 of the instance. Valid values:
        // 
        // *   **cn-hangzhou-g**: Hangzhou Zone G
        // *   **cn-hangzhou-h**: Hangzhou Zone H
        // *   **cn-hangzhou-i**: Hangzhou Zone I
        // *   **cn-hongkong-b**: Hongkong Zone B
        // *   **cn-hongkong-c**: Hongkong Zone C
        // *   **cn-hongkong-d**: Hongkong Zone D
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
        // > 
        // 
        // *   This parameter is returned if the instance is a replica set or sharded cluster instance that runs MongoDB 4.4 or 5.0 and uses multi-zone deployment.
        // 
        // *   This parameter is returned only if you use the China site (aliyun.com).
        shared_ptr<string> hiddenZoneId_ {};
        // The kind code of the instance. Valid values:
        // 
        // *   **0**: physical machine
        // *   **1**: Elastic Compute Service (ECS) instance
        // *   **2**: Docker cluster
        // *   **18**: Kubernetes cluster
        shared_ptr<string> kindCode_ {};
        // The date when the last downgrade operation was performed on the instance.
        shared_ptr<string> lastDowngradeTime_ {};
        // The lock status of the instance. Valid values:
        // 
        // *   **Unlock**: The instance is not locked.
        // *   **ManualLock**: The instance is manually locked.
        // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
        // *   **LockByRestoration**: The instance is automatically locked before the instance is rolled back.
        // *   **LockByDiskQuota**: The instance is automatically locked after the storage space is exhausted.
        // *   **Released**: The instance is released.
        shared_ptr<string> lockMode_ {};
        // The end time of the maintenance window. The time follows the ISO 8601 standard in the *HH:mm*Z format. The time is displayed in UTC.
        shared_ptr<string> maintainEndTime_ {};
        // The start time of the maintenance window. The time follows the ISO 8601 standard in the *HH:mm*Z format. The time is displayed in UTC.
        shared_ptr<string> maintainStartTime_ {};
        // The maximum number of connections to the instance.
        shared_ptr<int32_t> maxConnections_ {};
        // The maximum IOPS of the instance.
        shared_ptr<int32_t> maxIOPS_ {};
        // The maximum MBPS of the instance.
        shared_ptr<int32_t> maxMBPS_ {};
        // The details of the mongos node.
        // 
        // >  This parameter is returned if the instance is a sharded cluster instance.
        shared_ptr<DBInstance::MongosList> mongosList_ {};
        // The network type of the instance. Valid values:
        // 
        // *   **Classic**: classic network
        // *   **VPC**: VPC
        shared_ptr<string> networkType_ {};
        // The access protocol type of the instance. Valid values:
        // 
        // *   **mongodb**
        // *   **dynamodb**
        // 
        // >  This parameter is returned if the instance is a sharded cluster instance.
        shared_ptr<string> protocolType_ {};
        // The provisioned performance of the ESSD AutoPL disk.
        shared_ptr<int64_t> provisionedIops_ {};
        // The number of read-only nodes in the instance.
        shared_ptr<string> readonlyReplicas_ {};
        // The region ID of the instance.
        shared_ptr<string> regionId_ {};
        // The logical ID of the replica set instance.
        // 
        // >  ApsaraDB for MongoDB does not support new instances of this type. This parameter applies only to previous-version replica set instances.
        shared_ptr<string> replacateId_ {};
        // The name of the replica set instance.
        // 
        // >  This parameter is returned if the instance is a replica set instance.
        shared_ptr<string> replicaSetName_ {};
        // The information of the replica set instance.
        // 
        // >  This parameter is returned if the instance is a replica set instance.
        shared_ptr<DBInstance::ReplicaSets> replicaSets_ {};
        // The number of nodes in the instance.
        // 
        // >  This parameter is returned if the instance is a replica set instance.
        shared_ptr<string> replicationFactor_ {};
        // The ID of the resource group to which the instance belongs.
        // 
        // >  This parameter is returned only if you use the China site (aliyun.com).
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> searchNodeClass_ {};
        shared_ptr<int32_t> searchNodeCount_ {};
        shared_ptr<int32_t> searchNodeStorage_ {};
        // The ID of the secondary zone 1 of the instance. Valid values:
        // 
        // *   **cn-hangzhou-g**: Hangzhou Zone G
        // *   **cn-hangzhou-h**: Hangzhou Zone H
        // *   **cn-hangzhou-i**: Hangzhou Zone I
        // *   **cn-hongkong-b**: Hongkong Zone B
        // *   **cn-hongkong-c**: Hongkong Zone C
        // *   **cn-hongkong-d**: Hongkong Zone D
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
        // > 
        // 
        // *   This parameter is returned if the instance is a replica set or sharded cluster instance that runs MongoDB 4.4 or 5.0 and uses multi-zone deployment.
        // 
        // *   This parameter is returned only if you use the China site (aliyun.com).
        shared_ptr<string> secondaryZoneId_ {};
        // The details of the shard node.
        // 
        // >  This parameter is returned if the instance is a sharded cluster instance.
        shared_ptr<DBInstance::ShardList> shardList_ {};
        // The storage engine of the instance.
        shared_ptr<string> storageEngine_ {};
        // The storage type of the instance. Valid values:
        // 
        // **cloud_essd1**: ESSD PL1 **cloud_essd2**: ESSD PL2 **cloud_essd3**: ESSD PL3 **local_ssd**: local SSD **cloud_essd_dbfs_s**: DBFS disk
        shared_ptr<string> storageType_ {};
        // The progress of data synchronization in percentage. When you are changing the configurations of the instance, you must synchronize the data of the instance. You can obtain the data synchronization progress based on the value returned for this parameter.
        shared_ptr<string> syncPercent_ {};
        // The details of the instance tags.
        shared_ptr<DBInstance::Tags> tags_ {};
        // Indicates whether the cluster backup mode is enabled. Valid values:
        // 
        // *   **true**: The cluster backup mode is enabled.
        // *   **false**: The cluster backup mode is disabled.
        shared_ptr<bool> useClusterBackup_ {};
        // The instance ID.
        // 
        // >  This parameter is returned if the network type of the instance is VPC.
        shared_ptr<string> VPCCloudInstanceIds_ {};
        // The VPC ID of the instance.
        // 
        // >  This parameter is returned if the network type of the instance is VPC.
        shared_ptr<string> VPCId_ {};
        // The vSwitch ID of the instance.
        // 
        // >  This parameter is returned if the network type of the instance is VPC.
        shared_ptr<string> vSwitchId_ {};
        // Indicates whether password-free access within the VPC is enabled. Valid values:
        // 
        // *   **Open**: Password-free access within the VPC is enabled.
        // *   **Close**: Password-free access within the VPC is disabled, and you must use a password for access.
        // *   **NotSupport**: Password-free access within the VPC is not supported.
        shared_ptr<string> vpcAuthMode_ {};
        // The ID of the zone in which the instance resides.
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
        && this->requestId_ == nullptr; };
    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const DescribeDBInstanceAttributeResponseBody::DBInstances & getDBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, DescribeDBInstanceAttributeResponseBody::DBInstances) };
    inline DescribeDBInstanceAttributeResponseBody::DBInstances getDBInstances() { DARABONBA_PTR_GET(DBInstances_, DescribeDBInstanceAttributeResponseBody::DBInstances) };
    inline DescribeDBInstanceAttributeResponseBody& setDBInstances(const DescribeDBInstanceAttributeResponseBody::DBInstances & dBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, dBInstances) };
    inline DescribeDBInstanceAttributeResponseBody& setDBInstances(DescribeDBInstanceAttributeResponseBody::DBInstances && dBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, dBInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance details.
    shared_ptr<DescribeDBInstanceAttributeResponseBody::DBInstances> DBInstances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
