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
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
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
      DARABONBA_PTR_TO_JSON(SendOK, sendOK_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(CompositeExpression, compositeExpressionShrink_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
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
      DARABONBA_PTR_FROM_JSON(SendOK, sendOK_);
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
      // The label key.
      shared_ptr<string> key_ {};
      // The label value.
      // 
      // > The label value supports template parameters. The template parameters are replaced with the actual label values.
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
        // The comparison operator for the Warn-level threshold. Valid values:
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
        // - GreaterThanLastPeriod: greater than the value in the previous period.
        // - LessThanLastPeriod: less than the value in the previous period.
        // 
        // > You must configure at least one of the following alert levels: Critical, Warn, and Info. For the configured alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
        shared_ptr<string> comparisonOperator_ {};
        // The statistical method for the Warn-level alert.
        // 
        // The valid values of this parameter are determined by the `Statistics` column corresponding to the `MetricName` of the specified Alibaba Cloud service. Examples: Maximum, Minimum, and Average. For more information about how to obtain the valid values for this parameter, see [Alibaba Cloud service metrics](https://help.aliyun.com/document_detail/163515.html).
        // 
        // > You must configure at least one of the following alert levels: Critical, Warn, and Info. For the configured alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
        shared_ptr<string> statistics_ {};
        // The threshold for the Warn-level alert.
        // > You must configure at least one of the following alert levels: Critical, Warn, and Info. For the configured alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
        shared_ptr<string> threshold_ {};
        // The number of retries for the Warn-level alert.
        // 
        // > You must configure at least one of the following alert levels: Critical, Warn, and Info. For the configured alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
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
        // The comparison operator for the Info-level threshold. Valid values:
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
        // - GreaterThanLastPeriod: greater than the value in the previous period.
        // - LessThanLastPeriod: less than the value in the previous period.
        // 
        // > You must configure at least one of the following alert levels: Critical, Warn, and Info. For the configured alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
        shared_ptr<string> comparisonOperator_ {};
        // The statistical method for the Info-level alert.
        // 
        // The valid values of this parameter are determined by the `Statistics` column corresponding to the `MetricName` of the specified Alibaba Cloud service. Examples: Maximum, Minimum, and Average. For more information about how to obtain the valid values for this parameter, see [Alibaba Cloud service metrics](https://help.aliyun.com/document_detail/163515.html).
        // 
        // > You must configure at least one of the following alert levels: Critical, Warn, and Info. For the configured alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
        shared_ptr<string> statistics_ {};
        // The threshold for the Info-level alert.
        // 
        // > You must configure at least one of the following alert levels: Critical, Warn, and Info. For the configured alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
        shared_ptr<string> threshold_ {};
        // The number of retries for the Info-level alert.
        // 
        // > You must configure at least one of the following alert levels: Critical, Warn, and Info. For the configured alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
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
        // The comparison operator for the Critical-level threshold. Valid values:
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
        // - GreaterThanLastPeriod: greater than the value in the previous period.
        // - LessThanLastPeriod: less than the value in the previous period.
        // 
        // > You must configure at least one of the following alert levels: Critical, Warn, and Info. For the configured alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
        shared_ptr<string> comparisonOperator_ {};
        // The statistical method for the Critical-level alert.
        // 
        // The valid values of this parameter are determined by the `Statistics` column corresponding to the `MetricName` of the specified Alibaba Cloud service. Examples: Maximum, Minimum, and Average. For more information about how to obtain the valid values for this parameter, see [Alibaba Cloud service metrics](https://help.aliyun.com/document_detail/163515.html).
        // 
        // > You must configure at least one of the following alert levels: Critical, Warn, and Info. For the configured alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
        shared_ptr<string> statistics_ {};
        // The threshold for the Critical-level alert.
        // 
        // 
        // > You must configure at least one of the following alert levels: Critical, Warn, and Info. For the configured alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
        shared_ptr<string> threshold_ {};
        // The number of retries for the Critical-level alert.
        // 
        // > You must configure at least one of the following alert levels: Critical, Warn, and Info. For the configured alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
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
        && this->compositeExpressionShrink_ == nullptr && this->contactGroups_ == nullptr && this->dryRun_ == nullptr && this->effectiveInterval_ == nullptr && this->emailSubject_ == nullptr
        && this->interval_ == nullptr && this->labels_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->noDataPolicy_ == nullptr
        && this->noEffectiveInterval_ == nullptr && this->period_ == nullptr && this->prometheusShrink_ == nullptr && this->resources_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->sendOK_ == nullptr && this->silenceTime_ == nullptr && this->webhook_ == nullptr; };
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


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline PutResourceMetricRuleShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


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


    // sendOK Field Functions 
    bool hasSendOK() const { return this->sendOK_ != nullptr;};
    void deleteSendOK() { this->sendOK_ = nullptr;};
    inline bool getSendOK() const { DARABONBA_PTR_GET_DEFAULT(sendOK_, false) };
    inline PutResourceMetricRuleShrinkRequest& setSendOK(bool sendOK) { DARABONBA_PTR_SET_VALUE(sendOK_, sendOK) };


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
    // The alert conditions for multiple metrics.
    // 
    // > Single-metric and multi-metric alert conditions are mutually exclusive and cannot be configured at the same time.
    shared_ptr<string> compositeExpressionShrink_ {};
    // The alert contact group. Alert notifications are sent to the alert contacts in this alert contact group.
    // 
    // > An alert contact group contains one or more alert contacts. For more information about how to create alert contacts and alert contact groups, see [PutContact](https://help.aliyun.com/document_detail/114923.html) and [PutContactGroup](https://help.aliyun.com/document_detail/114929.html).
    // 
    // This parameter is required.
    shared_ptr<string> contactGroups_ {};
    // Specifies whether to only precheck the request. Valid values:
    // - **true**: The request is prechecked but not executed. The system checks whether the required parameters are specified, the request format is valid, and the service limits are met. If the request fails the precheck, the corresponding error is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // - **false** (default): The request is sent and executed. If the request passes the precheck, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The effective period of the alert rule.
    shared_ptr<string> effectiveInterval_ {};
    // The subject of the alert email.
    shared_ptr<string> emailSubject_ {};
    // The trigger epoch of the alert rule. Unit: seconds.
    // 
    // > For more information about how to query the statistical epoch of a metric, see [Alibaba Cloud service metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> interval_ {};
    // The labels that are added to the metric and displayed in the alert notification when the metric meets the alert condition and an alert is triggered.
    // 
    // > This feature is the same as the Label feature in Prometheus alerts.
    shared_ptr<vector<PutResourceMetricRuleShrinkRequest::Labels>> labels_ {};
    // The name of the metric. For more information about how to query the name of a metric, see [Alibaba Cloud service metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // > When you create a Prometheus alert rule for CloudMonitor, this parameter specifies the name of the metric repository. For more information about how to obtain the name of a metric repository, see [DescribeHybridMonitorNamespaceList](https://help.aliyun.com/document_detail/428880.html).
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // The data namespace of the Alibaba Cloud service. For more information about how to query the data namespace of an Alibaba Cloud service, see [Alibaba Cloud service metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // > When you create a Prometheus alert rule for CloudMonitor, you must configure this parameter to `acs_prometheus`.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The action to take when no monitoring data is found. Valid values:
    // 
    // - KEEP_LAST_STATE (default): No action is taken.
    // - INSUFFICIENT_DATA: The alert content indicates that no data is found.
    // - OK: The status is normal.
    shared_ptr<string> noDataPolicy_ {};
    // The time range during which the alert rule is inactive.
    shared_ptr<string> noEffectiveInterval_ {};
    // The statistical epoch of the metric. Unit: seconds. The default value is the original reporting epoch of the metric.
    // 
    // > For more information about how to query the statistical epoch of a metric, see [Alibaba Cloud service metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> period_ {};
    // The Prometheus alert.
    // 
    // > You need to configure this parameter only when you create a Prometheus alert rule for Hybrid Cloud Monitoring.
    shared_ptr<string> prometheusShrink_ {};
    // The resource information. Examples: `[{"instanceId":"i-uf6j91r34rnwawoo****"}]` and `[{"userId":"100931896542****"}]`.
    // 
    // For more information about the dimensions supported by resource information, see [Alibaba Cloud service metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> resources_ {};
    // The ID of the alert rule.
    // 
    // You can enter a new alert rule ID or use an existing alert rule ID in CloudMonitor. For more information about how to query the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // > Entering a new alert rule ID indicates that a threshold-based alert rule is created.
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
    // The name of the alert rule.
    // 
    // You can enter a new alert rule name or use an existing alert rule name in CloudMonitor. For more information about how to query the name of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // > Entering a new alert rule name indicates that a threshold-based alert rule is created.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // Specifies whether to send a recovery notification.
    shared_ptr<bool> sendOK_ {};
    // The mute epoch. Unit: seconds. Default value: 86400.
    // 
    // > The mute epoch refers to the interval at which to send an alert notification again if the alert does not recover to Normal after it is triggered.
    shared_ptr<int32_t> silenceTime_ {};
    // The webhook URL to which a POST request is sent when an alert is triggered.
    shared_ptr<string> webhook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
