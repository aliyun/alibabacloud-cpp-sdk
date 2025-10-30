// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYKUBERNETESCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYKUBERNETESCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
#include <alibabacloud/models/Taint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyKubernetesConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& obj) { 
      DARABONBA_PTR_TO_JSON(cms_enabled, cmsEnabled_);
      DARABONBA_PTR_TO_JSON(cpu_policy, cpuPolicy_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(node_name_mode, nodeNameMode_);
      DARABONBA_PTR_TO_JSON(pre_user_data, preUserData_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_PTR_TO_JSON(runtime_version, runtimeVersion_);
      DARABONBA_PTR_TO_JSON(taints, taints_);
      DARABONBA_PTR_TO_JSON(unschedulable, unschedulable_);
      DARABONBA_PTR_TO_JSON(user_data, userData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(cms_enabled, cmsEnabled_);
      DARABONBA_PTR_FROM_JSON(cpu_policy, cpuPolicy_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(node_name_mode, nodeNameMode_);
      DARABONBA_PTR_FROM_JSON(pre_user_data, preUserData_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(runtime_version, runtimeVersion_);
      DARABONBA_PTR_FROM_JSON(taints, taints_);
      DARABONBA_PTR_FROM_JSON(unschedulable, unschedulable_);
      DARABONBA_PTR_FROM_JSON(user_data, userData_);
    };
    DescribeClusterNodePoolDetailResponseBodyKubernetesConfig() = default ;
    DescribeClusterNodePoolDetailResponseBodyKubernetesConfig(const DescribeClusterNodePoolDetailResponseBodyKubernetesConfig &) = default ;
    DescribeClusterNodePoolDetailResponseBodyKubernetesConfig(DescribeClusterNodePoolDetailResponseBodyKubernetesConfig &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyKubernetesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyKubernetesConfig() = default ;
    DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& operator=(const DescribeClusterNodePoolDetailResponseBodyKubernetesConfig &) = default ;
    DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& operator=(DescribeClusterNodePoolDetailResponseBodyKubernetesConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmsEnabled_ == nullptr
        && return this->cpuPolicy_ == nullptr && return this->labels_ == nullptr && return this->nodeNameMode_ == nullptr && return this->preUserData_ == nullptr && return this->runtime_ == nullptr
        && return this->runtimeVersion_ == nullptr && return this->taints_ == nullptr && return this->unschedulable_ == nullptr && return this->userData_ == nullptr; };
    // cmsEnabled Field Functions 
    bool hasCmsEnabled() const { return this->cmsEnabled_ != nullptr;};
    void deleteCmsEnabled() { this->cmsEnabled_ = nullptr;};
    inline bool cmsEnabled() const { DARABONBA_PTR_GET_DEFAULT(cmsEnabled_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& setCmsEnabled(bool cmsEnabled) { DARABONBA_PTR_SET_VALUE(cmsEnabled_, cmsEnabled) };


    // cpuPolicy Field Functions 
    bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
    void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
    inline string cpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::Tag> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::Tag>) };
    inline vector<Models::Tag> labels() { DARABONBA_PTR_GET(labels_, vector<Models::Tag>) };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& setLabels(const vector<Models::Tag> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& setLabels(vector<Models::Tag> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // nodeNameMode Field Functions 
    bool hasNodeNameMode() const { return this->nodeNameMode_ != nullptr;};
    void deleteNodeNameMode() { this->nodeNameMode_ = nullptr;};
    inline string nodeNameMode() const { DARABONBA_PTR_GET_DEFAULT(nodeNameMode_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& setNodeNameMode(string nodeNameMode) { DARABONBA_PTR_SET_VALUE(nodeNameMode_, nodeNameMode) };


    // preUserData Field Functions 
    bool hasPreUserData() const { return this->preUserData_ != nullptr;};
    void deletePreUserData() { this->preUserData_ = nullptr;};
    inline string preUserData() const { DARABONBA_PTR_GET_DEFAULT(preUserData_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& setPreUserData(string preUserData) { DARABONBA_PTR_SET_VALUE(preUserData_, preUserData) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string runtime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


    // runtimeVersion Field Functions 
    bool hasRuntimeVersion() const { return this->runtimeVersion_ != nullptr;};
    void deleteRuntimeVersion() { this->runtimeVersion_ = nullptr;};
    inline string runtimeVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeVersion_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& setRuntimeVersion(string runtimeVersion) { DARABONBA_PTR_SET_VALUE(runtimeVersion_, runtimeVersion) };


    // taints Field Functions 
    bool hasTaints() const { return this->taints_ != nullptr;};
    void deleteTaints() { this->taints_ = nullptr;};
    inline const vector<Models::Taint> & taints() const { DARABONBA_PTR_GET_CONST(taints_, vector<Models::Taint>) };
    inline vector<Models::Taint> taints() { DARABONBA_PTR_GET(taints_, vector<Models::Taint>) };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& setTaints(const vector<Models::Taint> & taints) { DARABONBA_PTR_SET_VALUE(taints_, taints) };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& setTaints(vector<Models::Taint> && taints) { DARABONBA_PTR_SET_RVALUE(taints_, taints) };


    // unschedulable Field Functions 
    bool hasUnschedulable() const { return this->unschedulable_ != nullptr;};
    void deleteUnschedulable() { this->unschedulable_ = nullptr;};
    inline bool unschedulable() const { DARABONBA_PTR_GET_DEFAULT(unschedulable_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& setUnschedulable(bool unschedulable) { DARABONBA_PTR_SET_VALUE(unschedulable_, unschedulable) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyKubernetesConfig& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Indicates whether the CloudMonitor agent is installed on ECS nodes in the cluster. After the CloudMonitor agent is installed, you can view monitoring information about the ECS instances in the CloudMonitor console. Installation is recommended. Valid values:
    // 
    // *   `true`: The CloudMonitor agent is installed on ECS nodes.
    // *   `false`: The CloudMonitor agent is not installed on ECS nodes.
    std::shared_ptr<bool> cmsEnabled_ = nullptr;
    // The CPU management policy of the nodes in the node pool. The following policies are supported if the Kubernetes version of the cluster is 1.12.6 or later.
    // 
    // *   `static`: allows pods with specific resource characteristics on the node to be granted enhanced CPU affinity and exclusivity.
    // *   `none`: indicates that the default CPU affinity is used.
    std::shared_ptr<string> cpuPolicy_ = nullptr;
    // The labels that you want to add to the nodes in the cluster. You must add labels based on the following rules:
    // 
    // *   A label is a case-sensitive key-value pair. You can add up to 20 labels.
    // *   The key must be unique and cannot exceed 64 characters in length. The value can be empty and cannot exceed 128 characters in length. Keys and values cannot start with `aliyun`, `acs:`, `https://`, or `http://`. For more information, see [Labels and Selectors](https://kubernetes.io/docs/concepts/overview/working-with-objects/labels/#syntax-and-character-set).
    std::shared_ptr<vector<Models::Tag>> labels_ = nullptr;
    // A custom node name consists of a prefix, an IP substring, and a suffix.
    // 
    // *   The prefix and suffix can contain multiple parts that are separated by periods (.). Each part can contain lowercase letters, digits, and hyphens (-). A custom node name must start and end with a digit or lowercase letter.
    // *   The IP substring length specifies the number of digits to be truncated from the end of the node IP address. The IP substring length ranges from 5 to 12.
    // 
    // For example, if the node IP address is 192.168.0.55, the prefix is aliyun.com, the IP substring length is 5, and the suffix is test, the node name will be aliyun.com00055test.
    std::shared_ptr<string> nodeNameMode_ = nullptr;
    // The user-defined script that is executed before nodes are initialized. For more information, see [Generate user-defined data](https://help.aliyun.com/document_detail/49121.html).
    std::shared_ptr<string> preUserData_ = nullptr;
    // The name of the container runtime.
    std::shared_ptr<string> runtime_ = nullptr;
    // The version of the container runtime.
    std::shared_ptr<string> runtimeVersion_ = nullptr;
    // The taints that you want to add to nodes. Taints can be used together with tolerations to prevent pods from being scheduled to specific nodes. For more information, see [taint-and-toleration](https://kubernetes.io/zh/docs/concepts/scheduling-eviction/taint-and-toleration/).
    std::shared_ptr<vector<Models::Taint>> taints_ = nullptr;
    // Whether the expanded node is schedulable.
    std::shared_ptr<bool> unschedulable_ = nullptr;
    // The custom script to be executed after nodes in the node pool are initialized. For more information, see [Generate user-defined data](https://help.aliyun.com/document_detail/49121.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
