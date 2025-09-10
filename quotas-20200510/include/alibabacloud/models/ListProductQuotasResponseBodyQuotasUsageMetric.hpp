// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTQUOTASRESPONSEBODYQUOTASUSAGEMETRIC_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTQUOTASRESPONSEBODYQUOTASUSAGEMETRIC_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductQuotasResponseBodyQuotasUsageMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductQuotasResponseBodyQuotasUsageMetric& obj) { 
      DARABONBA_PTR_TO_JSON(MetricDimensions, metricDimensions_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(MetricNamespace, metricNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductQuotasResponseBodyQuotasUsageMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricDimensions, metricDimensions_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(MetricNamespace, metricNamespace_);
    };
    ListProductQuotasResponseBodyQuotasUsageMetric() = default ;
    ListProductQuotasResponseBodyQuotasUsageMetric(const ListProductQuotasResponseBodyQuotasUsageMetric &) = default ;
    ListProductQuotasResponseBodyQuotasUsageMetric(ListProductQuotasResponseBodyQuotasUsageMetric &&) = default ;
    ListProductQuotasResponseBodyQuotasUsageMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductQuotasResponseBodyQuotasUsageMetric() = default ;
    ListProductQuotasResponseBodyQuotasUsageMetric& operator=(const ListProductQuotasResponseBodyQuotasUsageMetric &) = default ;
    ListProductQuotasResponseBodyQuotasUsageMetric& operator=(ListProductQuotasResponseBodyQuotasUsageMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricDimensions_ != nullptr
        && this->metricName_ != nullptr && this->metricNamespace_ != nullptr; };
    // metricDimensions Field Functions 
    bool hasMetricDimensions() const { return this->metricDimensions_ != nullptr;};
    void deleteMetricDimensions() { this->metricDimensions_ = nullptr;};
    inline const map<string, string> & metricDimensions() const { DARABONBA_PTR_GET_CONST(metricDimensions_, map<string, string>) };
    inline map<string, string> metricDimensions() { DARABONBA_PTR_GET(metricDimensions_, map<string, string>) };
    inline ListProductQuotasResponseBodyQuotasUsageMetric& setMetricDimensions(const map<string, string> & metricDimensions) { DARABONBA_PTR_SET_VALUE(metricDimensions_, metricDimensions) };
    inline ListProductQuotasResponseBodyQuotasUsageMetric& setMetricDimensions(map<string, string> && metricDimensions) { DARABONBA_PTR_SET_RVALUE(metricDimensions_, metricDimensions) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ListProductQuotasResponseBodyQuotasUsageMetric& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricNamespace Field Functions 
    bool hasMetricNamespace() const { return this->metricNamespace_ != nullptr;};
    void deleteMetricNamespace() { this->metricNamespace_ = nullptr;};
    inline string metricNamespace() const { DARABONBA_PTR_GET_DEFAULT(metricNamespace_, "") };
    inline ListProductQuotasResponseBodyQuotasUsageMetric& setMetricNamespace(string metricNamespace) { DARABONBA_PTR_SET_VALUE(metricNamespace_, metricNamespace) };


  protected:
    // The monitoring dimensions.
    // 
    // The value is a collection of `key:value` pairs. Example: `{"productCode":"***","metricKey":"***","regionId":"***","label":"***"}`.
    std::shared_ptr<map<string, string>> metricDimensions_ = nullptr;
    // The monitoring metric.
    std::shared_ptr<string> metricName_ = nullptr;
    // The monitoring namespace.
    std::shared_ptr<string> metricNamespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
