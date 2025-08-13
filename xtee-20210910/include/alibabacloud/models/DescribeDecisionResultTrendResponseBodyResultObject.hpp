// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDECISIONRESULTTRENDRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDECISIONRESULTTRENDRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDecisionResultTrendResponseBodyResultObjectSeries.hpp>
#include <alibabacloud/models/DescribeDecisionResultTrendResponseBodyResultObjectXaxis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeDecisionResultTrendResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDecisionResultTrendResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(series, series_);
      DARABONBA_PTR_TO_JSON(xaxis, xaxis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDecisionResultTrendResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(series, series_);
      DARABONBA_PTR_FROM_JSON(xaxis, xaxis_);
    };
    DescribeDecisionResultTrendResponseBodyResultObject() = default ;
    DescribeDecisionResultTrendResponseBodyResultObject(const DescribeDecisionResultTrendResponseBodyResultObject &) = default ;
    DescribeDecisionResultTrendResponseBodyResultObject(DescribeDecisionResultTrendResponseBodyResultObject &&) = default ;
    DescribeDecisionResultTrendResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDecisionResultTrendResponseBodyResultObject() = default ;
    DescribeDecisionResultTrendResponseBodyResultObject& operator=(const DescribeDecisionResultTrendResponseBodyResultObject &) = default ;
    DescribeDecisionResultTrendResponseBodyResultObject& operator=(DescribeDecisionResultTrendResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->series_ != nullptr
        && this->xaxis_ != nullptr; };
    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeries>) };
    inline vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeries>) };
    inline DescribeDecisionResultTrendResponseBodyResultObject& setSeries(const vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeDecisionResultTrendResponseBodyResultObject& setSeries(vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // xaxis Field Functions 
    bool hasXaxis() const { return this->xaxis_ != nullptr;};
    void deleteXaxis() { this->xaxis_ = nullptr;};
    inline const Models::DescribeDecisionResultTrendResponseBodyResultObjectXaxis & xaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, Models::DescribeDecisionResultTrendResponseBodyResultObjectXaxis) };
    inline Models::DescribeDecisionResultTrendResponseBodyResultObjectXaxis xaxis() { DARABONBA_PTR_GET(xaxis_, Models::DescribeDecisionResultTrendResponseBodyResultObjectXaxis) };
    inline DescribeDecisionResultTrendResponseBodyResultObject& setXaxis(const Models::DescribeDecisionResultTrendResponseBodyResultObjectXaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
    inline DescribeDecisionResultTrendResponseBodyResultObject& setXaxis(Models::DescribeDecisionResultTrendResponseBodyResultObjectXaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


  protected:
    // Chart data
    std::shared_ptr<vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeries>> series_ = nullptr;
    // X-axis data
    std::shared_ptr<Models::DescribeDecisionResultTrendResponseBodyResultObjectXaxis> xaxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
