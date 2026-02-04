// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceAttributeResponseBody() = default ;
    DescribeInstanceAttributeResponseBody(const DescribeInstanceAttributeResponseBody &) = default ;
    DescribeInstanceAttributeResponseBody(DescribeInstanceAttributeResponseBody &&) = default ;
    DescribeInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttributeResponseBody() = default ;
    DescribeInstanceAttributeResponseBody& operator=(const DescribeInstanceAttributeResponseBody &) = default ;
    DescribeInstanceAttributeResponseBody& operator=(DescribeInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceAttribute, DBInstanceAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceAttribute, DBInstanceAttribute_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstanceAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
          DARABONBA_PTR_TO_JSON(AuditLogRetention, auditLogRetention_);
          DARABONBA_PTR_TO_JSON(AutoSecondaryZone, autoSecondaryZone_);
          DARABONBA_PTR_TO_JSON(AvailabilityValue, availabilityValue_);
          DARABONBA_PTR_TO_JSON(BackupLogStartTime, backupLogStartTime_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(CloudType, cloudType_);
          DARABONBA_PTR_TO_JSON(ComputingType, computingType_);
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(ConnectionDomain, connectionDomain_);
          DARABONBA_PTR_TO_JSON(Connections, connections_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(GlobalInstanceId, globalInstanceId_);
          DARABONBA_PTR_TO_JSON(HasRenewChangeOrder, hasRenewChangeOrder_);
          DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceReleaseProtection, instanceReleaseProtection_);
          DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(IsOrderCompleted, isOrderCompleted_);
          DARABONBA_PTR_TO_JSON(IsRds, isRds_);
          DARABONBA_PTR_TO_JSON(IsSupportTDE, isSupportTDE_);
          DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
          DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(PackageType, packageType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_TO_JSON(QPS, QPS_);
          DARABONBA_PTR_TO_JSON(ReadOnlyCount, readOnlyCount_);
          DARABONBA_PTR_TO_JSON(RealInstanceClass, realInstanceClass_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReplicaCount, replicaCount_);
          DARABONBA_PTR_TO_JSON(ReplicaId, replicaId_);
          DARABONBA_PTR_TO_JSON(ReplicationMode, replicationMode_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
          DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
          DARABONBA_PTR_TO_JSON(ShardCount, shardCount_);
          DARABONBA_PTR_TO_JSON(SlaveReadOnlyCount, slaveReadOnlyCount_);
          DARABONBA_PTR_TO_JSON(SlaveReplicaCount, slaveReplicaCount_);
          DARABONBA_PTR_TO_JSON(Storage, storage_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcAuthMode, vpcAuthMode_);
          DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
          DARABONBA_PTR_FROM_JSON(AuditLogRetention, auditLogRetention_);
          DARABONBA_PTR_FROM_JSON(AutoSecondaryZone, autoSecondaryZone_);
          DARABONBA_PTR_FROM_JSON(AvailabilityValue, availabilityValue_);
          DARABONBA_PTR_FROM_JSON(BackupLogStartTime, backupLogStartTime_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(CloudType, cloudType_);
          DARABONBA_PTR_FROM_JSON(ComputingType, computingType_);
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(ConnectionDomain, connectionDomain_);
          DARABONBA_PTR_FROM_JSON(Connections, connections_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(GlobalInstanceId, globalInstanceId_);
          DARABONBA_PTR_FROM_JSON(HasRenewChangeOrder, hasRenewChangeOrder_);
          DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceReleaseProtection, instanceReleaseProtection_);
          DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(IsOrderCompleted, isOrderCompleted_);
          DARABONBA_PTR_FROM_JSON(IsRds, isRds_);
          DARABONBA_PTR_FROM_JSON(IsSupportTDE, isSupportTDE_);
          DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
          DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_FROM_JSON(QPS, QPS_);
          DARABONBA_PTR_FROM_JSON(ReadOnlyCount, readOnlyCount_);
          DARABONBA_PTR_FROM_JSON(RealInstanceClass, realInstanceClass_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReplicaCount, replicaCount_);
          DARABONBA_PTR_FROM_JSON(ReplicaId, replicaId_);
          DARABONBA_PTR_FROM_JSON(ReplicationMode, replicationMode_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
          DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
          DARABONBA_PTR_FROM_JSON(ShardCount, shardCount_);
          DARABONBA_PTR_FROM_JSON(SlaveReadOnlyCount, slaveReadOnlyCount_);
          DARABONBA_PTR_FROM_JSON(SlaveReplicaCount, slaveReplicaCount_);
          DARABONBA_PTR_FROM_JSON(Storage, storage_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcAuthMode, vpcAuthMode_);
          DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
        };
        DBInstanceAttribute() = default ;
        DBInstanceAttribute(const DBInstanceAttribute &) = default ;
        DBInstanceAttribute(DBInstanceAttribute &&) = default ;
        DBInstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceAttribute() = default ;
        DBInstanceAttribute& operator=(const DBInstanceAttribute &) = default ;
        DBInstanceAttribute& operator=(DBInstanceAttribute &&) = default ;
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

        virtual bool empty() const override { return this->architectureType_ == nullptr
        && this->auditLogRetention_ == nullptr && this->autoSecondaryZone_ == nullptr && this->availabilityValue_ == nullptr && this->backupLogStartTime_ == nullptr && this->bandwidth_ == nullptr
        && this->capacity_ == nullptr && this->chargeType_ == nullptr && this->cloudType_ == nullptr && this->computingType_ == nullptr && this->config_ == nullptr
        && this->connectionDomain_ == nullptr && this->connections_ == nullptr && this->createTime_ == nullptr && this->endTime_ == nullptr && this->engine_ == nullptr
        && this->engineVersion_ == nullptr && this->globalInstanceId_ == nullptr && this->hasRenewChangeOrder_ == nullptr && this->instanceClass_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->instanceReleaseProtection_ == nullptr && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr && this->isOrderCompleted_ == nullptr
        && this->isRds_ == nullptr && this->isSupportTDE_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->networkType_ == nullptr
        && this->nodeType_ == nullptr && this->packageType_ == nullptr && this->port_ == nullptr && this->privateIp_ == nullptr && this->QPS_ == nullptr
        && this->readOnlyCount_ == nullptr && this->realInstanceClass_ == nullptr && this->regionId_ == nullptr && this->replicaCount_ == nullptr && this->replicaId_ == nullptr
        && this->replicationMode_ == nullptr && this->resourceGroupId_ == nullptr && this->secondaryZoneId_ == nullptr && this->securityIPList_ == nullptr && this->shardCount_ == nullptr
        && this->slaveReadOnlyCount_ == nullptr && this->slaveReplicaCount_ == nullptr && this->storage_ == nullptr && this->storageType_ == nullptr && this->tags_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcAuthMode_ == nullptr && this->vpcCloudInstanceId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr
        && this->zoneType_ == nullptr; };
        // architectureType Field Functions 
        bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
        void deleteArchitectureType() { this->architectureType_ = nullptr;};
        inline string getArchitectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
        inline DBInstanceAttribute& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


        // auditLogRetention Field Functions 
        bool hasAuditLogRetention() const { return this->auditLogRetention_ != nullptr;};
        void deleteAuditLogRetention() { this->auditLogRetention_ = nullptr;};
        inline string getAuditLogRetention() const { DARABONBA_PTR_GET_DEFAULT(auditLogRetention_, "") };
        inline DBInstanceAttribute& setAuditLogRetention(string auditLogRetention) { DARABONBA_PTR_SET_VALUE(auditLogRetention_, auditLogRetention) };


        // autoSecondaryZone Field Functions 
        bool hasAutoSecondaryZone() const { return this->autoSecondaryZone_ != nullptr;};
        void deleteAutoSecondaryZone() { this->autoSecondaryZone_ = nullptr;};
        inline bool getAutoSecondaryZone() const { DARABONBA_PTR_GET_DEFAULT(autoSecondaryZone_, false) };
        inline DBInstanceAttribute& setAutoSecondaryZone(bool autoSecondaryZone) { DARABONBA_PTR_SET_VALUE(autoSecondaryZone_, autoSecondaryZone) };


        // availabilityValue Field Functions 
        bool hasAvailabilityValue() const { return this->availabilityValue_ != nullptr;};
        void deleteAvailabilityValue() { this->availabilityValue_ = nullptr;};
        inline string getAvailabilityValue() const { DARABONBA_PTR_GET_DEFAULT(availabilityValue_, "") };
        inline DBInstanceAttribute& setAvailabilityValue(string availabilityValue) { DARABONBA_PTR_SET_VALUE(availabilityValue_, availabilityValue) };


        // backupLogStartTime Field Functions 
        bool hasBackupLogStartTime() const { return this->backupLogStartTime_ != nullptr;};
        void deleteBackupLogStartTime() { this->backupLogStartTime_ = nullptr;};
        inline string getBackupLogStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupLogStartTime_, "") };
        inline DBInstanceAttribute& setBackupLogStartTime(string backupLogStartTime) { DARABONBA_PTR_SET_VALUE(backupLogStartTime_, backupLogStartTime) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
        inline DBInstanceAttribute& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // capacity Field Functions 
        bool hasCapacity() const { return this->capacity_ != nullptr;};
        void deleteCapacity() { this->capacity_ = nullptr;};
        inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
        inline DBInstanceAttribute& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline DBInstanceAttribute& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // cloudType Field Functions 
        bool hasCloudType() const { return this->cloudType_ != nullptr;};
        void deleteCloudType() { this->cloudType_ = nullptr;};
        inline string getCloudType() const { DARABONBA_PTR_GET_DEFAULT(cloudType_, "") };
        inline DBInstanceAttribute& setCloudType(string cloudType) { DARABONBA_PTR_SET_VALUE(cloudType_, cloudType) };


        // computingType Field Functions 
        bool hasComputingType() const { return this->computingType_ != nullptr;};
        void deleteComputingType() { this->computingType_ = nullptr;};
        inline string getComputingType() const { DARABONBA_PTR_GET_DEFAULT(computingType_, "") };
        inline DBInstanceAttribute& setComputingType(string computingType) { DARABONBA_PTR_SET_VALUE(computingType_, computingType) };


        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
        inline DBInstanceAttribute& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


        // connectionDomain Field Functions 
        bool hasConnectionDomain() const { return this->connectionDomain_ != nullptr;};
        void deleteConnectionDomain() { this->connectionDomain_ = nullptr;};
        inline string getConnectionDomain() const { DARABONBA_PTR_GET_DEFAULT(connectionDomain_, "") };
        inline DBInstanceAttribute& setConnectionDomain(string connectionDomain) { DARABONBA_PTR_SET_VALUE(connectionDomain_, connectionDomain) };


        // connections Field Functions 
        bool hasConnections() const { return this->connections_ != nullptr;};
        void deleteConnections() { this->connections_ = nullptr;};
        inline int64_t getConnections() const { DARABONBA_PTR_GET_DEFAULT(connections_, 0L) };
        inline DBInstanceAttribute& setConnections(int64_t connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DBInstanceAttribute& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline DBInstanceAttribute& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline DBInstanceAttribute& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline DBInstanceAttribute& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // globalInstanceId Field Functions 
        bool hasGlobalInstanceId() const { return this->globalInstanceId_ != nullptr;};
        void deleteGlobalInstanceId() { this->globalInstanceId_ = nullptr;};
        inline string getGlobalInstanceId() const { DARABONBA_PTR_GET_DEFAULT(globalInstanceId_, "") };
        inline DBInstanceAttribute& setGlobalInstanceId(string globalInstanceId) { DARABONBA_PTR_SET_VALUE(globalInstanceId_, globalInstanceId) };


        // hasRenewChangeOrder Field Functions 
        bool hasHasRenewChangeOrder() const { return this->hasRenewChangeOrder_ != nullptr;};
        void deleteHasRenewChangeOrder() { this->hasRenewChangeOrder_ = nullptr;};
        inline string getHasRenewChangeOrder() const { DARABONBA_PTR_GET_DEFAULT(hasRenewChangeOrder_, "") };
        inline DBInstanceAttribute& setHasRenewChangeOrder(string hasRenewChangeOrder) { DARABONBA_PTR_SET_VALUE(hasRenewChangeOrder_, hasRenewChangeOrder) };


        // instanceClass Field Functions 
        bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
        void deleteInstanceClass() { this->instanceClass_ = nullptr;};
        inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
        inline DBInstanceAttribute& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline DBInstanceAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline DBInstanceAttribute& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceReleaseProtection Field Functions 
        bool hasInstanceReleaseProtection() const { return this->instanceReleaseProtection_ != nullptr;};
        void deleteInstanceReleaseProtection() { this->instanceReleaseProtection_ = nullptr;};
        inline bool getInstanceReleaseProtection() const { DARABONBA_PTR_GET_DEFAULT(instanceReleaseProtection_, false) };
        inline DBInstanceAttribute& setInstanceReleaseProtection(bool instanceReleaseProtection) { DARABONBA_PTR_SET_VALUE(instanceReleaseProtection_, instanceReleaseProtection) };


        // instanceStatus Field Functions 
        bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
        void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
        inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
        inline DBInstanceAttribute& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline DBInstanceAttribute& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // isOrderCompleted Field Functions 
        bool hasIsOrderCompleted() const { return this->isOrderCompleted_ != nullptr;};
        void deleteIsOrderCompleted() { this->isOrderCompleted_ = nullptr;};
        inline bool getIsOrderCompleted() const { DARABONBA_PTR_GET_DEFAULT(isOrderCompleted_, false) };
        inline DBInstanceAttribute& setIsOrderCompleted(bool isOrderCompleted) { DARABONBA_PTR_SET_VALUE(isOrderCompleted_, isOrderCompleted) };


        // isRds Field Functions 
        bool hasIsRds() const { return this->isRds_ != nullptr;};
        void deleteIsRds() { this->isRds_ = nullptr;};
        inline bool getIsRds() const { DARABONBA_PTR_GET_DEFAULT(isRds_, false) };
        inline DBInstanceAttribute& setIsRds(bool isRds) { DARABONBA_PTR_SET_VALUE(isRds_, isRds) };


        // isSupportTDE Field Functions 
        bool hasIsSupportTDE() const { return this->isSupportTDE_ != nullptr;};
        void deleteIsSupportTDE() { this->isSupportTDE_ = nullptr;};
        inline bool getIsSupportTDE() const { DARABONBA_PTR_GET_DEFAULT(isSupportTDE_, false) };
        inline DBInstanceAttribute& setIsSupportTDE(bool isSupportTDE) { DARABONBA_PTR_SET_VALUE(isSupportTDE_, isSupportTDE) };


        // maintainEndTime Field Functions 
        bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
        void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
        inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
        inline DBInstanceAttribute& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


        // maintainStartTime Field Functions 
        bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
        void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
        inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
        inline DBInstanceAttribute& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline DBInstanceAttribute& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline DBInstanceAttribute& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // packageType Field Functions 
        bool hasPackageType() const { return this->packageType_ != nullptr;};
        void deletePackageType() { this->packageType_ = nullptr;};
        inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
        inline DBInstanceAttribute& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
        inline DBInstanceAttribute& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // privateIp Field Functions 
        bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
        void deletePrivateIp() { this->privateIp_ = nullptr;};
        inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
        inline DBInstanceAttribute& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


        // QPS Field Functions 
        bool hasQPS() const { return this->QPS_ != nullptr;};
        void deleteQPS() { this->QPS_ = nullptr;};
        inline int64_t getQPS() const { DARABONBA_PTR_GET_DEFAULT(QPS_, 0L) };
        inline DBInstanceAttribute& setQPS(int64_t QPS) { DARABONBA_PTR_SET_VALUE(QPS_, QPS) };


        // readOnlyCount Field Functions 
        bool hasReadOnlyCount() const { return this->readOnlyCount_ != nullptr;};
        void deleteReadOnlyCount() { this->readOnlyCount_ = nullptr;};
        inline int32_t getReadOnlyCount() const { DARABONBA_PTR_GET_DEFAULT(readOnlyCount_, 0) };
        inline DBInstanceAttribute& setReadOnlyCount(int32_t readOnlyCount) { DARABONBA_PTR_SET_VALUE(readOnlyCount_, readOnlyCount) };


        // realInstanceClass Field Functions 
        bool hasRealInstanceClass() const { return this->realInstanceClass_ != nullptr;};
        void deleteRealInstanceClass() { this->realInstanceClass_ = nullptr;};
        inline string getRealInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(realInstanceClass_, "") };
        inline DBInstanceAttribute& setRealInstanceClass(string realInstanceClass) { DARABONBA_PTR_SET_VALUE(realInstanceClass_, realInstanceClass) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBInstanceAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // replicaCount Field Functions 
        bool hasReplicaCount() const { return this->replicaCount_ != nullptr;};
        void deleteReplicaCount() { this->replicaCount_ = nullptr;};
        inline int32_t getReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(replicaCount_, 0) };
        inline DBInstanceAttribute& setReplicaCount(int32_t replicaCount) { DARABONBA_PTR_SET_VALUE(replicaCount_, replicaCount) };


        // replicaId Field Functions 
        bool hasReplicaId() const { return this->replicaId_ != nullptr;};
        void deleteReplicaId() { this->replicaId_ = nullptr;};
        inline string getReplicaId() const { DARABONBA_PTR_GET_DEFAULT(replicaId_, "") };
        inline DBInstanceAttribute& setReplicaId(string replicaId) { DARABONBA_PTR_SET_VALUE(replicaId_, replicaId) };


        // replicationMode Field Functions 
        bool hasReplicationMode() const { return this->replicationMode_ != nullptr;};
        void deleteReplicationMode() { this->replicationMode_ = nullptr;};
        inline string getReplicationMode() const { DARABONBA_PTR_GET_DEFAULT(replicationMode_, "") };
        inline DBInstanceAttribute& setReplicationMode(string replicationMode) { DARABONBA_PTR_SET_VALUE(replicationMode_, replicationMode) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DBInstanceAttribute& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // secondaryZoneId Field Functions 
        bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
        void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
        inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
        inline DBInstanceAttribute& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


        // securityIPList Field Functions 
        bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
        void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
        inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
        inline DBInstanceAttribute& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


        // shardCount Field Functions 
        bool hasShardCount() const { return this->shardCount_ != nullptr;};
        void deleteShardCount() { this->shardCount_ = nullptr;};
        inline int32_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0) };
        inline DBInstanceAttribute& setShardCount(int32_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


        // slaveReadOnlyCount Field Functions 
        bool hasSlaveReadOnlyCount() const { return this->slaveReadOnlyCount_ != nullptr;};
        void deleteSlaveReadOnlyCount() { this->slaveReadOnlyCount_ = nullptr;};
        inline int64_t getSlaveReadOnlyCount() const { DARABONBA_PTR_GET_DEFAULT(slaveReadOnlyCount_, 0L) };
        inline DBInstanceAttribute& setSlaveReadOnlyCount(int64_t slaveReadOnlyCount) { DARABONBA_PTR_SET_VALUE(slaveReadOnlyCount_, slaveReadOnlyCount) };


        // slaveReplicaCount Field Functions 
        bool hasSlaveReplicaCount() const { return this->slaveReplicaCount_ != nullptr;};
        void deleteSlaveReplicaCount() { this->slaveReplicaCount_ = nullptr;};
        inline int32_t getSlaveReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(slaveReplicaCount_, 0) };
        inline DBInstanceAttribute& setSlaveReplicaCount(int32_t slaveReplicaCount) { DARABONBA_PTR_SET_VALUE(slaveReplicaCount_, slaveReplicaCount) };


        // storage Field Functions 
        bool hasStorage() const { return this->storage_ != nullptr;};
        void deleteStorage() { this->storage_ = nullptr;};
        inline string getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, "") };
        inline DBInstanceAttribute& setStorage(string storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline DBInstanceAttribute& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DBInstanceAttribute::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DBInstanceAttribute::Tags) };
        inline DBInstanceAttribute::Tags getTags() { DARABONBA_PTR_GET(tags_, DBInstanceAttribute::Tags) };
        inline DBInstanceAttribute& setTags(const DBInstanceAttribute::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DBInstanceAttribute& setTags(DBInstanceAttribute::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBInstanceAttribute& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcAuthMode Field Functions 
        bool hasVpcAuthMode() const { return this->vpcAuthMode_ != nullptr;};
        void deleteVpcAuthMode() { this->vpcAuthMode_ = nullptr;};
        inline string getVpcAuthMode() const { DARABONBA_PTR_GET_DEFAULT(vpcAuthMode_, "") };
        inline DBInstanceAttribute& setVpcAuthMode(string vpcAuthMode) { DARABONBA_PTR_SET_VALUE(vpcAuthMode_, vpcAuthMode) };


        // vpcCloudInstanceId Field Functions 
        bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
        void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
        inline string getVpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
        inline DBInstanceAttribute& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline DBInstanceAttribute& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBInstanceAttribute& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        // zoneType Field Functions 
        bool hasZoneType() const { return this->zoneType_ != nullptr;};
        void deleteZoneType() { this->zoneType_ = nullptr;};
        inline string getZoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
        inline DBInstanceAttribute& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


      protected:
        // The architecture of the instance. Valid values:
        // 
        // *   **cluster**: cluster architecture
        // *   **standard**: standard architecture
        // *   **rwsplit**: read/write splitting architecture
        shared_ptr<string> architectureType_ {};
        // The retention period of audit logs. Unit: day. A value of 0 indicates that the audit log feature is disabled. For information about how to enable the feature, see [Enable the audit log feature](https://help.aliyun.com/document_detail/102015.html).
        shared_ptr<string> auditLogRetention_ {};
        // Indicates whether a secondary zone is automatically allocated.
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> autoSecondaryZone_ {};
        // The availability metric of the current month.
        shared_ptr<string> availabilityValue_ {};
        // The earliest point in time to which data can be restored. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        // 
        // > 
        // 
        // *   This parameter is returned only when the data flashback feature is enabled for the instance. For more information, see [Restore data to a point in time by using the data flashback feature](https://help.aliyun.com/document_detail/148479.html).
        // 
        // *   When you call the [RestoreInstance](https://help.aliyun.com/document_detail/473824.html) operation to implement data flashback, you can obtain the earliest point in time for data flashback from the return value of this parameter and set the **RestoreTime** parameter to this point in time.
        shared_ptr<string> backupLogStartTime_ {};
        // The bandwidth of the instance. Unit: Mbit/s.
        shared_ptr<int64_t> bandwidth_ {};
        // The storage capacity of the instance. Unit: MB.
        shared_ptr<int64_t> capacity_ {};
        // The billing method of the instance. Valid values:
        // 
        // *   **PrePaid**: subscription
        // *   **PostPaid**: pay-as-you-go
        shared_ptr<string> chargeType_ {};
        // This parameter is returned only when the instance is in a cloud box.
        shared_ptr<string> cloudType_ {};
        shared_ptr<string> computingType_ {};
        // The parameter configurations of the instance in the JSON format. For more information, see [Parameter descriptions](https://help.aliyun.com/document_detail/43885.html). You can use the [DescribeAuditLogConfig](https://help.aliyun.com/document_detail/473830.html) operation to query audit log configurations.
        shared_ptr<string> config_ {};
        // The internal endpoint of the instance.
        shared_ptr<string> connectionDomain_ {};
        // The maximum number of connections supported by the instance.
        shared_ptr<int64_t> connections_ {};
        // The time when the instance was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The time when the subscription expires. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> endTime_ {};
        // The database engine of the instance. The return value is **Redis**.
        shared_ptr<string> engine_ {};
        // The database engine version of the instance. Valid values: **2.8**, **4.0**, **5.0**, **6.0**, and **7.0**.
        shared_ptr<string> engineVersion_ {};
        // The ID of the distributed instance to which the instance belongs.
        // 
        // >  This parameter is returned only when the Tair (Redis OSS-compatible) instance is a child instance of a distributed instance.
        shared_ptr<string> globalInstanceId_ {};
        // Indicates whether your Alibaba Cloud account has pending orders for renewal and configuration change. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<string> hasRenewChangeOrder_ {};
        // The instance type. For more information, see [Instance types](https://help.aliyun.com/document_detail/107984.html).
        shared_ptr<string> instanceClass_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The name of the instance.
        shared_ptr<string> instanceName_ {};
        // Indicates whether the release protection feature is enabled for the instance. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> instanceReleaseProtection_ {};
        // The state of the instance. Valid values:
        // 
        // *   **Normal**: The instance is normal.
        // *   **Creating**: The instance is being created.
        // *   **Changing**: The configurations of the instance are being changed.
        // *   **Inactive**: The instance is disabled.
        // *   **Flushing**: The instance is being released.
        // *   **Released**: The instance is released.
        // *   **Transforming**: The billing method of the instance is being changed.
        // *   **Unavailable**: The instance is unavailable.
        // *   **Error**: The instance failed to be created.
        // *   **Migrating**: The instance is being migrated.
        // *   **BackupRecovering**: The instance is being restored from a backup.
        // *   **MinorVersionUpgrading**: The minor version of the instance is being updated.
        // *   **NetworkModifying**: The network type of the instance is being changed.
        // *   **SSLModifying**: The SSL configurations of the instance are being changed.
        // *   **MajorVersionUpgrading**: The major version of the instance is being upgraded. The instance remains accessible during the upgrade.
        // 
        // >  For more information about instance states, see [Instance states and impacts](https://help.aliyun.com/document_detail/200740.html).
        shared_ptr<string> instanceStatus_ {};
        // The database engine of the instance. Valid values:
        // 
        // *   **Tair**
        // *   **Redis**
        // *   **Memcache**
        shared_ptr<string> instanceType_ {};
        // Indicates whether the order for instance configuration change has reached the final state. Valid values:
        // 
        // *   **true**: The configuration change has been completed or has not been performed.
        // *   **false**: The configurations of the instance are being changed.
        shared_ptr<bool> isOrderCompleted_ {};
        // Indicates whether the instance is managed by ApsaraDB RDS. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> isRds_ {};
        // Indicates whether the transparent data encryption (TDE) feature is supported for the instance. Valid values:
        // 
        // *   **true**: This feature is supported only for DRAM-based classic instances.
        // *   **false**: This feature is not supported.
        shared_ptr<bool> isSupportTDE_ {};
        // The end time of the maintenance window. The time is in the *HH:mmZ* format. The time is displayed in UTC.
        shared_ptr<string> maintainEndTime_ {};
        // The start time of the maintenance window. The time is in the *HH:mmZ* format. The time is displayed in UTC.
        shared_ptr<string> maintainStartTime_ {};
        // The network type of the instance. Valid values:
        // 
        // *   **CLASSIC**
        // *   **VPC**
        shared_ptr<string> networkType_ {};
        // The node type. Valid values:
        // 
        // *   **double**: The instance contains a master node and a replica node.
        // *   **single**: The instance is a standalone instance.
        shared_ptr<string> nodeType_ {};
        // The plan type. Valid values:
        // 
        // *   **standard**: standard plan.
        // *   **customized**: custom plan. This plan type is phased out.
        shared_ptr<string> packageType_ {};
        // The service port of the instance.
        shared_ptr<int64_t> port_ {};
        // The private IP address of the instance.
        // 
        // >  This parameter is not returned when the instance is deployed in the classic network.
        shared_ptr<string> privateIp_ {};
        // The expected maximum queries per second (QPS).
        shared_ptr<int64_t> QPS_ {};
        // The number of read replicas. This parameter is available only for read/write splitting instances that use cloud disks.
        shared_ptr<int32_t> readOnlyCount_ {};
        // If the instance is a cluster instance that uses cloud disks, this parameter indicates the actual instance type of individual shards in the instance. The InstanceClass parameter indicates the virtual instance type.
        // 
        // >  To query fees for instances of the instance type, you can specify the instance type that is returned by this parameter in the [DescribePrice](https://help.aliyun.com/document_detail/473807.html) operation.
        shared_ptr<string> realInstanceClass_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The number of replica nodes in the primary zone.
        // 
        // >  The **ReplicaCount** and **SlaveReplicaCount** parameters are applicable only to cloud-native instances. If the instance is a cluster instance, the preceding parameters indicate the number of replica nodes **per node** in the primary and secondary zones of the instance.
        shared_ptr<int32_t> replicaCount_ {};
        // The ID of the replica node.
        shared_ptr<string> replicaId_ {};
        // The architecture of the replica node. Valid values:
        // 
        // *   **master-slave**: the standard master-replica architecture.
        // *   **cluster**: the cluster architecture, which includes the read/write splitting instances and cluster instances.
        shared_ptr<string> replicationMode_ {};
        // The ID of the resource group to which the instance belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the secondary zone.
        // 
        // >  This parameter is returned only if the instance has a secondary zone ID.
        shared_ptr<string> secondaryZoneId_ {};
        // The IP addresses in the whitelist.
        shared_ptr<string> securityIPList_ {};
        // The number of shards. This parameter is available only for instances that are purchased on the China site (aliyun.com).
        shared_ptr<int32_t> shardCount_ {};
        // The number of read replicas in the secondary zone. This parameter is returned only after read/write splitting is enabled for the instance across multiple zones.
        shared_ptr<int64_t> slaveReadOnlyCount_ {};
        // The number of replica nodes in the secondary zone.
        shared_ptr<int32_t> slaveReplicaCount_ {};
        // The storage capacity of the cloud disk.
        shared_ptr<string> storage_ {};
        // The storage type.
        shared_ptr<string> storageType_ {};
        // Details about the tags.
        shared_ptr<DBInstanceAttribute::Tags> tags_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
        // Indicates whether password authentication is enabled. Valid values:
        // 
        // *   **Open**: Password authentication is enabled.
        // *   **Close**: Password authentication is disabled and [password-free access](https://help.aliyun.com/document_detail/85168.html) is enabled.
        shared_ptr<string> vpcAuthMode_ {};
        // The ID of the instance in the VPC.
        shared_ptr<string> vpcCloudInstanceId_ {};
        // The ID of the virtual private cloud (VPC).
        shared_ptr<string> vpcId_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
        // The deployment type of the instance. Valid values:
        // 
        // *   **singlezone**: The instance is deployed in a single zone.
        // *   **doublezone**: The instance is deployed in two zones of the same region.
        shared_ptr<string> zoneType_ {};
      };

      virtual bool empty() const override { return this->DBInstanceAttribute_ == nullptr; };
      // DBInstanceAttribute Field Functions 
      bool hasDBInstanceAttribute() const { return this->DBInstanceAttribute_ != nullptr;};
      void deleteDBInstanceAttribute() { this->DBInstanceAttribute_ = nullptr;};
      inline const vector<Instances::DBInstanceAttribute> & getDBInstanceAttribute() const { DARABONBA_PTR_GET_CONST(DBInstanceAttribute_, vector<Instances::DBInstanceAttribute>) };
      inline vector<Instances::DBInstanceAttribute> getDBInstanceAttribute() { DARABONBA_PTR_GET(DBInstanceAttribute_, vector<Instances::DBInstanceAttribute>) };
      inline Instances& setDBInstanceAttribute(const vector<Instances::DBInstanceAttribute> & dBInstanceAttribute) { DARABONBA_PTR_SET_VALUE(DBInstanceAttribute_, dBInstanceAttribute) };
      inline Instances& setDBInstanceAttribute(vector<Instances::DBInstanceAttribute> && dBInstanceAttribute) { DARABONBA_PTR_SET_RVALUE(DBInstanceAttribute_, dBInstanceAttribute) };


    protected:
      shared_ptr<vector<Instances::DBInstanceAttribute>> DBInstanceAttribute_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeInstanceAttributeResponseBody::Instances) };
    inline DescribeInstanceAttributeResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeInstanceAttributeResponseBody::Instances) };
    inline DescribeInstanceAttributeResponseBody& setInstances(const DescribeInstanceAttributeResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstanceAttributeResponseBody& setInstances(DescribeInstanceAttributeResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the instances.
    shared_ptr<DescribeInstanceAttributeResponseBody::Instances> instances_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
