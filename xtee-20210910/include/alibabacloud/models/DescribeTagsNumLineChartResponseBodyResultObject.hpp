// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSNUMLINECHARTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSNUMLINECHARTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagsNumLineChartResponseBodyResultObjectSeries.hpp>
#include <alibabacloud/models/DescribeTagsNumLineChartResponseBodyResultObjectXaxis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeTagsNumLineChartResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsNumLineChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(series, series_);
      DARABONBA_PTR_TO_JSON(xaxis, xaxis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsNumLineChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(series, series_);
      DARABONBA_PTR_FROM_JSON(xaxis, xaxis_);
    };
    DescribeTagsNumLineChartResponseBodyResultObject() = default ;
    DescribeTagsNumLineChartResponseBodyResultObject(const DescribeTagsNumLineChartResponseBodyResultObject &) = default ;
    DescribeTagsNumLineChartResponseBodyResultObject(DescribeTagsNumLineChartResponseBodyResultObject &&) = default ;
    DescribeTagsNumLineChartResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsNumLineChartResponseBodyResultObject() = default ;
    DescribeTagsNumLineChartResponseBodyResultObject& operator=(const DescribeTagsNumLineChartResponseBodyResultObject &) = default ;
    DescribeTagsNumLineChartResponseBodyResultObject& operator=(DescribeTagsNumLineChartResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->series_ == nullptr
        && return this->xaxis_ == nullptr; };
    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeTagsNumLineChartResponseBodyResultObjectSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeTagsNumLineChartResponseBodyResultObjectSeries>) };
    inline vector<Models::DescribeTagsNumLineChartResponseBodyResultObjectSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeTagsNumLineChartResponseBodyResultObjectSeries>) };
    inline DescribeTagsNumLineChartResponseBodyResultObject& setSeries(const vector<Models::DescribeTagsNumLineChartResponseBodyResultObjectSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeTagsNumLineChartResponseBodyResultObject& setSeries(vector<Models::DescribeTagsNumLineChartResponseBodyResultObjectSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // xaxis Field Functions 
    bool hasXaxis() const { return this->xaxis_ != nullptr;};
    void deleteXaxis() { this->xaxis_ = nullptr;};
    inline const Models::DescribeTagsNumLineChartResponseBodyResultObjectXaxis & xaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, Models::DescribeTagsNumLineChartResponseBodyResultObjectXaxis) };
    inline Models::DescribeTagsNumLineChartResponseBodyResultObjectXaxis xaxis() { DARABONBA_PTR_GET(xaxis_, Models::DescribeTagsNumLineChartResponseBodyResultObjectXaxis) };
    inline DescribeTagsNumLineChartResponseBodyResultObject& setXaxis(const Models::DescribeTagsNumLineChartResponseBodyResultObjectXaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
    inline DescribeTagsNumLineChartResponseBodyResultObject& setXaxis(Models::DescribeTagsNumLineChartResponseBodyResultObjectXaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


  protected:
    // Data list
    std::shared_ptr<vector<Models::DescribeTagsNumLineChartResponseBodyResultObjectSeries>> series_ = nullptr;
    // xaxis node.
    std::shared_ptr<Models::DescribeTagsNumLineChartResponseBodyResultObjectXaxis> xaxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
