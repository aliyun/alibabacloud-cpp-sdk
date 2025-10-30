// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRESULTBARCHARTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRESULTBARCHARTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventResultBarChartResponseBodyResultObjectSeries.hpp>
#include <alibabacloud/models/DescribeEventResultBarChartResponseBodyResultObjectXaxis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventResultBarChartResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventResultBarChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(series, series_);
      DARABONBA_PTR_TO_JSON(xaxis, xaxis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventResultBarChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(series, series_);
      DARABONBA_PTR_FROM_JSON(xaxis, xaxis_);
    };
    DescribeEventResultBarChartResponseBodyResultObject() = default ;
    DescribeEventResultBarChartResponseBodyResultObject(const DescribeEventResultBarChartResponseBodyResultObject &) = default ;
    DescribeEventResultBarChartResponseBodyResultObject(DescribeEventResultBarChartResponseBodyResultObject &&) = default ;
    DescribeEventResultBarChartResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventResultBarChartResponseBodyResultObject() = default ;
    DescribeEventResultBarChartResponseBodyResultObject& operator=(const DescribeEventResultBarChartResponseBodyResultObject &) = default ;
    DescribeEventResultBarChartResponseBodyResultObject& operator=(DescribeEventResultBarChartResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->series_ == nullptr
        && return this->xaxis_ == nullptr; };
    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeries>) };
    inline vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeries>) };
    inline DescribeEventResultBarChartResponseBodyResultObject& setSeries(const vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeEventResultBarChartResponseBodyResultObject& setSeries(vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // xaxis Field Functions 
    bool hasXaxis() const { return this->xaxis_ != nullptr;};
    void deleteXaxis() { this->xaxis_ = nullptr;};
    inline const Models::DescribeEventResultBarChartResponseBodyResultObjectXaxis & xaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, Models::DescribeEventResultBarChartResponseBodyResultObjectXaxis) };
    inline Models::DescribeEventResultBarChartResponseBodyResultObjectXaxis xaxis() { DARABONBA_PTR_GET(xaxis_, Models::DescribeEventResultBarChartResponseBodyResultObjectXaxis) };
    inline DescribeEventResultBarChartResponseBodyResultObject& setXaxis(const Models::DescribeEventResultBarChartResponseBodyResultObjectXaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
    inline DescribeEventResultBarChartResponseBodyResultObject& setXaxis(Models::DescribeEventResultBarChartResponseBodyResultObjectXaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


  protected:
    // Chart data
    std::shared_ptr<vector<Models::DescribeEventResultBarChartResponseBodyResultObjectSeries>> series_ = nullptr;
    // xaxis interface configuration.
    std::shared_ptr<Models::DescribeEventResultBarChartResponseBodyResultObjectXaxis> xaxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
