// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATEATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeMetricRuleTemplateAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTemplateAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTemplateAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMetricRuleTemplateAttributeResponseBody() = default ;
    DescribeMetricRuleTemplateAttributeResponseBody(const DescribeMetricRuleTemplateAttributeResponseBody &) = default ;
    DescribeMetricRuleTemplateAttributeResponseBody(DescribeMetricRuleTemplateAttributeResponseBody &&) = default ;
    DescribeMetricRuleTemplateAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTemplateAttributeResponseBody() = default ;
    DescribeMetricRuleTemplateAttributeResponseBody& operator=(const DescribeMetricRuleTemplateAttributeResponseBody &) = default ;
    DescribeMetricRuleTemplateAttributeResponseBody& operator=(DescribeMetricRuleTemplateAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resource& obj) { 
        DARABONBA_PTR_TO_JSON(AlertTemplates, alertTemplates_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RestVersion, restVersion_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, Resource& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertTemplates, alertTemplates_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RestVersion, restVersion_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      Resource() = default ;
      Resource(const Resource &) = default ;
      Resource(Resource &&) = default ;
      Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resource() = default ;
      Resource& operator=(const Resource &) = default ;
      Resource& operator=(Resource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlertTemplates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertTemplates& obj) { 
          DARABONBA_PTR_TO_JSON(AlertTemplate, alertTemplate_);
        };
        friend void from_json(const Darabonba::Json& j, AlertTemplates& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertTemplate, alertTemplate_);
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
        class AlertTemplate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertTemplate& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(Escalations, escalations_);
            DARABONBA_PTR_TO_JSON(Labels, labels_);
            DARABONBA_PTR_TO_JSON(MetricName, metricName_);
            DARABONBA_PTR_TO_JSON(Namespace, namespace_);
            DARABONBA_PTR_TO_JSON(NoDataPolicy, noDataPolicy_);
            DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
            DARABONBA_PTR_TO_JSON(Selector, selector_);
            DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
            DARABONBA_PTR_TO_JSON(Webhook, webhook_);
          };
          friend void from_json(const Darabonba::Json& j, AlertTemplate& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
            DARABONBA_PTR_FROM_JSON(Labels, labels_);
            DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
            DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
            DARABONBA_PTR_FROM_JSON(NoDataPolicy, noDataPolicy_);
            DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
            DARABONBA_PTR_FROM_JSON(Selector, selector_);
            DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
            DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
          };
          AlertTemplate() = default ;
          AlertTemplate(const AlertTemplate &) = default ;
          AlertTemplate(AlertTemplate &&) = default ;
          AlertTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlertTemplate() = default ;
          AlertTemplate& operator=(const AlertTemplate &) = default ;
          AlertTemplate& operator=(AlertTemplate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
              // The tag key of the alert template.
              shared_ptr<string> key_ {};
              // The tag value of the alert template.
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
              // The comparison operator that is used to compare the metric value with the threshold for Warn-level alerts. Valid values:
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
              // The statistical method for Warn-level alerts.
              // 
              // The value of the `Statistics` parameter varies with the cloud service. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
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
              // The comparison operator that is used to compare the metric value with the threshold for Info-level alerts. Valid values:
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
              // The statistical method for Info-level alerts.
              // 
              // The value of the `Statistics` parameter varies with the cloud service. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
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
              // The comparison operator that is used to compare the metric value with the threshold for Critical-level alerts. Valid values:
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
              // The statistical method for Critical-level alerts.
              // 
              // The value of the `Statistics` parameter varies with the cloud service. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
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

          virtual bool empty() const override { return this->category_ == nullptr
        && this->escalations_ == nullptr && this->labels_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->noDataPolicy_ == nullptr
        && this->ruleName_ == nullptr && this->selector_ == nullptr && this->silenceTime_ == nullptr && this->webhook_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline AlertTemplate& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // escalations Field Functions 
          bool hasEscalations() const { return this->escalations_ != nullptr;};
          void deleteEscalations() { this->escalations_ = nullptr;};
          inline const AlertTemplate::Escalations & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, AlertTemplate::Escalations) };
          inline AlertTemplate::Escalations getEscalations() { DARABONBA_PTR_GET(escalations_, AlertTemplate::Escalations) };
          inline AlertTemplate& setEscalations(const AlertTemplate::Escalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
          inline AlertTemplate& setEscalations(AlertTemplate::Escalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


          // labels Field Functions 
          bool hasLabels() const { return this->labels_ != nullptr;};
          void deleteLabels() { this->labels_ = nullptr;};
          inline const AlertTemplate::Labels & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, AlertTemplate::Labels) };
          inline AlertTemplate::Labels getLabels() { DARABONBA_PTR_GET(labels_, AlertTemplate::Labels) };
          inline AlertTemplate& setLabels(const AlertTemplate::Labels & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
          inline AlertTemplate& setLabels(AlertTemplate::Labels && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


          // metricName Field Functions 
          bool hasMetricName() const { return this->metricName_ != nullptr;};
          void deleteMetricName() { this->metricName_ = nullptr;};
          inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
          inline AlertTemplate& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


          // namespace Field Functions 
          bool hasNamespace() const { return this->namespace_ != nullptr;};
          void deleteNamespace() { this->namespace_ = nullptr;};
          inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
          inline AlertTemplate& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


          // noDataPolicy Field Functions 
          bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
          void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
          inline string getNoDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
          inline AlertTemplate& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline AlertTemplate& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          // selector Field Functions 
          bool hasSelector() const { return this->selector_ != nullptr;};
          void deleteSelector() { this->selector_ = nullptr;};
          inline string getSelector() const { DARABONBA_PTR_GET_DEFAULT(selector_, "") };
          inline AlertTemplate& setSelector(string selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };


          // silenceTime Field Functions 
          bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
          void deleteSilenceTime() { this->silenceTime_ = nullptr;};
          inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
          inline AlertTemplate& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


          // webhook Field Functions 
          bool hasWebhook() const { return this->webhook_ != nullptr;};
          void deleteWebhook() { this->webhook_ = nullptr;};
          inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
          inline AlertTemplate& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


        protected:
          // The abbreviation of the Alibaba Cloud service name.
          shared_ptr<string> category_ {};
          // The threshold and the alert level.
          shared_ptr<AlertTemplate::Escalations> escalations_ {};
          // The tags of the alert template.
          shared_ptr<AlertTemplate::Labels> labels_ {};
          // The metric name.
          shared_ptr<string> metricName_ {};
          // The namespace of the Alibaba Cloud service.
          shared_ptr<string> namespace_ {};
          // The method that is used to handle alerts when no monitoring data is found. Valid values:
          // 
          // *   KEEP_LAST_STATE (default): No operation is performed.
          // *   INSUFFICIENT_DATA: An alert whose content is "Insufficient data" is triggered.
          // *   OK: The status is considered normal.
          shared_ptr<string> noDataPolicy_ {};
          // The name of the alert rule.
          shared_ptr<string> ruleName_ {};
          // The dimension of the alert. It is an extended field.
          shared_ptr<string> selector_ {};
          shared_ptr<int32_t> silenceTime_ {};
          // The callback URL to which a request is sent when an alert is triggered.
          shared_ptr<string> webhook_ {};
        };

        virtual bool empty() const override { return this->alertTemplate_ == nullptr; };
        // alertTemplate Field Functions 
        bool hasAlertTemplate() const { return this->alertTemplate_ != nullptr;};
        void deleteAlertTemplate() { this->alertTemplate_ = nullptr;};
        inline const vector<AlertTemplates::AlertTemplate> & getAlertTemplate() const { DARABONBA_PTR_GET_CONST(alertTemplate_, vector<AlertTemplates::AlertTemplate>) };
        inline vector<AlertTemplates::AlertTemplate> getAlertTemplate() { DARABONBA_PTR_GET(alertTemplate_, vector<AlertTemplates::AlertTemplate>) };
        inline AlertTemplates& setAlertTemplate(const vector<AlertTemplates::AlertTemplate> & alertTemplate) { DARABONBA_PTR_SET_VALUE(alertTemplate_, alertTemplate) };
        inline AlertTemplates& setAlertTemplate(vector<AlertTemplates::AlertTemplate> && alertTemplate) { DARABONBA_PTR_SET_RVALUE(alertTemplate_, alertTemplate) };


      protected:
        shared_ptr<vector<AlertTemplates::AlertTemplate>> alertTemplate_ {};
      };

      virtual bool empty() const override { return this->alertTemplates_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->restVersion_ == nullptr && this->templateId_ == nullptr; };
      // alertTemplates Field Functions 
      bool hasAlertTemplates() const { return this->alertTemplates_ != nullptr;};
      void deleteAlertTemplates() { this->alertTemplates_ = nullptr;};
      inline const Resource::AlertTemplates & getAlertTemplates() const { DARABONBA_PTR_GET_CONST(alertTemplates_, Resource::AlertTemplates) };
      inline Resource::AlertTemplates getAlertTemplates() { DARABONBA_PTR_GET(alertTemplates_, Resource::AlertTemplates) };
      inline Resource& setAlertTemplates(const Resource::AlertTemplates & alertTemplates) { DARABONBA_PTR_SET_VALUE(alertTemplates_, alertTemplates) };
      inline Resource& setAlertTemplates(Resource::AlertTemplates && alertTemplates) { DARABONBA_PTR_SET_RVALUE(alertTemplates_, alertTemplates) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Resource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Resource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // restVersion Field Functions 
      bool hasRestVersion() const { return this->restVersion_ != nullptr;};
      void deleteRestVersion() { this->restVersion_ = nullptr;};
      inline string getRestVersion() const { DARABONBA_PTR_GET_DEFAULT(restVersion_, "") };
      inline Resource& setRestVersion(string restVersion) { DARABONBA_PTR_SET_VALUE(restVersion_, restVersion) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Resource& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // The queried alert templates.
      shared_ptr<Resource::AlertTemplates> alertTemplates_ {};
      // The description of the alert template.
      shared_ptr<string> description_ {};
      // The name of the alert template.
      shared_ptr<string> name_ {};
      // The version of the alert template.
      shared_ptr<string> restVersion_ {};
      // The ID of the alert template.
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resource_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeMetricRuleTemplateAttributeResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const DescribeMetricRuleTemplateAttributeResponseBody::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, DescribeMetricRuleTemplateAttributeResponseBody::Resource) };
    inline DescribeMetricRuleTemplateAttributeResponseBody::Resource getResource() { DARABONBA_PTR_GET(resource_, DescribeMetricRuleTemplateAttributeResponseBody::Resource) };
    inline DescribeMetricRuleTemplateAttributeResponseBody& setResource(const DescribeMetricRuleTemplateAttributeResponseBody::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeMetricRuleTemplateAttributeResponseBody& setResource(DescribeMetricRuleTemplateAttributeResponseBody::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMetricRuleTemplateAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the alert template.
    shared_ptr<DescribeMetricRuleTemplateAttributeResponseBody::Resource> resource_ {};
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
