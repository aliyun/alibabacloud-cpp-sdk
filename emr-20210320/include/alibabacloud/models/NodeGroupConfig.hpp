// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_NODEGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AutoScalingPolicy.hpp>
#include <alibabacloud/models/CostOptimizedConfig.hpp>
#include <alibabacloud/models/DataDisk.hpp>
#include <alibabacloud/models/PrivatePoolOptions.hpp>
#include <alibabacloud/models/SpotBidPrice.hpp>
#include <alibabacloud/models/SubscriptionConfig.hpp>
#include <alibabacloud/models/SystemDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class NodeGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalSecurityGroupIds, additionalSecurityGroupIds_);
      DARABONBA_PTR_TO_JSON(AutoScalingPolicy, autoScalingPolicy_);
      DARABONBA_PTR_TO_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_TO_JSON(ComponentTags, componentTags_);
      DARABONBA_PTR_TO_JSON(CostOptimizedConfig, costOptimizedConfig_);
      DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_TO_JSON(DeploymentSetStrategy, deploymentSetStrategy_);
      DARABONBA_PTR_TO_JSON(GracefulShutdown, gracefulShutdown_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(NodeGroupType, nodeGroupType_);
      DARABONBA_PTR_TO_JSON(NodeResizeStrategy, nodeResizeStrategy_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_TO_JSON(SpotBidPrices, spotBidPrices_);
      DARABONBA_PTR_TO_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SubscriptionConfig, subscriptionConfig_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(WithPublicIp, withPublicIp_);
    };
    friend void from_json(const Darabonba::Json& j, NodeGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalSecurityGroupIds, additionalSecurityGroupIds_);
      DARABONBA_PTR_FROM_JSON(AutoScalingPolicy, autoScalingPolicy_);
      DARABONBA_PTR_FROM_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_FROM_JSON(ComponentTags, componentTags_);
      DARABONBA_PTR_FROM_JSON(CostOptimizedConfig, costOptimizedConfig_);
      DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetStrategy, deploymentSetStrategy_);
      DARABONBA_PTR_FROM_JSON(GracefulShutdown, gracefulShutdown_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(NodeGroupType, nodeGroupType_);
      DARABONBA_PTR_FROM_JSON(NodeResizeStrategy, nodeResizeStrategy_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_FROM_JSON(SpotBidPrices, spotBidPrices_);
      DARABONBA_PTR_FROM_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SubscriptionConfig, subscriptionConfig_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(WithPublicIp, withPublicIp_);
    };
    NodeGroupConfig() = default ;
    NodeGroupConfig(const NodeGroupConfig &) = default ;
    NodeGroupConfig(NodeGroupConfig &&) = default ;
    NodeGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeGroupConfig() = default ;
    NodeGroupConfig& operator=(const NodeGroupConfig &) = default ;
    NodeGroupConfig& operator=(NodeGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalSecurityGroupIds_ == nullptr
        && this->autoScalingPolicy_ == nullptr && this->compensateWithOnDemand_ == nullptr && this->componentTags_ == nullptr && this->costOptimizedConfig_ == nullptr && this->dataDisks_ == nullptr
        && this->deploymentSetStrategy_ == nullptr && this->gracefulShutdown_ == nullptr && this->instanceTypes_ == nullptr && this->nodeCount_ == nullptr && this->nodeGroupName_ == nullptr
        && this->nodeGroupType_ == nullptr && this->nodeResizeStrategy_ == nullptr && this->paymentType_ == nullptr && this->privatePoolOptions_ == nullptr && this->spotBidPrices_ == nullptr
        && this->spotInstanceRemedy_ == nullptr && this->spotStrategy_ == nullptr && this->subscriptionConfig_ == nullptr && this->systemDisk_ == nullptr && this->vSwitchIds_ == nullptr
        && this->withPublicIp_ == nullptr; };
    // additionalSecurityGroupIds Field Functions 
    bool hasAdditionalSecurityGroupIds() const { return this->additionalSecurityGroupIds_ != nullptr;};
    void deleteAdditionalSecurityGroupIds() { this->additionalSecurityGroupIds_ = nullptr;};
    inline const vector<string> & getAdditionalSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(additionalSecurityGroupIds_, vector<string>) };
    inline vector<string> getAdditionalSecurityGroupIds() { DARABONBA_PTR_GET(additionalSecurityGroupIds_, vector<string>) };
    inline NodeGroupConfig& setAdditionalSecurityGroupIds(const vector<string> & additionalSecurityGroupIds) { DARABONBA_PTR_SET_VALUE(additionalSecurityGroupIds_, additionalSecurityGroupIds) };
    inline NodeGroupConfig& setAdditionalSecurityGroupIds(vector<string> && additionalSecurityGroupIds) { DARABONBA_PTR_SET_RVALUE(additionalSecurityGroupIds_, additionalSecurityGroupIds) };


    // autoScalingPolicy Field Functions 
    bool hasAutoScalingPolicy() const { return this->autoScalingPolicy_ != nullptr;};
    void deleteAutoScalingPolicy() { this->autoScalingPolicy_ = nullptr;};
    inline const AutoScalingPolicy & getAutoScalingPolicy() const { DARABONBA_PTR_GET_CONST(autoScalingPolicy_, AutoScalingPolicy) };
    inline AutoScalingPolicy getAutoScalingPolicy() { DARABONBA_PTR_GET(autoScalingPolicy_, AutoScalingPolicy) };
    inline NodeGroupConfig& setAutoScalingPolicy(const AutoScalingPolicy & autoScalingPolicy) { DARABONBA_PTR_SET_VALUE(autoScalingPolicy_, autoScalingPolicy) };
    inline NodeGroupConfig& setAutoScalingPolicy(AutoScalingPolicy && autoScalingPolicy) { DARABONBA_PTR_SET_RVALUE(autoScalingPolicy_, autoScalingPolicy) };


    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool getCompensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline NodeGroupConfig& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // componentTags Field Functions 
    bool hasComponentTags() const { return this->componentTags_ != nullptr;};
    void deleteComponentTags() { this->componentTags_ = nullptr;};
    inline const vector<string> & getComponentTags() const { DARABONBA_PTR_GET_CONST(componentTags_, vector<string>) };
    inline vector<string> getComponentTags() { DARABONBA_PTR_GET(componentTags_, vector<string>) };
    inline NodeGroupConfig& setComponentTags(const vector<string> & componentTags) { DARABONBA_PTR_SET_VALUE(componentTags_, componentTags) };
    inline NodeGroupConfig& setComponentTags(vector<string> && componentTags) { DARABONBA_PTR_SET_RVALUE(componentTags_, componentTags) };


    // costOptimizedConfig Field Functions 
    bool hasCostOptimizedConfig() const { return this->costOptimizedConfig_ != nullptr;};
    void deleteCostOptimizedConfig() { this->costOptimizedConfig_ = nullptr;};
    inline const CostOptimizedConfig & getCostOptimizedConfig() const { DARABONBA_PTR_GET_CONST(costOptimizedConfig_, CostOptimizedConfig) };
    inline CostOptimizedConfig getCostOptimizedConfig() { DARABONBA_PTR_GET(costOptimizedConfig_, CostOptimizedConfig) };
    inline NodeGroupConfig& setCostOptimizedConfig(const CostOptimizedConfig & costOptimizedConfig) { DARABONBA_PTR_SET_VALUE(costOptimizedConfig_, costOptimizedConfig) };
    inline NodeGroupConfig& setCostOptimizedConfig(CostOptimizedConfig && costOptimizedConfig) { DARABONBA_PTR_SET_RVALUE(costOptimizedConfig_, costOptimizedConfig) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<DataDisk> & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<DataDisk>) };
    inline vector<DataDisk> getDataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<DataDisk>) };
    inline NodeGroupConfig& setDataDisks(const vector<DataDisk> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline NodeGroupConfig& setDataDisks(vector<DataDisk> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // deploymentSetStrategy Field Functions 
    bool hasDeploymentSetStrategy() const { return this->deploymentSetStrategy_ != nullptr;};
    void deleteDeploymentSetStrategy() { this->deploymentSetStrategy_ = nullptr;};
    inline string getDeploymentSetStrategy() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetStrategy_, "") };
    inline NodeGroupConfig& setDeploymentSetStrategy(string deploymentSetStrategy) { DARABONBA_PTR_SET_VALUE(deploymentSetStrategy_, deploymentSetStrategy) };


    // gracefulShutdown Field Functions 
    bool hasGracefulShutdown() const { return this->gracefulShutdown_ != nullptr;};
    void deleteGracefulShutdown() { this->gracefulShutdown_ = nullptr;};
    inline bool getGracefulShutdown() const { DARABONBA_PTR_GET_DEFAULT(gracefulShutdown_, false) };
    inline NodeGroupConfig& setGracefulShutdown(bool gracefulShutdown) { DARABONBA_PTR_SET_VALUE(gracefulShutdown_, gracefulShutdown) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline NodeGroupConfig& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline NodeGroupConfig& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline NodeGroupConfig& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline NodeGroupConfig& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // nodeGroupType Field Functions 
    bool hasNodeGroupType() const { return this->nodeGroupType_ != nullptr;};
    void deleteNodeGroupType() { this->nodeGroupType_ = nullptr;};
    inline string getNodeGroupType() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupType_, "") };
    inline NodeGroupConfig& setNodeGroupType(string nodeGroupType) { DARABONBA_PTR_SET_VALUE(nodeGroupType_, nodeGroupType) };


    // nodeResizeStrategy Field Functions 
    bool hasNodeResizeStrategy() const { return this->nodeResizeStrategy_ != nullptr;};
    void deleteNodeResizeStrategy() { this->nodeResizeStrategy_ = nullptr;};
    inline string getNodeResizeStrategy() const { DARABONBA_PTR_GET_DEFAULT(nodeResizeStrategy_, "") };
    inline NodeGroupConfig& setNodeResizeStrategy(string nodeResizeStrategy) { DARABONBA_PTR_SET_VALUE(nodeResizeStrategy_, nodeResizeStrategy) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline NodeGroupConfig& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const PrivatePoolOptions & getPrivatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, PrivatePoolOptions) };
    inline PrivatePoolOptions getPrivatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, PrivatePoolOptions) };
    inline NodeGroupConfig& setPrivatePoolOptions(const PrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline NodeGroupConfig& setPrivatePoolOptions(PrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // spotBidPrices Field Functions 
    bool hasSpotBidPrices() const { return this->spotBidPrices_ != nullptr;};
    void deleteSpotBidPrices() { this->spotBidPrices_ = nullptr;};
    inline const vector<SpotBidPrice> & getSpotBidPrices() const { DARABONBA_PTR_GET_CONST(spotBidPrices_, vector<SpotBidPrice>) };
    inline vector<SpotBidPrice> getSpotBidPrices() { DARABONBA_PTR_GET(spotBidPrices_, vector<SpotBidPrice>) };
    inline NodeGroupConfig& setSpotBidPrices(const vector<SpotBidPrice> & spotBidPrices) { DARABONBA_PTR_SET_VALUE(spotBidPrices_, spotBidPrices) };
    inline NodeGroupConfig& setSpotBidPrices(vector<SpotBidPrice> && spotBidPrices) { DARABONBA_PTR_SET_RVALUE(spotBidPrices_, spotBidPrices) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool getSpotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline NodeGroupConfig& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline NodeGroupConfig& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // subscriptionConfig Field Functions 
    bool hasSubscriptionConfig() const { return this->subscriptionConfig_ != nullptr;};
    void deleteSubscriptionConfig() { this->subscriptionConfig_ = nullptr;};
    inline const SubscriptionConfig & getSubscriptionConfig() const { DARABONBA_PTR_GET_CONST(subscriptionConfig_, SubscriptionConfig) };
    inline SubscriptionConfig getSubscriptionConfig() { DARABONBA_PTR_GET(subscriptionConfig_, SubscriptionConfig) };
    inline NodeGroupConfig& setSubscriptionConfig(const SubscriptionConfig & subscriptionConfig) { DARABONBA_PTR_SET_VALUE(subscriptionConfig_, subscriptionConfig) };
    inline NodeGroupConfig& setSubscriptionConfig(SubscriptionConfig && subscriptionConfig) { DARABONBA_PTR_SET_RVALUE(subscriptionConfig_, subscriptionConfig) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, SystemDisk) };
    inline SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, SystemDisk) };
    inline NodeGroupConfig& setSystemDisk(const SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline NodeGroupConfig& setSystemDisk(SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline NodeGroupConfig& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline NodeGroupConfig& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // withPublicIp Field Functions 
    bool hasWithPublicIp() const { return this->withPublicIp_ != nullptr;};
    void deleteWithPublicIp() { this->withPublicIp_ = nullptr;};
    inline bool getWithPublicIp() const { DARABONBA_PTR_GET_DEFAULT(withPublicIp_, false) };
    inline NodeGroupConfig& setWithPublicIp(bool withPublicIp) { DARABONBA_PTR_SET_VALUE(withPublicIp_, withPublicIp) };


  protected:
    // The IDs of the additional security groups. In addition to the security group of the cluster, you can specify additional security groups for the node group. You can specify up to two security group IDs.
    shared_ptr<vector<string>> additionalSecurityGroupIds_ {};
    // The auto scaling policy.
    shared_ptr<AutoScalingPolicy> autoScalingPolicy_ {};
    // Specifies whether to automatically create pay-as-you-go instances to meet the required capacity when the number of preemptible instances is insufficient. This parameter is effective only when `nodeResizeStrategy` is set to `COST_OPTIMIZED`.
    shared_ptr<bool> compensateWithOnDemand_ {};
    // A list of custom component tags.
    shared_ptr<vector<string>> componentTags_ {};
    // The cost optimization settings.
    shared_ptr<CostOptimizedConfig> costOptimizedConfig_ {};
    // The data disks. Currently, the array can contain only one data disk.
    shared_ptr<vector<DataDisk>> dataDisks_ {};
    // The deployment set strategy. Valid values:
    // 
    // - `NONE`: No deployment sets are used.
    // 
    // - `CLUSTER`: The cluster-level deployment set is used.
    // 
    // - `NODE_GROUP`: The node group-level deployment set is used.
    // 
    // Default value: `NONE`.
    shared_ptr<string> deploymentSetStrategy_ {};
    // Specifies whether to enable graceful shutdown for the components in the node group. Valid values:
    // 
    // - `true`: Enables graceful shutdown.
    // 
    // - `false`: Disables graceful shutdown.
    // 
    // Default value: `false`.
    shared_ptr<bool> gracefulShutdown_ {};
    // The instance types. You can specify 1 to 100 instance types.
    shared_ptr<vector<string>> instanceTypes_ {};
    // The number of nodes in the node group. Valid values: 1 to 1,000.
    shared_ptr<int32_t> nodeCount_ {};
    // The name of the node group. The name can be up to 128 characters in length and must be unique within the cluster.
    shared_ptr<string> nodeGroupName_ {};
    // The type of the node group. Valid values:
    // 
    // - `MASTER`: a master node group.
    // 
    // - `CORE`: a core node group.
    // 
    // - `TASK`: a task node group.
    // 
    // This parameter is required.
    shared_ptr<string> nodeGroupType_ {};
    // The node scale-out strategy. Valid values:
    // 
    // - `COST_OPTIMIZED`: The cost-optimized strategy.
    // 
    // - `PRIORITY`: The priority-based strategy.
    // 
    // Default value: `PRIORITY`.
    shared_ptr<string> nodeResizeStrategy_ {};
    // The billing method of the node group. If you do not specify this parameter, the billing method of the cluster is used. Valid values:
    // 
    // - `PayAsYouGo`: pay-as-you-go.
    // 
    // - `Subscription`: subscription.
    // 
    // Default value: `PayAsYouGo`.
    shared_ptr<string> paymentType_ {};
    // The private pool options. This parameter is effective only when you create pay-as-you-go instances.
    shared_ptr<PrivatePoolOptions> privatePoolOptions_ {};
    // The bid prices for the preemptible instances. This parameter is effective only when `SpotStrategy` is set to `SpotWithPriceLimit`. You can specify up to 100 bid prices.
    shared_ptr<vector<SpotBidPrice>> spotBidPrices_ {};
    // If enabled, the auto scaling group attempts to create a new instance to replace a spot instance that is about to be reclaimed. This process is triggered when the auto scaling group receives a system message about the impending reclamation. Valid values:
    // 
    // - `true`: The auto scaling group attempts to replace a spot instance that is about to be reclaimed.
    // 
    // - `false`: The auto scaling group does not attempt to replace a spot instance that is about to be reclaimed.
    // 
    // Default value: `false`.
    shared_ptr<bool> spotInstanceRemedy_ {};
    // The preemption strategy for preemptible instances. Valid values:
    // 
    // - `NoSpot`: pay-as-you-go instances.
    // 
    // - `SpotWithPriceLimit`: preemptible instances with a user-defined maximum hourly price.
    // 
    // - `SpotAsPriceGo`: preemptible instances that are automatically bid at the pay-as-you-go price.
    // 
    // Default value: `NoSpot`.
    shared_ptr<string> spotStrategy_ {};
    // The subscription settings of the node group. If you do not specify this parameter, the subscription settings of the cluster are used.
    shared_ptr<SubscriptionConfig> subscriptionConfig_ {};
    // The system disk.
    shared_ptr<SystemDisk> systemDisk_ {};
    // The vSwitch IDs. You can specify 1 to 20 vSwitch IDs.
    shared_ptr<vector<string>> vSwitchIds_ {};
    // Specifies whether to assign a public IP address to the instances. Valid values:
    // 
    // - `true`: Assigns a public IP address.
    // 
    // - `false`: Does not assign a public IP address.
    // 
    // Default value: `false`.
    shared_ptr<bool> withPublicIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
