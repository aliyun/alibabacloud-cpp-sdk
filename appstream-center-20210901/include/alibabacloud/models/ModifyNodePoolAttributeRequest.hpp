// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyNodePoolAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodePoolAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(NodeCapacity, nodeCapacity_);
      DARABONBA_PTR_TO_JSON(NodePoolStrategy, nodePoolStrategy_);
      DARABONBA_PTR_TO_JSON(PoolId, poolId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(NodeCapacity, nodeCapacity_);
      DARABONBA_PTR_FROM_JSON(NodePoolStrategy, nodePoolStrategy_);
      DARABONBA_PTR_FROM_JSON(PoolId, poolId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ModifyNodePoolAttributeRequest() = default ;
    ModifyNodePoolAttributeRequest(const ModifyNodePoolAttributeRequest &) = default ;
    ModifyNodePoolAttributeRequest(ModifyNodePoolAttributeRequest &&) = default ;
    ModifyNodePoolAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodePoolAttributeRequest() = default ;
    ModifyNodePoolAttributeRequest& operator=(const ModifyNodePoolAttributeRequest &) = default ;
    ModifyNodePoolAttributeRequest& operator=(ModifyNodePoolAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodePoolStrategy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodePoolStrategy& obj) { 
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
      friend void from_json(const Darabonba::Json& j, NodePoolStrategy& obj) { 
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
      NodePoolStrategy() = default ;
      NodePoolStrategy(const NodePoolStrategy &) = default ;
      NodePoolStrategy(NodePoolStrategy &&) = default ;
      NodePoolStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodePoolStrategy() = default ;
      NodePoolStrategy& operator=(const NodePoolStrategy &) = default ;
      NodePoolStrategy& operator=(NodePoolStrategy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecurrenceSchedules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecurrenceSchedules& obj) { 
          DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
          DARABONBA_PTR_TO_JSON(RecurrenceValues, recurrenceValues_);
          DARABONBA_PTR_TO_JSON(TimerPeriods, timerPeriods_);
        };
        friend void from_json(const Darabonba::Json& j, RecurrenceSchedules& obj) { 
          DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
          DARABONBA_PTR_FROM_JSON(RecurrenceValues, recurrenceValues_);
          DARABONBA_PTR_FROM_JSON(TimerPeriods, timerPeriods_);
        };
        RecurrenceSchedules() = default ;
        RecurrenceSchedules(const RecurrenceSchedules &) = default ;
        RecurrenceSchedules(RecurrenceSchedules &&) = default ;
        RecurrenceSchedules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecurrenceSchedules() = default ;
        RecurrenceSchedules& operator=(const RecurrenceSchedules &) = default ;
        RecurrenceSchedules& operator=(RecurrenceSchedules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TimerPeriods : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TimerPeriods& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, TimerPeriods& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          };
          TimerPeriods() = default ;
          TimerPeriods(const TimerPeriods &) = default ;
          TimerPeriods(TimerPeriods &&) = default ;
          TimerPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TimerPeriods() = default ;
          TimerPeriods& operator=(const TimerPeriods &) = default ;
          TimerPeriods& operator=(TimerPeriods &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
          inline TimerPeriods& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline TimerPeriods& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline TimerPeriods& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          // The number of resources.
          shared_ptr<int32_t> amount_ {};
          // The end of the time period during which the scaling policy is executed. Format: HH:mm.
          shared_ptr<string> endTime_ {};
          // The beginning of the time period during which the scaling policy is executed. Format: HH:mm.
          shared_ptr<string> startTime_ {};
        };

        virtual bool empty() const override { return this->recurrenceType_ == nullptr
        && this->recurrenceValues_ == nullptr && this->timerPeriods_ == nullptr; };
        // recurrenceType Field Functions 
        bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
        void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
        inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
        inline RecurrenceSchedules& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


        // recurrenceValues Field Functions 
        bool hasRecurrenceValues() const { return this->recurrenceValues_ != nullptr;};
        void deleteRecurrenceValues() { this->recurrenceValues_ = nullptr;};
        inline const vector<int32_t> & getRecurrenceValues() const { DARABONBA_PTR_GET_CONST(recurrenceValues_, vector<int32_t>) };
        inline vector<int32_t> getRecurrenceValues() { DARABONBA_PTR_GET(recurrenceValues_, vector<int32_t>) };
        inline RecurrenceSchedules& setRecurrenceValues(const vector<int32_t> & recurrenceValues) { DARABONBA_PTR_SET_VALUE(recurrenceValues_, recurrenceValues) };
        inline RecurrenceSchedules& setRecurrenceValues(vector<int32_t> && recurrenceValues) { DARABONBA_PTR_SET_RVALUE(recurrenceValues_, recurrenceValues) };


        // timerPeriods Field Functions 
        bool hasTimerPeriods() const { return this->timerPeriods_ != nullptr;};
        void deleteTimerPeriods() { this->timerPeriods_ = nullptr;};
        inline const vector<RecurrenceSchedules::TimerPeriods> & getTimerPeriods() const { DARABONBA_PTR_GET_CONST(timerPeriods_, vector<RecurrenceSchedules::TimerPeriods>) };
        inline vector<RecurrenceSchedules::TimerPeriods> getTimerPeriods() { DARABONBA_PTR_GET(timerPeriods_, vector<RecurrenceSchedules::TimerPeriods>) };
        inline RecurrenceSchedules& setTimerPeriods(const vector<RecurrenceSchedules::TimerPeriods> & timerPeriods) { DARABONBA_PTR_SET_VALUE(timerPeriods_, timerPeriods) };
        inline RecurrenceSchedules& setTimerPeriods(vector<RecurrenceSchedules::TimerPeriods> && timerPeriods) { DARABONBA_PTR_SET_RVALUE(timerPeriods_, timerPeriods) };


      protected:
        // The schedule type of the scaling policy. This parameter must be configured together with `RecurrenceValues`.``
        // 
        // Valid values:
        // 
        // *   weekly: The scaling policy is executed on specific days each week.
        shared_ptr<string> recurrenceType_ {};
        // The days of each week on which the scaling policy is executed.
        shared_ptr<vector<int32_t>> recurrenceValues_ {};
        // The time periods during which the scaling policy can be executed. The time periods must meet the following requirements:
        // 
        // *   Up to three time periods can be added.
        // *   Time periods cannot be overlapped.
        // *   The interval between two consecutive time periods must be greater than or equal to 5 minutes.
        // *   Each time period must be greater than or equal to 15 minutes.
        // *   The total length of the time periods that you specify cannot be greater than a day.
        shared_ptr<vector<RecurrenceSchedules::TimerPeriods>> timerPeriods_ {};
      };

      virtual bool empty() const override { return this->maxIdleAppInstanceAmount_ == nullptr
        && this->maxScalingAmount_ == nullptr && this->nodeAmount_ == nullptr && this->recurrenceSchedules_ == nullptr && this->scalingDownAfterIdleMinutes_ == nullptr && this->scalingStep_ == nullptr
        && this->scalingUsageThreshold_ == nullptr && this->strategyDisableDate_ == nullptr && this->strategyEnableDate_ == nullptr && this->strategyType_ == nullptr && this->warmUp_ == nullptr; };
      // maxIdleAppInstanceAmount Field Functions 
      bool hasMaxIdleAppInstanceAmount() const { return this->maxIdleAppInstanceAmount_ != nullptr;};
      void deleteMaxIdleAppInstanceAmount() { this->maxIdleAppInstanceAmount_ = nullptr;};
      inline int32_t getMaxIdleAppInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(maxIdleAppInstanceAmount_, 0) };
      inline NodePoolStrategy& setMaxIdleAppInstanceAmount(int32_t maxIdleAppInstanceAmount) { DARABONBA_PTR_SET_VALUE(maxIdleAppInstanceAmount_, maxIdleAppInstanceAmount) };


      // maxScalingAmount Field Functions 
      bool hasMaxScalingAmount() const { return this->maxScalingAmount_ != nullptr;};
      void deleteMaxScalingAmount() { this->maxScalingAmount_ = nullptr;};
      inline int32_t getMaxScalingAmount() const { DARABONBA_PTR_GET_DEFAULT(maxScalingAmount_, 0) };
      inline NodePoolStrategy& setMaxScalingAmount(int32_t maxScalingAmount) { DARABONBA_PTR_SET_VALUE(maxScalingAmount_, maxScalingAmount) };


      // nodeAmount Field Functions 
      bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
      void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
      inline int32_t getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
      inline NodePoolStrategy& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


      // recurrenceSchedules Field Functions 
      bool hasRecurrenceSchedules() const { return this->recurrenceSchedules_ != nullptr;};
      void deleteRecurrenceSchedules() { this->recurrenceSchedules_ = nullptr;};
      inline const vector<NodePoolStrategy::RecurrenceSchedules> & getRecurrenceSchedules() const { DARABONBA_PTR_GET_CONST(recurrenceSchedules_, vector<NodePoolStrategy::RecurrenceSchedules>) };
      inline vector<NodePoolStrategy::RecurrenceSchedules> getRecurrenceSchedules() { DARABONBA_PTR_GET(recurrenceSchedules_, vector<NodePoolStrategy::RecurrenceSchedules>) };
      inline NodePoolStrategy& setRecurrenceSchedules(const vector<NodePoolStrategy::RecurrenceSchedules> & recurrenceSchedules) { DARABONBA_PTR_SET_VALUE(recurrenceSchedules_, recurrenceSchedules) };
      inline NodePoolStrategy& setRecurrenceSchedules(vector<NodePoolStrategy::RecurrenceSchedules> && recurrenceSchedules) { DARABONBA_PTR_SET_RVALUE(recurrenceSchedules_, recurrenceSchedules) };


      // scalingDownAfterIdleMinutes Field Functions 
      bool hasScalingDownAfterIdleMinutes() const { return this->scalingDownAfterIdleMinutes_ != nullptr;};
      void deleteScalingDownAfterIdleMinutes() { this->scalingDownAfterIdleMinutes_ = nullptr;};
      inline int32_t getScalingDownAfterIdleMinutes() const { DARABONBA_PTR_GET_DEFAULT(scalingDownAfterIdleMinutes_, 0) };
      inline NodePoolStrategy& setScalingDownAfterIdleMinutes(int32_t scalingDownAfterIdleMinutes) { DARABONBA_PTR_SET_VALUE(scalingDownAfterIdleMinutes_, scalingDownAfterIdleMinutes) };


      // scalingStep Field Functions 
      bool hasScalingStep() const { return this->scalingStep_ != nullptr;};
      void deleteScalingStep() { this->scalingStep_ = nullptr;};
      inline int32_t getScalingStep() const { DARABONBA_PTR_GET_DEFAULT(scalingStep_, 0) };
      inline NodePoolStrategy& setScalingStep(int32_t scalingStep) { DARABONBA_PTR_SET_VALUE(scalingStep_, scalingStep) };


      // scalingUsageThreshold Field Functions 
      bool hasScalingUsageThreshold() const { return this->scalingUsageThreshold_ != nullptr;};
      void deleteScalingUsageThreshold() { this->scalingUsageThreshold_ = nullptr;};
      inline string getScalingUsageThreshold() const { DARABONBA_PTR_GET_DEFAULT(scalingUsageThreshold_, "") };
      inline NodePoolStrategy& setScalingUsageThreshold(string scalingUsageThreshold) { DARABONBA_PTR_SET_VALUE(scalingUsageThreshold_, scalingUsageThreshold) };


      // strategyDisableDate Field Functions 
      bool hasStrategyDisableDate() const { return this->strategyDisableDate_ != nullptr;};
      void deleteStrategyDisableDate() { this->strategyDisableDate_ = nullptr;};
      inline string getStrategyDisableDate() const { DARABONBA_PTR_GET_DEFAULT(strategyDisableDate_, "") };
      inline NodePoolStrategy& setStrategyDisableDate(string strategyDisableDate) { DARABONBA_PTR_SET_VALUE(strategyDisableDate_, strategyDisableDate) };


      // strategyEnableDate Field Functions 
      bool hasStrategyEnableDate() const { return this->strategyEnableDate_ != nullptr;};
      void deleteStrategyEnableDate() { this->strategyEnableDate_ = nullptr;};
      inline string getStrategyEnableDate() const { DARABONBA_PTR_GET_DEFAULT(strategyEnableDate_, "") };
      inline NodePoolStrategy& setStrategyEnableDate(string strategyEnableDate) { DARABONBA_PTR_SET_VALUE(strategyEnableDate_, strategyEnableDate) };


      // strategyType Field Functions 
      bool hasStrategyType() const { return this->strategyType_ != nullptr;};
      void deleteStrategyType() { this->strategyType_ = nullptr;};
      inline string getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
      inline NodePoolStrategy& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


      // warmUp Field Functions 
      bool hasWarmUp() const { return this->warmUp_ != nullptr;};
      void deleteWarmUp() { this->warmUp_ = nullptr;};
      inline bool getWarmUp() const { DARABONBA_PTR_GET_DEFAULT(warmUp_, false) };
      inline NodePoolStrategy& setWarmUp(bool warmUp) { DARABONBA_PTR_SET_VALUE(warmUp_, warmUp) };


    protected:
      // The maximum number of idle sessions. After you specify a value for this parameter, auto scaling is triggered only if the number of idle sessions in the delivery group is smaller than the specified value and the session usage exceeds the value specified for `ScalingUsageThreshold`. Otherwise, the system determines that the idle sessions in the delivery group are sufficient and does not perform auto scaling.`` You can use this parameter to flexibly manage auto scaling and reduce costs.
      shared_ptr<int32_t> maxIdleAppInstanceAmount_ {};
      // The maximum number of resources that can be created for scale-out. This parameter is required only if you set `StrategyType` to `NODE_SCALING_BY_USAGE`.
      shared_ptr<int32_t> maxScalingAmount_ {};
      // The number of resources to purchase. Valid values: 1 to 100.
      // 
      // > 
      // 
      // *   If you use subscription resources, you cannot modify this parameter.
      // *   If you use pay-as-you-go resources, you can modify this parameter only if you set `StrategyType` to `NODE_FIXED` or `NODE_SCALING_BY_USAGE`.
      shared_ptr<int32_t> nodeAmount_ {};
      // The intervals at which the scaling policy is executed. This parameter is required only if you set `StrategyType` to `NODE_SCALING_BY_SCHEDULE`.
      shared_ptr<vector<NodePoolStrategy::RecurrenceSchedules>> recurrenceSchedules_ {};
      // The maximum retention period of a resource to which no session is connected. If no session is connected to a resource, the resource is automatically scaled in after the specified retention period elapses. Valid values: 5 to 120. Default value: 5. Unit: minutes. If one of the following situations occurs, the resource is not scaled in.
      // 
      // *   If a scale-out is automatically triggered after the resource is scaled in, the scale-in is not executed. This prevents repeated scale-in and scale-out.
      // *   If a scale-out is automatically triggered due to an increase in the number of sessions during the specified period of time, the resource is not scaled in and the countdown restarts.
      shared_ptr<int32_t> scalingDownAfterIdleMinutes_ {};
      // The number of resources that are created each time resources are scaled out. Valid values: 1 to 10. This parameter is required only if you set `StrategyType` to `NODE_SCALING_BY_USAGE`.
      shared_ptr<int32_t> scalingStep_ {};
      // The upper limit of session usage. If the session usage exceeds the specified upper limit, auto scaling is automatically triggered. The session usage is calculated by using the following formula: `Session usage = Number of current sessions/(Total number of resources × Number of concurrent sessions) × 100%`. This parameter is required only if you set `StrategyType` to `NODE_SCALING_BY_USAGE`. Valid values: 0 to 100. Default value: 85.
      shared_ptr<string> scalingUsageThreshold_ {};
      // The expiration date of the scaling policy. Format: yyyy-MM-dd. The interval between the expiration date and the effective date must be from 7 days to 1 year. This parameter is required only if you set `StrategyType` to `NODE_SCALING_BY_SCHEDULE`.
      shared_ptr<string> strategyDisableDate_ {};
      // The effective date of the scaling policy. Format: yyyy-MM-dd. The date must be the same as or later than the current date. This parameter is required only if you set `StrategyType` to `NODE_SCALING_BY_SCHEDULE`.
      shared_ptr<string> strategyEnableDate_ {};
      // The scaling mode.
      // 
      // > 
      // 
      // *   `NODE_FIXED`: no scaling. This value is applicable to pay-as-you-go resources and subscription resources.
      // *   `NODE_SCALING_BY_USAGE`: auto scaling. This value is applicable to pay-as-you-go resources and subscription resources.
      // *   `NODE_SCALING_BY_SCHEDULE`: scheduled scaling. This value is applicable only to pay-as-you-go resources.
      // 
      // Valid values:
      // 
      // *   NODE_FIXED: no scaling
      // *   NODE_SCALING_BY_SCHEDULE: scheduled scaling
      // *   NODE_SCALING_BY_USAGE: auto scaling
      shared_ptr<string> strategyType_ {};
      // Specifies whether to enable the warmup policy for resources. This parameter is required only if you set `StrategyType` to `NODE_SCALING_BY_SCHEDULE`.
      shared_ptr<bool> warmUp_ {};
    };

    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->nodeCapacity_ == nullptr && this->nodePoolStrategy_ == nullptr && this->poolId_ == nullptr && this->productType_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ModifyNodePoolAttributeRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // nodeCapacity Field Functions 
    bool hasNodeCapacity() const { return this->nodeCapacity_ != nullptr;};
    void deleteNodeCapacity() { this->nodeCapacity_ = nullptr;};
    inline int32_t getNodeCapacity() const { DARABONBA_PTR_GET_DEFAULT(nodeCapacity_, 0) };
    inline ModifyNodePoolAttributeRequest& setNodeCapacity(int32_t nodeCapacity) { DARABONBA_PTR_SET_VALUE(nodeCapacity_, nodeCapacity) };


    // nodePoolStrategy Field Functions 
    bool hasNodePoolStrategy() const { return this->nodePoolStrategy_ != nullptr;};
    void deleteNodePoolStrategy() { this->nodePoolStrategy_ = nullptr;};
    inline const ModifyNodePoolAttributeRequest::NodePoolStrategy & getNodePoolStrategy() const { DARABONBA_PTR_GET_CONST(nodePoolStrategy_, ModifyNodePoolAttributeRequest::NodePoolStrategy) };
    inline ModifyNodePoolAttributeRequest::NodePoolStrategy getNodePoolStrategy() { DARABONBA_PTR_GET(nodePoolStrategy_, ModifyNodePoolAttributeRequest::NodePoolStrategy) };
    inline ModifyNodePoolAttributeRequest& setNodePoolStrategy(const ModifyNodePoolAttributeRequest::NodePoolStrategy & nodePoolStrategy) { DARABONBA_PTR_SET_VALUE(nodePoolStrategy_, nodePoolStrategy) };
    inline ModifyNodePoolAttributeRequest& setNodePoolStrategy(ModifyNodePoolAttributeRequest::NodePoolStrategy && nodePoolStrategy) { DARABONBA_PTR_SET_RVALUE(nodePoolStrategy_, nodePoolStrategy) };


    // poolId Field Functions 
    bool hasPoolId() const { return this->poolId_ != nullptr;};
    void deletePoolId() { this->poolId_ = nullptr;};
    inline string getPoolId() const { DARABONBA_PTR_GET_DEFAULT(poolId_, "") };
    inline ModifyNodePoolAttributeRequest& setPoolId(string poolId) { DARABONBA_PTR_SET_VALUE(poolId_, poolId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyNodePoolAttributeRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The ID of the region where the delivery group resides. For information about the supported regions, see [Limits](https://help.aliyun.com/document_detail/426036.html).
    // 
    // Valid values:
    // 
    // *   cn-shanghai: China (Shanghai)
    // *   cn-hangzhou: China (Hangzhou)
    shared_ptr<string> bizRegionId_ {};
    shared_ptr<int32_t> nodeCapacity_ {};
    // The auto scaling policy used by the delivery group.
    shared_ptr<ModifyNodePoolAttributeRequest::NodePoolStrategy> nodePoolStrategy_ {};
    shared_ptr<string> poolId_ {};
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
