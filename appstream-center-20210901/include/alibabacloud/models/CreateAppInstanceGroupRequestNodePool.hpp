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
    // Maximum number of idle sessions. When this value is specified, auto-scaling is triggered only if the session utilization exceeds `ScalingUsageThreshold` and the current number of idle sessions in the delivery group is less than `MaxIdleAppInstanceAmount`. Otherwise, it is considered that sufficient idle sessions are available, and no auto-scaling will occur. This parameter allows flexible control over elastic scaling behavior and helps reduce usage costs.
    std::shared_ptr<int32_t> maxIdleAppInstanceAmount_ = nullptr;
    // The maximum number of resources that can be created for scale-out. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_USAGE`.
    std::shared_ptr<int32_t> maxScalingAmount_ = nullptr;
    // The number of resources that you want to purchase. Valid values: 1 to 100.
    // 
    // > 
    // 
    // *   This parameter is required if the resources are subscription resources.
    // 
    // *   If the resources are pay-as-you-go resources, this parameter is required only if you set `StrategyType` to `NODE_FIXED` or `NODE_SCALING_BY_USAGE`.
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    // The maximum number of sessions to which a resource can connect at the same time. If a resource connects to a large number of sessions at the same time, the user experience can be compromised. The value range varies based on the resource type. The following items describe the value ranges of different resource types:
    // 
    // *   appstreaming.general.4c8g: 1 to 2
    // *   appstreaming.general.8c16g: 1 to 4
    // *   appstreaming.vgpu.8c16g.4g: 1 to 4
    // *   appstreaming.vgpu.8c31g.16g: 1 to 4
    // *   appstreaming.vgpu.14c93g.12g: 1 to 6
    std::shared_ptr<int32_t> nodeCapacity_ = nullptr;
    // The ID of the resource type that you want to purchase. You can call the [ListNodeInstanceType](https://help.aliyun.com/document_detail/428502.html) operation to obtain the ID.
    // 
    // Valid values:
    // 
    // *   appstreaming.vgpu.8c16g.4g: WUYING - Graphics_8 vCPUs, 16 GiB Memory, 4 GiB GPU Memory
    // *   appstreaming.general.8c16g: WUYING - General_8 vCPUs, 16 GiB Memory
    // *   appstreaming.general.4c8g: WUYING - General_4 vCPUs, 8 GiB Memory
    // *   appstreaming.vgpu.14c93g.12g: WUYING - Graphics_14 vCPUs, 93 GiB Memory, 12 GiB GPU Memory.
    // *   appstreaming.vgpu.8c31g.16g: WUYING - Graphics_8 vCPUs, 31 GiB Memory, 16 GiB GPU Memory
    std::shared_ptr<string> nodeInstanceType_ = nullptr;
    // The schedules of the scaling policy. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_SCHEDULE`.
    std::shared_ptr<vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules>> recurrenceSchedules_ = nullptr;
    // The maximum retention period of a resource to which no session is connected. If no session is connected to a resource, the resource is automatically scaled in after the specified retention period elapses. Valid values: 5 to 120. Default value: 5. Unit: minutes. If one of the following situations occurs, the resource is not scaled in.
    // 
    // *   If automatic scale-out is triggered after the resource is scaled in, the scale-in is not executed. This prevents repeated scale-in and scale-out.
    // *   If automatic scale-out is triggered due to an increase in the number of sessions during the specified period of time, the resource is not scaled in and the countdown restarts.
    std::shared_ptr<int32_t> scalingDownAfterIdleMinutes_ = nullptr;
    // The number of resources that are created each time resources are scaled out. Valid values: 1 to 10. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_USAGE`.
    std::shared_ptr<int32_t> scalingStep_ = nullptr;
    // The upper limit of session usage. If the session usage exceeds the specified upper limit, auto scaling is automatically triggered. The session usage is calculated by using the following formula: `Session usage = Number of current sessions/(Total number of resources × Number of concurrent sessions) × 100%`. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_USAGE`. Valid values: 0 to 100. Default value: 85.
    std::shared_ptr<string> scalingUsageThreshold_ = nullptr;
    // The expiration date of the scaling policy. Format: yyyy-MM-dd. The interval between the expiration date and the effective date must be from 7 days to 1 year. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_SCHEDULE`.
    std::shared_ptr<string> strategyDisableDate_ = nullptr;
    // The effective date of the scaling policy. Format: yyyy-MM-dd. The date must be the same as or later than the current date. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_SCHEDULE`.
    std::shared_ptr<string> strategyEnableDate_ = nullptr;
    // The scaling policy of resources.
    // 
    // > 
    // 
    // *   `NODE_FIXED`: fixed number of resources. This value is applicable to pay-as-you-go resources and subscription resources.
    // 
    // *   `NODE_SCALING_BY_USAGE`: auto scaling. This value is applicable to pay-as-you-go resources and subscription resources.
    // 
    // *   `NODE_SCALING_BY_SCHEDULE`: scheduled scaling. This value is applicable only to pay-as-you-go resources.
    // 
    // Valid values:
    // 
    // *   NODE_FIXED: fixed number of resources
    // *   NODE_SCALING_BY_SCHEDULE: scheduled scaling
    // *   NODE_SCALING_BY_USAGE: auto scaling
    std::shared_ptr<string> strategyType_ = nullptr;
    // Specifies whether to enable the warmup policy for resources. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_SCHEDULE`.
    std::shared_ptr<bool> warmUp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
