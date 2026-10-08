// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEAPPLICATIONSCALINGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLEAPPLICATIONSCALINGRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class EnableApplicationScalingRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableApplicationScalingRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppScalingRule, appScalingRule_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableApplicationScalingRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppScalingRule, appScalingRule_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnableApplicationScalingRuleResponseBody() = default ;
    EnableApplicationScalingRuleResponseBody(const EnableApplicationScalingRuleResponseBody &) = default ;
    EnableApplicationScalingRuleResponseBody(EnableApplicationScalingRuleResponseBody &&) = default ;
    EnableApplicationScalingRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableApplicationScalingRuleResponseBody() = default ;
    EnableApplicationScalingRuleResponseBody& operator=(const EnableApplicationScalingRuleResponseBody &) = default ;
    EnableApplicationScalingRuleResponseBody& operator=(EnableApplicationScalingRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppScalingRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppScalingRule& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LastDisableTime, lastDisableTime_);
        DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
        DARABONBA_PTR_TO_JSON(Metric, metric_);
        DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
        DARABONBA_PTR_TO_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
        DARABONBA_PTR_TO_JSON(ScaleRuleName, scaleRuleName_);
        DARABONBA_PTR_TO_JSON(ScaleRuleType, scaleRuleType_);
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AppScalingRule& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LastDisableTime, lastDisableTime_);
        DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
        DARABONBA_PTR_FROM_JSON(Metric, metric_);
        DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
        DARABONBA_PTR_FROM_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
        DARABONBA_PTR_FROM_JSON(ScaleRuleName, scaleRuleName_);
        DARABONBA_PTR_FROM_JSON(ScaleRuleType, scaleRuleType_);
        DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      AppScalingRule() = default ;
      AppScalingRule(const AppScalingRule &) = default ;
      AppScalingRule(AppScalingRule &&) = default ;
      AppScalingRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppScalingRule() = default ;
      AppScalingRule& operator=(const AppScalingRule &) = default ;
      AppScalingRule& operator=(AppScalingRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Trigger : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Trigger& obj) { 
          DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
          DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
          DARABONBA_PTR_TO_JSON(Triggers, triggers_);
        };
        friend void from_json(const Darabonba::Json& j, Trigger& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
          DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
          DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
        };
        Trigger() = default ;
        Trigger(const Trigger &) = default ;
        Trigger(Trigger &&) = default ;
        Trigger(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Trigger() = default ;
        Trigger& operator=(const Trigger &) = default ;
        Trigger& operator=(Trigger &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Triggers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Triggers& obj) { 
            DARABONBA_PTR_TO_JSON(MetaData, metaData_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Triggers& obj) { 
            DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Triggers() = default ;
          Triggers(const Triggers &) = default ;
          Triggers(Triggers &&) = default ;
          Triggers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Triggers() = default ;
          Triggers& operator=(const Triggers &) = default ;
          Triggers& operator=(Triggers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->metaData_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
          // metaData Field Functions 
          bool hasMetaData() const { return this->metaData_ != nullptr;};
          void deleteMetaData() { this->metaData_ = nullptr;};
          inline string getMetaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
          inline Triggers& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Triggers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Triggers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The metadata of the trigger.
          shared_ptr<string> metaData_ {};
          // The name of the trigger.
          shared_ptr<string> name_ {};
          // The type of the trigger. Valid values: cron and app_metric.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->maxReplicas_ == nullptr
        && this->minReplicas_ == nullptr && this->triggers_ == nullptr; };
        // maxReplicas Field Functions 
        bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
        void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
        inline int32_t getMaxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
        inline Trigger& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


        // minReplicas Field Functions 
        bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
        void deleteMinReplicas() { this->minReplicas_ = nullptr;};
        inline int32_t getMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
        inline Trigger& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


        // triggers Field Functions 
        bool hasTriggers() const { return this->triggers_ != nullptr;};
        void deleteTriggers() { this->triggers_ = nullptr;};
        inline const vector<Trigger::Triggers> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<Trigger::Triggers>) };
        inline vector<Trigger::Triggers> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<Trigger::Triggers>) };
        inline Trigger& setTriggers(const vector<Trigger::Triggers> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
        inline Trigger& setTriggers(vector<Trigger::Triggers> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


      protected:
        // The maximum number of replicas. The upper limit is 1000.
        shared_ptr<int32_t> maxReplicas_ {};
        // The minimum number of replicas. The lower limit is 0.
        shared_ptr<int32_t> minReplicas_ {};
        // The list of triggers.
        shared_ptr<vector<Trigger::Triggers>> triggers_ {};
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
          };
          friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
            DARABONBA_PTR_FROM_JSON(MetricTargetAverageUtilization, metricTargetAverageUtilization_);
            DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
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
        && this->metricType_ == nullptr; };
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


        protected:
          // This parameter is deprecated.
          shared_ptr<int32_t> metricTargetAverageUtilization_ {};
          // This parameter is deprecated.
          shared_ptr<string> metricType_ {};
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
        // This parameter is deprecated.
        shared_ptr<int32_t> maxReplicas_ {};
        // This parameter is deprecated.
        shared_ptr<vector<Metric::Metrics>> metrics_ {};
        // This parameter is deprecated.
        shared_ptr<int32_t> minReplicas_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->createTime_ == nullptr && this->lastDisableTime_ == nullptr && this->maxReplicas_ == nullptr && this->metric_ == nullptr && this->minReplicas_ == nullptr
        && this->scaleRuleEnabled_ == nullptr && this->scaleRuleName_ == nullptr && this->scaleRuleType_ == nullptr && this->trigger_ == nullptr && this->updateTime_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline AppScalingRule& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline AppScalingRule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // lastDisableTime Field Functions 
      bool hasLastDisableTime() const { return this->lastDisableTime_ != nullptr;};
      void deleteLastDisableTime() { this->lastDisableTime_ = nullptr;};
      inline int64_t getLastDisableTime() const { DARABONBA_PTR_GET_DEFAULT(lastDisableTime_, 0L) };
      inline AppScalingRule& setLastDisableTime(int64_t lastDisableTime) { DARABONBA_PTR_SET_VALUE(lastDisableTime_, lastDisableTime) };


      // maxReplicas Field Functions 
      bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
      void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
      inline int32_t getMaxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
      inline AppScalingRule& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


      // metric Field Functions 
      bool hasMetric() const { return this->metric_ != nullptr;};
      void deleteMetric() { this->metric_ = nullptr;};
      inline const AppScalingRule::Metric & getMetric() const { DARABONBA_PTR_GET_CONST(metric_, AppScalingRule::Metric) };
      inline AppScalingRule::Metric getMetric() { DARABONBA_PTR_GET(metric_, AppScalingRule::Metric) };
      inline AppScalingRule& setMetric(const AppScalingRule::Metric & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
      inline AppScalingRule& setMetric(AppScalingRule::Metric && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


      // minReplicas Field Functions 
      bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
      void deleteMinReplicas() { this->minReplicas_ = nullptr;};
      inline int32_t getMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
      inline AppScalingRule& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


      // scaleRuleEnabled Field Functions 
      bool hasScaleRuleEnabled() const { return this->scaleRuleEnabled_ != nullptr;};
      void deleteScaleRuleEnabled() { this->scaleRuleEnabled_ = nullptr;};
      inline bool getScaleRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleEnabled_, false) };
      inline AppScalingRule& setScaleRuleEnabled(bool scaleRuleEnabled) { DARABONBA_PTR_SET_VALUE(scaleRuleEnabled_, scaleRuleEnabled) };


      // scaleRuleName Field Functions 
      bool hasScaleRuleName() const { return this->scaleRuleName_ != nullptr;};
      void deleteScaleRuleName() { this->scaleRuleName_ = nullptr;};
      inline string getScaleRuleName() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleName_, "") };
      inline AppScalingRule& setScaleRuleName(string scaleRuleName) { DARABONBA_PTR_SET_VALUE(scaleRuleName_, scaleRuleName) };


      // scaleRuleType Field Functions 
      bool hasScaleRuleType() const { return this->scaleRuleType_ != nullptr;};
      void deleteScaleRuleType() { this->scaleRuleType_ = nullptr;};
      inline string getScaleRuleType() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleType_, "") };
      inline AppScalingRule& setScaleRuleType(string scaleRuleType) { DARABONBA_PTR_SET_VALUE(scaleRuleType_, scaleRuleType) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline const AppScalingRule::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, AppScalingRule::Trigger) };
      inline AppScalingRule::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, AppScalingRule::Trigger) };
      inline AppScalingRule& setTrigger(const AppScalingRule::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
      inline AppScalingRule& setTrigger(AppScalingRule::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline AppScalingRule& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the application to which the auto scaling policy belongs.
      shared_ptr<string> appId_ {};
      // The time when the auto scaling policy was created.
      shared_ptr<int64_t> createTime_ {};
      // The time when the auto scaling policy was last disabled.
      shared_ptr<int64_t> lastDisableTime_ {};
      // This parameter is deprecated.
      shared_ptr<int32_t> maxReplicas_ {};
      // This parameter is deprecated.
      shared_ptr<AppScalingRule::Metric> metric_ {};
      // This parameter is deprecated.
      shared_ptr<int32_t> minReplicas_ {};
      // Indicates whether the auto scaling policy is enabled. Valid values:
      // 
      // - **true**: The auto scaling policy is enabled.
      // 
      // - **false**: The auto scaling policy is disabled.
      shared_ptr<bool> scaleRuleEnabled_ {};
      // The name of the auto scaling policy.
      shared_ptr<string> scaleRuleName_ {};
      // The type of the auto scaling policy. The value is fixed to trigger.
      shared_ptr<string> scaleRuleType_ {};
      // The configurations of the trigger.
      shared_ptr<AppScalingRule::Trigger> trigger_ {};
      // The time when the auto scaling policy was last modified.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->appScalingRule_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // appScalingRule Field Functions 
    bool hasAppScalingRule() const { return this->appScalingRule_ != nullptr;};
    void deleteAppScalingRule() { this->appScalingRule_ = nullptr;};
    inline const EnableApplicationScalingRuleResponseBody::AppScalingRule & getAppScalingRule() const { DARABONBA_PTR_GET_CONST(appScalingRule_, EnableApplicationScalingRuleResponseBody::AppScalingRule) };
    inline EnableApplicationScalingRuleResponseBody::AppScalingRule getAppScalingRule() { DARABONBA_PTR_GET(appScalingRule_, EnableApplicationScalingRuleResponseBody::AppScalingRule) };
    inline EnableApplicationScalingRuleResponseBody& setAppScalingRule(const EnableApplicationScalingRuleResponseBody::AppScalingRule & appScalingRule) { DARABONBA_PTR_SET_VALUE(appScalingRule_, appScalingRule) };
    inline EnableApplicationScalingRuleResponseBody& setAppScalingRule(EnableApplicationScalingRuleResponseBody::AppScalingRule && appScalingRule) { DARABONBA_PTR_SET_RVALUE(appScalingRule_, appScalingRule) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline EnableApplicationScalingRuleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnableApplicationScalingRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableApplicationScalingRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the auto scaling policy.
    shared_ptr<EnableApplicationScalingRuleResponseBody::AppScalingRule> appScalingRule_ {};
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
