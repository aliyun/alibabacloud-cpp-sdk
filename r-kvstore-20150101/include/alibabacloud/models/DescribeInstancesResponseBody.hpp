// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
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
  class DescribeInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody(DescribeInstancesResponseBody &&) = default ;
    DescribeInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody& operator=(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody& operator=(DescribeInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(KVStoreInstance, KVStoreInstance_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(KVStoreInstance, KVStoreInstance_);
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
      class KVStoreInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KVStoreInstance& obj) { 
          DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(CloudType, cloudType_);
          DARABONBA_PTR_TO_JSON(ComputingType, computingType_);
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(ConnectionDomain, connectionDomain_);
          DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
          DARABONBA_PTR_TO_JSON(Connections, connections_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DestroyTime, destroyTime_);
          DARABONBA_PTR_TO_JSON(EditionType, editionType_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(GlobalInstanceId, globalInstanceId_);
          DARABONBA_PTR_TO_JSON(HasRenewChangeOrder, hasRenewChangeOrder_);
          DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(IsRds, isRds_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(PackageType, packageType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_TO_JSON(QPS, QPS_);
          DARABONBA_PTR_TO_JSON(ReadOnlyCount, readOnlyCount_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReplacateId, replacateId_);
          DARABONBA_PTR_TO_JSON(ReplicaCount, replicaCount_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
          DARABONBA_PTR_TO_JSON(ShardClass, shardClass_);
          DARABONBA_PTR_TO_JSON(ShardCount, shardCount_);
          DARABONBA_PTR_TO_JSON(SlaveReadOnlyCount, slaveReadOnlyCount_);
          DARABONBA_PTR_TO_JSON(SlaveReplicaCount, slaveReplicaCount_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, KVStoreInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(CloudType, cloudType_);
          DARABONBA_PTR_FROM_JSON(ComputingType, computingType_);
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(ConnectionDomain, connectionDomain_);
          DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
          DARABONBA_PTR_FROM_JSON(Connections, connections_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DestroyTime, destroyTime_);
          DARABONBA_PTR_FROM_JSON(EditionType, editionType_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(GlobalInstanceId, globalInstanceId_);
          DARABONBA_PTR_FROM_JSON(HasRenewChangeOrder, hasRenewChangeOrder_);
          DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(IsRds, isRds_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_FROM_JSON(QPS, QPS_);
          DARABONBA_PTR_FROM_JSON(ReadOnlyCount, readOnlyCount_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReplacateId, replacateId_);
          DARABONBA_PTR_FROM_JSON(ReplicaCount, replicaCount_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
          DARABONBA_PTR_FROM_JSON(ShardClass, shardClass_);
          DARABONBA_PTR_FROM_JSON(ShardCount, shardCount_);
          DARABONBA_PTR_FROM_JSON(SlaveReadOnlyCount, slaveReadOnlyCount_);
          DARABONBA_PTR_FROM_JSON(SlaveReplicaCount, slaveReplicaCount_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        KVStoreInstance() = default ;
        KVStoreInstance(const KVStoreInstance &) = default ;
        KVStoreInstance(KVStoreInstance &&) = default ;
        KVStoreInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KVStoreInstance() = default ;
        KVStoreInstance& operator=(const KVStoreInstance &) = default ;
        KVStoreInstance& operator=(KVStoreInstance &&) = default ;
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
            // The key of the tag.
            shared_ptr<string> key_ {};
            // The value of the tag.
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
        && this->bandwidth_ == nullptr && this->capacity_ == nullptr && this->chargeType_ == nullptr && this->cloudType_ == nullptr && this->computingType_ == nullptr
        && this->config_ == nullptr && this->connectionDomain_ == nullptr && this->connectionMode_ == nullptr && this->connections_ == nullptr && this->createTime_ == nullptr
        && this->destroyTime_ == nullptr && this->editionType_ == nullptr && this->endTime_ == nullptr && this->engineVersion_ == nullptr && this->globalInstanceId_ == nullptr
        && this->hasRenewChangeOrder_ == nullptr && this->instanceClass_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceStatus_ == nullptr
        && this->instanceType_ == nullptr && this->isRds_ == nullptr && this->networkType_ == nullptr && this->nodeType_ == nullptr && this->packageType_ == nullptr
        && this->port_ == nullptr && this->privateIp_ == nullptr && this->QPS_ == nullptr && this->readOnlyCount_ == nullptr && this->regionId_ == nullptr
        && this->replacateId_ == nullptr && this->replicaCount_ == nullptr && this->resourceGroupId_ == nullptr && this->secondaryZoneId_ == nullptr && this->shardClass_ == nullptr
        && this->shardCount_ == nullptr && this->slaveReadOnlyCount_ == nullptr && this->slaveReplicaCount_ == nullptr && this->tags_ == nullptr && this->userName_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // architectureType Field Functions 
        bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
        void deleteArchitectureType() { this->architectureType_ = nullptr;};
        inline string getArchitectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
        inline KVStoreInstance& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
        inline KVStoreInstance& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // capacity Field Functions 
        bool hasCapacity() const { return this->capacity_ != nullptr;};
        void deleteCapacity() { this->capacity_ = nullptr;};
        inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
        inline KVStoreInstance& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline KVStoreInstance& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // cloudType Field Functions 
        bool hasCloudType() const { return this->cloudType_ != nullptr;};
        void deleteCloudType() { this->cloudType_ = nullptr;};
        inline string getCloudType() const { DARABONBA_PTR_GET_DEFAULT(cloudType_, "") };
        inline KVStoreInstance& setCloudType(string cloudType) { DARABONBA_PTR_SET_VALUE(cloudType_, cloudType) };


        // computingType Field Functions 
        bool hasComputingType() const { return this->computingType_ != nullptr;};
        void deleteComputingType() { this->computingType_ = nullptr;};
        inline string getComputingType() const { DARABONBA_PTR_GET_DEFAULT(computingType_, "") };
        inline KVStoreInstance& setComputingType(string computingType) { DARABONBA_PTR_SET_VALUE(computingType_, computingType) };


        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
        inline KVStoreInstance& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


        // connectionDomain Field Functions 
        bool hasConnectionDomain() const { return this->connectionDomain_ != nullptr;};
        void deleteConnectionDomain() { this->connectionDomain_ = nullptr;};
        inline string getConnectionDomain() const { DARABONBA_PTR_GET_DEFAULT(connectionDomain_, "") };
        inline KVStoreInstance& setConnectionDomain(string connectionDomain) { DARABONBA_PTR_SET_VALUE(connectionDomain_, connectionDomain) };


        // connectionMode Field Functions 
        bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
        void deleteConnectionMode() { this->connectionMode_ = nullptr;};
        inline string getConnectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
        inline KVStoreInstance& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


        // connections Field Functions 
        bool hasConnections() const { return this->connections_ != nullptr;};
        void deleteConnections() { this->connections_ = nullptr;};
        inline int64_t getConnections() const { DARABONBA_PTR_GET_DEFAULT(connections_, 0L) };
        inline KVStoreInstance& setConnections(int64_t connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline KVStoreInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // destroyTime Field Functions 
        bool hasDestroyTime() const { return this->destroyTime_ != nullptr;};
        void deleteDestroyTime() { this->destroyTime_ = nullptr;};
        inline string getDestroyTime() const { DARABONBA_PTR_GET_DEFAULT(destroyTime_, "") };
        inline KVStoreInstance& setDestroyTime(string destroyTime) { DARABONBA_PTR_SET_VALUE(destroyTime_, destroyTime) };


        // editionType Field Functions 
        bool hasEditionType() const { return this->editionType_ != nullptr;};
        void deleteEditionType() { this->editionType_ = nullptr;};
        inline string getEditionType() const { DARABONBA_PTR_GET_DEFAULT(editionType_, "") };
        inline KVStoreInstance& setEditionType(string editionType) { DARABONBA_PTR_SET_VALUE(editionType_, editionType) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline KVStoreInstance& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline KVStoreInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // globalInstanceId Field Functions 
        bool hasGlobalInstanceId() const { return this->globalInstanceId_ != nullptr;};
        void deleteGlobalInstanceId() { this->globalInstanceId_ = nullptr;};
        inline string getGlobalInstanceId() const { DARABONBA_PTR_GET_DEFAULT(globalInstanceId_, "") };
        inline KVStoreInstance& setGlobalInstanceId(string globalInstanceId) { DARABONBA_PTR_SET_VALUE(globalInstanceId_, globalInstanceId) };


        // hasRenewChangeOrder Field Functions 
        bool hasHasRenewChangeOrder() const { return this->hasRenewChangeOrder_ != nullptr;};
        void deleteHasRenewChangeOrder() { this->hasRenewChangeOrder_ = nullptr;};
        inline bool getHasRenewChangeOrder() const { DARABONBA_PTR_GET_DEFAULT(hasRenewChangeOrder_, false) };
        inline KVStoreInstance& setHasRenewChangeOrder(bool hasRenewChangeOrder) { DARABONBA_PTR_SET_VALUE(hasRenewChangeOrder_, hasRenewChangeOrder) };


        // instanceClass Field Functions 
        bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
        void deleteInstanceClass() { this->instanceClass_ = nullptr;};
        inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
        inline KVStoreInstance& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline KVStoreInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline KVStoreInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceStatus Field Functions 
        bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
        void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
        inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
        inline KVStoreInstance& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline KVStoreInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // isRds Field Functions 
        bool hasIsRds() const { return this->isRds_ != nullptr;};
        void deleteIsRds() { this->isRds_ = nullptr;};
        inline bool getIsRds() const { DARABONBA_PTR_GET_DEFAULT(isRds_, false) };
        inline KVStoreInstance& setIsRds(bool isRds) { DARABONBA_PTR_SET_VALUE(isRds_, isRds) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline KVStoreInstance& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline KVStoreInstance& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // packageType Field Functions 
        bool hasPackageType() const { return this->packageType_ != nullptr;};
        void deletePackageType() { this->packageType_ = nullptr;};
        inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
        inline KVStoreInstance& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
        inline KVStoreInstance& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // privateIp Field Functions 
        bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
        void deletePrivateIp() { this->privateIp_ = nullptr;};
        inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
        inline KVStoreInstance& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


        // QPS Field Functions 
        bool hasQPS() const { return this->QPS_ != nullptr;};
        void deleteQPS() { this->QPS_ = nullptr;};
        inline int64_t getQPS() const { DARABONBA_PTR_GET_DEFAULT(QPS_, 0L) };
        inline KVStoreInstance& setQPS(int64_t QPS) { DARABONBA_PTR_SET_VALUE(QPS_, QPS) };


        // readOnlyCount Field Functions 
        bool hasReadOnlyCount() const { return this->readOnlyCount_ != nullptr;};
        void deleteReadOnlyCount() { this->readOnlyCount_ = nullptr;};
        inline string getReadOnlyCount() const { DARABONBA_PTR_GET_DEFAULT(readOnlyCount_, "") };
        inline KVStoreInstance& setReadOnlyCount(string readOnlyCount) { DARABONBA_PTR_SET_VALUE(readOnlyCount_, readOnlyCount) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline KVStoreInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // replacateId Field Functions 
        bool hasReplacateId() const { return this->replacateId_ != nullptr;};
        void deleteReplacateId() { this->replacateId_ = nullptr;};
        inline string getReplacateId() const { DARABONBA_PTR_GET_DEFAULT(replacateId_, "") };
        inline KVStoreInstance& setReplacateId(string replacateId) { DARABONBA_PTR_SET_VALUE(replacateId_, replacateId) };


        // replicaCount Field Functions 
        bool hasReplicaCount() const { return this->replicaCount_ != nullptr;};
        void deleteReplicaCount() { this->replicaCount_ = nullptr;};
        inline int32_t getReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(replicaCount_, 0) };
        inline KVStoreInstance& setReplicaCount(int32_t replicaCount) { DARABONBA_PTR_SET_VALUE(replicaCount_, replicaCount) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline KVStoreInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // secondaryZoneId Field Functions 
        bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
        void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
        inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
        inline KVStoreInstance& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


        // shardClass Field Functions 
        bool hasShardClass() const { return this->shardClass_ != nullptr;};
        void deleteShardClass() { this->shardClass_ = nullptr;};
        inline string getShardClass() const { DARABONBA_PTR_GET_DEFAULT(shardClass_, "") };
        inline KVStoreInstance& setShardClass(string shardClass) { DARABONBA_PTR_SET_VALUE(shardClass_, shardClass) };


        // shardCount Field Functions 
        bool hasShardCount() const { return this->shardCount_ != nullptr;};
        void deleteShardCount() { this->shardCount_ = nullptr;};
        inline int32_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0) };
        inline KVStoreInstance& setShardCount(int32_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


        // slaveReadOnlyCount Field Functions 
        bool hasSlaveReadOnlyCount() const { return this->slaveReadOnlyCount_ != nullptr;};
        void deleteSlaveReadOnlyCount() { this->slaveReadOnlyCount_ = nullptr;};
        inline int32_t getSlaveReadOnlyCount() const { DARABONBA_PTR_GET_DEFAULT(slaveReadOnlyCount_, 0) };
        inline KVStoreInstance& setSlaveReadOnlyCount(int32_t slaveReadOnlyCount) { DARABONBA_PTR_SET_VALUE(slaveReadOnlyCount_, slaveReadOnlyCount) };


        // slaveReplicaCount Field Functions 
        bool hasSlaveReplicaCount() const { return this->slaveReplicaCount_ != nullptr;};
        void deleteSlaveReplicaCount() { this->slaveReplicaCount_ = nullptr;};
        inline int32_t getSlaveReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(slaveReplicaCount_, 0) };
        inline KVStoreInstance& setSlaveReplicaCount(int32_t slaveReplicaCount) { DARABONBA_PTR_SET_VALUE(slaveReplicaCount_, slaveReplicaCount) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const KVStoreInstance::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, KVStoreInstance::Tags) };
        inline KVStoreInstance::Tags getTags() { DARABONBA_PTR_GET(tags_, KVStoreInstance::Tags) };
        inline KVStoreInstance& setTags(const KVStoreInstance::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline KVStoreInstance& setTags(KVStoreInstance::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline KVStoreInstance& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline KVStoreInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline KVStoreInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline KVStoreInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The architecture of the instance. Default value: NULL. Valid values:
        // 
        // *   **cluster**: cluster architecture
        // *   **standard**: standard architecture
        // *   **rwsplit**: read/write splitting architecture
        // *   **NULL**: all of the preceding architectures
        shared_ptr<string> architectureType_ {};
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
        // The type of the computing resource. Valid values:
        // 
        // *   **Ecs**: cloud-native computing service
        // *   **Machine**: physical machine
        shared_ptr<string> computingType_ {};
        // The parameter configurations of the instance. For more information, see [Modify parameters of an instance](https://help.aliyun.com/document_detail/43885.html).
        shared_ptr<string> config_ {};
        // The internal endpoint of the instance.
        shared_ptr<string> connectionDomain_ {};
        // The connection mode of the instance. Valid values:
        // 
        // *   **Standard**: standard mode
        // *   **Safe**: database proxy mode
        shared_ptr<string> connectionMode_ {};
        // The maximum number of connections supported by the instance.
        shared_ptr<int64_t> connections_ {};
        // The time when the instance was created.
        shared_ptr<string> createTime_ {};
        // The time when the instance was deleted.
        shared_ptr<string> destroyTime_ {};
        // The edition of the instance. Valid values:
        // 
        // *   **Community**: Redis Open-Source Edition
        // *   **Enterprise**: Tair (Enterprise Edition)
        shared_ptr<string> editionType_ {};
        // The time when the subscription instance expires.
        shared_ptr<string> endTime_ {};
        // The database engine version of the instance.
        shared_ptr<string> engineVersion_ {};
        // The ID of the distributed instance.
        // 
        // >  This parameter is returned only if the instance is a child instance of a distributed instance.
        shared_ptr<string> globalInstanceId_ {};
        // Indicates whether your Alibaba Cloud account has pending orders for renewal and configuration change. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> hasRenewChangeOrder_ {};
        // The instance class.
        shared_ptr<string> instanceClass_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The name of the instance.
        shared_ptr<string> instanceName_ {};
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
        shared_ptr<string> instanceStatus_ {};
        // The database engine of the instance. Valid values:
        // 
        // *   **Tair**
        // *   **Redis**
        // *   **Memcache**
        shared_ptr<string> instanceType_ {};
        // Indicates whether the instance is managed by ApsaraDB RDS. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> isRds_ {};
        // The network type of the instance. Valid values:
        // 
        // *   **CLASSIC**
        // *   **VPC**
        shared_ptr<string> networkType_ {};
        // The node type. Valid values:
        // 
        // *   **double**: The instance contains a master node and a replica node.
        // *   **single**: The instance contains only a master node. This node type is phased out.
        shared_ptr<string> nodeType_ {};
        // The plan type. Valid values:
        // 
        // *   **standard**: standard plan
        // *   **customized**: custom plan
        shared_ptr<string> packageType_ {};
        // The service port of the instance.
        shared_ptr<int64_t> port_ {};
        // The private IP address.
        // 
        // >  This parameter is not returned when the instance is deployed in the classic network.
        shared_ptr<string> privateIp_ {};
        // The number of queries per second (QPS).
        shared_ptr<int64_t> QPS_ {};
        // The number of read replicas in the primary zone.
        // 
        // >  The **ReadOnlyCount** and **SlaveReadOnlyCount** parameters are applicable only to cloud-native instances for which read/write splitting is enabled. If the instance is a cluster instance, the preceding parameters indicate the number of read replicas **per node** in the primary and secondary zones of the instance.
        shared_ptr<string> readOnlyCount_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The logical ID of the distributed instance.
        shared_ptr<string> replacateId_ {};
        // The number of replica nodes in the primary zone.
        // 
        // >  The **ReplicaCount** and **SlaveReplicaCount** parameters are applicable only to cloud-native instances. If the instance is a cluster instance, the preceding parameters indicate the number of replica nodes **per node** in the primary and secondary zones of the instance.
        shared_ptr<int32_t> replicaCount_ {};
        // The ID of the resource group to which the instance belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the secondary zone.
        // 
        // >  If multiple zones are returned for **ZoneId**, such as cn-hangzhou-MAZ10(h,i), this parameter is ignored.
        shared_ptr<string> secondaryZoneId_ {};
        // The shard class. For more information about shard classes, see [Overview](https://help.aliyun.com/document_detail/26350.html).
        // 
        // >  The overall performance of a cluster instance is calculated by multiplying the class of a single shard (ShardClass) by the number of shards (ShardCount).
        shared_ptr<string> shardClass_ {};
        // The number of data shards in the cluster instance.
        // 
        // >  This parameter is returned only for cloud-native cluster instances or read/write splitting instances.
        shared_ptr<int32_t> shardCount_ {};
        // The number of read replicas in the secondary zone.
        shared_ptr<int32_t> slaveReadOnlyCount_ {};
        // The number of replica nodes in the secondary zone.
        shared_ptr<int32_t> slaveReplicaCount_ {};
        // Details about the tags.
        shared_ptr<KVStoreInstance::Tags> tags_ {};
        // The username used to connect to the instance. By default, a username named after the instance ID is included.
        shared_ptr<string> userName_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
        // The ID of the virtual private cloud (VPC).
        shared_ptr<string> vpcId_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->KVStoreInstance_ == nullptr; };
      // KVStoreInstance Field Functions 
      bool hasKVStoreInstance() const { return this->KVStoreInstance_ != nullptr;};
      void deleteKVStoreInstance() { this->KVStoreInstance_ = nullptr;};
      inline const vector<Instances::KVStoreInstance> & getKVStoreInstance() const { DARABONBA_PTR_GET_CONST(KVStoreInstance_, vector<Instances::KVStoreInstance>) };
      inline vector<Instances::KVStoreInstance> getKVStoreInstance() { DARABONBA_PTR_GET(KVStoreInstance_, vector<Instances::KVStoreInstance>) };
      inline Instances& setKVStoreInstance(const vector<Instances::KVStoreInstance> & kVStoreInstance) { DARABONBA_PTR_SET_VALUE(KVStoreInstance_, kVStoreInstance) };
      inline Instances& setKVStoreInstance(vector<Instances::KVStoreInstance> && kVStoreInstance) { DARABONBA_PTR_SET_RVALUE(KVStoreInstance_, kVStoreInstance) };


    protected:
      shared_ptr<vector<Instances::KVStoreInstance>> KVStoreInstance_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeInstancesResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeInstancesResponseBody::Instances) };
    inline DescribeInstancesResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeInstancesResponseBody::Instances) };
    inline DescribeInstancesResponseBody& setInstances(const DescribeInstancesResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstancesResponseBody& setInstances(DescribeInstancesResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the instances.
    shared_ptr<DescribeInstancesResponseBody::Instances> instances_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of instances.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
