// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODY_HPP_
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
  class DescribeActiveMetricRuleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveMetricRuleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertList, alertList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveMetricRuleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertList, alertList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeActiveMetricRuleListResponseBody() = default ;
    DescribeActiveMetricRuleListResponseBody(const DescribeActiveMetricRuleListResponseBody &) = default ;
    DescribeActiveMetricRuleListResponseBody(DescribeActiveMetricRuleListResponseBody &&) = default ;
    DescribeActiveMetricRuleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveMetricRuleListResponseBody() = default ;
    DescribeActiveMetricRuleListResponseBody& operator=(const DescribeActiveMetricRuleListResponseBody &) = default ;
    DescribeActiveMetricRuleListResponseBody& operator=(DescribeActiveMetricRuleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Datapoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datapoints& obj) { 
        DARABONBA_PTR_TO_JSON(Alarm, alarm_);
      };
      friend void from_json(const Darabonba::Json& j, Datapoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Alarm, alarm_);
      };
      Datapoints() = default ;
      Datapoints(const Datapoints &) = default ;
      Datapoints(Datapoints &&) = default ;
      Datapoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datapoints() = default ;
      Datapoints& operator=(const Datapoints &) = default ;
      Datapoints& operator=(Datapoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Alarm : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Alarm& obj) { 
          DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Statistics, statistics_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
          DARABONBA_PTR_TO_JSON(Webhook, webhook_);
        };
        friend void from_json(const Darabonba::Json& j, Alarm& obj) { 
          DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
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
        virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->contactGroups_ == nullptr && this->enable_ == nullptr && this->endTime_ == nullptr && this->evaluationCount_ == nullptr && this->metricName_ == nullptr
        && this->namespace_ == nullptr && this->period_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->silenceTime_ == nullptr
        && this->startTime_ == nullptr && this->state_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->webhook_ == nullptr; };
        // comparisonOperator Field Functions 
        bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
        void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
        inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
        inline Alarm& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


        // contactGroups Field Functions 
        bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
        void deleteContactGroups() { this->contactGroups_ = nullptr;};
        inline string getContactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
        inline Alarm& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
        inline Alarm& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Alarm& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // evaluationCount Field Functions 
        bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
        void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
        inline string getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, "") };
        inline Alarm& setEvaluationCount(string evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


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


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
        inline Alarm& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


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
        inline string getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, "") };
        inline Alarm& setSilenceTime(string silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Alarm& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Alarm& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
        inline Alarm& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
        inline Alarm& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


        // webhook Field Functions 
        bool hasWebhook() const { return this->webhook_ != nullptr;};
        void deleteWebhook() { this->webhook_ = nullptr;};
        inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
        inline Alarm& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


      protected:
        // The comparison operator that is used in the alert rule. Valid values:
        // 
        // *   `>`
        // *   `<`
        // *   `>=`
        // *   `<=`
        // *   `=`
        // *   `=`
        shared_ptr<string> comparisonOperator_ {};
        // The alert contact group.
        shared_ptr<string> contactGroups_ {};
        // Indicates whether the alert rule is enabled. Valid values:
        // 
        // *   true: The alert rule is enabled.
        // *   false: The alert rule is disabled.
        shared_ptr<string> enable_ {};
        // The end of the time period during which the alert rule is effective.
        // 
        // Unit: hours. For example, the value 23 indicates `23:59:59`.
        shared_ptr<string> endTime_ {};
        // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
        shared_ptr<string> evaluationCount_ {};
        // The metric name.
        shared_ptr<string> metricName_ {};
        // The namespace of the cloud service.
        shared_ptr<string> namespace_ {};
        // The aggregation period of monitoring data.
        // 
        // Unit: seconds.
        shared_ptr<string> period_ {};
        // The ID of the alert rule.
        shared_ptr<string> ruleId_ {};
        // The name of the alert rule.
        shared_ptr<string> ruleName_ {};
        // The mute period during which new alerts are not sent even if the trigger conditions are met.
        // 
        // Unit: seconds.
        shared_ptr<string> silenceTime_ {};
        // The beginning of the time period during which the alert rule is effective.
        // 
        // Unit: hours. For example, the value 00 indicates `00:00:00`.
        shared_ptr<string> startTime_ {};
        // Indicates whether the alert rule is enabled.
        shared_ptr<string> state_ {};
        // The statistical method.
        shared_ptr<string> statistics_ {};
        // The alert threshold.
        shared_ptr<string> threshold_ {};
        // The callback URL.
        shared_ptr<string> webhook_ {};
      };

      virtual bool empty() const override { return this->alarm_ == nullptr; };
      // alarm Field Functions 
      bool hasAlarm() const { return this->alarm_ != nullptr;};
      void deleteAlarm() { this->alarm_ = nullptr;};
      inline const vector<Datapoints::Alarm> & getAlarm() const { DARABONBA_PTR_GET_CONST(alarm_, vector<Datapoints::Alarm>) };
      inline vector<Datapoints::Alarm> getAlarm() { DARABONBA_PTR_GET(alarm_, vector<Datapoints::Alarm>) };
      inline Datapoints& setAlarm(const vector<Datapoints::Alarm> & alarm) { DARABONBA_PTR_SET_VALUE(alarm_, alarm) };
      inline Datapoints& setAlarm(vector<Datapoints::Alarm> && alarm) { DARABONBA_PTR_SET_RVALUE(alarm_, alarm) };


    protected:
      shared_ptr<vector<Datapoints::Alarm>> alarm_ {};
    };

    class AlertList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertList& obj) { 
        DARABONBA_PTR_TO_JSON(Alert, alert_);
      };
      friend void from_json(const Darabonba::Json& j, AlertList& obj) { 
        DARABONBA_PTR_FROM_JSON(Alert, alert_);
      };
      AlertList() = default ;
      AlertList(const AlertList &) = default ;
      AlertList(AlertList &&) = default ;
      AlertList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertList() = default ;
      AlertList& operator=(const AlertList &) = default ;
      AlertList& operator=(AlertList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Alert : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Alert& obj) { 
          DARABONBA_PTR_TO_JSON(AlertState, alertState_);
          DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
          DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
          DARABONBA_PTR_TO_JSON(EnableState, enableState_);
          DARABONBA_PTR_TO_JSON(Escalations, escalations_);
          DARABONBA_PTR_TO_JSON(MailSubject, mailSubject_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(Resources, resources_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
          DARABONBA_PTR_TO_JSON(Webhook, webhook_);
        };
        friend void from_json(const Darabonba::Json& j, Alert& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertState, alertState_);
          DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
          DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
          DARABONBA_PTR_FROM_JSON(EnableState, enableState_);
          DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
          DARABONBA_PTR_FROM_JSON(MailSubject, mailSubject_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(Resources, resources_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
          DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
        };
        Alert() = default ;
        Alert(const Alert &) = default ;
        Alert(Alert &&) = default ;
        Alert(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Alert() = default ;
        Alert& operator=(const Alert &) = default ;
        Alert& operator=(Alert &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
            inline string getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, "") };
            inline Warn& setTimes(string times) { DARABONBA_PTR_SET_VALUE(times_, times) };


          protected:
            // The operator that is used to compare the metric value with the threshold for Warn-level alerts. Valid values:
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
            // The statistical methods for Warn-level alerts.
            shared_ptr<string> statistics_ {};
            // The threshold for Warn-level alerts.
            shared_ptr<string> threshold_ {};
            // The consecutive number of times
            // 
            // for which the metric value meets the alert condition before a Warn-level alert is triggered.
            shared_ptr<string> times_ {};
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
            inline string getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, "") };
            inline Info& setTimes(string times) { DARABONBA_PTR_SET_VALUE(times_, times) };


          protected:
            // The operator that is used to compare the metric value with the threshold for Info-level alerts. Valid values:
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
            // The statistical methods for Info-level alerts.
            shared_ptr<string> statistics_ {};
            // The threshold for Info-level alerts.
            shared_ptr<string> threshold_ {};
            // The consecutive number of times
            // 
            // for which the metric value meets the alert condition before an Info-level alert is triggered.
            shared_ptr<string> times_ {};
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
            inline string getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, "") };
            inline Critical& setTimes(string times) { DARABONBA_PTR_SET_VALUE(times_, times) };


          protected:
            // The operator that is used to compare the metric value with the threshold for Critical-level alerts. Valid values:
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
            // The statistical methods for Critical-level alerts.
            shared_ptr<string> statistics_ {};
            // The threshold for Critical-level alerts.
            shared_ptr<string> threshold_ {};
            // The consecutive number of times for which the metric value meets the alert condition before a Critical-level alert is triggered.
            shared_ptr<string> times_ {};
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
          // The trigger condition for Critical-level alerts.
          shared_ptr<Escalations::Critical> critical_ {};
          // The conditions for triggering Info-level alerts.
          shared_ptr<Escalations::Info> info_ {};
          // The conditions for triggering Warn-level alerts.
          shared_ptr<Escalations::Warn> warn_ {};
        };

        virtual bool empty() const override { return this->alertState_ == nullptr
        && this->contactGroups_ == nullptr && this->dimensions_ == nullptr && this->effectiveInterval_ == nullptr && this->enableState_ == nullptr && this->escalations_ == nullptr
        && this->mailSubject_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->noEffectiveInterval_ == nullptr && this->period_ == nullptr
        && this->resources_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->silenceTime_ == nullptr && this->webhook_ == nullptr; };
        // alertState Field Functions 
        bool hasAlertState() const { return this->alertState_ != nullptr;};
        void deleteAlertState() { this->alertState_ = nullptr;};
        inline string getAlertState() const { DARABONBA_PTR_GET_DEFAULT(alertState_, "") };
        inline Alert& setAlertState(string alertState) { DARABONBA_PTR_SET_VALUE(alertState_, alertState) };


        // contactGroups Field Functions 
        bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
        void deleteContactGroups() { this->contactGroups_ = nullptr;};
        inline string getContactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
        inline Alert& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


        // dimensions Field Functions 
        bool hasDimensions() const { return this->dimensions_ != nullptr;};
        void deleteDimensions() { this->dimensions_ = nullptr;};
        inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
        inline Alert& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


        // effectiveInterval Field Functions 
        bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
        void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
        inline string getEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
        inline Alert& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


        // enableState Field Functions 
        bool hasEnableState() const { return this->enableState_ != nullptr;};
        void deleteEnableState() { this->enableState_ = nullptr;};
        inline bool getEnableState() const { DARABONBA_PTR_GET_DEFAULT(enableState_, false) };
        inline Alert& setEnableState(bool enableState) { DARABONBA_PTR_SET_VALUE(enableState_, enableState) };


        // escalations Field Functions 
        bool hasEscalations() const { return this->escalations_ != nullptr;};
        void deleteEscalations() { this->escalations_ = nullptr;};
        inline const Alert::Escalations & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, Alert::Escalations) };
        inline Alert::Escalations getEscalations() { DARABONBA_PTR_GET(escalations_, Alert::Escalations) };
        inline Alert& setEscalations(const Alert::Escalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
        inline Alert& setEscalations(Alert::Escalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


        // mailSubject Field Functions 
        bool hasMailSubject() const { return this->mailSubject_ != nullptr;};
        void deleteMailSubject() { this->mailSubject_ = nullptr;};
        inline string getMailSubject() const { DARABONBA_PTR_GET_DEFAULT(mailSubject_, "") };
        inline Alert& setMailSubject(string mailSubject) { DARABONBA_PTR_SET_VALUE(mailSubject_, mailSubject) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline Alert& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Alert& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // noEffectiveInterval Field Functions 
        bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
        void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
        inline string getNoEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
        inline Alert& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
        inline Alert& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // resources Field Functions 
        bool hasResources() const { return this->resources_ != nullptr;};
        void deleteResources() { this->resources_ = nullptr;};
        inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
        inline Alert& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Alert& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Alert& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // silenceTime Field Functions 
        bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
        void deleteSilenceTime() { this->silenceTime_ = nullptr;};
        inline string getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, "") };
        inline Alert& setSilenceTime(string silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


        // webhook Field Functions 
        bool hasWebhook() const { return this->webhook_ != nullptr;};
        void deleteWebhook() { this->webhook_ = nullptr;};
        inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
        inline Alert& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


      protected:
        // The status of the alert rule. Valid values:
        // 
        // *   OK: The alert rule has no active alerts.
        // *   ALARM: The alert rule has active alerts.
        // *   INSUFFICIENT_DATA: No data is found.
        shared_ptr<string> alertState_ {};
        // The alert contact group.
        shared_ptr<string> contactGroups_ {};
        // The monitoring data of the specified resource.
        shared_ptr<string> dimensions_ {};
        // The time period during which the alert rule is effective.
        shared_ptr<string> effectiveInterval_ {};
        // Indicates whether the alert rule is enabled. Valid values:
        // 
        // *   true: The alert rule is enabled.
        // *   false: The alert rule is disabled.
        shared_ptr<bool> enableState_ {};
        // The conditions for triggering different levels of alerts.
        shared_ptr<Alert::Escalations> escalations_ {};
        // The subject of the alert notification email.
        shared_ptr<string> mailSubject_ {};
        // The name of the metric.
        shared_ptr<string> metricName_ {};
        // The namespace of the Alibaba Cloud service.
        shared_ptr<string> namespace_ {};
        // The time period during which the alert rule is ineffective.
        shared_ptr<string> noEffectiveInterval_ {};
        // The aggregation period of monitoring data.
        // 
        // Unit: seconds.
        shared_ptr<string> period_ {};
        // The resources that are associated with the alert rule.
        shared_ptr<string> resources_ {};
        // The ID of the alert rule.
        shared_ptr<string> ruleId_ {};
        // The name of the alert rule.
        shared_ptr<string> ruleName_ {};
        // The mute period during which new alerts are not sent even if the trigger conditions are met.
        // 
        // Unit: seconds.
        shared_ptr<string> silenceTime_ {};
        // The callback URL.
        shared_ptr<string> webhook_ {};
      };

      virtual bool empty() const override { return this->alert_ == nullptr; };
      // alert Field Functions 
      bool hasAlert() const { return this->alert_ != nullptr;};
      void deleteAlert() { this->alert_ = nullptr;};
      inline const vector<AlertList::Alert> & getAlert() const { DARABONBA_PTR_GET_CONST(alert_, vector<AlertList::Alert>) };
      inline vector<AlertList::Alert> getAlert() { DARABONBA_PTR_GET(alert_, vector<AlertList::Alert>) };
      inline AlertList& setAlert(const vector<AlertList::Alert> & alert) { DARABONBA_PTR_SET_VALUE(alert_, alert) };
      inline AlertList& setAlert(vector<AlertList::Alert> && alert) { DARABONBA_PTR_SET_RVALUE(alert_, alert) };


    protected:
      shared_ptr<vector<AlertList::Alert>> alert_ {};
    };

    virtual bool empty() const override { return this->alertList_ == nullptr
        && this->code_ == nullptr && this->datapoints_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // alertList Field Functions 
    bool hasAlertList() const { return this->alertList_ != nullptr;};
    void deleteAlertList() { this->alertList_ = nullptr;};
    inline const DescribeActiveMetricRuleListResponseBody::AlertList & getAlertList() const { DARABONBA_PTR_GET_CONST(alertList_, DescribeActiveMetricRuleListResponseBody::AlertList) };
    inline DescribeActiveMetricRuleListResponseBody::AlertList getAlertList() { DARABONBA_PTR_GET(alertList_, DescribeActiveMetricRuleListResponseBody::AlertList) };
    inline DescribeActiveMetricRuleListResponseBody& setAlertList(const DescribeActiveMetricRuleListResponseBody::AlertList & alertList) { DARABONBA_PTR_SET_VALUE(alertList_, alertList) };
    inline DescribeActiveMetricRuleListResponseBody& setAlertList(DescribeActiveMetricRuleListResponseBody::AlertList && alertList) { DARABONBA_PTR_SET_RVALUE(alertList_, alertList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeActiveMetricRuleListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // datapoints Field Functions 
    bool hasDatapoints() const { return this->datapoints_ != nullptr;};
    void deleteDatapoints() { this->datapoints_ = nullptr;};
    inline const DescribeActiveMetricRuleListResponseBody::Datapoints & getDatapoints() const { DARABONBA_PTR_GET_CONST(datapoints_, DescribeActiveMetricRuleListResponseBody::Datapoints) };
    inline DescribeActiveMetricRuleListResponseBody::Datapoints getDatapoints() { DARABONBA_PTR_GET(datapoints_, DescribeActiveMetricRuleListResponseBody::Datapoints) };
    inline DescribeActiveMetricRuleListResponseBody& setDatapoints(const DescribeActiveMetricRuleListResponseBody::Datapoints & datapoints) { DARABONBA_PTR_SET_VALUE(datapoints_, datapoints) };
    inline DescribeActiveMetricRuleListResponseBody& setDatapoints(DescribeActiveMetricRuleListResponseBody::Datapoints && datapoints) { DARABONBA_PTR_SET_RVALUE(datapoints_, datapoints) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeActiveMetricRuleListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActiveMetricRuleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeActiveMetricRuleListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the alert rules. The result is in the same structure as that returned by the DescribeMetricRuleList operation.
    shared_ptr<DescribeActiveMetricRuleListResponseBody::AlertList> alertList_ {};
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The details of the alert rules.
    shared_ptr<DescribeActiveMetricRuleListResponseBody::Datapoints> datapoints_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
