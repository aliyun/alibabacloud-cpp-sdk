// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEGROUP_HPP_
#define ALIBABACLOUD_MODELS_NODEGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CostOptimizedConfig.hpp>
#include <alibabacloud/models/DataDisk.hpp>
#include <alibabacloud/models/PrivatePoolOptions.hpp>
#include <alibabacloud/models/SpotBidPrice.hpp>
#include <alibabacloud/models/NodeGroupStateChangeReason.hpp>
#include <alibabacloud/models/SystemDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class NodeGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeGroup& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalSecurityGroupIds, additionalSecurityGroupIds_);
      DARABONBA_PTR_TO_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_TO_JSON(CostOptimizedConfig, costOptimizedConfig_);
      DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_TO_JSON(DeploymentSetStrategy, deploymentSetStrategy_);
      DARABONBA_PTR_TO_JSON(GracefulShutdown, gracefulShutdown_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(NodeGroupState, nodeGroupState_);
      DARABONBA_PTR_TO_JSON(NodeGroupType, nodeGroupType_);
      DARABONBA_PTR_TO_JSON(NodeResizeStrategy, nodeResizeStrategy_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_TO_JSON(RunningNodeCount, runningNodeCount_);
      DARABONBA_PTR_TO_JSON(SpotBidPrices, spotBidPrices_);
      DARABONBA_PTR_TO_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(StateChangeReason, stateChangeReason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(WithPublicIp, withPublicIp_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, NodeGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalSecurityGroupIds, additionalSecurityGroupIds_);
      DARABONBA_PTR_FROM_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_FROM_JSON(CostOptimizedConfig, costOptimizedConfig_);
      DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetStrategy, deploymentSetStrategy_);
      DARABONBA_PTR_FROM_JSON(GracefulShutdown, gracefulShutdown_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(NodeGroupState, nodeGroupState_);
      DARABONBA_PTR_FROM_JSON(NodeGroupType, nodeGroupType_);
      DARABONBA_PTR_FROM_JSON(NodeResizeStrategy, nodeResizeStrategy_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_FROM_JSON(RunningNodeCount, runningNodeCount_);
      DARABONBA_PTR_FROM_JSON(SpotBidPrices, spotBidPrices_);
      DARABONBA_PTR_FROM_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(StateChangeReason, stateChangeReason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(WithPublicIp, withPublicIp_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    NodeGroup() = default ;
    NodeGroup(const NodeGroup &) = default ;
    NodeGroup(NodeGroup &&) = default ;
    NodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeGroup() = default ;
    NodeGroup& operator=(const NodeGroup &) = default ;
    NodeGroup& operator=(NodeGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalSecurityGroupIds_ == nullptr
        && this->compensateWithOnDemand_ == nullptr && this->costOptimizedConfig_ == nullptr && this->dataDisks_ == nullptr && this->deploymentSetStrategy_ == nullptr && this->gracefulShutdown_ == nullptr
        && this->instanceTypes_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeGroupName_ == nullptr && this->nodeGroupState_ == nullptr && this->nodeGroupType_ == nullptr
        && this->nodeResizeStrategy_ == nullptr && this->paymentType_ == nullptr && this->privatePoolOptions_ == nullptr && this->runningNodeCount_ == nullptr && this->spotBidPrices_ == nullptr
        && this->spotInstanceRemedy_ == nullptr && this->spotStrategy_ == nullptr && this->stateChangeReason_ == nullptr && this->status_ == nullptr && this->systemDisk_ == nullptr
        && this->vSwitchIds_ == nullptr && this->withPublicIp_ == nullptr && this->zoneId_ == nullptr; };
    // additionalSecurityGroupIds Field Functions 
    bool hasAdditionalSecurityGroupIds() const { return this->additionalSecurityGroupIds_ != nullptr;};
    void deleteAdditionalSecurityGroupIds() { this->additionalSecurityGroupIds_ = nullptr;};
    inline const vector<string> & getAdditionalSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(additionalSecurityGroupIds_, vector<string>) };
    inline vector<string> getAdditionalSecurityGroupIds() { DARABONBA_PTR_GET(additionalSecurityGroupIds_, vector<string>) };
    inline NodeGroup& setAdditionalSecurityGroupIds(const vector<string> & additionalSecurityGroupIds) { DARABONBA_PTR_SET_VALUE(additionalSecurityGroupIds_, additionalSecurityGroupIds) };
    inline NodeGroup& setAdditionalSecurityGroupIds(vector<string> && additionalSecurityGroupIds) { DARABONBA_PTR_SET_RVALUE(additionalSecurityGroupIds_, additionalSecurityGroupIds) };


    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool getCompensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline NodeGroup& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // costOptimizedConfig Field Functions 
    bool hasCostOptimizedConfig() const { return this->costOptimizedConfig_ != nullptr;};
    void deleteCostOptimizedConfig() { this->costOptimizedConfig_ = nullptr;};
    inline const CostOptimizedConfig & getCostOptimizedConfig() const { DARABONBA_PTR_GET_CONST(costOptimizedConfig_, CostOptimizedConfig) };
    inline CostOptimizedConfig getCostOptimizedConfig() { DARABONBA_PTR_GET(costOptimizedConfig_, CostOptimizedConfig) };
    inline NodeGroup& setCostOptimizedConfig(const CostOptimizedConfig & costOptimizedConfig) { DARABONBA_PTR_SET_VALUE(costOptimizedConfig_, costOptimizedConfig) };
    inline NodeGroup& setCostOptimizedConfig(CostOptimizedConfig && costOptimizedConfig) { DARABONBA_PTR_SET_RVALUE(costOptimizedConfig_, costOptimizedConfig) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<DataDisk> & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<DataDisk>) };
    inline vector<DataDisk> getDataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<DataDisk>) };
    inline NodeGroup& setDataDisks(const vector<DataDisk> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline NodeGroup& setDataDisks(vector<DataDisk> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // deploymentSetStrategy Field Functions 
    bool hasDeploymentSetStrategy() const { return this->deploymentSetStrategy_ != nullptr;};
    void deleteDeploymentSetStrategy() { this->deploymentSetStrategy_ = nullptr;};
    inline string getDeploymentSetStrategy() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetStrategy_, "") };
    inline NodeGroup& setDeploymentSetStrategy(string deploymentSetStrategy) { DARABONBA_PTR_SET_VALUE(deploymentSetStrategy_, deploymentSetStrategy) };


    // gracefulShutdown Field Functions 
    bool hasGracefulShutdown() const { return this->gracefulShutdown_ != nullptr;};
    void deleteGracefulShutdown() { this->gracefulShutdown_ = nullptr;};
    inline bool getGracefulShutdown() const { DARABONBA_PTR_GET_DEFAULT(gracefulShutdown_, false) };
    inline NodeGroup& setGracefulShutdown(bool gracefulShutdown) { DARABONBA_PTR_SET_VALUE(gracefulShutdown_, gracefulShutdown) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline NodeGroup& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline NodeGroup& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline NodeGroup& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline NodeGroup& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // nodeGroupState Field Functions 
    bool hasNodeGroupState() const { return this->nodeGroupState_ != nullptr;};
    void deleteNodeGroupState() { this->nodeGroupState_ = nullptr;};
    inline string getNodeGroupState() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupState_, "") };
    inline NodeGroup& setNodeGroupState(string nodeGroupState) { DARABONBA_PTR_SET_VALUE(nodeGroupState_, nodeGroupState) };


    // nodeGroupType Field Functions 
    bool hasNodeGroupType() const { return this->nodeGroupType_ != nullptr;};
    void deleteNodeGroupType() { this->nodeGroupType_ = nullptr;};
    inline string getNodeGroupType() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupType_, "") };
    inline NodeGroup& setNodeGroupType(string nodeGroupType) { DARABONBA_PTR_SET_VALUE(nodeGroupType_, nodeGroupType) };


    // nodeResizeStrategy Field Functions 
    bool hasNodeResizeStrategy() const { return this->nodeResizeStrategy_ != nullptr;};
    void deleteNodeResizeStrategy() { this->nodeResizeStrategy_ = nullptr;};
    inline string getNodeResizeStrategy() const { DARABONBA_PTR_GET_DEFAULT(nodeResizeStrategy_, "") };
    inline NodeGroup& setNodeResizeStrategy(string nodeResizeStrategy) { DARABONBA_PTR_SET_VALUE(nodeResizeStrategy_, nodeResizeStrategy) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline NodeGroup& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const PrivatePoolOptions & getPrivatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, PrivatePoolOptions) };
    inline PrivatePoolOptions getPrivatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, PrivatePoolOptions) };
    inline NodeGroup& setPrivatePoolOptions(const PrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline NodeGroup& setPrivatePoolOptions(PrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // runningNodeCount Field Functions 
    bool hasRunningNodeCount() const { return this->runningNodeCount_ != nullptr;};
    void deleteRunningNodeCount() { this->runningNodeCount_ = nullptr;};
    inline int32_t getRunningNodeCount() const { DARABONBA_PTR_GET_DEFAULT(runningNodeCount_, 0) };
    inline NodeGroup& setRunningNodeCount(int32_t runningNodeCount) { DARABONBA_PTR_SET_VALUE(runningNodeCount_, runningNodeCount) };


    // spotBidPrices Field Functions 
    bool hasSpotBidPrices() const { return this->spotBidPrices_ != nullptr;};
    void deleteSpotBidPrices() { this->spotBidPrices_ = nullptr;};
    inline const vector<SpotBidPrice> & getSpotBidPrices() const { DARABONBA_PTR_GET_CONST(spotBidPrices_, vector<SpotBidPrice>) };
    inline vector<SpotBidPrice> getSpotBidPrices() { DARABONBA_PTR_GET(spotBidPrices_, vector<SpotBidPrice>) };
    inline NodeGroup& setSpotBidPrices(const vector<SpotBidPrice> & spotBidPrices) { DARABONBA_PTR_SET_VALUE(spotBidPrices_, spotBidPrices) };
    inline NodeGroup& setSpotBidPrices(vector<SpotBidPrice> && spotBidPrices) { DARABONBA_PTR_SET_RVALUE(spotBidPrices_, spotBidPrices) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool getSpotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline NodeGroup& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline NodeGroup& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // stateChangeReason Field Functions 
    bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
    void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
    inline const NodeGroupStateChangeReason & getStateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, NodeGroupStateChangeReason) };
    inline NodeGroupStateChangeReason getStateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, NodeGroupStateChangeReason) };
    inline NodeGroup& setStateChangeReason(const NodeGroupStateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
    inline NodeGroup& setStateChangeReason(NodeGroupStateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline NodeGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, SystemDisk) };
    inline SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, SystemDisk) };
    inline NodeGroup& setSystemDisk(const SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline NodeGroup& setSystemDisk(SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline NodeGroup& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline NodeGroup& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // withPublicIp Field Functions 
    bool hasWithPublicIp() const { return this->withPublicIp_ != nullptr;};
    void deleteWithPublicIp() { this->withPublicIp_ = nullptr;};
    inline bool getWithPublicIp() const { DARABONBA_PTR_GET_DEFAULT(withPublicIp_, false) };
    inline NodeGroup& setWithPublicIp(bool withPublicIp) { DARABONBA_PTR_SET_VALUE(withPublicIp_, withPublicIp) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline NodeGroup& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The additional security group IDs.
    shared_ptr<vector<string>> additionalSecurityGroupIds_ {};
    // Applies only when `NodeResizeStrategy` is set to `COST_OPTIMIZED`. If set to `true`, the system creates Pay-As-You-Go instances to meet the target capacity if it fails to create enough spot instances due to price or inventory constraints.
    shared_ptr<bool> compensateWithOnDemand_ {};
    // The configurations of the cost-optimized mode.
    shared_ptr<CostOptimizedConfig> costOptimizedConfig_ {};
    // The data disks.
    shared_ptr<vector<DataDisk>> dataDisks_ {};
    // The Deployment Set strategy. Valid values:
    // 
    // - NONE: Does not use a Deployment Set.
    // 
    // - CLUSTER: Uses a cluster-level Deployment Set.
    // 
    // - NODE_GROUP: Uses a node group-level Deployment Set.
    // 
    // Default: `NONE`.
    shared_ptr<string> deploymentSetStrategy_ {};
    // Specifies whether to enable graceful shutdown for components deployed in the node group. Valid values:
    // 
    // - true: Enables graceful shutdown.
    // 
    // - false: Disables graceful shutdown.
    shared_ptr<bool> gracefulShutdown_ {};
    // The instance types.
    shared_ptr<vector<string>> instanceTypes_ {};
    // The node group ID.
    shared_ptr<string> nodeGroupId_ {};
    // The node group name.
    shared_ptr<string> nodeGroupName_ {};
    // The state of the node group.
    shared_ptr<string> nodeGroupState_ {};
    // The type of the node group. Valid values:
    // 
    // - MASTER: A master node.
    // 
    // - CORE: A core node.
    // 
    // - TASK: A task node.
    // 
    // - GATEWAY: A gateway node. This value is not applicable to DATALAKE, OLAP, or DATASERVING clusters.
    shared_ptr<string> nodeGroupType_ {};
    // - COST_OPTIMIZED: The cost-optimized strategy.
    // 
    // - PRIORITY: The priority-based strategy.
    shared_ptr<string> nodeResizeStrategy_ {};
    // The payment type. Valid values are `Subscription` for the subscription billing method and `PayAsYouGo` for the Pay-As-You-Go billing method.
    shared_ptr<string> paymentType_ {};
    // The private pool options.
    shared_ptr<PrivatePoolOptions> privatePoolOptions_ {};
    // The number of running nodes.
    shared_ptr<int32_t> runningNodeCount_ {};
    // The bid prices for the spot instances. This parameter is effective only when `SpotStrategy` is set to `SpotWithPriceLimit`. The array can contain 0 to 100 elements.
    shared_ptr<vector<SpotBidPrice>> spotBidPrices_ {};
    // Specifies whether to enable spot instance remedy. If enabled, the scaling group attempts to create a new instance to replace a spot instance that is about to be reclaimed. Valid values:
    // 
    // - true: Enables spot instance remedy.
    // 
    // - false: Disables spot instance remedy.
    // 
    // Default: `false`.
    shared_ptr<bool> spotInstanceRemedy_ {};
    // The policy for using spot instances. Valid values:
    // 
    // - NoSpot: No spot instances are used.
    // 
    // - SpotWithPriceLimit: Spot instances are created with a user-defined maximum bid price.
    // 
    // - SpotAsPriceGo: The system automatically bids for spot instances. The bid price does not exceed the price of a Pay-As-You-Go instance.
    // 
    // Default: `NoSpot`.
    shared_ptr<string> spotStrategy_ {};
    // The reason for the state change.
    shared_ptr<NodeGroupStateChangeReason> stateChangeReason_ {};
    // The node group state.
    shared_ptr<string> status_ {};
    // The system disk.
    shared_ptr<SystemDisk> systemDisk_ {};
    // The VSwitch IDs.
    shared_ptr<vector<string>> vSwitchIds_ {};
    // Specifies whether to assign a public IP address.
    shared_ptr<bool> withPublicIp_ {};
    // The zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
