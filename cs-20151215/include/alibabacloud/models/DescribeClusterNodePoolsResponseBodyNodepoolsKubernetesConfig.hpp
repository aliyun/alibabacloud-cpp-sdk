// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSKUBERNETESCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSKUBERNETESCONFIG_HPP_
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
  class DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& obj) { 
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
    DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig(const DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig(DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig &&) = default ;
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
    inline DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& setCmsEnabled(bool cmsEnabled) { DARABONBA_PTR_SET_VALUE(cmsEnabled_, cmsEnabled) };


    // cpuPolicy Field Functions 
    bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
    void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
    inline string cpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::Tag> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::Tag>) };
    inline vector<Models::Tag> labels() { DARABONBA_PTR_GET(labels_, vector<Models::Tag>) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& setLabels(const vector<Models::Tag> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& setLabels(vector<Models::Tag> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // nodeNameMode Field Functions 
    bool hasNodeNameMode() const { return this->nodeNameMode_ != nullptr;};
    void deleteNodeNameMode() { this->nodeNameMode_ = nullptr;};
    inline string nodeNameMode() const { DARABONBA_PTR_GET_DEFAULT(nodeNameMode_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& setNodeNameMode(string nodeNameMode) { DARABONBA_PTR_SET_VALUE(nodeNameMode_, nodeNameMode) };


    // preUserData Field Functions 
    bool hasPreUserData() const { return this->preUserData_ != nullptr;};
    void deletePreUserData() { this->preUserData_ = nullptr;};
    inline string preUserData() const { DARABONBA_PTR_GET_DEFAULT(preUserData_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& setPreUserData(string preUserData) { DARABONBA_PTR_SET_VALUE(preUserData_, preUserData) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string runtime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


    // runtimeVersion Field Functions 
    bool hasRuntimeVersion() const { return this->runtimeVersion_ != nullptr;};
    void deleteRuntimeVersion() { this->runtimeVersion_ = nullptr;};
    inline string runtimeVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeVersion_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& setRuntimeVersion(string runtimeVersion) { DARABONBA_PTR_SET_VALUE(runtimeVersion_, runtimeVersion) };


    // taints Field Functions 
    bool hasTaints() const { return this->taints_ != nullptr;};
    void deleteTaints() { this->taints_ = nullptr;};
    inline const vector<Models::Taint> & taints() const { DARABONBA_PTR_GET_CONST(taints_, vector<Models::Taint>) };
    inline vector<Models::Taint> taints() { DARABONBA_PTR_GET(taints_, vector<Models::Taint>) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& setTaints(const vector<Models::Taint> & taints) { DARABONBA_PTR_SET_VALUE(taints_, taints) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& setTaints(vector<Models::Taint> && taints) { DARABONBA_PTR_SET_RVALUE(taints_, taints) };


    // unschedulable Field Functions 
    bool hasUnschedulable() const { return this->unschedulable_ != nullptr;};
    void deleteUnschedulable() { this->unschedulable_ = nullptr;};
    inline bool unschedulable() const { DARABONBA_PTR_GET_DEFAULT(unschedulable_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& setUnschedulable(bool unschedulable) { DARABONBA_PTR_SET_VALUE(unschedulable_, unschedulable) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Specifies whether to install the CloudMonitor agent on ECS nodes. After the CloudMonitor agent is installed on ECS nodes, you can view the monitoring information about the instances in the CloudMonitor console. We recommend that you install the CloudMonitor agent. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> cmsEnabled_ = nullptr;
    // The CPU management policy of the nodes in the node pool. The following policies are supported if the version of the cluster is Kubernetes 1.12.6 or later:
    // 
    // *   `static`: allows pods with specific resource characteristics on the node to be granted enhanced CPU affinity and exclusivity.
    // *   `none`: specifies that the default CPU affinity is used.
    std::shared_ptr<string> cpuPolicy_ = nullptr;
    // The node labels.
    std::shared_ptr<vector<Models::Tag>> labels_ = nullptr;
    // The name of the custom node.
    // 
    // The custom node name. A custom node name consists of a prefix, an IP substring, and a suffix.
    // 
    // *   The prefix and suffix can contain multiple parts that are separated by periods (.). Each part can contain lowercase letters, digits, and hyphens (-). A custom node name must start and end with a digit or lowercase letter.
    // *   The IP substring length specifies the number of digits to be truncated from the end of the node IP address. The IP substring length ranges from 5 to 12.
    // 
    // For example, if the node IP address is 192.168.0.55, the prefix is aliyun.com, the IP substring length is 5, and the suffix is test, the node name will aliyun.com00055test.
    std::shared_ptr<string> nodeNameMode_ = nullptr;
    // The user-defined script that is executed before nodes are initialized. For more information, see [Generate user-defined data](https://help.aliyun.com/document_detail/49121.html).
    std::shared_ptr<string> preUserData_ = nullptr;
    // The name of the container runtime. The following types of runtime are supported by ACK:
    // 
    // *   containerd: containerd is the recommended runtime and supports all Kubernetes versions.
    // *   Sandboxed-Container.runv: The Sandbox-Container runtime provides improved isolation and supports Kubernetes 1.31 and earlier.
    // *   Docker (deprecated): supports Kubernetes 1.22 and earlier.
    std::shared_ptr<string> runtime_ = nullptr;
    // The version of the container runtime.
    std::shared_ptr<string> runtimeVersion_ = nullptr;
    // The taint. Taints can be used together with tolerations to avoid scheduling pods to specified nodes. For more information, see [taint-and-toleration](https://kubernetes.io/zh/docs/concepts/scheduling-eviction/taint-and-toleration/).
    std::shared_ptr<vector<Models::Taint>> taints_ = nullptr;
    // Specifies whether the nodes are unschedulable after a scale-out activity is performed.
    // 
    // *   true: The node cannot be scheduled.
    // *   false: The node can be scheduled.
    std::shared_ptr<bool> unschedulable_ = nullptr;
    // The user-defined script that is executed after nodes are initialized. For more information, see [Generate user-defined data](https://help.aliyun.com/document_detail/49121.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
