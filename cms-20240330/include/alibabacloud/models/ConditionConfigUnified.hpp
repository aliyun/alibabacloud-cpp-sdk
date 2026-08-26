// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONDITIONCONFIGUNIFIED_HPP_
#define ALIBABACLOUD_MODELS_CONDITIONCONFIGUNIFIED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CompareList.hpp>
#include <alibabacloud/models/CloudMonitoringCompositeEscalation.hpp>
#include <alibabacloud/models/CloudMonitoringExpressEscalation.hpp>
#include <alibabacloud/models/CloudMonitoringPrometheusEscalation.hpp>
#include <alibabacloud/models/CloudMonitoringSimpleEscalation.hpp>
#include <alibabacloud/models/ThresholdList.hpp>
#include <alibabacloud/models/Triggers.hpp>
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
      DARABONBA_PTR_TO_JSON(alertCount, alertCount_);
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
      DARABONBA_PTR_TO_JSON(noDataAlertLevel, noDataAlertLevel_);
      DARABONBA_PTR_TO_JSON(noDataAlertSeverity, noDataAlertSeverity_);
      DARABONBA_PTR_TO_JSON(noDataAppendValue, noDataAppendValue_);
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
      DARABONBA_PTR_FROM_JSON(alertCount, alertCount_);
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
      DARABONBA_PTR_FROM_JSON(noDataAlertLevel, noDataAlertLevel_);
      DARABONBA_PTR_FROM_JSON(noDataAlertSeverity, noDataAlertSeverity_);
      DARABONBA_PTR_FROM_JSON(noDataAppendValue, noDataAppendValue_);
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
        && this->alertCount_ == nullptr && this->compareList_ == nullptr && this->compositeEscalation_ == nullptr && this->countOperator_ == nullptr && this->countThreshold_ == nullptr
        && this->durationSecs_ == nullptr && this->enableSeveritySuppression_ == nullptr && this->escalationType_ == nullptr && this->expressEscalation_ == nullptr && this->legacyRaw_ == nullptr
        && this->legacyType_ == nullptr && this->matchField_ == nullptr && this->matchOperator_ == nullptr && this->matchValue_ == nullptr && this->max_ == nullptr
        && this->min_ == nullptr && this->noDataAlertLevel_ == nullptr && this->noDataAlertSeverity_ == nullptr && this->noDataAppendValue_ == nullptr && this->noDataPolicy_ == nullptr
        && this->operator_ == nullptr && this->prometheus_ == nullptr && this->relation_ == nullptr && this->severity_ == nullptr && this->simpleEscalation_ == nullptr
        && this->threshold_ == nullptr && this->thresholdList_ == nullptr && this->triggers_ == nullptr && this->type_ == nullptr && this->yoyTimeUnit_ == nullptr
        && this->yoyTimeValue_ == nullptr; };
    // aggregate Field Functions 
    bool hasAggregate() const { return this->aggregate_ != nullptr;};
    void deleteAggregate() { this->aggregate_ = nullptr;};
    inline string getAggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
    inline ConditionConfigUnified& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


    // alertCount Field Functions 
    bool hasAlertCount() const { return this->alertCount_ != nullptr;};
    void deleteAlertCount() { this->alertCount_ = nullptr;};
    inline int32_t getAlertCount() const { DARABONBA_PTR_GET_DEFAULT(alertCount_, 0) };
    inline ConditionConfigUnified& setAlertCount(int32_t alertCount) { DARABONBA_PTR_SET_VALUE(alertCount_, alertCount) };


    // compareList Field Functions 
    bool hasCompareList() const { return this->compareList_ != nullptr;};
    void deleteCompareList() { this->compareList_ = nullptr;};
    inline const vector<CompareList> & getCompareList() const { DARABONBA_PTR_GET_CONST(compareList_, vector<CompareList>) };
    inline vector<CompareList> getCompareList() { DARABONBA_PTR_GET(compareList_, vector<CompareList>) };
    inline ConditionConfigUnified& setCompareList(const vector<CompareList> & compareList) { DARABONBA_PTR_SET_VALUE(compareList_, compareList) };
    inline ConditionConfigUnified& setCompareList(vector<CompareList> && compareList) { DARABONBA_PTR_SET_RVALUE(compareList_, compareList) };


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


    // noDataAlertLevel Field Functions 
    bool hasNoDataAlertLevel() const { return this->noDataAlertLevel_ != nullptr;};
    void deleteNoDataAlertLevel() { this->noDataAlertLevel_ = nullptr;};
    inline string getNoDataAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(noDataAlertLevel_, "") };
    inline ConditionConfigUnified& setNoDataAlertLevel(string noDataAlertLevel) { DARABONBA_PTR_SET_VALUE(noDataAlertLevel_, noDataAlertLevel) };


    // noDataAlertSeverity Field Functions 
    bool hasNoDataAlertSeverity() const { return this->noDataAlertSeverity_ != nullptr;};
    void deleteNoDataAlertSeverity() { this->noDataAlertSeverity_ = nullptr;};
    inline string getNoDataAlertSeverity() const { DARABONBA_PTR_GET_DEFAULT(noDataAlertSeverity_, "") };
    inline ConditionConfigUnified& setNoDataAlertSeverity(string noDataAlertSeverity) { DARABONBA_PTR_SET_VALUE(noDataAlertSeverity_, noDataAlertSeverity) };


    // noDataAppendValue Field Functions 
    bool hasNoDataAppendValue() const { return this->noDataAppendValue_ != nullptr;};
    void deleteNoDataAppendValue() { this->noDataAppendValue_ = nullptr;};
    inline double getNoDataAppendValue() const { DARABONBA_PTR_GET_DEFAULT(noDataAppendValue_, 0.0) };
    inline ConditionConfigUnified& setNoDataAppendValue(double noDataAppendValue) { DARABONBA_PTR_SET_VALUE(noDataAppendValue_, noDataAppendValue) };


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
    inline const vector<ThresholdList> & getThresholdList() const { DARABONBA_PTR_GET_CONST(thresholdList_, vector<ThresholdList>) };
    inline vector<ThresholdList> getThresholdList() { DARABONBA_PTR_GET(thresholdList_, vector<ThresholdList>) };
    inline ConditionConfigUnified& setThresholdList(const vector<ThresholdList> & thresholdList) { DARABONBA_PTR_SET_VALUE(thresholdList_, thresholdList) };
    inline ConditionConfigUnified& setThresholdList(vector<ThresholdList> && thresholdList) { DARABONBA_PTR_SET_RVALUE(thresholdList_, thresholdList) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<Triggers> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<Triggers>) };
    inline vector<Triggers> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<Triggers>) };
    inline ConditionConfigUnified& setTriggers(const vector<Triggers> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline ConditionConfigUnified& setTriggers(vector<Triggers> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


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
    // The aggregate functions (used by APM_SIMPLE_CONDITION. For UMODEL conditions, the aggregation semantics have been migrated to QueryConfigUnified and this field no longer takes effect).
    shared_ptr<string> aggregate_ {};
    // The consecutive trigger count threshold (type=SLS_MULTI_CONDITION). An alert is fired only after the condition is met N times. Default value: 1.
    shared_ptr<int32_t> alertCount_ {};
    // The list of comparison conditions (APM_COMPOSITE_CONDITION).
    shared_ptr<vector<CompareList>> compareList_ {};
    // The multi-metric composite trigger configuration for CLOUD_MONITORING_CONDITION when escalationType=COMPOSITE (requires relation, severity, times, escalations).
    shared_ptr<CloudMonitoringCompositeEscalation> compositeEscalation_ {};
    // The count comparison operator (type=UMODEL_LOGSET_CONDITION).
    shared_ptr<string> countOperator_ {};
    // The count threshold (type=UMODEL_LOGSET_CONDITION).
    shared_ptr<int64_t> countThreshold_ {};
    // The duration in seconds. Used directly by PROMETHEUS_SIMPLE / UMODEL_METRICSET_CONDITION / UMODEL_LOGSET_CONDITION. For UMODEL_METRICSET_MULTI_CONDITION, this serves as the global default and can be overridden by the durationSecs field in each trigger.
    shared_ptr<int32_t> durationSecs_ {};
    // Specifies whether to enable severity suppression by highest level (type=UMODEL_METRICSET_MULTI_CONDITION / PROMETHEUS_MULTI_CONDITION). Default value: true. When enabled, only the highest severity trigger is reported for the same entity.
    shared_ptr<bool> enableSeveritySuppression_ {};
    // The expression type for CLOUD_MONITORING_CONDITION: SIMPLE / COMPOSITE / EXPRESS / PROMETHEUS (write paths support only SIMPLE / COMPOSITE). Specify the corresponding escalation sub-object based on the type.
    shared_ptr<string> escalationType_ {};
    // The expression-based trigger configuration for CLOUD_MONITORING_CONDITION when escalationType=EXPRESS (read path output only).
    shared_ptr<CloudMonitoringExpressEscalation> expressEscalation_ {};
    // The raw V1 condition JSON string returned when type=UNKNOWN_CONDITION and the read path fails to parse the condition. If this field is not empty, display it as read-only on the frontend.
    shared_ptr<string> legacyRaw_ {};
    // Returned when type=UNKNOWN_CONDITION. Indicates that this rule cannot be edited through the new API. Submit a ticket to contact the CloudMonitor team.
    shared_ptr<string> legacyType_ {};
    // The log field name (used when type=UMODEL_LOGSET_CONDITION and matchOperator=CONTAINS/EQUALS/REGEX).
    shared_ptr<string> matchField_ {};
    // The log match operator (type=UMODEL_LOGSET_CONDITION).
    shared_ptr<string> matchOperator_ {};
    // The log match value (used when type=UMODEL_LOGSET_CONDITION and matchOperator=CONTAINS/EQUALS/REGEX).
    shared_ptr<string> matchValue_ {};
    // The upper bound of the range (used when UMODEL_METRICSET_CONDITION and operator=IN_RANGE/OUT_OF_RANGE).
    shared_ptr<double> max_ {};
    // The lower bound of the range (used when UMODEL_METRICSET_CONDITION and operator=IN_RANGE/OUT_OF_RANGE).
    shared_ptr<double> min_ {};
    // The no-data alert level (SLS_MULTI_CONDITION). APM and Prometheus conditions have migrated to noDataPolicy + noDataAlertSeverity.
    shared_ptr<string> noDataAlertLevel_ {};
    // The no-data alert severity level (PROMETHEUS_SIMPLE_CONDITION / PROMETHEUS_MULTI_CONDITION, takes effect when noDataPolicy=NO_DATA_TO_ALERT). SLS_MULTI_CONDITION still uses noDataAlertLevel.
    shared_ptr<string> noDataAlertSeverity_ {};
    // The value to append when no data is available (APM_SIMPLE_CONDITION / APM_COMPOSITE_CONDITION). Nullable.
    shared_ptr<double> noDataAppendValue_ {};
    // The no-data handling policy (CLOUD_MONITORING_CONDITION / PROMETHEUS_MULTI_CONDITION / PROMETHEUS_SIMPLE_CONDITION / APM_SIMPLE_CONDITION / APM_COMPOSITE_CONDITION): NO_DATA_TO_OK / NO_DATA_TO_ALERT / KEEP_LAST_STATE / APPEND_VALUE (APM only).
    shared_ptr<string> noDataPolicy_ {};
    // The comparison operator. For UMODEL_METRICSET_CONDITION: GT (greater than) / GE (greater than or equal to) / LT (less than) / LE (less than or equal to) / EQ (equal to) / NE (not equal to) / IN_RANGE (within range, requires min/max) / OUT_OF_RANGE (outside range, requires min/max) / PRESENT (field exists) / NOT_PRESENT (field does not exist). Not used by UMODEL_LOGSET_CONDITION. For APM_SIMPLE_CONDITION: GT/GTE/LT/LTE/EQ/NE/YOY_UP/YOY_DOWN (YOY_* requires yoyTimeUnit/yoyTimeValue).
    shared_ptr<string> operator_ {};
    // The PromQL-based trigger configuration for CLOUD_MONITORING_CONDITION when escalationType=PROMETHEUS (read path output only).
    shared_ptr<CloudMonitoringPrometheusEscalation> prometheus_ {};
    // The logical relationship between conditions (APM_COMPOSITE_CONDITION).
    shared_ptr<string> relation_ {};
    // The severity level (UMODEL_METRICSET_CONDITION / UMODEL_LOGSET_CONDITION / PROMETHEUS_SIMPLE / APM_COMPOSITE).
    shared_ptr<string> severity_ {};
    // The single-metric multi-level trigger configuration for CLOUD_MONITORING_CONDITION when escalationType=SIMPLE (requires metricName, period, escalations).
    shared_ptr<CloudMonitoringSimpleEscalation> simpleEscalation_ {};
    // The threshold (used by UMODEL_METRICSET_CONDITION with non-range operators).
    shared_ptr<double> threshold_ {};
    // The multi-threshold list (APM_SIMPLE_CONDITION).
    shared_ptr<vector<ThresholdList>> thresholdList_ {};
    // The list of triggers (polymorphic by type. CLOUD_MONITORING_CONDITION does not use this field. Use simpleEscalation.escalations / compositeEscalation.escalations instead). For SLS_MULTI_CONDITION, each case contains matchField / matchOperator / matchValue / countOperator / countThreshold / severity, with at least one required. For UMODEL_METRICSET_MULTI_CONDITION, each trigger contains severity, durationSecs, and an expression (SIMPLE/COMPOSITE). For PROMETHEUS_MULTI_CONDITION, each trigger contains severity, durationSecs, and an expression (SIMPLE/COMPOSITE). Triggers are sorted by severity priority, and the first match fires.
    shared_ptr<vector<Triggers>> triggers_ {};
    // The detection condition type. Valid values and their required fields: PROMETHEUS_SIMPLE_CONDITION (requires operator, threshold, durationSecs, severity). UMODEL_METRICSET_CONDITION (requires operator, durationSecs, severity. Non-range operators require threshold. operator=IN_RANGE/OUT_OF_RANGE requires min and max). UMODEL_LOGSET_CONDITION (requires matchOperator, durationSecs, severity. matchOperator=CONTAINS/EQUALS/REGEX requires matchField and matchValue. countOperator/countThreshold are optional). UMODEL_METRICSET_MULTI_CONDITION (requires triggers[*]. Optional durationSecs as global default, enableSeveritySuppression). APM_SIMPLE_CONDITION (requires operator, aggregate. Use thresholdList or threshold. operator=YOY_UP/YOY_DOWN requires yoyTimeUnit and yoyTimeValue. Optional noDataPolicy, noDataAppendValue). APM_COMPOSITE_CONDITION (requires compareList, relation, severity. Optional noDataPolicy, noDataAppendValue). CLOUD_MONITORING_CONDITION (requires escalationType. escalationType=SIMPLE requires simpleEscalation. escalationType=COMPOSITE requires compositeEscalation. Optional noDataPolicy). UNKNOWN_CONDITION (read-only fallback. Do not use in write paths). Do not use non-enumerated values such as SLS_CONDITION or CMS_BASIC_CONDITION. The backend returns an Invalidtype 400 error.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The year-over-year time unit (APM_SIMPLE_CONDITION, takes effect only when operator=YOY_UP/YOY_DOWN).
    shared_ptr<string> yoyTimeUnit_ {};
    // The year-over-year time value (APM_SIMPLE_CONDITION, takes effect only when operator=YOY_UP/YOY_DOWN).
    shared_ptr<int32_t> yoyTimeValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
