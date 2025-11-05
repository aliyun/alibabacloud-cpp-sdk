// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestAutoMode.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestAutoScaling.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestEfloNodeGroup.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestInterconnectConfig.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestKubernetesConfig.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestManagement.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterNodePoolRequestNodeComponents.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestNodeConfig.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestNodepoolInfo.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestScalingGroup.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestTeeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterNodePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_TO_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(eflo_node_group, efloNodeGroup_);
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
      DARABONBA_PTR_TO_JSON(tee_config, teeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_FROM_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(eflo_node_group, efloNodeGroup_);
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
      DARABONBA_PTR_FROM_JSON(tee_config, teeConfig_);
    };
    CreateClusterNodePoolRequest() = default ;
    CreateClusterNodePoolRequest(const CreateClusterNodePoolRequest &) = default ;
    CreateClusterNodePoolRequest(CreateClusterNodePoolRequest &&) = default ;
    CreateClusterNodePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequest() = default ;
    CreateClusterNodePoolRequest& operator=(const CreateClusterNodePoolRequest &) = default ;
    CreateClusterNodePoolRequest& operator=(CreateClusterNodePoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoMode_ == nullptr
        && return this->autoScaling_ == nullptr && return this->count_ == nullptr && return this->efloNodeGroup_ == nullptr && return this->hostNetwork_ == nullptr && return this->interconnectConfig_ == nullptr
        && return this->interconnectMode_ == nullptr && return this->intranet_ == nullptr && return this->kubernetesConfig_ == nullptr && return this->management_ == nullptr && return this->maxNodes_ == nullptr
        && return this->nodeComponents_ == nullptr && return this->nodeConfig_ == nullptr && return this->nodepoolInfo_ == nullptr && return this->scalingGroup_ == nullptr && return this->teeConfig_ == nullptr; };
    // autoMode Field Functions 
    bool hasAutoMode() const { return this->autoMode_ != nullptr;};
    void deleteAutoMode() { this->autoMode_ = nullptr;};
    inline const CreateClusterNodePoolRequestAutoMode & autoMode() const { DARABONBA_PTR_GET_CONST(autoMode_, CreateClusterNodePoolRequestAutoMode) };
    inline CreateClusterNodePoolRequestAutoMode autoMode() { DARABONBA_PTR_GET(autoMode_, CreateClusterNodePoolRequestAutoMode) };
    inline CreateClusterNodePoolRequest& setAutoMode(const CreateClusterNodePoolRequestAutoMode & autoMode) { DARABONBA_PTR_SET_VALUE(autoMode_, autoMode) };
    inline CreateClusterNodePoolRequest& setAutoMode(CreateClusterNodePoolRequestAutoMode && autoMode) { DARABONBA_PTR_SET_RVALUE(autoMode_, autoMode) };


    // autoScaling Field Functions 
    bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
    void deleteAutoScaling() { this->autoScaling_ = nullptr;};
    inline const CreateClusterNodePoolRequestAutoScaling & autoScaling() const { DARABONBA_PTR_GET_CONST(autoScaling_, CreateClusterNodePoolRequestAutoScaling) };
    inline CreateClusterNodePoolRequestAutoScaling autoScaling() { DARABONBA_PTR_GET(autoScaling_, CreateClusterNodePoolRequestAutoScaling) };
    inline CreateClusterNodePoolRequest& setAutoScaling(const CreateClusterNodePoolRequestAutoScaling & autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };
    inline CreateClusterNodePoolRequest& setAutoScaling(CreateClusterNodePoolRequestAutoScaling && autoScaling) { DARABONBA_PTR_SET_RVALUE(autoScaling_, autoScaling) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline CreateClusterNodePoolRequest& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // efloNodeGroup Field Functions 
    bool hasEfloNodeGroup() const { return this->efloNodeGroup_ != nullptr;};
    void deleteEfloNodeGroup() { this->efloNodeGroup_ = nullptr;};
    inline const CreateClusterNodePoolRequestEfloNodeGroup & efloNodeGroup() const { DARABONBA_PTR_GET_CONST(efloNodeGroup_, CreateClusterNodePoolRequestEfloNodeGroup) };
    inline CreateClusterNodePoolRequestEfloNodeGroup efloNodeGroup() { DARABONBA_PTR_GET(efloNodeGroup_, CreateClusterNodePoolRequestEfloNodeGroup) };
    inline CreateClusterNodePoolRequest& setEfloNodeGroup(const CreateClusterNodePoolRequestEfloNodeGroup & efloNodeGroup) { DARABONBA_PTR_SET_VALUE(efloNodeGroup_, efloNodeGroup) };
    inline CreateClusterNodePoolRequest& setEfloNodeGroup(CreateClusterNodePoolRequestEfloNodeGroup && efloNodeGroup) { DARABONBA_PTR_SET_RVALUE(efloNodeGroup_, efloNodeGroup) };


    // hostNetwork Field Functions 
    bool hasHostNetwork() const { return this->hostNetwork_ != nullptr;};
    void deleteHostNetwork() { this->hostNetwork_ = nullptr;};
    inline bool hostNetwork() const { DARABONBA_PTR_GET_DEFAULT(hostNetwork_, false) };
    inline CreateClusterNodePoolRequest& setHostNetwork(bool hostNetwork) { DARABONBA_PTR_SET_VALUE(hostNetwork_, hostNetwork) };


    // interconnectConfig Field Functions 
    bool hasInterconnectConfig() const { return this->interconnectConfig_ != nullptr;};
    void deleteInterconnectConfig() { this->interconnectConfig_ = nullptr;};
    inline const CreateClusterNodePoolRequestInterconnectConfig & interconnectConfig() const { DARABONBA_PTR_GET_CONST(interconnectConfig_, CreateClusterNodePoolRequestInterconnectConfig) };
    inline CreateClusterNodePoolRequestInterconnectConfig interconnectConfig() { DARABONBA_PTR_GET(interconnectConfig_, CreateClusterNodePoolRequestInterconnectConfig) };
    inline CreateClusterNodePoolRequest& setInterconnectConfig(const CreateClusterNodePoolRequestInterconnectConfig & interconnectConfig) { DARABONBA_PTR_SET_VALUE(interconnectConfig_, interconnectConfig) };
    inline CreateClusterNodePoolRequest& setInterconnectConfig(CreateClusterNodePoolRequestInterconnectConfig && interconnectConfig) { DARABONBA_PTR_SET_RVALUE(interconnectConfig_, interconnectConfig) };


    // interconnectMode Field Functions 
    bool hasInterconnectMode() const { return this->interconnectMode_ != nullptr;};
    void deleteInterconnectMode() { this->interconnectMode_ = nullptr;};
    inline string interconnectMode() const { DARABONBA_PTR_GET_DEFAULT(interconnectMode_, "") };
    inline CreateClusterNodePoolRequest& setInterconnectMode(string interconnectMode) { DARABONBA_PTR_SET_VALUE(interconnectMode_, interconnectMode) };


    // intranet Field Functions 
    bool hasIntranet() const { return this->intranet_ != nullptr;};
    void deleteIntranet() { this->intranet_ = nullptr;};
    inline bool intranet() const { DARABONBA_PTR_GET_DEFAULT(intranet_, false) };
    inline CreateClusterNodePoolRequest& setIntranet(bool intranet) { DARABONBA_PTR_SET_VALUE(intranet_, intranet) };


    // kubernetesConfig Field Functions 
    bool hasKubernetesConfig() const { return this->kubernetesConfig_ != nullptr;};
    void deleteKubernetesConfig() { this->kubernetesConfig_ = nullptr;};
    inline const CreateClusterNodePoolRequestKubernetesConfig & kubernetesConfig() const { DARABONBA_PTR_GET_CONST(kubernetesConfig_, CreateClusterNodePoolRequestKubernetesConfig) };
    inline CreateClusterNodePoolRequestKubernetesConfig kubernetesConfig() { DARABONBA_PTR_GET(kubernetesConfig_, CreateClusterNodePoolRequestKubernetesConfig) };
    inline CreateClusterNodePoolRequest& setKubernetesConfig(const CreateClusterNodePoolRequestKubernetesConfig & kubernetesConfig) { DARABONBA_PTR_SET_VALUE(kubernetesConfig_, kubernetesConfig) };
    inline CreateClusterNodePoolRequest& setKubernetesConfig(CreateClusterNodePoolRequestKubernetesConfig && kubernetesConfig) { DARABONBA_PTR_SET_RVALUE(kubernetesConfig_, kubernetesConfig) };


    // management Field Functions 
    bool hasManagement() const { return this->management_ != nullptr;};
    void deleteManagement() { this->management_ = nullptr;};
    inline const CreateClusterNodePoolRequestManagement & management() const { DARABONBA_PTR_GET_CONST(management_, CreateClusterNodePoolRequestManagement) };
    inline CreateClusterNodePoolRequestManagement management() { DARABONBA_PTR_GET(management_, CreateClusterNodePoolRequestManagement) };
    inline CreateClusterNodePoolRequest& setManagement(const CreateClusterNodePoolRequestManagement & management) { DARABONBA_PTR_SET_VALUE(management_, management) };
    inline CreateClusterNodePoolRequest& setManagement(CreateClusterNodePoolRequestManagement && management) { DARABONBA_PTR_SET_RVALUE(management_, management) };


    // maxNodes Field Functions 
    bool hasMaxNodes() const { return this->maxNodes_ != nullptr;};
    void deleteMaxNodes() { this->maxNodes_ = nullptr;};
    inline int64_t maxNodes() const { DARABONBA_PTR_GET_DEFAULT(maxNodes_, 0L) };
    inline CreateClusterNodePoolRequest& setMaxNodes(int64_t maxNodes) { DARABONBA_PTR_SET_VALUE(maxNodes_, maxNodes) };


    // nodeComponents Field Functions 
    bool hasNodeComponents() const { return this->nodeComponents_ != nullptr;};
    void deleteNodeComponents() { this->nodeComponents_ = nullptr;};
    inline const vector<CreateClusterNodePoolRequestNodeComponents> & nodeComponents() const { DARABONBA_PTR_GET_CONST(nodeComponents_, vector<CreateClusterNodePoolRequestNodeComponents>) };
    inline vector<CreateClusterNodePoolRequestNodeComponents> nodeComponents() { DARABONBA_PTR_GET(nodeComponents_, vector<CreateClusterNodePoolRequestNodeComponents>) };
    inline CreateClusterNodePoolRequest& setNodeComponents(const vector<CreateClusterNodePoolRequestNodeComponents> & nodeComponents) { DARABONBA_PTR_SET_VALUE(nodeComponents_, nodeComponents) };
    inline CreateClusterNodePoolRequest& setNodeComponents(vector<CreateClusterNodePoolRequestNodeComponents> && nodeComponents) { DARABONBA_PTR_SET_RVALUE(nodeComponents_, nodeComponents) };


    // nodeConfig Field Functions 
    bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
    void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
    inline const CreateClusterNodePoolRequestNodeConfig & nodeConfig() const { DARABONBA_PTR_GET_CONST(nodeConfig_, CreateClusterNodePoolRequestNodeConfig) };
    inline CreateClusterNodePoolRequestNodeConfig nodeConfig() { DARABONBA_PTR_GET(nodeConfig_, CreateClusterNodePoolRequestNodeConfig) };
    inline CreateClusterNodePoolRequest& setNodeConfig(const CreateClusterNodePoolRequestNodeConfig & nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };
    inline CreateClusterNodePoolRequest& setNodeConfig(CreateClusterNodePoolRequestNodeConfig && nodeConfig) { DARABONBA_PTR_SET_RVALUE(nodeConfig_, nodeConfig) };


    // nodepoolInfo Field Functions 
    bool hasNodepoolInfo() const { return this->nodepoolInfo_ != nullptr;};
    void deleteNodepoolInfo() { this->nodepoolInfo_ = nullptr;};
    inline const CreateClusterNodePoolRequestNodepoolInfo & nodepoolInfo() const { DARABONBA_PTR_GET_CONST(nodepoolInfo_, CreateClusterNodePoolRequestNodepoolInfo) };
    inline CreateClusterNodePoolRequestNodepoolInfo nodepoolInfo() { DARABONBA_PTR_GET(nodepoolInfo_, CreateClusterNodePoolRequestNodepoolInfo) };
    inline CreateClusterNodePoolRequest& setNodepoolInfo(const CreateClusterNodePoolRequestNodepoolInfo & nodepoolInfo) { DARABONBA_PTR_SET_VALUE(nodepoolInfo_, nodepoolInfo) };
    inline CreateClusterNodePoolRequest& setNodepoolInfo(CreateClusterNodePoolRequestNodepoolInfo && nodepoolInfo) { DARABONBA_PTR_SET_RVALUE(nodepoolInfo_, nodepoolInfo) };


    // scalingGroup Field Functions 
    bool hasScalingGroup() const { return this->scalingGroup_ != nullptr;};
    void deleteScalingGroup() { this->scalingGroup_ = nullptr;};
    inline const CreateClusterNodePoolRequestScalingGroup & scalingGroup() const { DARABONBA_PTR_GET_CONST(scalingGroup_, CreateClusterNodePoolRequestScalingGroup) };
    inline CreateClusterNodePoolRequestScalingGroup scalingGroup() { DARABONBA_PTR_GET(scalingGroup_, CreateClusterNodePoolRequestScalingGroup) };
    inline CreateClusterNodePoolRequest& setScalingGroup(const CreateClusterNodePoolRequestScalingGroup & scalingGroup) { DARABONBA_PTR_SET_VALUE(scalingGroup_, scalingGroup) };
    inline CreateClusterNodePoolRequest& setScalingGroup(CreateClusterNodePoolRequestScalingGroup && scalingGroup) { DARABONBA_PTR_SET_RVALUE(scalingGroup_, scalingGroup) };


    // teeConfig Field Functions 
    bool hasTeeConfig() const { return this->teeConfig_ != nullptr;};
    void deleteTeeConfig() { this->teeConfig_ = nullptr;};
    inline const CreateClusterNodePoolRequestTeeConfig & teeConfig() const { DARABONBA_PTR_GET_CONST(teeConfig_, CreateClusterNodePoolRequestTeeConfig) };
    inline CreateClusterNodePoolRequestTeeConfig teeConfig() { DARABONBA_PTR_GET(teeConfig_, CreateClusterNodePoolRequestTeeConfig) };
    inline CreateClusterNodePoolRequest& setTeeConfig(const CreateClusterNodePoolRequestTeeConfig & teeConfig) { DARABONBA_PTR_SET_VALUE(teeConfig_, teeConfig) };
    inline CreateClusterNodePoolRequest& setTeeConfig(CreateClusterNodePoolRequestTeeConfig && teeConfig) { DARABONBA_PTR_SET_RVALUE(teeConfig_, teeConfig) };


  protected:
    std::shared_ptr<CreateClusterNodePoolRequestAutoMode> autoMode_ = nullptr;
    // The configurations of auto scaling.
    std::shared_ptr<CreateClusterNodePoolRequestAutoScaling> autoScaling_ = nullptr;
    // This parameter is deprecated. Use the desired_size parameter instead.
    // 
    // The number of nodes in the node pool.
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<CreateClusterNodePoolRequestEfloNodeGroup> efloNodeGroup_ = nullptr;
    // Specifies whether to set the network type of the pod to host network.
    // 
    // *   `true`: sets to host network.
    // *   `false`: sets to container network.
    std::shared_ptr<bool> hostNetwork_ = nullptr;
    // This parameter is deprecated.
    // 
    // The configurations of the edge node pool.
    std::shared_ptr<CreateClusterNodePoolRequestInterconnectConfig> interconnectConfig_ = nullptr;
    // The network type of the edge node pool. This parameter takes effect only when the `type` of the node pool is set to `edge`. Valid values:
    // 
    // *   `basic`: Internet.
    // *   `private`: private network.
    std::shared_ptr<string> interconnectMode_ = nullptr;
    // Specifies whether all nodes in the edge node pool can communicate with each other at Layer 3.
    // 
    // *   `true`: The nodes in the edge node pool can communicate with each other at Layer 3.
    // *   `false`: The nodes in the edge node pool cannot communicate with each other at Layer 3.
    std::shared_ptr<bool> intranet_ = nullptr;
    // The configurations of the cluster.
    std::shared_ptr<CreateClusterNodePoolRequestKubernetesConfig> kubernetesConfig_ = nullptr;
    // The configurations of the managed node pool feature.
    std::shared_ptr<CreateClusterNodePoolRequestManagement> management_ = nullptr;
    // This parameter is deprecated.
    // 
    // The maximum number of nodes that can be contained in the edge node pool.
    std::shared_ptr<int64_t> maxNodes_ = nullptr;
    std::shared_ptr<vector<CreateClusterNodePoolRequestNodeComponents>> nodeComponents_ = nullptr;
    // The node configurations.
    std::shared_ptr<CreateClusterNodePoolRequestNodeConfig> nodeConfig_ = nullptr;
    // The configurations of the node pool.
    std::shared_ptr<CreateClusterNodePoolRequestNodepoolInfo> nodepoolInfo_ = nullptr;
    // The configurations of the scaling group that is used by the node pool.
    std::shared_ptr<CreateClusterNodePoolRequestScalingGroup> scalingGroup_ = nullptr;
    // The configurations of confidential computing for the cluster.
    std::shared_ptr<CreateClusterNodePoolRequestTeeConfig> teeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
