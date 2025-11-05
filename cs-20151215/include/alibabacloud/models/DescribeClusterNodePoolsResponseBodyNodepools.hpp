// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsManagement.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsStatus.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepools& obj) { 
      DARABONBA_PTR_TO_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_TO_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_TO_JSON(interconnect_config, interconnectConfig_);
      DARABONBA_PTR_TO_JSON(interconnect_mode, interconnectMode_);
      DARABONBA_PTR_TO_JSON(kubernetes_config, kubernetesConfig_);
      DARABONBA_PTR_TO_JSON(management, management_);
      DARABONBA_PTR_TO_JSON(max_nodes, maxNodes_);
      DARABONBA_PTR_TO_JSON(node_components, nodeComponents_);
      DARABONBA_PTR_TO_JSON(node_config, nodeConfig_);
      DARABONBA_PTR_TO_JSON(nodepool_info, nodepoolInfo_);
      DARABONBA_PTR_TO_JSON(scaling_group, scalingGroup_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tee_config, teeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepools& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_FROM_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_FROM_JSON(interconnect_config, interconnectConfig_);
      DARABONBA_PTR_FROM_JSON(interconnect_mode, interconnectMode_);
      DARABONBA_PTR_FROM_JSON(kubernetes_config, kubernetesConfig_);
      DARABONBA_PTR_FROM_JSON(management, management_);
      DARABONBA_PTR_FROM_JSON(max_nodes, maxNodes_);
      DARABONBA_PTR_FROM_JSON(node_components, nodeComponents_);
      DARABONBA_PTR_FROM_JSON(node_config, nodeConfig_);
      DARABONBA_PTR_FROM_JSON(nodepool_info, nodepoolInfo_);
      DARABONBA_PTR_FROM_JSON(scaling_group, scalingGroup_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tee_config, teeConfig_);
    };
    DescribeClusterNodePoolsResponseBodyNodepools() = default ;
    DescribeClusterNodePoolsResponseBodyNodepools(const DescribeClusterNodePoolsResponseBodyNodepools &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepools(DescribeClusterNodePoolsResponseBodyNodepools &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepools() = default ;
    DescribeClusterNodePoolsResponseBodyNodepools& operator=(const DescribeClusterNodePoolsResponseBodyNodepools &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepools& operator=(DescribeClusterNodePoolsResponseBodyNodepools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoMode_ == nullptr
        && return this->autoScaling_ == nullptr && return this->interconnectConfig_ == nullptr && return this->interconnectMode_ == nullptr && return this->kubernetesConfig_ == nullptr && return this->management_ == nullptr
        && return this->maxNodes_ == nullptr && return this->nodeComponents_ == nullptr && return this->nodeConfig_ == nullptr && return this->nodepoolInfo_ == nullptr && return this->scalingGroup_ == nullptr
        && return this->status_ == nullptr && return this->teeConfig_ == nullptr; };
    // autoMode Field Functions 
    bool hasAutoMode() const { return this->autoMode_ != nullptr;};
    void deleteAutoMode() { this->autoMode_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode & autoMode() const { DARABONBA_PTR_GET_CONST(autoMode_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode autoMode() { DARABONBA_PTR_GET(autoMode_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setAutoMode(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode & autoMode) { DARABONBA_PTR_SET_VALUE(autoMode_, autoMode) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setAutoMode(Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode && autoMode) { DARABONBA_PTR_SET_RVALUE(autoMode_, autoMode) };


    // autoScaling Field Functions 
    bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
    void deleteAutoScaling() { this->autoScaling_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling & autoScaling() const { DARABONBA_PTR_GET_CONST(autoScaling_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling autoScaling() { DARABONBA_PTR_GET(autoScaling_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setAutoScaling(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling & autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setAutoScaling(Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling && autoScaling) { DARABONBA_PTR_SET_RVALUE(autoScaling_, autoScaling) };


    // interconnectConfig Field Functions 
    bool hasInterconnectConfig() const { return this->interconnectConfig_ != nullptr;};
    void deleteInterconnectConfig() { this->interconnectConfig_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig & interconnectConfig() const { DARABONBA_PTR_GET_CONST(interconnectConfig_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig interconnectConfig() { DARABONBA_PTR_GET(interconnectConfig_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setInterconnectConfig(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig & interconnectConfig) { DARABONBA_PTR_SET_VALUE(interconnectConfig_, interconnectConfig) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setInterconnectConfig(Models::DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig && interconnectConfig) { DARABONBA_PTR_SET_RVALUE(interconnectConfig_, interconnectConfig) };


    // interconnectMode Field Functions 
    bool hasInterconnectMode() const { return this->interconnectMode_ != nullptr;};
    void deleteInterconnectMode() { this->interconnectMode_ = nullptr;};
    inline string interconnectMode() const { DARABONBA_PTR_GET_DEFAULT(interconnectMode_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setInterconnectMode(string interconnectMode) { DARABONBA_PTR_SET_VALUE(interconnectMode_, interconnectMode) };


    // kubernetesConfig Field Functions 
    bool hasKubernetesConfig() const { return this->kubernetesConfig_ != nullptr;};
    void deleteKubernetesConfig() { this->kubernetesConfig_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig & kubernetesConfig() const { DARABONBA_PTR_GET_CONST(kubernetesConfig_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig kubernetesConfig() { DARABONBA_PTR_GET(kubernetesConfig_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setKubernetesConfig(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig & kubernetesConfig) { DARABONBA_PTR_SET_VALUE(kubernetesConfig_, kubernetesConfig) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setKubernetesConfig(Models::DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig && kubernetesConfig) { DARABONBA_PTR_SET_RVALUE(kubernetesConfig_, kubernetesConfig) };


    // management Field Functions 
    bool hasManagement() const { return this->management_ != nullptr;};
    void deleteManagement() { this->management_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagement & management() const { DARABONBA_PTR_GET_CONST(management_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagement) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagement management() { DARABONBA_PTR_GET(management_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagement) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setManagement(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagement & management) { DARABONBA_PTR_SET_VALUE(management_, management) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setManagement(Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagement && management) { DARABONBA_PTR_SET_RVALUE(management_, management) };


    // maxNodes Field Functions 
    bool hasMaxNodes() const { return this->maxNodes_ != nullptr;};
    void deleteMaxNodes() { this->maxNodes_ = nullptr;};
    inline int64_t maxNodes() const { DARABONBA_PTR_GET_DEFAULT(maxNodes_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setMaxNodes(int64_t maxNodes) { DARABONBA_PTR_SET_VALUE(maxNodes_, maxNodes) };


    // nodeComponents Field Functions 
    bool hasNodeComponents() const { return this->nodeComponents_ != nullptr;};
    void deleteNodeComponents() { this->nodeComponents_ = nullptr;};
    inline const vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents> & nodeComponents() const { DARABONBA_PTR_GET_CONST(nodeComponents_, vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents>) };
    inline vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents> nodeComponents() { DARABONBA_PTR_GET(nodeComponents_, vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents>) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setNodeComponents(const vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents> & nodeComponents) { DARABONBA_PTR_SET_VALUE(nodeComponents_, nodeComponents) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setNodeComponents(vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents> && nodeComponents) { DARABONBA_PTR_SET_RVALUE(nodeComponents_, nodeComponents) };


    // nodeConfig Field Functions 
    bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
    void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig & nodeConfig() const { DARABONBA_PTR_GET_CONST(nodeConfig_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig nodeConfig() { DARABONBA_PTR_GET(nodeConfig_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setNodeConfig(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig & nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setNodeConfig(Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig && nodeConfig) { DARABONBA_PTR_SET_RVALUE(nodeConfig_, nodeConfig) };


    // nodepoolInfo Field Functions 
    bool hasNodepoolInfo() const { return this->nodepoolInfo_ != nullptr;};
    void deleteNodepoolInfo() { this->nodepoolInfo_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo & nodepoolInfo() const { DARABONBA_PTR_GET_CONST(nodepoolInfo_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo nodepoolInfo() { DARABONBA_PTR_GET(nodepoolInfo_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setNodepoolInfo(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo & nodepoolInfo) { DARABONBA_PTR_SET_VALUE(nodepoolInfo_, nodepoolInfo) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setNodepoolInfo(Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo && nodepoolInfo) { DARABONBA_PTR_SET_RVALUE(nodepoolInfo_, nodepoolInfo) };


    // scalingGroup Field Functions 
    bool hasScalingGroup() const { return this->scalingGroup_ != nullptr;};
    void deleteScalingGroup() { this->scalingGroup_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup & scalingGroup() const { DARABONBA_PTR_GET_CONST(scalingGroup_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup scalingGroup() { DARABONBA_PTR_GET(scalingGroup_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setScalingGroup(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup & scalingGroup) { DARABONBA_PTR_SET_VALUE(scalingGroup_, scalingGroup) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setScalingGroup(Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup && scalingGroup) { DARABONBA_PTR_SET_RVALUE(scalingGroup_, scalingGroup) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsStatus & status() const { DARABONBA_PTR_GET_CONST(status_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsStatus) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsStatus status() { DARABONBA_PTR_GET(status_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsStatus) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setStatus(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setStatus(Models::DescribeClusterNodePoolsResponseBodyNodepoolsStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // teeConfig Field Functions 
    bool hasTeeConfig() const { return this->teeConfig_ != nullptr;};
    void deleteTeeConfig() { this->teeConfig_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig & teeConfig() const { DARABONBA_PTR_GET_CONST(teeConfig_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig teeConfig() { DARABONBA_PTR_GET(teeConfig_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setTeeConfig(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig & teeConfig) { DARABONBA_PTR_SET_VALUE(teeConfig_, teeConfig) };
    inline DescribeClusterNodePoolsResponseBodyNodepools& setTeeConfig(Models::DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig && teeConfig) { DARABONBA_PTR_SET_RVALUE(teeConfig_, teeConfig) };


  protected:
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoMode> autoMode_ = nullptr;
    // The configurations about auto scaling.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling> autoScaling_ = nullptr;
    // This parameter is discontinued.
    // 
    // The network configurations of the edge node pool. This parameter takes effect only on edge node pools.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsInterconnectConfig> interconnectConfig_ = nullptr;
    // The network type of the edge node pool. This parameter takes effect only if you set `type` of the node pool to `edge`. Valid values:
    // 
    // *   `basic`: Internet. Nodes in the node pool communicate with nodes in the cloud over the Internet. Applications deployed on the edge nodes cannot directly access virtual private clouds (VPCs) over the Internet.
    // *   `private`: private network. You can connect nodes in the node pool to the cloud by using Express Connect, VPN, or Cloud Enterprise Network (CEN). This greatly improves the quality and security of cloud-edge communication.
    std::shared_ptr<string> interconnectMode_ = nullptr;
    // The configurations of the cluster.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig> kubernetesConfig_ = nullptr;
    // The configuration of the managed node pool feature. The configuration takes effect only for ACK Pro managed clusters.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsManagement> management_ = nullptr;
    // The maximum number of nodes that can be created in the edge node pool. The value of this parameter must be greater than or equal to 0. A value of 0 indicates that the number of nodes in the node pool is limited only by the quota of nodes in the cluster. In most cases, this parameter is set to a value larger than 0 for edge node pools. This parameter is set to 0 for node pools whose types are ess or default edge node pools.
    std::shared_ptr<int64_t> maxNodes_ = nullptr;
    std::shared_ptr<vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeComponents>> nodeComponents_ = nullptr;
    // The configurations of nodes.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig> nodeConfig_ = nullptr;
    // The information about the node pool.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo> nodepoolInfo_ = nullptr;
    // The configurations of the scaling group that is used by the node pool.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup> scalingGroup_ = nullptr;
    // The status of the node pool.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsStatus> status_ = nullptr;
    // The configurations of confidential computing.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig> teeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
