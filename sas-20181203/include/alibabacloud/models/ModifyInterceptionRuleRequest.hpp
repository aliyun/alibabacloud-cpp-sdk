// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINTERCEPTIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINTERCEPTIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyInterceptionRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInterceptionRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_ANY_TO_JSON(DstTarget, dstTarget_);
      DARABONBA_PTR_TO_JSON(InterceptType, interceptType_);
      DARABONBA_PTR_TO_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_ANY_TO_JSON(SrcTarget, srcTarget_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInterceptionRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_ANY_FROM_JSON(DstTarget, dstTarget_);
      DARABONBA_PTR_FROM_JSON(InterceptType, interceptType_);
      DARABONBA_PTR_FROM_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_ANY_FROM_JSON(SrcTarget, srcTarget_);
    };
    ModifyInterceptionRuleRequest() = default ;
    ModifyInterceptionRuleRequest(const ModifyInterceptionRuleRequest &) = default ;
    ModifyInterceptionRuleRequest(ModifyInterceptionRuleRequest &&) = default ;
    ModifyInterceptionRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInterceptionRuleRequest() = default ;
    ModifyInterceptionRuleRequest& operator=(const ModifyInterceptionRuleRequest &) = default ;
    ModifyInterceptionRuleRequest& operator=(ModifyInterceptionRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dstTarget_ == nullptr && this->interceptType_ == nullptr && this->orderIndex_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->ruleSwitch_ == nullptr && this->srcTarget_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyInterceptionRuleRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dstTarget Field Functions 
    bool hasDstTarget() const { return this->dstTarget_ != nullptr;};
    void deleteDstTarget() { this->dstTarget_ = nullptr;};
    inline     const Darabonba::Json & getDstTarget() const { DARABONBA_GET(dstTarget_) };
    Darabonba::Json & getDstTarget() { DARABONBA_GET(dstTarget_) };
    inline ModifyInterceptionRuleRequest& setDstTarget(const Darabonba::Json & dstTarget) { DARABONBA_SET_VALUE(dstTarget_, dstTarget) };
    inline ModifyInterceptionRuleRequest& setDstTarget(Darabonba::Json && dstTarget) { DARABONBA_SET_RVALUE(dstTarget_, dstTarget) };


    // interceptType Field Functions 
    bool hasInterceptType() const { return this->interceptType_ != nullptr;};
    void deleteInterceptType() { this->interceptType_ = nullptr;};
    inline int32_t getInterceptType() const { DARABONBA_PTR_GET_DEFAULT(interceptType_, 0) };
    inline ModifyInterceptionRuleRequest& setInterceptType(int32_t interceptType) { DARABONBA_PTR_SET_VALUE(interceptType_, interceptType) };


    // orderIndex Field Functions 
    bool hasOrderIndex() const { return this->orderIndex_ != nullptr;};
    void deleteOrderIndex() { this->orderIndex_ = nullptr;};
    inline int64_t getOrderIndex() const { DARABONBA_PTR_GET_DEFAULT(orderIndex_, 0L) };
    inline ModifyInterceptionRuleRequest& setOrderIndex(int64_t orderIndex) { DARABONBA_PTR_SET_VALUE(orderIndex_, orderIndex) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ModifyInterceptionRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyInterceptionRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t getRuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline ModifyInterceptionRuleRequest& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


    // srcTarget Field Functions 
    bool hasSrcTarget() const { return this->srcTarget_ != nullptr;};
    void deleteSrcTarget() { this->srcTarget_ = nullptr;};
    inline     const Darabonba::Json & getSrcTarget() const { DARABONBA_GET(srcTarget_) };
    Darabonba::Json & getSrcTarget() { DARABONBA_GET(srcTarget_) };
    inline ModifyInterceptionRuleRequest& setSrcTarget(const Darabonba::Json & srcTarget) { DARABONBA_SET_VALUE(srcTarget_, srcTarget) };
    inline ModifyInterceptionRuleRequest& setSrcTarget(Darabonba::Json && srcTarget) { DARABONBA_SET_RVALUE(srcTarget_, srcTarget) };


  protected:
    // The ID of the container cluster.
    // 
    // > You can call the [DescribeGroupedContainerInstances](https://help.aliyun.com/document_detail/182997.html) operation to query the IDs of container clusters.
    shared_ptr<string> clusterId_ {};
    // The destination objects of the rule. The following parameters are included:
    // 
    // *   targetId: the ID of the destination object. You can call the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to query the ID.
    // *   ports: the destination port ranges.
    Darabonba::Json dstTarget_ {};
    // The interception mode. Valid values:
    // 
    // *   **1**: block
    // *   **2**: alert
    // *   **3**: allow
    shared_ptr<int32_t> interceptType_ {};
    // The priority of the rule. Valid values: 1 to 1000. A smaller value indicates a higher priority.
    shared_ptr<int64_t> orderIndex_ {};
    // The ID of the rule.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ruleId_ {};
    // The name of the rule.
    shared_ptr<string> ruleName_ {};
    // Specifies whether the rule is enabled. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    shared_ptr<int32_t> ruleSwitch_ {};
    // The source object of the rule. The following parameters are included:
    // 
    // *   targetId: the ID of the source object. You can call the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to query the ID.
    Darabonba::Json srcTarget_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
