// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(Measurement, measurement_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Points, points_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(Measurement, measurement_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Points, points_);
    };
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem() = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem(const DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem &) = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem(DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem &&) = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem() = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem& operator=(const DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem &) = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem& operator=(DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBNodeId_ != nullptr
        && this->measurement_ != nullptr && this->metricName_ != nullptr && this->points_ != nullptr; };
    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // measurement Field Functions 
    bool hasMeasurement() const { return this->measurement_ != nullptr;};
    void deleteMeasurement() { this->measurement_ = nullptr;};
    inline string measurement() const { DARABONBA_PTR_GET_DEFAULT(measurement_, "") };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem& setMeasurement(string measurement) { DARABONBA_PTR_SET_VALUE(measurement_, measurement) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints & points() const { DARABONBA_PTR_GET_CONST(points_, Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints) };
    inline Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints points() { DARABONBA_PTR_GET(points_, Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints) };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem& setPoints(const Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem& setPoints(Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


  protected:
    // The ID of the node.
    std::shared_ptr<string> DBNodeId_ = nullptr;
    // The performance metric.
    std::shared_ptr<string> measurement_ = nullptr;
    // The name of the performance metric.
    std::shared_ptr<string> metricName_ = nullptr;
    // The list of the performance metrics.
    std::shared_ptr<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints> points_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
