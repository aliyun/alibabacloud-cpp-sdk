// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTKUBERNETESCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTKUBERNETESCONFIG_HPP_
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
  class CreateClusterNodePoolRequestKubernetesConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequestKubernetesConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequestKubernetesConfig& obj) { 
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
    CreateClusterNodePoolRequestKubernetesConfig() = default ;
    CreateClusterNodePoolRequestKubernetesConfig(const CreateClusterNodePoolRequestKubernetesConfig &) = default ;
    CreateClusterNodePoolRequestKubernetesConfig(CreateClusterNodePoolRequestKubernetesConfig &&) = default ;
    CreateClusterNodePoolRequestKubernetesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequestKubernetesConfig() = default ;
    CreateClusterNodePoolRequestKubernetesConfig& operator=(const CreateClusterNodePoolRequestKubernetesConfig &) = default ;
    CreateClusterNodePoolRequestKubernetesConfig& operator=(CreateClusterNodePoolRequestKubernetesConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cmsEnabled_ != nullptr
        && this->cpuPolicy_ != nullptr && this->labels_ != nullptr && this->nodeNameMode_ != nullptr && this->preUserData_ != nullptr && this->runtime_ != nullptr
        && this->runtimeVersion_ != nullptr && this->taints_ != nullptr && this->unschedulable_ != nullptr && this->userData_ != nullptr; };
    // cmsEnabled Field Functions 
    bool hasCmsEnabled() const { return this->cmsEnabled_ != nullptr;};
    void deleteCmsEnabled() { this->cmsEnabled_ = nullptr;};
    inline bool cmsEnabled() const { DARABONBA_PTR_GET_DEFAULT(cmsEnabled_, false) };
    inline CreateClusterNodePoolRequestKubernetesConfig& setCmsEnabled(bool cmsEnabled) { DARABONBA_PTR_SET_VALUE(cmsEnabled_, cmsEnabled) };


    // cpuPolicy Field Functions 
    bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
    void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
    inline string cpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
    inline CreateClusterNodePoolRequestKubernetesConfig& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::Tag> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::Tag>) };
    inline vector<Models::Tag> labels() { DARABONBA_PTR_GET(labels_, vector<Models::Tag>) };
    inline CreateClusterNodePoolRequestKubernetesConfig& setLabels(const vector<Models::Tag> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateClusterNodePoolRequestKubernetesConfig& setLabels(vector<Models::Tag> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // nodeNameMode Field Functions 
    bool hasNodeNameMode() const { return this->nodeNameMode_ != nullptr;};
    void deleteNodeNameMode() { this->nodeNameMode_ = nullptr;};
    inline string nodeNameMode() const { DARABONBA_PTR_GET_DEFAULT(nodeNameMode_, "") };
    inline CreateClusterNodePoolRequestKubernetesConfig& setNodeNameMode(string nodeNameMode) { DARABONBA_PTR_SET_VALUE(nodeNameMode_, nodeNameMode) };


    // preUserData Field Functions 
    bool hasPreUserData() const { return this->preUserData_ != nullptr;};
    void deletePreUserData() { this->preUserData_ = nullptr;};
    inline string preUserData() const { DARABONBA_PTR_GET_DEFAULT(preUserData_, "") };
    inline CreateClusterNodePoolRequestKubernetesConfig& setPreUserData(string preUserData) { DARABONBA_PTR_SET_VALUE(preUserData_, preUserData) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string runtime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline CreateClusterNodePoolRequestKubernetesConfig& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


    // runtimeVersion Field Functions 
    bool hasRuntimeVersion() const { return this->runtimeVersion_ != nullptr;};
    void deleteRuntimeVersion() { this->runtimeVersion_ = nullptr;};
    inline string runtimeVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeVersion_, "") };
    inline CreateClusterNodePoolRequestKubernetesConfig& setRuntimeVersion(string runtimeVersion) { DARABONBA_PTR_SET_VALUE(runtimeVersion_, runtimeVersion) };


    // taints Field Functions 
    bool hasTaints() const { return this->taints_ != nullptr;};
    void deleteTaints() { this->taints_ = nullptr;};
    inline const vector<Models::Taint> & taints() const { DARABONBA_PTR_GET_CONST(taints_, vector<Models::Taint>) };
    inline vector<Models::Taint> taints() { DARABONBA_PTR_GET(taints_, vector<Models::Taint>) };
    inline CreateClusterNodePoolRequestKubernetesConfig& setTaints(const vector<Models::Taint> & taints) { DARABONBA_PTR_SET_VALUE(taints_, taints) };
    inline CreateClusterNodePoolRequestKubernetesConfig& setTaints(vector<Models::Taint> && taints) { DARABONBA_PTR_SET_RVALUE(taints_, taints) };


    // unschedulable Field Functions 
    bool hasUnschedulable() const { return this->unschedulable_ != nullptr;};
    void deleteUnschedulable() { this->unschedulable_ = nullptr;};
    inline bool unschedulable() const { DARABONBA_PTR_GET_DEFAULT(unschedulable_, false) };
    inline CreateClusterNodePoolRequestKubernetesConfig& setUnschedulable(bool unschedulable) { DARABONBA_PTR_SET_VALUE(unschedulable_, unschedulable) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateClusterNodePoolRequestKubernetesConfig& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Specifies whether to install the CloudMonitor agent on ECS nodes. After the CloudMonitor agent is installed on ECS nodes, you can view monitoring information about the instances in the CloudMonitor console. We recommend that you install the CloudMonitor agent. Valid values:
    // 
    // *   `true`: installs the CloudMonitor agent on ECS nodes.
    // *   `false`: does not install the CloudMonitor agent on ECS nodes.
    // 
    // Default value: `false`
    std::shared_ptr<bool> cmsEnabled_ = nullptr;
    // The CPU management policy of nodes in the node pool. The following policies are supported if the Kubernetes version of the cluster is 1.12.6 or later:
    // 
    // *   `static`: allows pods with specific resource characteristics on the node to be granted with enhanced CPU affinity and exclusivity.
    // *   `none`: specifies that the default CPU affinity is used.
    // 
    // Default value: `none`.
    std::shared_ptr<string> cpuPolicy_ = nullptr;
    // The labels that you want to add to the nodes in the cluster.
    std::shared_ptr<vector<Models::Tag>> labels_ = nullptr;
    // A custom node name consists of a prefix, a node IP address, and a suffix.
    // 
    // *   The prefix and the suffix can contain multiple parts that are separated by periods (.). Each part can contain lowercase letters, digits, and hyphens (-). A custom node name must start and end with a digit or lowercase letter.
    // *   The node IP address in a custom node name is the private IP address of the node.
    // 
    // Set the parameter to a value in the customized,aliyun,ip,com format. The value consists of four parts that are separated by commas (,). customized and ip are fixed content. aliyun is the prefix and com is the suffix. Example: aliyun.192.168.xxx.xxx.com.
    std::shared_ptr<string> nodeNameMode_ = nullptr;
    // The user-defined data of nodes. You can specify custom scripts that are automatically executed before the nodes are initialized.
    std::shared_ptr<string> preUserData_ = nullptr;
    // The name of the container runtime. The following types of runtime are supported by ACK:
    // 
    // *   containerd: containerd is the recommended runtime and supports all Kubernetes versions.
    // *   Sandboxed-Container.runv: The Sandbox-Container runtime provides improved isolation and supports Kubernetes 1.24 and earlier.
    // *   docker: The Docker runtime supports Kubernetes 1.22 and earlier.
    // 
    // Default value: containerd.
    std::shared_ptr<string> runtime_ = nullptr;
    // The version of the container runtime.
    std::shared_ptr<string> runtimeVersion_ = nullptr;
    // The configurations of the taints.
    std::shared_ptr<vector<Models::Taint>> taints_ = nullptr;
    // Specifies whether the nodes are schedulable after a scale-out operation is performed.
    std::shared_ptr<bool> unschedulable_ = nullptr;
    // The user-defined data of nodes. You can specify custom scripts that are automatically executed after the nodes are initialized.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
