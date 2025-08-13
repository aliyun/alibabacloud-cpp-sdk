// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEBARCHARTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEBARCHARTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRuleBarChartResponseBodyResultObjectSeries.hpp>
#include <alibabacloud/models/DescribeRuleBarChartResponseBodyResultObjectYaxis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRuleBarChartResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleBarChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(series, series_);
      DARABONBA_PTR_TO_JSON(yaxis, yaxis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleBarChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(series, series_);
      DARABONBA_PTR_FROM_JSON(yaxis, yaxis_);
    };
    DescribeRuleBarChartResponseBodyResultObject() = default ;
    DescribeRuleBarChartResponseBodyResultObject(const DescribeRuleBarChartResponseBodyResultObject &) = default ;
    DescribeRuleBarChartResponseBodyResultObject(DescribeRuleBarChartResponseBodyResultObject &&) = default ;
    DescribeRuleBarChartResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleBarChartResponseBodyResultObject() = default ;
    DescribeRuleBarChartResponseBodyResultObject& operator=(const DescribeRuleBarChartResponseBodyResultObject &) = default ;
    DescribeRuleBarChartResponseBodyResultObject& operator=(DescribeRuleBarChartResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->series_ != nullptr
        && this->yaxis_ != nullptr; };
    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeries>) };
    inline vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeries>) };
    inline DescribeRuleBarChartResponseBodyResultObject& setSeries(const vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeRuleBarChartResponseBodyResultObject& setSeries(vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // yaxis Field Functions 
    bool hasYaxis() const { return this->yaxis_ != nullptr;};
    void deleteYaxis() { this->yaxis_ = nullptr;};
    inline const Models::DescribeRuleBarChartResponseBodyResultObjectYaxis & yaxis() const { DARABONBA_PTR_GET_CONST(yaxis_, Models::DescribeRuleBarChartResponseBodyResultObjectYaxis) };
    inline Models::DescribeRuleBarChartResponseBodyResultObjectYaxis yaxis() { DARABONBA_PTR_GET(yaxis_, Models::DescribeRuleBarChartResponseBodyResultObjectYaxis) };
    inline DescribeRuleBarChartResponseBodyResultObject& setYaxis(const Models::DescribeRuleBarChartResponseBodyResultObjectYaxis & yaxis) { DARABONBA_PTR_SET_VALUE(yaxis_, yaxis) };
    inline DescribeRuleBarChartResponseBodyResultObject& setYaxis(Models::DescribeRuleBarChartResponseBodyResultObjectYaxis && yaxis) { DARABONBA_PTR_SET_RVALUE(yaxis_, yaxis) };


  protected:
    // Data list
    std::shared_ptr<vector<Models::DescribeRuleBarChartResponseBodyResultObjectSeries>> series_ = nullptr;
    // yaxis related results.
    std::shared_ptr<Models::DescribeRuleBarChartResponseBodyResultObjectYaxis> yaxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
