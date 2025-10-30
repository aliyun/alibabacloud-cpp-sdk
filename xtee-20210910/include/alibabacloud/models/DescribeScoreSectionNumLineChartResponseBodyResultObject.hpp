// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONNUMLINECHARTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONNUMLINECHARTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries.hpp>
#include <alibabacloud/models/DescribeScoreSectionNumLineChartResponseBodyResultObjectXaxis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeScoreSectionNumLineChartResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScoreSectionNumLineChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(series, series_);
      DARABONBA_PTR_TO_JSON(xaxis, xaxis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScoreSectionNumLineChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(series, series_);
      DARABONBA_PTR_FROM_JSON(xaxis, xaxis_);
    };
    DescribeScoreSectionNumLineChartResponseBodyResultObject() = default ;
    DescribeScoreSectionNumLineChartResponseBodyResultObject(const DescribeScoreSectionNumLineChartResponseBodyResultObject &) = default ;
    DescribeScoreSectionNumLineChartResponseBodyResultObject(DescribeScoreSectionNumLineChartResponseBodyResultObject &&) = default ;
    DescribeScoreSectionNumLineChartResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScoreSectionNumLineChartResponseBodyResultObject() = default ;
    DescribeScoreSectionNumLineChartResponseBodyResultObject& operator=(const DescribeScoreSectionNumLineChartResponseBodyResultObject &) = default ;
    DescribeScoreSectionNumLineChartResponseBodyResultObject& operator=(DescribeScoreSectionNumLineChartResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->series_ == nullptr
        && return this->xaxis_ == nullptr; };
    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries>) };
    inline vector<Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries>) };
    inline DescribeScoreSectionNumLineChartResponseBodyResultObject& setSeries(const vector<Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeScoreSectionNumLineChartResponseBodyResultObject& setSeries(vector<Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // xaxis Field Functions 
    bool hasXaxis() const { return this->xaxis_ != nullptr;};
    void deleteXaxis() { this->xaxis_ = nullptr;};
    inline const Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectXaxis & xaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectXaxis) };
    inline Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectXaxis xaxis() { DARABONBA_PTR_GET(xaxis_, Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectXaxis) };
    inline DescribeScoreSectionNumLineChartResponseBodyResultObject& setXaxis(const Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectXaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
    inline DescribeScoreSectionNumLineChartResponseBodyResultObject& setXaxis(Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectXaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


  protected:
    // Data list
    std::shared_ptr<vector<Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries>> series_ = nullptr;
    // Details of xaxis node.
    std::shared_ptr<Models::DescribeScoreSectionNumLineChartResponseBodyResultObjectXaxis> xaxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
