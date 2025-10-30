// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSBARCHARTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSBARCHARTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagsBarChartResponseBodyResultObjectSeries.hpp>
#include <alibabacloud/models/DescribeTagsBarChartResponseBodyResultObjectXaxis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeTagsBarChartResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsBarChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(series, series_);
      DARABONBA_PTR_TO_JSON(xaxis, xaxis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsBarChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(series, series_);
      DARABONBA_PTR_FROM_JSON(xaxis, xaxis_);
    };
    DescribeTagsBarChartResponseBodyResultObject() = default ;
    DescribeTagsBarChartResponseBodyResultObject(const DescribeTagsBarChartResponseBodyResultObject &) = default ;
    DescribeTagsBarChartResponseBodyResultObject(DescribeTagsBarChartResponseBodyResultObject &&) = default ;
    DescribeTagsBarChartResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsBarChartResponseBodyResultObject() = default ;
    DescribeTagsBarChartResponseBodyResultObject& operator=(const DescribeTagsBarChartResponseBodyResultObject &) = default ;
    DescribeTagsBarChartResponseBodyResultObject& operator=(DescribeTagsBarChartResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->series_ == nullptr
        && return this->xaxis_ == nullptr; };
    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeries>) };
    inline vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeries>) };
    inline DescribeTagsBarChartResponseBodyResultObject& setSeries(const vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeTagsBarChartResponseBodyResultObject& setSeries(vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // xaxis Field Functions 
    bool hasXaxis() const { return this->xaxis_ != nullptr;};
    void deleteXaxis() { this->xaxis_ = nullptr;};
    inline const Models::DescribeTagsBarChartResponseBodyResultObjectXaxis & xaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, Models::DescribeTagsBarChartResponseBodyResultObjectXaxis) };
    inline Models::DescribeTagsBarChartResponseBodyResultObjectXaxis xaxis() { DARABONBA_PTR_GET(xaxis_, Models::DescribeTagsBarChartResponseBodyResultObjectXaxis) };
    inline DescribeTagsBarChartResponseBodyResultObject& setXaxis(const Models::DescribeTagsBarChartResponseBodyResultObjectXaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
    inline DescribeTagsBarChartResponseBodyResultObject& setXaxis(Models::DescribeTagsBarChartResponseBodyResultObjectXaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


  protected:
    // Data list
    std::shared_ptr<vector<Models::DescribeTagsBarChartResponseBodyResultObjectSeries>> series_ = nullptr;
    // xaxis interface configuration.
    std::shared_ptr<Models::DescribeTagsBarChartResponseBodyResultObjectXaxis> xaxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
