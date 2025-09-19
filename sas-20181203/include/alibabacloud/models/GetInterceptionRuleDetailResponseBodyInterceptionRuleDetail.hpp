// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERCEPTIONRULEDETAILRESPONSEBODYINTERCEPTIONRULEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETINTERCEPTIONRULEDETAILRESPONSEBODYINTERCEPTIONRULEDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailDstTarget.hpp>
#include <alibabacloud/models/GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailSrcTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DstTarget, dstTarget_);
      DARABONBA_PTR_TO_JSON(InterceptType, interceptType_);
      DARABONBA_PTR_TO_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(SrcTarget, srcTarget_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DstTarget, dstTarget_);
      DARABONBA_PTR_FROM_JSON(InterceptType, interceptType_);
      DARABONBA_PTR_FROM_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(SrcTarget, srcTarget_);
    };
    GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail() = default ;
    GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail(const GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail &) = default ;
    GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail(GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail &&) = default ;
    GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail() = default ;
    GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& operator=(const GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail &) = default ;
    GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& operator=(GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dstTarget_ != nullptr
        && this->interceptType_ != nullptr && this->orderIndex_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->ruleSwitch_ != nullptr
        && this->ruleType_ != nullptr && this->srcTarget_ != nullptr; };
    // dstTarget Field Functions 
    bool hasDstTarget() const { return this->dstTarget_ != nullptr;};
    void deleteDstTarget() { this->dstTarget_ = nullptr;};
    inline const Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailDstTarget & dstTarget() const { DARABONBA_PTR_GET_CONST(dstTarget_, Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailDstTarget) };
    inline Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailDstTarget dstTarget() { DARABONBA_PTR_GET(dstTarget_, Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailDstTarget) };
    inline GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& setDstTarget(const Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailDstTarget & dstTarget) { DARABONBA_PTR_SET_VALUE(dstTarget_, dstTarget) };
    inline GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& setDstTarget(Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailDstTarget && dstTarget) { DARABONBA_PTR_SET_RVALUE(dstTarget_, dstTarget) };


    // interceptType Field Functions 
    bool hasInterceptType() const { return this->interceptType_ != nullptr;};
    void deleteInterceptType() { this->interceptType_ = nullptr;};
    inline int64_t interceptType() const { DARABONBA_PTR_GET_DEFAULT(interceptType_, 0L) };
    inline GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& setInterceptType(int64_t interceptType) { DARABONBA_PTR_SET_VALUE(interceptType_, interceptType) };


    // orderIndex Field Functions 
    bool hasOrderIndex() const { return this->orderIndex_ != nullptr;};
    void deleteOrderIndex() { this->orderIndex_ = nullptr;};
    inline int64_t orderIndex() const { DARABONBA_PTR_GET_DEFAULT(orderIndex_, 0L) };
    inline GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& setOrderIndex(int64_t orderIndex) { DARABONBA_PTR_SET_VALUE(orderIndex_, orderIndex) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t ruleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // srcTarget Field Functions 
    bool hasSrcTarget() const { return this->srcTarget_ != nullptr;};
    void deleteSrcTarget() { this->srcTarget_ = nullptr;};
    inline const Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailSrcTarget & srcTarget() const { DARABONBA_PTR_GET_CONST(srcTarget_, Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailSrcTarget) };
    inline Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailSrcTarget srcTarget() { DARABONBA_PTR_GET(srcTarget_, Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailSrcTarget) };
    inline GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& setSrcTarget(const Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailSrcTarget & srcTarget) { DARABONBA_PTR_SET_VALUE(srcTarget_, srcTarget) };
    inline GetInterceptionRuleDetailResponseBodyInterceptionRuleDetail& setSrcTarget(Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailSrcTarget && srcTarget) { DARABONBA_PTR_SET_RVALUE(srcTarget_, srcTarget) };


  protected:
    // The destination network object.
    std::shared_ptr<Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailDstTarget> dstTarget_ = nullptr;
    // The interception mode. Valid values:
    // 
    // *   **0**: monitor
    // *   **1**: block
    // *   **2**: alert
    // *   **3**: allow
    std::shared_ptr<int64_t> interceptType_ = nullptr;
    // The priority of the rule. Valid values: 1 to 1000. A smaller value indicates a higher priority.
    std::shared_ptr<int64_t> orderIndex_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The status of the defense rule. Valid values:
    // 
    // *   **1**: The rule is enabled.
    // *   **0**: The rule is disabled.
    std::shared_ptr<int32_t> ruleSwitch_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **suggest**: a suggestion rule
    // *   **customize**: a custom rule
    std::shared_ptr<string> ruleType_ = nullptr;
    // The source network object.
    std::shared_ptr<Models::GetInterceptionRuleDetailResponseBodyInterceptionRuleDetailSrcTarget> srcTarget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
