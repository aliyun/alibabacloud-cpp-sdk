// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKLINECHARTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKLINECHARTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskLineChartResponseBodyResultObjectSeries.hpp>
#include <alibabacloud/models/DescribeRiskLineChartResponseBodyResultObjectXaxis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRiskLineChartResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskLineChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(series, series_);
      DARABONBA_PTR_TO_JSON(xaxis, xaxis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskLineChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(series, series_);
      DARABONBA_PTR_FROM_JSON(xaxis, xaxis_);
    };
    DescribeRiskLineChartResponseBodyResultObject() = default ;
    DescribeRiskLineChartResponseBodyResultObject(const DescribeRiskLineChartResponseBodyResultObject &) = default ;
    DescribeRiskLineChartResponseBodyResultObject(DescribeRiskLineChartResponseBodyResultObject &&) = default ;
    DescribeRiskLineChartResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskLineChartResponseBodyResultObject() = default ;
    DescribeRiskLineChartResponseBodyResultObject& operator=(const DescribeRiskLineChartResponseBodyResultObject &) = default ;
    DescribeRiskLineChartResponseBodyResultObject& operator=(DescribeRiskLineChartResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->series_ == nullptr
        && return this->xaxis_ == nullptr; };
    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeRiskLineChartResponseBodyResultObjectSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeRiskLineChartResponseBodyResultObjectSeries>) };
    inline vector<Models::DescribeRiskLineChartResponseBodyResultObjectSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeRiskLineChartResponseBodyResultObjectSeries>) };
    inline DescribeRiskLineChartResponseBodyResultObject& setSeries(const vector<Models::DescribeRiskLineChartResponseBodyResultObjectSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeRiskLineChartResponseBodyResultObject& setSeries(vector<Models::DescribeRiskLineChartResponseBodyResultObjectSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // xaxis Field Functions 
    bool hasXaxis() const { return this->xaxis_ != nullptr;};
    void deleteXaxis() { this->xaxis_ = nullptr;};
    inline const Models::DescribeRiskLineChartResponseBodyResultObjectXaxis & xaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, Models::DescribeRiskLineChartResponseBodyResultObjectXaxis) };
    inline Models::DescribeRiskLineChartResponseBodyResultObjectXaxis xaxis() { DARABONBA_PTR_GET(xaxis_, Models::DescribeRiskLineChartResponseBodyResultObjectXaxis) };
    inline DescribeRiskLineChartResponseBodyResultObject& setXaxis(const Models::DescribeRiskLineChartResponseBodyResultObjectXaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
    inline DescribeRiskLineChartResponseBodyResultObject& setXaxis(Models::DescribeRiskLineChartResponseBodyResultObjectXaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


  protected:
    // Data list
    std::shared_ptr<vector<Models::DescribeRiskLineChartResponseBodyResultObjectSeries>> series_ = nullptr;
    // Details of xaxis node.
    std::shared_ptr<Models::DescribeRiskLineChartResponseBodyResultObjectXaxis> xaxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
