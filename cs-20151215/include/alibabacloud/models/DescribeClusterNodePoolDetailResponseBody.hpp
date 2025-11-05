// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyAutoMode.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyAutoScaling.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyInterconnectConfig.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyKubernetesConfig.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyManagement.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyNodeComponents.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyNodeConfig.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyNodepoolInfo.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyScalingGroup.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyStatus.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyTeeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_TO_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_TO_JSON(host_network, hostNetwork_);
      DARABONBA_PTR_TO_JSON(interconnect_config, interconnectConfig_);
      DARABONBA_PTR_TO_JSON(interconnect_mode, interconnectMode_);
      DARABONBA_PTR_TO_JSON(intranet, intranet_);
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
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_FROM_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_FROM_JSON(host_network, hostNetwork_);
      DARABONBA_PTR_FROM_JSON(interconnect_config, interconnectConfig_);
      DARABONBA_PTR_FROM_JSON(interconnect_mode, interconnectMode_);
      DARABONBA_PTR_FROM_JSON(intranet, intranet_);
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
    DescribeClusterNodePoolDetailResponseBody() = default ;
    DescribeClusterNodePoolDetailResponseBody(const DescribeClusterNodePoolDetailResponseBody &) = default ;
    DescribeClusterNodePoolDetailResponseBody(DescribeClusterNodePoolDetailResponseBody &&) = default ;
    DescribeClusterNodePoolDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBody() = default ;
    DescribeClusterNodePoolDetailResponseBody& operator=(const DescribeClusterNodePoolDetailResponseBody &) = default ;
    DescribeClusterNodePoolDetailResponseBody& operator=(DescribeClusterNodePoolDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoMode_ == nullptr
        && return this->autoScaling_ == nullptr && return this->hostNetwork_ == nullptr && return this->interconnectConfig_ == nullptr && return this->interconnectMode_ == nullptr && return this->intranet_ == nullptr
        && return this->kubernetesConfig_ == nullptr && return this->management_ == nullptr && return this->maxNodes_ == nullptr && return this->nodeComponents_ == nullptr && return this->nodeConfig_ == nullptr
        && return this->nodepoolInfo_ == nullptr && return this->scalingGroup_ == nullptr && return this->status_ == nullptr && return this->teeConfig_ == nullptr; };
    // autoMode Field Functions 
    bool hasAutoMode() const { return this->autoMode_ != nullptr;};
    void deleteAutoMode() { this->autoMode_ = nullptr;};
    inline const DescribeClusterNodePoolDetailResponseBodyAutoMode & autoMode() const { DARABONBA_PTR_GET_CONST(autoMode_, DescribeClusterNodePoolDetailResponseBodyAutoMode) };
    inline DescribeClusterNodePoolDetailResponseBodyAutoMode autoMode() { DARABONBA_PTR_GET(autoMode_, DescribeClusterNodePoolDetailResponseBodyAutoMode) };
    inline DescribeClusterNodePoolDetailResponseBody& setAutoMode(const DescribeClusterNodePoolDetailResponseBodyAutoMode & autoMode) { DARABONBA_PTR_SET_VALUE(autoMode_, autoMode) };
    inline DescribeClusterNodePoolDetailResponseBody& setAutoMode(DescribeClusterNodePoolDetailResponseBodyAutoMode && autoMode) { DARABONBA_PTR_SET_RVALUE(autoMode_, autoMode) };


    // autoScaling Field Functions 
    bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
    void deleteAutoScaling() { this->autoScaling_ = nullptr;};
    inline const DescribeClusterNodePoolDetailResponseBodyAutoScaling & autoScaling() const { DARABONBA_PTR_GET_CONST(autoScaling_, DescribeClusterNodePoolDetailResponseBodyAutoScaling) };
    inline DescribeClusterNodePoolDetailResponseBodyAutoScaling autoScaling() { DARABONBA_PTR_GET(autoScaling_, DescribeClusterNodePoolDetailResponseBodyAutoScaling) };
    inline DescribeClusterNodePoolDetailResponseBody& setAutoScaling(const DescribeClusterNodePoolDetailResponseBodyAutoScaling & autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };
    inline DescribeClusterNodePoolDetailResponseBody& setAutoScaling(DescribeClusterNodePoolDetailResponseBodyAutoScaling && autoScaling) { DARABONBA_PTR_SET_RVALUE(autoScaling_, autoScaling) };


    // hostNetwork Field Functions 
    bool hasHostNetwork() const { return this->hostNetwork_ != nullptr;};
    void deleteHostNetwork() { this->hostNetwork_ = nullptr;};
    inline bool hostNetwork() const { DARABONBA_PTR_GET_DEFAULT(hostNetwork_, false) };
    inline DescribeClusterNodePoolDetailResponseBody& setHostNetwork(bool hostNetwork) { DARABONBA_PTR_SET_VALUE(hostNetwork_, hostNetwork) };


    // interconnectConfig Field Functions 
    bool hasInterconnectConfig() const { return this->interconnectConfig_ != nullptr;};
    void deleteInterconnectConfig() { this->interconnectConfig_ = nullptr;};
    inline const DescribeClusterNodePoolDetailResponseBodyInterconnectConfig & interconnectConfig() const { DARABONBA_PTR_GET_CONST(interconnectConfig_, DescribeClusterNodePoolDetailResponseBodyInterconnectConfig) };
    inline DescribeClusterNodePoolDetailResponseBodyInterconnectConfig interconnectConfig() { DARABONBA_PTR_GET(interconnectConfig_, DescribeClusterNodePoolDetailResponseBodyInterconnectConfig) };
    inline DescribeClusterNodePoolDetailResponseBody& setInterconnectConfig(const DescribeClusterNodePoolDetailResponseBodyInterconnectConfig & interconnectConfig) { DARABONBA_PTR_SET_VALUE(interconnectConfig_, interconnectConfig) };
    inline DescribeClusterNodePoolDetailResponseBody& setInterconnectConfig(DescribeClusterNodePoolDetailResponseBodyInterconnectConfig && interconnectConfig) { DARABONBA_PTR_SET_RVALUE(interconnectConfig_, interconnectConfig) };


    // interconnectMode Field Functions 
    bool hasInterconnectMode() const { return this->interconnectMode_ != nullptr;};
    void deleteInterconnectMode() { this->interconnectMode_ = nullptr;};
    inline string interconnectMode() const { DARABONBA_PTR_GET_DEFAULT(interconnectMode_, "") };
    inline DescribeClusterNodePoolDetailResponseBody& setInterconnectMode(string interconnectMode) { DARABONBA_PTR_SET_VALUE(interconnectMode_, interconnectMode) };


    // intranet Field Functions 
    bool hasIntranet() const { return this->intranet_ != nullptr;};
    void deleteIntranet() { this->intranet_ = nullptr;};
    inline bool intranet() const { DARABONBA_PTR_GET_DEFAULT(intranet_, false) };
    inline DescribeClusterNodePoolDetailResponseBody& setIntranet(bool intranet) { DARABONBA_PTR_SET_VALUE(intranet_, intranet) };


    // kubernetesConfig Field Functions 
    bool hasKubernetesConfig() const { return this->kubernetesConfig_ != nullptr;};
    void deleteKubernetesConfig() { this->kubernetesConfig_ = nullptr;};
    inline const DescribeClusterNodePoolDetailResponseBodyKubernetesConfig & kubernetesConfig() const { DARABONBA_PTR_GET_CONST(kubernetesConfig_, DescribeClusterNodePoolDetailResponseBodyKubernetesConfig) };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig kubernetesConfig() { DARABONBA_PTR_GET(kubernetesConfig_, DescribeClusterNodePoolDetailResponseBodyKubernetesConfig) };
    inline DescribeClusterNodePoolDetailResponseBody& setKubernetesConfig(const DescribeClusterNodePoolDetailResponseBodyKubernetesConfig & kubernetesConfig) { DARABONBA_PTR_SET_VALUE(kubernetesConfig_, kubernetesConfig) };
    inline DescribeClusterNodePoolDetailResponseBody& setKubernetesConfig(DescribeClusterNodePoolDetailResponseBodyKubernetesConfig && kubernetesConfig) { DARABONBA_PTR_SET_RVALUE(kubernetesConfig_, kubernetesConfig) };


    // management Field Functions 
    bool hasManagement() const { return this->management_ != nullptr;};
    void deleteManagement() { this->management_ = nullptr;};
    inline const DescribeClusterNodePoolDetailResponseBodyManagement & management() const { DARABONBA_PTR_GET_CONST(management_, DescribeClusterNodePoolDetailResponseBodyManagement) };
    inline DescribeClusterNodePoolDetailResponseBodyManagement management() { DARABONBA_PTR_GET(management_, DescribeClusterNodePoolDetailResponseBodyManagement) };
    inline DescribeClusterNodePoolDetailResponseBody& setManagement(const DescribeClusterNodePoolDetailResponseBodyManagement & management) { DARABONBA_PTR_SET_VALUE(management_, management) };
    inline DescribeClusterNodePoolDetailResponseBody& setManagement(DescribeClusterNodePoolDetailResponseBodyManagement && management) { DARABONBA_PTR_SET_RVALUE(management_, management) };


    // maxNodes Field Functions 
    bool hasMaxNodes() const { return this->maxNodes_ != nullptr;};
    void deleteMaxNodes() { this->maxNodes_ = nullptr;};
    inline int64_t maxNodes() const { DARABONBA_PTR_GET_DEFAULT(maxNodes_, 0L) };
    inline DescribeClusterNodePoolDetailResponseBody& setMaxNodes(int64_t maxNodes) { DARABONBA_PTR_SET_VALUE(maxNodes_, maxNodes) };


    // nodeComponents Field Functions 
    bool hasNodeComponents() const { return this->nodeComponents_ != nullptr;};
    void deleteNodeComponents() { this->nodeComponents_ = nullptr;};
    inline const vector<DescribeClusterNodePoolDetailResponseBodyNodeComponents> & nodeComponents() const { DARABONBA_PTR_GET_CONST(nodeComponents_, vector<DescribeClusterNodePoolDetailResponseBodyNodeComponents>) };
    inline vector<DescribeClusterNodePoolDetailResponseBodyNodeComponents> nodeComponents() { DARABONBA_PTR_GET(nodeComponents_, vector<DescribeClusterNodePoolDetailResponseBodyNodeComponents>) };
    inline DescribeClusterNodePoolDetailResponseBody& setNodeComponents(const vector<DescribeClusterNodePoolDetailResponseBodyNodeComponents> & nodeComponents) { DARABONBA_PTR_SET_VALUE(nodeComponents_, nodeComponents) };
    inline DescribeClusterNodePoolDetailResponseBody& setNodeComponents(vector<DescribeClusterNodePoolDetailResponseBodyNodeComponents> && nodeComponents) { DARABONBA_PTR_SET_RVALUE(nodeComponents_, nodeComponents) };


    // nodeConfig Field Functions 
    bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
    void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
    inline const DescribeClusterNodePoolDetailResponseBodyNodeConfig & nodeConfig() const { DARABONBA_PTR_GET_CONST(nodeConfig_, DescribeClusterNodePoolDetailResponseBodyNodeConfig) };
    inline DescribeClusterNodePoolDetailResponseBodyNodeConfig nodeConfig() { DARABONBA_PTR_GET(nodeConfig_, DescribeClusterNodePoolDetailResponseBodyNodeConfig) };
    inline DescribeClusterNodePoolDetailResponseBody& setNodeConfig(const DescribeClusterNodePoolDetailResponseBodyNodeConfig & nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };
    inline DescribeClusterNodePoolDetailResponseBody& setNodeConfig(DescribeClusterNodePoolDetailResponseBodyNodeConfig && nodeConfig) { DARABONBA_PTR_SET_RVALUE(nodeConfig_, nodeConfig) };


    // nodepoolInfo Field Functions 
    bool hasNodepoolInfo() const { return this->nodepoolInfo_ != nullptr;};
    void deleteNodepoolInfo() { this->nodepoolInfo_ = nullptr;};
    inline const DescribeClusterNodePoolDetailResponseBodyNodepoolInfo & nodepoolInfo() const { DARABONBA_PTR_GET_CONST(nodepoolInfo_, DescribeClusterNodePoolDetailResponseBodyNodepoolInfo) };
    inline DescribeClusterNodePoolDetailResponseBodyNodepoolInfo nodepoolInfo() { DARABONBA_PTR_GET(nodepoolInfo_, DescribeClusterNodePoolDetailResponseBodyNodepoolInfo) };
    inline DescribeClusterNodePoolDetailResponseBody& setNodepoolInfo(const DescribeClusterNodePoolDetailResponseBodyNodepoolInfo & nodepoolInfo) { DARABONBA_PTR_SET_VALUE(nodepoolInfo_, nodepoolInfo) };
    inline DescribeClusterNodePoolDetailResponseBody& setNodepoolInfo(DescribeClusterNodePoolDetailResponseBodyNodepoolInfo && nodepoolInfo) { DARABONBA_PTR_SET_RVALUE(nodepoolInfo_, nodepoolInfo) };


    // scalingGroup Field Functions 
    bool hasScalingGroup() const { return this->scalingGroup_ != nullptr;};
    void deleteScalingGroup() { this->scalingGroup_ = nullptr;};
    inline const DescribeClusterNodePoolDetailResponseBodyScalingGroup & scalingGroup() const { DARABONBA_PTR_GET_CONST(scalingGroup_, DescribeClusterNodePoolDetailResponseBodyScalingGroup) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup scalingGroup() { DARABONBA_PTR_GET(scalingGroup_, DescribeClusterNodePoolDetailResponseBodyScalingGroup) };
    inline DescribeClusterNodePoolDetailResponseBody& setScalingGroup(const DescribeClusterNodePoolDetailResponseBodyScalingGroup & scalingGroup) { DARABONBA_PTR_SET_VALUE(scalingGroup_, scalingGroup) };
    inline DescribeClusterNodePoolDetailResponseBody& setScalingGroup(DescribeClusterNodePoolDetailResponseBodyScalingGroup && scalingGroup) { DARABONBA_PTR_SET_RVALUE(scalingGroup_, scalingGroup) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const DescribeClusterNodePoolDetailResponseBodyStatus & status() const { DARABONBA_PTR_GET_CONST(status_, DescribeClusterNodePoolDetailResponseBodyStatus) };
    inline DescribeClusterNodePoolDetailResponseBodyStatus status() { DARABONBA_PTR_GET(status_, DescribeClusterNodePoolDetailResponseBodyStatus) };
    inline DescribeClusterNodePoolDetailResponseBody& setStatus(const DescribeClusterNodePoolDetailResponseBodyStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline DescribeClusterNodePoolDetailResponseBody& setStatus(DescribeClusterNodePoolDetailResponseBodyStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // teeConfig Field Functions 
    bool hasTeeConfig() const { return this->teeConfig_ != nullptr;};
    void deleteTeeConfig() { this->teeConfig_ = nullptr;};
    inline const DescribeClusterNodePoolDetailResponseBodyTeeConfig & teeConfig() const { DARABONBA_PTR_GET_CONST(teeConfig_, DescribeClusterNodePoolDetailResponseBodyTeeConfig) };
    inline DescribeClusterNodePoolDetailResponseBodyTeeConfig teeConfig() { DARABONBA_PTR_GET(teeConfig_, DescribeClusterNodePoolDetailResponseBodyTeeConfig) };
    inline DescribeClusterNodePoolDetailResponseBody& setTeeConfig(const DescribeClusterNodePoolDetailResponseBodyTeeConfig & teeConfig) { DARABONBA_PTR_SET_VALUE(teeConfig_, teeConfig) };
    inline DescribeClusterNodePoolDetailResponseBody& setTeeConfig(DescribeClusterNodePoolDetailResponseBodyTeeConfig && teeConfig) { DARABONBA_PTR_SET_RVALUE(teeConfig_, teeConfig) };


  protected:
    std::shared_ptr<DescribeClusterNodePoolDetailResponseBodyAutoMode> autoMode_ = nullptr;
    // The auto scaling configuration of the node pool.
    std::shared_ptr<DescribeClusterNodePoolDetailResponseBodyAutoScaling> autoScaling_ = nullptr;
    // Indicates whether the pods in the edge node pool can use the host network.
    // 
    // `true`: sets to host network.
    // 
    // `false`: sets to container network.
    std::shared_ptr<bool> hostNetwork_ = nullptr;
    // The network configuration of the edge node pool. This parameter takes effect only for edge node pools.
    std::shared_ptr<DescribeClusterNodePoolDetailResponseBodyInterconnectConfig> interconnectConfig_ = nullptr;
    // The network type of the edge node pool. This parameter takes effect only if you set the type parameter of the node pool to edge. Valid values:
    // 
    // `basic`: Internet.
    // 
    // `private`: private network.
    std::shared_ptr<string> interconnectMode_ = nullptr;
    // Specifies whether all nodes in the edge node pool can communicate with each other at Layer 3.
    // 
    // `true`: The nodes in the edge node pool can communicate with each other at Layer 3.
    // 
    // `false`: The nodes in the edge node pool cannot communicate with each other at Layer 3.
    std::shared_ptr<bool> intranet_ = nullptr;
    // The configurations of the cluster in which the node pool is deployed.
    std::shared_ptr<DescribeClusterNodePoolDetailResponseBodyKubernetesConfig> kubernetesConfig_ = nullptr;
    // The configuration of the managed node pool feature.
    std::shared_ptr<DescribeClusterNodePoolDetailResponseBodyManagement> management_ = nullptr;
    // This parameter is deprecated.
    // 
    // The maximum number of nodes allowed in an edge node pool.
    std::shared_ptr<int64_t> maxNodes_ = nullptr;
    std::shared_ptr<vector<DescribeClusterNodePoolDetailResponseBodyNodeComponents>> nodeComponents_ = nullptr;
    // The node configurations.
    std::shared_ptr<DescribeClusterNodePoolDetailResponseBodyNodeConfig> nodeConfig_ = nullptr;
    // The configuration of the node pool.
    std::shared_ptr<DescribeClusterNodePoolDetailResponseBodyNodepoolInfo> nodepoolInfo_ = nullptr;
    // The configurations of the scaling group that is used by the node pool.
    std::shared_ptr<DescribeClusterNodePoolDetailResponseBodyScalingGroup> scalingGroup_ = nullptr;
    // The status details about the node pool.
    std::shared_ptr<DescribeClusterNodePoolDetailResponseBodyStatus> status_ = nullptr;
    // The configuration of confidential computing.
    std::shared_ptr<DescribeClusterNodePoolDetailResponseBodyTeeConfig> teeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
