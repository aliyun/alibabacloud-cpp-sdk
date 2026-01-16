// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyClusterNodePoolShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(KubernetesConfig, kubernetesConfigShrink_);
      DARABONBA_PTR_TO_JSON(NodepoolInfo, nodepoolInfoShrink_);
      DARABONBA_PTR_TO_JSON(ScalingGroup, scalingGroupShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(KubernetesConfig, kubernetesConfigShrink_);
      DARABONBA_PTR_FROM_JSON(NodepoolInfo, nodepoolInfoShrink_);
      DARABONBA_PTR_FROM_JSON(ScalingGroup, scalingGroupShrink_);
    };
    ModifyClusterNodePoolShrinkRequest() = default ;
    ModifyClusterNodePoolShrinkRequest(const ModifyClusterNodePoolShrinkRequest &) = default ;
    ModifyClusterNodePoolShrinkRequest(ModifyClusterNodePoolShrinkRequest &&) = default ;
    ModifyClusterNodePoolShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolShrinkRequest() = default ;
    ModifyClusterNodePoolShrinkRequest& operator=(const ModifyClusterNodePoolShrinkRequest &) = default ;
    ModifyClusterNodePoolShrinkRequest& operator=(ModifyClusterNodePoolShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->kubernetesConfigShrink_ == nullptr && this->nodepoolInfoShrink_ == nullptr && this->scalingGroupShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyClusterNodePoolShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // kubernetesConfigShrink Field Functions 
    bool hasKubernetesConfigShrink() const { return this->kubernetesConfigShrink_ != nullptr;};
    void deleteKubernetesConfigShrink() { this->kubernetesConfigShrink_ = nullptr;};
    inline string getKubernetesConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(kubernetesConfigShrink_, "") };
    inline ModifyClusterNodePoolShrinkRequest& setKubernetesConfigShrink(string kubernetesConfigShrink) { DARABONBA_PTR_SET_VALUE(kubernetesConfigShrink_, kubernetesConfigShrink) };


    // nodepoolInfoShrink Field Functions 
    bool hasNodepoolInfoShrink() const { return this->nodepoolInfoShrink_ != nullptr;};
    void deleteNodepoolInfoShrink() { this->nodepoolInfoShrink_ = nullptr;};
    inline string getNodepoolInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(nodepoolInfoShrink_, "") };
    inline ModifyClusterNodePoolShrinkRequest& setNodepoolInfoShrink(string nodepoolInfoShrink) { DARABONBA_PTR_SET_VALUE(nodepoolInfoShrink_, nodepoolInfoShrink) };


    // scalingGroupShrink Field Functions 
    bool hasScalingGroupShrink() const { return this->scalingGroupShrink_ != nullptr;};
    void deleteScalingGroupShrink() { this->scalingGroupShrink_ = nullptr;};
    inline string getScalingGroupShrink() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupShrink_, "") };
    inline ModifyClusterNodePoolShrinkRequest& setScalingGroupShrink(string scalingGroupShrink) { DARABONBA_PTR_SET_VALUE(scalingGroupShrink_, scalingGroupShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> kubernetesConfigShrink_ {};
    // This parameter is required.
    shared_ptr<string> nodepoolInfoShrink_ {};
    shared_ptr<string> scalingGroupShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
