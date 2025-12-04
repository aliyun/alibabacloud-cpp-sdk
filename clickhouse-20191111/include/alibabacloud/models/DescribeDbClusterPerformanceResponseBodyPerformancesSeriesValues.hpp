// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCESSERIESVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCESSERIESVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues& obj) { 
      DARABONBA_PTR_TO_JSON(Point, point_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Point, point_);
    };
    DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues(const DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues(DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues &&) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues& operator=(const DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues& operator=(DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues &&) = default ;
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
    inline DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues& setPoint(const vector<string> & point) { DARABONBA_PTR_SET_VALUE(point_, point) };
    inline DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues& setPoint(vector<string> && point) { DARABONBA_PTR_SET_RVALUE(point_, point) };


  protected:
    // The values of a metric.
    std::shared_ptr<vector<string>> point_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
