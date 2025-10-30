// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKTAGSLINECHARTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKTAGSLINECHARTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskTagsLineChartResponseBodyResultObjectSeries.hpp>
#include <alibabacloud/models/DescribeRiskTagsLineChartResponseBodyResultObjectXaxis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRiskTagsLineChartResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskTagsLineChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Series, series_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(Xaxis, xaxis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskTagsLineChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(Xaxis, xaxis_);
    };
    DescribeRiskTagsLineChartResponseBodyResultObject() = default ;
    DescribeRiskTagsLineChartResponseBodyResultObject(const DescribeRiskTagsLineChartResponseBodyResultObject &) = default ;
    DescribeRiskTagsLineChartResponseBodyResultObject(DescribeRiskTagsLineChartResponseBodyResultObject &&) = default ;
    DescribeRiskTagsLineChartResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskTagsLineChartResponseBodyResultObject() = default ;
    DescribeRiskTagsLineChartResponseBodyResultObject& operator=(const DescribeRiskTagsLineChartResponseBodyResultObject &) = default ;
    DescribeRiskTagsLineChartResponseBodyResultObject& operator=(DescribeRiskTagsLineChartResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->percent_ == nullptr
        && return this->series_ == nullptr && return this->total_ == nullptr && return this->xaxis_ == nullptr; };
    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline const vector<float> & percent() const { DARABONBA_PTR_GET_CONST(percent_, vector<float>) };
    inline vector<float> percent() { DARABONBA_PTR_GET(percent_, vector<float>) };
    inline DescribeRiskTagsLineChartResponseBodyResultObject& setPercent(const vector<float> & percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };
    inline DescribeRiskTagsLineChartResponseBodyResultObject& setPercent(vector<float> && percent) { DARABONBA_PTR_SET_RVALUE(percent_, percent) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeRiskTagsLineChartResponseBodyResultObjectSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeRiskTagsLineChartResponseBodyResultObjectSeries>) };
    inline vector<Models::DescribeRiskTagsLineChartResponseBodyResultObjectSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeRiskTagsLineChartResponseBodyResultObjectSeries>) };
    inline DescribeRiskTagsLineChartResponseBodyResultObject& setSeries(const vector<Models::DescribeRiskTagsLineChartResponseBodyResultObjectSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeRiskTagsLineChartResponseBodyResultObject& setSeries(vector<Models::DescribeRiskTagsLineChartResponseBodyResultObjectSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline const vector<int64_t> & total() const { DARABONBA_PTR_GET_CONST(total_, vector<int64_t>) };
    inline vector<int64_t> total() { DARABONBA_PTR_GET(total_, vector<int64_t>) };
    inline DescribeRiskTagsLineChartResponseBodyResultObject& setTotal(const vector<int64_t> & total) { DARABONBA_PTR_SET_VALUE(total_, total) };
    inline DescribeRiskTagsLineChartResponseBodyResultObject& setTotal(vector<int64_t> && total) { DARABONBA_PTR_SET_RVALUE(total_, total) };


    // xaxis Field Functions 
    bool hasXaxis() const { return this->xaxis_ != nullptr;};
    void deleteXaxis() { this->xaxis_ = nullptr;};
    inline const Models::DescribeRiskTagsLineChartResponseBodyResultObjectXaxis & xaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, Models::DescribeRiskTagsLineChartResponseBodyResultObjectXaxis) };
    inline Models::DescribeRiskTagsLineChartResponseBodyResultObjectXaxis xaxis() { DARABONBA_PTR_GET(xaxis_, Models::DescribeRiskTagsLineChartResponseBodyResultObjectXaxis) };
    inline DescribeRiskTagsLineChartResponseBodyResultObject& setXaxis(const Models::DescribeRiskTagsLineChartResponseBodyResultObjectXaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
    inline DescribeRiskTagsLineChartResponseBodyResultObject& setXaxis(Models::DescribeRiskTagsLineChartResponseBodyResultObjectXaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


  protected:
    // Call percentage, represented as a decimal
    std::shared_ptr<vector<float>> percent_ = nullptr;
    // Chart data
    std::shared_ptr<vector<Models::DescribeRiskTagsLineChartResponseBodyResultObjectSeries>> series_ = nullptr;
    // Total number of records.
    std::shared_ptr<vector<int64_t>> total_ = nullptr;
    // X-axis data of the chart
    std::shared_ptr<Models::DescribeRiskTagsLineChartResponseBodyResultObjectXaxis> xaxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
