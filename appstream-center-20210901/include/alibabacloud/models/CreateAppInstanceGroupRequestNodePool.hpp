// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTNODEPOOL_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTNODEPOOL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequestNodePool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequestNodePool& obj) { 
      DARABONBA_PTR_TO_JSON(MaxIdleAppInstanceAmount, maxIdleAppInstanceAmount_);
      DARABONBA_PTR_TO_JSON(MaxScalingAmount, maxScalingAmount_);
      DARABONBA_PTR_TO_JSON(NodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(NodeCapacity, nodeCapacity_);
      DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_TO_JSON(RecurrenceSchedules, recurrenceSchedules_);
      DARABONBA_PTR_TO_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
      DARABONBA_PTR_TO_JSON(ScalingStep, scalingStep_);
      DARABONBA_PTR_TO_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
      DARABONBA_PTR_TO_JSON(StrategyDisableDate, strategyDisableDate_);
      DARABONBA_PTR_TO_JSON(StrategyEnableDate, strategyEnableDate_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(WarmUp, warmUp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequestNodePool& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxIdleAppInstanceAmount, maxIdleAppInstanceAmount_);
      DARABONBA_PTR_FROM_JSON(MaxScalingAmount, maxScalingAmount_);
      DARABONBA_PTR_FROM_JSON(NodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(NodeCapacity, nodeCapacity_);
      DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_FROM_JSON(RecurrenceSchedules, recurrenceSchedules_);
      DARABONBA_PTR_FROM_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
      DARABONBA_PTR_FROM_JSON(ScalingStep, scalingStep_);
      DARABONBA_PTR_FROM_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
      DARABONBA_PTR_FROM_JSON(StrategyDisableDate, strategyDisableDate_);
      DARABONBA_PTR_FROM_JSON(StrategyEnableDate, strategyEnableDate_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(WarmUp, warmUp_);
    };
    CreateAppInstanceGroupRequestNodePool() = default ;
    CreateAppInstanceGroupRequestNodePool(const CreateAppInstanceGroupRequestNodePool &) = default ;
    CreateAppInstanceGroupRequestNodePool(CreateAppInstanceGroupRequestNodePool &&) = default ;
    CreateAppInstanceGroupRequestNodePool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequestNodePool() = default ;
    CreateAppInstanceGroupRequestNodePool& operator=(const CreateAppInstanceGroupRequestNodePool &) = default ;
    CreateAppInstanceGroupRequestNodePool& operator=(CreateAppInstanceGroupRequestNodePool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxIdleAppInstanceAmount_ == nullptr
        && return this->maxScalingAmount_ == nullptr && return this->nodeAmount_ == nullptr && return this->nodeCapacity_ == nullptr && return this->nodeInstanceType_ == nullptr && return this->recurrenceSchedules_ == nullptr
        && return this->scalingDownAfterIdleMinutes_ == nullptr && return this->scalingStep_ == nullptr && return this->scalingUsageThreshold_ == nullptr && return this->strategyDisableDate_ == nullptr && return this->strategyEnableDate_ == nullptr
        && return this->strategyType_ == nullptr && return this->warmUp_ == nullptr; };
    // maxIdleAppInstanceAmount Field Functions 
    bool hasMaxIdleAppInstanceAmount() const { return this->maxIdleAppInstanceAmount_ != nullptr;};
    void deleteMaxIdleAppInstanceAmount() { this->maxIdleAppInstanceAmount_ = nullptr;};
    inline int32_t maxIdleAppInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(maxIdleAppInstanceAmount_, 0) };
    inline CreateAppInstanceGroupRequestNodePool& setMaxIdleAppInstanceAmount(int32_t maxIdleAppInstanceAmount) { DARABONBA_PTR_SET_VALUE(maxIdleAppInstanceAmount_, maxIdleAppInstanceAmount) };


    // maxScalingAmount Field Functions 
    bool hasMaxScalingAmount() const { return this->maxScalingAmount_ != nullptr;};
    void deleteMaxScalingAmount() { this->maxScalingAmount_ = nullptr;};
    inline int32_t maxScalingAmount() const { DARABONBA_PTR_GET_DEFAULT(maxScalingAmount_, 0) };
    inline CreateAppInstanceGroupRequestNodePool& setMaxScalingAmount(int32_t maxScalingAmount) { DARABONBA_PTR_SET_VALUE(maxScalingAmount_, maxScalingAmount) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline CreateAppInstanceGroupRequestNodePool& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeCapacity Field Functions 
    bool hasNodeCapacity() const { return this->nodeCapacity_ != nullptr;};
    void deleteNodeCapacity() { this->nodeCapacity_ = nullptr;};
    inline int32_t nodeCapacity() const { DARABONBA_PTR_GET_DEFAULT(nodeCapacity_, 0) };
    inline CreateAppInstanceGroupRequestNodePool& setNodeCapacity(int32_t nodeCapacity) { DARABONBA_PTR_SET_VALUE(nodeCapacity_, nodeCapacity) };


    // nodeInstanceType Field Functions 
    bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
    void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
    inline string nodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
    inline CreateAppInstanceGroupRequestNodePool& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


    // recurrenceSchedules Field Functions 
    bool hasRecurrenceSchedules() const { return this->recurrenceSchedules_ != nullptr;};
    void deleteRecurrenceSchedules() { this->recurrenceSchedules_ = nullptr;};
    inline const vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules> & recurrenceSchedules() const { DARABONBA_PTR_GET_CONST(recurrenceSchedules_, vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules>) };
    inline vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules> recurrenceSchedules() { DARABONBA_PTR_GET(recurrenceSchedules_, vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules>) };
    inline CreateAppInstanceGroupRequestNodePool& setRecurrenceSchedules(const vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules> & recurrenceSchedules) { DARABONBA_PTR_SET_VALUE(recurrenceSchedules_, recurrenceSchedules) };
    inline CreateAppInstanceGroupRequestNodePool& setRecurrenceSchedules(vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules> && recurrenceSchedules) { DARABONBA_PTR_SET_RVALUE(recurrenceSchedules_, recurrenceSchedules) };


    // scalingDownAfterIdleMinutes Field Functions 
    bool hasScalingDownAfterIdleMinutes() const { return this->scalingDownAfterIdleMinutes_ != nullptr;};
    void deleteScalingDownAfterIdleMinutes() { this->scalingDownAfterIdleMinutes_ = nullptr;};
    inline int32_t scalingDownAfterIdleMinutes() const { DARABONBA_PTR_GET_DEFAULT(scalingDownAfterIdleMinutes_, 0) };
    inline CreateAppInstanceGroupRequestNodePool& setScalingDownAfterIdleMinutes(int32_t scalingDownAfterIdleMinutes) { DARABONBA_PTR_SET_VALUE(scalingDownAfterIdleMinutes_, scalingDownAfterIdleMinutes) };


    // scalingStep Field Functions 
    bool hasScalingStep() const { return this->scalingStep_ != nullptr;};
    void deleteScalingStep() { this->scalingStep_ = nullptr;};
    inline int32_t scalingStep() const { DARABONBA_PTR_GET_DEFAULT(scalingStep_, 0) };
    inline CreateAppInstanceGroupRequestNodePool& setScalingStep(int32_t scalingStep) { DARABONBA_PTR_SET_VALUE(scalingStep_, scalingStep) };


    // scalingUsageThreshold Field Functions 
    bool hasScalingUsageThreshold() const { return this->scalingUsageThreshold_ != nullptr;};
    void deleteScalingUsageThreshold() { this->scalingUsageThreshold_ = nullptr;};
    inline string scalingUsageThreshold() const { DARABONBA_PTR_GET_DEFAULT(scalingUsageThreshold_, "") };
    inline CreateAppInstanceGroupRequestNodePool& setScalingUsageThreshold(string scalingUsageThreshold) { DARABONBA_PTR_SET_VALUE(scalingUsageThreshold_, scalingUsageThreshold) };


    // strategyDisableDate Field Functions 
    bool hasStrategyDisableDate() const { return this->strategyDisableDate_ != nullptr;};
    void deleteStrategyDisableDate() { this->strategyDisableDate_ = nullptr;};
    inline string strategyDisableDate() const { DARABONBA_PTR_GET_DEFAULT(strategyDisableDate_, "") };
    inline CreateAppInstanceGroupRequestNodePool& setStrategyDisableDate(string strategyDisableDate) { DARABONBA_PTR_SET_VALUE(strategyDisableDate_, strategyDisableDate) };


    // strategyEnableDate Field Functions 
    bool hasStrategyEnableDate() const { return this->strategyEnableDate_ != nullptr;};
    void deleteStrategyEnableDate() { this->strategyEnableDate_ = nullptr;};
    inline string strategyEnableDate() const { DARABONBA_PTR_GET_DEFAULT(strategyEnableDate_, "") };
    inline CreateAppInstanceGroupRequestNodePool& setStrategyEnableDate(string strategyEnableDate) { DARABONBA_PTR_SET_VALUE(strategyEnableDate_, strategyEnableDate) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline CreateAppInstanceGroupRequestNodePool& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // warmUp Field Functions 
    bool hasWarmUp() const { return this->warmUp_ != nullptr;};
    void deleteWarmUp() { this->warmUp_ = nullptr;};
    inline bool warmUp() const { DARABONBA_PTR_GET_DEFAULT(warmUp_, false) };
    inline CreateAppInstanceGroupRequestNodePool& setWarmUp(bool warmUp) { DARABONBA_PTR_SET_VALUE(warmUp_, warmUp) };


  protected:
    std::shared_ptr<int32_t> maxIdleAppInstanceAmount_ = nullptr;
    std::shared_ptr<int32_t> maxScalingAmount_ = nullptr;
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    std::shared_ptr<int32_t> nodeCapacity_ = nullptr;
    std::shared_ptr<string> nodeInstanceType_ = nullptr;
    std::shared_ptr<vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules>> recurrenceSchedules_ = nullptr;
    std::shared_ptr<int32_t> scalingDownAfterIdleMinutes_ = nullptr;
    std::shared_ptr<int32_t> scalingStep_ = nullptr;
    std::shared_ptr<string> scalingUsageThreshold_ = nullptr;
    std::shared_ptr<string> strategyDisableDate_ = nullptr;
    std::shared_ptr<string> strategyEnableDate_ = nullptr;
    std::shared_ptr<string> strategyType_ = nullptr;
    std::shared_ptr<bool> warmUp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
