// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASHAREPERFORMANCERESPONSEBODYPERFORMANCEKEYSSERIESVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASHAREPERFORMANCERESPONSEBODYPERFORMANCEKEYSSERIESVALUES_HPP_
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
  class DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues& obj) { 
      DARABONBA_PTR_TO_JSON(Point, point_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Point, point_);
    };
    DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues() = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues(const DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues &) = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues(DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues &&) = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues() = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues& operator=(const DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues &) = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues& operator=(DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues &&) = default ;
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
    inline DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues& setPoint(const vector<string> & point) { DARABONBA_PTR_SET_VALUE(point_, point) };
    inline DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues& setPoint(vector<string> && point) { DARABONBA_PTR_SET_RVALUE(point_, point) };


  protected:
    // The value of the performance metric at a point in time.
    std::shared_ptr<vector<string>> point_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
