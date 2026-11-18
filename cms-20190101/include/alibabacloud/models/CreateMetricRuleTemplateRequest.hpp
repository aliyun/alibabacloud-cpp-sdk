// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMETRICRULETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMETRICRULETEMPLATEREQUEST_HPP_
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
  class CreateMetricRuleTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMetricRuleTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTemplates, alertTemplates_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMetricRuleTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTemplates, alertTemplates_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateMetricRuleTemplateRequest() = default ;
    CreateMetricRuleTemplateRequest(const CreateMetricRuleTemplateRequest &) = default ;
    CreateMetricRuleTemplateRequest(CreateMetricRuleTemplateRequest &&) = default ;
    CreateMetricRuleTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMetricRuleTemplateRequest() = default ;
    CreateMetricRuleTemplateRequest& operator=(const CreateMetricRuleTemplateRequest &) = default ;
    CreateMetricRuleTemplateRequest& operator=(CreateMetricRuleTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(Escalations, escalations_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Selector, selector_);
        DARABONBA_PTR_TO_JSON(Webhook, webhook_);
      };
      friend void from_json(const Darabonba::Json& j, AlertTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Selector, selector_);
        DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
      };
      AlertTemplates() = default ;
      AlertTemplates(const AlertTemplates &) = default ;
      AlertTemplates(AlertTemplates &&) = default ;
      AlertTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertTemplates() = default ;
      AlertTemplates& operator=(const AlertTemplates &) = default ;
      AlertTemplates& operator=(AlertTemplates &&) = default ;
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
            DARABONBA_PTR_TO_JSON(N, n_);
            DARABONBA_PTR_TO_JSON(Statistics, statistics_);
            DARABONBA_PTR_TO_JSON(Threshold, threshold_);
            DARABONBA_PTR_TO_JSON(Times, times_);
          };
          friend void from_json(const Darabonba::Json& j, Warn& obj) { 
            DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
            DARABONBA_PTR_FROM_JSON(N, n_);
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
        && this->n_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
          // comparisonOperator Field Functions 
          bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
          void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
          inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
          inline Warn& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


          // n Field Functions 
          bool hasN() const { return this->n_ != nullptr;};
          void deleteN() { this->n_ = nullptr;};
          inline int32_t getN() const { DARABONBA_PTR_GET_DEFAULT(n_, 0) };
          inline Warn& setN(int32_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


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
          // The comparison operator for the warn-level threshold. Valid values:
          // 
          // - GreaterThanOrEqualToThreshold: greater than or equal to 
          // - GreaterThanThreshold: greater than 
          // - LessThanOrEqualToThreshold: less than or equal to 
          // - LessThanThreshold: less than 
          // - NotEqualToThreshold: not equal to 
          // - GreaterThanYesterday: greater than the value at the same time yesterday 
          // - LessThanYesterday: less than the value at the same time yesterday 
          // - GreaterThanLastWeek: greater than the value at the same time last week 
          // - LessThanLastWeek: less than the value at the same time last week 
          // - GreaterThanLastPeriod: greater than the value in the last period 
          // - LessThanLastPeriod: less than the value in the last period 
          // 
          // Valid values of N: 1 to 200.
          // 
          // > You must specify at least one of the following alert levels: Critical, Warn, or Info. For the specified alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
          shared_ptr<string> comparisonOperator_ {};
          shared_ptr<int32_t> n_ {};
          // The statistical method for warning alerts.
          // 
          // Valid values of N: 1 to 200.
          // 
          // The valid values of this parameter are determined by the `Statistics` column that corresponds to the `MetricName` of the specified cloud service. Examples: Maximum, Minimum, and Average. For more information about how to obtain the valid values, see [Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
          // 
          // > You must specify at least one of the following alert levels: Critical, Warn, or Info. For the specified alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
          shared_ptr<string> statistics_ {};
          // The threshold for warn-level alerts.
          // 
          // Valid values of N: 1 to 200.
          // 
          // > You must specify at least one of the following alert levels: Critical, Warn, or Info. For the specified alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
          shared_ptr<string> threshold_ {};
          // The number of consecutive times the monitoring metrics must reach the alert threshold to send a warning alert notification.
          // 
          // Valid values of N: 1 to 200.
          // 
          // > You must specify at least one of the following alert levels: Critical, Warn, or Info. For the specified alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
          shared_ptr<int32_t> times_ {};
        };

        class Info : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Info& obj) { 
            DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
            DARABONBA_PTR_TO_JSON(N, n_);
            DARABONBA_PTR_TO_JSON(Statistics, statistics_);
            DARABONBA_PTR_TO_JSON(Threshold, threshold_);
            DARABONBA_PTR_TO_JSON(Times, times_);
          };
          friend void from_json(const Darabonba::Json& j, Info& obj) { 
            DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
            DARABONBA_PTR_FROM_JSON(N, n_);
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
        && this->n_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
          // comparisonOperator Field Functions 
          bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
          void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
          inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
          inline Info& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


          // n Field Functions 
          bool hasN() const { return this->n_ != nullptr;};
          void deleteN() { this->n_ = nullptr;};
          inline int32_t getN() const { DARABONBA_PTR_GET_DEFAULT(n_, 0) };
          inline Info& setN(int32_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


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
          // The comparison operator for the info-level threshold. Valid values:
          // 
          // - GreaterThanOrEqualToThreshold: greater than or equal to 
          // - GreaterThanThreshold: greater than 
          // - LessThanOrEqualToThreshold: less than or equal to 
          // - LessThanThreshold: less than 
          // - NotEqualToThreshold: not equal to 
          // - GreaterThanYesterday: greater than the value at the same time yesterday 
          // - LessThanYesterday: less than the value at the same time yesterday 
          // - GreaterThanLastWeek: greater than the value at the same time last week 
          // - LessThanLastWeek: less than the value at the same time last week 
          // - GreaterThanLastPeriod: greater than the value in the last period 
          // - LessThanLastPeriod: less than the value in the last period 
          // 
          // Valid values of N: 1 to 200.
          // 
          // > You must specify at least one of the following alert levels: Critical, Warn, or Info. For the specified alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
          shared_ptr<string> comparisonOperator_ {};
          shared_ptr<int32_t> n_ {};
          // The statistical method for info-level alerts.
          // 
          // Valid values of N: 1 to 200.
          // 
          // The valid values of this parameter are determined by the `Statistics` column that corresponds to the `MetricName` of the specified cloud service. Examples: Maximum, Minimum, and Average. For more information about how to obtain the valid values, see [Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
          // 
          // > You must specify at least one of the following alert levels: Critical, Warn, or Info. For the specified alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
          shared_ptr<string> statistics_ {};
          // The threshold for info-level alerts.
          // 
          // Valid values of N: 1 to 200.
          // 
          // > You must specify at least one of the following alert levels: Critical, Warn, or Info. For the specified alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
          shared_ptr<string> threshold_ {};
          // The number of consecutive times the monitoring metrics must reach the alert threshold to send an info-level alert notification.
          // 
          // Valid values of N: 1 to 200.
          // 
          // > You must specify at least one of the following alert levels: Critical, Warn, or Info. For the specified alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
          shared_ptr<int32_t> times_ {};
        };

        class Critical : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Critical& obj) { 
            DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
            DARABONBA_PTR_TO_JSON(N, n_);
            DARABONBA_PTR_TO_JSON(Statistics, statistics_);
            DARABONBA_PTR_TO_JSON(Threshold, threshold_);
            DARABONBA_PTR_TO_JSON(Times, times_);
          };
          friend void from_json(const Darabonba::Json& j, Critical& obj) { 
            DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
            DARABONBA_PTR_FROM_JSON(N, n_);
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
        && this->n_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
          // comparisonOperator Field Functions 
          bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
          void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
          inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
          inline Critical& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


          // n Field Functions 
          bool hasN() const { return this->n_ != nullptr;};
          void deleteN() { this->n_ = nullptr;};
          inline int32_t getN() const { DARABONBA_PTR_GET_DEFAULT(n_, 0) };
          inline Critical& setN(int32_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


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
          // The comparison operator for the critical-level threshold. Valid values:
          // 
          // - GreaterThanOrEqualToThreshold: greater than or equal to 
          // - GreaterThanThreshold: greater than 
          // - LessThanOrEqualToThreshold: less than or equal to 
          // - LessThanThreshold: less than 
          // - NotEqualToThreshold: not equal to 
          // - GreaterThanYesterday: greater than the value at the same time yesterday 
          // - LessThanYesterday: less than the value at the same time yesterday 
          // - GreaterThanLastWeek: greater than the value at the same time last week 
          // - LessThanLastWeek: less than the value at the same time last week 
          // - GreaterThanLastPeriod: greater than the value in the last period 
          // - LessThanLastPeriod: less than the value in the last period 
          // 
          // Valid values of N: 1 to 200.
          // 
          // > You must specify at least one of the following alert levels: Critical, Warn, or Info. For the specified alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
          shared_ptr<string> comparisonOperator_ {};
          shared_ptr<int32_t> n_ {};
          // The statistical method for critical-level alerts.
          // 
          // Valid values of N: 1 to 200.
          // 
          // The valid values of this parameter are determined by the `Statistics` column that corresponds to the `MetricName` of the specified cloud service. Examples: Maximum, Minimum, and Average. For more information about how to obtain the valid values, see [Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
          // 
          // > You must specify at least one of the following alert levels: Critical, Warn, or Info. For the specified alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
          shared_ptr<string> statistics_ {};
          // The threshold that triggers a critical-level alert notification.
          // 
          // Valid values of N: 1 to 200.
          // 
          // > You must specify at least one of the following alert levels: Critical, Warn, or Info. For the specified alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
          shared_ptr<string> threshold_ {};
          // The number of consecutive times the monitoring metrics must reach the alert threshold to send a critical-level alert notification.
          // 
          // Valid values of N: 1 to 200.
          // 
          // > You must specify at least one of the following alert levels: Critical, Warn, or Info. For the specified alert level, you must specify the Statistics, ComparisonOperator, Threshold, and Times parameters at the same time.
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
        && this->category_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->period_ == nullptr && this->ruleName_ == nullptr
        && this->selector_ == nullptr && this->webhook_ == nullptr; };
      // escalations Field Functions 
      bool hasEscalations() const { return this->escalations_ != nullptr;};
      void deleteEscalations() { this->escalations_ = nullptr;};
      inline const AlertTemplates::Escalations & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, AlertTemplates::Escalations) };
      inline AlertTemplates::Escalations getEscalations() { DARABONBA_PTR_GET(escalations_, AlertTemplates::Escalations) };
      inline AlertTemplates& setEscalations(const AlertTemplates::Escalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
      inline AlertTemplates& setEscalations(AlertTemplates::Escalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline AlertTemplates& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline AlertTemplates& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline AlertTemplates& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline AlertTemplates& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline AlertTemplates& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // selector Field Functions 
      bool hasSelector() const { return this->selector_ != nullptr;};
      void deleteSelector() { this->selector_ = nullptr;};
      inline string getSelector() const { DARABONBA_PTR_GET_DEFAULT(selector_, "") };
      inline AlertTemplates& setSelector(string selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };


      // webhook Field Functions 
      bool hasWebhook() const { return this->webhook_ != nullptr;};
      void deleteWebhook() { this->webhook_ = nullptr;};
      inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
      inline AlertTemplates& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


    protected:
      shared_ptr<AlertTemplates::Escalations> escalations_ {};
      // The Alibaba Cloud service name or product specification abbreviation. Valid values of N: 1 to 200. Valid values:
      // - ecs: ECS instances and non-Alibaba Cloud hosts
      // - rds: ApsaraDB RDS database
      // - ads: AnalyticDB database
      // - slb: load balancing
      // - vpc: Elastic IP
      // - apigateway: API Gateway
      // - cdn: Content Delivery Network
      // - cs: Container Service for Swarm
      // - dcdn: Dynamic Route for CDN
      // - ddos: Anti-DDoS
      // - eip: Elastic IP Address
      // - elasticsearch: Elasticsearch
      // - emr: E-MapReduce
      // - ess: elastic scaling
      // - hbase: ApsaraDB for HBase database
      // - iot_edge: IoT Edge
      // - k8s_pod: Kubernetes pod
      // - kvstore_sharding: ApsaraDB for Redis Cluster Edition
      // - kvstore_splitrw: ApsaraDB for Redis Read/Write Splitting Edition
      // - kvstore_standard: ApsaraDB for Redis Standard Edition
      // - memcache: ApsaraDB for Memcache database
      // - mns: Message Service
      // - mongodb: MongoDB replica set
      // - mongodb_cluster: MongoDB cluster edition
      // - mongodb_sharding: MongoDB sharded cluster
      // - mq_topic: Message Service topic
      // - ocs: legacy ApsaraDB for Memcache database
      // - opensearch: OpenSearch
      // - oss: Object Storage Service
      // - polardb: PolarDB database
      // - petadata: HybridDB for MySQL
      // - scdn: secure acceleration
      // - sharebandwidthpackages: Internet Shared Bandwidth
      // - sls: Simple Log Service
      // - vpn: VPN Gateway
      // 
      // This parameter is required.
      shared_ptr<string> category_ {};
      // The name of the metric. Valid values of N: 1 to 200.
      // 
      // > For more information, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Cloud service metrics](https://help.aliyun.com/document_detail/28619.html).
      // 
      // This parameter is required.
      shared_ptr<string> metricName_ {};
      // The namespace of the Alibaba Cloud service. Valid values of N: 1 to 200.
      // 
      // > For more information, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Cloud service metrics](https://help.aliyun.com/document_detail/28619.html).
      // 
      // This parameter is required.
      shared_ptr<string> namespace_ {};
      // The aggregation period of the monitoring data. Unit: seconds.
      // 
      // Default value: the minimum aggregation period of the metric. You do not need to specify this parameter in most cases.
      // 
      // Valid values of N: 1 to 200.
      shared_ptr<int32_t> period_ {};
      // The name of the alert rule. Valid values of N: 1 to 200.
      // 
      // This parameter is required.
      shared_ptr<string> ruleName_ {};
      // The options for extended fields. Valid values of N: 1 to 200.
      shared_ptr<string> selector_ {};
      // The webhook URL to which a POST request is sent when an alert is triggered.
      shared_ptr<string> webhook_ {};
    };

    virtual bool empty() const override { return this->alertTemplates_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr; };
    // alertTemplates Field Functions 
    bool hasAlertTemplates() const { return this->alertTemplates_ != nullptr;};
    void deleteAlertTemplates() { this->alertTemplates_ = nullptr;};
    inline const vector<CreateMetricRuleTemplateRequest::AlertTemplates> & getAlertTemplates() const { DARABONBA_PTR_GET_CONST(alertTemplates_, vector<CreateMetricRuleTemplateRequest::AlertTemplates>) };
    inline vector<CreateMetricRuleTemplateRequest::AlertTemplates> getAlertTemplates() { DARABONBA_PTR_GET(alertTemplates_, vector<CreateMetricRuleTemplateRequest::AlertTemplates>) };
    inline CreateMetricRuleTemplateRequest& setAlertTemplates(const vector<CreateMetricRuleTemplateRequest::AlertTemplates> & alertTemplates) { DARABONBA_PTR_SET_VALUE(alertTemplates_, alertTemplates) };
    inline CreateMetricRuleTemplateRequest& setAlertTemplates(vector<CreateMetricRuleTemplateRequest::AlertTemplates> && alertTemplates) { DARABONBA_PTR_SET_RVALUE(alertTemplates_, alertTemplates) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMetricRuleTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMetricRuleTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMetricRuleTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The alert templates.
    shared_ptr<vector<CreateMetricRuleTemplateRequest::AlertTemplates>> alertTemplates_ {};
    // The description of the alert template.
    shared_ptr<string> description_ {};
    // The name of the alert template.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
