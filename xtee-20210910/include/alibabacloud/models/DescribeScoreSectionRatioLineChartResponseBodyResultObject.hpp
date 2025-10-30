// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONRATIOLINECHARTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONRATIOLINECHARTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScoreSectionRatioLineChartResponseBodyResultObjectSeries.hpp>
#include <alibabacloud/models/DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeScoreSectionRatioLineChartResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScoreSectionRatioLineChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(series, series_);
      DARABONBA_PTR_TO_JSON(xaxis, xaxis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScoreSectionRatioLineChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(series, series_);
      DARABONBA_PTR_FROM_JSON(xaxis, xaxis_);
    };
    DescribeScoreSectionRatioLineChartResponseBodyResultObject() = default ;
    DescribeScoreSectionRatioLineChartResponseBodyResultObject(const DescribeScoreSectionRatioLineChartResponseBodyResultObject &) = default ;
    DescribeScoreSectionRatioLineChartResponseBodyResultObject(DescribeScoreSectionRatioLineChartResponseBodyResultObject &&) = default ;
    DescribeScoreSectionRatioLineChartResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScoreSectionRatioLineChartResponseBodyResultObject() = default ;
    DescribeScoreSectionRatioLineChartResponseBodyResultObject& operator=(const DescribeScoreSectionRatioLineChartResponseBodyResultObject &) = default ;
    DescribeScoreSectionRatioLineChartResponseBodyResultObject& operator=(DescribeScoreSectionRatioLineChartResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->series_ == nullptr
        && return this->xaxis_ == nullptr; };
    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectSeries>) };
    inline vector<Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectSeries>) };
    inline DescribeScoreSectionRatioLineChartResponseBodyResultObject& setSeries(const vector<Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeScoreSectionRatioLineChartResponseBodyResultObject& setSeries(vector<Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // xaxis Field Functions 
    bool hasXaxis() const { return this->xaxis_ != nullptr;};
    void deleteXaxis() { this->xaxis_ = nullptr;};
    inline const Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis & xaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis) };
    inline Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis xaxis() { DARABONBA_PTR_GET(xaxis_, Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis) };
    inline DescribeScoreSectionRatioLineChartResponseBodyResultObject& setXaxis(const Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
    inline DescribeScoreSectionRatioLineChartResponseBodyResultObject& setXaxis(Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


  protected:
    // Data list
    std::shared_ptr<vector<Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectSeries>> series_ = nullptr;
    // Details of the xaxis node.
    std::shared_ptr<Models::DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis> xaxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
