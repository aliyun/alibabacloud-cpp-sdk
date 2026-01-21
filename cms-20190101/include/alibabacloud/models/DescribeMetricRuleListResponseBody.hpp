// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODY_HPP_
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
  class DescribeMetricRuleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Alarms, alarms_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Alarms, alarms_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMetricRuleListResponseBody() = default ;
    DescribeMetricRuleListResponseBody(const DescribeMetricRuleListResponseBody &) = default ;
    DescribeMetricRuleListResponseBody(DescribeMetricRuleListResponseBody &&) = default ;
    DescribeMetricRuleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleListResponseBody() = default ;
    DescribeMetricRuleListResponseBody& operator=(const DescribeMetricRuleListResponseBody &) = default ;
    DescribeMetricRuleListResponseBody& operator=(DescribeMetricRuleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Alarms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Alarms& obj) { 
        DARABONBA_PTR_TO_JSON(Alarm, alarm_);
      };
      friend void from_json(const Darabonba::Json& j, Alarms& obj) { 
        DARABONBA_PTR_FROM_JSON(Alarm, alarm_);
      };
      Alarms() = default ;
      Alarms(const Alarms &) = default ;
      Alarms(Alarms &&) = default ;
      Alarms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Alarms() = default ;
      Alarms& operator=(const Alarms &) = default ;
      Alarms& operator=(Alarms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Alarm : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Alarm& obj) { 
          DARABONBA_PTR_TO_JSON(AlertState, alertState_);
          DARABONBA_PTR_TO_JSON(CompositeExpression, compositeExpression_);
          DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
          DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
          DARABONBA_PTR_TO_JSON(EnableState, enableState_);
          DARABONBA_PTR_TO_JSON(Escalations, escalations_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtUpdate, gmtUpdate_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(MailSubject, mailSubject_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(NoDataPolicy, noDataPolicy_);
          DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(ProductCategory, productCategory_);
          DARABONBA_PTR_TO_JSON(Prometheus, prometheus_);
          DARABONBA_PTR_TO_JSON(Resources, resources_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(Webhook, webhook_);
        };
        friend void from_json(const Darabonba::Json& j, Alarm& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertState, alertState_);
          DARABONBA_PTR_FROM_JSON(CompositeExpression, compositeExpression_);
          DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
          DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
          DARABONBA_PTR_FROM_JSON(EnableState, enableState_);
          DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtUpdate, gmtUpdate_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(MailSubject, mailSubject_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(NoDataPolicy, noDataPolicy_);
          DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(ProductCategory, productCategory_);
          DARABONBA_PTR_FROM_JSON(Prometheus, prometheus_);
          DARABONBA_PTR_FROM_JSON(Resources, resources_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
        };
        Alarm() = default ;
        Alarm(const Alarm &) = default ;
        Alarm(Alarm &&) = default ;
        Alarm(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Alarm() = default ;
        Alarm& operator=(const Alarm &) = default ;
        Alarm& operator=(Alarm &&) = default ;
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
              DARABONBA_PTR_TO_JSON(Annotations, annotations_);
            };
            friend void from_json(const Darabonba::Json& j, Annotations& obj) { 
              DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
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
            class AnnotationsItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AnnotationsItem& obj) { 
                DARABONBA_PTR_TO_JSON(Key, key_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, AnnotationsItem& obj) { 
                DARABONBA_PTR_FROM_JSON(Key, key_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              AnnotationsItem() = default ;
              AnnotationsItem(const AnnotationsItem &) = default ;
              AnnotationsItem(AnnotationsItem &&) = default ;
              AnnotationsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AnnotationsItem() = default ;
              AnnotationsItem& operator=(const AnnotationsItem &) = default ;
              AnnotationsItem& operator=(AnnotationsItem &&) = default ;
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
              inline AnnotationsItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline AnnotationsItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              // The key of the annotation.
              shared_ptr<string> key_ {};
              // The value of the annotation.
              shared_ptr<string> value_ {};
            };

            virtual bool empty() const override { return this->annotations_ == nullptr; };
            // annotations Field Functions 
            bool hasAnnotations() const { return this->annotations_ != nullptr;};
            void deleteAnnotations() { this->annotations_ = nullptr;};
            inline const vector<Annotations::AnnotationsItem> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<Annotations::AnnotationsItem>) };
            inline vector<Annotations::AnnotationsItem> getAnnotations() { DARABONBA_PTR_GET(annotations_, vector<Annotations::AnnotationsItem>) };
            inline Annotations& setAnnotations(const vector<Annotations::AnnotationsItem> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
            inline Annotations& setAnnotations(vector<Annotations::AnnotationsItem> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


          protected:
            shared_ptr<vector<Annotations::AnnotationsItem>> annotations_ {};
          };

          virtual bool empty() const override { return this->annotations_ == nullptr
        && this->level_ == nullptr && this->promQL_ == nullptr && this->times_ == nullptr; };
          // annotations Field Functions 
          bool hasAnnotations() const { return this->annotations_ != nullptr;};
          void deleteAnnotations() { this->annotations_ = nullptr;};
          inline const Prometheus::Annotations & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, Prometheus::Annotations) };
          inline Prometheus::Annotations getAnnotations() { DARABONBA_PTR_GET(annotations_, Prometheus::Annotations) };
          inline Prometheus& setAnnotations(const Prometheus::Annotations & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
          inline Prometheus& setAnnotations(Prometheus::Annotations && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


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
          inline int64_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0L) };
          inline Prometheus& setTimes(int64_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


        protected:
          // The annotations of the Prometheus alert rule. When a Prometheus alert is triggered, the system renders the annotated keys and values to help you understand the metrics and alert rule.
          // 
          // >  This parameter is equivalent to the annotations parameter of open source Prometheus.
          shared_ptr<Prometheus::Annotations> annotations_ {};
          // The alert level. Valid values:
          // 
          // *   CRITICAL
          // *   WARN
          // *   INFO
          shared_ptr<string> level_ {};
          // The PromQL query statement.
          // 
          // >  The data obtained by using the PromQL query statement is the monitoring data. You must include the alert threshold in this statement.
          shared_ptr<string> promQL_ {};
          // The number of consecutive triggers. If the number of times that the metric values meet the trigger conditions reaches the value of this parameter, CloudMonitor sends alert notifications.
          shared_ptr<int64_t> times_ {};
        };

        class Labels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Labels& obj) { 
            DARABONBA_PTR_TO_JSON(Labels, labels_);
          };
          friend void from_json(const Darabonba::Json& j, Labels& obj) { 
            DARABONBA_PTR_FROM_JSON(Labels, labels_);
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
          class LabelsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LabelsItem& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, LabelsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            LabelsItem() = default ;
            LabelsItem(const LabelsItem &) = default ;
            LabelsItem(LabelsItem &&) = default ;
            LabelsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LabelsItem() = default ;
            LabelsItem& operator=(const LabelsItem &) = default ;
            LabelsItem& operator=(LabelsItem &&) = default ;
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
            inline LabelsItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline LabelsItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key of the alert rule.
            shared_ptr<string> key_ {};
            // The tag value of the alert rule.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->labels_ == nullptr; };
          // labels Field Functions 
          bool hasLabels() const { return this->labels_ != nullptr;};
          void deleteLabels() { this->labels_ = nullptr;};
          inline const vector<Labels::LabelsItem> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Labels::LabelsItem>) };
          inline vector<Labels::LabelsItem> getLabels() { DARABONBA_PTR_GET(labels_, vector<Labels::LabelsItem>) };
          inline Labels& setLabels(const vector<Labels::LabelsItem> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
          inline Labels& setLabels(vector<Labels::LabelsItem> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        protected:
          shared_ptr<vector<Labels::LabelsItem>> labels_ {};
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
              DARABONBA_PTR_TO_JSON(PreCondition, preCondition_);
              DARABONBA_PTR_TO_JSON(Statistics, statistics_);
              DARABONBA_PTR_TO_JSON(Threshold, threshold_);
              DARABONBA_PTR_TO_JSON(Times, times_);
            };
            friend void from_json(const Darabonba::Json& j, Warn& obj) { 
              DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
              DARABONBA_PTR_FROM_JSON(PreCondition, preCondition_);
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
        && this->preCondition_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
            // comparisonOperator Field Functions 
            bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
            void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
            inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
            inline Warn& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


            // preCondition Field Functions 
            bool hasPreCondition() const { return this->preCondition_ != nullptr;};
            void deletePreCondition() { this->preCondition_ = nullptr;};
            inline string getPreCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
            inline Warn& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


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
            // The comparison operator that is used to compare the metric value with the threshold. Valid values:
            // 
            // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
            // *   GreaterThanThreshold: greater than the threshold
            // *   LessThanOrEqualToThreshold: less than or equal to the threshold
            // *   LessThanThreshold: less than the threshold
            // *   NotEqualToThreshold: not equal to the threshold
            // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
            // *   LessThanYesterday: less than the metric value at the same time yesterday
            // *   GreaterThanLastWeek: greater than the metric value at the same time last week
            // *   LessThanLastWeek: less than the metric value at the same time last week
            // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
            // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
            shared_ptr<string> comparisonOperator_ {};
            // The additional conditions for triggering Warn-level alerts. The additional conditions take effect when the value of the ComparisonOperator parameter is GreaterThanYesterday, LessThanYesterday, GreaterThanLastWeek, LessThanLastWeek, GreaterThanLastPeriod, or LessThanLastPeriod.
            // 
            // For example, the values of the PreCondition, ComparisonOperator, and Threshold parameters are set to $Average>80, GreaterThanYesterday, and 10, respectively. An alert is triggered only when the average metric value is greater than 80 and 10% greater than the average metric value at the same time yesterday.
            // 
            // >  $Average is a placeholder that consists of `a dollar sign ($) and the statistical method`. CloudMonitor replaces the placeholder with the aggregated value or original value before value comparison.
            shared_ptr<string> preCondition_ {};
            // The statistical methods for Warn-level alerts.
            shared_ptr<string> statistics_ {};
            // The threshold for Warn-level alerts.
            shared_ptr<string> threshold_ {};
            // The consecutive number of times for which the metric value meets the alert condition before a Warn-level alert is triggered.
            shared_ptr<int32_t> times_ {};
          };

          class Info : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Info& obj) { 
              DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
              DARABONBA_PTR_TO_JSON(PreCondition, preCondition_);
              DARABONBA_PTR_TO_JSON(Statistics, statistics_);
              DARABONBA_PTR_TO_JSON(Threshold, threshold_);
              DARABONBA_PTR_TO_JSON(Times, times_);
            };
            friend void from_json(const Darabonba::Json& j, Info& obj) { 
              DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
              DARABONBA_PTR_FROM_JSON(PreCondition, preCondition_);
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
        && this->preCondition_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
            // comparisonOperator Field Functions 
            bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
            void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
            inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
            inline Info& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


            // preCondition Field Functions 
            bool hasPreCondition() const { return this->preCondition_ != nullptr;};
            void deletePreCondition() { this->preCondition_ = nullptr;};
            inline string getPreCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
            inline Info& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


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
            // The comparison operator that is used to compare the metric value with the threshold. Valid values:
            // 
            // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
            // *   GreaterThanThreshold: greater than the threshold
            // *   LessThanOrEqualToThreshold: less than or equal to the threshold
            // *   LessThanThreshold: less than the threshold
            // *   NotEqualToThreshold: not equal to the threshold
            // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
            // *   LessThanYesterday: less than the metric value at the same time yesterday
            // *   GreaterThanLastWeek: greater than the metric value at the same time last week
            // *   LessThanLastWeek: less than the metric value at the same time last week
            // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
            // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
            shared_ptr<string> comparisonOperator_ {};
            // The additional conditions for triggering Info-level alerts. The additional conditions take effect when the value of the ComparisonOperator parameter is GreaterThanYesterday, LessThanYesterday, GreaterThanLastWeek, LessThanLastWeek, GreaterThanLastPeriod, or LessThanLastPeriod.
            // 
            // For example, the values of the PreCondition, ComparisonOperator, and Threshold parameters are set to $Average>80, GreaterThanYesterday, and 10, respectively. An alert is triggered only when the average metric value is greater than 80 and 10% greater than the average metric value at the same time yesterday.
            // 
            // >  $Average is a placeholder that consists of `a dollar sign ($) and the statistical method`. CloudMonitor replaces the placeholder with the aggregated value or original value before value comparison.
            shared_ptr<string> preCondition_ {};
            // The statistical methods for Info-level alerts.
            shared_ptr<string> statistics_ {};
            // The threshold for Info-level alerts.
            shared_ptr<string> threshold_ {};
            // The consecutive number of times for which the metric value meets the alert condition before an Info-level alert is triggered.
            shared_ptr<int32_t> times_ {};
          };

          class Critical : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Critical& obj) { 
              DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
              DARABONBA_PTR_TO_JSON(PreCondition, preCondition_);
              DARABONBA_PTR_TO_JSON(Statistics, statistics_);
              DARABONBA_PTR_TO_JSON(Threshold, threshold_);
              DARABONBA_PTR_TO_JSON(Times, times_);
            };
            friend void from_json(const Darabonba::Json& j, Critical& obj) { 
              DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
              DARABONBA_PTR_FROM_JSON(PreCondition, preCondition_);
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
        && this->preCondition_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
            // comparisonOperator Field Functions 
            bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
            void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
            inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
            inline Critical& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


            // preCondition Field Functions 
            bool hasPreCondition() const { return this->preCondition_ != nullptr;};
            void deletePreCondition() { this->preCondition_ = nullptr;};
            inline string getPreCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
            inline Critical& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


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
            // The comparison operator that is used to compare the metric value with the threshold. Valid values:
            // 
            // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
            // *   GreaterThanThreshold: greater than the threshold
            // *   LessThanOrEqualToThreshold: less than or equal to the threshold
            // *   LessThanThreshold: less than the threshold
            // *   NotEqualToThreshold: not equal to the threshold
            // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
            // *   LessThanYesterday: less than the metric value at the same time yesterday
            // *   GreaterThanLastWeek: greater than the metric value at the same time last week
            // *   LessThanLastWeek: less than the metric value at the same time last week
            // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
            // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
            shared_ptr<string> comparisonOperator_ {};
            // The additional conditions for triggering Critical-level alerts. The additional conditions take effect when the value of the ComparisonOperator parameter is GreaterThanYesterday, LessThanYesterday, GreaterThanLastWeek, LessThanLastWeek, GreaterThanLastPeriod, or LessThanLastPeriod.
            // 
            // For example, the values of the PreCondition, ComparisonOperator, and Threshold parameters are set to $Average>80, GreaterThanYesterday, and 10, respectively. An alert is triggered only when the average metric value is greater than 80 and 10% greater than the average metric value at the same time yesterday.
            // 
            // >  $Average is a placeholder that consists of `a dollar sign ($) and the statistical method`. CloudMonitor replaces the placeholder with the aggregated value or original value before value comparison.
            shared_ptr<string> preCondition_ {};
            // The statistical methods for Critical-level alerts.
            shared_ptr<string> statistics_ {};
            // The threshold for Critical-level alerts.
            shared_ptr<string> threshold_ {};
            // The consecutive number of times for which the metric value meets the alert condition before a Critical-level alert is triggered.
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
          // The conditions for triggering Critical-level alerts.
          shared_ptr<Escalations::Critical> critical_ {};
          // The conditions for triggering Info-level alerts.
          shared_ptr<Escalations::Info> info_ {};
          // The conditions for triggering Warn-level alerts.
          shared_ptr<Escalations::Warn> warn_ {};
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
              DARABONBA_PTR_TO_JSON(ExpressionList, expressionList_);
            };
            friend void from_json(const Darabonba::Json& j, ExpressionList& obj) { 
              DARABONBA_PTR_FROM_JSON(ExpressionList, expressionList_);
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
            class ExpressionListItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ExpressionListItem& obj) { 
                DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
                DARABONBA_PTR_TO_JSON(MetricName, metricName_);
                DARABONBA_PTR_TO_JSON(Period, period_);
                DARABONBA_PTR_TO_JSON(Statistics, statistics_);
                DARABONBA_PTR_TO_JSON(Threshold, threshold_);
              };
              friend void from_json(const Darabonba::Json& j, ExpressionListItem& obj) { 
                DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
                DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
                DARABONBA_PTR_FROM_JSON(Period, period_);
                DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
                DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
              };
              ExpressionListItem() = default ;
              ExpressionListItem(const ExpressionListItem &) = default ;
              ExpressionListItem(ExpressionListItem &&) = default ;
              ExpressionListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ExpressionListItem() = default ;
              ExpressionListItem& operator=(const ExpressionListItem &) = default ;
              ExpressionListItem& operator=(ExpressionListItem &&) = default ;
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
              inline ExpressionListItem& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


              // metricName Field Functions 
              bool hasMetricName() const { return this->metricName_ != nullptr;};
              void deleteMetricName() { this->metricName_ = nullptr;};
              inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
              inline ExpressionListItem& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


              // period Field Functions 
              bool hasPeriod() const { return this->period_ != nullptr;};
              void deletePeriod() { this->period_ = nullptr;};
              inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
              inline ExpressionListItem& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


              // statistics Field Functions 
              bool hasStatistics() const { return this->statistics_ != nullptr;};
              void deleteStatistics() { this->statistics_ = nullptr;};
              inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
              inline ExpressionListItem& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


              // threshold Field Functions 
              bool hasThreshold() const { return this->threshold_ != nullptr;};
              void deleteThreshold() { this->threshold_ = nullptr;};
              inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
              inline ExpressionListItem& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


            protected:
              // The operator that is used to compare the metric value with the threshold. Valid values:
              // 
              // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
              // *   GreaterThanThreshold: greater than the threshold
              // *   LessThanOrEqualToThreshold: less than or equal to the threshold
              // *   LessThanThreshold: less than the threshold
              // *   NotEqualToThreshold: not equal to the threshold
              // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
              // *   LessThanYesterday: less than the metric value at the same time yesterday
              // *   GreaterThanLastWeek: greater than the metric value at the same time last week
              // *   LessThanLastWeek: less than the metric value at the same time last week
              // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
              // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
              shared_ptr<string> comparisonOperator_ {};
              // The metric that is used to monitor the cloud service.
              shared_ptr<string> metricName_ {};
              // The aggregation period of the metric.
              // 
              // Unit: seconds.
              shared_ptr<int32_t> period_ {};
              // The statistical method of the metric. Valid values:
              // 
              // *   $Maximum: the maximum value
              // *   $Minimum: the minimum value
              // *   $Average: the average value
              // *   $Availability: the availability rate (usually used for site monitoring)
              // 
              // >  `$` is the prefix of the metric. For information about the Alibaba Cloud services that are supported by CloudMonitor, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
              shared_ptr<string> statistics_ {};
              // The alert threshold.
              shared_ptr<string> threshold_ {};
            };

            virtual bool empty() const override { return this->expressionList_ == nullptr; };
            // expressionList Field Functions 
            bool hasExpressionList() const { return this->expressionList_ != nullptr;};
            void deleteExpressionList() { this->expressionList_ = nullptr;};
            inline const vector<ExpressionList::ExpressionListItem> & getExpressionList() const { DARABONBA_PTR_GET_CONST(expressionList_, vector<ExpressionList::ExpressionListItem>) };
            inline vector<ExpressionList::ExpressionListItem> getExpressionList() { DARABONBA_PTR_GET(expressionList_, vector<ExpressionList::ExpressionListItem>) };
            inline ExpressionList& setExpressionList(const vector<ExpressionList::ExpressionListItem> & expressionList) { DARABONBA_PTR_SET_VALUE(expressionList_, expressionList) };
            inline ExpressionList& setExpressionList(vector<ExpressionList::ExpressionListItem> && expressionList) { DARABONBA_PTR_SET_RVALUE(expressionList_, expressionList) };


          protected:
            shared_ptr<vector<ExpressionList::ExpressionListItem>> expressionList_ {};
          };

          virtual bool empty() const override { return this->expressionList_ == nullptr
        && this->expressionListJoin_ == nullptr && this->expressionRaw_ == nullptr && this->level_ == nullptr && this->times_ == nullptr; };
          // expressionList Field Functions 
          bool hasExpressionList() const { return this->expressionList_ != nullptr;};
          void deleteExpressionList() { this->expressionList_ = nullptr;};
          inline const CompositeExpression::ExpressionList & getExpressionList() const { DARABONBA_PTR_GET_CONST(expressionList_, CompositeExpression::ExpressionList) };
          inline CompositeExpression::ExpressionList getExpressionList() { DARABONBA_PTR_GET(expressionList_, CompositeExpression::ExpressionList) };
          inline CompositeExpression& setExpressionList(const CompositeExpression::ExpressionList & expressionList) { DARABONBA_PTR_SET_VALUE(expressionList_, expressionList) };
          inline CompositeExpression& setExpressionList(CompositeExpression::ExpressionList && expressionList) { DARABONBA_PTR_SET_RVALUE(expressionList_, expressionList) };


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
          // The trigger conditions that are created in standard mode.
          shared_ptr<CompositeExpression::ExpressionList> expressionList_ {};
          // The relationship between the trigger conditions for multiple metrics. Valid values:
          // 
          // *   `&&`: An alert is triggered only if all metrics meet the trigger conditions. An alert is triggered only if the results of all expressions specified in the ExpressionList parameter are `true`.
          // *   `||`: An alert is triggered if one of the metrics meets the trigger conditions.
          shared_ptr<string> expressionListJoin_ {};
          // The trigger conditions that are created by using expressions. You can use expressions to create trigger conditions in the following scenarios:
          // 
          // *   Set an alert blacklist for specific resources. For example, if you specify `$instanceId != \\"i-io8kfvcpp7x5****\\" ``&&`` $Average > 50`, no alert is triggered when the `average metric value` of the `i-io8kfvcpp7x5****` instance exceeds 50.
          // *   Set a special alert threshold for a specified instance in the rule. For example, if you specify `$Average > ($instanceId == \\"i-io8kfvcpp7x5****\\"? 80: 50)`, an alert is triggered when the `average metric value` of the `i-io8kfvcpp7x5****` instance exceeds 80 or the `average metric value` of other instances exceeds 50.
          // *   Limit the number of instances whose metric values exceed the threshold. For example, if you specify `count($Average > 20) > 3`, an alert is triggered only when the number of instances whose `average metric value` exceeds 20 exceeds three.
          shared_ptr<string> expressionRaw_ {};
          // The alert level. Valid values:
          // 
          // *   CRITICAL
          // *   WARN
          // *   INFO
          shared_ptr<string> level_ {};
          // The number of consecutive triggers. If the number of times that the metric values meet the trigger conditions reaches the value of this parameter, CloudMonitor sends alert notifications.
          shared_ptr<int32_t> times_ {};
        };

        virtual bool empty() const override { return this->alertState_ == nullptr
        && this->compositeExpression_ == nullptr && this->contactGroups_ == nullptr && this->dimensions_ == nullptr && this->effectiveInterval_ == nullptr && this->enableState_ == nullptr
        && this->escalations_ == nullptr && this->gmtCreate_ == nullptr && this->gmtUpdate_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->labels_ == nullptr && this->mailSubject_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->noDataPolicy_ == nullptr
        && this->noEffectiveInterval_ == nullptr && this->period_ == nullptr && this->productCategory_ == nullptr && this->prometheus_ == nullptr && this->resources_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->silenceTime_ == nullptr && this->sourceType_ == nullptr && this->webhook_ == nullptr; };
        // alertState Field Functions 
        bool hasAlertState() const { return this->alertState_ != nullptr;};
        void deleteAlertState() { this->alertState_ = nullptr;};
        inline string getAlertState() const { DARABONBA_PTR_GET_DEFAULT(alertState_, "") };
        inline Alarm& setAlertState(string alertState) { DARABONBA_PTR_SET_VALUE(alertState_, alertState) };


        // compositeExpression Field Functions 
        bool hasCompositeExpression() const { return this->compositeExpression_ != nullptr;};
        void deleteCompositeExpression() { this->compositeExpression_ = nullptr;};
        inline const Alarm::CompositeExpression & getCompositeExpression() const { DARABONBA_PTR_GET_CONST(compositeExpression_, Alarm::CompositeExpression) };
        inline Alarm::CompositeExpression getCompositeExpression() { DARABONBA_PTR_GET(compositeExpression_, Alarm::CompositeExpression) };
        inline Alarm& setCompositeExpression(const Alarm::CompositeExpression & compositeExpression) { DARABONBA_PTR_SET_VALUE(compositeExpression_, compositeExpression) };
        inline Alarm& setCompositeExpression(Alarm::CompositeExpression && compositeExpression) { DARABONBA_PTR_SET_RVALUE(compositeExpression_, compositeExpression) };


        // contactGroups Field Functions 
        bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
        void deleteContactGroups() { this->contactGroups_ = nullptr;};
        inline string getContactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
        inline Alarm& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


        // dimensions Field Functions 
        bool hasDimensions() const { return this->dimensions_ != nullptr;};
        void deleteDimensions() { this->dimensions_ = nullptr;};
        inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
        inline Alarm& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


        // effectiveInterval Field Functions 
        bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
        void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
        inline string getEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
        inline Alarm& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


        // enableState Field Functions 
        bool hasEnableState() const { return this->enableState_ != nullptr;};
        void deleteEnableState() { this->enableState_ = nullptr;};
        inline bool getEnableState() const { DARABONBA_PTR_GET_DEFAULT(enableState_, false) };
        inline Alarm& setEnableState(bool enableState) { DARABONBA_PTR_SET_VALUE(enableState_, enableState) };


        // escalations Field Functions 
        bool hasEscalations() const { return this->escalations_ != nullptr;};
        void deleteEscalations() { this->escalations_ = nullptr;};
        inline const Alarm::Escalations & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, Alarm::Escalations) };
        inline Alarm::Escalations getEscalations() { DARABONBA_PTR_GET(escalations_, Alarm::Escalations) };
        inline Alarm& setEscalations(const Alarm::Escalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
        inline Alarm& setEscalations(Alarm::Escalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline Alarm& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtUpdate Field Functions 
        bool hasGmtUpdate() const { return this->gmtUpdate_ != nullptr;};
        void deleteGmtUpdate() { this->gmtUpdate_ = nullptr;};
        inline string getGmtUpdate() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdate_, "") };
        inline Alarm& setGmtUpdate(string gmtUpdate) { DARABONBA_PTR_SET_VALUE(gmtUpdate_, gmtUpdate) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Alarm& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Alarm& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const Alarm::Labels & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, Alarm::Labels) };
        inline Alarm::Labels getLabels() { DARABONBA_PTR_GET(labels_, Alarm::Labels) };
        inline Alarm& setLabels(const Alarm::Labels & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline Alarm& setLabels(Alarm::Labels && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // mailSubject Field Functions 
        bool hasMailSubject() const { return this->mailSubject_ != nullptr;};
        void deleteMailSubject() { this->mailSubject_ = nullptr;};
        inline string getMailSubject() const { DARABONBA_PTR_GET_DEFAULT(mailSubject_, "") };
        inline Alarm& setMailSubject(string mailSubject) { DARABONBA_PTR_SET_VALUE(mailSubject_, mailSubject) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline Alarm& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Alarm& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // noDataPolicy Field Functions 
        bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
        void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
        inline string getNoDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
        inline Alarm& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


        // noEffectiveInterval Field Functions 
        bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
        void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
        inline string getNoEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
        inline Alarm& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
        inline Alarm& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // productCategory Field Functions 
        bool hasProductCategory() const { return this->productCategory_ != nullptr;};
        void deleteProductCategory() { this->productCategory_ = nullptr;};
        inline string getProductCategory() const { DARABONBA_PTR_GET_DEFAULT(productCategory_, "") };
        inline Alarm& setProductCategory(string productCategory) { DARABONBA_PTR_SET_VALUE(productCategory_, productCategory) };


        // prometheus Field Functions 
        bool hasPrometheus() const { return this->prometheus_ != nullptr;};
        void deletePrometheus() { this->prometheus_ = nullptr;};
        inline const Alarm::Prometheus & getPrometheus() const { DARABONBA_PTR_GET_CONST(prometheus_, Alarm::Prometheus) };
        inline Alarm::Prometheus getPrometheus() { DARABONBA_PTR_GET(prometheus_, Alarm::Prometheus) };
        inline Alarm& setPrometheus(const Alarm::Prometheus & prometheus) { DARABONBA_PTR_SET_VALUE(prometheus_, prometheus) };
        inline Alarm& setPrometheus(Alarm::Prometheus && prometheus) { DARABONBA_PTR_SET_RVALUE(prometheus_, prometheus) };


        // resources Field Functions 
        bool hasResources() const { return this->resources_ != nullptr;};
        void deleteResources() { this->resources_ = nullptr;};
        inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
        inline Alarm& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Alarm& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Alarm& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // silenceTime Field Functions 
        bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
        void deleteSilenceTime() { this->silenceTime_ = nullptr;};
        inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
        inline Alarm& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Alarm& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // webhook Field Functions 
        bool hasWebhook() const { return this->webhook_ != nullptr;};
        void deleteWebhook() { this->webhook_ = nullptr;};
        inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
        inline Alarm& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


      protected:
        // The status of the alert rule. Valid values:
        // 
        // *   OK: The alert rule has no active alerts.
        // *   ALARM: The alert rule has active alerts.
        // *   INSUFFICIENT_DATA: No data is available.
        shared_ptr<string> alertState_ {};
        // The trigger conditions for multiple metrics.
        // 
        // >  The trigger conditions for a single metric and multiple metrics are mutually exclusive. You cannot specify trigger conditions for a single metric and multiple metrics at the same time.
        shared_ptr<Alarm::CompositeExpression> compositeExpression_ {};
        // The alert contact group.
        shared_ptr<string> contactGroups_ {};
        // The dimensions of the alert rule.
        shared_ptr<string> dimensions_ {};
        // The time period during which the alert rule is effective.
        shared_ptr<string> effectiveInterval_ {};
        // Indicates whether the alert rule is enabled. Valid values:
        // 
        // *   true: The alert rule is enabled.
        // *   false: The alert rule is disabled.
        shared_ptr<bool> enableState_ {};
        // The conditions for triggering different levels of alerts.
        shared_ptr<Alarm::Escalations> escalations_ {};
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<string> gmtUpdate_ {};
        // The ID of the application group.
        shared_ptr<string> groupId_ {};
        // The name of the application group.
        // 
        // >  If the alert rule is associated with an application group, the name of the application group is returned in this parameter.
        shared_ptr<string> groupName_ {};
        // The tags of the alert rule.
        shared_ptr<Alarm::Labels> labels_ {};
        // The subject of the alert notification email.
        shared_ptr<string> mailSubject_ {};
        // The name of the metric.
        shared_ptr<string> metricName_ {};
        // The namespace of the cloud service.
        shared_ptr<string> namespace_ {};
        // The method that is used to handle alerts when no monitoring data is found. Valid values:
        // 
        // *   KEEP_LAST_STATE (default value): No operation is performed.
        // *   INSUFFICIENT_DATA: An alert whose content is "Insufficient data" is triggered.
        // *   OK: The status is considered normal.
        shared_ptr<string> noDataPolicy_ {};
        // The time period during which the alert rule is ineffective.
        shared_ptr<string> noEffectiveInterval_ {};
        // The statistical period.
        shared_ptr<string> period_ {};
        shared_ptr<string> productCategory_ {};
        // The Prometheus alerts.
        // 
        // >  This parameter is required only if you create a Prometheus alert rule for Hybrid Cloud Monitoring.
        shared_ptr<Alarm::Prometheus> prometheus_ {};
        // The resources that are associated with the alert rule.
        shared_ptr<string> resources_ {};
        // The ID of the alert rule.
        shared_ptr<string> ruleId_ {};
        // The name of the alert rule.
        shared_ptr<string> ruleName_ {};
        // The mute period during which new alert notifications are not sent even if the trigger conditions are met. Unit: seconds. Default value: 86400. Minimum value: 3600.
        // 
        // Only one alert is reported during each mute period even if the metric value consecutively exceeds the alert rule threshold several times.
        shared_ptr<int32_t> silenceTime_ {};
        // The type of the alert rule. Valid value: METRIC. This value indicates an alert rule for time series metrics.
        shared_ptr<string> sourceType_ {};
        // The callback URL. CloudMonitor pushes an alert notification to the specified callback URL by sending an HTTP POST request. Only the HTTP protocol is supported.
        shared_ptr<string> webhook_ {};
      };

      virtual bool empty() const override { return this->alarm_ == nullptr; };
      // alarm Field Functions 
      bool hasAlarm() const { return this->alarm_ != nullptr;};
      void deleteAlarm() { this->alarm_ = nullptr;};
      inline const vector<Alarms::Alarm> & getAlarm() const { DARABONBA_PTR_GET_CONST(alarm_, vector<Alarms::Alarm>) };
      inline vector<Alarms::Alarm> getAlarm() { DARABONBA_PTR_GET(alarm_, vector<Alarms::Alarm>) };
      inline Alarms& setAlarm(const vector<Alarms::Alarm> & alarm) { DARABONBA_PTR_SET_VALUE(alarm_, alarm) };
      inline Alarms& setAlarm(vector<Alarms::Alarm> && alarm) { DARABONBA_PTR_SET_RVALUE(alarm_, alarm) };


    protected:
      shared_ptr<vector<Alarms::Alarm>> alarm_ {};
    };

    virtual bool empty() const override { return this->alarms_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // alarms Field Functions 
    bool hasAlarms() const { return this->alarms_ != nullptr;};
    void deleteAlarms() { this->alarms_ = nullptr;};
    inline const DescribeMetricRuleListResponseBody::Alarms & getAlarms() const { DARABONBA_PTR_GET_CONST(alarms_, DescribeMetricRuleListResponseBody::Alarms) };
    inline DescribeMetricRuleListResponseBody::Alarms getAlarms() { DARABONBA_PTR_GET(alarms_, DescribeMetricRuleListResponseBody::Alarms) };
    inline DescribeMetricRuleListResponseBody& setAlarms(const DescribeMetricRuleListResponseBody::Alarms & alarms) { DARABONBA_PTR_SET_VALUE(alarms_, alarms) };
    inline DescribeMetricRuleListResponseBody& setAlarms(DescribeMetricRuleListResponseBody::Alarms && alarms) { DARABONBA_PTR_SET_RVALUE(alarms_, alarms) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeMetricRuleListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMetricRuleListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricRuleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMetricRuleListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline DescribeMetricRuleListResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The queried alert rules.
    shared_ptr<DescribeMetricRuleListResponseBody::Alarms> alarms_ {};
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call is successful.
    shared_ptr<int32_t> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    shared_ptr<bool> success_ {};
    // The total number of returned entries.
    shared_ptr<string> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
