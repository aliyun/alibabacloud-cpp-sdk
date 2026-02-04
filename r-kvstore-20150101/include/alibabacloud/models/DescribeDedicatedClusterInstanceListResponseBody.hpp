// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDCLUSTERINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDCLUSTERINSTANCELISTRESPONSEBODY_HPP_
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
  class DescribeDedicatedClusterInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedClusterInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedClusterInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDedicatedClusterInstanceListResponseBody() = default ;
    DescribeDedicatedClusterInstanceListResponseBody(const DescribeDedicatedClusterInstanceListResponseBody &) = default ;
    DescribeDedicatedClusterInstanceListResponseBody(DescribeDedicatedClusterInstanceListResponseBody &&) = default ;
    DescribeDedicatedClusterInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedClusterInstanceListResponseBody() = default ;
    DescribeDedicatedClusterInstanceListResponseBody& operator=(const DescribeDedicatedClusterInstanceListResponseBody &) = default ;
    DescribeDedicatedClusterInstanceListResponseBody& operator=(DescribeDedicatedClusterInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(BandWidth, bandWidth_);
        DARABONBA_PTR_TO_JSON(CharacterType, characterType_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ConnectionDomain, connectionDomain_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CurrentBandWidth, currentBandWidth_);
        DARABONBA_PTR_TO_JSON(CustomId, customId_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceNodeList, instanceNodeList_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
        DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
        DARABONBA_PTR_TO_JSON(ProxyCount, proxyCount_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ShardCount, shardCount_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(BandWidth, bandWidth_);
        DARABONBA_PTR_FROM_JSON(CharacterType, characterType_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ConnectionDomain, connectionDomain_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CurrentBandWidth, currentBandWidth_);
        DARABONBA_PTR_FROM_JSON(CustomId, customId_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceNodeList, instanceNodeList_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
        DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
        DARABONBA_PTR_FROM_JSON(ProxyCount, proxyCount_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ShardCount, shardCount_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
      class InstanceNodeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceNodeList& obj) { 
          DARABONBA_PTR_TO_JSON(DedicatedHostName, dedicatedHostName_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeIp, nodeIp_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceNodeList& obj) { 
          DARABONBA_PTR_FROM_JSON(DedicatedHostName, dedicatedHostName_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeIp, nodeIp_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        InstanceNodeList() = default ;
        InstanceNodeList(const InstanceNodeList &) = default ;
        InstanceNodeList(InstanceNodeList &&) = default ;
        InstanceNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceNodeList() = default ;
        InstanceNodeList& operator=(const InstanceNodeList &) = default ;
        InstanceNodeList& operator=(InstanceNodeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dedicatedHostName_ == nullptr
        && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->nodeIp_ == nullptr && this->nodeType_ == nullptr && this->port_ == nullptr
        && this->role_ == nullptr && this->zoneId_ == nullptr; };
        // dedicatedHostName Field Functions 
        bool hasDedicatedHostName() const { return this->dedicatedHostName_ != nullptr;};
        void deleteDedicatedHostName() { this->dedicatedHostName_ = nullptr;};
        inline string getDedicatedHostName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostName_, "") };
        inline InstanceNodeList& setDedicatedHostName(string dedicatedHostName) { DARABONBA_PTR_SET_VALUE(dedicatedHostName_, dedicatedHostName) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceNodeList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int32_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0) };
        inline InstanceNodeList& setNodeId(int32_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeIp Field Functions 
        bool hasNodeIp() const { return this->nodeIp_ != nullptr;};
        void deleteNodeIp() { this->nodeIp_ = nullptr;};
        inline string getNodeIp() const { DARABONBA_PTR_GET_DEFAULT(nodeIp_, "") };
        inline InstanceNodeList& setNodeIp(string nodeIp) { DARABONBA_PTR_SET_VALUE(nodeIp_, nodeIp) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline InstanceNodeList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline InstanceNodeList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline InstanceNodeList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline InstanceNodeList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The ID of the host in the dedicated cluster.
        shared_ptr<string> dedicatedHostName_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The node ID.
        shared_ptr<int32_t> nodeId_ {};
        // The IP address of the node.
        shared_ptr<string> nodeIp_ {};
        // The node type. Valid values:
        // 
        // *   **db**: data node.
        // *   **proxy**: proxy node.
        // *   **normal**: regular node. This value is returned when the instance runs in the standard architecture.
        shared_ptr<string> nodeType_ {};
        // The port number that is used to connect to the node.
        shared_ptr<int32_t> port_ {};
        // The role of the node. Valid values:
        // 
        // *   **master**: master node
        // *   **slave**: replica node
        shared_ptr<string> role_ {};
        // The zone ID of the node.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->bandWidth_ == nullptr
        && this->characterType_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->connectionDomain_ == nullptr && this->createTime_ == nullptr
        && this->currentBandWidth_ == nullptr && this->customId_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->instanceClass_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceNodeList_ == nullptr && this->instanceStatus_ == nullptr && this->maintainEndTime_ == nullptr
        && this->maintainStartTime_ == nullptr && this->proxyCount_ == nullptr && this->regionId_ == nullptr && this->shardCount_ == nullptr && this->storageType_ == nullptr
        && this->vpcId_ == nullptr && this->vswitchId_ == nullptr && this->zoneId_ == nullptr; };
      // bandWidth Field Functions 
      bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
      void deleteBandWidth() { this->bandWidth_ = nullptr;};
      inline int64_t getBandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, 0L) };
      inline Instances& setBandWidth(int64_t bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


      // characterType Field Functions 
      bool hasCharacterType() const { return this->characterType_ != nullptr;};
      void deleteCharacterType() { this->characterType_ = nullptr;};
      inline string getCharacterType() const { DARABONBA_PTR_GET_DEFAULT(characterType_, "") };
      inline Instances& setCharacterType(string characterType) { DARABONBA_PTR_SET_VALUE(characterType_, characterType) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Instances& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Instances& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // connectionDomain Field Functions 
      bool hasConnectionDomain() const { return this->connectionDomain_ != nullptr;};
      void deleteConnectionDomain() { this->connectionDomain_ = nullptr;};
      inline string getConnectionDomain() const { DARABONBA_PTR_GET_DEFAULT(connectionDomain_, "") };
      inline Instances& setConnectionDomain(string connectionDomain) { DARABONBA_PTR_SET_VALUE(connectionDomain_, connectionDomain) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Instances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // currentBandWidth Field Functions 
      bool hasCurrentBandWidth() const { return this->currentBandWidth_ != nullptr;};
      void deleteCurrentBandWidth() { this->currentBandWidth_ = nullptr;};
      inline int64_t getCurrentBandWidth() const { DARABONBA_PTR_GET_DEFAULT(currentBandWidth_, 0L) };
      inline Instances& setCurrentBandWidth(int64_t currentBandWidth) { DARABONBA_PTR_SET_VALUE(currentBandWidth_, currentBandWidth) };


      // customId Field Functions 
      bool hasCustomId() const { return this->customId_ != nullptr;};
      void deleteCustomId() { this->customId_ = nullptr;};
      inline string getCustomId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
      inline Instances& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Instances& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline Instances& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // instanceClass Field Functions 
      bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
      void deleteInstanceClass() { this->instanceClass_ = nullptr;};
      inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
      inline Instances& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceNodeList Field Functions 
      bool hasInstanceNodeList() const { return this->instanceNodeList_ != nullptr;};
      void deleteInstanceNodeList() { this->instanceNodeList_ = nullptr;};
      inline const vector<Instances::InstanceNodeList> & getInstanceNodeList() const { DARABONBA_PTR_GET_CONST(instanceNodeList_, vector<Instances::InstanceNodeList>) };
      inline vector<Instances::InstanceNodeList> getInstanceNodeList() { DARABONBA_PTR_GET(instanceNodeList_, vector<Instances::InstanceNodeList>) };
      inline Instances& setInstanceNodeList(const vector<Instances::InstanceNodeList> & instanceNodeList) { DARABONBA_PTR_SET_VALUE(instanceNodeList_, instanceNodeList) };
      inline Instances& setInstanceNodeList(vector<Instances::InstanceNodeList> && instanceNodeList) { DARABONBA_PTR_SET_RVALUE(instanceNodeList_, instanceNodeList) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline Instances& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // maintainEndTime Field Functions 
      bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
      void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
      inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
      inline Instances& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


      // maintainStartTime Field Functions 
      bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
      void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
      inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
      inline Instances& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


      // proxyCount Field Functions 
      bool hasProxyCount() const { return this->proxyCount_ != nullptr;};
      void deleteProxyCount() { this->proxyCount_ = nullptr;};
      inline int32_t getProxyCount() const { DARABONBA_PTR_GET_DEFAULT(proxyCount_, 0) };
      inline Instances& setProxyCount(int32_t proxyCount) { DARABONBA_PTR_SET_VALUE(proxyCount_, proxyCount) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // shardCount Field Functions 
      bool hasShardCount() const { return this->shardCount_ != nullptr;};
      void deleteShardCount() { this->shardCount_ = nullptr;};
      inline int32_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0) };
      inline Instances& setShardCount(int32_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Instances& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Instances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline Instances& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Instances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The default bandwidth of the instance. Unit: Mbit/s.
      shared_ptr<int64_t> bandWidth_ {};
      // The architecture of the instance. Valid values:
      // 
      // *   **logic**: cluster
      // *   **normal**: standard
      shared_ptr<string> characterType_ {};
      // The ID of the dedicated cluster to which the instance belongs.
      shared_ptr<string> clusterId_ {};
      // The name of the dedicated cluster to which the instance belongs.
      shared_ptr<string> clusterName_ {};
      // The private endpoint of the instance.
      shared_ptr<string> connectionDomain_ {};
      // The time when the instance was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The current bandwidth of the instance, which is the sum of the default bandwidth and any extra bandwidth that is purchased. Unit: Mbit/s.
      shared_ptr<int64_t> currentBandWidth_ {};
      // An internal parameter used for the maintenance and management of instances.
      shared_ptr<string> customId_ {};
      // The database engine. The return value is **redis**.
      shared_ptr<string> engine_ {};
      // The database engine version of the instance. The return value is **5.0**.
      shared_ptr<string> engineVersion_ {};
      // The instance type.
      shared_ptr<string> instanceClass_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The instance name.
      shared_ptr<string> instanceName_ {};
      // Details about the nodes.
      shared_ptr<vector<Instances::InstanceNodeList>> instanceNodeList_ {};
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
      // The end time of the maintenance window. The time is in the *HH:mm*Z format. The time is displayed in UTC.
      shared_ptr<string> maintainEndTime_ {};
      // The start time of the maintenance window. The time is in the *HH:mm*Z format. The time is displayed in UTC.
      shared_ptr<string> maintainStartTime_ {};
      // The number of proxy nodes.
      // 
      // > 
      // 
      // *   If the return value is **0**, the proxy mode is disabled for the instance. If the return value is an integer greater than **0**, such as **1**, the proxy mode is enabled for the instance.
      // 
      // *   This parameter is returned only when the instance is a [cluster](https://help.aliyun.com/document_detail/52228.html) instance.
      shared_ptr<int32_t> proxyCount_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The number of shards.
      // 
      // >  This parameter is returned only when the instance is a [cluster](https://help.aliyun.com/document_detail/52228.html) instance.
      shared_ptr<int32_t> shardCount_ {};
      // The storage type of the instance. The return value is LOCAL_SSD, which indicates [enhanced SSDs (ESSDs)](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> storageType_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The vSwitch ID.
      shared_ptr<string> vswitchId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeDedicatedClusterInstanceListResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeDedicatedClusterInstanceListResponseBody::Instances>) };
    inline vector<DescribeDedicatedClusterInstanceListResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<DescribeDedicatedClusterInstanceListResponseBody::Instances>) };
    inline DescribeDedicatedClusterInstanceListResponseBody& setInstances(const vector<DescribeDedicatedClusterInstanceListResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeDedicatedClusterInstanceListResponseBody& setInstances(vector<DescribeDedicatedClusterInstanceListResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDedicatedClusterInstanceListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDedicatedClusterInstanceListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedClusterInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDedicatedClusterInstanceListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the instances.
    shared_ptr<vector<DescribeDedicatedClusterInstanceListResponseBody::Instances>> instances_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
