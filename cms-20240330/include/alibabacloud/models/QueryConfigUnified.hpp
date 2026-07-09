// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFIGUNIFIED_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFIGUNIFIED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/UmodelEntityField.hpp>
#include <alibabacloud/models/UmodelEntityFilter.hpp>
#include <alibabacloud/models/ApmFilterConfig.hpp>
#include <alibabacloud/models/UmodelLabelFilter.hpp>
#include <alibabacloud/models/ApmMeasureConfig.hpp>
#include <alibabacloud/models/MetricSetNamedQueryEntry.hpp>
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
      DARABONBA_PTR_TO_JSON(dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(enableDataCompleteCheck, enableDataCompleteCheck_);
      DARABONBA_PTR_TO_JSON(entityDomain, entityDomain_);
      DARABONBA_PTR_TO_JSON(entityFields, entityFields_);
      DARABONBA_PTR_TO_JSON(entityFilters, entityFilters_);
      DARABONBA_PTR_TO_JSON(entityType, entityType_);
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_PTR_TO_JSON(filterList, filterList_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_TO_JSON(legacyRaw, legacyRaw_);
      DARABONBA_PTR_TO_JSON(legacyType, legacyType_);
      DARABONBA_PTR_TO_JSON(logSet, logSet_);
      DARABONBA_PTR_TO_JSON(measureList, measureList_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(metricSet, metricSet_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(offsetSecs, offsetSecs_);
      DARABONBA_PTR_TO_JSON(promQl, promQl_);
      DARABONBA_PTR_TO_JSON(queries, queries_);
      DARABONBA_PTR_TO_JSON(relationType, relationType_);
      DARABONBA_PTR_TO_JSON(serviceIdList, serviceIdList_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(windowSecs, windowSecs_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConfigUnified& obj) { 
      DARABONBA_PTR_FROM_JSON(aggregate, aggregate_);
      DARABONBA_PTR_FROM_JSON(dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(enableDataCompleteCheck, enableDataCompleteCheck_);
      DARABONBA_PTR_FROM_JSON(entityDomain, entityDomain_);
      DARABONBA_PTR_FROM_JSON(entityFields, entityFields_);
      DARABONBA_PTR_FROM_JSON(entityFilters, entityFilters_);
      DARABONBA_PTR_FROM_JSON(entityType, entityType_);
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_PTR_FROM_JSON(filterList, filterList_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_FROM_JSON(legacyRaw, legacyRaw_);
      DARABONBA_PTR_FROM_JSON(legacyType, legacyType_);
      DARABONBA_PTR_FROM_JSON(logSet, logSet_);
      DARABONBA_PTR_FROM_JSON(measureList, measureList_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(metricSet, metricSet_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(offsetSecs, offsetSecs_);
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
        && this->dimensions_ == nullptr && this->enableDataCompleteCheck_ == nullptr && this->entityDomain_ == nullptr && this->entityFields_ == nullptr && this->entityFilters_ == nullptr
        && this->entityType_ == nullptr && this->expr_ == nullptr && this->filterList_ == nullptr && this->groupId_ == nullptr && this->labelFilters_ == nullptr
        && this->legacyRaw_ == nullptr && this->legacyType_ == nullptr && this->logSet_ == nullptr && this->measureList_ == nullptr && this->metric_ == nullptr
        && this->metricSet_ == nullptr && this->namespace_ == nullptr && this->offsetSecs_ == nullptr && this->promQl_ == nullptr && this->queries_ == nullptr
        && this->relationType_ == nullptr && this->serviceIdList_ == nullptr && this->type_ == nullptr && this->windowSecs_ == nullptr; };
    // aggregate Field Functions 
    bool hasAggregate() const { return this->aggregate_ != nullptr;};
    void deleteAggregate() { this->aggregate_ = nullptr;};
    inline string getAggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
    inline QueryConfigUnified& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<map<string, string>> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<map<string, string>>) };
    inline vector<map<string, string>> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<map<string, string>>) };
    inline QueryConfigUnified& setDimensions(const vector<map<string, string>> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline QueryConfigUnified& setDimensions(vector<map<string, string>> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


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
    inline const vector<UmodelEntityField> & getEntityFields() const { DARABONBA_PTR_GET_CONST(entityFields_, vector<UmodelEntityField>) };
    inline vector<UmodelEntityField> getEntityFields() { DARABONBA_PTR_GET(entityFields_, vector<UmodelEntityField>) };
    inline QueryConfigUnified& setEntityFields(const vector<UmodelEntityField> & entityFields) { DARABONBA_PTR_SET_VALUE(entityFields_, entityFields) };
    inline QueryConfigUnified& setEntityFields(vector<UmodelEntityField> && entityFields) { DARABONBA_PTR_SET_RVALUE(entityFields_, entityFields) };


    // entityFilters Field Functions 
    bool hasEntityFilters() const { return this->entityFilters_ != nullptr;};
    void deleteEntityFilters() { this->entityFilters_ = nullptr;};
    inline const vector<UmodelEntityFilter> & getEntityFilters() const { DARABONBA_PTR_GET_CONST(entityFilters_, vector<UmodelEntityFilter>) };
    inline vector<UmodelEntityFilter> getEntityFilters() { DARABONBA_PTR_GET(entityFilters_, vector<UmodelEntityFilter>) };
    inline QueryConfigUnified& setEntityFilters(const vector<UmodelEntityFilter> & entityFilters) { DARABONBA_PTR_SET_VALUE(entityFilters_, entityFilters) };
    inline QueryConfigUnified& setEntityFilters(vector<UmodelEntityFilter> && entityFilters) { DARABONBA_PTR_SET_RVALUE(entityFilters_, entityFilters) };


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
    inline const vector<ApmFilterConfig> & getFilterList() const { DARABONBA_PTR_GET_CONST(filterList_, vector<ApmFilterConfig>) };
    inline vector<ApmFilterConfig> getFilterList() { DARABONBA_PTR_GET(filterList_, vector<ApmFilterConfig>) };
    inline QueryConfigUnified& setFilterList(const vector<ApmFilterConfig> & filterList) { DARABONBA_PTR_SET_VALUE(filterList_, filterList) };
    inline QueryConfigUnified& setFilterList(vector<ApmFilterConfig> && filterList) { DARABONBA_PTR_SET_RVALUE(filterList_, filterList) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline QueryConfigUnified& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // labelFilters Field Functions 
    bool hasLabelFilters() const { return this->labelFilters_ != nullptr;};
    void deleteLabelFilters() { this->labelFilters_ = nullptr;};
    inline const vector<UmodelLabelFilter> & getLabelFilters() const { DARABONBA_PTR_GET_CONST(labelFilters_, vector<UmodelLabelFilter>) };
    inline vector<UmodelLabelFilter> getLabelFilters() { DARABONBA_PTR_GET(labelFilters_, vector<UmodelLabelFilter>) };
    inline QueryConfigUnified& setLabelFilters(const vector<UmodelLabelFilter> & labelFilters) { DARABONBA_PTR_SET_VALUE(labelFilters_, labelFilters) };
    inline QueryConfigUnified& setLabelFilters(vector<UmodelLabelFilter> && labelFilters) { DARABONBA_PTR_SET_RVALUE(labelFilters_, labelFilters) };


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


    // measureList Field Functions 
    bool hasMeasureList() const { return this->measureList_ != nullptr;};
    void deleteMeasureList() { this->measureList_ = nullptr;};
    inline const vector<ApmMeasureConfig> & getMeasureList() const { DARABONBA_PTR_GET_CONST(measureList_, vector<ApmMeasureConfig>) };
    inline vector<ApmMeasureConfig> getMeasureList() { DARABONBA_PTR_GET(measureList_, vector<ApmMeasureConfig>) };
    inline QueryConfigUnified& setMeasureList(const vector<ApmMeasureConfig> & measureList) { DARABONBA_PTR_SET_VALUE(measureList_, measureList) };
    inline QueryConfigUnified& setMeasureList(vector<ApmMeasureConfig> && measureList) { DARABONBA_PTR_SET_RVALUE(measureList_, measureList) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline QueryConfigUnified& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


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


    // promQl Field Functions 
    bool hasPromQl() const { return this->promQl_ != nullptr;};
    void deletePromQl() { this->promQl_ = nullptr;};
    inline string getPromQl() const { DARABONBA_PTR_GET_DEFAULT(promQl_, "") };
    inline QueryConfigUnified& setPromQl(string promQl) { DARABONBA_PTR_SET_VALUE(promQl_, promQl) };


    // queries Field Functions 
    bool hasQueries() const { return this->queries_ != nullptr;};
    void deleteQueries() { this->queries_ = nullptr;};
    inline const vector<MetricSetNamedQueryEntry> & getQueries() const { DARABONBA_PTR_GET_CONST(queries_, vector<MetricSetNamedQueryEntry>) };
    inline vector<MetricSetNamedQueryEntry> getQueries() { DARABONBA_PTR_GET(queries_, vector<MetricSetNamedQueryEntry>) };
    inline QueryConfigUnified& setQueries(const vector<MetricSetNamedQueryEntry> & queries) { DARABONBA_PTR_SET_VALUE(queries_, queries) };
    inline QueryConfigUnified& setQueries(vector<MetricSetNamedQueryEntry> && queries) { DARABONBA_PTR_SET_RVALUE(queries_, queries) };


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
    shared_ptr<string> aggregate_ {};
    shared_ptr<vector<map<string, string>>> dimensions_ {};
    shared_ptr<bool> enableDataCompleteCheck_ {};
    shared_ptr<string> entityDomain_ {};
    shared_ptr<vector<UmodelEntityField>> entityFields_ {};
    shared_ptr<vector<UmodelEntityFilter>> entityFilters_ {};
    shared_ptr<string> entityType_ {};
    shared_ptr<string> expr_ {};
    shared_ptr<vector<ApmFilterConfig>> filterList_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<vector<UmodelLabelFilter>> labelFilters_ {};
    shared_ptr<string> legacyRaw_ {};
    shared_ptr<string> legacyType_ {};
    shared_ptr<string> logSet_ {};
    shared_ptr<vector<ApmMeasureConfig>> measureList_ {};
    shared_ptr<string> metric_ {};
    shared_ptr<string> metricSet_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<int64_t> offsetSecs_ {};
    shared_ptr<string> promQl_ {};
    shared_ptr<vector<MetricSetNamedQueryEntry>> queries_ {};
    shared_ptr<string> relationType_ {};
    shared_ptr<vector<string>> serviceIdList_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
    shared_ptr<int64_t> windowSecs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
