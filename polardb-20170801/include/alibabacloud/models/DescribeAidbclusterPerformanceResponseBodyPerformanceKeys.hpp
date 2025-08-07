// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAIDBClusterPerformanceResponseBodyPerformanceKeysPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(Measurement, measurement_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Points, points_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(Measurement, measurement_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Points, points_);
    };
    DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys() = default ;
    DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys(const DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys(DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys &&) = default ;
    DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys() = default ;
    DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys& operator=(const DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys& operator=(DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys &&) = default ;
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
    inline DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // measurement Field Functions 
    bool hasMeasurement() const { return this->measurement_ != nullptr;};
    void deleteMeasurement() { this->measurement_ = nullptr;};
    inline string measurement() const { DARABONBA_PTR_GET_DEFAULT(measurement_, "") };
    inline DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys& setMeasurement(string measurement) { DARABONBA_PTR_SET_VALUE(measurement_, measurement) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const vector<Models::DescribeAIDBClusterPerformanceResponseBodyPerformanceKeysPoints> & points() const { DARABONBA_PTR_GET_CONST(points_, vector<Models::DescribeAIDBClusterPerformanceResponseBodyPerformanceKeysPoints>) };
    inline vector<Models::DescribeAIDBClusterPerformanceResponseBodyPerformanceKeysPoints> points() { DARABONBA_PTR_GET(points_, vector<Models::DescribeAIDBClusterPerformanceResponseBodyPerformanceKeysPoints>) };
    inline DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys& setPoints(const vector<Models::DescribeAIDBClusterPerformanceResponseBodyPerformanceKeysPoints> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline DescribeAIDBClusterPerformanceResponseBodyPerformanceKeys& setPoints(vector<Models::DescribeAIDBClusterPerformanceResponseBodyPerformanceKeysPoints> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


  protected:
    std::shared_ptr<string> DBNodeId_ = nullptr;
    std::shared_ptr<string> measurement_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeAIDBClusterPerformanceResponseBodyPerformanceKeysPoints>> points_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
