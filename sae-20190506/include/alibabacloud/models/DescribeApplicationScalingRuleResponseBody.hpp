// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeApplicationScalingRuleResponseBody() = default ;
    DescribeApplicationScalingRuleResponseBody(const DescribeApplicationScalingRuleResponseBody &) = default ;
    DescribeApplicationScalingRuleResponseBody(DescribeApplicationScalingRuleResponseBody &&) = default ;
    DescribeApplicationScalingRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRuleResponseBody() = default ;
    DescribeApplicationScalingRuleResponseBody& operator=(const DescribeApplicationScalingRuleResponseBody &) = default ;
    DescribeApplicationScalingRuleResponseBody& operator=(DescribeApplicationScalingRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LastDisableTime, lastDisableTime_);
        DARABONBA_PTR_TO_JSON(Metric, metric_);
        DARABONBA_PTR_TO_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
        DARABONBA_PTR_TO_JSON(MinReadyInstances, minReadyInstances_);
        DARABONBA_PTR_TO_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
        DARABONBA_PTR_TO_JSON(ScaleRuleName, scaleRuleName_);
        DARABONBA_PTR_TO_JSON(ScaleRuleType, scaleRuleType_);
        DARABONBA_PTR_TO_JSON(Timer, timer_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LastDisableTime, lastDisableTime_);
        DARABONBA_PTR_FROM_JSON(Metric, metric_);
        DARABONBA_PTR_FROM_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
        DARABONBA_PTR_FROM_JSON(MinReadyInstances, minReadyInstances_);
        DARABONBA_PTR_FROM_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
        DARABONBA_PTR_FROM_JSON(ScaleRuleName, scaleRuleName_);
        DARABONBA_PTR_FROM_JSON(ScaleRuleType, scaleRuleType_);
        DARABONBA_PTR_FROM_JSON(Timer, timer_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Timer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Timer& obj) { 
          DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
          DARABONBA_PTR_TO_JSON(EndDate, endDate_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(Schedules, schedules_);
        };
        friend void from_json(const Darabonba::Json& j, Timer& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
          DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(Schedules, schedules_);
        };
        Timer() = default ;
        Timer(const Timer &) = default ;
        Timer(Timer &&) = default ;
        Timer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Timer() = default ;
        Timer& operator=(const Timer &) = default ;
        Timer& operator=(Timer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Schedules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Schedules& obj) { 
            DARABONBA_PTR_TO_JSON(AtTime, atTime_);
            DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
            DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
            DARABONBA_PTR_TO_JSON(TargetReplicas, targetReplicas_);
          };
          friend void from_json(const Darabonba::Json& j, Schedules& obj) { 
            DARABONBA_PTR_FROM_JSON(AtTime, atTime_);
            DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
            DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
            DARABONBA_PTR_FROM_JSON(TargetReplicas, targetReplicas_);
          };
          Schedules() = default ;
          Schedules(const Schedules &) = default ;
          Schedules(Schedules &&) = default ;
          Schedules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Schedules() = default ;
          Schedules& operator=(const Schedules &) = default ;
          Schedules& operator=(Schedules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->atTime_ == nullptr
        && this->maxReplicas_ == nullptr && this->minReplicas_ == nullptr && this->targetReplicas_ == nullptr; };
          // atTime Field Functions 
          bool hasAtTime() const { return this->atTime_ != nullptr;};
          void deleteAtTime() { this->atTime_ = nullptr;};
          inline string getAtTime() const { DARABONBA_PTR_GET_DEFAULT(atTime_, "") };
          inline Schedules& setAtTime(string atTime) { DARABONBA_PTR_SET_VALUE(atTime_, atTime) };


          // maxReplicas Field Functions 
          bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
          void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
          inline int32_t getMaxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
          inline Schedules& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


          // minReplicas Field Functions 
          bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
          void deleteMinReplicas() { this->minReplicas_ = nullptr;};
          inline int32_t getMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
          inline Schedules& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


          // targetReplicas Field Functions 
          bool hasTargetReplicas() const { return this->targetReplicas_ != nullptr;};
          void deleteTargetReplicas() { this->targetReplicas_ = nullptr;};
          inline int32_t getTargetReplicas() const { DARABONBA_PTR_GET_DEFAULT(targetReplicas_, 0) };
          inline Schedules& setTargetReplicas(int32_t targetReplicas) { DARABONBA_PTR_SET_VALUE(targetReplicas_, targetReplicas) };


        protected:
          // The point in time. Format: **Hour:Minute**.
          shared_ptr<string> atTime_ {};
          shared_ptr<int32_t> maxReplicas_ {};
          shared_ptr<int32_t> minReplicas_ {};
          // The expected number of instances.
          shared_ptr<int32_t> targetReplicas_ {};
        };

        virtual bool empty() const override { return this->beginDate_ == nullptr
        && this->endDate_ == nullptr && this->period_ == nullptr && this->schedules_ == nullptr; };
        // beginDate Field Functions 
        bool hasBeginDate() const { return this->beginDate_ != nullptr;};
        void deleteBeginDate() { this->beginDate_ = nullptr;};
        inline string getBeginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
        inline Timer& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
        inline Timer& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
        inline Timer& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // schedules Field Functions 
        bool hasSchedules() const { return this->schedules_ != nullptr;};
        void deleteSchedules() { this->schedules_ = nullptr;};
        inline const vector<Timer::Schedules> & getSchedules() const { DARABONBA_PTR_GET_CONST(schedules_, vector<Timer::Schedules>) };
        inline vector<Timer::Schedules> getSchedules() { DARABONBA_PTR_GET(schedules_, vector<Timer::Schedules>) };
        inline Timer& setSchedules(const vector<Timer::Schedules> & schedules) { DARABONBA_PTR_SET_VALUE(schedules_, schedules) };
        inline Timer& setSchedules(vector<Timer::Schedules> && schedules) { DARABONBA_PTR_SET_RVALUE(schedules_, schedules) };


      protected:
        // The start date of the validity period of the scheduled auto scaling policy. Valid values:
        // 
        // *   If both the **BeginDate** and **EndDate** parameters are set to **null**, the auto scaling policy can always be triggered. The default value for these parameters is null.
        // *   If the two parameters are set to specific dates, the scheduled auto scaling policy can be triggered during the period between the two dates. For example, if **BeginDate** is **2021-03-25** and **EndDate** is **2021-04-25**, the auto scaling policy is valid for one month.
        shared_ptr<string> beginDate_ {};
        // The end date of the validity period of the scheduled auto scaling policy. Valid values:
        // 
        // *   If both the **BeginDate** and **EndDate** parameters are set to **null**, the auto scaling policy can always be triggered. The default value for these parameters is null.
        // *   If the two parameters are set to specific dates, the scheduled auto scaling policy can be triggered during the period between the two dates. For example, if **BeginDate** is **2021-03-25** and **EndDate** is **2021-04-25**, the auto scaling policy is valid for one month.
        shared_ptr<string> endDate_ {};
        // The days on which the scheduled auto scaling policy takes effect. Valid values:
        // 
        // *   **\\* \\* \\***: The scheduled auto scaling policy takes effect at a specified time every day.
        // 
        // *   **\\* \\* Fri,Mon**: The scheduled auto scaling policy takes effect at a specified time on one or multiple days of a week. The specified time is in the GMT+8 time zone. Valid values:
        // 
        //     *   **Sun**: Sunday
        //     *   **Mon**: Monday
        //     *   **Tue**: Tuesday
        //     *   **Wed**: Wednesday
        //     *   **Thu**: Thursday
        //     *   **Fri**: Friday
        //     *   **Sat**: Saturday
        // 
        // *   **1,2,3,28,31 \\* \\***: The scheduled auto scaling policy takes effect at a specified time on one or multiple days of a month. Valid values: 1 to 31. If the month does not have a 31st day, the auto scaling policy takes effect on the specified days other than the 31st day.
        shared_ptr<string> period_ {};
        // The points in time when the auto scaling policy is triggered within one day.
        shared_ptr<vector<Timer::Schedules>> schedules_ {};
      };

      class Metric : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metric& obj) { 
          DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
          DARABONBA_PTR_TO_JSON(Metrics, metrics_);
          DARABONBA_PTR_TO_JSON(MetricsStatus, metricsStatus_);
          DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
          DARABONBA_PTR_TO_JSON(ScaleDownRules, scaleDownRules_);
          DARABONBA_PTR_TO_JSON(ScaleUpRules, scaleUpRules_);
        };
        friend void from_json(const Darabonba::Json& j, Metric& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
          DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
          DARABONBA_PTR_FROM_JSON(MetricsStatus, metricsStatus_);
          DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
          DARABONBA_PTR_FROM_JSON(ScaleDownRules, scaleDownRules_);
          DARABONBA_PTR_FROM_JSON(ScaleUpRules, scaleUpRules_);
        };
        Metric() = default ;
        Metric(const Metric &) = default ;
        Metric(Metric &&) = default ;
        Metric(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metric() = default ;
        Metric& operator=(const Metric &) = default ;
        Metric& operator=(Metric &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScaleUpRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScaleUpRules& obj) { 
            DARABONBA_PTR_TO_JSON(Disabled, disabled_);
            DARABONBA_PTR_TO_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
            DARABONBA_PTR_TO_JSON(Step, step_);
          };
          friend void from_json(const Darabonba::Json& j, ScaleUpRules& obj) { 
            DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
            DARABONBA_PTR_FROM_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
            DARABONBA_PTR_FROM_JSON(Step, step_);
          };
          ScaleUpRules() = default ;
          ScaleUpRules(const ScaleUpRules &) = default ;
          ScaleUpRules(ScaleUpRules &&) = default ;
          ScaleUpRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScaleUpRules() = default ;
          ScaleUpRules& operator=(const ScaleUpRules &) = default ;
          ScaleUpRules& operator=(ScaleUpRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->disabled_ == nullptr
        && this->stabilizationWindowSeconds_ == nullptr && this->step_ == nullptr; };
          // disabled Field Functions 
          bool hasDisabled() const { return this->disabled_ != nullptr;};
          void deleteDisabled() { this->disabled_ = nullptr;};
          inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
          inline ScaleUpRules& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


          // stabilizationWindowSeconds Field Functions 
          bool hasStabilizationWindowSeconds() const { return this->stabilizationWindowSeconds_ != nullptr;};
          void deleteStabilizationWindowSeconds() { this->stabilizationWindowSeconds_ = nullptr;};
          inline int64_t getStabilizationWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(stabilizationWindowSeconds_, 0L) };
          inline ScaleUpRules& setStabilizationWindowSeconds(int64_t stabilizationWindowSeconds) { DARABONBA_PTR_SET_VALUE(stabilizationWindowSeconds_, stabilizationWindowSeconds) };


          // step Field Functions 
          bool hasStep() const { return this->step_ != nullptr;};
          void deleteStep() { this->step_ = nullptr;};
          inline int64_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0L) };
          inline ScaleUpRules& setStep(int64_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


        protected:
          // Indicates whether the application scale-in is disabled. Valid values:
          // 
          // *   **true**: The application scale-in is disabled.
          // *   **false**: The application scale-in is enabled.
          // 
          // >  When this parameter is set to true, the application instances are never reduced. This prevents risks to your business in peak hours. By default, this parameter is set to false.
          shared_ptr<bool> disabled_ {};
          // The cooldown time of the scale-out. Valid values: 0 to 3600. Unit: seconds. Default value: 0.
          shared_ptr<int64_t> stabilizationWindowSeconds_ {};
          // The step size for the scale-out. The maximum number of instances that can be added within a specific period of time.
          shared_ptr<int64_t> step_ {};
        };

        class ScaleDownRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScaleDownRules& obj) { 
            DARABONBA_PTR_TO_JSON(Disabled, disabled_);
            DARABONBA_PTR_TO_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
            DARABONBA_PTR_TO_JSON(Step, step_);
          };
          friend void from_json(const Darabonba::Json& j, ScaleDownRules& obj) { 
            DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
            DARABONBA_PTR_FROM_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
            DARABONBA_PTR_FROM_JSON(Step, step_);
          };
          ScaleDownRules() = default ;
          ScaleDownRules(const ScaleDownRules &) = default ;
          ScaleDownRules(ScaleDownRules &&) = default ;
          ScaleDownRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScaleDownRules() = default ;
          ScaleDownRules& operator=(const ScaleDownRules &) = default ;
          ScaleDownRules& operator=(ScaleDownRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->disabled_ == nullptr
        && this->stabilizationWindowSeconds_ == nullptr && this->step_ == nullptr; };
          // disabled Field Functions 
          bool hasDisabled() const { return this->disabled_ != nullptr;};
          void deleteDisabled() { this->disabled_ = nullptr;};
          inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
          inline ScaleDownRules& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


          // stabilizationWindowSeconds Field Functions 
          bool hasStabilizationWindowSeconds() const { return this->stabilizationWindowSeconds_ != nullptr;};
          void deleteStabilizationWindowSeconds() { this->stabilizationWindowSeconds_ = nullptr;};
          inline int64_t getStabilizationWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(stabilizationWindowSeconds_, 0L) };
          inline ScaleDownRules& setStabilizationWindowSeconds(int64_t stabilizationWindowSeconds) { DARABONBA_PTR_SET_VALUE(stabilizationWindowSeconds_, stabilizationWindowSeconds) };


          // step Field Functions 
          bool hasStep() const { return this->step_ != nullptr;};
          void deleteStep() { this->step_ = nullptr;};
          inline int64_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0L) };
          inline ScaleDownRules& setStep(int64_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


        protected:
          // Indicates whether the application scale-in is disabled. Valid values:
          // 
          // *   **true**: disabled.
          // *   **false**: enabled.
          // 
          // >  When this parameter is set to true, the application instances are never reduced. This prevents risks to your business in peak hours. By default, this parameter is set to false.
          shared_ptr<bool> disabled_ {};
          // The cooldown time of the scale-in. Valid values: 0 to 3600. Unit: seconds. Default value: 0.
          shared_ptr<int64_t> stabilizationWindowSeconds_ {};
          // The step size for the scale-in. The maximum number of instances that can be reduced within a specific period of time.
          shared_ptr<int64_t> step_ {};
        };

        class MetricsStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MetricsStatus& obj) { 
            DARABONBA_PTR_TO_JSON(CurrentMetrics, currentMetrics_);
            DARABONBA_PTR_TO_JSON(CurrentReplicas, currentReplicas_);
            DARABONBA_PTR_TO_JSON(DesiredReplicas, desiredReplicas_);
            DARABONBA_PTR_TO_JSON(LastScaleTime, lastScaleTime_);
            DARABONBA_PTR_TO_JSON(NextScaleMetrics, nextScaleMetrics_);
            DARABONBA_PTR_TO_JSON(NextScaleTimePeriod, nextScaleTimePeriod_);
          };
          friend void from_json(const Darabonba::Json& j, MetricsStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(CurrentMetrics, currentMetrics_);
            DARABONBA_PTR_FROM_JSON(CurrentReplicas, currentReplicas_);
            DARABONBA_PTR_FROM_JSON(DesiredReplicas, desiredReplicas_);
            DARABONBA_PTR_FROM_JSON(LastScaleTime, lastScaleTime_);
            DARABONBA_PTR_FROM_JSON(NextScaleMetrics, nextScaleMetrics_);
            DARABONBA_PTR_FROM_JSON(NextScaleTimePeriod, nextScaleTimePeriod_);
          };
          MetricsStatus() = default ;
          MetricsStatus(const MetricsStatus &) = default ;
          MetricsStatus(MetricsStatus &&) = default ;
          MetricsStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MetricsStatus() = default ;
          MetricsStatus& operator=(const MetricsStatus &) = default ;
          MetricsStatus& operator=(MetricsStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class NextScaleMetrics : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NextScaleMetrics& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(NextScaleInAverageUtilization, nextScaleInAverageUtilization_);
              DARABONBA_PTR_TO_JSON(NextScaleOutAverageUtilization, nextScaleOutAverageUtilization_);
            };
            friend void from_json(const Darabonba::Json& j, NextScaleMetrics& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(NextScaleInAverageUtilization, nextScaleInAverageUtilization_);
              DARABONBA_PTR_FROM_JSON(NextScaleOutAverageUtilization, nextScaleOutAverageUtilization_);
            };
            NextScaleMetrics() = default ;
            NextScaleMetrics(const NextScaleMetrics &) = default ;
            NextScaleMetrics(NextScaleMetrics &&) = default ;
            NextScaleMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NextScaleMetrics() = default ;
            NextScaleMetrics& operator=(const NextScaleMetrics &) = default ;
            NextScaleMetrics& operator=(NextScaleMetrics &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->nextScaleInAverageUtilization_ == nullptr && this->nextScaleOutAverageUtilization_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline NextScaleMetrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // nextScaleInAverageUtilization Field Functions 
            bool hasNextScaleInAverageUtilization() const { return this->nextScaleInAverageUtilization_ != nullptr;};
            void deleteNextScaleInAverageUtilization() { this->nextScaleInAverageUtilization_ = nullptr;};
            inline int32_t getNextScaleInAverageUtilization() const { DARABONBA_PTR_GET_DEFAULT(nextScaleInAverageUtilization_, 0) };
            inline NextScaleMetrics& setNextScaleInAverageUtilization(int32_t nextScaleInAverageUtilization) { DARABONBA_PTR_SET_VALUE(nextScaleInAverageUtilization_, nextScaleInAverageUtilization) };


            // nextScaleOutAverageUtilization Field Functions 
            bool hasNextScaleOutAverageUtilization() const { return this->nextScaleOutAverageUtilization_ != nullptr;};
            void deleteNextScaleOutAverageUtilization() { this->nextScaleOutAverageUtilization_ = nullptr;};
            inline int32_t getNextScaleOutAverageUtilization() const { DARABONBA_PTR_GET_DEFAULT(nextScaleOutAverageUtilization_, 0) };
            inline NextScaleMetrics& setNextScaleOutAverageUtilization(int32_t nextScaleOutAverageUtilization) { DARABONBA_PTR_SET_VALUE(nextScaleOutAverageUtilization_, nextScaleOutAverageUtilization) };


          protected:
            // The name of the metric.
            // 
            // *   **cpu**: the CPU utilization.
            // *   **memory**: the memory usage.
            // *   **tcpActiveConn**: the number of active TCP connections.
            // *   **slb_incall_qps**: the QPS of the Internet-facing SLB instance.
            // *   **slb_incall_rt**: the response time of the Internet-facing SLB instance.
            shared_ptr<string> name_ {};
            // The metric value as a percentage that triggers the application scale-in next time.
            shared_ptr<int32_t> nextScaleInAverageUtilization_ {};
            // The metric value as a percentage that triggers the application scale-out next time.
            shared_ptr<int32_t> nextScaleOutAverageUtilization_ {};
          };

          class CurrentMetrics : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CurrentMetrics& obj) { 
              DARABONBA_PTR_TO_JSON(CurrentValue, currentValue_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, CurrentMetrics& obj) { 
              DARABONBA_PTR_FROM_JSON(CurrentValue, currentValue_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            CurrentMetrics() = default ;
            CurrentMetrics(const CurrentMetrics &) = default ;
            CurrentMetrics(CurrentMetrics &&) = default ;
            CurrentMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CurrentMetrics() = default ;
            CurrentMetrics& operator=(const CurrentMetrics &) = default ;
            CurrentMetrics& operator=(CurrentMetrics &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->currentValue_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
            // currentValue Field Functions 
            bool hasCurrentValue() const { return this->currentValue_ != nullptr;};
            void deleteCurrentValue() { this->currentValue_ = nullptr;};
            inline int64_t getCurrentValue() const { DARABONBA_PTR_GET_DEFAULT(currentValue_, 0L) };
            inline CurrentMetrics& setCurrentValue(int64_t currentValue) { DARABONBA_PTR_SET_VALUE(currentValue_, currentValue) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline CurrentMetrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline CurrentMetrics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // The current value of the metric.
            shared_ptr<int64_t> currentValue_ {};
            // The name of the metric.
            // 
            // *   **cpu**: the CPU utilization.
            // *   **memory**: the memory usage.
            // *   **tcpActiveConn**: the number of active TCP connections.
            // *   **slb_incall_qps**: the QPS of the Internet-facing SLB instance.
            // *   **slb_incall_rt**: the response time of the Internet-facing SLB instance.
            shared_ptr<string> name_ {};
            // The type of the data. This parameter corresponds to the metric.
            // 
            // *   **Resource**: used when the metric is the **CPU utilization** or **memory usage**.
            // *   **Pods**: used when the metric is the **number of active TCP connections**.
            // *   **External**: used when the metric is about the **SLB** instance or from **Application Real-Time Monitoring Service (ARMS)**.
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->currentMetrics_ == nullptr
        && this->currentReplicas_ == nullptr && this->desiredReplicas_ == nullptr && this->lastScaleTime_ == nullptr && this->nextScaleMetrics_ == nullptr && this->nextScaleTimePeriod_ == nullptr; };
          // currentMetrics Field Functions 
          bool hasCurrentMetrics() const { return this->currentMetrics_ != nullptr;};
          void deleteCurrentMetrics() { this->currentMetrics_ = nullptr;};
          inline const vector<MetricsStatus::CurrentMetrics> & getCurrentMetrics() const { DARABONBA_PTR_GET_CONST(currentMetrics_, vector<MetricsStatus::CurrentMetrics>) };
          inline vector<MetricsStatus::CurrentMetrics> getCurrentMetrics() { DARABONBA_PTR_GET(currentMetrics_, vector<MetricsStatus::CurrentMetrics>) };
          inline MetricsStatus& setCurrentMetrics(const vector<MetricsStatus::CurrentMetrics> & currentMetrics) { DARABONBA_PTR_SET_VALUE(currentMetrics_, currentMetrics) };
          inline MetricsStatus& setCurrentMetrics(vector<MetricsStatus::CurrentMetrics> && currentMetrics) { DARABONBA_PTR_SET_RVALUE(currentMetrics_, currentMetrics) };


          // currentReplicas Field Functions 
          bool hasCurrentReplicas() const { return this->currentReplicas_ != nullptr;};
          void deleteCurrentReplicas() { this->currentReplicas_ = nullptr;};
          inline int64_t getCurrentReplicas() const { DARABONBA_PTR_GET_DEFAULT(currentReplicas_, 0L) };
          inline MetricsStatus& setCurrentReplicas(int64_t currentReplicas) { DARABONBA_PTR_SET_VALUE(currentReplicas_, currentReplicas) };


          // desiredReplicas Field Functions 
          bool hasDesiredReplicas() const { return this->desiredReplicas_ != nullptr;};
          void deleteDesiredReplicas() { this->desiredReplicas_ = nullptr;};
          inline int64_t getDesiredReplicas() const { DARABONBA_PTR_GET_DEFAULT(desiredReplicas_, 0L) };
          inline MetricsStatus& setDesiredReplicas(int64_t desiredReplicas) { DARABONBA_PTR_SET_VALUE(desiredReplicas_, desiredReplicas) };


          // lastScaleTime Field Functions 
          bool hasLastScaleTime() const { return this->lastScaleTime_ != nullptr;};
          void deleteLastScaleTime() { this->lastScaleTime_ = nullptr;};
          inline string getLastScaleTime() const { DARABONBA_PTR_GET_DEFAULT(lastScaleTime_, "") };
          inline MetricsStatus& setLastScaleTime(string lastScaleTime) { DARABONBA_PTR_SET_VALUE(lastScaleTime_, lastScaleTime) };


          // nextScaleMetrics Field Functions 
          bool hasNextScaleMetrics() const { return this->nextScaleMetrics_ != nullptr;};
          void deleteNextScaleMetrics() { this->nextScaleMetrics_ = nullptr;};
          inline const vector<MetricsStatus::NextScaleMetrics> & getNextScaleMetrics() const { DARABONBA_PTR_GET_CONST(nextScaleMetrics_, vector<MetricsStatus::NextScaleMetrics>) };
          inline vector<MetricsStatus::NextScaleMetrics> getNextScaleMetrics() { DARABONBA_PTR_GET(nextScaleMetrics_, vector<MetricsStatus::NextScaleMetrics>) };
          inline MetricsStatus& setNextScaleMetrics(const vector<MetricsStatus::NextScaleMetrics> & nextScaleMetrics) { DARABONBA_PTR_SET_VALUE(nextScaleMetrics_, nextScaleMetrics) };
          inline MetricsStatus& setNextScaleMetrics(vector<MetricsStatus::NextScaleMetrics> && nextScaleMetrics) { DARABONBA_PTR_SET_RVALUE(nextScaleMetrics_, nextScaleMetrics) };


          // nextScaleTimePeriod Field Functions 
          bool hasNextScaleTimePeriod() const { return this->nextScaleTimePeriod_ != nullptr;};
          void deleteNextScaleTimePeriod() { this->nextScaleTimePeriod_ = nullptr;};
          inline int32_t getNextScaleTimePeriod() const { DARABONBA_PTR_GET_DEFAULT(nextScaleTimePeriod_, 0) };
          inline MetricsStatus& setNextScaleTimePeriod(int32_t nextScaleTimePeriod) { DARABONBA_PTR_SET_VALUE(nextScaleTimePeriod_, nextScaleTimePeriod) };


        protected:
          // The metrics that is used to trigger the current auto scaling policy.
          shared_ptr<vector<MetricsStatus::CurrentMetrics>> currentMetrics_ {};
          // The current number of instances.
          shared_ptr<int64_t> currentReplicas_ {};
          // The expected number of instances.
          shared_ptr<int64_t> desiredReplicas_ {};
          // The time when the auto scaling policy was last triggered.
          shared_ptr<string> lastScaleTime_ {};
          // The metrics that are used to trigger the auto scaling policy next time.
          shared_ptr<vector<MetricsStatus::NextScaleMetrics>> nextScaleMetrics_ {};
          // The duration for which the metric-based auto scaling policy takes effect next time.
          shared_ptr<int32_t> nextScaleTimePeriod_ {};
        };

        class Metrics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
            DARABONBA_PTR_TO_JSON(MetricTargetAverageUtilization, metricTargetAverageUtilization_);
            DARABONBA_PTR_TO_JSON(MetricType, metricType_);
            DARABONBA_PTR_TO_JSON(SlbId, slbId_);
            DARABONBA_PTR_TO_JSON(SlbLogstore, slbLogstore_);
            DARABONBA_PTR_TO_JSON(SlbProject, slbProject_);
            DARABONBA_PTR_TO_JSON(Vport, vport_);
          };
          friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
            DARABONBA_PTR_FROM_JSON(MetricTargetAverageUtilization, metricTargetAverageUtilization_);
            DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
            DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
            DARABONBA_PTR_FROM_JSON(SlbLogstore, slbLogstore_);
            DARABONBA_PTR_FROM_JSON(SlbProject, slbProject_);
            DARABONBA_PTR_FROM_JSON(Vport, vport_);
          };
          Metrics() = default ;
          Metrics(const Metrics &) = default ;
          Metrics(Metrics &&) = default ;
          Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Metrics() = default ;
          Metrics& operator=(const Metrics &) = default ;
          Metrics& operator=(Metrics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->metricTargetAverageUtilization_ == nullptr
        && this->metricType_ == nullptr && this->slbId_ == nullptr && this->slbLogstore_ == nullptr && this->slbProject_ == nullptr && this->vport_ == nullptr; };
          // metricTargetAverageUtilization Field Functions 
          bool hasMetricTargetAverageUtilization() const { return this->metricTargetAverageUtilization_ != nullptr;};
          void deleteMetricTargetAverageUtilization() { this->metricTargetAverageUtilization_ = nullptr;};
          inline int32_t getMetricTargetAverageUtilization() const { DARABONBA_PTR_GET_DEFAULT(metricTargetAverageUtilization_, 0) };
          inline Metrics& setMetricTargetAverageUtilization(int32_t metricTargetAverageUtilization) { DARABONBA_PTR_SET_VALUE(metricTargetAverageUtilization_, metricTargetAverageUtilization) };


          // metricType Field Functions 
          bool hasMetricType() const { return this->metricType_ != nullptr;};
          void deleteMetricType() { this->metricType_ = nullptr;};
          inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
          inline Metrics& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


          // slbId Field Functions 
          bool hasSlbId() const { return this->slbId_ != nullptr;};
          void deleteSlbId() { this->slbId_ = nullptr;};
          inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
          inline Metrics& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


          // slbLogstore Field Functions 
          bool hasSlbLogstore() const { return this->slbLogstore_ != nullptr;};
          void deleteSlbLogstore() { this->slbLogstore_ = nullptr;};
          inline string getSlbLogstore() const { DARABONBA_PTR_GET_DEFAULT(slbLogstore_, "") };
          inline Metrics& setSlbLogstore(string slbLogstore) { DARABONBA_PTR_SET_VALUE(slbLogstore_, slbLogstore) };


          // slbProject Field Functions 
          bool hasSlbProject() const { return this->slbProject_ != nullptr;};
          void deleteSlbProject() { this->slbProject_ = nullptr;};
          inline string getSlbProject() const { DARABONBA_PTR_GET_DEFAULT(slbProject_, "") };
          inline Metrics& setSlbProject(string slbProject) { DARABONBA_PTR_SET_VALUE(slbProject_, slbProject) };


          // vport Field Functions 
          bool hasVport() const { return this->vport_ != nullptr;};
          void deleteVport() { this->vport_ = nullptr;};
          inline string getVport() const { DARABONBA_PTR_GET_DEFAULT(vport_, "") };
          inline Metrics& setVport(string vport) { DARABONBA_PTR_SET_VALUE(vport_, vport) };


        protected:
          // The limit on the metric.
          // 
          // *   The limit on the CPU utilization. Unit: percentage.
          // *   The limit on the memory usage. Unit: percentage.
          // *   The limit on the average number of active TCP connections per second.
          // *   The limit on the QPS of the Internet-facing SLB instance.
          // *   The limit on the response time of the Internet-facing SLB instance. Unit: milliseconds.
          shared_ptr<int32_t> metricTargetAverageUtilization_ {};
          // The metric that is used to trigger the auto scaling policy. Valid values:
          // 
          // *   **CPU**: the CPU utilization.
          // *   **MEMORY**: the memory usage.
          // *   **tcpActiveConn**: the average number of active TCP connections for an instance in 30 seconds.
          // *   **SLB_QPS**: the average QPS of the Internet-facing SLB instance associated with an application instance in 15 seconds.
          // *   **SLB_RT**: the average response time of the Internet-facing SLB instance in 15 seconds.
          shared_ptr<string> metricType_ {};
          shared_ptr<string> slbId_ {};
          shared_ptr<string> slbLogstore_ {};
          shared_ptr<string> slbProject_ {};
          shared_ptr<string> vport_ {};
        };

        virtual bool empty() const override { return this->maxReplicas_ == nullptr
        && this->metrics_ == nullptr && this->metricsStatus_ == nullptr && this->minReplicas_ == nullptr && this->scaleDownRules_ == nullptr && this->scaleUpRules_ == nullptr; };
        // maxReplicas Field Functions 
        bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
        void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
        inline int32_t getMaxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
        inline Metric& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


        // metrics Field Functions 
        bool hasMetrics() const { return this->metrics_ != nullptr;};
        void deleteMetrics() { this->metrics_ = nullptr;};
        inline const vector<Metric::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Metric::Metrics>) };
        inline vector<Metric::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<Metric::Metrics>) };
        inline Metric& setMetrics(const vector<Metric::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
        inline Metric& setMetrics(vector<Metric::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


        // metricsStatus Field Functions 
        bool hasMetricsStatus() const { return this->metricsStatus_ != nullptr;};
        void deleteMetricsStatus() { this->metricsStatus_ = nullptr;};
        inline const Metric::MetricsStatus & getMetricsStatus() const { DARABONBA_PTR_GET_CONST(metricsStatus_, Metric::MetricsStatus) };
        inline Metric::MetricsStatus getMetricsStatus() { DARABONBA_PTR_GET(metricsStatus_, Metric::MetricsStatus) };
        inline Metric& setMetricsStatus(const Metric::MetricsStatus & metricsStatus) { DARABONBA_PTR_SET_VALUE(metricsStatus_, metricsStatus) };
        inline Metric& setMetricsStatus(Metric::MetricsStatus && metricsStatus) { DARABONBA_PTR_SET_RVALUE(metricsStatus_, metricsStatus) };


        // minReplicas Field Functions 
        bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
        void deleteMinReplicas() { this->minReplicas_ = nullptr;};
        inline int32_t getMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
        inline Metric& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


        // scaleDownRules Field Functions 
        bool hasScaleDownRules() const { return this->scaleDownRules_ != nullptr;};
        void deleteScaleDownRules() { this->scaleDownRules_ = nullptr;};
        inline const Metric::ScaleDownRules & getScaleDownRules() const { DARABONBA_PTR_GET_CONST(scaleDownRules_, Metric::ScaleDownRules) };
        inline Metric::ScaleDownRules getScaleDownRules() { DARABONBA_PTR_GET(scaleDownRules_, Metric::ScaleDownRules) };
        inline Metric& setScaleDownRules(const Metric::ScaleDownRules & scaleDownRules) { DARABONBA_PTR_SET_VALUE(scaleDownRules_, scaleDownRules) };
        inline Metric& setScaleDownRules(Metric::ScaleDownRules && scaleDownRules) { DARABONBA_PTR_SET_RVALUE(scaleDownRules_, scaleDownRules) };


        // scaleUpRules Field Functions 
        bool hasScaleUpRules() const { return this->scaleUpRules_ != nullptr;};
        void deleteScaleUpRules() { this->scaleUpRules_ = nullptr;};
        inline const Metric::ScaleUpRules & getScaleUpRules() const { DARABONBA_PTR_GET_CONST(scaleUpRules_, Metric::ScaleUpRules) };
        inline Metric::ScaleUpRules getScaleUpRules() { DARABONBA_PTR_GET(scaleUpRules_, Metric::ScaleUpRules) };
        inline Metric& setScaleUpRules(const Metric::ScaleUpRules & scaleUpRules) { DARABONBA_PTR_SET_VALUE(scaleUpRules_, scaleUpRules) };
        inline Metric& setScaleUpRules(Metric::ScaleUpRules && scaleUpRules) { DARABONBA_PTR_SET_RVALUE(scaleUpRules_, scaleUpRules) };


      protected:
        // The maximum number of instances.
        shared_ptr<int32_t> maxReplicas_ {};
        // The list of metrics that are used to trigger the auto scaling policy.
        shared_ptr<vector<Metric::Metrics>> metrics_ {};
        // The execution status of the metric-based auto scaling policy.
        shared_ptr<Metric::MetricsStatus> metricsStatus_ {};
        // The minimum number of instances.
        shared_ptr<int32_t> minReplicas_ {};
        // Rules that determine the application scale-in.
        shared_ptr<Metric::ScaleDownRules> scaleDownRules_ {};
        // Rules that determine the application scale-out.
        shared_ptr<Metric::ScaleUpRules> scaleUpRules_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->createTime_ == nullptr && this->lastDisableTime_ == nullptr && this->metric_ == nullptr && this->minReadyInstanceRatio_ == nullptr && this->minReadyInstances_ == nullptr
        && this->scaleRuleEnabled_ == nullptr && this->scaleRuleName_ == nullptr && this->scaleRuleType_ == nullptr && this->timer_ == nullptr && this->updateTime_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // lastDisableTime Field Functions 
      bool hasLastDisableTime() const { return this->lastDisableTime_ != nullptr;};
      void deleteLastDisableTime() { this->lastDisableTime_ = nullptr;};
      inline int64_t getLastDisableTime() const { DARABONBA_PTR_GET_DEFAULT(lastDisableTime_, 0L) };
      inline Data& setLastDisableTime(int64_t lastDisableTime) { DARABONBA_PTR_SET_VALUE(lastDisableTime_, lastDisableTime) };


      // metric Field Functions 
      bool hasMetric() const { return this->metric_ != nullptr;};
      void deleteMetric() { this->metric_ = nullptr;};
      inline const Data::Metric & getMetric() const { DARABONBA_PTR_GET_CONST(metric_, Data::Metric) };
      inline Data::Metric getMetric() { DARABONBA_PTR_GET(metric_, Data::Metric) };
      inline Data& setMetric(const Data::Metric & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
      inline Data& setMetric(Data::Metric && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


      // minReadyInstanceRatio Field Functions 
      bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
      void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
      inline int32_t getMinReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
      inline Data& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


      // minReadyInstances Field Functions 
      bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
      void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
      inline int32_t getMinReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
      inline Data& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


      // scaleRuleEnabled Field Functions 
      bool hasScaleRuleEnabled() const { return this->scaleRuleEnabled_ != nullptr;};
      void deleteScaleRuleEnabled() { this->scaleRuleEnabled_ = nullptr;};
      inline bool getScaleRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleEnabled_, false) };
      inline Data& setScaleRuleEnabled(bool scaleRuleEnabled) { DARABONBA_PTR_SET_VALUE(scaleRuleEnabled_, scaleRuleEnabled) };


      // scaleRuleName Field Functions 
      bool hasScaleRuleName() const { return this->scaleRuleName_ != nullptr;};
      void deleteScaleRuleName() { this->scaleRuleName_ = nullptr;};
      inline string getScaleRuleName() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleName_, "") };
      inline Data& setScaleRuleName(string scaleRuleName) { DARABONBA_PTR_SET_VALUE(scaleRuleName_, scaleRuleName) };


      // scaleRuleType Field Functions 
      bool hasScaleRuleType() const { return this->scaleRuleType_ != nullptr;};
      void deleteScaleRuleType() { this->scaleRuleType_ = nullptr;};
      inline string getScaleRuleType() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleType_, "") };
      inline Data& setScaleRuleType(string scaleRuleType) { DARABONBA_PTR_SET_VALUE(scaleRuleType_, scaleRuleType) };


      // timer Field Functions 
      bool hasTimer() const { return this->timer_ != nullptr;};
      void deleteTimer() { this->timer_ = nullptr;};
      inline const Data::Timer & getTimer() const { DARABONBA_PTR_GET_CONST(timer_, Data::Timer) };
      inline Data::Timer getTimer() { DARABONBA_PTR_GET(timer_, Data::Timer) };
      inline Data& setTimer(const Data::Timer & timer) { DARABONBA_PTR_SET_VALUE(timer_, timer) };
      inline Data& setTimer(Data::Timer && timer) { DARABONBA_PTR_SET_RVALUE(timer_, timer) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Data& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The time when the auto scaling policy was created. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The time when the auto scaling policy was last disabled.
      shared_ptr<int64_t> lastDisableTime_ {};
      // The details of the metric-based auto scaling policy.
      shared_ptr<Data::Metric> metric_ {};
      // The ratio of the minimum number of available instances to the current number of instances. Valid values:
      // 
      // *   **-1** (default value): The minimum number of available instances is not determined based on this parameter.
      // *   **0 to 100**: The minimum number of available instances is calculated by using the following formula: Number of existing instances × Value of MinReadyInstanceRatio × 100%. The calculation result is rounded up to the nearest integer. For example, if the number of existing instances is 5 and MinReadyInstanceRatio is set to 50, the minimum number of available instances is 3.
      // 
      // >  If the **MinReadyInstanceRatio** and **MinReadyInstanceRatio** parameters are configured and the **MinReadyInstanceRatio** parameter is set to a number from 0 to 100, the value of the MinReadyInstanceRatio parameter takes precedence. For example, if the **MinReadyInstances** parameter is set to **5**, and the **MinReadyInstanceRatio** parameter is set to **50**, the minimum number of available instances is set to the nearest integer rounded up from the calculated result of the following formula: Nmber of existing instances × **50**.
      shared_ptr<int32_t> minReadyInstanceRatio_ {};
      // The minimum number of available instances. Valid values:
      // 
      // *   If you set the value to **0**, business is interrupted when the application is updated.
      // *   If you set this property to -1, the system calculates a recommended value as the minimum number of available instances by using the following formula: Recommended value = Number of existing instances × 25%. The calculation result is rounded up to the nearest integer. For example, if the number of existing instances is 5, the recommended value is calculated by using the following formula: 5 × 25% = 1.25. In this case, the minimum number of available instances is 2.
      // 
      // >  To ensure business continuity, make sure that at least one instance is available during application deployment and rollback.
      shared_ptr<int32_t> minReadyInstances_ {};
      // Indicates whether the auto scaling policy is enabled. Valid values:
      // 
      // *   **true**: enabled
      // *   **false**: disabled
      shared_ptr<bool> scaleRuleEnabled_ {};
      // The name of the auto scaling policy.
      shared_ptr<string> scaleRuleName_ {};
      // The type of the auto scaling policy. Valid values:
      // 
      // *   **timing**: the scheduled auto scaling policy.
      // *   **metric**: the metric-based auto scaling policy.
      // *   **mix**: the hybrid auto scaling policy.
      shared_ptr<string> scaleRuleType_ {};
      // The details of the scheduled auto scaling policy.
      shared_ptr<Data::Timer> timer_ {};
      // The time when the auto scaling policy was updated. Unit: milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeApplicationScalingRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeApplicationScalingRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeApplicationScalingRuleResponseBody::Data) };
    inline DescribeApplicationScalingRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeApplicationScalingRuleResponseBody::Data) };
    inline DescribeApplicationScalingRuleResponseBody& setData(const DescribeApplicationScalingRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApplicationScalingRuleResponseBody& setData(DescribeApplicationScalingRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeApplicationScalingRuleResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApplicationScalingRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationScalingRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeApplicationScalingRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeApplicationScalingRuleResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<DescribeApplicationScalingRuleResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // The ID of the trace. The ID is used to query the details of a request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
