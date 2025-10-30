// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODESRESPONSEBODYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODESRESPONSEBODYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodesResponseBodyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodesResponseBodyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(creation_time, creationTime_);
      DARABONBA_PTR_TO_JSON(error_message, errorMessage_);
      DARABONBA_PTR_TO_JSON(expired_time, expiredTime_);
      DARABONBA_PTR_TO_JSON(host_name, hostName_);
      DARABONBA_PTR_TO_JSON(image_id, imageId_);
      DARABONBA_PTR_TO_JSON(instance_charge_type, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
      DARABONBA_PTR_TO_JSON(instance_name, instanceName_);
      DARABONBA_PTR_TO_JSON(instance_role, instanceRole_);
      DARABONBA_PTR_TO_JSON(instance_status, instanceStatus_);
      DARABONBA_PTR_TO_JSON(instance_type, instanceType_);
      DARABONBA_PTR_TO_JSON(instance_type_family, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(ip_address, ipAddress_);
      DARABONBA_PTR_TO_JSON(is_aliyun_node, isAliyunNode_);
      DARABONBA_PTR_TO_JSON(node_name, nodeName_);
      DARABONBA_PTR_TO_JSON(node_status, nodeStatus_);
      DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(spot_strategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodesResponseBodyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(creation_time, creationTime_);
      DARABONBA_PTR_FROM_JSON(error_message, errorMessage_);
      DARABONBA_PTR_FROM_JSON(expired_time, expiredTime_);
      DARABONBA_PTR_FROM_JSON(host_name, hostName_);
      DARABONBA_PTR_FROM_JSON(image_id, imageId_);
      DARABONBA_PTR_FROM_JSON(instance_charge_type, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
      DARABONBA_PTR_FROM_JSON(instance_name, instanceName_);
      DARABONBA_PTR_FROM_JSON(instance_role, instanceRole_);
      DARABONBA_PTR_FROM_JSON(instance_status, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(instance_type, instanceType_);
      DARABONBA_PTR_FROM_JSON(instance_type_family, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(ip_address, ipAddress_);
      DARABONBA_PTR_FROM_JSON(is_aliyun_node, isAliyunNode_);
      DARABONBA_PTR_FROM_JSON(node_name, nodeName_);
      DARABONBA_PTR_FROM_JSON(node_status, nodeStatus_);
      DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(spot_strategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    DescribeClusterNodesResponseBodyNodes() = default ;
    DescribeClusterNodesResponseBodyNodes(const DescribeClusterNodesResponseBodyNodes &) = default ;
    DescribeClusterNodesResponseBodyNodes(DescribeClusterNodesResponseBodyNodes &&) = default ;
    DescribeClusterNodesResponseBodyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodesResponseBodyNodes() = default ;
    DescribeClusterNodesResponseBodyNodes& operator=(const DescribeClusterNodesResponseBodyNodes &) = default ;
    DescribeClusterNodesResponseBodyNodes& operator=(DescribeClusterNodesResponseBodyNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->errorMessage_ == nullptr && return this->expiredTime_ == nullptr && return this->hostName_ == nullptr && return this->imageId_ == nullptr && return this->instanceChargeType_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instanceRole_ == nullptr && return this->instanceStatus_ == nullptr && return this->instanceType_ == nullptr
        && return this->instanceTypeFamily_ == nullptr && return this->ipAddress_ == nullptr && return this->isAliyunNode_ == nullptr && return this->nodeName_ == nullptr && return this->nodeStatus_ == nullptr
        && return this->nodepoolId_ == nullptr && return this->source_ == nullptr && return this->spotStrategy_ == nullptr && return this->state_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceRole Field Functions 
    bool hasInstanceRole() const { return this->instanceRole_ != nullptr;};
    void deleteInstanceRole() { this->instanceRole_ = nullptr;};
    inline string instanceRole() const { DARABONBA_PTR_GET_DEFAULT(instanceRole_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setInstanceRole(string instanceRole) { DARABONBA_PTR_SET_VALUE(instanceRole_, instanceRole) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline const vector<string> & ipAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
    inline vector<string> ipAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
    inline DescribeClusterNodesResponseBodyNodes& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
    inline DescribeClusterNodesResponseBodyNodes& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


    // isAliyunNode Field Functions 
    bool hasIsAliyunNode() const { return this->isAliyunNode_ != nullptr;};
    void deleteIsAliyunNode() { this->isAliyunNode_ = nullptr;};
    inline bool isAliyunNode() const { DARABONBA_PTR_GET_DEFAULT(isAliyunNode_, false) };
    inline DescribeClusterNodesResponseBodyNodes& setIsAliyunNode(bool isAliyunNode) { DARABONBA_PTR_SET_VALUE(isAliyunNode_, isAliyunNode) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeStatus Field Functions 
    bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
    void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
    inline string nodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string nodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClusterNodesResponseBodyNodes& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The time when the node was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The error message generated when the node was created.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The expiration date of the node.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The name of the host.
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the system image that is used by the node.
    std::shared_ptr<string> imageId_ = nullptr;
    // The billing method of the node. Valid values:
    // 
    // *   `PrePaid`: the subscription billing method. If the value is PrePaid, make sure that you have a sufficient balance or credit in your account. Otherwise, an `InvalidPayMethod` error is returned.
    // *   `PostPaid`: the pay-as-you-go billing method.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance on which the node is deployed.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The role of the node. Valid values:
    // 
    // *   Master: master node
    // *   Worker: worker node
    std::shared_ptr<string> instanceRole_ = nullptr;
    // The status of the node.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The type of the node.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The ECS instance family of the node.
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // The IP address of the node.
    std::shared_ptr<vector<string>> ipAddress_ = nullptr;
    // Indicates whether the instance on which the node is deployed is provided by Alibaba Cloud. Valid values:
    // 
    // *   `true`: The instance is provided by Alibaba Cloud.
    // *   `false`: The instance is not provided by Alibaba Cloud.
    std::shared_ptr<bool> isAliyunNode_ = nullptr;
    // The name of the node. This name is the identifier of the node in the cluster.
    std::shared_ptr<string> nodeName_ = nullptr;
    // Indicates whether the node is ready. Valid values:
    // 
    // *   `Ready`: The node is ready.
    // *   `NotReady`: The node is not ready.
    // *   `Unknown`: The status of the node is unknown.
    // *   `Offline`: The node is offline.
    std::shared_ptr<string> nodeStatus_ = nullptr;
    // The node pool ID.
    std::shared_ptr<string> nodepoolId_ = nullptr;
    // Indicates how the node is initialized. A node can be manually created or created by using Resource Orchestration Service (ROS).
    std::shared_ptr<string> source_ = nullptr;
    // The type of preemptible instance. Valid values:
    // 
    // *   NoSpot: a non-preemptible instance.
    // *   SpotWithPriceLimit: a preemptible instance that is configured with the highest bid price.
    // *   SpotAsPriceGo: a preemptible instance for which the system automatically bids based on the current market price.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The status of the node. Valid values:
    // 
    // *   `pending`: The node is being created.
    // *   `running`: The node is running.
    // *   `starting`: The node is being started.
    // *   `stopping`: The node is being stopped.
    // *   `stopped`: The node is stopped.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
