// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICMETALISTRESPONSEBODYRESOURCESRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICMETALISTRESPONSEBODYRESOURCESRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricMetaListResponseBodyResourcesResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricMetaListResponseBodyResourcesResource& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Periods, periods_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricMetaListResponseBodyResourcesResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Periods, periods_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    DescribeMetricMetaListResponseBodyResourcesResource() = default ;
    DescribeMetricMetaListResponseBodyResourcesResource(const DescribeMetricMetaListResponseBodyResourcesResource &) = default ;
    DescribeMetricMetaListResponseBodyResourcesResource(DescribeMetricMetaListResponseBodyResourcesResource &&) = default ;
    DescribeMetricMetaListResponseBodyResourcesResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricMetaListResponseBodyResourcesResource() = default ;
    DescribeMetricMetaListResponseBodyResourcesResource& operator=(const DescribeMetricMetaListResponseBodyResourcesResource &) = default ;
    DescribeMetricMetaListResponseBodyResourcesResource& operator=(DescribeMetricMetaListResponseBodyResourcesResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->dimensions_ != nullptr && this->labels_ != nullptr && this->metricName_ != nullptr && this->namespace_ != nullptr && this->periods_ != nullptr
        && this->statistics_ != nullptr && this->unit_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeMetricMetaListResponseBodyResourcesResource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeMetricMetaListResponseBodyResourcesResource& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline DescribeMetricMetaListResponseBodyResourcesResource& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricMetaListResponseBodyResourcesResource& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeMetricMetaListResponseBodyResourcesResource& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // periods Field Functions 
    bool hasPeriods() const { return this->periods_ != nullptr;};
    void deletePeriods() { this->periods_ = nullptr;};
    inline string periods() const { DARABONBA_PTR_GET_DEFAULT(periods_, "") };
    inline DescribeMetricMetaListResponseBodyResourcesResource& setPeriods(string periods) { DARABONBA_PTR_SET_VALUE(periods_, periods) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline DescribeMetricMetaListResponseBodyResourcesResource& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeMetricMetaListResponseBodyResourcesResource& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The metric description.
    std::shared_ptr<string> description_ = nullptr;
    // The monitoring dimensions of the resource. Multiple monitoring dimensions are separated with commas (,).
    std::shared_ptr<string> dimensions_ = nullptr;
    // The tags of the metric, including one or more JSON strings.
    // 
    // Format: `[{"name":"tag key","value":"tag value"}]`. The `name` can be repeated. The following tags are available:
    // 
    // *   metricCategory: the category of the metric.
    // *   alertEnable: indicates whether to report alerts for the metric.
    // *   alertUnit: the unit of the metric in the alerts.
    // *   unitFactor: the factor for metric unit conversion.
    // *   minAlertPeriod: the minimum interval at which the alert is reported.
    // *   productCategory: the category of the service.
    std::shared_ptr<string> labels_ = nullptr;
    // The metric name.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    std::shared_ptr<string> namespace_ = nullptr;
    // The statistical periods of the metric. Multiple statistical periods are separated with commas (,).
    // 
    // Unit: seconds.
    std::shared_ptr<string> periods_ = nullptr;
    // The statistical method. Multiple statistical methods are separated with commas (,).
    std::shared_ptr<string> statistics_ = nullptr;
    // The unit of the metric.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
