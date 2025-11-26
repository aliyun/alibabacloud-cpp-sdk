// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGRULESPEC_HPP_
#define ALIBABACLOUD_MODELS_SCALINGRULESPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScalingRuleSpecByLoadScalingRuleSpec.hpp>
#include <alibabacloud/models/ScalingRuleSpecByTimeScalingRuleSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingRuleSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingRuleSpec& obj) { 
      DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_TO_JSON(ByLoadScalingRuleSpec, byLoadScalingRuleSpec_);
      DARABONBA_PTR_TO_JSON(ByTimeScalingRuleSpec, byTimeScalingRuleSpec_);
      DARABONBA_PTR_TO_JSON(CoolDownInterval, coolDownInterval_);
      DARABONBA_PTR_TO_JSON(ScalingActivityType, scalingActivityType_);
      DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_TO_JSON(ScalingRuleType, scalingRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingRuleSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_FROM_JSON(ByLoadScalingRuleSpec, byLoadScalingRuleSpec_);
      DARABONBA_PTR_FROM_JSON(ByTimeScalingRuleSpec, byTimeScalingRuleSpec_);
      DARABONBA_PTR_FROM_JSON(CoolDownInterval, coolDownInterval_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityType, scalingActivityType_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleType, scalingRuleType_);
    };
    ScalingRuleSpec() = default ;
    ScalingRuleSpec(const ScalingRuleSpec &) = default ;
    ScalingRuleSpec(ScalingRuleSpec &&) = default ;
    ScalingRuleSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingRuleSpec() = default ;
    ScalingRuleSpec& operator=(const ScalingRuleSpec &) = default ;
    ScalingRuleSpec& operator=(ScalingRuleSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adjustmentValue_ == nullptr
        && return this->byLoadScalingRuleSpec_ == nullptr && return this->byTimeScalingRuleSpec_ == nullptr && return this->coolDownInterval_ == nullptr && return this->scalingActivityType_ == nullptr && return this->scalingRuleName_ == nullptr
        && return this->scalingRuleType_ == nullptr; };
    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t adjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline ScalingRuleSpec& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // byLoadScalingRuleSpec Field Functions 
    bool hasByLoadScalingRuleSpec() const { return this->byLoadScalingRuleSpec_ != nullptr;};
    void deleteByLoadScalingRuleSpec() { this->byLoadScalingRuleSpec_ = nullptr;};
    inline const ScalingRuleSpecByLoadScalingRuleSpec & byLoadScalingRuleSpec() const { DARABONBA_PTR_GET_CONST(byLoadScalingRuleSpec_, ScalingRuleSpecByLoadScalingRuleSpec) };
    inline ScalingRuleSpecByLoadScalingRuleSpec byLoadScalingRuleSpec() { DARABONBA_PTR_GET(byLoadScalingRuleSpec_, ScalingRuleSpecByLoadScalingRuleSpec) };
    inline ScalingRuleSpec& setByLoadScalingRuleSpec(const ScalingRuleSpecByLoadScalingRuleSpec & byLoadScalingRuleSpec) { DARABONBA_PTR_SET_VALUE(byLoadScalingRuleSpec_, byLoadScalingRuleSpec) };
    inline ScalingRuleSpec& setByLoadScalingRuleSpec(ScalingRuleSpecByLoadScalingRuleSpec && byLoadScalingRuleSpec) { DARABONBA_PTR_SET_RVALUE(byLoadScalingRuleSpec_, byLoadScalingRuleSpec) };


    // byTimeScalingRuleSpec Field Functions 
    bool hasByTimeScalingRuleSpec() const { return this->byTimeScalingRuleSpec_ != nullptr;};
    void deleteByTimeScalingRuleSpec() { this->byTimeScalingRuleSpec_ = nullptr;};
    inline const ScalingRuleSpecByTimeScalingRuleSpec & byTimeScalingRuleSpec() const { DARABONBA_PTR_GET_CONST(byTimeScalingRuleSpec_, ScalingRuleSpecByTimeScalingRuleSpec) };
    inline ScalingRuleSpecByTimeScalingRuleSpec byTimeScalingRuleSpec() { DARABONBA_PTR_GET(byTimeScalingRuleSpec_, ScalingRuleSpecByTimeScalingRuleSpec) };
    inline ScalingRuleSpec& setByTimeScalingRuleSpec(const ScalingRuleSpecByTimeScalingRuleSpec & byTimeScalingRuleSpec) { DARABONBA_PTR_SET_VALUE(byTimeScalingRuleSpec_, byTimeScalingRuleSpec) };
    inline ScalingRuleSpec& setByTimeScalingRuleSpec(ScalingRuleSpecByTimeScalingRuleSpec && byTimeScalingRuleSpec) { DARABONBA_PTR_SET_RVALUE(byTimeScalingRuleSpec_, byTimeScalingRuleSpec) };


    // coolDownInterval Field Functions 
    bool hasCoolDownInterval() const { return this->coolDownInterval_ != nullptr;};
    void deleteCoolDownInterval() { this->coolDownInterval_ = nullptr;};
    inline int32_t coolDownInterval() const { DARABONBA_PTR_GET_DEFAULT(coolDownInterval_, 0) };
    inline ScalingRuleSpec& setCoolDownInterval(int32_t coolDownInterval) { DARABONBA_PTR_SET_VALUE(coolDownInterval_, coolDownInterval) };


    // scalingActivityType Field Functions 
    bool hasScalingActivityType() const { return this->scalingActivityType_ != nullptr;};
    void deleteScalingActivityType() { this->scalingActivityType_ = nullptr;};
    inline string scalingActivityType() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityType_, "") };
    inline ScalingRuleSpec& setScalingActivityType(string scalingActivityType) { DARABONBA_PTR_SET_VALUE(scalingActivityType_, scalingActivityType) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string scalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline ScalingRuleSpec& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // scalingRuleType Field Functions 
    bool hasScalingRuleType() const { return this->scalingRuleType_ != nullptr;};
    void deleteScalingRuleType() { this->scalingRuleType_ = nullptr;};
    inline string scalingRuleType() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleType_, "") };
    inline ScalingRuleSpec& setScalingRuleType(string scalingRuleType) { DARABONBA_PTR_SET_VALUE(scalingRuleType_, scalingRuleType) };


  protected:
    // 调整值。需要为正数，代表需要扩容或者缩容的实例数量。
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> adjustmentValue_ = nullptr;
    // 按照负载伸缩描述。
    std::shared_ptr<ScalingRuleSpecByLoadScalingRuleSpec> byLoadScalingRuleSpec_ = nullptr;
    // 按照时间伸缩描述。
    std::shared_ptr<ScalingRuleSpecByTimeScalingRuleSpec> byTimeScalingRuleSpec_ = nullptr;
    // 冷却时间。单位为秒，取值范围在30~10800秒之间。
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> coolDownInterval_ = nullptr;
    // 伸缩活动类型。
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingActivityType_ = nullptr;
    // 规则名称。
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingRuleName_ = nullptr;
    // 伸缩规则类型。
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingRuleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
