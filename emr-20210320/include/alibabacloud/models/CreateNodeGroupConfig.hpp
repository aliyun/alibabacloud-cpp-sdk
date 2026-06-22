// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODEGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATENODEGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AutoScalingPolicy.hpp>
#include <alibabacloud/models/CostOptimizedConfig.hpp>
#include <alibabacloud/models/DataDisk.hpp>
#include <alibabacloud/models/PrivatePoolOptions.hpp>
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
  class CreateNodeGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeGroupConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateNodeGroupConfig& obj) { 
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
    CreateNodeGroupConfig() = default ;
    CreateNodeGroupConfig(const CreateNodeGroupConfig &) = default ;
    CreateNodeGroupConfig(CreateNodeGroupConfig &&) = default ;
    CreateNodeGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeGroupConfig() = default ;
    CreateNodeGroupConfig& operator=(const CreateNodeGroupConfig &) = default ;
    CreateNodeGroupConfig& operator=(CreateNodeGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SpotBidPrices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SpotBidPrices& obj) { 
        DARABONBA_PTR_TO_JSON(BidPrice, bidPrice_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      };
      friend void from_json(const Darabonba::Json& j, SpotBidPrices& obj) { 
        DARABONBA_PTR_FROM_JSON(BidPrice, bidPrice_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      };
      SpotBidPrices() = default ;
      SpotBidPrices(const SpotBidPrices &) = default ;
      SpotBidPrices(SpotBidPrices &&) = default ;
      SpotBidPrices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SpotBidPrices() = default ;
      SpotBidPrices& operator=(const SpotBidPrices &) = default ;
      SpotBidPrices& operator=(SpotBidPrices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bidPrice_ == nullptr
        && this->instanceType_ == nullptr; };
      // bidPrice Field Functions 
      bool hasBidPrice() const { return this->bidPrice_ != nullptr;};
      void deleteBidPrice() { this->bidPrice_ = nullptr;};
      inline double getBidPrice() const { DARABONBA_PTR_GET_DEFAULT(bidPrice_, 0.0) };
      inline SpotBidPrices& setBidPrice(double bidPrice) { DARABONBA_PTR_SET_VALUE(bidPrice_, bidPrice) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline SpotBidPrices& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    protected:
      // 实例的每小时最高出价。支持最大3位小数，参数SpotStrategy=SpotWithPriceLimit时，该参数生效。
      shared_ptr<double> bidPrice_ {};
      // 实例类型。
      shared_ptr<string> instanceType_ {};
    };

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
    inline CreateNodeGroupConfig& setAdditionalSecurityGroupIds(const vector<string> & additionalSecurityGroupIds) { DARABONBA_PTR_SET_VALUE(additionalSecurityGroupIds_, additionalSecurityGroupIds) };
    inline CreateNodeGroupConfig& setAdditionalSecurityGroupIds(vector<string> && additionalSecurityGroupIds) { DARABONBA_PTR_SET_RVALUE(additionalSecurityGroupIds_, additionalSecurityGroupIds) };


    // autoScalingPolicy Field Functions 
    bool hasAutoScalingPolicy() const { return this->autoScalingPolicy_ != nullptr;};
    void deleteAutoScalingPolicy() { this->autoScalingPolicy_ = nullptr;};
    inline const AutoScalingPolicy & getAutoScalingPolicy() const { DARABONBA_PTR_GET_CONST(autoScalingPolicy_, AutoScalingPolicy) };
    inline AutoScalingPolicy getAutoScalingPolicy() { DARABONBA_PTR_GET(autoScalingPolicy_, AutoScalingPolicy) };
    inline CreateNodeGroupConfig& setAutoScalingPolicy(const AutoScalingPolicy & autoScalingPolicy) { DARABONBA_PTR_SET_VALUE(autoScalingPolicy_, autoScalingPolicy) };
    inline CreateNodeGroupConfig& setAutoScalingPolicy(AutoScalingPolicy && autoScalingPolicy) { DARABONBA_PTR_SET_RVALUE(autoScalingPolicy_, autoScalingPolicy) };


    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool getCompensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline CreateNodeGroupConfig& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // componentTags Field Functions 
    bool hasComponentTags() const { return this->componentTags_ != nullptr;};
    void deleteComponentTags() { this->componentTags_ = nullptr;};
    inline const vector<string> & getComponentTags() const { DARABONBA_PTR_GET_CONST(componentTags_, vector<string>) };
    inline vector<string> getComponentTags() { DARABONBA_PTR_GET(componentTags_, vector<string>) };
    inline CreateNodeGroupConfig& setComponentTags(const vector<string> & componentTags) { DARABONBA_PTR_SET_VALUE(componentTags_, componentTags) };
    inline CreateNodeGroupConfig& setComponentTags(vector<string> && componentTags) { DARABONBA_PTR_SET_RVALUE(componentTags_, componentTags) };


    // costOptimizedConfig Field Functions 
    bool hasCostOptimizedConfig() const { return this->costOptimizedConfig_ != nullptr;};
    void deleteCostOptimizedConfig() { this->costOptimizedConfig_ = nullptr;};
    inline const CostOptimizedConfig & getCostOptimizedConfig() const { DARABONBA_PTR_GET_CONST(costOptimizedConfig_, CostOptimizedConfig) };
    inline CostOptimizedConfig getCostOptimizedConfig() { DARABONBA_PTR_GET(costOptimizedConfig_, CostOptimizedConfig) };
    inline CreateNodeGroupConfig& setCostOptimizedConfig(const CostOptimizedConfig & costOptimizedConfig) { DARABONBA_PTR_SET_VALUE(costOptimizedConfig_, costOptimizedConfig) };
    inline CreateNodeGroupConfig& setCostOptimizedConfig(CostOptimizedConfig && costOptimizedConfig) { DARABONBA_PTR_SET_RVALUE(costOptimizedConfig_, costOptimizedConfig) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<DataDisk> & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<DataDisk>) };
    inline vector<DataDisk> getDataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<DataDisk>) };
    inline CreateNodeGroupConfig& setDataDisks(const vector<DataDisk> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline CreateNodeGroupConfig& setDataDisks(vector<DataDisk> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // deploymentSetStrategy Field Functions 
    bool hasDeploymentSetStrategy() const { return this->deploymentSetStrategy_ != nullptr;};
    void deleteDeploymentSetStrategy() { this->deploymentSetStrategy_ = nullptr;};
    inline string getDeploymentSetStrategy() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetStrategy_, "") };
    inline CreateNodeGroupConfig& setDeploymentSetStrategy(string deploymentSetStrategy) { DARABONBA_PTR_SET_VALUE(deploymentSetStrategy_, deploymentSetStrategy) };


    // gracefulShutdown Field Functions 
    bool hasGracefulShutdown() const { return this->gracefulShutdown_ != nullptr;};
    void deleteGracefulShutdown() { this->gracefulShutdown_ = nullptr;};
    inline bool getGracefulShutdown() const { DARABONBA_PTR_GET_DEFAULT(gracefulShutdown_, false) };
    inline CreateNodeGroupConfig& setGracefulShutdown(bool gracefulShutdown) { DARABONBA_PTR_SET_VALUE(gracefulShutdown_, gracefulShutdown) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline CreateNodeGroupConfig& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CreateNodeGroupConfig& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline CreateNodeGroupConfig& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline CreateNodeGroupConfig& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // nodeGroupType Field Functions 
    bool hasNodeGroupType() const { return this->nodeGroupType_ != nullptr;};
    void deleteNodeGroupType() { this->nodeGroupType_ = nullptr;};
    inline string getNodeGroupType() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupType_, "") };
    inline CreateNodeGroupConfig& setNodeGroupType(string nodeGroupType) { DARABONBA_PTR_SET_VALUE(nodeGroupType_, nodeGroupType) };


    // nodeResizeStrategy Field Functions 
    bool hasNodeResizeStrategy() const { return this->nodeResizeStrategy_ != nullptr;};
    void deleteNodeResizeStrategy() { this->nodeResizeStrategy_ = nullptr;};
    inline string getNodeResizeStrategy() const { DARABONBA_PTR_GET_DEFAULT(nodeResizeStrategy_, "") };
    inline CreateNodeGroupConfig& setNodeResizeStrategy(string nodeResizeStrategy) { DARABONBA_PTR_SET_VALUE(nodeResizeStrategy_, nodeResizeStrategy) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateNodeGroupConfig& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const PrivatePoolOptions & getPrivatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, PrivatePoolOptions) };
    inline PrivatePoolOptions getPrivatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, PrivatePoolOptions) };
    inline CreateNodeGroupConfig& setPrivatePoolOptions(const PrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline CreateNodeGroupConfig& setPrivatePoolOptions(PrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // spotBidPrices Field Functions 
    bool hasSpotBidPrices() const { return this->spotBidPrices_ != nullptr;};
    void deleteSpotBidPrices() { this->spotBidPrices_ = nullptr;};
    inline const vector<CreateNodeGroupConfig::SpotBidPrices> & getSpotBidPrices() const { DARABONBA_PTR_GET_CONST(spotBidPrices_, vector<CreateNodeGroupConfig::SpotBidPrices>) };
    inline vector<CreateNodeGroupConfig::SpotBidPrices> getSpotBidPrices() { DARABONBA_PTR_GET(spotBidPrices_, vector<CreateNodeGroupConfig::SpotBidPrices>) };
    inline CreateNodeGroupConfig& setSpotBidPrices(const vector<CreateNodeGroupConfig::SpotBidPrices> & spotBidPrices) { DARABONBA_PTR_SET_VALUE(spotBidPrices_, spotBidPrices) };
    inline CreateNodeGroupConfig& setSpotBidPrices(vector<CreateNodeGroupConfig::SpotBidPrices> && spotBidPrices) { DARABONBA_PTR_SET_RVALUE(spotBidPrices_, spotBidPrices) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool getSpotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline CreateNodeGroupConfig& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateNodeGroupConfig& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // subscriptionConfig Field Functions 
    bool hasSubscriptionConfig() const { return this->subscriptionConfig_ != nullptr;};
    void deleteSubscriptionConfig() { this->subscriptionConfig_ = nullptr;};
    inline const SubscriptionConfig & getSubscriptionConfig() const { DARABONBA_PTR_GET_CONST(subscriptionConfig_, SubscriptionConfig) };
    inline SubscriptionConfig getSubscriptionConfig() { DARABONBA_PTR_GET(subscriptionConfig_, SubscriptionConfig) };
    inline CreateNodeGroupConfig& setSubscriptionConfig(const SubscriptionConfig & subscriptionConfig) { DARABONBA_PTR_SET_VALUE(subscriptionConfig_, subscriptionConfig) };
    inline CreateNodeGroupConfig& setSubscriptionConfig(SubscriptionConfig && subscriptionConfig) { DARABONBA_PTR_SET_RVALUE(subscriptionConfig_, subscriptionConfig) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, SystemDisk) };
    inline SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, SystemDisk) };
    inline CreateNodeGroupConfig& setSystemDisk(const SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline CreateNodeGroupConfig& setSystemDisk(SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateNodeGroupConfig& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateNodeGroupConfig& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // withPublicIp Field Functions 
    bool hasWithPublicIp() const { return this->withPublicIp_ != nullptr;};
    void deleteWithPublicIp() { this->withPublicIp_ = nullptr;};
    inline bool getWithPublicIp() const { DARABONBA_PTR_GET_DEFAULT(withPublicIp_, false) };
    inline CreateNodeGroupConfig& setWithPublicIp(bool withPublicIp) { DARABONBA_PTR_SET_VALUE(withPublicIp_, withPublicIp) };


  protected:
    // 附加安全组。除集群设置的安全组外，为节点组单独设置的附加安全组。数组元数个数N的取值范围：0~2。
    shared_ptr<vector<string>> additionalSecurityGroupIds_ {};
    shared_ptr<AutoScalingPolicy> autoScalingPolicy_ {};
    shared_ptr<bool> compensateWithOnDemand_ {};
    shared_ptr<vector<string>> componentTags_ {};
    // 成本优化模式配置。
    shared_ptr<CostOptimizedConfig> costOptimizedConfig_ {};
    // 数据盘。当前数据盘只支持一种磁盘类型，即数组元数个数N的取值范围：1~1。
    shared_ptr<vector<DataDisk>> dataDisks_ {};
    // 部署集策略。取值范围：
    // - NONE：不适用部署集。
    // - CLUSTER：使用集群级别部署集。
    // - NODE_GROUP：使用节点组级别部署集。
    // 
    // 默认值：NONE。
    shared_ptr<string> deploymentSetStrategy_ {};
    // 节点组上部署的组件是否开启优雅下线。取值范围：
    // - true：开启优雅下线。
    // - false：不开启优雅下线。
    // 
    // 默认值：false。
    shared_ptr<bool> gracefulShutdown_ {};
    // 节点实例类型列表。数组元数个数N的取值范围：1~100。
    shared_ptr<vector<string>> instanceTypes_ {};
    // 节点数量。取值范围：1~1000。
    shared_ptr<int32_t> nodeCount_ {};
    // 节点组名称。最大长度128个字符。集群内要求节点组名称唯一。
    shared_ptr<string> nodeGroupName_ {};
    // 节点组类型。取值范围：
    // - MASTER：管理类型节点组。
    // - CORE：存储类型节点组。
    // - TASK：计算类型节点组。
    // 
    // This parameter is required.
    shared_ptr<string> nodeGroupType_ {};
    // 节点扩容策略。取值范围：
    // - COST_OPTIMIZED：成本优化策略。
    // - PRIORITY：优先级策略。
    // 
    // 默认值：PRIORITY。
    shared_ptr<string> nodeResizeStrategy_ {};
    // 节点组付费类型。不传入时默认和集群付费类型一致。取值范围：
    // - PayAsYouGo：后付费，按量付费。
    // - Subscription：预付费，包年包月。
    // 
    // 默认值：PayAsYouGo。
    shared_ptr<string> paymentType_ {};
    shared_ptr<PrivatePoolOptions> privatePoolOptions_ {};
    // 抢占式Spot实例出价价格。参数SpotStrategy取值为SpotWithPriceLimit时生效。数组元数个数N的取值范围：0~100。
    shared_ptr<vector<CreateNodeGroupConfig::SpotBidPrices>> spotBidPrices_ {};
    // 开启后，当收到抢占式实例将被回收的系统消息时，伸缩组将尝试创建新的实例，替换掉将被回收的抢占式实例。取值范围：
    // - true：开启补齐抢占式实例。
    // - false：不开启补齐抢占式实例。
    // 
    // 默认值：false。
    shared_ptr<bool> spotInstanceRemedy_ {};
    // 抢占式Spot实例策略。取值范围：
    // - NoSpot：正常按量付费实例。
    // - SpotWithPriceLimit：设置最高出价的抢占式实例。
    // - SpotAsPriceGo：系统自动出价，最高按量付费价格的抢占式实例。
    // 
    // 默认值：NoSpot。
    shared_ptr<string> spotStrategy_ {};
    // 节点组预付费配置。不传入时默认和集群预付费配置一致。
    shared_ptr<SubscriptionConfig> subscriptionConfig_ {};
    // 系统盘。
    shared_ptr<SystemDisk> systemDisk_ {};
    // 虚拟机交换机ID列表。数组元数个数N的取值范围：1~20。
    shared_ptr<vector<string>> vSwitchIds_ {};
    // 是否开公网IP。取值范围：
    // - true：开公网。
    // - false：不开公网。
    // 
    // 默认值：false。
    shared_ptr<bool> withPublicIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
