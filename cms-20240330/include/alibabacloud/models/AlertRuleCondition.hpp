// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULECONDITION_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULECONDITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleCondition& obj) { 
      DARABONBA_PTR_TO_JSON(alertCount, alertCount_);
      DARABONBA_PTR_TO_JSON(caseList, caseList_);
      DARABONBA_PTR_TO_JSON(compareList, compareList_);
      DARABONBA_PTR_TO_JSON(compositeEscalation, compositeEscalation_);
      DARABONBA_PTR_TO_JSON(enableSeveritySuppression, enableSeveritySuppression_);
      DARABONBA_PTR_TO_JSON(escalationType, escalationType_);
      DARABONBA_PTR_TO_JSON(expressEscalation, expressEscalation_);
      DARABONBA_PTR_TO_JSON(noDataAlertLevel, noDataAlertLevel_);
      DARABONBA_PTR_TO_JSON(noDataAppendValue, noDataAppendValue_);
      DARABONBA_PTR_TO_JSON(noDataPolicy, noDataPolicy_);
      DARABONBA_PTR_TO_JSON(oper, oper_);
      DARABONBA_PTR_TO_JSON(relation, relation_);
      DARABONBA_PTR_TO_JSON(simpleEscalation, simpleEscalation_);
      DARABONBA_PTR_TO_JSON(triggers, triggers_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(alertCount, alertCount_);
      DARABONBA_PTR_FROM_JSON(caseList, caseList_);
      DARABONBA_PTR_FROM_JSON(compareList, compareList_);
      DARABONBA_PTR_FROM_JSON(compositeEscalation, compositeEscalation_);
      DARABONBA_PTR_FROM_JSON(enableSeveritySuppression, enableSeveritySuppression_);
      DARABONBA_PTR_FROM_JSON(escalationType, escalationType_);
      DARABONBA_PTR_FROM_JSON(expressEscalation, expressEscalation_);
      DARABONBA_PTR_FROM_JSON(noDataAlertLevel, noDataAlertLevel_);
      DARABONBA_PTR_FROM_JSON(noDataAppendValue, noDataAppendValue_);
      DARABONBA_PTR_FROM_JSON(noDataPolicy, noDataPolicy_);
      DARABONBA_PTR_FROM_JSON(oper, oper_);
      DARABONBA_PTR_FROM_JSON(relation, relation_);
      DARABONBA_PTR_FROM_JSON(simpleEscalation, simpleEscalation_);
      DARABONBA_PTR_FROM_JSON(triggers, triggers_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    AlertRuleCondition() = default ;
    AlertRuleCondition(const AlertRuleCondition &) = default ;
    AlertRuleCondition(AlertRuleCondition &&) = default ;
    AlertRuleCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleCondition() = default ;
    AlertRuleCondition& operator=(const AlertRuleCondition &) = default ;
    AlertRuleCondition& operator=(AlertRuleCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Triggers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Triggers& obj) { 
        DARABONBA_PTR_TO_JSON(durationSecs, durationSecs_);
        DARABONBA_PTR_TO_JSON(expression, expression_);
        DARABONBA_PTR_TO_JSON(severity, severity_);
      };
      friend void from_json(const Darabonba::Json& j, Triggers& obj) { 
        DARABONBA_PTR_FROM_JSON(durationSecs, durationSecs_);
        DARABONBA_PTR_FROM_JSON(expression, expression_);
        DARABONBA_PTR_FROM_JSON(severity, severity_);
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
      class Expression : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Expression& obj) { 
          DARABONBA_PTR_TO_JSON(conditions, conditions_);
          DARABONBA_PTR_TO_JSON(expressionType, expressionType_);
          DARABONBA_PTR_TO_JSON(logicOperator, logicOperator_);
        };
        friend void from_json(const Darabonba::Json& j, Expression& obj) { 
          DARABONBA_PTR_FROM_JSON(conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(expressionType, expressionType_);
          DARABONBA_PTR_FROM_JSON(logicOperator, logicOperator_);
        };
        Expression() = default ;
        Expression(const Expression &) = default ;
        Expression(Expression &&) = default ;
        Expression(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Expression() = default ;
        Expression& operator=(const Expression &) = default ;
        Expression& operator=(Expression &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(expressionType, expressionType_);
            DARABONBA_PTR_TO_JSON(operator, operator_);
            DARABONBA_PTR_TO_JSON(queryName, queryName_);
            DARABONBA_PTR_TO_JSON(threshold, threshold_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(expressionType, expressionType_);
            DARABONBA_PTR_FROM_JSON(operator, operator_);
            DARABONBA_PTR_FROM_JSON(queryName, queryName_);
            DARABONBA_PTR_FROM_JSON(threshold, threshold_);
          };
          Conditions() = default ;
          Conditions(const Conditions &) = default ;
          Conditions(Conditions &&) = default ;
          Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Conditions() = default ;
          Conditions& operator=(const Conditions &) = default ;
          Conditions& operator=(Conditions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->expressionType_ == nullptr
        && this->operator_ == nullptr && this->queryName_ == nullptr && this->threshold_ == nullptr; };
          // expressionType Field Functions 
          bool hasExpressionType() const { return this->expressionType_ != nullptr;};
          void deleteExpressionType() { this->expressionType_ = nullptr;};
          inline string getExpressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
          inline Conditions& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline Conditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // queryName Field Functions 
          bool hasQueryName() const { return this->queryName_ != nullptr;};
          void deleteQueryName() { this->queryName_ = nullptr;};
          inline string getQueryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
          inline Conditions& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


          // threshold Field Functions 
          bool hasThreshold() const { return this->threshold_ != nullptr;};
          void deleteThreshold() { this->threshold_ = nullptr;};
          inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
          inline Conditions& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


        protected:
          shared_ptr<string> expressionType_ {};
          shared_ptr<string> operator_ {};
          shared_ptr<string> queryName_ {};
          shared_ptr<double> threshold_ {};
        };

        virtual bool empty() const override { return this->conditions_ == nullptr
        && this->expressionType_ == nullptr && this->logicOperator_ == nullptr; };
        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<Expression::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Expression::Conditions>) };
        inline vector<Expression::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Expression::Conditions>) };
        inline Expression& setConditions(const vector<Expression::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline Expression& setConditions(vector<Expression::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // expressionType Field Functions 
        bool hasExpressionType() const { return this->expressionType_ != nullptr;};
        void deleteExpressionType() { this->expressionType_ = nullptr;};
        inline string getExpressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
        inline Expression& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


        // logicOperator Field Functions 
        bool hasLogicOperator() const { return this->logicOperator_ != nullptr;};
        void deleteLogicOperator() { this->logicOperator_ = nullptr;};
        inline string getLogicOperator() const { DARABONBA_PTR_GET_DEFAULT(logicOperator_, "") };
        inline Expression& setLogicOperator(string logicOperator) { DARABONBA_PTR_SET_VALUE(logicOperator_, logicOperator) };


      protected:
        shared_ptr<vector<Expression::Conditions>> conditions_ {};
        shared_ptr<string> expressionType_ {};
        shared_ptr<string> logicOperator_ {};
      };

      virtual bool empty() const override { return this->durationSecs_ == nullptr
        && this->expression_ == nullptr && this->severity_ == nullptr; };
      // durationSecs Field Functions 
      bool hasDurationSecs() const { return this->durationSecs_ != nullptr;};
      void deleteDurationSecs() { this->durationSecs_ = nullptr;};
      inline int32_t getDurationSecs() const { DARABONBA_PTR_GET_DEFAULT(durationSecs_, 0) };
      inline Triggers& setDurationSecs(int32_t durationSecs) { DARABONBA_PTR_SET_VALUE(durationSecs_, durationSecs) };


      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline const Triggers::Expression & getExpression() const { DARABONBA_PTR_GET_CONST(expression_, Triggers::Expression) };
      inline Triggers::Expression getExpression() { DARABONBA_PTR_GET(expression_, Triggers::Expression) };
      inline Triggers& setExpression(const Triggers::Expression & expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };
      inline Triggers& setExpression(Triggers::Expression && expression) { DARABONBA_PTR_SET_RVALUE(expression_, expression) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline Triggers& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    protected:
      shared_ptr<int32_t> durationSecs_ {};
      shared_ptr<Triggers::Expression> expression_ {};
      shared_ptr<string> severity_ {};
    };

    class SimpleEscalation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SimpleEscalation& obj) { 
        DARABONBA_PTR_TO_JSON(escalations, escalations_);
        DARABONBA_PTR_TO_JSON(metricName, metricName_);
        DARABONBA_PTR_TO_JSON(period, period_);
      };
      friend void from_json(const Darabonba::Json& j, SimpleEscalation& obj) { 
        DARABONBA_PTR_FROM_JSON(escalations, escalations_);
        DARABONBA_PTR_FROM_JSON(metricName, metricName_);
        DARABONBA_PTR_FROM_JSON(period, period_);
      };
      SimpleEscalation() = default ;
      SimpleEscalation(const SimpleEscalation &) = default ;
      SimpleEscalation(SimpleEscalation &&) = default ;
      SimpleEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SimpleEscalation() = default ;
      SimpleEscalation& operator=(const SimpleEscalation &) = default ;
      SimpleEscalation& operator=(SimpleEscalation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Escalations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Escalations& obj) { 
          DARABONBA_PTR_TO_JSON(comparisonOperator, comparisonOperator_);
          DARABONBA_PTR_TO_JSON(level, level_);
          DARABONBA_PTR_TO_JSON(statistics, statistics_);
          DARABONBA_PTR_TO_JSON(threshold, threshold_);
          DARABONBA_PTR_TO_JSON(times, times_);
        };
        friend void from_json(const Darabonba::Json& j, Escalations& obj) { 
          DARABONBA_PTR_FROM_JSON(comparisonOperator, comparisonOperator_);
          DARABONBA_PTR_FROM_JSON(level, level_);
          DARABONBA_PTR_FROM_JSON(statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(threshold, threshold_);
          DARABONBA_PTR_FROM_JSON(times, times_);
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
        virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->level_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
        // comparisonOperator Field Functions 
        bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
        void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
        inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
        inline Escalations& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Escalations& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
        inline Escalations& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
        inline Escalations& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


        // times Field Functions 
        bool hasTimes() const { return this->times_ != nullptr;};
        void deleteTimes() { this->times_ = nullptr;};
        inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
        inline Escalations& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


      protected:
        // The comparison operator for the threshold. Valid values:
        // 
        // - GreaterThanOrEqualToThreshold: Greater than or equal to.
        // 
        // - GreaterThanThreshold: Greater than.
        // 
        // - LessThanOrEqualToThreshold: Less than or equal to.
        // 
        // - LessThanThreshold: Less than.
        // 
        // - NotEqualToThreshold: Not equal to.
        // 
        // - EqualToThreshold: Equal to.
        // 
        // - GreaterThanYesterday: Higher than the value at the same time yesterday.
        // 
        // - LessThanYesterday: Lower than the value at the same time yesterday.
        // 
        // - GreaterThanLastWeek: Higher than the value at the same time last week.
        // 
        // - LessThanLastWeek: Lower than the value at the same time last week.
        // 
        // - GreaterThanLastPeriod: Higher than the value in the previous period.
        // 
        // - LessThanLastPeriod: Lower than the value in the previous period.
        shared_ptr<string> comparisonOperator_ {};
        // The alert level that is triggered when the condition is met. Expression-based alerts support only one level.
        // 
        // - CRITICAL
        // 
        // - WARNING
        // 
        // - INFO
        shared_ptr<string> level_ {};
        // The statistical method. The valid values for this parameter are determined by the Statistics column that corresponds to the MetricName of the specified cloud product. Examples: Maximum, Minimum, and Average.
        shared_ptr<string> statistics_ {};
        // The alert threshold.
        shared_ptr<double> threshold_ {};
        // The number of times the condition must be met to trigger an alert.
        shared_ptr<int32_t> times_ {};
      };

      virtual bool empty() const override { return this->escalations_ == nullptr
        && this->metricName_ == nullptr && this->period_ == nullptr; };
      // escalations Field Functions 
      bool hasEscalations() const { return this->escalations_ != nullptr;};
      void deleteEscalations() { this->escalations_ = nullptr;};
      inline const vector<SimpleEscalation::Escalations> & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<SimpleEscalation::Escalations>) };
      inline vector<SimpleEscalation::Escalations> getEscalations() { DARABONBA_PTR_GET(escalations_, vector<SimpleEscalation::Escalations>) };
      inline SimpleEscalation& setEscalations(const vector<SimpleEscalation::Escalations> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
      inline SimpleEscalation& setEscalations(vector<SimpleEscalation::Escalations> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline SimpleEscalation& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
      inline SimpleEscalation& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    protected:
      // A list of conditions. If an alert rule has multiple levels, each level has a corresponding condition object.
      shared_ptr<vector<SimpleEscalation::Escalations>> escalations_ {};
      // Applicable to the CMS_BASIC_CONDITION type.
      // 
      // The metric associated with the alert condition.
      shared_ptr<string> metricName_ {};
      // The time window for the metric, in seconds.
      shared_ptr<int64_t> period_ {};
    };

    class ExpressEscalation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExpressEscalation& obj) { 
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(rawExpression, rawExpression_);
        DARABONBA_PTR_TO_JSON(times, times_);
      };
      friend void from_json(const Darabonba::Json& j, ExpressEscalation& obj) { 
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(rawExpression, rawExpression_);
        DARABONBA_PTR_FROM_JSON(times, times_);
      };
      ExpressEscalation() = default ;
      ExpressEscalation(const ExpressEscalation &) = default ;
      ExpressEscalation(ExpressEscalation &&) = default ;
      ExpressEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExpressEscalation() = default ;
      ExpressEscalation& operator=(const ExpressEscalation &) = default ;
      ExpressEscalation& operator=(ExpressEscalation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->level_ == nullptr
        && this->rawExpression_ == nullptr && this->times_ == nullptr; };
      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline ExpressEscalation& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // rawExpression Field Functions 
      bool hasRawExpression() const { return this->rawExpression_ != nullptr;};
      void deleteRawExpression() { this->rawExpression_ = nullptr;};
      inline string getRawExpression() const { DARABONBA_PTR_GET_DEFAULT(rawExpression_, "") };
      inline ExpressEscalation& setRawExpression(string rawExpression) { DARABONBA_PTR_SET_VALUE(rawExpression_, rawExpression) };


      // times Field Functions 
      bool hasTimes() const { return this->times_ != nullptr;};
      void deleteTimes() { this->times_ = nullptr;};
      inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
      inline ExpressEscalation& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    protected:
      // The alert level that is triggered when the condition is met. Expression-based alerts support only one level.
      // 
      // - CRITICAL
      // 
      // - WARNING
      // 
      // - INFO
      shared_ptr<string> level_ {};
      // The alert condition expression.
      shared_ptr<string> rawExpression_ {};
      // The number of times the condition must be met to trigger an alert.
      shared_ptr<int32_t> times_ {};
    };

    class CompositeEscalation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CompositeEscalation& obj) { 
        DARABONBA_PTR_TO_JSON(escalations, escalations_);
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(relation, relation_);
        DARABONBA_PTR_TO_JSON(times, times_);
      };
      friend void from_json(const Darabonba::Json& j, CompositeEscalation& obj) { 
        DARABONBA_PTR_FROM_JSON(escalations, escalations_);
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(relation, relation_);
        DARABONBA_PTR_FROM_JSON(times, times_);
      };
      CompositeEscalation() = default ;
      CompositeEscalation(const CompositeEscalation &) = default ;
      CompositeEscalation(CompositeEscalation &&) = default ;
      CompositeEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CompositeEscalation() = default ;
      CompositeEscalation& operator=(const CompositeEscalation &) = default ;
      CompositeEscalation& operator=(CompositeEscalation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Escalations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Escalations& obj) { 
          DARABONBA_PTR_TO_JSON(comparisonOperator, comparisonOperator_);
          DARABONBA_PTR_TO_JSON(metricName, metricName_);
          DARABONBA_PTR_TO_JSON(period, period_);
          DARABONBA_PTR_TO_JSON(statistics, statistics_);
          DARABONBA_PTR_TO_JSON(threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, Escalations& obj) { 
          DARABONBA_PTR_FROM_JSON(comparisonOperator, comparisonOperator_);
          DARABONBA_PTR_FROM_JSON(metricName, metricName_);
          DARABONBA_PTR_FROM_JSON(period, period_);
          DARABONBA_PTR_FROM_JSON(statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(threshold, threshold_);
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
        virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->metricName_ == nullptr && this->period_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr; };
        // comparisonOperator Field Functions 
        bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
        void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
        inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
        inline Escalations& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline Escalations& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
        inline Escalations& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
        inline Escalations& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
        inline Escalations& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        // The comparison operator for the threshold. Valid values:
        // 
        // - GreaterThanOrEqualToThreshold: Greater than or equal to.
        // 
        // - GreaterThanThreshold: Greater than.
        // 
        // - LessThanOrEqualToThreshold: Less than or equal to.
        // 
        // - LessThanThreshold: Less than.
        // 
        // - NotEqualToThreshold: Not equal to.
        // 
        // - EqualToThreshold: Equal to.
        // 
        // - GreaterThanYesterday: Higher than the value at the same time yesterday.
        // 
        // - LessThanYesterday: Lower than the value at the same time yesterday.
        // 
        // - GreaterThanLastWeek: Higher than the value at the same time last week.
        // 
        // - LessThanLastWeek: Lower than the value at the same time last week.
        // 
        // - GreaterThanLastPeriod: Higher than the value in the previous period.
        // 
        // - LessThanLastPeriod: Lower than the value in the previous period.
        shared_ptr<string> comparisonOperator_ {};
        // The name of the metric.
        shared_ptr<string> metricName_ {};
        // The time window for the metric.
        shared_ptr<int64_t> period_ {};
        // The statistical method. The valid values for this parameter are determined by the Statistics column that corresponds to the MetricName of the specified cloud product. Examples of statistical methods for metrics:
        // 
        // - $Maximum: The maximum value.
        // 
        // - $Minimum: The minimum value.
        // 
        // - $Average: The average value.
        // 
        // - $Availability: The availability rate. This is typically used for site monitoring.
        // 
        // Note: The dollar sign ($) is a standard prefix for metrics.
        shared_ptr<string> statistics_ {};
        // The alert threshold.
        shared_ptr<double> threshold_ {};
      };

      virtual bool empty() const override { return this->escalations_ == nullptr
        && this->level_ == nullptr && this->relation_ == nullptr && this->times_ == nullptr; };
      // escalations Field Functions 
      bool hasEscalations() const { return this->escalations_ != nullptr;};
      void deleteEscalations() { this->escalations_ = nullptr;};
      inline const vector<CompositeEscalation::Escalations> & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<CompositeEscalation::Escalations>) };
      inline vector<CompositeEscalation::Escalations> getEscalations() { DARABONBA_PTR_GET(escalations_, vector<CompositeEscalation::Escalations>) };
      inline CompositeEscalation& setEscalations(const vector<CompositeEscalation::Escalations> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
      inline CompositeEscalation& setEscalations(vector<CompositeEscalation::Escalations> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline CompositeEscalation& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // relation Field Functions 
      bool hasRelation() const { return this->relation_ != nullptr;};
      void deleteRelation() { this->relation_ = nullptr;};
      inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
      inline CompositeEscalation& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


      // times Field Functions 
      bool hasTimes() const { return this->times_ != nullptr;};
      void deleteTimes() { this->times_ = nullptr;};
      inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
      inline CompositeEscalation& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    protected:
      // A list of composite conditions for multiple metrics.
      shared_ptr<vector<CompositeEscalation::Escalations>> escalations_ {};
      // The alert level that is triggered when the condition is met. Composite metric alerts support only one level.
      shared_ptr<string> level_ {};
      // The relationship between multiple metric conditions. Valid values: and or or.
      shared_ptr<string> relation_ {};
      // The number of times the condition must be met to trigger an alert.
      shared_ptr<int32_t> times_ {};
    };

    class CompareList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CompareList& obj) { 
        DARABONBA_PTR_TO_JSON(aggregate, aggregate_);
        DARABONBA_PTR_TO_JSON(baseUnit, baseUnit_);
        DARABONBA_PTR_TO_JSON(displayUnit, displayUnit_);
        DARABONBA_PTR_TO_JSON(oper, oper_);
        DARABONBA_PTR_TO_JSON(value, value_);
        DARABONBA_PTR_TO_JSON(valueLevelList, valueLevelList_);
        DARABONBA_PTR_TO_JSON(yoyTimeUnit, yoyTimeUnit_);
        DARABONBA_PTR_TO_JSON(yoyTimeValue, yoyTimeValue_);
      };
      friend void from_json(const Darabonba::Json& j, CompareList& obj) { 
        DARABONBA_PTR_FROM_JSON(aggregate, aggregate_);
        DARABONBA_PTR_FROM_JSON(baseUnit, baseUnit_);
        DARABONBA_PTR_FROM_JSON(displayUnit, displayUnit_);
        DARABONBA_PTR_FROM_JSON(oper, oper_);
        DARABONBA_PTR_FROM_JSON(value, value_);
        DARABONBA_PTR_FROM_JSON(valueLevelList, valueLevelList_);
        DARABONBA_PTR_FROM_JSON(yoyTimeUnit, yoyTimeUnit_);
        DARABONBA_PTR_FROM_JSON(yoyTimeValue, yoyTimeValue_);
      };
      CompareList() = default ;
      CompareList(const CompareList &) = default ;
      CompareList(CompareList &&) = default ;
      CompareList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CompareList() = default ;
      CompareList& operator=(const CompareList &) = default ;
      CompareList& operator=(CompareList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ValueLevelList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ValueLevelList& obj) { 
          DARABONBA_PTR_TO_JSON(level, level_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ValueLevelList& obj) { 
          DARABONBA_PTR_FROM_JSON(level, level_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        ValueLevelList() = default ;
        ValueLevelList(const ValueLevelList &) = default ;
        ValueLevelList(ValueLevelList &&) = default ;
        ValueLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ValueLevelList() = default ;
        ValueLevelList& operator=(const ValueLevelList &) = default ;
        ValueLevelList& operator=(ValueLevelList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->level_ == nullptr
        && this->value_ == nullptr; };
        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline ValueLevelList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline ValueLevelList& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The level corresponding to the threshold.
        shared_ptr<string> level_ {};
        // The threshold for comparison.
        shared_ptr<double> value_ {};
      };

      virtual bool empty() const override { return this->aggregate_ == nullptr
        && this->baseUnit_ == nullptr && this->displayUnit_ == nullptr && this->oper_ == nullptr && this->value_ == nullptr && this->valueLevelList_ == nullptr
        && this->yoyTimeUnit_ == nullptr && this->yoyTimeValue_ == nullptr; };
      // aggregate Field Functions 
      bool hasAggregate() const { return this->aggregate_ != nullptr;};
      void deleteAggregate() { this->aggregate_ = nullptr;};
      inline string getAggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
      inline CompareList& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


      // baseUnit Field Functions 
      bool hasBaseUnit() const { return this->baseUnit_ != nullptr;};
      void deleteBaseUnit() { this->baseUnit_ = nullptr;};
      inline string getBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(baseUnit_, "") };
      inline CompareList& setBaseUnit(string baseUnit) { DARABONBA_PTR_SET_VALUE(baseUnit_, baseUnit) };


      // displayUnit Field Functions 
      bool hasDisplayUnit() const { return this->displayUnit_ != nullptr;};
      void deleteDisplayUnit() { this->displayUnit_ = nullptr;};
      inline string getDisplayUnit() const { DARABONBA_PTR_GET_DEFAULT(displayUnit_, "") };
      inline CompareList& setDisplayUnit(string displayUnit) { DARABONBA_PTR_SET_VALUE(displayUnit_, displayUnit) };


      // oper Field Functions 
      bool hasOper() const { return this->oper_ != nullptr;};
      void deleteOper() { this->oper_ = nullptr;};
      inline string getOper() const { DARABONBA_PTR_GET_DEFAULT(oper_, "") };
      inline CompareList& setOper(string oper) { DARABONBA_PTR_SET_VALUE(oper_, oper) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
      inline CompareList& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      // valueLevelList Field Functions 
      bool hasValueLevelList() const { return this->valueLevelList_ != nullptr;};
      void deleteValueLevelList() { this->valueLevelList_ = nullptr;};
      inline const vector<CompareList::ValueLevelList> & getValueLevelList() const { DARABONBA_PTR_GET_CONST(valueLevelList_, vector<CompareList::ValueLevelList>) };
      inline vector<CompareList::ValueLevelList> getValueLevelList() { DARABONBA_PTR_GET(valueLevelList_, vector<CompareList::ValueLevelList>) };
      inline CompareList& setValueLevelList(const vector<CompareList::ValueLevelList> & valueLevelList) { DARABONBA_PTR_SET_VALUE(valueLevelList_, valueLevelList) };
      inline CompareList& setValueLevelList(vector<CompareList::ValueLevelList> && valueLevelList) { DARABONBA_PTR_SET_RVALUE(valueLevelList_, valueLevelList) };


      // yoyTimeUnit Field Functions 
      bool hasYoyTimeUnit() const { return this->yoyTimeUnit_ != nullptr;};
      void deleteYoyTimeUnit() { this->yoyTimeUnit_ = nullptr;};
      inline string getYoyTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(yoyTimeUnit_, "") };
      inline CompareList& setYoyTimeUnit(string yoyTimeUnit) { DARABONBA_PTR_SET_VALUE(yoyTimeUnit_, yoyTimeUnit) };


      // yoyTimeValue Field Functions 
      bool hasYoyTimeValue() const { return this->yoyTimeValue_ != nullptr;};
      void deleteYoyTimeValue() { this->yoyTimeValue_ = nullptr;};
      inline int32_t getYoyTimeValue() const { DARABONBA_PTR_GET_DEFAULT(yoyTimeValue_, 0) };
      inline CompareList& setYoyTimeValue(int32_t yoyTimeValue) { DARABONBA_PTR_SET_VALUE(yoyTimeValue_, yoyTimeValue) };


    protected:
      // The aggregate function for the time series.
      // 
      // - count
      // 
      // - sum
      // 
      // - avg
      // 
      // - min
      // 
      // - max
      // 
      // - p90
      // 
      // - p95
      // 
      // - p99
      shared_ptr<string> aggregate_ {};
      // The unit of the data.
      shared_ptr<string> baseUnit_ {};
      // The unit for display.
      shared_ptr<string> displayUnit_ {};
      // The comparison operation. It determines whether to perform a year-over-year or period-over-period comparison.
      // 
      // - GT: Greater than.
      // 
      // - GTE: Greater than or equal to.
      // 
      // - LT: Less than.
      // 
      // - LTE: Less than or equal to.
      // 
      // - EQ: Equal to.
      // 
      // - NE: Not equal to.
      // 
      // - YOY_UP: Year-over-year increase.
      // 
      // - YOY_DOWN: Year-over-year decrease.
      shared_ptr<string> oper_ {};
      // The threshold for comparison.
      shared_ptr<double> value_ {};
      // A list of alert levels for different values.
      shared_ptr<vector<CompareList::ValueLevelList>> valueLevelList_ {};
      // The time unit for year-over-year comparison. This parameter is valid only when oper is set to YOY_UP or YOY_DOWN. Valid values: minute, hour, day, week, and month.
      shared_ptr<string> yoyTimeUnit_ {};
      // The time value for year-over-year comparison. Used with yoyTimeUnit.
      shared_ptr<int32_t> yoyTimeValue_ {};
    };

    class CaseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CaseList& obj) { 
        DARABONBA_PTR_TO_JSON(condition, condition_);
        DARABONBA_PTR_TO_JSON(countCondition, countCondition_);
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CaseList& obj) { 
        DARABONBA_PTR_FROM_JSON(condition, condition_);
        DARABONBA_PTR_FROM_JSON(countCondition, countCondition_);
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      CaseList() = default ;
      CaseList(const CaseList &) = default ;
      CaseList(CaseList &&) = default ;
      CaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CaseList() = default ;
      CaseList& operator=(const CaseList &) = default ;
      CaseList& operator=(CaseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->condition_ == nullptr
        && this->countCondition_ == nullptr && this->level_ == nullptr && this->type_ == nullptr; };
      // condition Field Functions 
      bool hasCondition() const { return this->condition_ != nullptr;};
      void deleteCondition() { this->condition_ = nullptr;};
      inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
      inline CaseList& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


      // countCondition Field Functions 
      bool hasCountCondition() const { return this->countCondition_ != nullptr;};
      void deleteCountCondition() { this->countCondition_ = nullptr;};
      inline string getCountCondition() const { DARABONBA_PTR_GET_DEFAULT(countCondition_, "") };
      inline CaseList& setCountCondition(string countCondition) { DARABONBA_PTR_SET_VALUE(countCondition_, countCondition) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline CaseList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CaseList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The matching expression. Example: logLevel: error
      shared_ptr<string> condition_ {};
      // The expression for matching a quantity. Examples:
      // Combined range: **count** >= 3 && **count** <= 10
      // Single range: **count** >= 3
      shared_ptr<string> countCondition_ {};
      // The alert level when the condition is met.
      shared_ptr<string> level_ {};
      // The match type. It can be data availability, a specific number of data entries, a data match, or a specific number of data entry matches.
      // 
      // Valid values:
      // 
      // - HasData: Data is available.
      // 
      // - HasDataCount: A specific number of data entries are available.
      // 
      // - HasDataMatch: Data matches the condition.
      // 
      // - HasDataMatchCount: A specific number of data entries match the condition.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->alertCount_ == nullptr
        && this->caseList_ == nullptr && this->compareList_ == nullptr && this->compositeEscalation_ == nullptr && this->enableSeveritySuppression_ == nullptr && this->escalationType_ == nullptr
        && this->expressEscalation_ == nullptr && this->noDataAlertLevel_ == nullptr && this->noDataAppendValue_ == nullptr && this->noDataPolicy_ == nullptr && this->oper_ == nullptr
        && this->relation_ == nullptr && this->simpleEscalation_ == nullptr && this->triggers_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
    // alertCount Field Functions 
    bool hasAlertCount() const { return this->alertCount_ != nullptr;};
    void deleteAlertCount() { this->alertCount_ = nullptr;};
    inline int32_t getAlertCount() const { DARABONBA_PTR_GET_DEFAULT(alertCount_, 0) };
    inline AlertRuleCondition& setAlertCount(int32_t alertCount) { DARABONBA_PTR_SET_VALUE(alertCount_, alertCount) };


    // caseList Field Functions 
    bool hasCaseList() const { return this->caseList_ != nullptr;};
    void deleteCaseList() { this->caseList_ = nullptr;};
    inline const vector<AlertRuleCondition::CaseList> & getCaseList() const { DARABONBA_PTR_GET_CONST(caseList_, vector<AlertRuleCondition::CaseList>) };
    inline vector<AlertRuleCondition::CaseList> getCaseList() { DARABONBA_PTR_GET(caseList_, vector<AlertRuleCondition::CaseList>) };
    inline AlertRuleCondition& setCaseList(const vector<AlertRuleCondition::CaseList> & caseList) { DARABONBA_PTR_SET_VALUE(caseList_, caseList) };
    inline AlertRuleCondition& setCaseList(vector<AlertRuleCondition::CaseList> && caseList) { DARABONBA_PTR_SET_RVALUE(caseList_, caseList) };


    // compareList Field Functions 
    bool hasCompareList() const { return this->compareList_ != nullptr;};
    void deleteCompareList() { this->compareList_ = nullptr;};
    inline const vector<AlertRuleCondition::CompareList> & getCompareList() const { DARABONBA_PTR_GET_CONST(compareList_, vector<AlertRuleCondition::CompareList>) };
    inline vector<AlertRuleCondition::CompareList> getCompareList() { DARABONBA_PTR_GET(compareList_, vector<AlertRuleCondition::CompareList>) };
    inline AlertRuleCondition& setCompareList(const vector<AlertRuleCondition::CompareList> & compareList) { DARABONBA_PTR_SET_VALUE(compareList_, compareList) };
    inline AlertRuleCondition& setCompareList(vector<AlertRuleCondition::CompareList> && compareList) { DARABONBA_PTR_SET_RVALUE(compareList_, compareList) };


    // compositeEscalation Field Functions 
    bool hasCompositeEscalation() const { return this->compositeEscalation_ != nullptr;};
    void deleteCompositeEscalation() { this->compositeEscalation_ = nullptr;};
    inline const AlertRuleCondition::CompositeEscalation & getCompositeEscalation() const { DARABONBA_PTR_GET_CONST(compositeEscalation_, AlertRuleCondition::CompositeEscalation) };
    inline AlertRuleCondition::CompositeEscalation getCompositeEscalation() { DARABONBA_PTR_GET(compositeEscalation_, AlertRuleCondition::CompositeEscalation) };
    inline AlertRuleCondition& setCompositeEscalation(const AlertRuleCondition::CompositeEscalation & compositeEscalation) { DARABONBA_PTR_SET_VALUE(compositeEscalation_, compositeEscalation) };
    inline AlertRuleCondition& setCompositeEscalation(AlertRuleCondition::CompositeEscalation && compositeEscalation) { DARABONBA_PTR_SET_RVALUE(compositeEscalation_, compositeEscalation) };


    // enableSeveritySuppression Field Functions 
    bool hasEnableSeveritySuppression() const { return this->enableSeveritySuppression_ != nullptr;};
    void deleteEnableSeveritySuppression() { this->enableSeveritySuppression_ = nullptr;};
    inline bool getEnableSeveritySuppression() const { DARABONBA_PTR_GET_DEFAULT(enableSeveritySuppression_, false) };
    inline AlertRuleCondition& setEnableSeveritySuppression(bool enableSeveritySuppression) { DARABONBA_PTR_SET_VALUE(enableSeveritySuppression_, enableSeveritySuppression) };


    // escalationType Field Functions 
    bool hasEscalationType() const { return this->escalationType_ != nullptr;};
    void deleteEscalationType() { this->escalationType_ = nullptr;};
    inline string getEscalationType() const { DARABONBA_PTR_GET_DEFAULT(escalationType_, "") };
    inline AlertRuleCondition& setEscalationType(string escalationType) { DARABONBA_PTR_SET_VALUE(escalationType_, escalationType) };


    // expressEscalation Field Functions 
    bool hasExpressEscalation() const { return this->expressEscalation_ != nullptr;};
    void deleteExpressEscalation() { this->expressEscalation_ = nullptr;};
    inline const AlertRuleCondition::ExpressEscalation & getExpressEscalation() const { DARABONBA_PTR_GET_CONST(expressEscalation_, AlertRuleCondition::ExpressEscalation) };
    inline AlertRuleCondition::ExpressEscalation getExpressEscalation() { DARABONBA_PTR_GET(expressEscalation_, AlertRuleCondition::ExpressEscalation) };
    inline AlertRuleCondition& setExpressEscalation(const AlertRuleCondition::ExpressEscalation & expressEscalation) { DARABONBA_PTR_SET_VALUE(expressEscalation_, expressEscalation) };
    inline AlertRuleCondition& setExpressEscalation(AlertRuleCondition::ExpressEscalation && expressEscalation) { DARABONBA_PTR_SET_RVALUE(expressEscalation_, expressEscalation) };


    // noDataAlertLevel Field Functions 
    bool hasNoDataAlertLevel() const { return this->noDataAlertLevel_ != nullptr;};
    void deleteNoDataAlertLevel() { this->noDataAlertLevel_ = nullptr;};
    inline string getNoDataAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(noDataAlertLevel_, "") };
    inline AlertRuleCondition& setNoDataAlertLevel(string noDataAlertLevel) { DARABONBA_PTR_SET_VALUE(noDataAlertLevel_, noDataAlertLevel) };


    // noDataAppendValue Field Functions 
    bool hasNoDataAppendValue() const { return this->noDataAppendValue_ != nullptr;};
    void deleteNoDataAppendValue() { this->noDataAppendValue_ = nullptr;};
    inline string getNoDataAppendValue() const { DARABONBA_PTR_GET_DEFAULT(noDataAppendValue_, "") };
    inline AlertRuleCondition& setNoDataAppendValue(string noDataAppendValue) { DARABONBA_PTR_SET_VALUE(noDataAppendValue_, noDataAppendValue) };


    // noDataPolicy Field Functions 
    bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
    void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
    inline string getNoDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
    inline AlertRuleCondition& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


    // oper Field Functions 
    bool hasOper() const { return this->oper_ != nullptr;};
    void deleteOper() { this->oper_ = nullptr;};
    inline string getOper() const { DARABONBA_PTR_GET_DEFAULT(oper_, "") };
    inline AlertRuleCondition& setOper(string oper) { DARABONBA_PTR_SET_VALUE(oper_, oper) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline AlertRuleCondition& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // simpleEscalation Field Functions 
    bool hasSimpleEscalation() const { return this->simpleEscalation_ != nullptr;};
    void deleteSimpleEscalation() { this->simpleEscalation_ = nullptr;};
    inline const AlertRuleCondition::SimpleEscalation & getSimpleEscalation() const { DARABONBA_PTR_GET_CONST(simpleEscalation_, AlertRuleCondition::SimpleEscalation) };
    inline AlertRuleCondition::SimpleEscalation getSimpleEscalation() { DARABONBA_PTR_GET(simpleEscalation_, AlertRuleCondition::SimpleEscalation) };
    inline AlertRuleCondition& setSimpleEscalation(const AlertRuleCondition::SimpleEscalation & simpleEscalation) { DARABONBA_PTR_SET_VALUE(simpleEscalation_, simpleEscalation) };
    inline AlertRuleCondition& setSimpleEscalation(AlertRuleCondition::SimpleEscalation && simpleEscalation) { DARABONBA_PTR_SET_RVALUE(simpleEscalation_, simpleEscalation) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<AlertRuleCondition::Triggers> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<AlertRuleCondition::Triggers>) };
    inline vector<AlertRuleCondition::Triggers> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<AlertRuleCondition::Triggers>) };
    inline AlertRuleCondition& setTriggers(const vector<AlertRuleCondition::Triggers> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline AlertRuleCondition& setTriggers(vector<AlertRuleCondition::Triggers> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleCondition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline AlertRuleCondition& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Applicable to the SLS_CONDITION type.
    // 
    // The number of times the condition must be met to trigger an alert. The default value is 1.
    shared_ptr<int32_t> alertCount_ {};
    // Applicable to the SLS_CONDITION type.
    // 
    // A list of SLS alert conditions.
    shared_ptr<vector<AlertRuleCondition::CaseList>> caseList_ {};
    // Applicable to the APM_CONDITION type.
    // 
    // A list of Application Performance Management (APM) alert comparison conditions.
    shared_ptr<vector<AlertRuleCondition::CompareList>> compareList_ {};
    // Applicable to the CMS_BASIC_CONDITION type.
    // 
    // This parameter is valid only when escalationType is set to composite. It specifies the alert condition for composite metrics.
    shared_ptr<AlertRuleCondition::CompositeEscalation> compositeEscalation_ {};
    shared_ptr<bool> enableSeveritySuppression_ {};
    // Applicable to the CMS_BASIC_CONDITION type.
    // 
    // Valid values:
    // 
    // - simple: A simple metric condition.
    // 
    // - composite: A composite metric condition.
    // 
    // - express: An expression-based condition.
    shared_ptr<string> escalationType_ {};
    // This parameter is applicable only to the CMS_BASIC_CONDITION condition type.
    // 
    // This parameter takes effect when escalationType is set to composite. It defines the conditions for a composite alert based on multiple metrics.
    shared_ptr<AlertRuleCondition::ExpressEscalation> expressEscalation_ {};
    // Applicable to the APM_CONDITION type.
    // 
    // The alert level for when no data is available. If you do not specify this parameter, no alert is triggered when no data is available.
    shared_ptr<string> noDataAlertLevel_ {};
    // Applicable to the APM_CONDITION type.
    // 
    // The value to use when no data is available.
    shared_ptr<string> noDataAppendValue_ {};
    // Applicable to the CMS_BASIC_CONDITION type.
    // 
    // The method for handling alerts when no monitoring data is available. Valid values:
    // 
    // - KEEP_LAST_STATE (default): No action is taken.
    // 
    // - INSUFFICIENT_DATA: The alert content indicates that no data is available.
    // 
    // - OK: The status is normal.
    shared_ptr<string> noDataPolicy_ {};
    // The comparison operation. It determines whether to perform a year-over-year or period-over-period comparison.
    // 
    // - GT: Greater than.
    // 
    // - GTE: Greater than or equal to.
    // 
    // - LT: Less than.
    // 
    // - LTE: Less than or equal to.
    // 
    // - EQ: Equal to.
    // 
    // - NE: Not equal to.
    // 
    // - YOY_UP: Year-over-year increase.
    // 
    // - YOY_DOWN: Year-over-year decrease.
    shared_ptr<string> oper_ {};
    // Applicable to the APM_CONDITION type.
    // 
    // The logical relationship between multiple conditions. Valid values:
    // 
    // - and
    // 
    // - or
    shared_ptr<string> relation_ {};
    // Applicable to the CMS_BASIC_CONDITION type.
    // 
    // This parameter is valid only when escalationType is set to simple. It specifies the alert condition for a single metric.
    shared_ptr<AlertRuleCondition::SimpleEscalation> simpleEscalation_ {};
    shared_ptr<vector<AlertRuleCondition::Triggers>> triggers_ {};
    // The type of the rule condition. Valid values:
    // 
    // - SLS_CONDITION: An SLS alert condition.
    // 
    // - APM_CONDITION: An APM alert condition.
    // 
    // - CMS_BASIC_CONDITION: A basic Cloud Monitor alert condition.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The threshold that triggers an alert.
    shared_ptr<double> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
