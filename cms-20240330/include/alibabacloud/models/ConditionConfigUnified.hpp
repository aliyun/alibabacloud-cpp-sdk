// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONDITIONCONFIGUNIFIED_HPP_
#define ALIBABACLOUD_MODELS_CONDITIONCONFIGUNIFIED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApmCompositeCompareConfig.hpp>
#include <alibabacloud/models/CloudMonitoringCompositeEscalation.hpp>
#include <alibabacloud/models/CloudMonitoringExpressEscalation.hpp>
#include <alibabacloud/models/CloudMonitoringPrometheusEscalation.hpp>
#include <alibabacloud/models/CloudMonitoringSimpleEscalation.hpp>
#include <alibabacloud/models/ApmThresholdConfig.hpp>
#include <alibabacloud/models/MetricSetMultiTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ConditionConfigUnified : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConditionConfigUnified& obj) { 
      DARABONBA_PTR_TO_JSON(aggregate, aggregate_);
      DARABONBA_PTR_TO_JSON(compareList, compareList_);
      DARABONBA_PTR_TO_JSON(compositeEscalation, compositeEscalation_);
      DARABONBA_PTR_TO_JSON(countOperator, countOperator_);
      DARABONBA_PTR_TO_JSON(countThreshold, countThreshold_);
      DARABONBA_PTR_TO_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_TO_JSON(enableSeveritySuppression, enableSeveritySuppression_);
      DARABONBA_PTR_TO_JSON(escalationType, escalationType_);
      DARABONBA_PTR_TO_JSON(expressEscalation, expressEscalation_);
      DARABONBA_PTR_TO_JSON(legacyRaw, legacyRaw_);
      DARABONBA_PTR_TO_JSON(legacyType, legacyType_);
      DARABONBA_PTR_TO_JSON(matchField, matchField_);
      DARABONBA_PTR_TO_JSON(matchOperator, matchOperator_);
      DARABONBA_PTR_TO_JSON(matchValue, matchValue_);
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(noDataPolicy, noDataPolicy_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(prometheus, prometheus_);
      DARABONBA_PTR_TO_JSON(relation, relation_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(simpleEscalation, simpleEscalation_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
      DARABONBA_PTR_TO_JSON(thresholdList, thresholdList_);
      DARABONBA_PTR_TO_JSON(triggers, triggers_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(yoyTimeUnit, yoyTimeUnit_);
      DARABONBA_PTR_TO_JSON(yoyTimeValue, yoyTimeValue_);
    };
    friend void from_json(const Darabonba::Json& j, ConditionConfigUnified& obj) { 
      DARABONBA_PTR_FROM_JSON(aggregate, aggregate_);
      DARABONBA_PTR_FROM_JSON(compareList, compareList_);
      DARABONBA_PTR_FROM_JSON(compositeEscalation, compositeEscalation_);
      DARABONBA_PTR_FROM_JSON(countOperator, countOperator_);
      DARABONBA_PTR_FROM_JSON(countThreshold, countThreshold_);
      DARABONBA_PTR_FROM_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_FROM_JSON(enableSeveritySuppression, enableSeveritySuppression_);
      DARABONBA_PTR_FROM_JSON(escalationType, escalationType_);
      DARABONBA_PTR_FROM_JSON(expressEscalation, expressEscalation_);
      DARABONBA_PTR_FROM_JSON(legacyRaw, legacyRaw_);
      DARABONBA_PTR_FROM_JSON(legacyType, legacyType_);
      DARABONBA_PTR_FROM_JSON(matchField, matchField_);
      DARABONBA_PTR_FROM_JSON(matchOperator, matchOperator_);
      DARABONBA_PTR_FROM_JSON(matchValue, matchValue_);
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(noDataPolicy, noDataPolicy_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(prometheus, prometheus_);
      DARABONBA_PTR_FROM_JSON(relation, relation_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(simpleEscalation, simpleEscalation_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(thresholdList, thresholdList_);
      DARABONBA_PTR_FROM_JSON(triggers, triggers_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(yoyTimeUnit, yoyTimeUnit_);
      DARABONBA_PTR_FROM_JSON(yoyTimeValue, yoyTimeValue_);
    };
    ConditionConfigUnified() = default ;
    ConditionConfigUnified(const ConditionConfigUnified &) = default ;
    ConditionConfigUnified(ConditionConfigUnified &&) = default ;
    ConditionConfigUnified(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConditionConfigUnified() = default ;
    ConditionConfigUnified& operator=(const ConditionConfigUnified &) = default ;
    ConditionConfigUnified& operator=(ConditionConfigUnified &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregate_ == nullptr
        && this->compareList_ == nullptr && this->compositeEscalation_ == nullptr && this->countOperator_ == nullptr && this->countThreshold_ == nullptr && this->durationSecs_ == nullptr
        && this->enableSeveritySuppression_ == nullptr && this->escalationType_ == nullptr && this->expressEscalation_ == nullptr && this->legacyRaw_ == nullptr && this->legacyType_ == nullptr
        && this->matchField_ == nullptr && this->matchOperator_ == nullptr && this->matchValue_ == nullptr && this->max_ == nullptr && this->min_ == nullptr
        && this->noDataPolicy_ == nullptr && this->operator_ == nullptr && this->prometheus_ == nullptr && this->relation_ == nullptr && this->severity_ == nullptr
        && this->simpleEscalation_ == nullptr && this->threshold_ == nullptr && this->thresholdList_ == nullptr && this->triggers_ == nullptr && this->type_ == nullptr
        && this->yoyTimeUnit_ == nullptr && this->yoyTimeValue_ == nullptr; };
    // aggregate Field Functions 
    bool hasAggregate() const { return this->aggregate_ != nullptr;};
    void deleteAggregate() { this->aggregate_ = nullptr;};
    inline string getAggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
    inline ConditionConfigUnified& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


    // compareList Field Functions 
    bool hasCompareList() const { return this->compareList_ != nullptr;};
    void deleteCompareList() { this->compareList_ = nullptr;};
    inline const vector<ApmCompositeCompareConfig> & getCompareList() const { DARABONBA_PTR_GET_CONST(compareList_, vector<ApmCompositeCompareConfig>) };
    inline vector<ApmCompositeCompareConfig> getCompareList() { DARABONBA_PTR_GET(compareList_, vector<ApmCompositeCompareConfig>) };
    inline ConditionConfigUnified& setCompareList(const vector<ApmCompositeCompareConfig> & compareList) { DARABONBA_PTR_SET_VALUE(compareList_, compareList) };
    inline ConditionConfigUnified& setCompareList(vector<ApmCompositeCompareConfig> && compareList) { DARABONBA_PTR_SET_RVALUE(compareList_, compareList) };


    // compositeEscalation Field Functions 
    bool hasCompositeEscalation() const { return this->compositeEscalation_ != nullptr;};
    void deleteCompositeEscalation() { this->compositeEscalation_ = nullptr;};
    inline const CloudMonitoringCompositeEscalation & getCompositeEscalation() const { DARABONBA_PTR_GET_CONST(compositeEscalation_, CloudMonitoringCompositeEscalation) };
    inline CloudMonitoringCompositeEscalation getCompositeEscalation() { DARABONBA_PTR_GET(compositeEscalation_, CloudMonitoringCompositeEscalation) };
    inline ConditionConfigUnified& setCompositeEscalation(const CloudMonitoringCompositeEscalation & compositeEscalation) { DARABONBA_PTR_SET_VALUE(compositeEscalation_, compositeEscalation) };
    inline ConditionConfigUnified& setCompositeEscalation(CloudMonitoringCompositeEscalation && compositeEscalation) { DARABONBA_PTR_SET_RVALUE(compositeEscalation_, compositeEscalation) };


    // countOperator Field Functions 
    bool hasCountOperator() const { return this->countOperator_ != nullptr;};
    void deleteCountOperator() { this->countOperator_ = nullptr;};
    inline string getCountOperator() const { DARABONBA_PTR_GET_DEFAULT(countOperator_, "") };
    inline ConditionConfigUnified& setCountOperator(string countOperator) { DARABONBA_PTR_SET_VALUE(countOperator_, countOperator) };


    // countThreshold Field Functions 
    bool hasCountThreshold() const { return this->countThreshold_ != nullptr;};
    void deleteCountThreshold() { this->countThreshold_ = nullptr;};
    inline int64_t getCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(countThreshold_, 0L) };
    inline ConditionConfigUnified& setCountThreshold(int64_t countThreshold) { DARABONBA_PTR_SET_VALUE(countThreshold_, countThreshold) };


    // durationSecs Field Functions 
    bool hasDurationSecs() const { return this->durationSecs_ != nullptr;};
    void deleteDurationSecs() { this->durationSecs_ = nullptr;};
    inline int32_t getDurationSecs() const { DARABONBA_PTR_GET_DEFAULT(durationSecs_, 0) };
    inline ConditionConfigUnified& setDurationSecs(int32_t durationSecs) { DARABONBA_PTR_SET_VALUE(durationSecs_, durationSecs) };


    // enableSeveritySuppression Field Functions 
    bool hasEnableSeveritySuppression() const { return this->enableSeveritySuppression_ != nullptr;};
    void deleteEnableSeveritySuppression() { this->enableSeveritySuppression_ = nullptr;};
    inline bool getEnableSeveritySuppression() const { DARABONBA_PTR_GET_DEFAULT(enableSeveritySuppression_, false) };
    inline ConditionConfigUnified& setEnableSeveritySuppression(bool enableSeveritySuppression) { DARABONBA_PTR_SET_VALUE(enableSeveritySuppression_, enableSeveritySuppression) };


    // escalationType Field Functions 
    bool hasEscalationType() const { return this->escalationType_ != nullptr;};
    void deleteEscalationType() { this->escalationType_ = nullptr;};
    inline string getEscalationType() const { DARABONBA_PTR_GET_DEFAULT(escalationType_, "") };
    inline ConditionConfigUnified& setEscalationType(string escalationType) { DARABONBA_PTR_SET_VALUE(escalationType_, escalationType) };


    // expressEscalation Field Functions 
    bool hasExpressEscalation() const { return this->expressEscalation_ != nullptr;};
    void deleteExpressEscalation() { this->expressEscalation_ = nullptr;};
    inline const CloudMonitoringExpressEscalation & getExpressEscalation() const { DARABONBA_PTR_GET_CONST(expressEscalation_, CloudMonitoringExpressEscalation) };
    inline CloudMonitoringExpressEscalation getExpressEscalation() { DARABONBA_PTR_GET(expressEscalation_, CloudMonitoringExpressEscalation) };
    inline ConditionConfigUnified& setExpressEscalation(const CloudMonitoringExpressEscalation & expressEscalation) { DARABONBA_PTR_SET_VALUE(expressEscalation_, expressEscalation) };
    inline ConditionConfigUnified& setExpressEscalation(CloudMonitoringExpressEscalation && expressEscalation) { DARABONBA_PTR_SET_RVALUE(expressEscalation_, expressEscalation) };


    // legacyRaw Field Functions 
    bool hasLegacyRaw() const { return this->legacyRaw_ != nullptr;};
    void deleteLegacyRaw() { this->legacyRaw_ = nullptr;};
    inline string getLegacyRaw() const { DARABONBA_PTR_GET_DEFAULT(legacyRaw_, "") };
    inline ConditionConfigUnified& setLegacyRaw(string legacyRaw) { DARABONBA_PTR_SET_VALUE(legacyRaw_, legacyRaw) };


    // legacyType Field Functions 
    bool hasLegacyType() const { return this->legacyType_ != nullptr;};
    void deleteLegacyType() { this->legacyType_ = nullptr;};
    inline string getLegacyType() const { DARABONBA_PTR_GET_DEFAULT(legacyType_, "") };
    inline ConditionConfigUnified& setLegacyType(string legacyType) { DARABONBA_PTR_SET_VALUE(legacyType_, legacyType) };


    // matchField Field Functions 
    bool hasMatchField() const { return this->matchField_ != nullptr;};
    void deleteMatchField() { this->matchField_ = nullptr;};
    inline string getMatchField() const { DARABONBA_PTR_GET_DEFAULT(matchField_, "") };
    inline ConditionConfigUnified& setMatchField(string matchField) { DARABONBA_PTR_SET_VALUE(matchField_, matchField) };


    // matchOperator Field Functions 
    bool hasMatchOperator() const { return this->matchOperator_ != nullptr;};
    void deleteMatchOperator() { this->matchOperator_ = nullptr;};
    inline string getMatchOperator() const { DARABONBA_PTR_GET_DEFAULT(matchOperator_, "") };
    inline ConditionConfigUnified& setMatchOperator(string matchOperator) { DARABONBA_PTR_SET_VALUE(matchOperator_, matchOperator) };


    // matchValue Field Functions 
    bool hasMatchValue() const { return this->matchValue_ != nullptr;};
    void deleteMatchValue() { this->matchValue_ = nullptr;};
    inline string getMatchValue() const { DARABONBA_PTR_GET_DEFAULT(matchValue_, "") };
    inline ConditionConfigUnified& setMatchValue(string matchValue) { DARABONBA_PTR_SET_VALUE(matchValue_, matchValue) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline double getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
    inline ConditionConfigUnified& setMax(double max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline double getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
    inline ConditionConfigUnified& setMin(double min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // noDataPolicy Field Functions 
    bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
    void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
    inline string getNoDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
    inline ConditionConfigUnified& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ConditionConfigUnified& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // prometheus Field Functions 
    bool hasPrometheus() const { return this->prometheus_ != nullptr;};
    void deletePrometheus() { this->prometheus_ = nullptr;};
    inline const CloudMonitoringPrometheusEscalation & getPrometheus() const { DARABONBA_PTR_GET_CONST(prometheus_, CloudMonitoringPrometheusEscalation) };
    inline CloudMonitoringPrometheusEscalation getPrometheus() { DARABONBA_PTR_GET(prometheus_, CloudMonitoringPrometheusEscalation) };
    inline ConditionConfigUnified& setPrometheus(const CloudMonitoringPrometheusEscalation & prometheus) { DARABONBA_PTR_SET_VALUE(prometheus_, prometheus) };
    inline ConditionConfigUnified& setPrometheus(CloudMonitoringPrometheusEscalation && prometheus) { DARABONBA_PTR_SET_RVALUE(prometheus_, prometheus) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline ConditionConfigUnified& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ConditionConfigUnified& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // simpleEscalation Field Functions 
    bool hasSimpleEscalation() const { return this->simpleEscalation_ != nullptr;};
    void deleteSimpleEscalation() { this->simpleEscalation_ = nullptr;};
    inline const CloudMonitoringSimpleEscalation & getSimpleEscalation() const { DARABONBA_PTR_GET_CONST(simpleEscalation_, CloudMonitoringSimpleEscalation) };
    inline CloudMonitoringSimpleEscalation getSimpleEscalation() { DARABONBA_PTR_GET(simpleEscalation_, CloudMonitoringSimpleEscalation) };
    inline ConditionConfigUnified& setSimpleEscalation(const CloudMonitoringSimpleEscalation & simpleEscalation) { DARABONBA_PTR_SET_VALUE(simpleEscalation_, simpleEscalation) };
    inline ConditionConfigUnified& setSimpleEscalation(CloudMonitoringSimpleEscalation && simpleEscalation) { DARABONBA_PTR_SET_RVALUE(simpleEscalation_, simpleEscalation) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ConditionConfigUnified& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // thresholdList Field Functions 
    bool hasThresholdList() const { return this->thresholdList_ != nullptr;};
    void deleteThresholdList() { this->thresholdList_ = nullptr;};
    inline const vector<ApmThresholdConfig> & getThresholdList() const { DARABONBA_PTR_GET_CONST(thresholdList_, vector<ApmThresholdConfig>) };
    inline vector<ApmThresholdConfig> getThresholdList() { DARABONBA_PTR_GET(thresholdList_, vector<ApmThresholdConfig>) };
    inline ConditionConfigUnified& setThresholdList(const vector<ApmThresholdConfig> & thresholdList) { DARABONBA_PTR_SET_VALUE(thresholdList_, thresholdList) };
    inline ConditionConfigUnified& setThresholdList(vector<ApmThresholdConfig> && thresholdList) { DARABONBA_PTR_SET_RVALUE(thresholdList_, thresholdList) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<MetricSetMultiTrigger> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<MetricSetMultiTrigger>) };
    inline vector<MetricSetMultiTrigger> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<MetricSetMultiTrigger>) };
    inline ConditionConfigUnified& setTriggers(const vector<MetricSetMultiTrigger> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline ConditionConfigUnified& setTriggers(vector<MetricSetMultiTrigger> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ConditionConfigUnified& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // yoyTimeUnit Field Functions 
    bool hasYoyTimeUnit() const { return this->yoyTimeUnit_ != nullptr;};
    void deleteYoyTimeUnit() { this->yoyTimeUnit_ = nullptr;};
    inline string getYoyTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(yoyTimeUnit_, "") };
    inline ConditionConfigUnified& setYoyTimeUnit(string yoyTimeUnit) { DARABONBA_PTR_SET_VALUE(yoyTimeUnit_, yoyTimeUnit) };


    // yoyTimeValue Field Functions 
    bool hasYoyTimeValue() const { return this->yoyTimeValue_ != nullptr;};
    void deleteYoyTimeValue() { this->yoyTimeValue_ = nullptr;};
    inline int32_t getYoyTimeValue() const { DARABONBA_PTR_GET_DEFAULT(yoyTimeValue_, 0) };
    inline ConditionConfigUnified& setYoyTimeValue(int32_t yoyTimeValue) { DARABONBA_PTR_SET_VALUE(yoyTimeValue_, yoyTimeValue) };


  protected:
    shared_ptr<string> aggregate_ {};
    shared_ptr<vector<ApmCompositeCompareConfig>> compareList_ {};
    shared_ptr<CloudMonitoringCompositeEscalation> compositeEscalation_ {};
    shared_ptr<string> countOperator_ {};
    shared_ptr<int64_t> countThreshold_ {};
    shared_ptr<int32_t> durationSecs_ {};
    shared_ptr<bool> enableSeveritySuppression_ {};
    shared_ptr<string> escalationType_ {};
    shared_ptr<CloudMonitoringExpressEscalation> expressEscalation_ {};
    shared_ptr<string> legacyRaw_ {};
    shared_ptr<string> legacyType_ {};
    shared_ptr<string> matchField_ {};
    shared_ptr<string> matchOperator_ {};
    shared_ptr<string> matchValue_ {};
    shared_ptr<double> max_ {};
    shared_ptr<double> min_ {};
    shared_ptr<string> noDataPolicy_ {};
    shared_ptr<string> operator_ {};
    shared_ptr<CloudMonitoringPrometheusEscalation> prometheus_ {};
    shared_ptr<string> relation_ {};
    shared_ptr<string> severity_ {};
    shared_ptr<CloudMonitoringSimpleEscalation> simpleEscalation_ {};
    shared_ptr<double> threshold_ {};
    shared_ptr<vector<ApmThresholdConfig>> thresholdList_ {};
    shared_ptr<vector<MetricSetMultiTrigger>> triggers_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
    shared_ptr<string> yoyTimeUnit_ {};
    shared_ptr<int32_t> yoyTimeValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
