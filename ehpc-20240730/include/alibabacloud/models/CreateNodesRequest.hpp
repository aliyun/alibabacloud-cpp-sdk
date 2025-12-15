// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NodeTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComputeNode, computeNode_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(HPCInterConnect, HPCInterConnect_);
      DARABONBA_PTR_TO_JSON(HostnamePrefix, hostnamePrefix_);
      DARABONBA_PTR_TO_JSON(HostnameSuffix, hostnameSuffix_);
      DARABONBA_PTR_TO_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(RamRole, ramRole_);
      DARABONBA_PTR_TO_JSON(ReservedNodePoolId, reservedNodePoolId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComputeNode, computeNode_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(HPCInterConnect, HPCInterConnect_);
      DARABONBA_PTR_FROM_JSON(HostnamePrefix, hostnamePrefix_);
      DARABONBA_PTR_FROM_JSON(HostnameSuffix, hostnameSuffix_);
      DARABONBA_PTR_FROM_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(RamRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(ReservedNodePoolId, reservedNodePoolId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateNodesRequest() = default ;
    CreateNodesRequest(const CreateNodesRequest &) = default ;
    CreateNodesRequest(CreateNodesRequest &&) = default ;
    CreateNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodesRequest() = default ;
    CreateNodesRequest& operator=(const CreateNodesRequest &) = default ;
    CreateNodesRequest& operator=(CreateNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->computeNode_ == nullptr && return this->count_ == nullptr && return this->deploymentSetId_ == nullptr && return this->HPCInterConnect_ == nullptr && return this->hostnamePrefix_ == nullptr
        && return this->hostnameSuffix_ == nullptr && return this->keepAlive_ == nullptr && return this->queueName_ == nullptr && return this->ramRole_ == nullptr && return this->reservedNodePoolId_ == nullptr
        && return this->vSwitchId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // computeNode Field Functions 
    bool hasComputeNode() const { return this->computeNode_ != nullptr;};
    void deleteComputeNode() { this->computeNode_ = nullptr;};
    inline const NodeTemplate & computeNode() const { DARABONBA_PTR_GET_CONST(computeNode_, NodeTemplate) };
    inline NodeTemplate computeNode() { DARABONBA_PTR_GET(computeNode_, NodeTemplate) };
    inline CreateNodesRequest& setComputeNode(const NodeTemplate & computeNode) { DARABONBA_PTR_SET_VALUE(computeNode_, computeNode) };
    inline CreateNodesRequest& setComputeNode(NodeTemplate && computeNode) { DARABONBA_PTR_SET_RVALUE(computeNode_, computeNode) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline CreateNodesRequest& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline CreateNodesRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // HPCInterConnect Field Functions 
    bool hasHPCInterConnect() const { return this->HPCInterConnect_ != nullptr;};
    void deleteHPCInterConnect() { this->HPCInterConnect_ = nullptr;};
    inline string HPCInterConnect() const { DARABONBA_PTR_GET_DEFAULT(HPCInterConnect_, "") };
    inline CreateNodesRequest& setHPCInterConnect(string HPCInterConnect) { DARABONBA_PTR_SET_VALUE(HPCInterConnect_, HPCInterConnect) };


    // hostnamePrefix Field Functions 
    bool hasHostnamePrefix() const { return this->hostnamePrefix_ != nullptr;};
    void deleteHostnamePrefix() { this->hostnamePrefix_ = nullptr;};
    inline string hostnamePrefix() const { DARABONBA_PTR_GET_DEFAULT(hostnamePrefix_, "") };
    inline CreateNodesRequest& setHostnamePrefix(string hostnamePrefix) { DARABONBA_PTR_SET_VALUE(hostnamePrefix_, hostnamePrefix) };


    // hostnameSuffix Field Functions 
    bool hasHostnameSuffix() const { return this->hostnameSuffix_ != nullptr;};
    void deleteHostnameSuffix() { this->hostnameSuffix_ = nullptr;};
    inline string hostnameSuffix() const { DARABONBA_PTR_GET_DEFAULT(hostnameSuffix_, "") };
    inline CreateNodesRequest& setHostnameSuffix(string hostnameSuffix) { DARABONBA_PTR_SET_VALUE(hostnameSuffix_, hostnameSuffix) };


    // keepAlive Field Functions 
    bool hasKeepAlive() const { return this->keepAlive_ != nullptr;};
    void deleteKeepAlive() { this->keepAlive_ = nullptr;};
    inline string keepAlive() const { DARABONBA_PTR_GET_DEFAULT(keepAlive_, "") };
    inline CreateNodesRequest& setKeepAlive(string keepAlive) { DARABONBA_PTR_SET_VALUE(keepAlive_, keepAlive) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateNodesRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline CreateNodesRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // reservedNodePoolId Field Functions 
    bool hasReservedNodePoolId() const { return this->reservedNodePoolId_ != nullptr;};
    void deleteReservedNodePoolId() { this->reservedNodePoolId_ = nullptr;};
    inline string reservedNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(reservedNodePoolId_, "") };
    inline CreateNodesRequest& setReservedNodePoolId(string reservedNodePoolId) { DARABONBA_PTR_SET_VALUE(reservedNodePoolId_, reservedNodePoolId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateNodesRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The hardware configurations of the compute nodes.
    std::shared_ptr<NodeTemplate> computeNode_ = nullptr;
    // The number of compute nodes that you want to add. Valid values: 1 to 99. The MinCount value must be smaller than the Count value.
    // 
    // *   If the number of available Elastic Compute Service (ECS) instances is smaller than the MinCount value, the nodes fail to be added.
    // *   If the number of available ECS instances is larger than the MinCount value but smaller than the Count value, nodes are added based on the MinCount value.
    // *   If the number of available ECS instances is larger than the Count value, nodes are added based on the Count value.
    std::shared_ptr<int32_t> count_ = nullptr;
    // Deployment set ID. You can obtain the deployment set ID through [DescribeDeploymentSets](https://help.aliyun.com/document_detail/91313.html). Currently, only deployment sets with a low network latency strategy are supported.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The type of the network between compute nodes. Valid values:
    // 
    // *   vpc
    // *   eRDMA
    std::shared_ptr<string> HPCInterConnect_ = nullptr;
    // The hostname prefix of the added compute nodes.
    std::shared_ptr<string> hostnamePrefix_ = nullptr;
    // The hostname suffix of the added compute nodes.
    std::shared_ptr<string> hostnameSuffix_ = nullptr;
    // Specifies whether to enable deletion protection for the added compute nodes.
    std::shared_ptr<string> keepAlive_ = nullptr;
    // The name of the queue for which you want to create compute nodes.
    std::shared_ptr<string> queueName_ = nullptr;
    // The Resource Access Management (RAM) role to be assumed by the added nodes.
    std::shared_ptr<string> ramRole_ = nullptr;
    // Preset node pool ID.
    std::shared_ptr<string> reservedNodePoolId_ = nullptr;
    // The ID of the vSwitch to be used by the added nodes.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
