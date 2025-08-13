// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRATIOLINECHARTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRATIOLINECHARTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagsRatioLineChartResponseBodyResultObjectSeries.hpp>
#include <alibabacloud/models/DescribeTagsRatioLineChartResponseBodyResultObjectXaxis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeTagsRatioLineChartResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsRatioLineChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(series, series_);
      DARABONBA_PTR_TO_JSON(xaxis, xaxis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsRatioLineChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(series, series_);
      DARABONBA_PTR_FROM_JSON(xaxis, xaxis_);
    };
    DescribeTagsRatioLineChartResponseBodyResultObject() = default ;
    DescribeTagsRatioLineChartResponseBodyResultObject(const DescribeTagsRatioLineChartResponseBodyResultObject &) = default ;
    DescribeTagsRatioLineChartResponseBodyResultObject(DescribeTagsRatioLineChartResponseBodyResultObject &&) = default ;
    DescribeTagsRatioLineChartResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsRatioLineChartResponseBodyResultObject() = default ;
    DescribeTagsRatioLineChartResponseBodyResultObject& operator=(const DescribeTagsRatioLineChartResponseBodyResultObject &) = default ;
    DescribeTagsRatioLineChartResponseBodyResultObject& operator=(DescribeTagsRatioLineChartResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->series_ != nullptr
        && this->xaxis_ != nullptr; };
    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeTagsRatioLineChartResponseBodyResultObjectSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeTagsRatioLineChartResponseBodyResultObjectSeries>) };
    inline vector<Models::DescribeTagsRatioLineChartResponseBodyResultObjectSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeTagsRatioLineChartResponseBodyResultObjectSeries>) };
    inline DescribeTagsRatioLineChartResponseBodyResultObject& setSeries(const vector<Models::DescribeTagsRatioLineChartResponseBodyResultObjectSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeTagsRatioLineChartResponseBodyResultObject& setSeries(vector<Models::DescribeTagsRatioLineChartResponseBodyResultObjectSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // xaxis Field Functions 
    bool hasXaxis() const { return this->xaxis_ != nullptr;};
    void deleteXaxis() { this->xaxis_ = nullptr;};
    inline const Models::DescribeTagsRatioLineChartResponseBodyResultObjectXaxis & xaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, Models::DescribeTagsRatioLineChartResponseBodyResultObjectXaxis) };
    inline Models::DescribeTagsRatioLineChartResponseBodyResultObjectXaxis xaxis() { DARABONBA_PTR_GET(xaxis_, Models::DescribeTagsRatioLineChartResponseBodyResultObjectXaxis) };
    inline DescribeTagsRatioLineChartResponseBodyResultObject& setXaxis(const Models::DescribeTagsRatioLineChartResponseBodyResultObjectXaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
    inline DescribeTagsRatioLineChartResponseBodyResultObject& setXaxis(Models::DescribeTagsRatioLineChartResponseBodyResultObjectXaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


  protected:
    // Data list
    std::shared_ptr<vector<Models::DescribeTagsRatioLineChartResponseBodyResultObjectSeries>> series_ = nullptr;
    // xaxis node.
    std::shared_ptr<Models::DescribeTagsRatioLineChartResponseBodyResultObjectXaxis> xaxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
