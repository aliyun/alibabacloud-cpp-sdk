// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGRULEV1_HPP_
#define ALIBABACLOUD_MODELS_SCALINGRULEV1_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScalingRuleV1RuleParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingRuleV1 : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingRuleV1& obj) { 
      DARABONBA_PTR_TO_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_TO_JSON(CoolDownTime, coolDownTime_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleParam, ruleParam_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(ScalingConfigBizId, scalingConfigBizId_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingRuleV1& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_FROM_JSON(CoolDownTime, coolDownTime_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleParam, ruleParam_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigBizId, scalingConfigBizId_);
    };
    ScalingRuleV1() = default ;
    ScalingRuleV1(const ScalingRuleV1 &) = default ;
    ScalingRuleV1(ScalingRuleV1 &&) = default ;
    ScalingRuleV1(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingRuleV1() = default ;
    ScalingRuleV1& operator=(const ScalingRuleV1 &) = default ;
    ScalingRuleV1& operator=(ScalingRuleV1 &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adjustmentType_ == nullptr
        && return this->adjustmentValue_ == nullptr && return this->coolDownTime_ == nullptr && return this->ruleName_ == nullptr && return this->ruleParam_ == nullptr && return this->ruleType_ == nullptr
        && return this->scalingConfigBizId_ == nullptr; };
    // adjustmentType Field Functions 
    bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
    void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
    inline string adjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
    inline ScalingRuleV1& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t adjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline ScalingRuleV1& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // coolDownTime Field Functions 
    bool hasCoolDownTime() const { return this->coolDownTime_ != nullptr;};
    void deleteCoolDownTime() { this->coolDownTime_ = nullptr;};
    inline int32_t coolDownTime() const { DARABONBA_PTR_GET_DEFAULT(coolDownTime_, 0) };
    inline ScalingRuleV1& setCoolDownTime(int32_t coolDownTime) { DARABONBA_PTR_SET_VALUE(coolDownTime_, coolDownTime) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ScalingRuleV1& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleParam Field Functions 
    bool hasRuleParam() const { return this->ruleParam_ != nullptr;};
    void deleteRuleParam() { this->ruleParam_ = nullptr;};
    inline const ScalingRuleV1RuleParam & ruleParam() const { DARABONBA_PTR_GET_CONST(ruleParam_, ScalingRuleV1RuleParam) };
    inline ScalingRuleV1RuleParam ruleParam() { DARABONBA_PTR_GET(ruleParam_, ScalingRuleV1RuleParam) };
    inline ScalingRuleV1& setRuleParam(const ScalingRuleV1RuleParam & ruleParam) { DARABONBA_PTR_SET_VALUE(ruleParam_, ruleParam) };
    inline ScalingRuleV1& setRuleParam(ScalingRuleV1RuleParam && ruleParam) { DARABONBA_PTR_SET_RVALUE(ruleParam_, ruleParam) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ScalingRuleV1& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scalingConfigBizId Field Functions 
    bool hasScalingConfigBizId() const { return this->scalingConfigBizId_ != nullptr;};
    void deleteScalingConfigBizId() { this->scalingConfigBizId_ = nullptr;};
    inline string scalingConfigBizId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigBizId_, "") };
    inline ScalingRuleV1& setScalingConfigBizId(string scalingConfigBizId) { DARABONBA_PTR_SET_VALUE(scalingConfigBizId_, scalingConfigBizId) };


  protected:
    // 调整类型。
    std::shared_ptr<string> adjustmentType_ = nullptr;
    // 调整值,正数为扩容,负数为缩容。
    std::shared_ptr<int32_t> adjustmentValue_ = nullptr;
    // 冷却时间,单位秒。
    std::shared_ptr<int32_t> coolDownTime_ = nullptr;
    // 规则名称。
    std::shared_ptr<string> ruleName_ = nullptr;
    // 规则参数。
    std::shared_ptr<ScalingRuleV1RuleParam> ruleParam_ = nullptr;
    // 规则类型。
    std::shared_ptr<string> ruleType_ = nullptr;
    // 弹性规则配置ID。
    std::shared_ptr<string> scalingConfigBizId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
