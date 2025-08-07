// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(Measurement, measurement_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Points, points_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(Measurement, measurement_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Points, points_);
    };
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem(const DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem(DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem &&) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem& operator=(const DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem& operator=(DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem &&) = default ;
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
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // measurement Field Functions 
    bool hasMeasurement() const { return this->measurement_ != nullptr;};
    void deleteMeasurement() { this->measurement_ = nullptr;};
    inline string measurement() const { DARABONBA_PTR_GET_DEFAULT(measurement_, "") };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem& setMeasurement(string measurement) { DARABONBA_PTR_SET_VALUE(measurement_, measurement) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints & points() const { DARABONBA_PTR_GET_CONST(points_, Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints) };
    inline Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints points() { DARABONBA_PTR_GET(points_, Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints) };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem& setPoints(const Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem& setPoints(Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


  protected:
    // The ID of the cluster node.
    // 
    // >  The value of this parameter is not returned if the `Key` parameter is set to `PolarDBDiskUsage`.
    std::shared_ptr<string> DBNodeId_ = nullptr;
    // The performance metrics that are returned.
    std::shared_ptr<string> measurement_ = nullptr;
    // The name of the performance metric.
    std::shared_ptr<string> metricName_ = nullptr;
    // The performance metrics.
    std::shared_ptr<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints> points_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
