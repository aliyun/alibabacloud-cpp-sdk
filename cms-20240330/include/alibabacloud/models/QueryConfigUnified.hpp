// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFIGUNIFIED_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFIGUNIFIED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/EntityFields.hpp>
#include <alibabacloud/models/EntityFilters.hpp>
#include <alibabacloud/models/FilterList.hpp>
#include <alibabacloud/models/PrometheusMetricFilterValue.hpp>
#include <alibabacloud/models/Joinings.hpp>
#include <alibabacloud/models/LabelFilters.hpp>
#include <alibabacloud/models/MeasureList.hpp>
#include <alibabacloud/models/PrometheusMetricParamValue.hpp>
#include <alibabacloud/models/Queries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class QueryConfigUnified : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConfigUnified& obj) { 
      DARABONBA_PTR_TO_JSON(aggregate, aggregate_);
      DARABONBA_PTR_TO_JSON(checkAfterDataComplete, checkAfterDataComplete_);
      DARABONBA_PTR_TO_JSON(dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_TO_JSON(enableDataCompleteCheck, enableDataCompleteCheck_);
      DARABONBA_PTR_TO_JSON(entityDomain, entityDomain_);
      DARABONBA_PTR_TO_JSON(entityFields, entityFields_);
      DARABONBA_PTR_TO_JSON(entityFilters, entityFilters_);
      DARABONBA_PTR_TO_JSON(entityType, entityType_);
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_PTR_TO_JSON(filterList, filterList_);
      DARABONBA_PTR_TO_JSON(filterValues, filterValues_);
      DARABONBA_PTR_TO_JSON(groupFieldList, groupFieldList_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(groupType, groupType_);
      DARABONBA_PTR_TO_JSON(joinings, joinings_);
      DARABONBA_PTR_TO_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_TO_JSON(legacyRaw, legacyRaw_);
      DARABONBA_PTR_TO_JSON(legacyType, legacyType_);
      DARABONBA_PTR_TO_JSON(logSet, logSet_);
      DARABONBA_PTR_TO_JSON(measureGroupKey, measureGroupKey_);
      DARABONBA_PTR_TO_JSON(measureList, measureList_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(metricGroupId, metricGroupId_);
      DARABONBA_PTR_TO_JSON(metricId, metricId_);
      DARABONBA_PTR_TO_JSON(metricIds, metricIds_);
      DARABONBA_PTR_TO_JSON(metricSet, metricSet_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(offsetSecs, offsetSecs_);
      DARABONBA_PTR_TO_JSON(paramValues, paramValues_);
      DARABONBA_PTR_TO_JSON(promQl, promQl_);
      DARABONBA_PTR_TO_JSON(queries, queries_);
      DARABONBA_PTR_TO_JSON(relationType, relationType_);
      DARABONBA_PTR_TO_JSON(serviceIdList, serviceIdList_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(windowSecs, windowSecs_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConfigUnified& obj) { 
      DARABONBA_PTR_FROM_JSON(aggregate, aggregate_);
      DARABONBA_PTR_FROM_JSON(checkAfterDataComplete, checkAfterDataComplete_);
      DARABONBA_PTR_FROM_JSON(dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_FROM_JSON(enableDataCompleteCheck, enableDataCompleteCheck_);
      DARABONBA_PTR_FROM_JSON(entityDomain, entityDomain_);
      DARABONBA_PTR_FROM_JSON(entityFields, entityFields_);
      DARABONBA_PTR_FROM_JSON(entityFilters, entityFilters_);
      DARABONBA_PTR_FROM_JSON(entityType, entityType_);
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_PTR_FROM_JSON(filterList, filterList_);
      DARABONBA_PTR_FROM_JSON(filterValues, filterValues_);
      DARABONBA_PTR_FROM_JSON(groupFieldList, groupFieldList_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(groupType, groupType_);
      DARABONBA_PTR_FROM_JSON(joinings, joinings_);
      DARABONBA_PTR_FROM_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_FROM_JSON(legacyRaw, legacyRaw_);
      DARABONBA_PTR_FROM_JSON(legacyType, legacyType_);
      DARABONBA_PTR_FROM_JSON(logSet, logSet_);
      DARABONBA_PTR_FROM_JSON(measureGroupKey, measureGroupKey_);
      DARABONBA_PTR_FROM_JSON(measureList, measureList_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(metricGroupId, metricGroupId_);
      DARABONBA_PTR_FROM_JSON(metricId, metricId_);
      DARABONBA_PTR_FROM_JSON(metricIds, metricIds_);
      DARABONBA_PTR_FROM_JSON(metricSet, metricSet_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(offsetSecs, offsetSecs_);
      DARABONBA_PTR_FROM_JSON(paramValues, paramValues_);
      DARABONBA_PTR_FROM_JSON(promQl, promQl_);
      DARABONBA_PTR_FROM_JSON(queries, queries_);
      DARABONBA_PTR_FROM_JSON(relationType, relationType_);
      DARABONBA_PTR_FROM_JSON(serviceIdList, serviceIdList_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(windowSecs, windowSecs_);
    };
    QueryConfigUnified() = default ;
    QueryConfigUnified(const QueryConfigUnified &) = default ;
    QueryConfigUnified(QueryConfigUnified &&) = default ;
    QueryConfigUnified(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConfigUnified() = default ;
    QueryConfigUnified& operator=(const QueryConfigUnified &) = default ;
    QueryConfigUnified& operator=(QueryConfigUnified &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregate_ == nullptr
        && this->checkAfterDataComplete_ == nullptr && this->dimensions_ == nullptr && this->durationSecs_ == nullptr && this->enableDataCompleteCheck_ == nullptr && this->entityDomain_ == nullptr
        && this->entityFields_ == nullptr && this->entityFilters_ == nullptr && this->entityType_ == nullptr && this->expr_ == nullptr && this->filterList_ == nullptr
        && this->filterValues_ == nullptr && this->groupFieldList_ == nullptr && this->groupId_ == nullptr && this->groupType_ == nullptr && this->joinings_ == nullptr
        && this->labelFilters_ == nullptr && this->legacyRaw_ == nullptr && this->legacyType_ == nullptr && this->logSet_ == nullptr && this->measureGroupKey_ == nullptr
        && this->measureList_ == nullptr && this->metric_ == nullptr && this->metricGroupId_ == nullptr && this->metricId_ == nullptr && this->metricIds_ == nullptr
        && this->metricSet_ == nullptr && this->namespace_ == nullptr && this->offsetSecs_ == nullptr && this->paramValues_ == nullptr && this->promQl_ == nullptr
        && this->queries_ == nullptr && this->relationType_ == nullptr && this->serviceIdList_ == nullptr && this->type_ == nullptr && this->windowSecs_ == nullptr; };
    // aggregate Field Functions 
    bool hasAggregate() const { return this->aggregate_ != nullptr;};
    void deleteAggregate() { this->aggregate_ = nullptr;};
    inline string getAggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
    inline QueryConfigUnified& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


    // checkAfterDataComplete Field Functions 
    bool hasCheckAfterDataComplete() const { return this->checkAfterDataComplete_ != nullptr;};
    void deleteCheckAfterDataComplete() { this->checkAfterDataComplete_ = nullptr;};
    inline bool getCheckAfterDataComplete() const { DARABONBA_PTR_GET_DEFAULT(checkAfterDataComplete_, false) };
    inline QueryConfigUnified& setCheckAfterDataComplete(bool checkAfterDataComplete) { DARABONBA_PTR_SET_VALUE(checkAfterDataComplete_, checkAfterDataComplete) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<map<string, string>> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<map<string, string>>) };
    inline vector<map<string, string>> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<map<string, string>>) };
    inline QueryConfigUnified& setDimensions(const vector<map<string, string>> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline QueryConfigUnified& setDimensions(vector<map<string, string>> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // durationSecs Field Functions 
    bool hasDurationSecs() const { return this->durationSecs_ != nullptr;};
    void deleteDurationSecs() { this->durationSecs_ = nullptr;};
    inline int64_t getDurationSecs() const { DARABONBA_PTR_GET_DEFAULT(durationSecs_, 0L) };
    inline QueryConfigUnified& setDurationSecs(int64_t durationSecs) { DARABONBA_PTR_SET_VALUE(durationSecs_, durationSecs) };


    // enableDataCompleteCheck Field Functions 
    bool hasEnableDataCompleteCheck() const { return this->enableDataCompleteCheck_ != nullptr;};
    void deleteEnableDataCompleteCheck() { this->enableDataCompleteCheck_ = nullptr;};
    inline bool getEnableDataCompleteCheck() const { DARABONBA_PTR_GET_DEFAULT(enableDataCompleteCheck_, false) };
    inline QueryConfigUnified& setEnableDataCompleteCheck(bool enableDataCompleteCheck) { DARABONBA_PTR_SET_VALUE(enableDataCompleteCheck_, enableDataCompleteCheck) };


    // entityDomain Field Functions 
    bool hasEntityDomain() const { return this->entityDomain_ != nullptr;};
    void deleteEntityDomain() { this->entityDomain_ = nullptr;};
    inline string getEntityDomain() const { DARABONBA_PTR_GET_DEFAULT(entityDomain_, "") };
    inline QueryConfigUnified& setEntityDomain(string entityDomain) { DARABONBA_PTR_SET_VALUE(entityDomain_, entityDomain) };


    // entityFields Field Functions 
    bool hasEntityFields() const { return this->entityFields_ != nullptr;};
    void deleteEntityFields() { this->entityFields_ = nullptr;};
    inline const vector<EntityFields> & getEntityFields() const { DARABONBA_PTR_GET_CONST(entityFields_, vector<EntityFields>) };
    inline vector<EntityFields> getEntityFields() { DARABONBA_PTR_GET(entityFields_, vector<EntityFields>) };
    inline QueryConfigUnified& setEntityFields(const vector<EntityFields> & entityFields) { DARABONBA_PTR_SET_VALUE(entityFields_, entityFields) };
    inline QueryConfigUnified& setEntityFields(vector<EntityFields> && entityFields) { DARABONBA_PTR_SET_RVALUE(entityFields_, entityFields) };


    // entityFilters Field Functions 
    bool hasEntityFilters() const { return this->entityFilters_ != nullptr;};
    void deleteEntityFilters() { this->entityFilters_ = nullptr;};
    inline const vector<EntityFilters> & getEntityFilters() const { DARABONBA_PTR_GET_CONST(entityFilters_, vector<EntityFilters>) };
    inline vector<EntityFilters> getEntityFilters() { DARABONBA_PTR_GET(entityFilters_, vector<EntityFilters>) };
    inline QueryConfigUnified& setEntityFilters(const vector<EntityFilters> & entityFilters) { DARABONBA_PTR_SET_VALUE(entityFilters_, entityFilters) };
    inline QueryConfigUnified& setEntityFilters(vector<EntityFilters> && entityFilters) { DARABONBA_PTR_SET_RVALUE(entityFilters_, entityFilters) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline QueryConfigUnified& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline QueryConfigUnified& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // filterList Field Functions 
    bool hasFilterList() const { return this->filterList_ != nullptr;};
    void deleteFilterList() { this->filterList_ = nullptr;};
    inline const vector<FilterList> & getFilterList() const { DARABONBA_PTR_GET_CONST(filterList_, vector<FilterList>) };
    inline vector<FilterList> getFilterList() { DARABONBA_PTR_GET(filterList_, vector<FilterList>) };
    inline QueryConfigUnified& setFilterList(const vector<FilterList> & filterList) { DARABONBA_PTR_SET_VALUE(filterList_, filterList) };
    inline QueryConfigUnified& setFilterList(vector<FilterList> && filterList) { DARABONBA_PTR_SET_RVALUE(filterList_, filterList) };


    // filterValues Field Functions 
    bool hasFilterValues() const { return this->filterValues_ != nullptr;};
    void deleteFilterValues() { this->filterValues_ = nullptr;};
    inline const vector<PrometheusMetricFilterValue> & getFilterValues() const { DARABONBA_PTR_GET_CONST(filterValues_, vector<PrometheusMetricFilterValue>) };
    inline vector<PrometheusMetricFilterValue> getFilterValues() { DARABONBA_PTR_GET(filterValues_, vector<PrometheusMetricFilterValue>) };
    inline QueryConfigUnified& setFilterValues(const vector<PrometheusMetricFilterValue> & filterValues) { DARABONBA_PTR_SET_VALUE(filterValues_, filterValues) };
    inline QueryConfigUnified& setFilterValues(vector<PrometheusMetricFilterValue> && filterValues) { DARABONBA_PTR_SET_RVALUE(filterValues_, filterValues) };


    // groupFieldList Field Functions 
    bool hasGroupFieldList() const { return this->groupFieldList_ != nullptr;};
    void deleteGroupFieldList() { this->groupFieldList_ = nullptr;};
    inline const vector<string> & getGroupFieldList() const { DARABONBA_PTR_GET_CONST(groupFieldList_, vector<string>) };
    inline vector<string> getGroupFieldList() { DARABONBA_PTR_GET(groupFieldList_, vector<string>) };
    inline QueryConfigUnified& setGroupFieldList(const vector<string> & groupFieldList) { DARABONBA_PTR_SET_VALUE(groupFieldList_, groupFieldList) };
    inline QueryConfigUnified& setGroupFieldList(vector<string> && groupFieldList) { DARABONBA_PTR_SET_RVALUE(groupFieldList_, groupFieldList) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline QueryConfigUnified& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline QueryConfigUnified& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // joinings Field Functions 
    bool hasJoinings() const { return this->joinings_ != nullptr;};
    void deleteJoinings() { this->joinings_ = nullptr;};
    inline const vector<Joinings> & getJoinings() const { DARABONBA_PTR_GET_CONST(joinings_, vector<Joinings>) };
    inline vector<Joinings> getJoinings() { DARABONBA_PTR_GET(joinings_, vector<Joinings>) };
    inline QueryConfigUnified& setJoinings(const vector<Joinings> & joinings) { DARABONBA_PTR_SET_VALUE(joinings_, joinings) };
    inline QueryConfigUnified& setJoinings(vector<Joinings> && joinings) { DARABONBA_PTR_SET_RVALUE(joinings_, joinings) };


    // labelFilters Field Functions 
    bool hasLabelFilters() const { return this->labelFilters_ != nullptr;};
    void deleteLabelFilters() { this->labelFilters_ = nullptr;};
    inline const vector<LabelFilters> & getLabelFilters() const { DARABONBA_PTR_GET_CONST(labelFilters_, vector<LabelFilters>) };
    inline vector<LabelFilters> getLabelFilters() { DARABONBA_PTR_GET(labelFilters_, vector<LabelFilters>) };
    inline QueryConfigUnified& setLabelFilters(const vector<LabelFilters> & labelFilters) { DARABONBA_PTR_SET_VALUE(labelFilters_, labelFilters) };
    inline QueryConfigUnified& setLabelFilters(vector<LabelFilters> && labelFilters) { DARABONBA_PTR_SET_RVALUE(labelFilters_, labelFilters) };


    // legacyRaw Field Functions 
    bool hasLegacyRaw() const { return this->legacyRaw_ != nullptr;};
    void deleteLegacyRaw() { this->legacyRaw_ = nullptr;};
    inline string getLegacyRaw() const { DARABONBA_PTR_GET_DEFAULT(legacyRaw_, "") };
    inline QueryConfigUnified& setLegacyRaw(string legacyRaw) { DARABONBA_PTR_SET_VALUE(legacyRaw_, legacyRaw) };


    // legacyType Field Functions 
    bool hasLegacyType() const { return this->legacyType_ != nullptr;};
    void deleteLegacyType() { this->legacyType_ = nullptr;};
    inline string getLegacyType() const { DARABONBA_PTR_GET_DEFAULT(legacyType_, "") };
    inline QueryConfigUnified& setLegacyType(string legacyType) { DARABONBA_PTR_SET_VALUE(legacyType_, legacyType) };


    // logSet Field Functions 
    bool hasLogSet() const { return this->logSet_ != nullptr;};
    void deleteLogSet() { this->logSet_ = nullptr;};
    inline string getLogSet() const { DARABONBA_PTR_GET_DEFAULT(logSet_, "") };
    inline QueryConfigUnified& setLogSet(string logSet) { DARABONBA_PTR_SET_VALUE(logSet_, logSet) };


    // measureGroupKey Field Functions 
    bool hasMeasureGroupKey() const { return this->measureGroupKey_ != nullptr;};
    void deleteMeasureGroupKey() { this->measureGroupKey_ = nullptr;};
    inline string getMeasureGroupKey() const { DARABONBA_PTR_GET_DEFAULT(measureGroupKey_, "") };
    inline QueryConfigUnified& setMeasureGroupKey(string measureGroupKey) { DARABONBA_PTR_SET_VALUE(measureGroupKey_, measureGroupKey) };


    // measureList Field Functions 
    bool hasMeasureList() const { return this->measureList_ != nullptr;};
    void deleteMeasureList() { this->measureList_ = nullptr;};
    inline const vector<MeasureList> & getMeasureList() const { DARABONBA_PTR_GET_CONST(measureList_, vector<MeasureList>) };
    inline vector<MeasureList> getMeasureList() { DARABONBA_PTR_GET(measureList_, vector<MeasureList>) };
    inline QueryConfigUnified& setMeasureList(const vector<MeasureList> & measureList) { DARABONBA_PTR_SET_VALUE(measureList_, measureList) };
    inline QueryConfigUnified& setMeasureList(vector<MeasureList> && measureList) { DARABONBA_PTR_SET_RVALUE(measureList_, measureList) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline QueryConfigUnified& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // metricGroupId Field Functions 
    bool hasMetricGroupId() const { return this->metricGroupId_ != nullptr;};
    void deleteMetricGroupId() { this->metricGroupId_ = nullptr;};
    inline string getMetricGroupId() const { DARABONBA_PTR_GET_DEFAULT(metricGroupId_, "") };
    inline QueryConfigUnified& setMetricGroupId(string metricGroupId) { DARABONBA_PTR_SET_VALUE(metricGroupId_, metricGroupId) };


    // metricId Field Functions 
    bool hasMetricId() const { return this->metricId_ != nullptr;};
    void deleteMetricId() { this->metricId_ = nullptr;};
    inline string getMetricId() const { DARABONBA_PTR_GET_DEFAULT(metricId_, "") };
    inline QueryConfigUnified& setMetricId(string metricId) { DARABONBA_PTR_SET_VALUE(metricId_, metricId) };


    // metricIds Field Functions 
    bool hasMetricIds() const { return this->metricIds_ != nullptr;};
    void deleteMetricIds() { this->metricIds_ = nullptr;};
    inline const vector<string> & getMetricIds() const { DARABONBA_PTR_GET_CONST(metricIds_, vector<string>) };
    inline vector<string> getMetricIds() { DARABONBA_PTR_GET(metricIds_, vector<string>) };
    inline QueryConfigUnified& setMetricIds(const vector<string> & metricIds) { DARABONBA_PTR_SET_VALUE(metricIds_, metricIds) };
    inline QueryConfigUnified& setMetricIds(vector<string> && metricIds) { DARABONBA_PTR_SET_RVALUE(metricIds_, metricIds) };


    // metricSet Field Functions 
    bool hasMetricSet() const { return this->metricSet_ != nullptr;};
    void deleteMetricSet() { this->metricSet_ = nullptr;};
    inline string getMetricSet() const { DARABONBA_PTR_GET_DEFAULT(metricSet_, "") };
    inline QueryConfigUnified& setMetricSet(string metricSet) { DARABONBA_PTR_SET_VALUE(metricSet_, metricSet) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryConfigUnified& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // offsetSecs Field Functions 
    bool hasOffsetSecs() const { return this->offsetSecs_ != nullptr;};
    void deleteOffsetSecs() { this->offsetSecs_ = nullptr;};
    inline int64_t getOffsetSecs() const { DARABONBA_PTR_GET_DEFAULT(offsetSecs_, 0L) };
    inline QueryConfigUnified& setOffsetSecs(int64_t offsetSecs) { DARABONBA_PTR_SET_VALUE(offsetSecs_, offsetSecs) };


    // paramValues Field Functions 
    bool hasParamValues() const { return this->paramValues_ != nullptr;};
    void deleteParamValues() { this->paramValues_ = nullptr;};
    inline const vector<PrometheusMetricParamValue> & getParamValues() const { DARABONBA_PTR_GET_CONST(paramValues_, vector<PrometheusMetricParamValue>) };
    inline vector<PrometheusMetricParamValue> getParamValues() { DARABONBA_PTR_GET(paramValues_, vector<PrometheusMetricParamValue>) };
    inline QueryConfigUnified& setParamValues(const vector<PrometheusMetricParamValue> & paramValues) { DARABONBA_PTR_SET_VALUE(paramValues_, paramValues) };
    inline QueryConfigUnified& setParamValues(vector<PrometheusMetricParamValue> && paramValues) { DARABONBA_PTR_SET_RVALUE(paramValues_, paramValues) };


    // promQl Field Functions 
    bool hasPromQl() const { return this->promQl_ != nullptr;};
    void deletePromQl() { this->promQl_ = nullptr;};
    inline string getPromQl() const { DARABONBA_PTR_GET_DEFAULT(promQl_, "") };
    inline QueryConfigUnified& setPromQl(string promQl) { DARABONBA_PTR_SET_VALUE(promQl_, promQl) };


    // queries Field Functions 
    bool hasQueries() const { return this->queries_ != nullptr;};
    void deleteQueries() { this->queries_ = nullptr;};
    inline const vector<Queries> & getQueries() const { DARABONBA_PTR_GET_CONST(queries_, vector<Queries>) };
    inline vector<Queries> getQueries() { DARABONBA_PTR_GET(queries_, vector<Queries>) };
    inline QueryConfigUnified& setQueries(const vector<Queries> & queries) { DARABONBA_PTR_SET_VALUE(queries_, queries) };
    inline QueryConfigUnified& setQueries(vector<Queries> && queries) { DARABONBA_PTR_SET_RVALUE(queries_, queries) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline QueryConfigUnified& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // serviceIdList Field Functions 
    bool hasServiceIdList() const { return this->serviceIdList_ != nullptr;};
    void deleteServiceIdList() { this->serviceIdList_ = nullptr;};
    inline const vector<string> & getServiceIdList() const { DARABONBA_PTR_GET_CONST(serviceIdList_, vector<string>) };
    inline vector<string> getServiceIdList() { DARABONBA_PTR_GET(serviceIdList_, vector<string>) };
    inline QueryConfigUnified& setServiceIdList(const vector<string> & serviceIdList) { DARABONBA_PTR_SET_VALUE(serviceIdList_, serviceIdList) };
    inline QueryConfigUnified& setServiceIdList(vector<string> && serviceIdList) { DARABONBA_PTR_SET_RVALUE(serviceIdList_, serviceIdList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryConfigUnified& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // windowSecs Field Functions 
    bool hasWindowSecs() const { return this->windowSecs_ != nullptr;};
    void deleteWindowSecs() { this->windowSecs_ = nullptr;};
    inline int64_t getWindowSecs() const { DARABONBA_PTR_GET_DEFAULT(windowSecs_, 0L) };
    inline QueryConfigUnified& setWindowSecs(int64_t windowSecs) { DARABONBA_PTR_SET_VALUE(windowSecs_, windowSecs) };


  protected:
    // The aggregation function (used when type=UMODEL_METRICSET_QUERY / UMODEL_LOGSET_QUERY).
    shared_ptr<string> aggregate_ {};
    // **[Deprecated]** Specifies whether to perform alert detection only after data is complete (originally used when type=PROMETHEUS_MULTI_QUERY). This field overlaps with enableDataCompleteCheck. Using this field in write path returns 400.
    shared_ptr<bool> checkAfterDataComplete_ {};
    // The dimension list (used when type=CLOUD_MONITORING_QUERY. Each dimension is a key/value string mapping).
    shared_ptr<vector<map<string, string>>> dimensions_ {};
    // The duration in seconds (used when type=PROMETHEUS_MULTI_QUERY).
    shared_ptr<int64_t> durationSecs_ {};
    // Indicates whether the data integrity check is enabled (used when type=PROMETHEUS_SINGLE_QUERY / PROMETHEUS_MULTI_QUERY / PROMETHEUS_PREDEFINED_METRIC_QUERY / PROMETHEUS_METRIC_GROUP_QUERY [deprecated]).
    shared_ptr<bool> enableDataCompleteCheck_ {};
    // The entity domain (used when type=UMODEL_METRICSET_QUERY / UMODEL_METRICSET_MULTI_QUERY / UMODEL_LOGSET_QUERY. Works with entityType/entityFilters to locate UModel entities).
    shared_ptr<string> entityDomain_ {};
    // The entity fields to include in the response (used when type=UMODEL_METRICSET_QUERY / UMODEL_METRICSET_MULTI_QUERY / UMODEL_LOGSET_QUERY).
    shared_ptr<vector<EntityFields>> entityFields_ {};
    // The entity filter list (used when type=UMODEL_METRICSET_QUERY / UMODEL_METRICSET_MULTI_QUERY / UMODEL_LOGSET_QUERY).
    shared_ptr<vector<EntityFilters>> entityFilters_ {};
    // The entity type (used when type=UMODEL_METRICSET_QUERY / UMODEL_METRICSET_MULTI_QUERY / UMODEL_LOGSET_QUERY).
    shared_ptr<string> entityType_ {};
    // The query expression or SPL statement. Recommended when type=PROMETHEUS_SINGLE_QUERY. Optional when type=UMODEL_METRICSET_QUERY for custom SPL. Required when type=UMODEL_LOGSET_QUERY, where an SPL query statement must be provided (the service layer enforces this requirement).
    shared_ptr<string> expr_ {};
    // The APM filter condition list.
    shared_ptr<vector<FilterList>> filterList_ {};
    // The list of predefined metric filter values (used when type=PROMETHEUS_PREDEFINED_METRIC_QUERY / PROMETHEUS_METRIC_GROUP_QUERY [deprecated]).
    shared_ptr<vector<PrometheusMetricFilterValue>> filterValues_ {};
    // The group field list (used when type=SLS_MULTI_QUERY and groupType=custom).
    shared_ptr<vector<string>> groupFieldList_ {};
    // The resource group ID (used when type=CLOUD_MONITORING_QUERY and relationType=GROUP).
    shared_ptr<string> groupId_ {};
    // The grouping policy (used when type=SLS_MULTI_QUERY): none / label / custom.
    shared_ptr<string> groupType_ {};
    // The join list (used when type=SLS_MULTI_QUERY. Maximum of 2: joinings[0] corresponds to the set operation between query 0 and query 1. joinings[1] corresponds to the set operation between query 1 and query 2).
    shared_ptr<vector<Joinings>> joinings_ {};
    // The label filter conditions (used when type=UMODEL_METRICSET_QUERY. For UMODEL_METRICSET_MULTI_QUERY, place labelFilters in each queries[*] entry).
    shared_ptr<vector<LabelFilters>> labelFilters_ {};
    // The original V1 query JSON string returned as a fallback when type=UNKNOWN_QUERY and read path parsing fails (contains the field values that triggered the failure, such as filter.operator=ABC). The frontend displays this field as read-only when it is not empty.
    shared_ptr<string> legacyRaw_ {};
    // Returned when type=UNKNOWN_QUERY, indicating that this rule cannot be edited through the new API. Submit a ticket to contact the CloudMonitor team.
    shared_ptr<string> legacyType_ {};
    // The log set name (used when type=UMODEL_LOGSET_QUERY).
    shared_ptr<string> logSet_ {};
    // The measure group key (optional when type=APM_MULTI_QUERY, corresponds to V1 alertMetricInput.groupKey).
    shared_ptr<string> measureGroupKey_ {};
    // The APM measure configuration list.
    shared_ptr<vector<MeasureList>> measureList_ {};
    // The metric name (required when type=UMODEL_METRICSET_QUERY. Required when type=CLOUD_MONITORING_QUERY, used together with namespace to uniquely identify CloudMonitor monitoring metrics).
    shared_ptr<string> metric_ {};
    // The metric group ID (used when type=PROMETHEUS_PREDEFINED_METRIC_QUERY / PROMETHEUS_METRIC_GROUP_QUERY [deprecated]).
    shared_ptr<string> metricGroupId_ {};
    // The predefined metric ID (used when type=PROMETHEUS_PREDEFINED_METRIC_QUERY).
    shared_ptr<string> metricId_ {};
    // **[Deprecated]** The list of predefined metric IDs (originally used when type=PROMETHEUS_METRIC_GROUP_QUERY). This query type is deprecated. Write path returns 400.
    shared_ptr<vector<string>> metricIds_ {};
    // The metric set name (used when type=UMODEL_METRICSET_QUERY).
    shared_ptr<string> metricSet_ {};
    // The CloudMonitor namespace (Alibaba Cloud service name, used when type=CLOUD_MONITORING_QUERY).
    shared_ptr<string> namespace_ {};
    // The query time offset in seconds (used when type=UMODEL_METRICSET_QUERY / UMODEL_LOGSET_QUERY). Works with windowSecs to implement an offset query over the range [T - windowSecs - offsetSecs, T - offsetSecs]. Valid range: [0, 86400].
    shared_ptr<int64_t> offsetSecs_ {};
    // The list of predefined metric parameter values (used when type=PROMETHEUS_PREDEFINED_METRIC_QUERY / PROMETHEUS_METRIC_GROUP_QUERY [deprecated]).
    shared_ptr<vector<PrometheusMetricParamValue>> paramValues_ {};
    // **[Deprecated]** The legacy Prometheus query statement field. Use expr instead. This field is retained for backward compatibility. The backend automatically normalizes it to expr.
    shared_ptr<string> promQl_ {};
    // The subquery list (polymorphic by type): when type=SLS_MULTI_QUERY, each entry is a SlsNamedQueryEntry (timeUnit/start/end/window/expr). When type=PROMETHEUS_MULTI_QUERY, each entry is a PrometheusNamedQueryEntry (name/expr). When type=UMODEL_METRICSET_MULTI_QUERY, each entry is a MetricSetNamedQueryEntry.
    shared_ptr<vector<Queries>> queries_ {};
    // The resource relation type (used when type=CLOUD_MONITORING_QUERY).
    shared_ptr<string> relationType_ {};
    // The list of service IDs (used when type=APM_MULTI_QUERY).
    shared_ptr<vector<string>> serviceIdList_ {};
    // The query type. Valid values and associated fields: PROMETHEUS_SINGLE_QUERY (required: expr. Optional: enableDataCompleteCheck). PROMETHEUS_PREDEFINED_METRIC_QUERY (required: metricGroupId, metricId. Optional: paramValues, filterValues, enableDataCompleteCheck). PROMETHEUS_METRIC_GROUP_QUERY ([deprecated] required: metricGroupId, metricIds. Optional: paramValues, filterValues, enableDataCompleteCheck. Write path returns 400). UMODEL_METRICSET_QUERY (required: metricSet, metric, windowSecs, aggregate. Optional: expr, entityDomain/entityType/entityFilters, labelFilters, entityFields, offsetSecs). UMODEL_METRICSET_MULTI_QUERY (required: queries[*]. Optional: entityDomain/entityType/entityFilters, windowSecs, offsetSecs, aggregate). UMODEL_LOGSET_QUERY (required: logSet, expr, windowSecs, aggregate. Optional: entityDomain/entityType/entityFilters, labelFilters, offsetSecs). APM_MULTI_QUERY (required: serviceIdList, measureList. Optional: filterList, measureGroupKey). CLOUD_MONITORING_QUERY (required: namespace, metric, relationType. When relationType=INSTANCE, dimensions is required. When relationType=GROUP, groupId is required. When relationType=USER, leave both empty). UNKNOWN_QUERY (read-only fallback. Do not use in write path). Do not use non-enumerated values (such as CMS_BASIC_QUERY/SLS_QUERY). The backend returns Invalidtype 400.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The aggregation time window in seconds (used when type=UMODEL_METRICSET_QUERY / UMODEL_LOGSET_QUERY). Valid range: [60, 86400].
    shared_ptr<int64_t> windowSecs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
