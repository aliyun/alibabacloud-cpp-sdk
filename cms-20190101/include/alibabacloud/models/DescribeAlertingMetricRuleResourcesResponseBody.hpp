// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTINGMETRICRULERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTINGMETRICRULERESOURCESRESPONSEBODY_HPP_
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
  class DescribeAlertingMetricRuleResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertingMetricRuleResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertingMetricRuleResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeAlertingMetricRuleResourcesResponseBody() = default ;
    DescribeAlertingMetricRuleResourcesResponseBody(const DescribeAlertingMetricRuleResourcesResponseBody &) = default ;
    DescribeAlertingMetricRuleResourcesResponseBody(DescribeAlertingMetricRuleResourcesResponseBody &&) = default ;
    DescribeAlertingMetricRuleResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertingMetricRuleResourcesResponseBody() = default ;
    DescribeAlertingMetricRuleResourcesResponseBody& operator=(const DescribeAlertingMetricRuleResourcesResponseBody &) = default ;
    DescribeAlertingMetricRuleResourcesResponseBody& operator=(DescribeAlertingMetricRuleResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(Resource, resource_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Resource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resource& obj) { 
          DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Escalation, escalation_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(LastAlertTime, lastAlertTime_);
          DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(MetricValues, metricValues_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(ProductCategory, productCategory_);
          DARABONBA_PTR_TO_JSON(Resource, resource_);
          DARABONBA_PTR_TO_JSON(RetryTimes, retryTimes_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Statistics, statistics_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, Resource& obj) { 
          DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Escalation, escalation_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(LastAlertTime, lastAlertTime_);
          DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(MetricValues, metricValues_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(ProductCategory, productCategory_);
          DARABONBA_PTR_FROM_JSON(Resource, resource_);
          DARABONBA_PTR_FROM_JSON(RetryTimes, retryTimes_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
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
        class Escalation : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Escalation& obj) { 
            DARABONBA_PTR_TO_JSON(Resource, resource_);
          };
          friend void from_json(const Darabonba::Json& j, Escalation& obj) { 
            DARABONBA_PTR_FROM_JSON(Resource, resource_);
          };
          Escalation() = default ;
          Escalation(const Escalation &) = default ;
          Escalation(Escalation &&) = default ;
          Escalation(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Escalation() = default ;
          Escalation& operator=(const Escalation &) = default ;
          Escalation& operator=(Escalation &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Resource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Resource& obj) { 
              DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
              DARABONBA_PTR_TO_JSON(Expression, expression_);
              DARABONBA_PTR_TO_JSON(ExpressionList, expressionList_);
              DARABONBA_PTR_TO_JSON(ExpressionListJoin, expressionListJoin_);
              DARABONBA_PTR_TO_JSON(ExpressionRaw, expressionRaw_);
              DARABONBA_PTR_TO_JSON(Level, level_);
              DARABONBA_PTR_TO_JSON(PreCondition, preCondition_);
              DARABONBA_PTR_TO_JSON(Tag, tag_);
              DARABONBA_PTR_TO_JSON(Threshold, threshold_);
              DARABONBA_PTR_TO_JSON(Times, times_);
            };
            friend void from_json(const Darabonba::Json& j, Resource& obj) { 
              DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
              DARABONBA_PTR_FROM_JSON(Expression, expression_);
              DARABONBA_PTR_FROM_JSON(ExpressionList, expressionList_);
              DARABONBA_PTR_FROM_JSON(ExpressionListJoin, expressionListJoin_);
              DARABONBA_PTR_FROM_JSON(ExpressionRaw, expressionRaw_);
              DARABONBA_PTR_FROM_JSON(Level, level_);
              DARABONBA_PTR_FROM_JSON(PreCondition, preCondition_);
              DARABONBA_PTR_FROM_JSON(Tag, tag_);
              DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
              DARABONBA_PTR_FROM_JSON(Times, times_);
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
                inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
                inline ExpressionListItem& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


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
                // The metric name.
                shared_ptr<string> metricName_ {};
                // The statistical period of the metric. Unit: seconds. The default value is the interval at which the monitoring data of the metric is collected.
                shared_ptr<string> period_ {};
                // The statistical method of the alert level. Valid values:
                // 
                // *   Maximum
                // *   Minimum
                // *   Average
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

            virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->expression_ == nullptr && this->expressionList_ == nullptr && this->expressionListJoin_ == nullptr && this->expressionRaw_ == nullptr && this->level_ == nullptr
        && this->preCondition_ == nullptr && this->tag_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
            // comparisonOperator Field Functions 
            bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
            void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
            inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
            inline Resource& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


            // expression Field Functions 
            bool hasExpression() const { return this->expression_ != nullptr;};
            void deleteExpression() { this->expression_ = nullptr;};
            inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
            inline Resource& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


            // expressionList Field Functions 
            bool hasExpressionList() const { return this->expressionList_ != nullptr;};
            void deleteExpressionList() { this->expressionList_ = nullptr;};
            inline const Resource::ExpressionList & getExpressionList() const { DARABONBA_PTR_GET_CONST(expressionList_, Resource::ExpressionList) };
            inline Resource::ExpressionList getExpressionList() { DARABONBA_PTR_GET(expressionList_, Resource::ExpressionList) };
            inline Resource& setExpressionList(const Resource::ExpressionList & expressionList) { DARABONBA_PTR_SET_VALUE(expressionList_, expressionList) };
            inline Resource& setExpressionList(Resource::ExpressionList && expressionList) { DARABONBA_PTR_SET_RVALUE(expressionList_, expressionList) };


            // expressionListJoin Field Functions 
            bool hasExpressionListJoin() const { return this->expressionListJoin_ != nullptr;};
            void deleteExpressionListJoin() { this->expressionListJoin_ = nullptr;};
            inline string getExpressionListJoin() const { DARABONBA_PTR_GET_DEFAULT(expressionListJoin_, "") };
            inline Resource& setExpressionListJoin(string expressionListJoin) { DARABONBA_PTR_SET_VALUE(expressionListJoin_, expressionListJoin) };


            // expressionRaw Field Functions 
            bool hasExpressionRaw() const { return this->expressionRaw_ != nullptr;};
            void deleteExpressionRaw() { this->expressionRaw_ = nullptr;};
            inline string getExpressionRaw() const { DARABONBA_PTR_GET_DEFAULT(expressionRaw_, "") };
            inline Resource& setExpressionRaw(string expressionRaw) { DARABONBA_PTR_SET_VALUE(expressionRaw_, expressionRaw) };


            // level Field Functions 
            bool hasLevel() const { return this->level_ != nullptr;};
            void deleteLevel() { this->level_ = nullptr;};
            inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
            inline Resource& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


            // preCondition Field Functions 
            bool hasPreCondition() const { return this->preCondition_ != nullptr;};
            void deletePreCondition() { this->preCondition_ = nullptr;};
            inline string getPreCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
            inline Resource& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


            // tag Field Functions 
            bool hasTag() const { return this->tag_ != nullptr;};
            void deleteTag() { this->tag_ = nullptr;};
            inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
            inline Resource& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


            // threshold Field Functions 
            bool hasThreshold() const { return this->threshold_ != nullptr;};
            void deleteThreshold() { this->threshold_ = nullptr;};
            inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
            inline Resource& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


            // times Field Functions 
            bool hasTimes() const { return this->times_ != nullptr;};
            void deleteTimes() { this->times_ = nullptr;};
            inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
            inline Resource& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


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
            // The description of the alert rule.
            // 
            // >  This parameter indicates the content of the alert rule. If the metric value meets the alert condition, an alert is triggered.
            shared_ptr<string> expression_ {};
            // The description of the multi-metric alert rule.
            shared_ptr<Resource::ExpressionList> expressionList_ {};
            // The relationship between multiple metrics. Valid values:
            // 
            // *   &&: If all metrics meet the alert conditions, CloudMonitor sends alert notifications.
            // *   ||: If one of the metrics meets the alert conditions, CloudMonitor sends alert notifications.
            shared_ptr<string> expressionListJoin_ {};
            // The trigger conditions that are created by using expressions. You can use expressions to create trigger conditions in the following scenarios:
            // 
            // *   Set an alert blacklist for specific resources. For example, if you specify `$instanceId != \\"i-io8kfvcpp7x5****\\" ``&&`` $Average > 50`, no alert is triggered when the `average metric value` of the `i-io8kfvcpp7x5****` instance exceeds 50.
            // *   Set a special alert threshold for a specified instance in the rule. For example, if you specify `$Average > ($instanceId == \\"i-io8kfvcpp7x5****\\"? 80: 50)`, an alert is triggered when the `average metric value` of the `i-io8kfvcpp7x5****` instance exceeds 80 or the `average metric value` of other instances exceeds 50.
            // *   Limit the number of instances whose metric values exceed the threshold. For example, if you specify `count($Average > 20) > 3`, an alert is triggered only when the `average metric value` of more than three instances exceeds 20.
            shared_ptr<string> expressionRaw_ {};
            // The severity level and notification methods of the alert. Valid values:
            // 
            // *   4: Alert notifications are sent by using emails and DingTalk chatbots.
            // *   OK: No alert is generated.
            shared_ptr<int32_t> level_ {};
            // The operator that is used to compare the metric value with the threshold. Valid values:
            // 
            // *   `>=`
            // *   `=`
            // *   `<=`
            // *   `>`
            // *   `<`
            // *   `!=`
            shared_ptr<string> preCondition_ {};
            // This parameter is deprecated.
            shared_ptr<string> tag_ {};
            // The alert threshold.
            shared_ptr<string> threshold_ {};
            // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
            shared_ptr<int32_t> times_ {};
          };

          virtual bool empty() const override { return this->resource_ == nullptr; };
          // resource Field Functions 
          bool hasResource() const { return this->resource_ != nullptr;};
          void deleteResource() { this->resource_ = nullptr;};
          inline const vector<Escalation::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Escalation::Resource>) };
          inline vector<Escalation::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<Escalation::Resource>) };
          inline Escalation& setResource(const vector<Escalation::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
          inline Escalation& setResource(vector<Escalation::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


        protected:
          shared_ptr<vector<Escalation::Resource>> resource_ {};
        };

        virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->enable_ == nullptr && this->escalation_ == nullptr && this->groupId_ == nullptr && this->lastAlertTime_ == nullptr && this->lastModifyTime_ == nullptr
        && this->level_ == nullptr && this->metricName_ == nullptr && this->metricValues_ == nullptr && this->namespace_ == nullptr && this->productCategory_ == nullptr
        && this->resource_ == nullptr && this->retryTimes_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->startTime_ == nullptr
        && this->statistics_ == nullptr && this->threshold_ == nullptr; };
        // dimensions Field Functions 
        bool hasDimensions() const { return this->dimensions_ != nullptr;};
        void deleteDimensions() { this->dimensions_ = nullptr;};
        inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
        inline Resource& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
        inline Resource& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // escalation Field Functions 
        bool hasEscalation() const { return this->escalation_ != nullptr;};
        void deleteEscalation() { this->escalation_ = nullptr;};
        inline const Resource::Escalation & getEscalation() const { DARABONBA_PTR_GET_CONST(escalation_, Resource::Escalation) };
        inline Resource::Escalation getEscalation() { DARABONBA_PTR_GET(escalation_, Resource::Escalation) };
        inline Resource& setEscalation(const Resource::Escalation & escalation) { DARABONBA_PTR_SET_VALUE(escalation_, escalation) };
        inline Resource& setEscalation(Resource::Escalation && escalation) { DARABONBA_PTR_SET_RVALUE(escalation_, escalation) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Resource& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // lastAlertTime Field Functions 
        bool hasLastAlertTime() const { return this->lastAlertTime_ != nullptr;};
        void deleteLastAlertTime() { this->lastAlertTime_ = nullptr;};
        inline string getLastAlertTime() const { DARABONBA_PTR_GET_DEFAULT(lastAlertTime_, "") };
        inline Resource& setLastAlertTime(string lastAlertTime) { DARABONBA_PTR_SET_VALUE(lastAlertTime_, lastAlertTime) };


        // lastModifyTime Field Functions 
        bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
        void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
        inline string getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
        inline Resource& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
        inline Resource& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline Resource& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // metricValues Field Functions 
        bool hasMetricValues() const { return this->metricValues_ != nullptr;};
        void deleteMetricValues() { this->metricValues_ = nullptr;};
        inline string getMetricValues() const { DARABONBA_PTR_GET_DEFAULT(metricValues_, "") };
        inline Resource& setMetricValues(string metricValues) { DARABONBA_PTR_SET_VALUE(metricValues_, metricValues) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Resource& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // productCategory Field Functions 
        bool hasProductCategory() const { return this->productCategory_ != nullptr;};
        void deleteProductCategory() { this->productCategory_ = nullptr;};
        inline string getProductCategory() const { DARABONBA_PTR_GET_DEFAULT(productCategory_, "") };
        inline Resource& setProductCategory(string productCategory) { DARABONBA_PTR_SET_VALUE(productCategory_, productCategory) };


        // resource Field Functions 
        bool hasResource() const { return this->resource_ != nullptr;};
        void deleteResource() { this->resource_ = nullptr;};
        inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
        inline Resource& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


        // retryTimes Field Functions 
        bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
        void deleteRetryTimes() { this->retryTimes_ = nullptr;};
        inline string getRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, "") };
        inline Resource& setRetryTimes(string retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Resource& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Resource& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Resource& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
        inline Resource& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
        inline Resource& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        // The dimensions based on which the resources are queried.
        shared_ptr<string> dimensions_ {};
        // Indicates whether the alert rule is enabled. Valid values:
        // 
        // *   true: The alert rule is enabled.
        // *   false: The alert rule is disabled.
        shared_ptr<string> enable_ {};
        // The alert rule based on which the alert is triggered.
        shared_ptr<Resource::Escalation> escalation_ {};
        // The ID of the application group.
        // 
        // >  If the alert rule is associated with an application group, the ID of the application group is returned in this parameter.
        shared_ptr<string> groupId_ {};
        // The time when the last alert was triggered for the resource based on the alert rule. The value is a timestamp.
        // 
        // Unit: milliseconds.
        shared_ptr<string> lastAlertTime_ {};
        // The time when the alert rule was last modified. The value is a timestamp.
        // 
        // Unit: milliseconds.
        shared_ptr<string> lastModifyTime_ {};
        // The severity level and notification methods of the alert. Valid values:
        // 
        // *   4: Alert notifications are sent by using emails and DingTalk chatbots.
        // *   OK: No alert is generated.
        shared_ptr<int32_t> level_ {};
        // The metric name.
        shared_ptr<string> metricName_ {};
        // The metric value that triggered the alert based on the alert rule. The value is a JSON string.
        shared_ptr<string> metricValues_ {};
        // The namespace of the cloud service.
        shared_ptr<string> namespace_ {};
        // The type of the cloud service.
        shared_ptr<string> productCategory_ {};
        // The resources that are monitored.
        shared_ptr<string> resource_ {};
        // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
        shared_ptr<string> retryTimes_ {};
        // The ID of the alert rule.
        shared_ptr<string> ruleId_ {};
        // The name of the alert rule.
        shared_ptr<string> ruleName_ {};
        // The time when the resource was associated with the alert rule. The value is a timestamp.
        // 
        // Unit: milliseconds.
        shared_ptr<string> startTime_ {};
        // The method used to calculate the metric values that trigger alerts.
        shared_ptr<string> statistics_ {};
        // The alert threshold.
        shared_ptr<string> threshold_ {};
      };

      virtual bool empty() const override { return this->resource_ == nullptr; };
      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const vector<Resources::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Resources::Resource>) };
      inline vector<Resources::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<Resources::Resource>) };
      inline Resources& setResource(const vector<Resources::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Resources& setResource(vector<Resources::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    protected:
      shared_ptr<vector<Resources::Resource>> resource_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeAlertingMetricRuleResourcesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const DescribeAlertingMetricRuleResourcesResponseBody::Resources & getResources() const { DARABONBA_PTR_GET_CONST(resources_, DescribeAlertingMetricRuleResourcesResponseBody::Resources) };
    inline DescribeAlertingMetricRuleResourcesResponseBody::Resources getResources() { DARABONBA_PTR_GET(resources_, DescribeAlertingMetricRuleResourcesResponseBody::Resources) };
    inline DescribeAlertingMetricRuleResourcesResponseBody& setResources(const DescribeAlertingMetricRuleResourcesResponseBody::Resources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeAlertingMetricRuleResourcesResponseBody& setResources(DescribeAlertingMetricRuleResourcesResponseBody::Resources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertingMetricRuleResourcesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeAlertingMetricRuleResourcesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    // 
    // > The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resources that are associated with the alert rule.
    shared_ptr<DescribeAlertingMetricRuleResourcesResponseBody::Resources> resources_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
