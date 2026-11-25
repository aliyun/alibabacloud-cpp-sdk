// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOSCALINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOSCALINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateAutoscalingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoscalingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cool_down_duration, coolDownDuration_);
      DARABONBA_PTR_TO_JSON(daemonset_eviction_for_nodes, daemonsetEvictionForNodes_);
      DARABONBA_PTR_TO_JSON(expander, expander_);
      DARABONBA_PTR_TO_JSON(gpu_utilization_threshold, gpuUtilizationThreshold_);
      DARABONBA_PTR_TO_JSON(max_graceful_termination_sec, maxGracefulTerminationSec_);
      DARABONBA_PTR_TO_JSON(min_replica_count, minReplicaCount_);
      DARABONBA_PTR_TO_JSON(priorities, priorities_);
      DARABONBA_PTR_TO_JSON(recycle_node_deletion_enabled, recycleNodeDeletionEnabled_);
      DARABONBA_PTR_TO_JSON(scale_down_enabled, scaleDownEnabled_);
      DARABONBA_PTR_TO_JSON(scale_up_from_zero, scaleUpFromZero_);
      DARABONBA_PTR_TO_JSON(scaler_type, scalerType_);
      DARABONBA_PTR_TO_JSON(scan_interval, scanInterval_);
      DARABONBA_PTR_TO_JSON(skip_nodes_with_local_storage, skipNodesWithLocalStorage_);
      DARABONBA_PTR_TO_JSON(skip_nodes_with_system_pods, skipNodesWithSystemPods_);
      DARABONBA_PTR_TO_JSON(unneeded_duration, unneededDuration_);
      DARABONBA_PTR_TO_JSON(utilization_threshold, utilizationThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoscalingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cool_down_duration, coolDownDuration_);
      DARABONBA_PTR_FROM_JSON(daemonset_eviction_for_nodes, daemonsetEvictionForNodes_);
      DARABONBA_PTR_FROM_JSON(expander, expander_);
      DARABONBA_PTR_FROM_JSON(gpu_utilization_threshold, gpuUtilizationThreshold_);
      DARABONBA_PTR_FROM_JSON(max_graceful_termination_sec, maxGracefulTerminationSec_);
      DARABONBA_PTR_FROM_JSON(min_replica_count, minReplicaCount_);
      DARABONBA_PTR_FROM_JSON(priorities, priorities_);
      DARABONBA_PTR_FROM_JSON(recycle_node_deletion_enabled, recycleNodeDeletionEnabled_);
      DARABONBA_PTR_FROM_JSON(scale_down_enabled, scaleDownEnabled_);
      DARABONBA_PTR_FROM_JSON(scale_up_from_zero, scaleUpFromZero_);
      DARABONBA_PTR_FROM_JSON(scaler_type, scalerType_);
      DARABONBA_PTR_FROM_JSON(scan_interval, scanInterval_);
      DARABONBA_PTR_FROM_JSON(skip_nodes_with_local_storage, skipNodesWithLocalStorage_);
      DARABONBA_PTR_FROM_JSON(skip_nodes_with_system_pods, skipNodesWithSystemPods_);
      DARABONBA_PTR_FROM_JSON(unneeded_duration, unneededDuration_);
      DARABONBA_PTR_FROM_JSON(utilization_threshold, utilizationThreshold_);
    };
    CreateAutoscalingConfigRequest() = default ;
    CreateAutoscalingConfigRequest(const CreateAutoscalingConfigRequest &) = default ;
    CreateAutoscalingConfigRequest(CreateAutoscalingConfigRequest &&) = default ;
    CreateAutoscalingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoscalingConfigRequest() = default ;
    CreateAutoscalingConfigRequest& operator=(const CreateAutoscalingConfigRequest &) = default ;
    CreateAutoscalingConfigRequest& operator=(CreateAutoscalingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coolDownDuration_ == nullptr
        && this->daemonsetEvictionForNodes_ == nullptr && this->expander_ == nullptr && this->gpuUtilizationThreshold_ == nullptr && this->maxGracefulTerminationSec_ == nullptr && this->minReplicaCount_ == nullptr
        && this->priorities_ == nullptr && this->recycleNodeDeletionEnabled_ == nullptr && this->scaleDownEnabled_ == nullptr && this->scaleUpFromZero_ == nullptr && this->scalerType_ == nullptr
        && this->scanInterval_ == nullptr && this->skipNodesWithLocalStorage_ == nullptr && this->skipNodesWithSystemPods_ == nullptr && this->unneededDuration_ == nullptr && this->utilizationThreshold_ == nullptr; };
    // coolDownDuration Field Functions 
    bool hasCoolDownDuration() const { return this->coolDownDuration_ != nullptr;};
    void deleteCoolDownDuration() { this->coolDownDuration_ = nullptr;};
    inline string getCoolDownDuration() const { DARABONBA_PTR_GET_DEFAULT(coolDownDuration_, "") };
    inline CreateAutoscalingConfigRequest& setCoolDownDuration(string coolDownDuration) { DARABONBA_PTR_SET_VALUE(coolDownDuration_, coolDownDuration) };


    // daemonsetEvictionForNodes Field Functions 
    bool hasDaemonsetEvictionForNodes() const { return this->daemonsetEvictionForNodes_ != nullptr;};
    void deleteDaemonsetEvictionForNodes() { this->daemonsetEvictionForNodes_ = nullptr;};
    inline bool getDaemonsetEvictionForNodes() const { DARABONBA_PTR_GET_DEFAULT(daemonsetEvictionForNodes_, false) };
    inline CreateAutoscalingConfigRequest& setDaemonsetEvictionForNodes(bool daemonsetEvictionForNodes) { DARABONBA_PTR_SET_VALUE(daemonsetEvictionForNodes_, daemonsetEvictionForNodes) };


    // expander Field Functions 
    bool hasExpander() const { return this->expander_ != nullptr;};
    void deleteExpander() { this->expander_ = nullptr;};
    inline string getExpander() const { DARABONBA_PTR_GET_DEFAULT(expander_, "") };
    inline CreateAutoscalingConfigRequest& setExpander(string expander) { DARABONBA_PTR_SET_VALUE(expander_, expander) };


    // gpuUtilizationThreshold Field Functions 
    bool hasGpuUtilizationThreshold() const { return this->gpuUtilizationThreshold_ != nullptr;};
    void deleteGpuUtilizationThreshold() { this->gpuUtilizationThreshold_ = nullptr;};
    inline string getGpuUtilizationThreshold() const { DARABONBA_PTR_GET_DEFAULT(gpuUtilizationThreshold_, "") };
    inline CreateAutoscalingConfigRequest& setGpuUtilizationThreshold(string gpuUtilizationThreshold) { DARABONBA_PTR_SET_VALUE(gpuUtilizationThreshold_, gpuUtilizationThreshold) };


    // maxGracefulTerminationSec Field Functions 
    bool hasMaxGracefulTerminationSec() const { return this->maxGracefulTerminationSec_ != nullptr;};
    void deleteMaxGracefulTerminationSec() { this->maxGracefulTerminationSec_ = nullptr;};
    inline int32_t getMaxGracefulTerminationSec() const { DARABONBA_PTR_GET_DEFAULT(maxGracefulTerminationSec_, 0) };
    inline CreateAutoscalingConfigRequest& setMaxGracefulTerminationSec(int32_t maxGracefulTerminationSec) { DARABONBA_PTR_SET_VALUE(maxGracefulTerminationSec_, maxGracefulTerminationSec) };


    // minReplicaCount Field Functions 
    bool hasMinReplicaCount() const { return this->minReplicaCount_ != nullptr;};
    void deleteMinReplicaCount() { this->minReplicaCount_ = nullptr;};
    inline int32_t getMinReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(minReplicaCount_, 0) };
    inline CreateAutoscalingConfigRequest& setMinReplicaCount(int32_t minReplicaCount) { DARABONBA_PTR_SET_VALUE(minReplicaCount_, minReplicaCount) };


    // priorities Field Functions 
    bool hasPriorities() const { return this->priorities_ != nullptr;};
    void deletePriorities() { this->priorities_ = nullptr;};
    inline const map<string, vector<string>> & getPriorities() const { DARABONBA_PTR_GET_CONST(priorities_, map<string, vector<string>>) };
    inline map<string, vector<string>> getPriorities() { DARABONBA_PTR_GET(priorities_, map<string, vector<string>>) };
    inline CreateAutoscalingConfigRequest& setPriorities(const map<string, vector<string>> & priorities) { DARABONBA_PTR_SET_VALUE(priorities_, priorities) };
    inline CreateAutoscalingConfigRequest& setPriorities(map<string, vector<string>> && priorities) { DARABONBA_PTR_SET_RVALUE(priorities_, priorities) };


    // recycleNodeDeletionEnabled Field Functions 
    bool hasRecycleNodeDeletionEnabled() const { return this->recycleNodeDeletionEnabled_ != nullptr;};
    void deleteRecycleNodeDeletionEnabled() { this->recycleNodeDeletionEnabled_ = nullptr;};
    inline bool getRecycleNodeDeletionEnabled() const { DARABONBA_PTR_GET_DEFAULT(recycleNodeDeletionEnabled_, false) };
    inline CreateAutoscalingConfigRequest& setRecycleNodeDeletionEnabled(bool recycleNodeDeletionEnabled) { DARABONBA_PTR_SET_VALUE(recycleNodeDeletionEnabled_, recycleNodeDeletionEnabled) };


    // scaleDownEnabled Field Functions 
    bool hasScaleDownEnabled() const { return this->scaleDownEnabled_ != nullptr;};
    void deleteScaleDownEnabled() { this->scaleDownEnabled_ = nullptr;};
    inline bool getScaleDownEnabled() const { DARABONBA_PTR_GET_DEFAULT(scaleDownEnabled_, false) };
    inline CreateAutoscalingConfigRequest& setScaleDownEnabled(bool scaleDownEnabled) { DARABONBA_PTR_SET_VALUE(scaleDownEnabled_, scaleDownEnabled) };


    // scaleUpFromZero Field Functions 
    bool hasScaleUpFromZero() const { return this->scaleUpFromZero_ != nullptr;};
    void deleteScaleUpFromZero() { this->scaleUpFromZero_ = nullptr;};
    inline bool getScaleUpFromZero() const { DARABONBA_PTR_GET_DEFAULT(scaleUpFromZero_, false) };
    inline CreateAutoscalingConfigRequest& setScaleUpFromZero(bool scaleUpFromZero) { DARABONBA_PTR_SET_VALUE(scaleUpFromZero_, scaleUpFromZero) };


    // scalerType Field Functions 
    bool hasScalerType() const { return this->scalerType_ != nullptr;};
    void deleteScalerType() { this->scalerType_ = nullptr;};
    inline string getScalerType() const { DARABONBA_PTR_GET_DEFAULT(scalerType_, "") };
    inline CreateAutoscalingConfigRequest& setScalerType(string scalerType) { DARABONBA_PTR_SET_VALUE(scalerType_, scalerType) };


    // scanInterval Field Functions 
    bool hasScanInterval() const { return this->scanInterval_ != nullptr;};
    void deleteScanInterval() { this->scanInterval_ = nullptr;};
    inline string getScanInterval() const { DARABONBA_PTR_GET_DEFAULT(scanInterval_, "") };
    inline CreateAutoscalingConfigRequest& setScanInterval(string scanInterval) { DARABONBA_PTR_SET_VALUE(scanInterval_, scanInterval) };


    // skipNodesWithLocalStorage Field Functions 
    bool hasSkipNodesWithLocalStorage() const { return this->skipNodesWithLocalStorage_ != nullptr;};
    void deleteSkipNodesWithLocalStorage() { this->skipNodesWithLocalStorage_ = nullptr;};
    inline bool getSkipNodesWithLocalStorage() const { DARABONBA_PTR_GET_DEFAULT(skipNodesWithLocalStorage_, false) };
    inline CreateAutoscalingConfigRequest& setSkipNodesWithLocalStorage(bool skipNodesWithLocalStorage) { DARABONBA_PTR_SET_VALUE(skipNodesWithLocalStorage_, skipNodesWithLocalStorage) };


    // skipNodesWithSystemPods Field Functions 
    bool hasSkipNodesWithSystemPods() const { return this->skipNodesWithSystemPods_ != nullptr;};
    void deleteSkipNodesWithSystemPods() { this->skipNodesWithSystemPods_ = nullptr;};
    inline bool getSkipNodesWithSystemPods() const { DARABONBA_PTR_GET_DEFAULT(skipNodesWithSystemPods_, false) };
    inline CreateAutoscalingConfigRequest& setSkipNodesWithSystemPods(bool skipNodesWithSystemPods) { DARABONBA_PTR_SET_VALUE(skipNodesWithSystemPods_, skipNodesWithSystemPods) };


    // unneededDuration Field Functions 
    bool hasUnneededDuration() const { return this->unneededDuration_ != nullptr;};
    void deleteUnneededDuration() { this->unneededDuration_ = nullptr;};
    inline string getUnneededDuration() const { DARABONBA_PTR_GET_DEFAULT(unneededDuration_, "") };
    inline CreateAutoscalingConfigRequest& setUnneededDuration(string unneededDuration) { DARABONBA_PTR_SET_VALUE(unneededDuration_, unneededDuration) };


    // utilizationThreshold Field Functions 
    bool hasUtilizationThreshold() const { return this->utilizationThreshold_ != nullptr;};
    void deleteUtilizationThreshold() { this->utilizationThreshold_ = nullptr;};
    inline string getUtilizationThreshold() const { DARABONBA_PTR_GET_DEFAULT(utilizationThreshold_, "") };
    inline CreateAutoscalingConfigRequest& setUtilizationThreshold(string utilizationThreshold) { DARABONBA_PTR_SET_VALUE(utilizationThreshold_, utilizationThreshold) };


  protected:
    // The delay for triggering scale-in. This is the time interval between detecting a scale-in requirement (reaching the scale-in threshold) and actually executing the scale-in operation (reducing the number of pods). Valid values: 1 to 60. Unit: minutes. Default value: 10.
    shared_ptr<string> coolDownDuration_ {};
    // Specifies whether cluster-autoscaler evicts DaemonSet pods on nodes during scale-in. Valid values:
    // - true: The pods are evicted.
    // - false: The pods are not evicted.
    shared_ptr<bool> daemonsetEvictionForNodes_ {};
    // The node pool scale-out order policy. Valid values:
    // - least-waste: the default policy. If multiple node pools can be scaled out, the system selects the node pool that wastes the least resources.
    // - random: the random policy. If multiple node pools can be scaled out, the system randomly selects a node pool.
    // - priority: the priority policy. If multiple node pools can be scaled out, the system selects the node pool with the highest priority based on the custom scaling group order. The node pool priority is defined by the priorities parameter.
    shared_ptr<string> expander_ {};
    // The GPU scale-in threshold, which is the ratio of requested resources to total resources on a node. A GPU node can be scaled in only when this ratio is lower than the configured threshold, meaning that the CPU, memory, and GPU utilization of the node are all lower than the GPU scale-in threshold. Valid values: 0.1 to 1. Default value: 0.3, which indicates 30%.
    shared_ptr<string> gpuUtilizationThreshold_ {};
    // The timeout period for cluster-autoscaler to wait for pod termination during node draining in a scale-in scenario. Unit: seconds. Default value: 14400.
    shared_ptr<int32_t> maxGracefulTerminationSec_ {};
    // The minimum number of pods allowed in each ReplicaSet before a node is scaled in. Default value: 0.
    shared_ptr<int32_t> minReplicaCount_ {};
    // The auto scaling priority configuration. After you create a node pool with auto scaling enabled, you can choose whether to configure the priority policy and priority configuration by referring to [Enable auto scaling for nodes](https://help.aliyun.com/document_detail/119099.html). This allows you to configure priorities for the scaling groups of specified auto scaling node pools. Valid values: 1 to 100. The value must be a positive integer. A larger value indicates a higher priority.
    shared_ptr<map<string, vector<string>>> priorities_ {};
    // Specifies whether to delete the corresponding Kubernetes node objects after nodes are successfully scaled in fast mode. For more information about fast mode, see [Scaling modes](https://help.aliyun.com/document_detail/119099.html). Default value: false. Valid values:
    // - true: Kubernetes node objects are also deleted after nodes are stopped in fast mode. Do not set this parameter to true because it may cause data inconsistency of Kubernetes objects.
    // - false: Kubernetes node objects are retained after nodes are stopped in fast mode.
    shared_ptr<bool> recycleNodeDeletionEnabled_ {};
    // Specifies whether to allow node scale-in. Valid values:
    // - true: Scale-in is allowed.
    // - false: Scale-in is prohibited.
    shared_ptr<bool> scaleDownEnabled_ {};
    // Specifies whether cluster-autoscaler performs scale-out when the number of ready nodes in the cluster is 0. Default value: true. Valid values:
    // - true: Scale-out is performed.
    // - false: Scale-out is not performed.
    shared_ptr<bool> scaleUpFromZero_ {};
    // The auto scaling component type. For clusters of version 1.24 and later, the default value is goatscaler. For clusters of earlier versions, the default value is cluster-autoscaler. Valid values:
    // - goatscaler: instant elasticity.
    // - cluster-autoscaler: auto scaling.
    shared_ptr<string> scalerType_ {};
    // The auto scaling sensitivity, which is used to adjust the interval at which the system evaluates scaling. Valid values: 15, 30, 60, 120, 180, and 300. Unit: seconds. Default value: 60.
    shared_ptr<string> scanInterval_ {};
    // Specifies whether cluster-autoscaler scales in nodes that contain pods with local storage, such as EmptyDir or HostPath. Valid values:
    // - true: The nodes are not scaled in.
    // - false: The nodes are scaled in.
    shared_ptr<bool> skipNodesWithLocalStorage_ {};
    // Specifies whether cluster-autoscaler scales in nodes that run pods in the kube-system namespace. This feature does not take effect for DaemonSet pods and mirror pods. Valid values:
    // - true: The nodes are not scaled in.
    // - false: The nodes are scaled in.
    shared_ptr<bool> skipNodesWithSystemPods_ {};
    // The cool-down period. This is the time interval during which the auto scaling component does not perform scale-in after the most recent scale-out is completed. Scaled-out nodes can be evaluated for scale-in only after the cool-down period ends. Valid values: 1 to 60. Unit: minutes. Default value: 10.
    shared_ptr<string> unneededDuration_ {};
    // The scale-in threshold, which is the ratio of requested resources to total resources on a node. A node can be scaled in only when this ratio is lower than the configured threshold, meaning that the utilization of both CPU and memory resources on the node is lower than the scale-in threshold. Valid values: 0.1 to 1. Default value: 0.5, which indicates 50%.
    shared_ptr<string> utilizationThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
