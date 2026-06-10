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
    // The cool-down duration for scale-in events. This is the time interval from when the system detects a node is eligible for a scale-in to when the scale-in operation is executed.
    // 
    // Valid values: 1 to 60. Unit: minutes.
    // 
    // Default value: 10.
    shared_ptr<string> coolDownDuration_ {};
    // Specifies whether `cluster-autoscaler` evicts DaemonSet Pods from nodes during a scale-in event. Valid values:
    // 
    // - `true`: Perform eviction.
    // 
    // - `false`: Do not perform eviction.
    shared_ptr<bool> daemonsetEvictionForNodes_ {};
    // The strategy for selecting a node pool for a scale-out when multiple node pools are available. Valid values:
    // 
    // - `least-waste`: The default strategy. The scaler selects the node pool that will have the least idle resources after a scale-out.
    // 
    // - `random`: The scaler selects a random node pool from the list of eligible node pools.
    // 
    // - `priority`: The scaler selects the node pool that has the highest priority. You must configure the priority of each scaling group by using the `priorities` parameter.
    shared_ptr<string> expander_ {};
    // The GPU utilization threshold for a scale-in on GPU nodes, which is the ratio of requested resources to total allocatable resources on a node.
    // 
    // A GPU node is eligible for a scale-in only if its CPU, memory, and GPU utilization all fall below this threshold.
    // 
    // Valid values: [0.1, 1].
    // 
    // Default value: 0.3 (30%).
    shared_ptr<string> gpuUtilizationThreshold_ {};
    // The maximum duration in seconds that `cluster-autoscaler` waits for Pods to terminate during a node drain for a scale-in event.
    // 
    // Unit: seconds.
    // 
    // Default value: 14400.
    shared_ptr<int32_t> maxGracefulTerminationSec_ {};
    // The minimum number of Pods that must remain for any ReplicaSet after a scale-in operation. Nodes will not be scaled-in if doing so would violate this minimum.
    // 
    // Default value: 0.
    shared_ptr<int32_t> minReplicaCount_ {};
    // Configures the priorities for scaling groups. This is used when the `expander` strategy is set to `priority`. After you create a node pool and enable autoscaling for it, you can configure the priority of its associated scaling group. For more information, see [Enable node autoscaling](https://help.aliyun.com/document_detail/119099.html).
    // 
    // The priority must be a positive integer from 1 to 100. A larger value indicates a higher priority.
    shared_ptr<map<string, vector<string>>> priorities_ {};
    // Specifies whether to delete the Kubernetes Node object after a node is successfully scaled-in using fast scaling mode. For more information, see [Scaling modes](https://help.aliyun.com/document_detail/119099.html). Default value: false. Valid values:
    // 
    // - `true`: The Node object is deleted after the instance is stopped. We do not recommend this setting because it can cause data inconsistencies in Kubernetes.
    // 
    // - `false`: The Node object is retained after the instance is stopped.
    shared_ptr<bool> recycleNodeDeletionEnabled_ {};
    // Specifies whether to allow node scale-in operations. Valid values:
    // 
    // - `true`: Allows scale-in operations.
    // 
    // - `false`: Disables scale-in operations.
    shared_ptr<bool> scaleDownEnabled_ {};
    // Controls whether `cluster-autoscaler` performs a scale-out operation when there are no ready nodes in the cluster. Default value: true. Valid values:
    // 
    // - `true`: A scale-out operation is performed.
    // 
    // - `false`: No scale-out operation is performed.
    shared_ptr<bool> scaleUpFromZero_ {};
    // The type of scaler to use. In clusters that run Kubernetes 1.24 or later, the default is goatscaler. In clusters that run an earlier version, the default is cluster-autoscaler. Valid values:
    // 
    // - `goatscaler`: The proprietary scaler for fast scaling.
    // 
    // - `cluster-autoscaler`: The standard Kubernetes cluster autoscaler.
    shared_ptr<string> scalerType_ {};
    // The frequency at which the system checks for scaling conditions.
    // 
    // Valid values: 15, 30, 60, 120, 180, and 300. Unit: seconds.
    // 
    // Default value: 60.
    shared_ptr<string> scanInterval_ {};
    // Controls whether `cluster-autoscaler` can scale-in nodes that run Pods using local storage (for example, with `emptyDir` or `hostPath` volumes). Valid values:
    // 
    // - `true`: Prevents these nodes from being scaled-in.
    // 
    // - `false`: Allows these nodes to be scaled-in.
    shared_ptr<bool> skipNodesWithLocalStorage_ {};
    // Controls whether `cluster-autoscaler` can scale-in nodes that run Pods from the `kube-system` namespace. This setting does not affect DaemonSet or mirror Pods. Valid values:
    // 
    // - `true`: Prevents these nodes from being scaled-in.
    // 
    // - `false`: Allows these nodes to be scaled-in.
    shared_ptr<bool> skipNodesWithSystemPods_ {};
    // The stabilization window. This is the period after a scale-out event during which the scaler does not perform scale-in operations.
    // 
    // Valid values: 1 to 60. Unit: minutes.
    // 
    // Default value: 10.
    shared_ptr<string> unneededDuration_ {};
    // The utilization threshold for a scale-in, which is the ratio of requested resources to the total allocatable resources on a node.
    // 
    // A node is eligible for a scale-in only when both its CPU and memory utilization fall below this threshold.
    // 
    // Valid values: [0.1, 1].
    // 
    // Default value: 0.5 (50%).
    shared_ptr<string> utilizationThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
