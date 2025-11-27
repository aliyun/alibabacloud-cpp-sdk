// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELSNODEPOOL_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELSNODEPOOL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(MaxIdleAppInstanceAmount, maxIdleAppInstanceAmount_);
      DARABONBA_PTR_TO_JSON(MaxScalingAmount, maxScalingAmount_);
      DARABONBA_PTR_TO_JSON(NodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(NodeCapacity, nodeCapacity_);
      DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_TO_JSON(NodeTypeName, nodeTypeName_);
      DARABONBA_PTR_TO_JSON(NodeUsed, nodeUsed_);
      DARABONBA_PTR_TO_JSON(RecurrenceSchedules, recurrenceSchedules_);
      DARABONBA_PTR_TO_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
      DARABONBA_PTR_TO_JSON(ScalingNodeAmount, scalingNodeAmount_);
      DARABONBA_PTR_TO_JSON(ScalingNodeUsed, scalingNodeUsed_);
      DARABONBA_PTR_TO_JSON(ScalingStep, scalingStep_);
      DARABONBA_PTR_TO_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
      DARABONBA_PTR_TO_JSON(StrategyDisableDate, strategyDisableDate_);
      DARABONBA_PTR_TO_JSON(StrategyEnableDate, strategyEnableDate_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(WarmUp, warmUp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(MaxIdleAppInstanceAmount, maxIdleAppInstanceAmount_);
      DARABONBA_PTR_FROM_JSON(MaxScalingAmount, maxScalingAmount_);
      DARABONBA_PTR_FROM_JSON(NodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(NodeCapacity, nodeCapacity_);
      DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_FROM_JSON(NodeTypeName, nodeTypeName_);
      DARABONBA_PTR_FROM_JSON(NodeUsed, nodeUsed_);
      DARABONBA_PTR_FROM_JSON(RecurrenceSchedules, recurrenceSchedules_);
      DARABONBA_PTR_FROM_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
      DARABONBA_PTR_FROM_JSON(ScalingNodeAmount, scalingNodeAmount_);
      DARABONBA_PTR_FROM_JSON(ScalingNodeUsed, scalingNodeUsed_);
      DARABONBA_PTR_FROM_JSON(ScalingStep, scalingStep_);
      DARABONBA_PTR_FROM_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
      DARABONBA_PTR_FROM_JSON(StrategyDisableDate, strategyDisableDate_);
      DARABONBA_PTR_FROM_JSON(StrategyEnableDate, strategyEnableDate_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(WarmUp, warmUp_);
    };
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool() = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool(const GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool &) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool(GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool &&) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool() = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& operator=(const GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool &) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& operator=(GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->maxIdleAppInstanceAmount_ == nullptr && return this->maxScalingAmount_ == nullptr && return this->nodeAmount_ == nullptr && return this->nodeCapacity_ == nullptr && return this->nodeInstanceType_ == nullptr
        && return this->nodePoolId_ == nullptr && return this->nodeTypeName_ == nullptr && return this->nodeUsed_ == nullptr && return this->recurrenceSchedules_ == nullptr && return this->scalingDownAfterIdleMinutes_ == nullptr
        && return this->scalingNodeAmount_ == nullptr && return this->scalingNodeUsed_ == nullptr && return this->scalingStep_ == nullptr && return this->scalingUsageThreshold_ == nullptr && return this->strategyDisableDate_ == nullptr
        && return this->strategyEnableDate_ == nullptr && return this->strategyType_ == nullptr && return this->warmUp_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // maxIdleAppInstanceAmount Field Functions 
    bool hasMaxIdleAppInstanceAmount() const { return this->maxIdleAppInstanceAmount_ != nullptr;};
    void deleteMaxIdleAppInstanceAmount() { this->maxIdleAppInstanceAmount_ = nullptr;};
    inline int32_t maxIdleAppInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(maxIdleAppInstanceAmount_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setMaxIdleAppInstanceAmount(int32_t maxIdleAppInstanceAmount) { DARABONBA_PTR_SET_VALUE(maxIdleAppInstanceAmount_, maxIdleAppInstanceAmount) };


    // maxScalingAmount Field Functions 
    bool hasMaxScalingAmount() const { return this->maxScalingAmount_ != nullptr;};
    void deleteMaxScalingAmount() { this->maxScalingAmount_ = nullptr;};
    inline int32_t maxScalingAmount() const { DARABONBA_PTR_GET_DEFAULT(maxScalingAmount_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setMaxScalingAmount(int32_t maxScalingAmount) { DARABONBA_PTR_SET_VALUE(maxScalingAmount_, maxScalingAmount) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeCapacity Field Functions 
    bool hasNodeCapacity() const { return this->nodeCapacity_ != nullptr;};
    void deleteNodeCapacity() { this->nodeCapacity_ = nullptr;};
    inline int32_t nodeCapacity() const { DARABONBA_PTR_GET_DEFAULT(nodeCapacity_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setNodeCapacity(int32_t nodeCapacity) { DARABONBA_PTR_SET_VALUE(nodeCapacity_, nodeCapacity) };


    // nodeInstanceType Field Functions 
    bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
    void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
    inline string nodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


    // nodePoolId Field Functions 
    bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
    void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
    inline string nodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


    // nodeTypeName Field Functions 
    bool hasNodeTypeName() const { return this->nodeTypeName_ != nullptr;};
    void deleteNodeTypeName() { this->nodeTypeName_ = nullptr;};
    inline string nodeTypeName() const { DARABONBA_PTR_GET_DEFAULT(nodeTypeName_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setNodeTypeName(string nodeTypeName) { DARABONBA_PTR_SET_VALUE(nodeTypeName_, nodeTypeName) };


    // nodeUsed Field Functions 
    bool hasNodeUsed() const { return this->nodeUsed_ != nullptr;};
    void deleteNodeUsed() { this->nodeUsed_ = nullptr;};
    inline int32_t nodeUsed() const { DARABONBA_PTR_GET_DEFAULT(nodeUsed_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setNodeUsed(int32_t nodeUsed) { DARABONBA_PTR_SET_VALUE(nodeUsed_, nodeUsed) };


    // recurrenceSchedules Field Functions 
    bool hasRecurrenceSchedules() const { return this->recurrenceSchedules_ != nullptr;};
    void deleteRecurrenceSchedules() { this->recurrenceSchedules_ = nullptr;};
    inline const vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules> & recurrenceSchedules() const { DARABONBA_PTR_GET_CONST(recurrenceSchedules_, vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules>) };
    inline vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules> recurrenceSchedules() { DARABONBA_PTR_GET(recurrenceSchedules_, vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules>) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setRecurrenceSchedules(const vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules> & recurrenceSchedules) { DARABONBA_PTR_SET_VALUE(recurrenceSchedules_, recurrenceSchedules) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setRecurrenceSchedules(vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules> && recurrenceSchedules) { DARABONBA_PTR_SET_RVALUE(recurrenceSchedules_, recurrenceSchedules) };


    // scalingDownAfterIdleMinutes Field Functions 
    bool hasScalingDownAfterIdleMinutes() const { return this->scalingDownAfterIdleMinutes_ != nullptr;};
    void deleteScalingDownAfterIdleMinutes() { this->scalingDownAfterIdleMinutes_ = nullptr;};
    inline int32_t scalingDownAfterIdleMinutes() const { DARABONBA_PTR_GET_DEFAULT(scalingDownAfterIdleMinutes_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setScalingDownAfterIdleMinutes(int32_t scalingDownAfterIdleMinutes) { DARABONBA_PTR_SET_VALUE(scalingDownAfterIdleMinutes_, scalingDownAfterIdleMinutes) };


    // scalingNodeAmount Field Functions 
    bool hasScalingNodeAmount() const { return this->scalingNodeAmount_ != nullptr;};
    void deleteScalingNodeAmount() { this->scalingNodeAmount_ = nullptr;};
    inline int32_t scalingNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(scalingNodeAmount_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setScalingNodeAmount(int32_t scalingNodeAmount) { DARABONBA_PTR_SET_VALUE(scalingNodeAmount_, scalingNodeAmount) };


    // scalingNodeUsed Field Functions 
    bool hasScalingNodeUsed() const { return this->scalingNodeUsed_ != nullptr;};
    void deleteScalingNodeUsed() { this->scalingNodeUsed_ = nullptr;};
    inline int32_t scalingNodeUsed() const { DARABONBA_PTR_GET_DEFAULT(scalingNodeUsed_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setScalingNodeUsed(int32_t scalingNodeUsed) { DARABONBA_PTR_SET_VALUE(scalingNodeUsed_, scalingNodeUsed) };


    // scalingStep Field Functions 
    bool hasScalingStep() const { return this->scalingStep_ != nullptr;};
    void deleteScalingStep() { this->scalingStep_ = nullptr;};
    inline int32_t scalingStep() const { DARABONBA_PTR_GET_DEFAULT(scalingStep_, 0) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setScalingStep(int32_t scalingStep) { DARABONBA_PTR_SET_VALUE(scalingStep_, scalingStep) };


    // scalingUsageThreshold Field Functions 
    bool hasScalingUsageThreshold() const { return this->scalingUsageThreshold_ != nullptr;};
    void deleteScalingUsageThreshold() { this->scalingUsageThreshold_ = nullptr;};
    inline string scalingUsageThreshold() const { DARABONBA_PTR_GET_DEFAULT(scalingUsageThreshold_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setScalingUsageThreshold(string scalingUsageThreshold) { DARABONBA_PTR_SET_VALUE(scalingUsageThreshold_, scalingUsageThreshold) };


    // strategyDisableDate Field Functions 
    bool hasStrategyDisableDate() const { return this->strategyDisableDate_ != nullptr;};
    void deleteStrategyDisableDate() { this->strategyDisableDate_ = nullptr;};
    inline string strategyDisableDate() const { DARABONBA_PTR_GET_DEFAULT(strategyDisableDate_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setStrategyDisableDate(string strategyDisableDate) { DARABONBA_PTR_SET_VALUE(strategyDisableDate_, strategyDisableDate) };


    // strategyEnableDate Field Functions 
    bool hasStrategyEnableDate() const { return this->strategyEnableDate_ != nullptr;};
    void deleteStrategyEnableDate() { this->strategyEnableDate_ = nullptr;};
    inline string strategyEnableDate() const { DARABONBA_PTR_GET_DEFAULT(strategyEnableDate_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setStrategyEnableDate(string strategyEnableDate) { DARABONBA_PTR_SET_VALUE(strategyEnableDate_, strategyEnableDate) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // warmUp Field Functions 
    bool hasWarmUp() const { return this->warmUp_ != nullptr;};
    void deleteWarmUp() { this->warmUp_ = nullptr;};
    inline bool warmUp() const { DARABONBA_PTR_GET_DEFAULT(warmUp_, false) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool& setWarmUp(bool warmUp) { DARABONBA_PTR_SET_VALUE(warmUp_, warmUp) };


  protected:
    // The number of resources purchased when the delivery group was created.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // 空闲会话数上限。指定该值时，当会话使用率超过`ScalingUsageThreshold`且当前交付组空闲会话数小于`MaxIdleAppInstanceAmount`时，才会触发自动扩容，否则认为交付组空闲会话已足够使用，不自动扩容。该参数可用于灵活控制弹性扩容行为和降低使用成本。
    std::shared_ptr<int32_t> maxIdleAppInstanceAmount_ = nullptr;
    // The maximum number of resources that can be created for scale-out.
    std::shared_ptr<int32_t> maxScalingAmount_ = nullptr;
    // The total number of subscription resources.
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    // The maximum number of sessions to which a resource can connect at the same time. If a resource connects to a large number of sessions at the same time, user experience can be compromised. The value range varies based on the resource type. The following items describe the value ranges of different resource types:
    // 
    // *   appstreaming.general.4c8g: 1 to 2
    // *   appstreaming.general.8c16g: 1 to 4
    // *   appstreaming.vgpu.8c16g.4g: 1 to 4
    // *   appstreaming.vgpu.8c31g.16g: 1 to 4
    // *   appstreaming.vgpu.14c93g.12g: 1 to 6
    std::shared_ptr<int32_t> nodeCapacity_ = nullptr;
    // The ID of the resource type that you purchase.
    std::shared_ptr<string> nodeInstanceType_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> nodePoolId_ = nullptr;
    // The name of the resource type.
    std::shared_ptr<string> nodeTypeName_ = nullptr;
    // The number of subscription resources that are in use.
    std::shared_ptr<int32_t> nodeUsed_ = nullptr;
    // The schedules of the scaling policy.
    std::shared_ptr<vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules>> recurrenceSchedules_ = nullptr;
    // The duration for which no session is connected. Unit: minutes. If no session is connected in the resources after the specified duration elapses, automatic scale-in is triggered. Default value: 5.
    std::shared_ptr<int32_t> scalingDownAfterIdleMinutes_ = nullptr;
    // The total number of scalable resources.
    std::shared_ptr<int32_t> scalingNodeAmount_ = nullptr;
    // The number of scalable resources that are in use.
    std::shared_ptr<int32_t> scalingNodeUsed_ = nullptr;
    // The number of resources that are created each time resources are scaled out. Valid values: 1 to 10.
    std::shared_ptr<int32_t> scalingStep_ = nullptr;
    // The upper limit of session usage. If the session usage exceeds the specified upper limit, auto scaling is automatically triggered. The session usage is calculated by using the following formula: `Session usage = Number of current sessions/(Total number of resources × Number of concurrent sessions) × 100%`.
    std::shared_ptr<string> scalingUsageThreshold_ = nullptr;
    // The expiration date of the scaling policy. Format: yyyy-MM-dd.
    std::shared_ptr<string> strategyDisableDate_ = nullptr;
    // The effective date of the scaling policy. Format: yyyy-MM-dd.
    std::shared_ptr<string> strategyEnableDate_ = nullptr;
    // The type of the scaling policy.
    // 
    // >  `NODE_SCALING_BY_USAGE` is returned for this parameter only if ChargeType is set to `PrePaid`. `NODE_SCALING_BY_SCHEDULE` is returned for this parameter only if ChargeType is set to `PostPaid`.
    // 
    // Valid values:
    // 
    // *   NODE_FIXED: No scalable resources are used.
    // *   NODE_SCALING_BY_SCHEDULE: Scheduled scaling is used.
    // *   NODE_SCALING_BY_USAGE: Resources are scaled based on usage.
    std::shared_ptr<string> strategyType_ = nullptr;
    // Indicates whether the warmup policy is enabled for resources.
    std::shared_ptr<bool> warmUp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
