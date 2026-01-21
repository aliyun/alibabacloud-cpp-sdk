// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESHRINKREQUEST_HPP_
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
  class PutResourceMetricRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(CompositeExpression, compositeExpressionShrink_);
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
      DARABONBA_PTR_TO_JSON(Prometheus, prometheusShrink_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(CompositeExpression, compositeExpressionShrink_);
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
      DARABONBA_PTR_FROM_JSON(Prometheus, prometheusShrink_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    PutResourceMetricRuleShrinkRequest() = default ;
    PutResourceMetricRuleShrinkRequest(const PutResourceMetricRuleShrinkRequest &) = default ;
    PutResourceMetricRuleShrinkRequest(PutResourceMetricRuleShrinkRequest &&) = default ;
    PutResourceMetricRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRuleShrinkRequest() = default ;
    PutResourceMetricRuleShrinkRequest& operator=(const PutResourceMetricRuleShrinkRequest &) = default ;
    PutResourceMetricRuleShrinkRequest& operator=(PutResourceMetricRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // >  You can use a template parameter to specify a tag value. CloudMonitor replaces the value of the template parameter with an actual tag value.
      shared_ptr<string> value_ {};
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
        // The operator that is used to compare the metric value with the threshold for Warn-level alerts. Valid value:
        // 
        // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
        // *   GreaterThanThreshold: greater than the threshold
        // *   LessThanOrEqualToThreshold: less than or equal to the threshold
        // *   LessThanThreshold: less than the threshold
        // *   NotEqualToThreshold: not equal to the threshold
        // *   EqualToThreshold: equal to the threshold
        // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
        // *   LessThanYesterday: less than the metric value at the same time yesterday
        // *   GreaterThanLastWeek: greater than the metric value at the same time last week
        // *   LessThanLastWeek: less than the metric value at the same time last week
        // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
        // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
        // 
        // >  You must select at least one of the Critical, Warn, and Info alert levels and specify the Statistics, ComparisonOperator, Threshold, and Times parameters for each alert level.
        shared_ptr<string> comparisonOperator_ {};
        // The statistical methods for Warn-level alerts.
        // 
        // The value of this parameter is determined by the `Statistics` column corresponding to the `MetricName` parameter of the specified cloud service. The value of this parameter can be Maximum, Minimum, or Average. For more information about how to obtain the value of this parameter, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
        // 
        // >  You must select at least one of the Critical, Warn, and Info alert levels and specify the Statistics, ComparisonOperator, Threshold, and Times parameters for each alert level.
        shared_ptr<string> statistics_ {};
        // The threshold for Warn-level alerts.
        // 
        // >  You must select at least one of the Critical, Warn, and Info alert levels and specify the Statistics, ComparisonOperator, Threshold, and Times parameters for each alert level.
        shared_ptr<string> threshold_ {};
        // The consecutive number of times for which the metric value meets the alert condition before a Warn-level alert is triggered.
        // 
        // >  You must select at least one of the Critical, Warn, and Info alert levels and specify the Statistics, ComparisonOperator, Threshold, and Times parameters for each alert level.
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
        // The operator that is used to compare the metric value with the threshold for Info-level alerts. Valid value:
        // 
        // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
        // *   GreaterThanThreshold: greater than the threshold
        // *   LessThanOrEqualToThreshold: less than or equal to the threshold
        // *   LessThanThreshold: less than the threshold
        // *   NotEqualToThreshold: not equal to the threshold
        // *   EqualToThreshold: equal to the threshold
        // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
        // *   LessThanYesterday: less than the metric value at the same time yesterday
        // *   GreaterThanLastWeek: greater than the metric value at the same time last week
        // *   LessThanLastWeek: less than the metric value at the same time last week
        // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
        // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
        // 
        // >  You must select at least one of the Critical, Warn, and Info alert levels and specify the Statistics, ComparisonOperator, Threshold, and Times parameters for each alert level.
        shared_ptr<string> comparisonOperator_ {};
        // The statistical methods for Info-level alerts.
        // 
        // The value of this parameter is determined by the `Statistics` column corresponding to the `MetricName` parameter of the specified cloud service. The value of this parameter can be Maximum, Minimum, or Average. For more information about how to obtain the value of this parameter, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
        // 
        // >  You must select at least one of the Critical, Warn, and Info alert levels and specify the Statistics, ComparisonOperator, Threshold, and Times parameters for each alert level.
        shared_ptr<string> statistics_ {};
        // The threshold for Info-level alerts.
        // 
        // >  You must select at least one of the Critical, Warn, and Info alert levels and specify the Statistics, ComparisonOperator, Threshold, and Times parameters for each alert level.
        shared_ptr<string> threshold_ {};
        // The consecutive number of times for which the metric value meets the alert condition before an Info-level alert is triggered.
        // 
        // >  You must select at least one of the Critical, Warn, and Info alert levels and specify the Statistics, ComparisonOperator, Threshold, and Times parameters for each alert level.
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
        // The operator that is used to compare the metric value with the threshold for Critical-level alerts. Valid value:
        // 
        // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
        // *   GreaterThanThreshold: greater than the threshold
        // *   LessThanOrEqualToThreshold: less than or equal to the threshold
        // *   LessThanThreshold: less than the threshold
        // *   NotEqualToThreshold: not equal to the threshold
        // *   EqualToThreshold: equal to the threshold
        // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
        // *   LessThanYesterday: less than the metric value at the same time yesterday
        // *   GreaterThanLastWeek: greater than the metric value at the same time last week
        // *   LessThanLastWeek: less than the metric value at the same time last week
        // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
        // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
        // 
        // >  You must select at least one of the Critical, Warn, and Info alert levels and specify the Statistics, ComparisonOperator, Threshold, and Times parameters for each alert level.
        shared_ptr<string> comparisonOperator_ {};
        // The statistical methods for Critical-level alerts.
        // 
        // The value of this parameter is determined by the `Statistics` column corresponding to the `MetricName` parameter of the specified cloud service. The value of this parameter can be Maximum, Minimum, or Average. For more information about how to obtain the value of this parameter, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
        // 
        // >  You must select at least one of the Critical, Warn, and Info alert levels and specify the Statistics, ComparisonOperator, Threshold, and Times parameters for each alert level.
        shared_ptr<string> statistics_ {};
        // The threshold for Critical-level alerts.
        // 
        // >  You must select at least one of the Critical, Warn, and Info alert levels and specify the Statistics, ComparisonOperator, Threshold, and Times parameters for each alert level.
        shared_ptr<string> threshold_ {};
        // The consecutive number of times for which the metric value meets the alert condition before a Critical-level alert is triggered.
        // 
        // >  You must select at least one of the Critical, Warn, and Info alert levels and specify the Statistics, ComparisonOperator, Threshold, and Times parameters for each alert level.
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
        && this->compositeExpressionShrink_ == nullptr && this->contactGroups_ == nullptr && this->effectiveInterval_ == nullptr && this->emailSubject_ == nullptr && this->interval_ == nullptr
        && this->labels_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->noDataPolicy_ == nullptr && this->noEffectiveInterval_ == nullptr
        && this->period_ == nullptr && this->prometheusShrink_ == nullptr && this->resources_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->silenceTime_ == nullptr && this->webhook_ == nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const PutResourceMetricRuleShrinkRequest::Escalations & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, PutResourceMetricRuleShrinkRequest::Escalations) };
    inline PutResourceMetricRuleShrinkRequest::Escalations getEscalations() { DARABONBA_PTR_GET(escalations_, PutResourceMetricRuleShrinkRequest::Escalations) };
    inline PutResourceMetricRuleShrinkRequest& setEscalations(const PutResourceMetricRuleShrinkRequest::Escalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline PutResourceMetricRuleShrinkRequest& setEscalations(PutResourceMetricRuleShrinkRequest::Escalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // compositeExpressionShrink Field Functions 
    bool hasCompositeExpressionShrink() const { return this->compositeExpressionShrink_ != nullptr;};
    void deleteCompositeExpressionShrink() { this->compositeExpressionShrink_ = nullptr;};
    inline string getCompositeExpressionShrink() const { DARABONBA_PTR_GET_DEFAULT(compositeExpressionShrink_, "") };
    inline PutResourceMetricRuleShrinkRequest& setCompositeExpressionShrink(string compositeExpressionShrink) { DARABONBA_PTR_SET_VALUE(compositeExpressionShrink_, compositeExpressionShrink) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string getContactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline PutResourceMetricRuleShrinkRequest& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string getEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline PutResourceMetricRuleShrinkRequest& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // emailSubject Field Functions 
    bool hasEmailSubject() const { return this->emailSubject_ != nullptr;};
    void deleteEmailSubject() { this->emailSubject_ = nullptr;};
    inline string getEmailSubject() const { DARABONBA_PTR_GET_DEFAULT(emailSubject_, "") };
    inline PutResourceMetricRuleShrinkRequest& setEmailSubject(string emailSubject) { DARABONBA_PTR_SET_VALUE(emailSubject_, emailSubject) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline PutResourceMetricRuleShrinkRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<PutResourceMetricRuleShrinkRequest::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<PutResourceMetricRuleShrinkRequest::Labels>) };
    inline vector<PutResourceMetricRuleShrinkRequest::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<PutResourceMetricRuleShrinkRequest::Labels>) };
    inline PutResourceMetricRuleShrinkRequest& setLabels(const vector<PutResourceMetricRuleShrinkRequest::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline PutResourceMetricRuleShrinkRequest& setLabels(vector<PutResourceMetricRuleShrinkRequest::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutResourceMetricRuleShrinkRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutResourceMetricRuleShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // noDataPolicy Field Functions 
    bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
    void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
    inline string getNoDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
    inline PutResourceMetricRuleShrinkRequest& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


    // noEffectiveInterval Field Functions 
    bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
    void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
    inline string getNoEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
    inline PutResourceMetricRuleShrinkRequest& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline PutResourceMetricRuleShrinkRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // prometheusShrink Field Functions 
    bool hasPrometheusShrink() const { return this->prometheusShrink_ != nullptr;};
    void deletePrometheusShrink() { this->prometheusShrink_ = nullptr;};
    inline string getPrometheusShrink() const { DARABONBA_PTR_GET_DEFAULT(prometheusShrink_, "") };
    inline PutResourceMetricRuleShrinkRequest& setPrometheusShrink(string prometheusShrink) { DARABONBA_PTR_SET_VALUE(prometheusShrink_, prometheusShrink) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline PutResourceMetricRuleShrinkRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutResourceMetricRuleShrinkRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutResourceMetricRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline PutResourceMetricRuleShrinkRequest& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline PutResourceMetricRuleShrinkRequest& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    shared_ptr<PutResourceMetricRuleShrinkRequest::Escalations> escalations_ {};
    // The trigger conditions for multiple metrics.
    // 
    // >  The trigger conditions for a single metric and multiple metrics are mutually exclusive. You cannot specify trigger conditions for a single metric and multiple metrics at the same time.
    shared_ptr<string> compositeExpressionShrink_ {};
    // The alert contact groups. Alert notifications are sent to the alert contacts in the alert contact group.
    // 
    // >  An alert contact group can contain one or more alert contacts. For information about how to create alert contacts and alert contact groups, see [PutContact](https://help.aliyun.com/document_detail/114923.html) and [PutContactGroup](https://help.aliyun.com/document_detail/114929.html).
    // 
    // This parameter is required.
    shared_ptr<string> contactGroups_ {};
    // The period of time during which the alert rule is effective.
    shared_ptr<string> effectiveInterval_ {};
    // The subject of the alert notification email.
    shared_ptr<string> emailSubject_ {};
    // The interval at which alerts are triggered based on the alert rule. Unit: seconds.
    // 
    // >  For more information about how to query the statistical periods of metrics, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> interval_ {};
    // If the metric meets the specified condition in the alert rule and CloudMonitor sends an alert notification, the tag is also written to the metric and displayed in the alert notification.
    // 
    // >  This parameter is equivalent to the Label parameter of Prometheus alerts.
    shared_ptr<vector<PutResourceMetricRuleShrinkRequest::Labels>> labels_ {};
    // The metric name. For more information about how to query metric names, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // >  If you create a Prometheus alert rule for Hybrid Cloud Monitoring, you must set this parameter to the name of the namespace. For more information about how to query the names of namespaces, see [DescribeHybridMonitorNamespaceList](https://help.aliyun.com/document_detail/428880.html).
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // The namespace of the cloud service. For more information about how to query the namespaces of cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // >  If you create a Prometheus alert rule for Hybrid Cloud Monitoring, you must set this parameter to `acs_prometheus`.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The method that is used to handle alerts when no monitoring data is found. Valid value:
    // 
    // *   KEEP_LAST_STATE (default): No operation is performed.
    // *   INSUFFICIENT_DATA: An alert whose content is "Insufficient data" is triggered.
    // *   OK: The status is considered normal.
    shared_ptr<string> noDataPolicy_ {};
    // The period of time during which the alert rule is ineffective.
    shared_ptr<string> noEffectiveInterval_ {};
    // The statistical period of the metric. Unit: seconds. The default value is the interval at which the monitoring data of the metric is collected.
    // 
    // >  For more information about how to query the statistical periods of metrics, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> period_ {};
    // Prometheus alerts.
    // 
    // >  This parameter is required only if you create a Prometheus alert rule for Hybrid Cloud Monitoring.
    shared_ptr<string> prometheusShrink_ {};
    // The resource information. Examples: `[{"instanceId":"i-uf6j91r34rnwawoo****"}]` and `[{"userId":"100931896542****"}]`.
    // 
    // For more information about the supported dimensions that are used to query resources, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> resources_ {};
    // The ID of the alert rule.
    // 
    // You can specify a new ID or the ID of an existing alert rule. For more information about how to query the IDs of alert rules, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // >  If you specify a new ID, a threshold-triggered alert rule is created.
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
    // The name of the alert rule.
    // 
    // You can specify a new name or the name of an existing alert rule. For more information about how to query the names of alert rules, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // >  If you specify a new name, a threshold-triggered alert rule is created.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The mute period during which new alert notifications are not sent even if the trigger conditions are met. Unit: seconds. Default value: 86400.
    // 
    // >  If an alert is not cleared after the mute period ends, CloudMonitor resends an alert notification.
    shared_ptr<int32_t> silenceTime_ {};
    // The callback URL to which a POST request is sent when an alert is triggered based on the alert rule.
    shared_ptr<string> webhook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
