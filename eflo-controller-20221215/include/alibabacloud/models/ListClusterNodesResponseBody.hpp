// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListClusterNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterNodesResponseBody() = default ;
    ListClusterNodesResponseBody(const ListClusterNodesResponseBody &) = default ;
    ListClusterNodesResponseBody(ListClusterNodesResponseBody &&) = default ;
    ListClusterNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterNodesResponseBody() = default ;
    ListClusterNodesResponseBody& operator=(const ListClusterNodesResponseBody &) = default ;
    ListClusterNodesResponseBody& operator=(ListClusterNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Nodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
        DARABONBA_PTR_TO_JSON(HyperNodeId, hyperNodeId_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(MachineType, machineType_);
        DARABONBA_PTR_TO_JSON(Networks, networks_);
        DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(OperatingState, operatingState_);
        DARABONBA_PTR_TO_JSON(Sn, sn_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
        DARABONBA_PTR_FROM_JSON(HyperNodeId, hyperNodeId_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
        DARABONBA_PTR_FROM_JSON(Networks, networks_);
        DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(OperatingState, operatingState_);
        DARABONBA_PTR_FROM_JSON(Sn, sn_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Nodes() = default ;
      Nodes(const Nodes &) = default ;
      Nodes(Nodes &&) = default ;
      Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Nodes() = default ;
      Nodes& operator=(const Nodes &) = default ;
      Nodes& operator=(Nodes &&) = default ;
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
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class Networks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Networks& obj) { 
          DARABONBA_PTR_TO_JSON(BondName, bondName_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
          DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
        };
        friend void from_json(const Darabonba::Json& j, Networks& obj) { 
          DARABONBA_PTR_FROM_JSON(BondName, bondName_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
          DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
        };
        Networks() = default ;
        Networks(const Networks &) = default ;
        Networks(Networks &&) = default ;
        Networks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Networks() = default ;
        Networks& operator=(const Networks &) = default ;
        Networks& operator=(Networks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bondName_ == nullptr
        && this->ip_ == nullptr && this->subnetId_ == nullptr && this->vpdId_ == nullptr; };
        // bondName Field Functions 
        bool hasBondName() const { return this->bondName_ != nullptr;};
        void deleteBondName() { this->bondName_ = nullptr;};
        inline string getBondName() const { DARABONBA_PTR_GET_DEFAULT(bondName_, "") };
        inline Networks& setBondName(string bondName) { DARABONBA_PTR_SET_VALUE(bondName_, bondName) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Networks& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // subnetId Field Functions 
        bool hasSubnetId() const { return this->subnetId_ != nullptr;};
        void deleteSubnetId() { this->subnetId_ = nullptr;};
        inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
        inline Networks& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


        // vpdId Field Functions 
        bool hasVpdId() const { return this->vpdId_ != nullptr;};
        void deleteVpdId() { this->vpdId_ = nullptr;};
        inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
        inline Networks& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


      protected:
        // The name of the network port for the node.
        shared_ptr<string> bondName_ {};
        // The IP address of the node in the virtual private cloud (VPC).
        shared_ptr<string> ip_ {};
        // The subnet ID.
        shared_ptr<string> subnetId_ {};
        // The VPC ID.
        shared_ptr<string> vpdId_ {};
      };

      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->createTime_ == nullptr && this->expiredTime_ == nullptr && this->fileSystemMountEnabled_ == nullptr && this->hostname_ == nullptr && this->hpnZone_ == nullptr
        && this->hyperNodeId_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->machineType_ == nullptr && this->networks_ == nullptr
        && this->nodeGroupId_ == nullptr && this->nodeGroupName_ == nullptr && this->nodeId_ == nullptr && this->nodeType_ == nullptr && this->operatingState_ == nullptr
        && this->sn_ == nullptr && this->tags_ == nullptr && this->taskId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->zoneId_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Nodes& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Nodes& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Nodes& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // fileSystemMountEnabled Field Functions 
      bool hasFileSystemMountEnabled() const { return this->fileSystemMountEnabled_ != nullptr;};
      void deleteFileSystemMountEnabled() { this->fileSystemMountEnabled_ = nullptr;};
      inline bool getFileSystemMountEnabled() const { DARABONBA_PTR_GET_DEFAULT(fileSystemMountEnabled_, false) };
      inline Nodes& setFileSystemMountEnabled(bool fileSystemMountEnabled) { DARABONBA_PTR_SET_VALUE(fileSystemMountEnabled_, fileSystemMountEnabled) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Nodes& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // hpnZone Field Functions 
      bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
      void deleteHpnZone() { this->hpnZone_ = nullptr;};
      inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
      inline Nodes& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


      // hyperNodeId Field Functions 
      bool hasHyperNodeId() const { return this->hyperNodeId_ != nullptr;};
      void deleteHyperNodeId() { this->hyperNodeId_ = nullptr;};
      inline string getHyperNodeId() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeId_, "") };
      inline Nodes& setHyperNodeId(string hyperNodeId) { DARABONBA_PTR_SET_VALUE(hyperNodeId_, hyperNodeId) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Nodes& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline Nodes& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // machineType Field Functions 
      bool hasMachineType() const { return this->machineType_ != nullptr;};
      void deleteMachineType() { this->machineType_ = nullptr;};
      inline string getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
      inline Nodes& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


      // networks Field Functions 
      bool hasNetworks() const { return this->networks_ != nullptr;};
      void deleteNetworks() { this->networks_ = nullptr;};
      inline const vector<Nodes::Networks> & getNetworks() const { DARABONBA_PTR_GET_CONST(networks_, vector<Nodes::Networks>) };
      inline vector<Nodes::Networks> getNetworks() { DARABONBA_PTR_GET(networks_, vector<Nodes::Networks>) };
      inline Nodes& setNetworks(const vector<Nodes::Networks> & networks) { DARABONBA_PTR_SET_VALUE(networks_, networks) };
      inline Nodes& setNetworks(vector<Nodes::Networks> && networks) { DARABONBA_PTR_SET_RVALUE(networks_, networks) };


      // nodeGroupId Field Functions 
      bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
      void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
      inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
      inline Nodes& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


      // nodeGroupName Field Functions 
      bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
      void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
      inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
      inline Nodes& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Nodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline Nodes& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // operatingState Field Functions 
      bool hasOperatingState() const { return this->operatingState_ != nullptr;};
      void deleteOperatingState() { this->operatingState_ = nullptr;};
      inline string getOperatingState() const { DARABONBA_PTR_GET_DEFAULT(operatingState_, "") };
      inline Nodes& setOperatingState(string operatingState) { DARABONBA_PTR_SET_VALUE(operatingState_, operatingState) };


      // sn Field Functions 
      bool hasSn() const { return this->sn_ != nullptr;};
      void deleteSn() { this->sn_ = nullptr;};
      inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
      inline Nodes& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Nodes::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Nodes::Tags>) };
      inline vector<Nodes::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Nodes::Tags>) };
      inline Nodes& setTags(const vector<Nodes::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Nodes& setTags(vector<Nodes::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Nodes& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Nodes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Nodes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Nodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The commodity code.
      shared_ptr<string> commodityCode_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The time when the node expires.
      shared_ptr<string> expiredTime_ {};
      // Indicates whether file storage mounting is supported.
      shared_ptr<bool> fileSystemMountEnabled_ {};
      // The hostname.
      shared_ptr<string> hostname_ {};
      // The cluster number.
      shared_ptr<string> hpnZone_ {};
      shared_ptr<string> hyperNodeId_ {};
      // The system image ID.
      shared_ptr<string> imageId_ {};
      // The image name.
      shared_ptr<string> imageName_ {};
      // The node type.
      shared_ptr<string> machineType_ {};
      // The network information.
      shared_ptr<vector<Nodes::Networks>> networks_ {};
      // The node group ID.
      shared_ptr<string> nodeGroupId_ {};
      // The node group name.
      shared_ptr<string> nodeGroupName_ {};
      // The node ID.
      shared_ptr<string> nodeId_ {};
      shared_ptr<string> nodeType_ {};
      // The node status.
      // 
      // Valid values:
      // 
      // *   Extending
      // *   UnusedNodeStopped
      // *   UnusedNodeStopping
      // *   Unused
      // *   Using
      // *   ReleaseLocking
      // *   Operating
      // *   Cutting
      // *   ClusterNodeStopped
      // *   UnusedNodeRecovering
      // *   ClusterNodeStopping
      // *   ClusterNodeRecovering
      // *   Replacing
      shared_ptr<string> operatingState_ {};
      // The serial number of the node.
      shared_ptr<string> sn_ {};
      // The tags.
      shared_ptr<vector<Nodes::Tags>> tags_ {};
      // The job ID.
      shared_ptr<string> taskId_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->nodes_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListClusterNodesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<ListClusterNodesResponseBody::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<ListClusterNodesResponseBody::Nodes>) };
    inline vector<ListClusterNodesResponseBody::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<ListClusterNodesResponseBody::Nodes>) };
    inline ListClusterNodesResponseBody& setNodes(const vector<ListClusterNodesResponseBody::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ListClusterNodesResponseBody& setNodes(vector<ListClusterNodesResponseBody::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned pagination token which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The nodes.
    shared_ptr<vector<ListClusterNodesResponseBody::Nodes>> nodes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
