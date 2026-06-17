// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(CompositeExpression, compositeExpression_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_TO_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Prometheus, prometheus_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SendOK, sendOK_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(CompositeExpression, compositeExpression_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_FROM_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Prometheus, prometheus_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SendOK, sendOK_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    PutResourceMetricRuleRequest() = default ;
    PutResourceMetricRuleRequest(const PutResourceMetricRuleRequest &) = default ;
    PutResourceMetricRuleRequest(PutResourceMetricRuleRequest &&) = default ;
    PutResourceMetricRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRuleRequest() = default ;
    PutResourceMetricRuleRequest& operator=(const PutResourceMetricRuleRequest &) = default ;
    PutResourceMetricRuleRequest& operator=(PutResourceMetricRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Prometheus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Prometheus& obj) { 
        DARABONBA_PTR_TO_JSON(Annotations, annotations_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(PromQL, promQL_);
        DARABONBA_PTR_TO_JSON(Times, times_);
      };
      friend void from_json(const Darabonba::Json& j, Prometheus& obj) { 
        DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(PromQL, promQL_);
        DARABONBA_PTR_FROM_JSON(Times, times_);
      };
      Prometheus() = default ;
      Prometheus(const Prometheus &) = default ;
      Prometheus(Prometheus &&) = default ;
      Prometheus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Prometheus() = default ;
      Prometheus& operator=(const Prometheus &) = default ;
      Prometheus& operator=(Prometheus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Annotations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Annotations& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Annotations& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Annotations() = default ;
        Annotations(const Annotations &) = default ;
        Annotations(Annotations &&) = default ;
        Annotations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Annotations() = default ;
        Annotations& operator=(const Annotations &) = default ;
        Annotations& operator=(Annotations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Annotations& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Annotations& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The annotation key.
        shared_ptr<string> key_ {};
        // The annotation value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->annotations_ == nullptr
        && this->level_ == nullptr && this->promQL_ == nullptr && this->times_ == nullptr; };
      // annotations Field Functions 
      bool hasAnnotations() const { return this->annotations_ != nullptr;};
      void deleteAnnotations() { this->annotations_ = nullptr;};
      inline const vector<Prometheus::Annotations> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<Prometheus::Annotations>) };
      inline vector<Prometheus::Annotations> getAnnotations() { DARABONBA_PTR_GET(annotations_, vector<Prometheus::Annotations>) };
      inline Prometheus& setAnnotations(const vector<Prometheus::Annotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
      inline Prometheus& setAnnotations(vector<Prometheus::Annotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Prometheus& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // promQL Field Functions 
      bool hasPromQL() const { return this->promQL_ != nullptr;};
      void deletePromQL() { this->promQL_ = nullptr;};
      inline string getPromQL() const { DARABONBA_PTR_GET_DEFAULT(promQL_, "") };
      inline Prometheus& setPromQL(string promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };


      // times Field Functions 
      bool hasTimes() const { return this->times_ != nullptr;};
      void deleteTimes() { this->times_ = nullptr;};
      inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
      inline Prometheus& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    protected:
      // The annotations for Prometheus alerting. The annotation keys and values are rendered to help you understand the metric or alert rule.
      // 
      // > This feature is equivalent to the Annotation feature in Prometheus.
      shared_ptr<vector<Prometheus::Annotations>> annotations_ {};
      // The alert level. Valid values:
      // - CRITICAL: critical.
      // - WARN: warning.
      // - INFO: information.
      shared_ptr<string> level_ {};
      // The PromQL query statement.
      // 
      // > The data obtained by the PromQL query statement is the alert data. Include the alert threshold in this statement.
      shared_ptr<string> promQL_ {};
      // The number of times that the alert condition must be met before an alert notification is sent.
      shared_ptr<int32_t> times_ {};
    };

    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The label key.
      shared_ptr<string> key_ {};
      // The label value.
      // 
      // > The label value supports template parameters. Template parameters are replaced with actual label values.
      shared_ptr<string> value_ {};
    };

    class CompositeExpression : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CompositeExpression& obj) { 
        DARABONBA_PTR_TO_JSON(ExpressionList, expressionList_);
        DARABONBA_PTR_TO_JSON(ExpressionListJoin, expressionListJoin_);
        DARABONBA_PTR_TO_JSON(ExpressionRaw, expressionRaw_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Times, times_);
      };
      friend void from_json(const Darabonba::Json& j, CompositeExpression& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpressionList, expressionList_);
        DARABONBA_PTR_FROM_JSON(ExpressionListJoin, expressionListJoin_);
        DARABONBA_PTR_FROM_JSON(ExpressionRaw, expressionRaw_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Times, times_);
      };
      CompositeExpression() = default ;
      CompositeExpression(const CompositeExpression &) = default ;
      CompositeExpression(CompositeExpression &&) = default ;
      CompositeExpression(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CompositeExpression() = default ;
      CompositeExpression& operator=(const CompositeExpression &) = default ;
      CompositeExpression& operator=(CompositeExpression &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ExpressionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExpressionList& obj) { 
          DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(Statistics, statistics_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, ExpressionList& obj) { 
          DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        };
        ExpressionList() = default ;
        ExpressionList(const ExpressionList &) = default ;
        ExpressionList(ExpressionList &&) = default ;
        ExpressionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExpressionList() = default ;
        ExpressionList& operator=(const ExpressionList &) = default ;
        ExpressionList& operator=(ExpressionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->metricName_ == nullptr && this->period_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr; };
        // comparisonOperator Field Functions 
        bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
        void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
        inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
        inline ExpressionList& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline ExpressionList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
        inline ExpressionList& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
        inline ExpressionList& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
        inline ExpressionList& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        // The comparison operator for the threshold. Valid values:
        // 
        // - GreaterThanOrEqualToThreshold: greater than or equal to the threshold.
        // - GreaterThanThreshold: greater than the threshold.
        // - LessThanOrEqualToThreshold: less than or equal to the threshold.
        // - LessThanThreshold: less than the threshold.
        // - NotEqualToThreshold: not equal to the threshold.
        // - EqualToThreshold: equal to the threshold.
        // - GreaterThanYesterday: greater than the value at the same time yesterday.
        // - LessThanYesterday: less than the value at the same time yesterday.
        // - GreaterThanLastWeek: greater than the value at the same time last week.
        // - LessThanLastWeek: less than the value at the same time last week.
        // - GreaterThanLastPeriod: greater than the value in the last period.
        // - LessThanLastPeriod: less than the value in the last period.
        shared_ptr<string> comparisonOperator_ {};
        // The metric name of the Alibaba Cloud service.
        shared_ptr<string> metricName_ {};
        // The aggregation period of the metric.
        // 
        // Unit: seconds.
        shared_ptr<int64_t> period_ {};
        // The statistical method of the metric. Valid values:
        // - $Maximum: maximum value.
        // - $Minimum: minimum value.
        // - $Average: average value.
        // - $Availability: active rate (typically used for site monitoring).
        // 
        // > `$` is the unified prefix for metrics. For information about supported Alibaba Cloud services, see [Alibaba Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
        shared_ptr<string> statistics_ {};
        // The alert threshold.
        shared_ptr<string> threshold_ {};
      };

      virtual bool empty() const override { return this->expressionList_ == nullptr
        && this->expressionListJoin_ == nullptr && this->expressionRaw_ == nullptr && this->level_ == nullptr && this->times_ == nullptr; };
      // expressionList Field Functions 
      bool hasExpressionList() const { return this->expressionList_ != nullptr;};
      void deleteExpressionList() { this->expressionList_ = nullptr;};
      inline const vector<CompositeExpression::ExpressionList> & getExpressionList() const { DARABONBA_PTR_GET_CONST(expressionList_, vector<CompositeExpression::ExpressionList>) };
      inline vector<CompositeExpression::ExpressionList> getExpressionList() { DARABONBA_PTR_GET(expressionList_, vector<CompositeExpression::ExpressionList>) };
      inline CompositeExpression& setExpressionList(const vector<CompositeExpression::ExpressionList> & expressionList) { DARABONBA_PTR_SET_VALUE(expressionList_, expressionList) };
      inline CompositeExpression& setExpressionList(vector<CompositeExpression::ExpressionList> && expressionList) { DARABONBA_PTR_SET_RVALUE(expressionList_, expressionList) };


      // expressionListJoin Field Functions 
      bool hasExpressionListJoin() const { return this->expressionListJoin_ != nullptr;};
      void deleteExpressionListJoin() { this->expressionListJoin_ = nullptr;};
      inline string getExpressionListJoin() const { DARABONBA_PTR_GET_DEFAULT(expressionListJoin_, "") };
      inline CompositeExpression& setExpressionListJoin(string expressionListJoin) { DARABONBA_PTR_SET_VALUE(expressionListJoin_, expressionListJoin) };


      // expressionRaw Field Functions 
      bool hasExpressionRaw() const { return this->expressionRaw_ != nullptr;};
      void deleteExpressionRaw() { this->expressionRaw_ = nullptr;};
      inline string getExpressionRaw() const { DARABONBA_PTR_GET_DEFAULT(expressionRaw_, "") };
      inline CompositeExpression& setExpressionRaw(string expressionRaw) { DARABONBA_PTR_SET_VALUE(expressionRaw_, expressionRaw) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline CompositeExpression& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // times Field Functions 
      bool hasTimes() const { return this->times_ != nullptr;};
      void deleteTimes() { this->times_ = nullptr;};
      inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
      inline CompositeExpression& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    protected:
      // The list of alert conditions created in standard mode.
      shared_ptr<vector<CompositeExpression::ExpressionList>> expressionList_ {};
      // The relationship between multi-metric alert conditions. Valid values: 
      // 
      // - `&&`: An alert is triggered only when all metrics meet the alert conditions. An alert is triggered only when all expressions in ExpressionList evaluate to `true`.
      // 
      // - `||`: An alert is triggered when any metric meets the alert conditions.
      shared_ptr<string> expressionListJoin_ {};
      // The alert condition created by using an expression. The following scenarios are supported:
      // 
      // - Set an alert blacklist for specific resources. For example, `$instanceId != \\"i-io8kfvcpp7x5****\\" ``&&`` $Average > 50` specifies that no alert is triggered for instance `i-io8kfvcpp7x5****` even if its `Average` exceeds 50.
      // - Set a special alert threshold for a specific instance in the rule. For example, `$Average > ($instanceId == \\"i-io8kfvcpp7x5****\\"? 80: 50)` specifies that an alert is triggered for instance `i-io8kfvcpp7x5****` only when its `Average` exceeds 80, while an alert is triggered for other instances when their `Average` exceeds 50.
      // - Limit the number of instances that exceed the threshold. For example, `count($Average > 20) > 3` specifies that an alert is triggered only when more than three instances have an `Average` greater than 20.
      shared_ptr<string> expressionRaw_ {};
      // The alert level. Valid values:
      // - CRITICAL: critical.
      // - WARN: warning.
      // - INFO: information.
      shared_ptr<string> level_ {};
      // The number of times that the alert condition must be met before an alert notification is sent.
      shared_ptr<int32_t> times_ {};
    };

    class Escalations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Escalations& obj) { 
        DARABONBA_PTR_TO_JSON(Critical, critical_);
        DARABONBA_PTR_TO_JSON(Info, info_);
        DARABONBA_PTR_TO_JSON(Warn, warn_);
      };
      friend void from_json(const Darabonba::Json& j, Escalations& obj) { 
        DARABONBA_PTR_FROM_JSON(Critical, critical_);
        DARABONBA_PTR_FROM_JSON(Info, info_);
        DARABONBA_PTR_FROM_JSON(Warn, warn_);
      };
      Escalations() = default ;
      Escalations(const Escalations &) = default ;
      Escalations(Escalations &&) = default ;
      Escalations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Escalations() = default ;
      Escalations& operator=(const Escalations &) = default ;
      Escalations& operator=(Escalations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Warn : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Warn& obj) { 
          DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_TO_JSON(Statistics, statistics_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
          DARABONBA_PTR_TO_JSON(Times, times_);
        };
        friend void from_json(const Darabonba::Json& j, Warn& obj) { 
          DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
          DARABONBA_PTR_FROM_JSON(Times, times_);
        };
        Warn() = default ;
        Warn(const Warn &) = default ;
        Warn(Warn &&) = default ;
        Warn(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Warn() = default ;
        Warn& operator=(const Warn &) = default ;
        Warn& operator=(Warn &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
        // comparisonOperator Field Functions 
        bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
        void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
        inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
        inline Warn& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
        inline Warn& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
        inline Warn& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


        // times Field Functions 
        bool hasTimes() const { return this->times_ != nullptr;};
        void deleteTimes() { this->times_ = nullptr;};
        inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
        inline Warn& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


      protected:
        // Warn级别阈值比较符。取值：
        // 
        // - GreaterThanOrEqualToThreshold：大于等于。
        // - GreaterThanThreshold：大于。
        // - LessThanOrEqualToThreshold：小于等于。
        // - LessThanThreshold：小于。
        // - NotEqualToThreshold：不等于。
        // - EqualToThreshold：等于。
        // - GreaterThanYesterday：同比昨天时间上涨。
        // - LessThanYesterday：同比昨天时间下降。
        // - GreaterThanLastWeek：同比上周同一时间上涨。
        // - LessThanLastWeek：同比上周同一时间下降。
        // - GreaterThanLastPeriod：环比上周期上涨。
        // - LessThanLastPeriod：环比上周期下降。
        // 
        // > 报警级别Critical（严重）、Warn（警告）或Info（信息）至少设置一个，且该报警级别中的参数Statistics、ComparisonOperator、Threshold和Times必须同时设置。
        shared_ptr<string> comparisonOperator_ {};
        // Warn级别报警统计方法。
        // 
        // 该参数的取值由指定云产品的`MetricName`对应的`Statistics`列决定，例如：Maximum、Minimum和Average。关于如何获取该参数的取值，请参见[云产品监控项](https://help.aliyun.com/document_detail/163515.html)。
        // 
        // > 报警级别Critical（严重）、Warn（警告）或Info（信息）至少设置一个，且该报警级别中的参数Statistics、ComparisonOperator、Threshold和Times必须同时设置。
        shared_ptr<string> statistics_ {};
        // Warn级别报警阈值。
        // > 报警级别Critical（严重）、Warn（警告）或Info（信息）至少设置一个，且该报警级别中的参数Statistics、ComparisonOperator、Threshold和Times必须同时设置。
        shared_ptr<string> threshold_ {};
        // Warn级别报警重试次数。
        // 
        // > 报警级别Critical（严重）、Warn（警告）或Info（信息）至少设置一个，且该报警级别中的参数Statistics、ComparisonOperator、Threshold和Times必须同时设置。
        shared_ptr<int32_t> times_ {};
      };

      class Info : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Info& obj) { 
          DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_TO_JSON(Statistics, statistics_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
          DARABONBA_PTR_TO_JSON(Times, times_);
        };
        friend void from_json(const Darabonba::Json& j, Info& obj) { 
          DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
          DARABONBA_PTR_FROM_JSON(Times, times_);
        };
        Info() = default ;
        Info(const Info &) = default ;
        Info(Info &&) = default ;
        Info(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Info() = default ;
        Info& operator=(const Info &) = default ;
        Info& operator=(Info &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
        // comparisonOperator Field Functions 
        bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
        void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
        inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
        inline Info& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
        inline Info& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
        inline Info& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


        // times Field Functions 
        bool hasTimes() const { return this->times_ != nullptr;};
        void deleteTimes() { this->times_ = nullptr;};
        inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
        inline Info& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


      protected:
        // Info级别阈值比较符。取值：
        // 
        // - GreaterThanOrEqualToThreshold：大于等于。
        // - GreaterThanThreshold：大于。
        // - LessThanOrEqualToThreshold：小于等于。
        // - LessThanThreshold：小于。
        // - NotEqualToThreshold：不等于。
        // - EqualToThreshold：等于。
        // - GreaterThanYesterday：同比昨天时间上涨。
        // - LessThanYesterday：同比昨天时间下降。
        // - GreaterThanLastWeek：同比上周同一时间上涨。
        // - LessThanLastWeek：同比上周同一时间下降。
        // - GreaterThanLastPeriod：环比上周期上涨。
        // - LessThanLastPeriod：环比上周期下降。
        // 
        // > 报警级别Critical（严重）、Warn（警告）或Info（信息）至少设置一个，且该报警级别中的参数Statistics、ComparisonOperator、Threshold和Times必须同时设置。
        shared_ptr<string> comparisonOperator_ {};
        // Info级别报警统计方法。
        // 
        // 该参数的取值由指定云产品的`MetricName`对应的`Statistics`列决定，例如：Maximum、Minimum和Average。关于如何获取该参数的取值，请参见[云产品监控项](https://help.aliyun.com/document_detail/163515.html)。
        // 
        // > 报警级别Critical（严重）、Warn（警告）或Info（信息）至少设置一个，且该报警级别中的参数Statistics、ComparisonOperator、Threshold和Times必须同时设置。
        shared_ptr<string> statistics_ {};
        // Info级别报警阈值。
        // 
        // > 报警级别Critical（严重）、Warn（警告）或Info（信息）至少设置一个，且该报警级别中的参数Statistics、ComparisonOperator、Threshold和Times必须同时设置。
        shared_ptr<string> threshold_ {};
        // Info级别报警重试次数。
        // 
        // > 报警级别Critical（严重）、Warn（警告）或Info（信息）至少设置一个，且该报警级别中的参数Statistics、ComparisonOperator、Threshold和Times必须同时设置。
        shared_ptr<int32_t> times_ {};
      };

      class Critical : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Critical& obj) { 
          DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_TO_JSON(Statistics, statistics_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
          DARABONBA_PTR_TO_JSON(Times, times_);
        };
        friend void from_json(const Darabonba::Json& j, Critical& obj) { 
          DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
          DARABONBA_PTR_FROM_JSON(Times, times_);
        };
        Critical() = default ;
        Critical(const Critical &) = default ;
        Critical(Critical &&) = default ;
        Critical(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Critical() = default ;
        Critical& operator=(const Critical &) = default ;
        Critical& operator=(Critical &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
        // comparisonOperator Field Functions 
        bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
        void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
        inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
        inline Critical& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
        inline Critical& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
        inline Critical& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


        // times Field Functions 
        bool hasTimes() const { return this->times_ != nullptr;};
        void deleteTimes() { this->times_ = nullptr;};
        inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
        inline Critical& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


      protected:
        // Critical级别阈值比较符。取值：
        // 
        // - GreaterThanOrEqualToThreshold：大于等于。
        // - GreaterThanThreshold：大于。
        // - LessThanOrEqualToThreshold：小于等于。
        // - LessThanThreshold：小于。
        // - NotEqualToThreshold：不等于。
        // - EqualToThreshold：等于。
        // - GreaterThanYesterday：同比昨天时间上涨。
        // - LessThanYesterday：同比昨天时间下降。
        // - GreaterThanLastWeek：同比上周同一时间上涨。
        // - LessThanLastWeek：同比上周同一时间下降。
        // - GreaterThanLastPeriod：环比上周期上涨。
        // - LessThanLastPeriod：环比上周期下降。
        // 
        // > 报警级别Critical（严重）、Warn（警告）或Info（信息）至少设置一个，且该报警级别中的参数Statistics、ComparisonOperator、Threshold和Times必须同时设置。
        shared_ptr<string> comparisonOperator_ {};
        // Critical级别报警统计方法。
        // 
        // 该参数的取值由指定云产品的`MetricName`对应的`Statistics`列决定，例如：Maximum、Minimum和Average。关于如何获取该参数的取值，请参见[云产品监控项](https://help.aliyun.com/document_detail/163515.html)。
        // 
        // > 报警级别Critical（严重）、Warn（警告）或Info（信息）至少设置一个，且该报警级别中的参数Statistics、ComparisonOperator、Threshold和Times必须同时设置。
        shared_ptr<string> statistics_ {};
        // Critical级别报警阈值。
        // 
        // 
        // > 报警级别Critical（严重）、Warn（警告）或Info（信息）至少设置一个，且该报警级别中的参数Statistics、ComparisonOperator、Threshold和Times必须同时设置。
        shared_ptr<string> threshold_ {};
        // Critical级别报警重试次数。
        // 
        // > 报警级别Critical（严重）、Warn（警告）或Info（信息）至少设置一个，且该报警级别中的参数Statistics、ComparisonOperator、Threshold和Times必须同时设置。
        shared_ptr<int32_t> times_ {};
      };

      virtual bool empty() const override { return this->critical_ == nullptr
        && this->info_ == nullptr && this->warn_ == nullptr; };
      // critical Field Functions 
      bool hasCritical() const { return this->critical_ != nullptr;};
      void deleteCritical() { this->critical_ = nullptr;};
      inline const Escalations::Critical & getCritical() const { DARABONBA_PTR_GET_CONST(critical_, Escalations::Critical) };
      inline Escalations::Critical getCritical() { DARABONBA_PTR_GET(critical_, Escalations::Critical) };
      inline Escalations& setCritical(const Escalations::Critical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
      inline Escalations& setCritical(Escalations::Critical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


      // info Field Functions 
      bool hasInfo() const { return this->info_ != nullptr;};
      void deleteInfo() { this->info_ = nullptr;};
      inline const Escalations::Info & getInfo() const { DARABONBA_PTR_GET_CONST(info_, Escalations::Info) };
      inline Escalations::Info getInfo() { DARABONBA_PTR_GET(info_, Escalations::Info) };
      inline Escalations& setInfo(const Escalations::Info & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
      inline Escalations& setInfo(Escalations::Info && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


      // warn Field Functions 
      bool hasWarn() const { return this->warn_ != nullptr;};
      void deleteWarn() { this->warn_ = nullptr;};
      inline const Escalations::Warn & getWarn() const { DARABONBA_PTR_GET_CONST(warn_, Escalations::Warn) };
      inline Escalations::Warn getWarn() { DARABONBA_PTR_GET(warn_, Escalations::Warn) };
      inline Escalations& setWarn(const Escalations::Warn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
      inline Escalations& setWarn(Escalations::Warn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


    protected:
      shared_ptr<Escalations::Critical> critical_ {};
      shared_ptr<Escalations::Info> info_ {};
      shared_ptr<Escalations::Warn> warn_ {};
    };

    virtual bool empty() const override { return this->escalations_ == nullptr
        && this->compositeExpression_ == nullptr && this->contactGroups_ == nullptr && this->effectiveInterval_ == nullptr && this->emailSubject_ == nullptr && this->interval_ == nullptr
        && this->labels_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->noDataPolicy_ == nullptr && this->noEffectiveInterval_ == nullptr
        && this->period_ == nullptr && this->prometheus_ == nullptr && this->resources_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->sendOK_ == nullptr && this->silenceTime_ == nullptr && this->webhook_ == nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const PutResourceMetricRuleRequest::Escalations & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, PutResourceMetricRuleRequest::Escalations) };
    inline PutResourceMetricRuleRequest::Escalations getEscalations() { DARABONBA_PTR_GET(escalations_, PutResourceMetricRuleRequest::Escalations) };
    inline PutResourceMetricRuleRequest& setEscalations(const PutResourceMetricRuleRequest::Escalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline PutResourceMetricRuleRequest& setEscalations(PutResourceMetricRuleRequest::Escalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // compositeExpression Field Functions 
    bool hasCompositeExpression() const { return this->compositeExpression_ != nullptr;};
    void deleteCompositeExpression() { this->compositeExpression_ = nullptr;};
    inline const PutResourceMetricRuleRequest::CompositeExpression & getCompositeExpression() const { DARABONBA_PTR_GET_CONST(compositeExpression_, PutResourceMetricRuleRequest::CompositeExpression) };
    inline PutResourceMetricRuleRequest::CompositeExpression getCompositeExpression() { DARABONBA_PTR_GET(compositeExpression_, PutResourceMetricRuleRequest::CompositeExpression) };
    inline PutResourceMetricRuleRequest& setCompositeExpression(const PutResourceMetricRuleRequest::CompositeExpression & compositeExpression) { DARABONBA_PTR_SET_VALUE(compositeExpression_, compositeExpression) };
    inline PutResourceMetricRuleRequest& setCompositeExpression(PutResourceMetricRuleRequest::CompositeExpression && compositeExpression) { DARABONBA_PTR_SET_RVALUE(compositeExpression_, compositeExpression) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string getContactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline PutResourceMetricRuleRequest& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string getEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline PutResourceMetricRuleRequest& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // emailSubject Field Functions 
    bool hasEmailSubject() const { return this->emailSubject_ != nullptr;};
    void deleteEmailSubject() { this->emailSubject_ = nullptr;};
    inline string getEmailSubject() const { DARABONBA_PTR_GET_DEFAULT(emailSubject_, "") };
    inline PutResourceMetricRuleRequest& setEmailSubject(string emailSubject) { DARABONBA_PTR_SET_VALUE(emailSubject_, emailSubject) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline PutResourceMetricRuleRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<PutResourceMetricRuleRequest::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<PutResourceMetricRuleRequest::Labels>) };
    inline vector<PutResourceMetricRuleRequest::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<PutResourceMetricRuleRequest::Labels>) };
    inline PutResourceMetricRuleRequest& setLabels(const vector<PutResourceMetricRuleRequest::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline PutResourceMetricRuleRequest& setLabels(vector<PutResourceMetricRuleRequest::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutResourceMetricRuleRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutResourceMetricRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // noDataPolicy Field Functions 
    bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
    void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
    inline string getNoDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
    inline PutResourceMetricRuleRequest& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


    // noEffectiveInterval Field Functions 
    bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
    void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
    inline string getNoEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
    inline PutResourceMetricRuleRequest& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline PutResourceMetricRuleRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // prometheus Field Functions 
    bool hasPrometheus() const { return this->prometheus_ != nullptr;};
    void deletePrometheus() { this->prometheus_ = nullptr;};
    inline const PutResourceMetricRuleRequest::Prometheus & getPrometheus() const { DARABONBA_PTR_GET_CONST(prometheus_, PutResourceMetricRuleRequest::Prometheus) };
    inline PutResourceMetricRuleRequest::Prometheus getPrometheus() { DARABONBA_PTR_GET(prometheus_, PutResourceMetricRuleRequest::Prometheus) };
    inline PutResourceMetricRuleRequest& setPrometheus(const PutResourceMetricRuleRequest::Prometheus & prometheus) { DARABONBA_PTR_SET_VALUE(prometheus_, prometheus) };
    inline PutResourceMetricRuleRequest& setPrometheus(PutResourceMetricRuleRequest::Prometheus && prometheus) { DARABONBA_PTR_SET_RVALUE(prometheus_, prometheus) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline PutResourceMetricRuleRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutResourceMetricRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutResourceMetricRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sendOK Field Functions 
    bool hasSendOK() const { return this->sendOK_ != nullptr;};
    void deleteSendOK() { this->sendOK_ = nullptr;};
    inline bool getSendOK() const { DARABONBA_PTR_GET_DEFAULT(sendOK_, false) };
    inline PutResourceMetricRuleRequest& setSendOK(bool sendOK) { DARABONBA_PTR_SET_VALUE(sendOK_, sendOK) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline PutResourceMetricRuleRequest& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline PutResourceMetricRuleRequest& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    shared_ptr<PutResourceMetricRuleRequest::Escalations> escalations_ {};
    // The alert conditions for multiple metrics.
    // 
    // > Single-metric and multi-metric alert conditions are mutually exclusive and cannot be set at the same time.
    shared_ptr<PutResourceMetricRuleRequest::CompositeExpression> compositeExpression_ {};
    // The alert contact group. Alert notifications are sent to the alert contacts in this alert contact group.
    // 
    // > An alert contact group contains one or more alert contacts. For information about how to create alert contacts and alert contact groups, see [PutContact](https://help.aliyun.com/document_detail/114923.html) and [PutContactGroup](https://help.aliyun.com/document_detail/114929.html).
    // 
    // This parameter is required.
    shared_ptr<string> contactGroups_ {};
    // The effective period of the alert rule.
    shared_ptr<string> effectiveInterval_ {};
    // The subject of the alert email.
    shared_ptr<string> emailSubject_ {};
    // The trigger period of the alert rule. Unit: seconds.
    // 
    // > For information about how to query the statistical period of a metric, see [Alibaba Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> interval_ {};
    // The labels that are written to the metric and displayed in alert notifications when the metric meets the alert condition.
    // 
    // > This feature is the same as the Label feature in Prometheus alerting.
    shared_ptr<vector<PutResourceMetricRuleRequest::Labels>> labels_ {};
    // The name of the metric. For information about how to query metric names, see [Alibaba Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // > If you create a Prometheus alert rule for Hybrid Cloud Monitoring, this parameter specifies the name of the metric repository. For information about how to obtain the metric repository name, see [DescribeHybridMonitorNamespaceList](https://help.aliyun.com/document_detail/428880.html).
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // The namespace of the Alibaba Cloud service. For information about how to query the namespace of an Alibaba Cloud service, see [Alibaba Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // > If you create a Prometheus alert rule for Hybrid Cloud Monitoring, set this parameter to `acs_prometheus`.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The processing method when no monitoring data is found. Valid values:
    // 
    // - KEEP_LAST_STATE (default): No action is taken.
    // - INSUFFICIENT_DATA: An alert whose content is "Insufficient data" is triggered.
    // - OK: The status is considered normal.
    shared_ptr<string> noDataPolicy_ {};
    // The time range during which the alert rule is ineffective.
    shared_ptr<string> noEffectiveInterval_ {};
    // The statistical period of the metric. Unit: seconds. The default value is the original reporting period of the metric.
    // 
    // > For information about how to query the statistical period of a metric, see [Alibaba Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> period_ {};
    // The Prometheus alert configuration.
    // 
    // > Set this parameter only when you create a Prometheus alert rule for Hybrid Cloud Monitoring.
    shared_ptr<PutResourceMetricRuleRequest::Prometheus> prometheus_ {};
    // The resource information, such as `[{"instanceId":"i-uf6j91r34rnwawoo****"}]` or `[{"userId":"100931896542****"}]`.
    // 
    // For information about the supported monitoring dimensions, see [Alibaba Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> resources_ {};
    // The ID of the alert rule.
    // 
    // You can enter a new alert rule ID or use the ID of an existing alert rule in CloudMonitor. For information about how to query alert rule IDs, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // > If you enter a new alert rule ID, a threshold alert rule is created.
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
    // The name of the alert rule.
    // 
    // You can enter a new alert rule name or use the name of an existing alert rule in CloudMonitor. For information about how to query alert rule names, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // > If you enter a new alert rule name, a threshold alert rule is created.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // Specifies whether to send a recovery notification.
    shared_ptr<bool> sendOK_ {};
    // The mute period. Unit: seconds. Default value: 86400.
    // 
    // > The mute period specifies the interval at which an alert notification is re-sent if the alert does not recover to Normal.
    shared_ptr<int32_t> silenceTime_ {};
    // The callback URL to which a POST request is sent when an alert is triggered.
    shared_ptr<string> webhook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
