// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONMETRICSRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONMETRICSRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAddonMetricsResponseBodyDataMetricsLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeAddonMetricsResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonMetricsResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonMetricsResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    DescribeAddonMetricsResponseBodyDataMetrics() = default ;
    DescribeAddonMetricsResponseBodyDataMetrics(const DescribeAddonMetricsResponseBodyDataMetrics &) = default ;
    DescribeAddonMetricsResponseBodyDataMetrics(DescribeAddonMetricsResponseBodyDataMetrics &&) = default ;
    DescribeAddonMetricsResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonMetricsResponseBodyDataMetrics() = default ;
    DescribeAddonMetricsResponseBodyDataMetrics& operator=(const DescribeAddonMetricsResponseBodyDataMetrics &) = default ;
    DescribeAddonMetricsResponseBodyDataMetrics& operator=(DescribeAddonMetricsResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->labels_ != nullptr && this->metric_ != nullptr && this->type_ != nullptr && this->unit_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAddonMetricsResponseBodyDataMetrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::DescribeAddonMetricsResponseBodyDataMetricsLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::DescribeAddonMetricsResponseBodyDataMetricsLabels>) };
    inline vector<Models::DescribeAddonMetricsResponseBodyDataMetricsLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::DescribeAddonMetricsResponseBodyDataMetricsLabels>) };
    inline DescribeAddonMetricsResponseBodyDataMetrics& setLabels(const vector<Models::DescribeAddonMetricsResponseBodyDataMetricsLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeAddonMetricsResponseBodyDataMetrics& setLabels(vector<Models::DescribeAddonMetricsResponseBodyDataMetricsLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeAddonMetricsResponseBodyDataMetrics& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAddonMetricsResponseBodyDataMetrics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeAddonMetricsResponseBodyDataMetrics& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The description of the metric.
    std::shared_ptr<string> description_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::DescribeAddonMetricsResponseBodyDataMetricsLabels>> labels_ = nullptr;
    // The metric name.
    std::shared_ptr<string> metric_ = nullptr;
    // The type of the metric.
    std::shared_ptr<string> type_ = nullptr;
    // The unit of the metric.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
