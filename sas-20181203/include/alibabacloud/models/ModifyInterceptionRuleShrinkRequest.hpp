// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINTERCEPTIONRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINTERCEPTIONRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyInterceptionRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInterceptionRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DstTarget, dstTargetShrink_);
      DARABONBA_PTR_TO_JSON(InterceptType, interceptType_);
      DARABONBA_PTR_TO_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_TO_JSON(SrcTarget, srcTargetShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInterceptionRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DstTarget, dstTargetShrink_);
      DARABONBA_PTR_FROM_JSON(InterceptType, interceptType_);
      DARABONBA_PTR_FROM_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_FROM_JSON(SrcTarget, srcTargetShrink_);
    };
    ModifyInterceptionRuleShrinkRequest() = default ;
    ModifyInterceptionRuleShrinkRequest(const ModifyInterceptionRuleShrinkRequest &) = default ;
    ModifyInterceptionRuleShrinkRequest(ModifyInterceptionRuleShrinkRequest &&) = default ;
    ModifyInterceptionRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInterceptionRuleShrinkRequest() = default ;
    ModifyInterceptionRuleShrinkRequest& operator=(const ModifyInterceptionRuleShrinkRequest &) = default ;
    ModifyInterceptionRuleShrinkRequest& operator=(ModifyInterceptionRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->dstTargetShrink_ == nullptr && return this->interceptType_ == nullptr && return this->orderIndex_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr
        && return this->ruleSwitch_ == nullptr && return this->srcTargetShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyInterceptionRuleShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dstTargetShrink Field Functions 
    bool hasDstTargetShrink() const { return this->dstTargetShrink_ != nullptr;};
    void deleteDstTargetShrink() { this->dstTargetShrink_ = nullptr;};
    inline string dstTargetShrink() const { DARABONBA_PTR_GET_DEFAULT(dstTargetShrink_, "") };
    inline ModifyInterceptionRuleShrinkRequest& setDstTargetShrink(string dstTargetShrink) { DARABONBA_PTR_SET_VALUE(dstTargetShrink_, dstTargetShrink) };


    // interceptType Field Functions 
    bool hasInterceptType() const { return this->interceptType_ != nullptr;};
    void deleteInterceptType() { this->interceptType_ = nullptr;};
    inline int32_t interceptType() const { DARABONBA_PTR_GET_DEFAULT(interceptType_, 0) };
    inline ModifyInterceptionRuleShrinkRequest& setInterceptType(int32_t interceptType) { DARABONBA_PTR_SET_VALUE(interceptType_, interceptType) };


    // orderIndex Field Functions 
    bool hasOrderIndex() const { return this->orderIndex_ != nullptr;};
    void deleteOrderIndex() { this->orderIndex_ = nullptr;};
    inline int64_t orderIndex() const { DARABONBA_PTR_GET_DEFAULT(orderIndex_, 0L) };
    inline ModifyInterceptionRuleShrinkRequest& setOrderIndex(int64_t orderIndex) { DARABONBA_PTR_SET_VALUE(orderIndex_, orderIndex) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ModifyInterceptionRuleShrinkRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyInterceptionRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t ruleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline ModifyInterceptionRuleShrinkRequest& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


    // srcTargetShrink Field Functions 
    bool hasSrcTargetShrink() const { return this->srcTargetShrink_ != nullptr;};
    void deleteSrcTargetShrink() { this->srcTargetShrink_ = nullptr;};
    inline string srcTargetShrink() const { DARABONBA_PTR_GET_DEFAULT(srcTargetShrink_, "") };
    inline ModifyInterceptionRuleShrinkRequest& setSrcTargetShrink(string srcTargetShrink) { DARABONBA_PTR_SET_VALUE(srcTargetShrink_, srcTargetShrink) };


  protected:
    // The ID of the container cluster.
    // 
    // > You can call the [DescribeGroupedContainerInstances](https://help.aliyun.com/document_detail/182997.html) operation to query the IDs of container clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The destination objects of the rule. The following parameters are included:
    // 
    // *   targetId: the ID of the destination object. You can call the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to query the ID.
    // *   ports: the destination port ranges.
    std::shared_ptr<string> dstTargetShrink_ = nullptr;
    // The interception mode. Valid values:
    // 
    // *   **1**: block
    // *   **2**: alert
    // *   **3**: allow
    std::shared_ptr<int32_t> interceptType_ = nullptr;
    // The priority of the rule. Valid values: 1 to 1000. A smaller value indicates a higher priority.
    std::shared_ptr<int64_t> orderIndex_ = nullptr;
    // The ID of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Specifies whether the rule is enabled. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> ruleSwitch_ = nullptr;
    // The source object of the rule. The following parameters are included:
    // 
    // *   targetId: the ID of the source object. You can call the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to query the ID.
    std::shared_ptr<string> srcTargetShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
