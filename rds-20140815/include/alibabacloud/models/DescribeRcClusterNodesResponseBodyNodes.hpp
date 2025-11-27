// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCCLUSTERNODESRESPONSEBODYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCCLUSTERNODESRESPONSEBODYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCClusterNodesResponseBodyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCClusterNodesResponseBodyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DockerVersion, dockerVersion_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceRole, instanceRole_);
      DARABONBA_PTR_TO_JSON(IpAddresses, ipAddresses_);
      DARABONBA_PTR_TO_JSON(IsAliyunNode, isAliyunNode_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_TO_JSON(RuntimeVersion, runtimeVersion_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCClusterNodesResponseBodyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DockerVersion, dockerVersion_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceRole, instanceRole_);
      DARABONBA_PTR_FROM_JSON(IpAddresses, ipAddresses_);
      DARABONBA_PTR_FROM_JSON(IsAliyunNode, isAliyunNode_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_FROM_JSON(RuntimeVersion, runtimeVersion_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribeRCClusterNodesResponseBodyNodes() = default ;
    DescribeRCClusterNodesResponseBodyNodes(const DescribeRCClusterNodesResponseBodyNodes &) = default ;
    DescribeRCClusterNodesResponseBodyNodes(DescribeRCClusterNodesResponseBodyNodes &&) = default ;
    DescribeRCClusterNodesResponseBodyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCClusterNodesResponseBodyNodes() = default ;
    DescribeRCClusterNodesResponseBodyNodes& operator=(const DescribeRCClusterNodesResponseBodyNodes &) = default ;
    DescribeRCClusterNodesResponseBodyNodes& operator=(DescribeRCClusterNodesResponseBodyNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->dockerVersion_ == nullptr && return this->imageId_ == nullptr && return this->instanceId_ == nullptr && return this->instanceRole_ == nullptr && return this->ipAddresses_ == nullptr
        && return this->isAliyunNode_ == nullptr && return this->nodeName_ == nullptr && return this->nodePoolId_ == nullptr && return this->nodeStatus_ == nullptr && return this->runtimeVersion_ == nullptr
        && return this->state_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRCClusterNodesResponseBodyNodes& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dockerVersion Field Functions 
    bool hasDockerVersion() const { return this->dockerVersion_ != nullptr;};
    void deleteDockerVersion() { this->dockerVersion_ = nullptr;};
    inline string dockerVersion() const { DARABONBA_PTR_GET_DEFAULT(dockerVersion_, "") };
    inline DescribeRCClusterNodesResponseBodyNodes& setDockerVersion(string dockerVersion) { DARABONBA_PTR_SET_VALUE(dockerVersion_, dockerVersion) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeRCClusterNodesResponseBodyNodes& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCClusterNodesResponseBodyNodes& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceRole Field Functions 
    bool hasInstanceRole() const { return this->instanceRole_ != nullptr;};
    void deleteInstanceRole() { this->instanceRole_ = nullptr;};
    inline string instanceRole() const { DARABONBA_PTR_GET_DEFAULT(instanceRole_, "") };
    inline DescribeRCClusterNodesResponseBodyNodes& setInstanceRole(string instanceRole) { DARABONBA_PTR_SET_VALUE(instanceRole_, instanceRole) };


    // ipAddresses Field Functions 
    bool hasIpAddresses() const { return this->ipAddresses_ != nullptr;};
    void deleteIpAddresses() { this->ipAddresses_ = nullptr;};
    inline const vector<string> & ipAddresses() const { DARABONBA_PTR_GET_CONST(ipAddresses_, vector<string>) };
    inline vector<string> ipAddresses() { DARABONBA_PTR_GET(ipAddresses_, vector<string>) };
    inline DescribeRCClusterNodesResponseBodyNodes& setIpAddresses(const vector<string> & ipAddresses) { DARABONBA_PTR_SET_VALUE(ipAddresses_, ipAddresses) };
    inline DescribeRCClusterNodesResponseBodyNodes& setIpAddresses(vector<string> && ipAddresses) { DARABONBA_PTR_SET_RVALUE(ipAddresses_, ipAddresses) };


    // isAliyunNode Field Functions 
    bool hasIsAliyunNode() const { return this->isAliyunNode_ != nullptr;};
    void deleteIsAliyunNode() { this->isAliyunNode_ = nullptr;};
    inline bool isAliyunNode() const { DARABONBA_PTR_GET_DEFAULT(isAliyunNode_, false) };
    inline DescribeRCClusterNodesResponseBodyNodes& setIsAliyunNode(bool isAliyunNode) { DARABONBA_PTR_SET_VALUE(isAliyunNode_, isAliyunNode) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeRCClusterNodesResponseBodyNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodePoolId Field Functions 
    bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
    void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
    inline string nodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
    inline DescribeRCClusterNodesResponseBodyNodes& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


    // nodeStatus Field Functions 
    bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
    void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
    inline string nodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
    inline DescribeRCClusterNodesResponseBodyNodes& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


    // runtimeVersion Field Functions 
    bool hasRuntimeVersion() const { return this->runtimeVersion_ != nullptr;};
    void deleteRuntimeVersion() { this->runtimeVersion_ = nullptr;};
    inline string runtimeVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeVersion_, "") };
    inline DescribeRCClusterNodesResponseBodyNodes& setRuntimeVersion(string runtimeVersion) { DARABONBA_PTR_SET_VALUE(runtimeVersion_, runtimeVersion) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeRCClusterNodesResponseBodyNodes& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The time when the node was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The container version.
    std::shared_ptr<string> dockerVersion_ = nullptr;
    // The image ID of the node.
    std::shared_ptr<string> imageId_ = nullptr;
    // The node ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The node role. Valid values:
    // 
    // *   **Master**: master node
    // *   **Worker**: worker node
    std::shared_ptr<string> instanceRole_ = nullptr;
    // The IP address.
    std::shared_ptr<vector<string>> ipAddresses_ = nullptr;
    // Indicates whether the node is provided by Alibaba Cloud. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isAliyunNode_ = nullptr;
    // The node name, which is the identifier of the RDS Custom node in the cluster.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The node pool ID.
    std::shared_ptr<string> nodePoolId_ = nullptr;
    // Indicates whether the node is ready. Valid values:
    // 
    // *   **Ready**: The node is ready.
    // *   **NotReady**: The node is not ready.
    // *   **Unknown**: The status of the node is unknown.
    // *   **Offline**: The node is offline.
    std::shared_ptr<string> nodeStatus_ = nullptr;
    // The runtime of the ACK cluster.
    std::shared_ptr<string> runtimeVersion_ = nullptr;
    // The node status. Valid values:
    // 
    // *   **pending**
    // *   **running**
    // *   **starting**
    // *   **stopping**
    // *   **stopped**
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
