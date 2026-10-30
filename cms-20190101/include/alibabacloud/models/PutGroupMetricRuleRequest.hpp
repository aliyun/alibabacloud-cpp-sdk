// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTGROUPMETRICRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTGROUPMETRICRULEREQUEST_HPP_
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
  class PutGroupMetricRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutGroupMetricRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_TO_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_TO_JSON(ExtraDimensionJson, extraDimensionJson_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, PutGroupMetricRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_FROM_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_FROM_JSON(ExtraDimensionJson, extraDimensionJson_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    PutGroupMetricRuleRequest() = default ;
    PutGroupMetricRuleRequest(const PutGroupMetricRuleRequest &) = default ;
    PutGroupMetricRuleRequest(PutGroupMetricRuleRequest &&) = default ;
    PutGroupMetricRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutGroupMetricRuleRequest() = default ;
    PutGroupMetricRuleRequest& operator=(const PutGroupMetricRuleRequest &) = default ;
    PutGroupMetricRuleRequest& operator=(PutGroupMetricRuleRequest &&) = default ;
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
      // The tag key of the alert rule.
      shared_ptr<string> key_ {};
      // The tag value of the alert rule.
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
        // The threshold comparison operator for Warn-level alerts. Valid values:
        // 
        // - GreaterThanOrEqualToThreshold: greater than or equal to the threshold.
        // - GreaterThanThreshold: greater than the threshold.
        // - LessThanOrEqualToThreshold: less than or equal to the threshold.
        // - LessThanThreshold: less than the threshold.
        // - NotEqualToThreshold: not equal to the threshold.
        // - GreaterThanYesterday: greater than the value at the same time yesterday.
        // - LessThanYesterday: less than the value at the same time yesterday.
        // - GreaterThanLastWeek: greater than the value at the same time last week.
        // - LessThanLastWeek: less than the value at the same time last week.
        // - GreaterThanLastPeriod: greater than the value in the last period.
        // - LessThanLastPeriod: less than the value in the last period.
        shared_ptr<string> comparisonOperator_ {};
        // The statistical method for Warn-level alerts. Separate multiple statistical methods with commas (,).
        // 
        // The valid values of this parameter are determined by the `Statistics` column corresponding to the `MetricName` of the specified Alibaba Cloud service. Examples: Maximum, Minimum, and Average. For information about how to obtain the valid values of this parameter, see [cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
        shared_ptr<string> statistics_ {};
        // The threshold for Warn-level alerts.
        shared_ptr<string> threshold_ {};
        // The number of retries for Warn-level alerts.
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
        // The threshold comparison operator for Info-level alerts. Valid values:
        // 
        // - GreaterThanOrEqualToThreshold: greater than or equal to the threshold.
        // - GreaterThanThreshold: greater than the threshold.
        // - LessThanOrEqualToThreshold: less than or equal to the threshold.
        // - LessThanThreshold: less than the threshold.
        // - NotEqualToThreshold: not equal to the threshold.
        // - GreaterThanYesterday: greater than the value at the same time yesterday.
        // - LessThanYesterday: less than the value at the same time yesterday.
        // - GreaterThanLastWeek: greater than the value at the same time last week.
        // - LessThanLastWeek: less than the value at the same time last week.
        // - GreaterThanLastPeriod: greater than the value in the last period.
        // - LessThanLastPeriod: less than the value in the last period.
        shared_ptr<string> comparisonOperator_ {};
        // The statistical method for Info-level alerts. Separate multiple statistical methods with commas (,).
        // 
        // The valid values of this parameter are determined by the `Statistics` column corresponding to the `MetricName` of the specified Alibaba Cloud service. Examples: Maximum, Minimum, and Average. For information about how to obtain the valid values of this parameter, see [cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
        shared_ptr<string> statistics_ {};
        // The threshold for Info-level alerts.
        shared_ptr<string> threshold_ {};
        // The number of retries for Info-level alerts.
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
        // The threshold comparison operator for Critical-level alerts. Valid values:
        // 
        // - GreaterThanOrEqualToThreshold: greater than or equal to the threshold.
        // - GreaterThanThreshold: greater than the threshold.
        // - LessThanOrEqualToThreshold: less than or equal to the threshold.
        // - LessThanThreshold: less than the threshold.
        // - NotEqualToThreshold: not equal to the threshold.
        // - GreaterThanYesterday: greater than the value at the same time yesterday.
        // - LessThanYesterday: less than the value at the same time yesterday.
        // - GreaterThanLastWeek: greater than the value at the same time last week.
        // - LessThanLastWeek: less than the value at the same time last week.
        // - GreaterThanLastPeriod: greater than the value in the last period.
        // - LessThanLastPeriod: less than the value in the last period.
        shared_ptr<string> comparisonOperator_ {};
        // The statistical method for Critical-level alerts. Separate multiple statistical methods with commas (,).
        // 
        // The valid values of this parameter are determined by the `Statistics` column corresponding to the `MetricName` of the specified Alibaba Cloud service. Examples: Maximum, Minimum, and Average. For information about how to obtain the valid values of this parameter, see [cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
        shared_ptr<string> statistics_ {};
        // The threshold for Critical-level alerts.
        shared_ptr<string> threshold_ {};
        // The number of retries for Critical-level alerts.
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
        && this->category_ == nullptr && this->contactGroups_ == nullptr && this->dimensions_ == nullptr && this->dryRun_ == nullptr && this->effectiveInterval_ == nullptr
        && this->emailSubject_ == nullptr && this->extraDimensionJson_ == nullptr && this->groupId_ == nullptr && this->interval_ == nullptr && this->labels_ == nullptr
        && this->metricName_ == nullptr && this->namespace_ == nullptr && this->noDataPolicy_ == nullptr && this->noEffectiveInterval_ == nullptr && this->options_ == nullptr
        && this->period_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->silenceTime_ == nullptr && this->webhook_ == nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const PutGroupMetricRuleRequest::Escalations & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, PutGroupMetricRuleRequest::Escalations) };
    inline PutGroupMetricRuleRequest::Escalations getEscalations() { DARABONBA_PTR_GET(escalations_, PutGroupMetricRuleRequest::Escalations) };
    inline PutGroupMetricRuleRequest& setEscalations(const PutGroupMetricRuleRequest::Escalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline PutGroupMetricRuleRequest& setEscalations(PutGroupMetricRuleRequest::Escalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline PutGroupMetricRuleRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string getContactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline PutGroupMetricRuleRequest& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline PutGroupMetricRuleRequest& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline PutGroupMetricRuleRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string getEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline PutGroupMetricRuleRequest& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // emailSubject Field Functions 
    bool hasEmailSubject() const { return this->emailSubject_ != nullptr;};
    void deleteEmailSubject() { this->emailSubject_ = nullptr;};
    inline string getEmailSubject() const { DARABONBA_PTR_GET_DEFAULT(emailSubject_, "") };
    inline PutGroupMetricRuleRequest& setEmailSubject(string emailSubject) { DARABONBA_PTR_SET_VALUE(emailSubject_, emailSubject) };


    // extraDimensionJson Field Functions 
    bool hasExtraDimensionJson() const { return this->extraDimensionJson_ != nullptr;};
    void deleteExtraDimensionJson() { this->extraDimensionJson_ = nullptr;};
    inline string getExtraDimensionJson() const { DARABONBA_PTR_GET_DEFAULT(extraDimensionJson_, "") };
    inline PutGroupMetricRuleRequest& setExtraDimensionJson(string extraDimensionJson) { DARABONBA_PTR_SET_VALUE(extraDimensionJson_, extraDimensionJson) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline PutGroupMetricRuleRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline PutGroupMetricRuleRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<PutGroupMetricRuleRequest::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<PutGroupMetricRuleRequest::Labels>) };
    inline vector<PutGroupMetricRuleRequest::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<PutGroupMetricRuleRequest::Labels>) };
    inline PutGroupMetricRuleRequest& setLabels(const vector<PutGroupMetricRuleRequest::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline PutGroupMetricRuleRequest& setLabels(vector<PutGroupMetricRuleRequest::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutGroupMetricRuleRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutGroupMetricRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // noDataPolicy Field Functions 
    bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
    void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
    inline string getNoDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
    inline PutGroupMetricRuleRequest& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


    // noEffectiveInterval Field Functions 
    bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
    void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
    inline string getNoEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
    inline PutGroupMetricRuleRequest& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline PutGroupMetricRuleRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline PutGroupMetricRuleRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutGroupMetricRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutGroupMetricRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline PutGroupMetricRuleRequest& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline PutGroupMetricRuleRequest& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    shared_ptr<PutGroupMetricRuleRequest::Escalations> escalations_ {};
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // For information about how to obtain the abbreviation of an Alibaba Cloud service name, see the `metricCategory` field in the `Labels` response parameter of the [DescribeProjectMeta](https://help.aliyun.com/document_detail/114916.html) operation.
    shared_ptr<string> category_ {};
    // The alert contact group.
    shared_ptr<string> contactGroups_ {};
    // The first-level dimension of the alert rule in the application group.
    // 
    // Format: a collection of `key:value` pairs. Examples: `{"userId":"120886317861****"}` and `{"instanceId":"i-m5e1qg6uo38rztr4****"}`.
    shared_ptr<string> dimensions_ {};
    // Specifies whether to only precheck the request. Valid values:
    // - **true**: sends a check request. The system does not bind a security group to the instance. The check items include whether required parameters are specified, the request format, and service limits. If the check fails, the system returns an error. If the check succeeds, the system returns the error code `DryRunOperation`.
    // - **false** (default value): sends a normal request. If the check succeeds, the system returns an HTTP 2xx status code and performs the operation.
    shared_ptr<bool> dryRun_ {};
    // The effective period of the alert rule.
    shared_ptr<string> effectiveInterval_ {};
    // The subject of the alert email.
    shared_ptr<string> emailSubject_ {};
    // The second-level or third-level dimension of the alert rule in the application group.
    // 
    // Format: a collection of `key:value` pairs. Examples: `port:80` and `/dev/xvda:d-m5e6yphgzn3aprwu****`.
    // 
    // If the first-level dimension of the alert rule is `{"instanceId":"i-m5e1qg6uo38rztr4****"}`, the second-level dimension is the cloud disk in the instance, such as `{"/dev/xvda":"d-m5e6yphgzn3aprwu****"}`.
    shared_ptr<string> extraDimensionJson_ {};
    // The ID of the application group.
    // 
    // For information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The detection period of the alert rule. Unit: seconds.
    // 
    // > Make sure the detection period of the alert rule is the same as the data reporting period. If the detection period is shorter than the data reporting period, alerts may not be triggered due to insufficient data.
    shared_ptr<string> interval_ {};
    // The tags of the alert rule.
    // 
    // Alert notifications include tags.
    shared_ptr<vector<PutGroupMetricRuleRequest::Labels>> labels_ {};
    // The name of the metric.
    // 
    // For information about how to obtain the name of a metric, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // The namespace of the Alibaba Cloud service.
    // 
    // For information about how to obtain the namespace of an Alibaba Cloud service, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The action to take when no monitoring data is found. Valid values:
    // - KEEP_LAST_STATE (default value): Takes no action.
    // - INSUFFICIENT_DATA: Sends an alert notification indicating that no data is found.
    // - OK: Sends an alert notification indicating that the status is normal.
    shared_ptr<string> noDataPolicy_ {};
    // The time range during which the alert rule is inactive.
    shared_ptr<string> noEffectiveInterval_ {};
    // The advanced settings.
    // 
    // Format: `{"key1":"value1","key2":"value2"}`. Example: `{"NotSendOK":true}`, which specifies whether to send alert recovery notifications. The key is `NotSendOK`, and the value is `true` (do not send) or `false` (send by default).
    shared_ptr<string> options_ {};
    // The reporting period of monitoring data.
    // 
    // The value of `Period` must be 60 or an integer multiple of 60. Unit: seconds. Default value: 300.
    shared_ptr<string> period_ {};
    // The ID of the alert rule.
    // 
    // - To create an alert rule for the application group, enter an alert rule ID.
    // 
    // - To modify a specified alert rule in the application group, you must obtain the alert rule ID. For information about how to obtain the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
    // The name of the alert rule.
    // 
    // - To create an alert rule for the application group, enter an alert rule name.
    // 
    // - To modify a specified alert rule in the application group, you must obtain the alert rule name. For information about how to obtain the name of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The mute for epoch.
    // 
    // Unit: seconds. Default value: 86400.
    shared_ptr<int32_t> silenceTime_ {};
    // The webhook URL that is called when an alert is triggered.
    // 
    // Enter a publicly accessible URL. CloudMonitor pushes alert notifications to this URL by sending POST requests. Only HTTP is supported.
    shared_ptr<string> webhook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
