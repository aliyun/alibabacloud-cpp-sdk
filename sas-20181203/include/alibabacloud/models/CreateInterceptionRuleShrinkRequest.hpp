// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTERCEPTIONRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTERCEPTIONRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateInterceptionRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInterceptionRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(DstTargetList, dstTargetListShrink_);
      DARABONBA_PTR_TO_JSON(InterceptType, interceptType_);
      DARABONBA_PTR_TO_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(SrcTarget, srcTargetShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInterceptionRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(DstTargetList, dstTargetListShrink_);
      DARABONBA_PTR_FROM_JSON(InterceptType, interceptType_);
      DARABONBA_PTR_FROM_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(SrcTarget, srcTargetShrink_);
    };
    CreateInterceptionRuleShrinkRequest() = default ;
    CreateInterceptionRuleShrinkRequest(const CreateInterceptionRuleShrinkRequest &) = default ;
    CreateInterceptionRuleShrinkRequest(CreateInterceptionRuleShrinkRequest &&) = default ;
    CreateInterceptionRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInterceptionRuleShrinkRequest() = default ;
    CreateInterceptionRuleShrinkRequest& operator=(const CreateInterceptionRuleShrinkRequest &) = default ;
    CreateInterceptionRuleShrinkRequest& operator=(CreateInterceptionRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->dstTargetListShrink_ == nullptr && this->interceptType_ == nullptr && this->orderIndex_ == nullptr && this->ruleName_ == nullptr
        && this->ruleSwitch_ == nullptr && this->ruleType_ == nullptr && this->srcTargetShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateInterceptionRuleShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateInterceptionRuleShrinkRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // dstTargetListShrink Field Functions 
    bool hasDstTargetListShrink() const { return this->dstTargetListShrink_ != nullptr;};
    void deleteDstTargetListShrink() { this->dstTargetListShrink_ = nullptr;};
    inline string getDstTargetListShrink() const { DARABONBA_PTR_GET_DEFAULT(dstTargetListShrink_, "") };
    inline CreateInterceptionRuleShrinkRequest& setDstTargetListShrink(string dstTargetListShrink) { DARABONBA_PTR_SET_VALUE(dstTargetListShrink_, dstTargetListShrink) };


    // interceptType Field Functions 
    bool hasInterceptType() const { return this->interceptType_ != nullptr;};
    void deleteInterceptType() { this->interceptType_ = nullptr;};
    inline int64_t getInterceptType() const { DARABONBA_PTR_GET_DEFAULT(interceptType_, 0L) };
    inline CreateInterceptionRuleShrinkRequest& setInterceptType(int64_t interceptType) { DARABONBA_PTR_SET_VALUE(interceptType_, interceptType) };


    // orderIndex Field Functions 
    bool hasOrderIndex() const { return this->orderIndex_ != nullptr;};
    void deleteOrderIndex() { this->orderIndex_ = nullptr;};
    inline int64_t getOrderIndex() const { DARABONBA_PTR_GET_DEFAULT(orderIndex_, 0L) };
    inline CreateInterceptionRuleShrinkRequest& setOrderIndex(int64_t orderIndex) { DARABONBA_PTR_SET_VALUE(orderIndex_, orderIndex) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateInterceptionRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t getRuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline CreateInterceptionRuleShrinkRequest& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline CreateInterceptionRuleShrinkRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // srcTargetShrink Field Functions 
    bool hasSrcTargetShrink() const { return this->srcTargetShrink_ != nullptr;};
    void deleteSrcTargetShrink() { this->srcTargetShrink_ = nullptr;};
    inline string getSrcTargetShrink() const { DARABONBA_PTR_GET_DEFAULT(srcTargetShrink_, "") };
    inline CreateInterceptionRuleShrinkRequest& setSrcTargetShrink(string srcTargetShrink) { DARABONBA_PTR_SET_VALUE(srcTargetShrink_, srcTargetShrink) };


  protected:
    // The ID of the container cluster.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of container clusters.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The name of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> clusterName_ {};
    // The information about the destination network object. The value of this parameter contains the following fields:
    // 
    // *   targetId: the ID of the destination network object. You can call the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to query the ID.
    // *   ports: the destination port ranges.
    shared_ptr<string> dstTargetListShrink_ {};
    // The action on traffic. Valid values:
    // 
    // *   **1**: blocks traffic.
    // *   **2**: allows traffic and generates alerts.
    // *   **3**: allows traffic and does not generate alerts.
    // 
    // This parameter is required.
    shared_ptr<int64_t> interceptType_ {};
    // The priority of the defense rule. Valid values: 1 to 1000. A smaller value indicates a higher priority.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderIndex_ {};
    // The name of the defense rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // Specifies the status of the defense rule. Valid values:
    // 
    // *   **0**: disables the rule.
    // *   **1**: enables the rule.
    // 
    // This parameter is required.
    shared_ptr<int32_t> ruleSwitch_ {};
    // The type of the defense rule. Valid values:
    // 
    // *   customize: custom rule
    shared_ptr<string> ruleType_ {};
    // The source network object. The value of this parameter contains the following field:
    // 
    // *   targetId: the ID of the source network object. You can call the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to query the ID.
    shared_ptr<string> srcTargetShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
