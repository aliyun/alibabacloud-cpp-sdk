// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTGOVERNANCEMETRICSRESPONSEBODYGOVERNANCEMETRICSGOVERNANCEMETRIC_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTGOVERNANCEMETRICSRESPONSEBODYGOVERNANCEMETRICSGOVERNANCEMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric& obj) { 
      DARABONBA_PTR_TO_JSON(GovernanceItem, governanceItem_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_ANY_TO_JSON(MetricValue, metricValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(GovernanceItem, governanceItem_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_ANY_FROM_JSON(MetricValue, metricValue_);
    };
    ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric() = default ;
    ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric(const ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric &) = default ;
    ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric(ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric &&) = default ;
    ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric() = default ;
    ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric& operator=(const ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric &) = default ;
    ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric& operator=(ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->governanceItem_ != nullptr
        && this->metricType_ != nullptr && this->metricValue_ != nullptr; };
    // governanceItem Field Functions 
    bool hasGovernanceItem() const { return this->governanceItem_ != nullptr;};
    void deleteGovernanceItem() { this->governanceItem_ = nullptr;};
    inline string governanceItem() const { DARABONBA_PTR_GET_DEFAULT(governanceItem_, "") };
    inline ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric& setGovernanceItem(string governanceItem) { DARABONBA_PTR_SET_VALUE(governanceItem_, governanceItem) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // metricValue Field Functions 
    bool hasMetricValue() const { return this->metricValue_ != nullptr;};
    void deleteMetricValue() { this->metricValue_ = nullptr;};
    inline     const Darabonba::Json & metricValue() const { DARABONBA_GET(metricValue_) };
    Darabonba::Json & metricValue() { DARABONBA_GET(metricValue_) };
    inline ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric& setMetricValue(const Darabonba::Json & metricValue) { DARABONBA_SET_VALUE(metricValue_, metricValue) };
    inline ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric& setMetricValue(Darabonba::Json & metricValue) { DARABONBA_SET_RVALUE(metricValue_, metricValue) };


  protected:
    // The name of the governance item.
    std::shared_ptr<string> governanceItem_ = nullptr;
    // The type of the metric value. Valid values:
    // 
    // *   Number
    // *   String
    // *   Boolean
    std::shared_ptr<string> metricType_ = nullptr;
    // The metric value. The type of the metric value is determined by `MetricType`.
    Darabonba::Json metricValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
