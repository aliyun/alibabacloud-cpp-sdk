// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENODEGROUPATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENODEGROUPATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AckConfig.hpp>
#include <vector>
#include <alibabacloud/models/CostOptimizedConfig.hpp>
#include <alibabacloud/models/SpotBidPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class UpdateNodeGroupAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNodeGroupAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AckConfig, ackConfig_);
      DARABONBA_PTR_TO_JSON(AdditionalSecurityGroupIds, additionalSecurityGroupIds_);
      DARABONBA_PTR_TO_JSON(AutoCompensateState, autoCompensateState_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CostOptimizedConfig, costOptimizedConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcsSpotStrategy, ecsSpotStrategy_);
      DARABONBA_PTR_TO_JSON(EnableGracefulDecommission, enableGracefulDecommission_);
      DARABONBA_PTR_TO_JSON(InstanceTypeList, instanceTypeList_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(MinSize, minSize_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(NodeResizeStrategy, nodeResizeStrategy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SpotBidPrices, spotBidPrices_);
      DARABONBA_PTR_TO_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNodeGroupAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AckConfig, ackConfig_);
      DARABONBA_PTR_FROM_JSON(AdditionalSecurityGroupIds, additionalSecurityGroupIds_);
      DARABONBA_PTR_FROM_JSON(AutoCompensateState, autoCompensateState_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CostOptimizedConfig, costOptimizedConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcsSpotStrategy, ecsSpotStrategy_);
      DARABONBA_PTR_FROM_JSON(EnableGracefulDecommission, enableGracefulDecommission_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeList, instanceTypeList_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(MinSize, minSize_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(NodeResizeStrategy, nodeResizeStrategy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SpotBidPrices, spotBidPrices_);
      DARABONBA_PTR_FROM_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    UpdateNodeGroupAttributesRequest() = default ;
    UpdateNodeGroupAttributesRequest(const UpdateNodeGroupAttributesRequest &) = default ;
    UpdateNodeGroupAttributesRequest(UpdateNodeGroupAttributesRequest &&) = default ;
    UpdateNodeGroupAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNodeGroupAttributesRequest() = default ;
    UpdateNodeGroupAttributesRequest& operator=(const UpdateNodeGroupAttributesRequest &) = default ;
    UpdateNodeGroupAttributesRequest& operator=(UpdateNodeGroupAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ackConfig_ == nullptr
        && this->additionalSecurityGroupIds_ == nullptr && this->autoCompensateState_ == nullptr && this->clusterId_ == nullptr && this->costOptimizedConfig_ == nullptr && this->description_ == nullptr
        && this->ecsSpotStrategy_ == nullptr && this->enableGracefulDecommission_ == nullptr && this->instanceTypeList_ == nullptr && this->keyPairName_ == nullptr && this->maxSize_ == nullptr
        && this->minSize_ == nullptr && this->nodeCount_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeGroupName_ == nullptr && this->nodeResizeStrategy_ == nullptr
        && this->regionId_ == nullptr && this->spotBidPrices_ == nullptr && this->spotInstanceRemedy_ == nullptr && this->vSwitchId_ == nullptr; };
    // ackConfig Field Functions 
    bool hasAckConfig() const { return this->ackConfig_ != nullptr;};
    void deleteAckConfig() { this->ackConfig_ = nullptr;};
    inline const AckConfig & getAckConfig() const { DARABONBA_PTR_GET_CONST(ackConfig_, AckConfig) };
    inline AckConfig getAckConfig() { DARABONBA_PTR_GET(ackConfig_, AckConfig) };
    inline UpdateNodeGroupAttributesRequest& setAckConfig(const AckConfig & ackConfig) { DARABONBA_PTR_SET_VALUE(ackConfig_, ackConfig) };
    inline UpdateNodeGroupAttributesRequest& setAckConfig(AckConfig && ackConfig) { DARABONBA_PTR_SET_RVALUE(ackConfig_, ackConfig) };


    // additionalSecurityGroupIds Field Functions 
    bool hasAdditionalSecurityGroupIds() const { return this->additionalSecurityGroupIds_ != nullptr;};
    void deleteAdditionalSecurityGroupIds() { this->additionalSecurityGroupIds_ = nullptr;};
    inline const vector<string> & getAdditionalSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(additionalSecurityGroupIds_, vector<string>) };
    inline vector<string> getAdditionalSecurityGroupIds() { DARABONBA_PTR_GET(additionalSecurityGroupIds_, vector<string>) };
    inline UpdateNodeGroupAttributesRequest& setAdditionalSecurityGroupIds(const vector<string> & additionalSecurityGroupIds) { DARABONBA_PTR_SET_VALUE(additionalSecurityGroupIds_, additionalSecurityGroupIds) };
    inline UpdateNodeGroupAttributesRequest& setAdditionalSecurityGroupIds(vector<string> && additionalSecurityGroupIds) { DARABONBA_PTR_SET_RVALUE(additionalSecurityGroupIds_, additionalSecurityGroupIds) };


    // autoCompensateState Field Functions 
    bool hasAutoCompensateState() const { return this->autoCompensateState_ != nullptr;};
    void deleteAutoCompensateState() { this->autoCompensateState_ = nullptr;};
    inline bool getAutoCompensateState() const { DARABONBA_PTR_GET_DEFAULT(autoCompensateState_, false) };
    inline UpdateNodeGroupAttributesRequest& setAutoCompensateState(bool autoCompensateState) { DARABONBA_PTR_SET_VALUE(autoCompensateState_, autoCompensateState) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateNodeGroupAttributesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // costOptimizedConfig Field Functions 
    bool hasCostOptimizedConfig() const { return this->costOptimizedConfig_ != nullptr;};
    void deleteCostOptimizedConfig() { this->costOptimizedConfig_ = nullptr;};
    inline const CostOptimizedConfig & getCostOptimizedConfig() const { DARABONBA_PTR_GET_CONST(costOptimizedConfig_, CostOptimizedConfig) };
    inline CostOptimizedConfig getCostOptimizedConfig() { DARABONBA_PTR_GET(costOptimizedConfig_, CostOptimizedConfig) };
    inline UpdateNodeGroupAttributesRequest& setCostOptimizedConfig(const CostOptimizedConfig & costOptimizedConfig) { DARABONBA_PTR_SET_VALUE(costOptimizedConfig_, costOptimizedConfig) };
    inline UpdateNodeGroupAttributesRequest& setCostOptimizedConfig(CostOptimizedConfig && costOptimizedConfig) { DARABONBA_PTR_SET_RVALUE(costOptimizedConfig_, costOptimizedConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateNodeGroupAttributesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsSpotStrategy Field Functions 
    bool hasEcsSpotStrategy() const { return this->ecsSpotStrategy_ != nullptr;};
    void deleteEcsSpotStrategy() { this->ecsSpotStrategy_ = nullptr;};
    inline string getEcsSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(ecsSpotStrategy_, "") };
    inline UpdateNodeGroupAttributesRequest& setEcsSpotStrategy(string ecsSpotStrategy) { DARABONBA_PTR_SET_VALUE(ecsSpotStrategy_, ecsSpotStrategy) };


    // enableGracefulDecommission Field Functions 
    bool hasEnableGracefulDecommission() const { return this->enableGracefulDecommission_ != nullptr;};
    void deleteEnableGracefulDecommission() { this->enableGracefulDecommission_ = nullptr;};
    inline bool getEnableGracefulDecommission() const { DARABONBA_PTR_GET_DEFAULT(enableGracefulDecommission_, false) };
    inline UpdateNodeGroupAttributesRequest& setEnableGracefulDecommission(bool enableGracefulDecommission) { DARABONBA_PTR_SET_VALUE(enableGracefulDecommission_, enableGracefulDecommission) };


    // instanceTypeList Field Functions 
    bool hasInstanceTypeList() const { return this->instanceTypeList_ != nullptr;};
    void deleteInstanceTypeList() { this->instanceTypeList_ = nullptr;};
    inline const vector<string> & getInstanceTypeList() const { DARABONBA_PTR_GET_CONST(instanceTypeList_, vector<string>) };
    inline vector<string> getInstanceTypeList() { DARABONBA_PTR_GET(instanceTypeList_, vector<string>) };
    inline UpdateNodeGroupAttributesRequest& setInstanceTypeList(const vector<string> & instanceTypeList) { DARABONBA_PTR_SET_VALUE(instanceTypeList_, instanceTypeList) };
    inline UpdateNodeGroupAttributesRequest& setInstanceTypeList(vector<string> && instanceTypeList) { DARABONBA_PTR_SET_RVALUE(instanceTypeList_, instanceTypeList) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline UpdateNodeGroupAttributesRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
    inline UpdateNodeGroupAttributesRequest& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // minSize Field Functions 
    bool hasMinSize() const { return this->minSize_ != nullptr;};
    void deleteMinSize() { this->minSize_ = nullptr;};
    inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
    inline UpdateNodeGroupAttributesRequest& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline UpdateNodeGroupAttributesRequest& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline UpdateNodeGroupAttributesRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline UpdateNodeGroupAttributesRequest& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // nodeResizeStrategy Field Functions 
    bool hasNodeResizeStrategy() const { return this->nodeResizeStrategy_ != nullptr;};
    void deleteNodeResizeStrategy() { this->nodeResizeStrategy_ = nullptr;};
    inline string getNodeResizeStrategy() const { DARABONBA_PTR_GET_DEFAULT(nodeResizeStrategy_, "") };
    inline UpdateNodeGroupAttributesRequest& setNodeResizeStrategy(string nodeResizeStrategy) { DARABONBA_PTR_SET_VALUE(nodeResizeStrategy_, nodeResizeStrategy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateNodeGroupAttributesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // spotBidPrices Field Functions 
    bool hasSpotBidPrices() const { return this->spotBidPrices_ != nullptr;};
    void deleteSpotBidPrices() { this->spotBidPrices_ = nullptr;};
    inline const vector<SpotBidPrice> & getSpotBidPrices() const { DARABONBA_PTR_GET_CONST(spotBidPrices_, vector<SpotBidPrice>) };
    inline vector<SpotBidPrice> getSpotBidPrices() { DARABONBA_PTR_GET(spotBidPrices_, vector<SpotBidPrice>) };
    inline UpdateNodeGroupAttributesRequest& setSpotBidPrices(const vector<SpotBidPrice> & spotBidPrices) { DARABONBA_PTR_SET_VALUE(spotBidPrices_, spotBidPrices) };
    inline UpdateNodeGroupAttributesRequest& setSpotBidPrices(vector<SpotBidPrice> && spotBidPrices) { DARABONBA_PTR_SET_RVALUE(spotBidPrices_, spotBidPrices) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool getSpotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline UpdateNodeGroupAttributesRequest& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline UpdateNodeGroupAttributesRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ACK cluster configuration.
    shared_ptr<AckConfig> ackConfig_ {};
    // The list of security group IDs.
    shared_ptr<vector<string>> additionalSecurityGroupIds_ {};
    // The automatic compensation state.
    shared_ptr<bool> autoCompensateState_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The cost-optimized mode configuration.
    shared_ptr<CostOptimizedConfig> costOptimizedConfig_ {};
    // The node group description.
    shared_ptr<string> description_ {};
    // The spot instance strategy.
    shared_ptr<string> ecsSpotStrategy_ {};
    // Specifies whether to enable graceful decommission. When a cluster is created in V303, graceful decommission is disabled by default for task groups.
    shared_ptr<bool> enableGracefulDecommission_ {};
    // The list of ECS instance types.
    shared_ptr<vector<string>> instanceTypeList_ {};
    // The key pair for ECS logon.
    shared_ptr<string> keyPairName_ {};
    // The maximum number of instances in the node group.
    shared_ptr<int32_t> maxSize_ {};
    // The minimum number of instances in the node group.
    shared_ptr<int32_t> minSize_ {};
    // The target number of nodes in the node group.
    shared_ptr<int32_t> nodeCount_ {};
    // The node group ID.
    // 
    // This parameter is required.
    shared_ptr<string> nodeGroupId_ {};
    // The node group name.
    shared_ptr<string> nodeGroupName_ {};
    // The node scale-out strategy. Valid values: COST_OPTIMIZED and PRIORITY. Default value: PRIORITY.
    shared_ptr<string> nodeResizeStrategy_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The maximum bid prices for spot instances. This parameter takes effect only when spotStrategy is set to SpotWithPriceLimit.
    shared_ptr<vector<SpotBidPrice>> spotBidPrices_ {};
    // Specifies whether to enable spot instance supplementation. If this feature is enabled, the scaling group attempts to create new instances to replace spot instances that are about to be reclaimed when the system sends a reclamation notification. Default value: false.
    shared_ptr<bool> spotInstanceRemedy_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
