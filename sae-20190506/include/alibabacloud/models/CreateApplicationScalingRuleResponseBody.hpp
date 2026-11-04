// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODY_HPP_
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
  class CreateApplicationScalingRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationScalingRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationScalingRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    CreateApplicationScalingRuleResponseBody() = default ;
    CreateApplicationScalingRuleResponseBody(const CreateApplicationScalingRuleResponseBody &) = default ;
    CreateApplicationScalingRuleResponseBody(CreateApplicationScalingRuleResponseBody &&) = default ;
    CreateApplicationScalingRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationScalingRuleResponseBody() = default ;
    CreateApplicationScalingRuleResponseBody& operator=(const CreateApplicationScalingRuleResponseBody &) = default ;
    CreateApplicationScalingRuleResponseBody& operator=(CreateApplicationScalingRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnableIdle, enableIdle_);
        DARABONBA_PTR_TO_JSON(LastDisableTime, lastDisableTime_);
        DARABONBA_PTR_TO_JSON(Metric, metric_);
        DARABONBA_PTR_TO_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
        DARABONBA_PTR_TO_JSON(ScaleRuleName, scaleRuleName_);
        DARABONBA_PTR_TO_JSON(ScaleRuleType, scaleRuleType_);
        DARABONBA_PTR_TO_JSON(Timer, timer_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnableIdle, enableIdle_);
        DARABONBA_PTR_FROM_JSON(LastDisableTime, lastDisableTime_);
        DARABONBA_PTR_FROM_JSON(Metric, metric_);
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
          // The time point. Format: **HH:mm**.
          shared_ptr<string> atTime_ {};
          // The maximum number of instances.
          shared_ptr<int32_t> maxReplicas_ {};
          // The minimum number of instances.
          shared_ptr<int32_t> minReplicas_ {};
          // The target number of instances.
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
        // The short-term start date of the scheduled elastic scaling policy.
        // 
        // - If both **BeginDate** and **EndDate** are **null**, the policy is executed on a long-term basis. This is the default value.
        // - If specific dates are specified, for example, **BeginDate** is 2021-03-25 and **EndDate** is 2021-04-25, the validity period is one month.
        shared_ptr<string> beginDate_ {};
        // The short-term end date of the scheduled elastic scaling policy.
        // 
        // - If both **BeginDate** and **EndDate** are **null**, the policy is executed on a long-term basis. This is the default value.
        // - If specific dates are specified, for example, **BeginDate** is 2021-03-25 and **EndDate** is 2021-04-25, the validity period is one month.
        shared_ptr<string> endDate_ {};
        // The epoch for executing the scheduled elastic scaling policy. Valid values:
        // 
        // - **\\* \\* \\***: executes the scheduled policy at the specified time every day.
        // - **\\* \\* Fri,Mon**: executes the scheduled policy at the specified time on the specified days of every week. Multiple days are supported. The time zone is GMT+8. Valid values: 
        // 
        //     - **Sun**: Sunday
        //     - **Mon**: Monday
        //     - **Tue**: Tuesday
        //     - **Wed**: Wednesday
        //     - **Thu**: Thursday
        //     - **Fri**: Friday
        //     - **Sat**: Saturday
        // - **1,2,3,28,31 \\* \\***: executes the scheduled policy at the specified time on the specified days of every month. Multiple days are supported. Valid values: [1,31\\]. If the current month does not have the 31st day, the scheduled policy is skipped on that day.
        shared_ptr<string> period_ {};
        // The trigger time points within a single day.
        shared_ptr<vector<Timer::Schedules>> schedules_ {};
      };

      class Metric : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metric& obj) { 
          DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
          DARABONBA_PTR_TO_JSON(Metrics, metrics_);
          DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
        };
        friend void from_json(const Darabonba::Json& j, Metric& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
          DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
          DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
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
          // The target value of the monitoring metric.
          // 
          // - Target CPU utilization, in percentage.
          // - Target memory utilization, in percentage.
          // - QPS.
          // - Response time, in milliseconds.
          // - Average number of active TCP connections, in connections per second.
          // - Public-Internet-facing SLB QPS.
          // - Public-Internet-facing SLB response time, in milliseconds.
          // - Private network SLB QPS.
          // - Private network SLB response time, in milliseconds.
          shared_ptr<int32_t> metricTargetAverageUtilization_ {};
          // The trigger condition for the monitoring metric. Valid values:
          // 
          // - **CPU**: CPU utilization.
          // - **MEMORY**: memory utilization.
          // - **QPS**: the average QPS of a single instance of a Java application within 1 minute.
          // - **RT**: the average RT of all service interfaces of a Java application within 1 minute.
          // - **tcpActiveConn**: the average number of active TCP connections of a single instance within 30 seconds.
          // - **SLB_QPS**: the average public-Internet-facing SLB QPS of a single instance within 15 seconds.
          // - **SLB_RT**: the average public-Internet-facing SLB response time within 15 seconds.
          // - **INTRANET_SLB_QPS**: the average private network SLB QPS of a single instance within 15 seconds.
          // - **INTRANET_SLB_RT**: the average private network SLB response time within 15 seconds.
          shared_ptr<string> metricType_ {};
          // The SLB instance ID.
          shared_ptr<string> slbId_ {};
          // The Simple Log Service Logstore for SLB access logs.
          shared_ptr<string> slbLogstore_ {};
          // The Simple Log Service project for SLB access logs.
          shared_ptr<string> slbProject_ {};
          // The SLB port.
          shared_ptr<string> vport_ {};
        };

        virtual bool empty() const override { return this->maxReplicas_ == nullptr
        && this->metrics_ == nullptr && this->minReplicas_ == nullptr; };
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


        // minReplicas Field Functions 
        bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
        void deleteMinReplicas() { this->minReplicas_ = nullptr;};
        inline int32_t getMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
        inline Metric& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


      protected:
        // The maximum number of instances.
        shared_ptr<int32_t> maxReplicas_ {};
        // The list of monitoring metric-based elastic scaling configurations.
        shared_ptr<vector<Metric::Metrics>> metrics_ {};
        // The minimum number of instances.
        shared_ptr<int32_t> minReplicas_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->createTime_ == nullptr && this->enableIdle_ == nullptr && this->lastDisableTime_ == nullptr && this->metric_ == nullptr && this->scaleRuleEnabled_ == nullptr
        && this->scaleRuleName_ == nullptr && this->scaleRuleType_ == nullptr && this->timer_ == nullptr && this->updateTime_ == nullptr; };
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


      // enableIdle Field Functions 
      bool hasEnableIdle() const { return this->enableIdle_ != nullptr;};
      void deleteEnableIdle() { this->enableIdle_ = nullptr;};
      inline bool getEnableIdle() const { DARABONBA_PTR_GET_DEFAULT(enableIdle_, false) };
      inline Data& setEnableIdle(bool enableIdle) { DARABONBA_PTR_SET_VALUE(enableIdle_, enableIdle) };


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
      // The application ID.
      shared_ptr<string> appId_ {};
      // The creation time of the elastic scaling policy. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // Indicates whether the idle mode is enabled.
      shared_ptr<bool> enableIdle_ {};
      // The time when the elastic scaling policy was last disabled.
      shared_ptr<int64_t> lastDisableTime_ {};
      // The monitoring metric-based elastic scaling configuration.
      shared_ptr<Data::Metric> metric_ {};
      // Indicates whether the elastic scaling policy is enabled. Valid values:
      // 
      // - **true**: enabled.
      // - **false**: disabled.
      shared_ptr<bool> scaleRuleEnabled_ {};
      // The name of the elastic scaling policy.
      shared_ptr<string> scaleRuleName_ {};
      // The type of the elastic scaling policy. Valid values:
      // 
      // - **timing**: scheduled elastic scaling.
      // - **metric**: monitoring metric-based elastic scaling.
      // - **mix**: hybrid elastic scaling.
      shared_ptr<string> scaleRuleType_ {};
      // The scheduled elastic scaling configuration.
      shared_ptr<Data::Timer> timer_ {};
      // The update time of the elastic scaling policy. Unit: milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateApplicationScalingRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateApplicationScalingRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateApplicationScalingRuleResponseBody::Data) };
    inline CreateApplicationScalingRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateApplicationScalingRuleResponseBody::Data) };
    inline CreateApplicationScalingRuleResponseBody& setData(const CreateApplicationScalingRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateApplicationScalingRuleResponseBody& setData(CreateApplicationScalingRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateApplicationScalingRuleResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateApplicationScalingRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationScalingRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateApplicationScalingRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CreateApplicationScalingRuleResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The API status code or POP error code. Valid values:
    // 
    // - **2xx**: success.
    // - **3xx**: redirection.
    // - **4xx**: request error.
    // - **5xx**: server error.
    shared_ptr<string> code_ {};
    // The returned result.
    shared_ptr<CreateApplicationScalingRuleResponseBody::Data> data_ {};
    // The error code. Valid values:
    // 
    // - If the request is successful, the **ErrorCode** parameter is not returned.
    // - If the request fails, the **ErrorCode** parameter is returned. For more information, see the **Error codes** section in this topic.
    shared_ptr<string> errorCode_ {};
    // The additional information. Valid values:
    // 
    // - If the request is normal, **success** is returned.
    // - If the request is abnormal, a specific error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the application instance is restarted successfully. Valid values:
    // 
    // - **true**: restarted successfully.
    // - **false**: failed to restart.
    shared_ptr<bool> success_ {};
    // The trace ID, which is used to accurately query the call information.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
