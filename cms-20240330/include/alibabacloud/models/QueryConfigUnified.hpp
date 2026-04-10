// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFIGUNIFIED_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFIGUNIFIED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UmodelEntityField.hpp>
#include <alibabacloud/models/UmodelEntityFilter.hpp>
#include <alibabacloud/models/ApmFilterConfig.hpp>
#include <alibabacloud/models/UmodelLabelFilter.hpp>
#include <alibabacloud/models/ApmMeasureConfig.hpp>
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
      DARABONBA_PTR_TO_JSON(enableDataCompleteCheck, enableDataCompleteCheck_);
      DARABONBA_PTR_TO_JSON(entityDomain, entityDomain_);
      DARABONBA_PTR_TO_JSON(entityFields, entityFields_);
      DARABONBA_PTR_TO_JSON(entityFilters, entityFilters_);
      DARABONBA_PTR_TO_JSON(entityType, entityType_);
      DARABONBA_PTR_TO_JSON(filterList, filterList_);
      DARABONBA_PTR_TO_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_TO_JSON(measureList, measureList_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(metricSet, metricSet_);
      DARABONBA_PTR_TO_JSON(promQl, promQl_);
      DARABONBA_PTR_TO_JSON(serviceIdList, serviceIdList_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConfigUnified& obj) { 
      DARABONBA_PTR_FROM_JSON(enableDataCompleteCheck, enableDataCompleteCheck_);
      DARABONBA_PTR_FROM_JSON(entityDomain, entityDomain_);
      DARABONBA_PTR_FROM_JSON(entityFields, entityFields_);
      DARABONBA_PTR_FROM_JSON(entityFilters, entityFilters_);
      DARABONBA_PTR_FROM_JSON(entityType, entityType_);
      DARABONBA_PTR_FROM_JSON(filterList, filterList_);
      DARABONBA_PTR_FROM_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_FROM_JSON(measureList, measureList_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(metricSet, metricSet_);
      DARABONBA_PTR_FROM_JSON(promQl, promQl_);
      DARABONBA_PTR_FROM_JSON(serviceIdList, serviceIdList_);
      DARABONBA_PTR_FROM_JSON(type, type_);
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
    virtual bool empty() const override { return this->enableDataCompleteCheck_ == nullptr
        && this->entityDomain_ == nullptr && this->entityFields_ == nullptr && this->entityFilters_ == nullptr && this->entityType_ == nullptr && this->filterList_ == nullptr
        && this->labelFilters_ == nullptr && this->measureList_ == nullptr && this->metric_ == nullptr && this->metricSet_ == nullptr && this->promQl_ == nullptr
        && this->serviceIdList_ == nullptr && this->type_ == nullptr; };
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


    // filterList Field Functions 
    bool hasFilterList() const { return this->filterList_ != nullptr;};
    void deleteFilterList() { this->filterList_ = nullptr;};
    inline const vector<ApmFilterConfig> & getFilterList() const { DARABONBA_PTR_GET_CONST(filterList_, vector<ApmFilterConfig>) };
    inline vector<ApmFilterConfig> getFilterList() { DARABONBA_PTR_GET(filterList_, vector<ApmFilterConfig>) };
    inline QueryConfigUnified& setFilterList(const vector<ApmFilterConfig> & filterList) { DARABONBA_PTR_SET_VALUE(filterList_, filterList) };
    inline QueryConfigUnified& setFilterList(vector<ApmFilterConfig> && filterList) { DARABONBA_PTR_SET_RVALUE(filterList_, filterList) };


    // labelFilters Field Functions 
    bool hasLabelFilters() const { return this->labelFilters_ != nullptr;};
    void deleteLabelFilters() { this->labelFilters_ = nullptr;};
    inline const vector<UmodelLabelFilter> & getLabelFilters() const { DARABONBA_PTR_GET_CONST(labelFilters_, vector<UmodelLabelFilter>) };
    inline vector<UmodelLabelFilter> getLabelFilters() { DARABONBA_PTR_GET(labelFilters_, vector<UmodelLabelFilter>) };
    inline QueryConfigUnified& setLabelFilters(const vector<UmodelLabelFilter> & labelFilters) { DARABONBA_PTR_SET_VALUE(labelFilters_, labelFilters) };
    inline QueryConfigUnified& setLabelFilters(vector<UmodelLabelFilter> && labelFilters) { DARABONBA_PTR_SET_RVALUE(labelFilters_, labelFilters) };


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


    // promQl Field Functions 
    bool hasPromQl() const { return this->promQl_ != nullptr;};
    void deletePromQl() { this->promQl_ = nullptr;};
    inline string getPromQl() const { DARABONBA_PTR_GET_DEFAULT(promQl_, "") };
    inline QueryConfigUnified& setPromQl(string promQl) { DARABONBA_PTR_SET_VALUE(promQl_, promQl) };


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


  protected:
    // 是否启用数据完整性检查
    shared_ptr<bool> enableDataCompleteCheck_ {};
    // 实体所属域
    shared_ptr<string> entityDomain_ {};
    // 需要附带返回的实体字段
    shared_ptr<vector<UmodelEntityField>> entityFields_ {};
    // 实体过滤列表
    shared_ptr<vector<UmodelEntityFilter>> entityFilters_ {};
    // 实体类型
    shared_ptr<string> entityType_ {};
    // APM 过滤条件列表
    shared_ptr<vector<ApmFilterConfig>> filterList_ {};
    // 标签过滤条件
    shared_ptr<vector<UmodelLabelFilter>> labelFilters_ {};
    // APM 度量配置列表
    shared_ptr<vector<ApmMeasureConfig>> measureList_ {};
    // 指标名称（type=UMODEL_METRICSET_QUERY）
    shared_ptr<string> metric_ {};
    // 指标集名称（type=UMODEL_METRICSET_QUERY）
    shared_ptr<string> metricSet_ {};
    // Prometheus 查询语句（type=PROMETHEUS_SINGLE_QUERY）
    shared_ptr<string> promQl_ {};
    // 服务 ID 列表（type=APM_MULTI_QUERY）
    shared_ptr<vector<string>> serviceIdList_ {};
    // 查询类型
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
