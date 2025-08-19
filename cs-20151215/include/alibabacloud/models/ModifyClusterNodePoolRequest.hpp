// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyClusterNodePoolRequestAutoScaling.hpp>
#include <alibabacloud/models/ModifyClusterNodePoolRequestKubernetesConfig.hpp>
#include <alibabacloud/models/ModifyClusterNodePoolRequestManagement.hpp>
#include <alibabacloud/models/ModifyClusterNodePoolRequestNodepoolInfo.hpp>
#include <alibabacloud/models/ModifyClusterNodePoolRequestScalingGroup.hpp>
#include <alibabacloud/models/ModifyClusterNodePoolRequestTeeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_TO_JSON(concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(kubernetes_config, kubernetesConfig_);
      DARABONBA_PTR_TO_JSON(management, management_);
      DARABONBA_PTR_TO_JSON(nodepool_info, nodepoolInfo_);
      DARABONBA_PTR_TO_JSON(scaling_group, scalingGroup_);
      DARABONBA_PTR_TO_JSON(tee_config, teeConfig_);
      DARABONBA_PTR_TO_JSON(update_nodes, updateNodes_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_FROM_JSON(concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(kubernetes_config, kubernetesConfig_);
      DARABONBA_PTR_FROM_JSON(management, management_);
      DARABONBA_PTR_FROM_JSON(nodepool_info, nodepoolInfo_);
      DARABONBA_PTR_FROM_JSON(scaling_group, scalingGroup_);
      DARABONBA_PTR_FROM_JSON(tee_config, teeConfig_);
      DARABONBA_PTR_FROM_JSON(update_nodes, updateNodes_);
    };
    ModifyClusterNodePoolRequest() = default ;
    ModifyClusterNodePoolRequest(const ModifyClusterNodePoolRequest &) = default ;
    ModifyClusterNodePoolRequest(ModifyClusterNodePoolRequest &&) = default ;
    ModifyClusterNodePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequest() = default ;
    ModifyClusterNodePoolRequest& operator=(const ModifyClusterNodePoolRequest &) = default ;
    ModifyClusterNodePoolRequest& operator=(ModifyClusterNodePoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoScaling_ != nullptr
        && this->concurrency_ != nullptr && this->kubernetesConfig_ != nullptr && this->management_ != nullptr && this->nodepoolInfo_ != nullptr && this->scalingGroup_ != nullptr
        && this->teeConfig_ != nullptr && this->updateNodes_ != nullptr; };
    // autoScaling Field Functions 
    bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
    void deleteAutoScaling() { this->autoScaling_ = nullptr;};
    inline const ModifyClusterNodePoolRequestAutoScaling & autoScaling() const { DARABONBA_PTR_GET_CONST(autoScaling_, ModifyClusterNodePoolRequestAutoScaling) };
    inline ModifyClusterNodePoolRequestAutoScaling autoScaling() { DARABONBA_PTR_GET(autoScaling_, ModifyClusterNodePoolRequestAutoScaling) };
    inline ModifyClusterNodePoolRequest& setAutoScaling(const ModifyClusterNodePoolRequestAutoScaling & autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };
    inline ModifyClusterNodePoolRequest& setAutoScaling(ModifyClusterNodePoolRequestAutoScaling && autoScaling) { DARABONBA_PTR_SET_RVALUE(autoScaling_, autoScaling) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline bool concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, false) };
    inline ModifyClusterNodePoolRequest& setConcurrency(bool concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // kubernetesConfig Field Functions 
    bool hasKubernetesConfig() const { return this->kubernetesConfig_ != nullptr;};
    void deleteKubernetesConfig() { this->kubernetesConfig_ = nullptr;};
    inline const ModifyClusterNodePoolRequestKubernetesConfig & kubernetesConfig() const { DARABONBA_PTR_GET_CONST(kubernetesConfig_, ModifyClusterNodePoolRequestKubernetesConfig) };
    inline ModifyClusterNodePoolRequestKubernetesConfig kubernetesConfig() { DARABONBA_PTR_GET(kubernetesConfig_, ModifyClusterNodePoolRequestKubernetesConfig) };
    inline ModifyClusterNodePoolRequest& setKubernetesConfig(const ModifyClusterNodePoolRequestKubernetesConfig & kubernetesConfig) { DARABONBA_PTR_SET_VALUE(kubernetesConfig_, kubernetesConfig) };
    inline ModifyClusterNodePoolRequest& setKubernetesConfig(ModifyClusterNodePoolRequestKubernetesConfig && kubernetesConfig) { DARABONBA_PTR_SET_RVALUE(kubernetesConfig_, kubernetesConfig) };


    // management Field Functions 
    bool hasManagement() const { return this->management_ != nullptr;};
    void deleteManagement() { this->management_ = nullptr;};
    inline const ModifyClusterNodePoolRequestManagement & management() const { DARABONBA_PTR_GET_CONST(management_, ModifyClusterNodePoolRequestManagement) };
    inline ModifyClusterNodePoolRequestManagement management() { DARABONBA_PTR_GET(management_, ModifyClusterNodePoolRequestManagement) };
    inline ModifyClusterNodePoolRequest& setManagement(const ModifyClusterNodePoolRequestManagement & management) { DARABONBA_PTR_SET_VALUE(management_, management) };
    inline ModifyClusterNodePoolRequest& setManagement(ModifyClusterNodePoolRequestManagement && management) { DARABONBA_PTR_SET_RVALUE(management_, management) };


    // nodepoolInfo Field Functions 
    bool hasNodepoolInfo() const { return this->nodepoolInfo_ != nullptr;};
    void deleteNodepoolInfo() { this->nodepoolInfo_ = nullptr;};
    inline const ModifyClusterNodePoolRequestNodepoolInfo & nodepoolInfo() const { DARABONBA_PTR_GET_CONST(nodepoolInfo_, ModifyClusterNodePoolRequestNodepoolInfo) };
    inline ModifyClusterNodePoolRequestNodepoolInfo nodepoolInfo() { DARABONBA_PTR_GET(nodepoolInfo_, ModifyClusterNodePoolRequestNodepoolInfo) };
    inline ModifyClusterNodePoolRequest& setNodepoolInfo(const ModifyClusterNodePoolRequestNodepoolInfo & nodepoolInfo) { DARABONBA_PTR_SET_VALUE(nodepoolInfo_, nodepoolInfo) };
    inline ModifyClusterNodePoolRequest& setNodepoolInfo(ModifyClusterNodePoolRequestNodepoolInfo && nodepoolInfo) { DARABONBA_PTR_SET_RVALUE(nodepoolInfo_, nodepoolInfo) };


    // scalingGroup Field Functions 
    bool hasScalingGroup() const { return this->scalingGroup_ != nullptr;};
    void deleteScalingGroup() { this->scalingGroup_ = nullptr;};
    inline const ModifyClusterNodePoolRequestScalingGroup & scalingGroup() const { DARABONBA_PTR_GET_CONST(scalingGroup_, ModifyClusterNodePoolRequestScalingGroup) };
    inline ModifyClusterNodePoolRequestScalingGroup scalingGroup() { DARABONBA_PTR_GET(scalingGroup_, ModifyClusterNodePoolRequestScalingGroup) };
    inline ModifyClusterNodePoolRequest& setScalingGroup(const ModifyClusterNodePoolRequestScalingGroup & scalingGroup) { DARABONBA_PTR_SET_VALUE(scalingGroup_, scalingGroup) };
    inline ModifyClusterNodePoolRequest& setScalingGroup(ModifyClusterNodePoolRequestScalingGroup && scalingGroup) { DARABONBA_PTR_SET_RVALUE(scalingGroup_, scalingGroup) };


    // teeConfig Field Functions 
    bool hasTeeConfig() const { return this->teeConfig_ != nullptr;};
    void deleteTeeConfig() { this->teeConfig_ = nullptr;};
    inline const ModifyClusterNodePoolRequestTeeConfig & teeConfig() const { DARABONBA_PTR_GET_CONST(teeConfig_, ModifyClusterNodePoolRequestTeeConfig) };
    inline ModifyClusterNodePoolRequestTeeConfig teeConfig() { DARABONBA_PTR_GET(teeConfig_, ModifyClusterNodePoolRequestTeeConfig) };
    inline ModifyClusterNodePoolRequest& setTeeConfig(const ModifyClusterNodePoolRequestTeeConfig & teeConfig) { DARABONBA_PTR_SET_VALUE(teeConfig_, teeConfig) };
    inline ModifyClusterNodePoolRequest& setTeeConfig(ModifyClusterNodePoolRequestTeeConfig && teeConfig) { DARABONBA_PTR_SET_RVALUE(teeConfig_, teeConfig) };


    // updateNodes Field Functions 
    bool hasUpdateNodes() const { return this->updateNodes_ != nullptr;};
    void deleteUpdateNodes() { this->updateNodes_ = nullptr;};
    inline bool updateNodes() const { DARABONBA_PTR_GET_DEFAULT(updateNodes_, false) };
    inline ModifyClusterNodePoolRequest& setUpdateNodes(bool updateNodes) { DARABONBA_PTR_SET_VALUE(updateNodes_, updateNodes) };


  protected:
    // The configurations about auto scaling.
    std::shared_ptr<ModifyClusterNodePoolRequestAutoScaling> autoScaling_ = nullptr;
    // Specifies whether concurrency is supported.
    std::shared_ptr<bool> concurrency_ = nullptr;
    // The configurations of the cluster.
    std::shared_ptr<ModifyClusterNodePoolRequestKubernetesConfig> kubernetesConfig_ = nullptr;
    // The configurations of the managed node pool feature.
    std::shared_ptr<ModifyClusterNodePoolRequestManagement> management_ = nullptr;
    // The configurations of the node pool.
    std::shared_ptr<ModifyClusterNodePoolRequestNodepoolInfo> nodepoolInfo_ = nullptr;
    // The configurations of the scaling group that is used by the node pool.
    std::shared_ptr<ModifyClusterNodePoolRequestScalingGroup> scalingGroup_ = nullptr;
    // The configurations of confidential computing for the cluster.
    std::shared_ptr<ModifyClusterNodePoolRequestTeeConfig> teeConfig_ = nullptr;
    // Specifies whether to update node information, such as labels and taints.
    std::shared_ptr<bool> updateNodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
