// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECLUSTERNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECLUSTERNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpgradeClusterNodepoolRequestRollingPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpgradeClusterNodepoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeClusterNodepoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(image_id, imageId_);
      DARABONBA_PTR_TO_JSON(kubernetes_version, kubernetesVersion_);
      DARABONBA_PTR_TO_JSON(node_names, nodeNames_);
      DARABONBA_PTR_TO_JSON(rolling_policy, rollingPolicy_);
      DARABONBA_PTR_TO_JSON(runtime_type, runtimeType_);
      DARABONBA_PTR_TO_JSON(runtime_version, runtimeVersion_);
      DARABONBA_PTR_TO_JSON(use_replace, useReplace_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeClusterNodepoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(image_id, imageId_);
      DARABONBA_PTR_FROM_JSON(kubernetes_version, kubernetesVersion_);
      DARABONBA_PTR_FROM_JSON(node_names, nodeNames_);
      DARABONBA_PTR_FROM_JSON(rolling_policy, rollingPolicy_);
      DARABONBA_PTR_FROM_JSON(runtime_type, runtimeType_);
      DARABONBA_PTR_FROM_JSON(runtime_version, runtimeVersion_);
      DARABONBA_PTR_FROM_JSON(use_replace, useReplace_);
    };
    UpgradeClusterNodepoolRequest() = default ;
    UpgradeClusterNodepoolRequest(const UpgradeClusterNodepoolRequest &) = default ;
    UpgradeClusterNodepoolRequest(UpgradeClusterNodepoolRequest &&) = default ;
    UpgradeClusterNodepoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeClusterNodepoolRequest() = default ;
    UpgradeClusterNodepoolRequest& operator=(const UpgradeClusterNodepoolRequest &) = default ;
    UpgradeClusterNodepoolRequest& operator=(UpgradeClusterNodepoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageId_ != nullptr
        && this->kubernetesVersion_ != nullptr && this->nodeNames_ != nullptr && this->rollingPolicy_ != nullptr && this->runtimeType_ != nullptr && this->runtimeVersion_ != nullptr
        && this->useReplace_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpgradeClusterNodepoolRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // kubernetesVersion Field Functions 
    bool hasKubernetesVersion() const { return this->kubernetesVersion_ != nullptr;};
    void deleteKubernetesVersion() { this->kubernetesVersion_ = nullptr;};
    inline string kubernetesVersion() const { DARABONBA_PTR_GET_DEFAULT(kubernetesVersion_, "") };
    inline UpgradeClusterNodepoolRequest& setKubernetesVersion(string kubernetesVersion) { DARABONBA_PTR_SET_VALUE(kubernetesVersion_, kubernetesVersion) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & nodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> nodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline UpgradeClusterNodepoolRequest& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline UpgradeClusterNodepoolRequest& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // rollingPolicy Field Functions 
    bool hasRollingPolicy() const { return this->rollingPolicy_ != nullptr;};
    void deleteRollingPolicy() { this->rollingPolicy_ = nullptr;};
    inline const UpgradeClusterNodepoolRequestRollingPolicy & rollingPolicy() const { DARABONBA_PTR_GET_CONST(rollingPolicy_, UpgradeClusterNodepoolRequestRollingPolicy) };
    inline UpgradeClusterNodepoolRequestRollingPolicy rollingPolicy() { DARABONBA_PTR_GET(rollingPolicy_, UpgradeClusterNodepoolRequestRollingPolicy) };
    inline UpgradeClusterNodepoolRequest& setRollingPolicy(const UpgradeClusterNodepoolRequestRollingPolicy & rollingPolicy) { DARABONBA_PTR_SET_VALUE(rollingPolicy_, rollingPolicy) };
    inline UpgradeClusterNodepoolRequest& setRollingPolicy(UpgradeClusterNodepoolRequestRollingPolicy && rollingPolicy) { DARABONBA_PTR_SET_RVALUE(rollingPolicy_, rollingPolicy) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string runtimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline UpgradeClusterNodepoolRequest& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


    // runtimeVersion Field Functions 
    bool hasRuntimeVersion() const { return this->runtimeVersion_ != nullptr;};
    void deleteRuntimeVersion() { this->runtimeVersion_ = nullptr;};
    inline string runtimeVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeVersion_, "") };
    inline UpgradeClusterNodepoolRequest& setRuntimeVersion(string runtimeVersion) { DARABONBA_PTR_SET_VALUE(runtimeVersion_, runtimeVersion) };


    // useReplace Field Functions 
    bool hasUseReplace() const { return this->useReplace_ != nullptr;};
    void deleteUseReplace() { this->useReplace_ = nullptr;};
    inline bool useReplace() const { DARABONBA_PTR_GET_DEFAULT(useReplace_, false) };
    inline UpgradeClusterNodepoolRequest& setUseReplace(bool useReplace) { DARABONBA_PTR_SET_VALUE(useReplace_, useReplace) };


  protected:
    // The ID of the OS image used by the nodes.
    std::shared_ptr<string> imageId_ = nullptr;
    // The Kubernetes version used by the nodes. You can call the [DescribeKubernetesVersionMetadata](https://help.aliyun.com/document_detail/2667899.html) operation and get the Kubernetes version of the current cluster in the current_version field.
    std::shared_ptr<string> kubernetesVersion_ = nullptr;
    // The nodes you want to update. If you do not specify this parameter, all nodes in the node pool are updated by default.
    std::shared_ptr<vector<string>> nodeNames_ = nullptr;
    // The rolling update configuration.
    std::shared_ptr<UpgradeClusterNodepoolRequestRollingPolicy> rollingPolicy_ = nullptr;
    // The runtime type. You can call the [DescribeKubernetesVersionMetadata](https://help.aliyun.com/document_detail/2667899.html) operation and get the runtime information in the runtime field.
    std::shared_ptr<string> runtimeType_ = nullptr;
    // The version of the container runtime used by the nodes. You can call the [DescribeKubernetesVersionMetadata](https://help.aliyun.com/document_detail/2667899.html) operation and get the runtime version in the runtime field.
    std::shared_ptr<string> runtimeVersion_ = nullptr;
    // Specifies whether to perform the update by replacing the system disk. Valid values:
    // 
    // *   true: replaces the system disk.
    // *   false: does not replace the system disk.
    // 
    // Default value: false.
    std::shared_ptr<bool> useReplace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
