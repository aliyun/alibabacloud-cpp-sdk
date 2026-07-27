// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERS_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TriggerConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class Triggers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Triggers& obj) { 
      DARABONBA_PTR_TO_JSON(comparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(countOperator, countOperator_);
      DARABONBA_PTR_TO_JSON(countThreshold, countThreshold_);
      DARABONBA_PTR_TO_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_TO_JSON(expressionType, expressionType_);
      DARABONBA_PTR_TO_JSON(logicOperator, logicOperator_);
      DARABONBA_PTR_TO_JSON(matchField, matchField_);
      DARABONBA_PTR_TO_JSON(matchOperator, matchOperator_);
      DARABONBA_PTR_TO_JSON(matchValue, matchValue_);
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(preCondition, preCondition_);
      DARABONBA_PTR_TO_JSON(queryName, queryName_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(statistics, statistics_);
      DARABONBA_ANY_TO_JSON(threshold, threshold_);
      DARABONBA_PTR_TO_JSON(times, times_);
    };
    friend void from_json(const Darabonba::Json& j, Triggers& obj) { 
      DARABONBA_PTR_FROM_JSON(comparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(countOperator, countOperator_);
      DARABONBA_PTR_FROM_JSON(countThreshold, countThreshold_);
      DARABONBA_PTR_FROM_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_FROM_JSON(expressionType, expressionType_);
      DARABONBA_PTR_FROM_JSON(logicOperator, logicOperator_);
      DARABONBA_PTR_FROM_JSON(matchField, matchField_);
      DARABONBA_PTR_FROM_JSON(matchOperator, matchOperator_);
      DARABONBA_PTR_FROM_JSON(matchValue, matchValue_);
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(preCondition, preCondition_);
      DARABONBA_PTR_FROM_JSON(queryName, queryName_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(statistics, statistics_);
      DARABONBA_ANY_FROM_JSON(threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(times, times_);
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
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->conditions_ == nullptr && this->countOperator_ == nullptr && this->countThreshold_ == nullptr && this->durationSecs_ == nullptr && this->expressionType_ == nullptr
        && this->logicOperator_ == nullptr && this->matchField_ == nullptr && this->matchOperator_ == nullptr && this->matchValue_ == nullptr && this->max_ == nullptr
        && this->metricName_ == nullptr && this->min_ == nullptr && this->operator_ == nullptr && this->period_ == nullptr && this->preCondition_ == nullptr
        && this->queryName_ == nullptr && this->severity_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline Triggers& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<TriggerConditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<TriggerConditions>) };
    inline vector<TriggerConditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<TriggerConditions>) };
    inline Triggers& setConditions(const vector<TriggerConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline Triggers& setConditions(vector<TriggerConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // countOperator Field Functions 
    bool hasCountOperator() const { return this->countOperator_ != nullptr;};
    void deleteCountOperator() { this->countOperator_ = nullptr;};
    inline string getCountOperator() const { DARABONBA_PTR_GET_DEFAULT(countOperator_, "") };
    inline Triggers& setCountOperator(string countOperator) { DARABONBA_PTR_SET_VALUE(countOperator_, countOperator) };


    // countThreshold Field Functions 
    bool hasCountThreshold() const { return this->countThreshold_ != nullptr;};
    void deleteCountThreshold() { this->countThreshold_ = nullptr;};
    inline int64_t getCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(countThreshold_, 0L) };
    inline Triggers& setCountThreshold(int64_t countThreshold) { DARABONBA_PTR_SET_VALUE(countThreshold_, countThreshold) };


    // durationSecs Field Functions 
    bool hasDurationSecs() const { return this->durationSecs_ != nullptr;};
    void deleteDurationSecs() { this->durationSecs_ = nullptr;};
    inline int32_t getDurationSecs() const { DARABONBA_PTR_GET_DEFAULT(durationSecs_, 0) };
    inline Triggers& setDurationSecs(int32_t durationSecs) { DARABONBA_PTR_SET_VALUE(durationSecs_, durationSecs) };


    // expressionType Field Functions 
    bool hasExpressionType() const { return this->expressionType_ != nullptr;};
    void deleteExpressionType() { this->expressionType_ = nullptr;};
    inline string getExpressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
    inline Triggers& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


    // logicOperator Field Functions 
    bool hasLogicOperator() const { return this->logicOperator_ != nullptr;};
    void deleteLogicOperator() { this->logicOperator_ = nullptr;};
    inline string getLogicOperator() const { DARABONBA_PTR_GET_DEFAULT(logicOperator_, "") };
    inline Triggers& setLogicOperator(string logicOperator) { DARABONBA_PTR_SET_VALUE(logicOperator_, logicOperator) };


    // matchField Field Functions 
    bool hasMatchField() const { return this->matchField_ != nullptr;};
    void deleteMatchField() { this->matchField_ = nullptr;};
    inline string getMatchField() const { DARABONBA_PTR_GET_DEFAULT(matchField_, "") };
    inline Triggers& setMatchField(string matchField) { DARABONBA_PTR_SET_VALUE(matchField_, matchField) };


    // matchOperator Field Functions 
    bool hasMatchOperator() const { return this->matchOperator_ != nullptr;};
    void deleteMatchOperator() { this->matchOperator_ = nullptr;};
    inline string getMatchOperator() const { DARABONBA_PTR_GET_DEFAULT(matchOperator_, "") };
    inline Triggers& setMatchOperator(string matchOperator) { DARABONBA_PTR_SET_VALUE(matchOperator_, matchOperator) };


    // matchValue Field Functions 
    bool hasMatchValue() const { return this->matchValue_ != nullptr;};
    void deleteMatchValue() { this->matchValue_ = nullptr;};
    inline string getMatchValue() const { DARABONBA_PTR_GET_DEFAULT(matchValue_, "") };
    inline Triggers& setMatchValue(string matchValue) { DARABONBA_PTR_SET_VALUE(matchValue_, matchValue) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline double getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
    inline Triggers& setMax(double max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline Triggers& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline double getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
    inline Triggers& setMin(double min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline Triggers& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline Triggers& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // preCondition Field Functions 
    bool hasPreCondition() const { return this->preCondition_ != nullptr;};
    void deletePreCondition() { this->preCondition_ = nullptr;};
    inline string getPreCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
    inline Triggers& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


    // queryName Field Functions 
    bool hasQueryName() const { return this->queryName_ != nullptr;};
    void deleteQueryName() { this->queryName_ = nullptr;};
    inline string getQueryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
    inline Triggers& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline Triggers& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline Triggers& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline     const Darabonba::Json & getThreshold() const { DARABONBA_GET(threshold_) };
    Darabonba::Json & getThreshold() { DARABONBA_GET(threshold_) };
    inline Triggers& setThreshold(const Darabonba::Json & threshold) { DARABONBA_SET_VALUE(threshold_, threshold) };
    inline Triggers& setThreshold(Darabonba::Json && threshold) { DARABONBA_SET_RVALUE(threshold_, threshold) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline Triggers& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    shared_ptr<string> comparisonOperator_ {};
    shared_ptr<vector<TriggerConditions>> conditions_ {};
    shared_ptr<string> countOperator_ {};
    shared_ptr<int64_t> countThreshold_ {};
    shared_ptr<int32_t> durationSecs_ {};
    shared_ptr<string> expressionType_ {};
    shared_ptr<string> logicOperator_ {};
    shared_ptr<string> matchField_ {};
    shared_ptr<string> matchOperator_ {};
    shared_ptr<string> matchValue_ {};
    shared_ptr<double> max_ {};
    shared_ptr<string> metricName_ {};
    shared_ptr<double> min_ {};
    shared_ptr<string> operator_ {};
    shared_ptr<int32_t> period_ {};
    shared_ptr<string> preCondition_ {};
    shared_ptr<string> queryName_ {};
    shared_ptr<string> severity_ {};
    shared_ptr<string> statistics_ {};
    Darabonba::Json threshold_ {};
    shared_ptr<int32_t> times_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
