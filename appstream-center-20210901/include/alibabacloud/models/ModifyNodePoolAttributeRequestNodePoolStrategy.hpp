// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLATTRIBUTEREQUESTNODEPOOLSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLATTRIBUTEREQUESTNODEPOOLSTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyNodePoolAttributeRequestNodePoolStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodePoolAttributeRequestNodePoolStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(MaxIdleAppInstanceAmount, maxIdleAppInstanceAmount_);
      DARABONBA_PTR_TO_JSON(MaxScalingAmount, maxScalingAmount_);
      DARABONBA_PTR_TO_JSON(NodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(RecurrenceSchedules, recurrenceSchedules_);
      DARABONBA_PTR_TO_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
      DARABONBA_PTR_TO_JSON(ScalingStep, scalingStep_);
      DARABONBA_PTR_TO_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
      DARABONBA_PTR_TO_JSON(StrategyDisableDate, strategyDisableDate_);
      DARABONBA_PTR_TO_JSON(StrategyEnableDate, strategyEnableDate_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(WarmUp, warmUp_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolAttributeRequestNodePoolStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxIdleAppInstanceAmount, maxIdleAppInstanceAmount_);
      DARABONBA_PTR_FROM_JSON(MaxScalingAmount, maxScalingAmount_);
      DARABONBA_PTR_FROM_JSON(NodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(RecurrenceSchedules, recurrenceSchedules_);
      DARABONBA_PTR_FROM_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
      DARABONBA_PTR_FROM_JSON(ScalingStep, scalingStep_);
      DARABONBA_PTR_FROM_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
      DARABONBA_PTR_FROM_JSON(StrategyDisableDate, strategyDisableDate_);
      DARABONBA_PTR_FROM_JSON(StrategyEnableDate, strategyEnableDate_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(WarmUp, warmUp_);
    };
    ModifyNodePoolAttributeRequestNodePoolStrategy() = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategy(const ModifyNodePoolAttributeRequestNodePoolStrategy &) = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategy(ModifyNodePoolAttributeRequestNodePoolStrategy &&) = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodePoolAttributeRequestNodePoolStrategy() = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategy& operator=(const ModifyNodePoolAttributeRequestNodePoolStrategy &) = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategy& operator=(ModifyNodePoolAttributeRequestNodePoolStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxIdleAppInstanceAmount_ != nullptr
        && this->maxScalingAmount_ != nullptr && this->nodeAmount_ != nullptr && this->recurrenceSchedules_ != nullptr && this->scalingDownAfterIdleMinutes_ != nullptr && this->scalingStep_ != nullptr
        && this->scalingUsageThreshold_ != nullptr && this->strategyDisableDate_ != nullptr && this->strategyEnableDate_ != nullptr && this->strategyType_ != nullptr && this->warmUp_ != nullptr; };
    // maxIdleAppInstanceAmount Field Functions 
    bool hasMaxIdleAppInstanceAmount() const { return this->maxIdleAppInstanceAmount_ != nullptr;};
    void deleteMaxIdleAppInstanceAmount() { this->maxIdleAppInstanceAmount_ = nullptr;};
    inline int32_t maxIdleAppInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(maxIdleAppInstanceAmount_, 0) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy& setMaxIdleAppInstanceAmount(int32_t maxIdleAppInstanceAmount) { DARABONBA_PTR_SET_VALUE(maxIdleAppInstanceAmount_, maxIdleAppInstanceAmount) };


    // maxScalingAmount Field Functions 
    bool hasMaxScalingAmount() const { return this->maxScalingAmount_ != nullptr;};
    void deleteMaxScalingAmount() { this->maxScalingAmount_ = nullptr;};
    inline int32_t maxScalingAmount() const { DARABONBA_PTR_GET_DEFAULT(maxScalingAmount_, 0) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy& setMaxScalingAmount(int32_t maxScalingAmount) { DARABONBA_PTR_SET_VALUE(maxScalingAmount_, maxScalingAmount) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // recurrenceSchedules Field Functions 
    bool hasRecurrenceSchedules() const { return this->recurrenceSchedules_ != nullptr;};
    void deleteRecurrenceSchedules() { this->recurrenceSchedules_ = nullptr;};
    inline const vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules> & recurrenceSchedules() const { DARABONBA_PTR_GET_CONST(recurrenceSchedules_, vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules>) };
    inline vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules> recurrenceSchedules() { DARABONBA_PTR_GET(recurrenceSchedules_, vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules>) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy& setRecurrenceSchedules(const vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules> & recurrenceSchedules) { DARABONBA_PTR_SET_VALUE(recurrenceSchedules_, recurrenceSchedules) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy& setRecurrenceSchedules(vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules> && recurrenceSchedules) { DARABONBA_PTR_SET_RVALUE(recurrenceSchedules_, recurrenceSchedules) };


    // scalingDownAfterIdleMinutes Field Functions 
    bool hasScalingDownAfterIdleMinutes() const { return this->scalingDownAfterIdleMinutes_ != nullptr;};
    void deleteScalingDownAfterIdleMinutes() { this->scalingDownAfterIdleMinutes_ = nullptr;};
    inline int32_t scalingDownAfterIdleMinutes() const { DARABONBA_PTR_GET_DEFAULT(scalingDownAfterIdleMinutes_, 0) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy& setScalingDownAfterIdleMinutes(int32_t scalingDownAfterIdleMinutes) { DARABONBA_PTR_SET_VALUE(scalingDownAfterIdleMinutes_, scalingDownAfterIdleMinutes) };


    // scalingStep Field Functions 
    bool hasScalingStep() const { return this->scalingStep_ != nullptr;};
    void deleteScalingStep() { this->scalingStep_ = nullptr;};
    inline int32_t scalingStep() const { DARABONBA_PTR_GET_DEFAULT(scalingStep_, 0) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy& setScalingStep(int32_t scalingStep) { DARABONBA_PTR_SET_VALUE(scalingStep_, scalingStep) };


    // scalingUsageThreshold Field Functions 
    bool hasScalingUsageThreshold() const { return this->scalingUsageThreshold_ != nullptr;};
    void deleteScalingUsageThreshold() { this->scalingUsageThreshold_ = nullptr;};
    inline string scalingUsageThreshold() const { DARABONBA_PTR_GET_DEFAULT(scalingUsageThreshold_, "") };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy& setScalingUsageThreshold(string scalingUsageThreshold) { DARABONBA_PTR_SET_VALUE(scalingUsageThreshold_, scalingUsageThreshold) };


    // strategyDisableDate Field Functions 
    bool hasStrategyDisableDate() const { return this->strategyDisableDate_ != nullptr;};
    void deleteStrategyDisableDate() { this->strategyDisableDate_ = nullptr;};
    inline string strategyDisableDate() const { DARABONBA_PTR_GET_DEFAULT(strategyDisableDate_, "") };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy& setStrategyDisableDate(string strategyDisableDate) { DARABONBA_PTR_SET_VALUE(strategyDisableDate_, strategyDisableDate) };


    // strategyEnableDate Field Functions 
    bool hasStrategyEnableDate() const { return this->strategyEnableDate_ != nullptr;};
    void deleteStrategyEnableDate() { this->strategyEnableDate_ = nullptr;};
    inline string strategyEnableDate() const { DARABONBA_PTR_GET_DEFAULT(strategyEnableDate_, "") };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy& setStrategyEnableDate(string strategyEnableDate) { DARABONBA_PTR_SET_VALUE(strategyEnableDate_, strategyEnableDate) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // warmUp Field Functions 
    bool hasWarmUp() const { return this->warmUp_ != nullptr;};
    void deleteWarmUp() { this->warmUp_ = nullptr;};
    inline bool warmUp() const { DARABONBA_PTR_GET_DEFAULT(warmUp_, false) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy& setWarmUp(bool warmUp) { DARABONBA_PTR_SET_VALUE(warmUp_, warmUp) };


  protected:
    std::shared_ptr<int32_t> maxIdleAppInstanceAmount_ = nullptr;
    std::shared_ptr<int32_t> maxScalingAmount_ = nullptr;
    // 购买资源的数量。取值范围：1~100。
    // 
    // > 
    // - 若为包年包月资源，则该参数不可修改。
    // - 若为按量付费资源，则当弹性模式（`StrategyType`）为固定数量（`NODE_FIXED`）或自动扩缩容（`NODE_SCALING_BY_USAGE`）时该参数可修改。
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    // 策略执行周期列表。`StrategyType`（弹性模式）设为`NODE_SCALING_BY_SCHEDULE`（定时扩缩容）时，该字段必填。
    std::shared_ptr<vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules>> recurrenceSchedules_ = nullptr;
    std::shared_ptr<int32_t> scalingDownAfterIdleMinutes_ = nullptr;
    std::shared_ptr<int32_t> scalingStep_ = nullptr;
    std::shared_ptr<string> scalingUsageThreshold_ = nullptr;
    // 策略失效日期。格式为：yyyy-MM-dd。失效日期与生效日期的间隔必须介于7天到1年之间（含7天和1年）。`StrategyType`（弹性模式）设为`NODE_SCALING_BY_SCHEDULE`（定时扩缩容）时，该字段必填。
    std::shared_ptr<string> strategyDisableDate_ = nullptr;
    // 策略生效日期。格式为：yyyy-MM-dd。该日期必须大于或等于当前日期。`StrategyType`（弹性模式）设为`NODE_SCALING_BY_SCHEDULE`（定时扩缩容）时，该字段必填。
    std::shared_ptr<string> strategyEnableDate_ = nullptr;
    std::shared_ptr<string> strategyType_ = nullptr;
    // 是否开启资源预热策略。`StrategyType`（弹性模式）设为`NODE_SCALING_BY_SCHEDULE`（定时扩缩容）时，该字段必填。
    std::shared_ptr<bool> warmUp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
