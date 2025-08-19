// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPOOL_HPP_
#define ALIBABACLOUD_MODELS_NODEPOOL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NodepoolAutoScaling.hpp>
#include <alibabacloud/models/NodepoolInterconnectConfig.hpp>
#include <alibabacloud/models/NodepoolKubernetesConfig.hpp>
#include <alibabacloud/models/NodepoolManagement.hpp>
#include <alibabacloud/models/NodepoolNodeConfig.hpp>
#include <alibabacloud/models/NodepoolNodepoolInfo.hpp>
#include <alibabacloud/models/NodepoolScalingGroup.hpp>
#include <alibabacloud/models/NodepoolTeeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class Nodepool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Nodepool& obj) { 
      DARABONBA_PTR_TO_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(interconnect_config, interconnectConfig_);
      DARABONBA_PTR_TO_JSON(interconnect_mode, interconnectMode_);
      DARABONBA_PTR_TO_JSON(kubernetes_config, kubernetesConfig_);
      DARABONBA_PTR_TO_JSON(management, management_);
      DARABONBA_PTR_TO_JSON(max_nodes, maxNodes_);
      DARABONBA_PTR_TO_JSON(node_config, nodeConfig_);
      DARABONBA_PTR_TO_JSON(nodepool_info, nodepoolInfo_);
      DARABONBA_PTR_TO_JSON(scaling_group, scalingGroup_);
      DARABONBA_PTR_TO_JSON(tee_config, teeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, Nodepool& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(interconnect_config, interconnectConfig_);
      DARABONBA_PTR_FROM_JSON(interconnect_mode, interconnectMode_);
      DARABONBA_PTR_FROM_JSON(kubernetes_config, kubernetesConfig_);
      DARABONBA_PTR_FROM_JSON(management, management_);
      DARABONBA_PTR_FROM_JSON(max_nodes, maxNodes_);
      DARABONBA_PTR_FROM_JSON(node_config, nodeConfig_);
      DARABONBA_PTR_FROM_JSON(nodepool_info, nodepoolInfo_);
      DARABONBA_PTR_FROM_JSON(scaling_group, scalingGroup_);
      DARABONBA_PTR_FROM_JSON(tee_config, teeConfig_);
    };
    Nodepool() = default ;
    Nodepool(const Nodepool &) = default ;
    Nodepool(Nodepool &&) = default ;
    Nodepool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Nodepool() = default ;
    Nodepool& operator=(const Nodepool &) = default ;
    Nodepool& operator=(Nodepool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoScaling_ != nullptr
        && this->count_ != nullptr && this->interconnectConfig_ != nullptr && this->interconnectMode_ != nullptr && this->kubernetesConfig_ != nullptr && this->management_ != nullptr
        && this->maxNodes_ != nullptr && this->nodeConfig_ != nullptr && this->nodepoolInfo_ != nullptr && this->scalingGroup_ != nullptr && this->teeConfig_ != nullptr; };
    // autoScaling Field Functions 
    bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
    void deleteAutoScaling() { this->autoScaling_ = nullptr;};
    inline const NodepoolAutoScaling & autoScaling() const { DARABONBA_PTR_GET_CONST(autoScaling_, NodepoolAutoScaling) };
    inline NodepoolAutoScaling autoScaling() { DARABONBA_PTR_GET(autoScaling_, NodepoolAutoScaling) };
    inline Nodepool& setAutoScaling(const NodepoolAutoScaling & autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };
    inline Nodepool& setAutoScaling(NodepoolAutoScaling && autoScaling) { DARABONBA_PTR_SET_RVALUE(autoScaling_, autoScaling) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline Nodepool& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // interconnectConfig Field Functions 
    bool hasInterconnectConfig() const { return this->interconnectConfig_ != nullptr;};
    void deleteInterconnectConfig() { this->interconnectConfig_ = nullptr;};
    inline const NodepoolInterconnectConfig & interconnectConfig() const { DARABONBA_PTR_GET_CONST(interconnectConfig_, NodepoolInterconnectConfig) };
    inline NodepoolInterconnectConfig interconnectConfig() { DARABONBA_PTR_GET(interconnectConfig_, NodepoolInterconnectConfig) };
    inline Nodepool& setInterconnectConfig(const NodepoolInterconnectConfig & interconnectConfig) { DARABONBA_PTR_SET_VALUE(interconnectConfig_, interconnectConfig) };
    inline Nodepool& setInterconnectConfig(NodepoolInterconnectConfig && interconnectConfig) { DARABONBA_PTR_SET_RVALUE(interconnectConfig_, interconnectConfig) };


    // interconnectMode Field Functions 
    bool hasInterconnectMode() const { return this->interconnectMode_ != nullptr;};
    void deleteInterconnectMode() { this->interconnectMode_ = nullptr;};
    inline string interconnectMode() const { DARABONBA_PTR_GET_DEFAULT(interconnectMode_, "") };
    inline Nodepool& setInterconnectMode(string interconnectMode) { DARABONBA_PTR_SET_VALUE(interconnectMode_, interconnectMode) };


    // kubernetesConfig Field Functions 
    bool hasKubernetesConfig() const { return this->kubernetesConfig_ != nullptr;};
    void deleteKubernetesConfig() { this->kubernetesConfig_ = nullptr;};
    inline const NodepoolKubernetesConfig & kubernetesConfig() const { DARABONBA_PTR_GET_CONST(kubernetesConfig_, NodepoolKubernetesConfig) };
    inline NodepoolKubernetesConfig kubernetesConfig() { DARABONBA_PTR_GET(kubernetesConfig_, NodepoolKubernetesConfig) };
    inline Nodepool& setKubernetesConfig(const NodepoolKubernetesConfig & kubernetesConfig) { DARABONBA_PTR_SET_VALUE(kubernetesConfig_, kubernetesConfig) };
    inline Nodepool& setKubernetesConfig(NodepoolKubernetesConfig && kubernetesConfig) { DARABONBA_PTR_SET_RVALUE(kubernetesConfig_, kubernetesConfig) };


    // management Field Functions 
    bool hasManagement() const { return this->management_ != nullptr;};
    void deleteManagement() { this->management_ = nullptr;};
    inline const NodepoolManagement & management() const { DARABONBA_PTR_GET_CONST(management_, NodepoolManagement) };
    inline NodepoolManagement management() { DARABONBA_PTR_GET(management_, NodepoolManagement) };
    inline Nodepool& setManagement(const NodepoolManagement & management) { DARABONBA_PTR_SET_VALUE(management_, management) };
    inline Nodepool& setManagement(NodepoolManagement && management) { DARABONBA_PTR_SET_RVALUE(management_, management) };


    // maxNodes Field Functions 
    bool hasMaxNodes() const { return this->maxNodes_ != nullptr;};
    void deleteMaxNodes() { this->maxNodes_ = nullptr;};
    inline int64_t maxNodes() const { DARABONBA_PTR_GET_DEFAULT(maxNodes_, 0L) };
    inline Nodepool& setMaxNodes(int64_t maxNodes) { DARABONBA_PTR_SET_VALUE(maxNodes_, maxNodes) };


    // nodeConfig Field Functions 
    bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
    void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
    inline const NodepoolNodeConfig & nodeConfig() const { DARABONBA_PTR_GET_CONST(nodeConfig_, NodepoolNodeConfig) };
    inline NodepoolNodeConfig nodeConfig() { DARABONBA_PTR_GET(nodeConfig_, NodepoolNodeConfig) };
    inline Nodepool& setNodeConfig(const NodepoolNodeConfig & nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };
    inline Nodepool& setNodeConfig(NodepoolNodeConfig && nodeConfig) { DARABONBA_PTR_SET_RVALUE(nodeConfig_, nodeConfig) };


    // nodepoolInfo Field Functions 
    bool hasNodepoolInfo() const { return this->nodepoolInfo_ != nullptr;};
    void deleteNodepoolInfo() { this->nodepoolInfo_ = nullptr;};
    inline const NodepoolNodepoolInfo & nodepoolInfo() const { DARABONBA_PTR_GET_CONST(nodepoolInfo_, NodepoolNodepoolInfo) };
    inline NodepoolNodepoolInfo nodepoolInfo() { DARABONBA_PTR_GET(nodepoolInfo_, NodepoolNodepoolInfo) };
    inline Nodepool& setNodepoolInfo(const NodepoolNodepoolInfo & nodepoolInfo) { DARABONBA_PTR_SET_VALUE(nodepoolInfo_, nodepoolInfo) };
    inline Nodepool& setNodepoolInfo(NodepoolNodepoolInfo && nodepoolInfo) { DARABONBA_PTR_SET_RVALUE(nodepoolInfo_, nodepoolInfo) };


    // scalingGroup Field Functions 
    bool hasScalingGroup() const { return this->scalingGroup_ != nullptr;};
    void deleteScalingGroup() { this->scalingGroup_ = nullptr;};
    inline const NodepoolScalingGroup & scalingGroup() const { DARABONBA_PTR_GET_CONST(scalingGroup_, NodepoolScalingGroup) };
    inline NodepoolScalingGroup scalingGroup() { DARABONBA_PTR_GET(scalingGroup_, NodepoolScalingGroup) };
    inline Nodepool& setScalingGroup(const NodepoolScalingGroup & scalingGroup) { DARABONBA_PTR_SET_VALUE(scalingGroup_, scalingGroup) };
    inline Nodepool& setScalingGroup(NodepoolScalingGroup && scalingGroup) { DARABONBA_PTR_SET_RVALUE(scalingGroup_, scalingGroup) };


    // teeConfig Field Functions 
    bool hasTeeConfig() const { return this->teeConfig_ != nullptr;};
    void deleteTeeConfig() { this->teeConfig_ = nullptr;};
    inline const NodepoolTeeConfig & teeConfig() const { DARABONBA_PTR_GET_CONST(teeConfig_, NodepoolTeeConfig) };
    inline NodepoolTeeConfig teeConfig() { DARABONBA_PTR_GET(teeConfig_, NodepoolTeeConfig) };
    inline Nodepool& setTeeConfig(const NodepoolTeeConfig & teeConfig) { DARABONBA_PTR_SET_VALUE(teeConfig_, teeConfig) };
    inline Nodepool& setTeeConfig(NodepoolTeeConfig && teeConfig) { DARABONBA_PTR_SET_RVALUE(teeConfig_, teeConfig) };


  protected:
    std::shared_ptr<NodepoolAutoScaling> autoScaling_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<NodepoolInterconnectConfig> interconnectConfig_ = nullptr;
    std::shared_ptr<string> interconnectMode_ = nullptr;
    std::shared_ptr<NodepoolKubernetesConfig> kubernetesConfig_ = nullptr;
    std::shared_ptr<NodepoolManagement> management_ = nullptr;
    std::shared_ptr<int64_t> maxNodes_ = nullptr;
    std::shared_ptr<NodepoolNodeConfig> nodeConfig_ = nullptr;
    std::shared_ptr<NodepoolNodepoolInfo> nodepoolInfo_ = nullptr;
    std::shared_ptr<NodepoolScalingGroup> scalingGroup_ = nullptr;
    std::shared_ptr<NodepoolTeeConfig> teeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
