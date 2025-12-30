// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESPONSEBODY_HPP_
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
  class DescribeClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(ComputingIpVersion, computingIpVersion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(Networks, networks_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeGroupCount, nodeGroupCount_);
      DARABONBA_PTR_TO_JSON(OpenEniJumboFrame, openEniJumboFrame_);
      DARABONBA_PTR_TO_JSON(OperatingState, operatingState_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(ComputingIpVersion, computingIpVersion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(Networks, networks_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeGroupCount, nodeGroupCount_);
      DARABONBA_PTR_FROM_JSON(OpenEniJumboFrame, openEniJumboFrame_);
      DARABONBA_PTR_FROM_JSON(OperatingState, operatingState_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeClusterResponseBody() = default ;
    DescribeClusterResponseBody(const DescribeClusterResponseBody &) = default ;
    DescribeClusterResponseBody(DescribeClusterResponseBody &&) = default ;
    DescribeClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResponseBody() = default ;
    DescribeClusterResponseBody& operator=(const DescribeClusterResponseBody &) = default ;
    DescribeClusterResponseBody& operator=(DescribeClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Networks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Networks& obj) { 
        DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      };
      friend void from_json(const Darabonba::Json& j, Networks& obj) { 
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
      virtual bool empty() const override { return this->vpdId_ == nullptr; };
      // vpdId Field Functions 
      bool hasVpdId() const { return this->vpdId_ != nullptr;};
      void deleteVpdId() { this->vpdId_ = nullptr;};
      inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
      inline Networks& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    protected:
      // The ID of the CIDR block for the cluster.
      shared_ptr<string> vpdId_ {};
    };

    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
        DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
        DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentId_ == nullptr
        && this->componentType_ == nullptr; };
      // componentId Field Functions 
      bool hasComponentId() const { return this->componentId_ != nullptr;};
      void deleteComponentId() { this->componentId_ = nullptr;};
      inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
      inline Components& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
      inline Components& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    protected:
      // The component ID.
      shared_ptr<string> componentId_ {};
      // The component type.
      // 
      // Valid values:
      // 
      // *   ARMS
      // *   ACKEdge
      shared_ptr<string> componentType_ {};
    };

    virtual bool empty() const override { return this->clusterDescription_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->components_ == nullptr && this->computingIpVersion_ == nullptr
        && this->createTime_ == nullptr && this->hpnZone_ == nullptr && this->networks_ == nullptr && this->nodeCount_ == nullptr && this->nodeGroupCount_ == nullptr
        && this->openEniJumboFrame_ == nullptr && this->operatingState_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupId_ == nullptr
        && this->taskId_ == nullptr && this->updateTime_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string getClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline DescribeClusterResponseBody& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeClusterResponseBody& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClusterResponseBody& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<DescribeClusterResponseBody::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<DescribeClusterResponseBody::Components>) };
    inline vector<DescribeClusterResponseBody::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<DescribeClusterResponseBody::Components>) };
    inline DescribeClusterResponseBody& setComponents(const vector<DescribeClusterResponseBody::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline DescribeClusterResponseBody& setComponents(vector<DescribeClusterResponseBody::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // computingIpVersion Field Functions 
    bool hasComputingIpVersion() const { return this->computingIpVersion_ != nullptr;};
    void deleteComputingIpVersion() { this->computingIpVersion_ = nullptr;};
    inline string getComputingIpVersion() const { DARABONBA_PTR_GET_DEFAULT(computingIpVersion_, "") };
    inline DescribeClusterResponseBody& setComputingIpVersion(string computingIpVersion) { DARABONBA_PTR_SET_VALUE(computingIpVersion_, computingIpVersion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeClusterResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline DescribeClusterResponseBody& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // networks Field Functions 
    bool hasNetworks() const { return this->networks_ != nullptr;};
    void deleteNetworks() { this->networks_ = nullptr;};
    inline const DescribeClusterResponseBody::Networks & getNetworks() const { DARABONBA_PTR_GET_CONST(networks_, DescribeClusterResponseBody::Networks) };
    inline DescribeClusterResponseBody::Networks getNetworks() { DARABONBA_PTR_GET(networks_, DescribeClusterResponseBody::Networks) };
    inline DescribeClusterResponseBody& setNetworks(const DescribeClusterResponseBody::Networks & networks) { DARABONBA_PTR_SET_VALUE(networks_, networks) };
    inline DescribeClusterResponseBody& setNetworks(DescribeClusterResponseBody::Networks && networks) { DARABONBA_PTR_SET_RVALUE(networks_, networks) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int64_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
    inline DescribeClusterResponseBody& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeGroupCount Field Functions 
    bool hasNodeGroupCount() const { return this->nodeGroupCount_ != nullptr;};
    void deleteNodeGroupCount() { this->nodeGroupCount_ = nullptr;};
    inline int64_t getNodeGroupCount() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupCount_, 0L) };
    inline DescribeClusterResponseBody& setNodeGroupCount(int64_t nodeGroupCount) { DARABONBA_PTR_SET_VALUE(nodeGroupCount_, nodeGroupCount) };


    // openEniJumboFrame Field Functions 
    bool hasOpenEniJumboFrame() const { return this->openEniJumboFrame_ != nullptr;};
    void deleteOpenEniJumboFrame() { this->openEniJumboFrame_ = nullptr;};
    inline string getOpenEniJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(openEniJumboFrame_, "") };
    inline DescribeClusterResponseBody& setOpenEniJumboFrame(string openEniJumboFrame) { DARABONBA_PTR_SET_VALUE(openEniJumboFrame_, openEniJumboFrame) };


    // operatingState Field Functions 
    bool hasOperatingState() const { return this->operatingState_ != nullptr;};
    void deleteOperatingState() { this->operatingState_ = nullptr;};
    inline string getOperatingState() const { DARABONBA_PTR_GET_DEFAULT(operatingState_, "") };
    inline DescribeClusterResponseBody& setOperatingState(string operatingState) { DARABONBA_PTR_SET_VALUE(operatingState_, operatingState) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeClusterResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeClusterResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeClusterResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeClusterResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeClusterResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeClusterResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The cluster description.
    shared_ptr<string> clusterDescription_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The cluster name.
    shared_ptr<string> clusterName_ {};
    // The cluster type.
    shared_ptr<string> clusterType_ {};
    // The component information.
    shared_ptr<vector<DescribeClusterResponseBody::Components>> components_ {};
    // The IP type of the computing network.
    shared_ptr<string> computingIpVersion_ {};
    // The creation time.
    shared_ptr<string> createTime_ {};
    // The cluster number.
    shared_ptr<string> hpnZone_ {};
    // The network information.
    shared_ptr<DescribeClusterResponseBody::Networks> networks_ {};
    // The number of nodes.
    shared_ptr<int64_t> nodeCount_ {};
    // The number of node groups.
    shared_ptr<int64_t> nodeGroupCount_ {};
    // The status of Jumbo Frames for the elastic network interface (ENI).
    shared_ptr<string> openEniJumboFrame_ {};
    // The cluster status.
    shared_ptr<string> operatingState_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> securityGroupId_ {};
    // The job ID.
    shared_ptr<string> taskId_ {};
    // The update time.
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> vSwitchId_ {};
    // The ID of the virtual private cloud (VPC).
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
