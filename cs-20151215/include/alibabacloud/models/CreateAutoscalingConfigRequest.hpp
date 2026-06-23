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
    // The scale-down trigger delay. The time interval between detecting a scale-down need (reaching the scale-down threshold) and actually performing the scale-down operation (reducing the number of Pods).
    // 
    // Valid values: [1,60]. Unit: minutes.
    // 
    // Default value: 10.
    shared_ptr<string> coolDownDuration_ {};
    // Specifies whether cluster-autoscaler evicts DaemonSet Pods on nodes during scale-down. Valid values:
    // - `true`: DaemonSet Pods are evicted.
    // - `false`: DaemonSet Pods are not evicted.
    shared_ptr<bool> daemonsetEvictionForNodes_ {};
    // The node pool scale-out order policy. Valid values:
    // - `least-waste`: The default policy. If multiple node pools are available for scale-out, the node pool with the least resource waste is selected.
    // - `random`: The random policy. If multiple node pools are available for scale-out, a random node pool is selected.
    // - `priority`: The priority policy. If multiple node pools are available for scale-out, the node pool with the highest priority is selected based on the custom scaling group order you defined. Node pool priorities are defined by the `priorities` parameter.
    shared_ptr<string> expander_ {};
    // The GPU scale-down threshold. The ratio of requested resources to total resources on a node.
    // 
    // A GPU node can be scaled down only when this ratio falls below the configured threshold, meaning the CPU, memory, and GPU utilization of the node are all below the GPU scale-down threshold.
    // 
    // Valid values: [0.1~1].
    // 
    // Default value: 0.3, which indicates 30%.
    shared_ptr<string> gpuUtilizationThreshold_ {};
    // The timeout period that cluster-autoscaler waits for Pod termination during node draining in scale-down scenarios.
    // 
    // Unit: seconds.
    // 
    // Default value: 14400.
    shared_ptr<int32_t> maxGracefulTerminationSec_ {};
    // The minimum number of Pods allowed in each ReplicaSet before a node can be scaled down.
    // 
    // Default value: 0.
    shared_ptr<int32_t> minReplicaCount_ {};
    // The priority configuration for automatic scaling. After you create a node pool with auto scaling enabled, you can choose whether to configure a priority policy and priority settings by using [Enable node auto scaling](https://help.aliyun.com/document_detail/119099.html) to assign priorities to the scaling groups of specified auto scaling node pools.
    // 
    // Valid values: [1, 100]. The value must be a positive integer. A larger value indicates a higher priority.
    shared_ptr<map<string, vector<string>>> priorities_ {};
    // Specifies whether to delete the corresponding Kubernetes Node object after a node is successfully scaled down in swift mode. For more information about swift mode, see [Scaling modes](https://help.aliyun.com/document_detail/119099.html). Default value: false. Valid values:
    // 
    // - `true`: The Kubernetes Node object is deleted after the node is stopped in swift mode. Setting this parameter to true is not recommended because it may cause Kubernetes object data inconsistency.
    // - `false`: The Kubernetes Node object is retained after the node is stopped in swift mode.
    shared_ptr<bool> recycleNodeDeletionEnabled_ {};
    // Specifies whether to allow node scale-down. Valid values:
    // - `true`: Scale-down is allowed.
    // - `false`: Scale-down is not allowed.
    shared_ptr<bool> scaleDownEnabled_ {};
    // Specifies whether cluster-autoscaler performs scale-out when the number of Ready nodes in the cluster is 0. Default value: true. Valid values:
    // 
    // - `true`: Scale-out is performed.
    // - `false`: Scale-out is not performed.
    shared_ptr<bool> scaleUpFromZero_ {};
    // The type of the auto scaling component. For clusters of version 1.24 and later, the default value is goatscaler. For earlier versions, the default value is cluster-autoscaler. Valid values:
    // 
    // - `goatscaler`: instant scaling.
    // 
    // - `cluster-autoscaler`: automatic scaling.
    shared_ptr<string> scalerType_ {};
    // The scaling sensitivity, which adjusts the interval at which the system evaluates scaling decisions.
    // 
    // Valid values: 15, 30, 60, 120, 180, and 300. Unit: seconds.
    // 
    // Default value: 60.
    shared_ptr<string> scanInterval_ {};
    // Specifies whether cluster-autoscaler skips scaling down nodes that run Pods with local storage (such as EmptyDir or HostPath). Valid values:
    // - `true`: Nodes are not scaled down.
    // - `false`: Nodes are scaled down.
    shared_ptr<bool> skipNodesWithLocalStorage_ {};
    // Specifies whether cluster-autoscaler skips scaling down nodes that run Pods in the kube-system namespace. This feature does not apply to DaemonSet Pods or Mirror Pods. Valid values:
    // - `true`: Nodes are not scaled down.
    // - `false`: Nodes are scaled down.
    shared_ptr<bool> skipNodesWithSystemPods_ {};
    // The cool-down period. The time interval after the most recent scale-out during which the auto scaling component does not perform scale-down operations. Nodes added during scale-out can only be evaluated for scale-down after the cool-down period expires.
    // 
    // Valid values: [1,60]. Unit: minutes.
    // 
    // Default value: 10.
    shared_ptr<string> unneededDuration_ {};
    // The scale-down threshold. The ratio of requested resources to total resources on a node.
    // 
    // A node can be scaled down only when this ratio falls below the configured threshold, meaning both the CPU and memory resources utilization of the node are below the scale-down threshold.
    // 
    // Valid values: [0.1~1].
    // 
    // Default value: 0.5, which indicates 50%.
    shared_ptr<string> utilizationThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
