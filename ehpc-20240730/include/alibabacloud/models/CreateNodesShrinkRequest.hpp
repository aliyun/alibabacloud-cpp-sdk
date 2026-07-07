// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComputeNode, computeNodeShrink_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(HPCInterConnect, HPCInterConnect_);
      DARABONBA_PTR_TO_JSON(HostnamePrefix, hostnamePrefix_);
      DARABONBA_PTR_TO_JSON(HostnameSuffix, hostnameSuffix_);
      DARABONBA_PTR_TO_JSON(Hostnames, hostnamesShrink_);
      DARABONBA_PTR_TO_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_TO_JSON(MinCount, minCount_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(RamRole, ramRole_);
      DARABONBA_PTR_TO_JSON(ReservedNodePoolId, reservedNodePoolId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComputeNode, computeNodeShrink_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(HPCInterConnect, HPCInterConnect_);
      DARABONBA_PTR_FROM_JSON(HostnamePrefix, hostnamePrefix_);
      DARABONBA_PTR_FROM_JSON(HostnameSuffix, hostnameSuffix_);
      DARABONBA_PTR_FROM_JSON(Hostnames, hostnamesShrink_);
      DARABONBA_PTR_FROM_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_FROM_JSON(MinCount, minCount_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(RamRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(ReservedNodePoolId, reservedNodePoolId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateNodesShrinkRequest() = default ;
    CreateNodesShrinkRequest(const CreateNodesShrinkRequest &) = default ;
    CreateNodesShrinkRequest(CreateNodesShrinkRequest &&) = default ;
    CreateNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodesShrinkRequest() = default ;
    CreateNodesShrinkRequest& operator=(const CreateNodesShrinkRequest &) = default ;
    CreateNodesShrinkRequest& operator=(CreateNodesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->computeNodeShrink_ == nullptr && this->count_ == nullptr && this->deploymentSetId_ == nullptr && this->HPCInterConnect_ == nullptr && this->hostnamePrefix_ == nullptr
        && this->hostnameSuffix_ == nullptr && this->hostnamesShrink_ == nullptr && this->keepAlive_ == nullptr && this->minCount_ == nullptr && this->queueName_ == nullptr
        && this->ramRole_ == nullptr && this->reservedNodePoolId_ == nullptr && this->vSwitchId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateNodesShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // computeNodeShrink Field Functions 
    bool hasComputeNodeShrink() const { return this->computeNodeShrink_ != nullptr;};
    void deleteComputeNodeShrink() { this->computeNodeShrink_ = nullptr;};
    inline string getComputeNodeShrink() const { DARABONBA_PTR_GET_DEFAULT(computeNodeShrink_, "") };
    inline CreateNodesShrinkRequest& setComputeNodeShrink(string computeNodeShrink) { DARABONBA_PTR_SET_VALUE(computeNodeShrink_, computeNodeShrink) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline CreateNodesShrinkRequest& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline CreateNodesShrinkRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // HPCInterConnect Field Functions 
    bool hasHPCInterConnect() const { return this->HPCInterConnect_ != nullptr;};
    void deleteHPCInterConnect() { this->HPCInterConnect_ = nullptr;};
    inline string getHPCInterConnect() const { DARABONBA_PTR_GET_DEFAULT(HPCInterConnect_, "") };
    inline CreateNodesShrinkRequest& setHPCInterConnect(string HPCInterConnect) { DARABONBA_PTR_SET_VALUE(HPCInterConnect_, HPCInterConnect) };


    // hostnamePrefix Field Functions 
    bool hasHostnamePrefix() const { return this->hostnamePrefix_ != nullptr;};
    void deleteHostnamePrefix() { this->hostnamePrefix_ = nullptr;};
    inline string getHostnamePrefix() const { DARABONBA_PTR_GET_DEFAULT(hostnamePrefix_, "") };
    inline CreateNodesShrinkRequest& setHostnamePrefix(string hostnamePrefix) { DARABONBA_PTR_SET_VALUE(hostnamePrefix_, hostnamePrefix) };


    // hostnameSuffix Field Functions 
    bool hasHostnameSuffix() const { return this->hostnameSuffix_ != nullptr;};
    void deleteHostnameSuffix() { this->hostnameSuffix_ = nullptr;};
    inline string getHostnameSuffix() const { DARABONBA_PTR_GET_DEFAULT(hostnameSuffix_, "") };
    inline CreateNodesShrinkRequest& setHostnameSuffix(string hostnameSuffix) { DARABONBA_PTR_SET_VALUE(hostnameSuffix_, hostnameSuffix) };


    // hostnamesShrink Field Functions 
    bool hasHostnamesShrink() const { return this->hostnamesShrink_ != nullptr;};
    void deleteHostnamesShrink() { this->hostnamesShrink_ = nullptr;};
    inline string getHostnamesShrink() const { DARABONBA_PTR_GET_DEFAULT(hostnamesShrink_, "") };
    inline CreateNodesShrinkRequest& setHostnamesShrink(string hostnamesShrink) { DARABONBA_PTR_SET_VALUE(hostnamesShrink_, hostnamesShrink) };


    // keepAlive Field Functions 
    bool hasKeepAlive() const { return this->keepAlive_ != nullptr;};
    void deleteKeepAlive() { this->keepAlive_ = nullptr;};
    inline string getKeepAlive() const { DARABONBA_PTR_GET_DEFAULT(keepAlive_, "") };
    inline CreateNodesShrinkRequest& setKeepAlive(string keepAlive) { DARABONBA_PTR_SET_VALUE(keepAlive_, keepAlive) };


    // minCount Field Functions 
    bool hasMinCount() const { return this->minCount_ != nullptr;};
    void deleteMinCount() { this->minCount_ = nullptr;};
    inline int32_t getMinCount() const { DARABONBA_PTR_GET_DEFAULT(minCount_, 0) };
    inline CreateNodesShrinkRequest& setMinCount(int32_t minCount) { DARABONBA_PTR_SET_VALUE(minCount_, minCount) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateNodesShrinkRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline CreateNodesShrinkRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // reservedNodePoolId Field Functions 
    bool hasReservedNodePoolId() const { return this->reservedNodePoolId_ != nullptr;};
    void deleteReservedNodePoolId() { this->reservedNodePoolId_ = nullptr;};
    inline string getReservedNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(reservedNodePoolId_, "") };
    inline CreateNodesShrinkRequest& setReservedNodePoolId(string reservedNodePoolId) { DARABONBA_PTR_SET_VALUE(reservedNodePoolId_, reservedNodePoolId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateNodesShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ID of the cluster.
    // 
    // You can call [ListClusters](https://help.aliyun.com/document_detail/87116.html) to query the cluster ID.
    shared_ptr<string> clusterId_ {};
    // The hardware configuration of the compute nodes.
    shared_ptr<string> computeNodeShrink_ {};
    // The number of compute nodes to add. Valid values: 1 to 99. The value must be greater than MinCount.
    // 
    // - If the available ECS inventory is less than MinCount, the node creation fails.
    // 
    // - If the available ECS inventory is greater than or equal to MinCount but less than Count, nodes are added based on the number specified by MinCount.
    // 
    // - If the available ECS inventory is greater than or equal to Count, nodes are added based on the number specified by Count.
    shared_ptr<int32_t> count_ {};
    // The ID of the deployment set.
    // You can call [DescribeDeploymentSets](https://help.aliyun.com/document_detail/91313.html) to query the deployment set ID. Only deployment sets that use the low network latency strategy are supported.
    shared_ptr<string> deploymentSetId_ {};
    // The network type for communication between compute nodes. Valid values:
    // - vpc
    // - eRDMA
    shared_ptr<string> HPCInterConnect_ {};
    // The hostname prefix of the compute nodes in the queue.
    shared_ptr<string> hostnamePrefix_ {};
    // The hostname suffix of the compute nodes in the queue.
    shared_ptr<string> hostnameSuffix_ {};
    shared_ptr<string> hostnamesShrink_ {};
    // Specifies whether deletion protection is enabled for the compute nodes.
    shared_ptr<string> keepAlive_ {};
    shared_ptr<int32_t> minCount_ {};
    // The name of the queue to which the compute nodes belong.
    shared_ptr<string> queueName_ {};
    // The name of the RAM role attached to the compute nodes in the queue.
    shared_ptr<string> ramRole_ {};
    // The ID of the reserved node pool.
    shared_ptr<string> reservedNodePoolId_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
