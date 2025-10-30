// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCEKEYSSERIESVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCEKEYSSERIESVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues& obj) { 
      DARABONBA_PTR_TO_JSON(Point, point_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Point, point_);
    };
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues(const DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues(DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues &&) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues& operator=(const DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues& operator=(DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->point_ == nullptr; };
    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline const vector<string> & point() const { DARABONBA_PTR_GET_CONST(point_, vector<string>) };
    inline vector<string> point() { DARABONBA_PTR_GET(point_, vector<string>) };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues& setPoint(const vector<string> & point) { DARABONBA_PTR_SET_VALUE(point_, point) };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues& setPoint(vector<string> && point) { DARABONBA_PTR_SET_RVALUE(point_, point) };


  protected:
    // The value of the performance metric and the time when the metric value was collected.
    std::shared_ptr<vector<string>> point_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
