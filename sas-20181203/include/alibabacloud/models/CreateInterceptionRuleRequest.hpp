// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTERCEPTIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTERCEPTIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateInterceptionRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInterceptionRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_ANY_TO_JSON(DstTargetList, dstTargetList_);
      DARABONBA_PTR_TO_JSON(InterceptType, interceptType_);
      DARABONBA_PTR_TO_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_ANY_TO_JSON(SrcTarget, srcTarget_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInterceptionRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_ANY_FROM_JSON(DstTargetList, dstTargetList_);
      DARABONBA_PTR_FROM_JSON(InterceptType, interceptType_);
      DARABONBA_PTR_FROM_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_ANY_FROM_JSON(SrcTarget, srcTarget_);
    };
    CreateInterceptionRuleRequest() = default ;
    CreateInterceptionRuleRequest(const CreateInterceptionRuleRequest &) = default ;
    CreateInterceptionRuleRequest(CreateInterceptionRuleRequest &&) = default ;
    CreateInterceptionRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInterceptionRuleRequest() = default ;
    CreateInterceptionRuleRequest& operator=(const CreateInterceptionRuleRequest &) = default ;
    CreateInterceptionRuleRequest& operator=(CreateInterceptionRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->dstTargetList_ == nullptr && this->interceptType_ == nullptr && this->orderIndex_ == nullptr && this->ruleName_ == nullptr
        && this->ruleSwitch_ == nullptr && this->ruleType_ == nullptr && this->srcTarget_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateInterceptionRuleRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateInterceptionRuleRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // dstTargetList Field Functions 
    bool hasDstTargetList() const { return this->dstTargetList_ != nullptr;};
    void deleteDstTargetList() { this->dstTargetList_ = nullptr;};
    inline     const Darabonba::Json & getDstTargetList() const { DARABONBA_GET(dstTargetList_) };
    Darabonba::Json & getDstTargetList() { DARABONBA_GET(dstTargetList_) };
    inline CreateInterceptionRuleRequest& setDstTargetList(const Darabonba::Json & dstTargetList) { DARABONBA_SET_VALUE(dstTargetList_, dstTargetList) };
    inline CreateInterceptionRuleRequest& setDstTargetList(Darabonba::Json && dstTargetList) { DARABONBA_SET_RVALUE(dstTargetList_, dstTargetList) };


    // interceptType Field Functions 
    bool hasInterceptType() const { return this->interceptType_ != nullptr;};
    void deleteInterceptType() { this->interceptType_ = nullptr;};
    inline int64_t getInterceptType() const { DARABONBA_PTR_GET_DEFAULT(interceptType_, 0L) };
    inline CreateInterceptionRuleRequest& setInterceptType(int64_t interceptType) { DARABONBA_PTR_SET_VALUE(interceptType_, interceptType) };


    // orderIndex Field Functions 
    bool hasOrderIndex() const { return this->orderIndex_ != nullptr;};
    void deleteOrderIndex() { this->orderIndex_ = nullptr;};
    inline int64_t getOrderIndex() const { DARABONBA_PTR_GET_DEFAULT(orderIndex_, 0L) };
    inline CreateInterceptionRuleRequest& setOrderIndex(int64_t orderIndex) { DARABONBA_PTR_SET_VALUE(orderIndex_, orderIndex) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateInterceptionRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t getRuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline CreateInterceptionRuleRequest& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline CreateInterceptionRuleRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // srcTarget Field Functions 
    bool hasSrcTarget() const { return this->srcTarget_ != nullptr;};
    void deleteSrcTarget() { this->srcTarget_ = nullptr;};
    inline     const Darabonba::Json & getSrcTarget() const { DARABONBA_GET(srcTarget_) };
    Darabonba::Json & getSrcTarget() { DARABONBA_GET(srcTarget_) };
    inline CreateInterceptionRuleRequest& setSrcTarget(const Darabonba::Json & srcTarget) { DARABONBA_SET_VALUE(srcTarget_, srcTarget) };
    inline CreateInterceptionRuleRequest& setSrcTarget(Darabonba::Json && srcTarget) { DARABONBA_SET_RVALUE(srcTarget_, srcTarget) };


  protected:
    // The ID of the container cluster to query.
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to obtain this parameter.
    // 
    // This parameter must be from an ACK cluster. You can call the DescribeClustersV1 operation of Container Service for Kubernetes (ACK) to query existing clusters, or call the CreateCluster operation to create a cluster, and then call the DescribeGroupedContainerInstances operation of Security Center to obtain the ID of a managed cluster.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The name of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> clusterName_ {};
    // The list of destination objects. The metric descriptions are as follows:
    // 
    // - targetId: The ID of the destination object. You can invoke the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to obtain this parameter.
    // - ports: The list of destination port ranges.
    Darabonba::Json dstTargetList_ {};
    // The interception mode. Valid values:
    // - **1**: Block Mode.
    // - **2**: Alert mode.
    // - **3**: Allow mode.
    // 
    // This parameter is required.
    shared_ptr<int64_t> interceptType_ {};
    // The priority of the rule. Valid values: 1 to 1000. A smaller value indicates a higher priority.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderIndex_ {};
    // The name of the rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // Specifies whether to enable the rule. Valid values:
    // - **0**: Disabled.
    // - **1**: Enabled.
    // 
    // This parameter is required.
    shared_ptr<int32_t> ruleSwitch_ {};
    // The type of the rule. Valid values:
    // - customize: user-defined rule
    shared_ptr<string> ruleType_ {};
    // The source object. The metric description is as follows:
    // 
    // - targetId: The ID of the source object. You can invoke the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to obtain this parameter.
    Darabonba::Json srcTarget_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
