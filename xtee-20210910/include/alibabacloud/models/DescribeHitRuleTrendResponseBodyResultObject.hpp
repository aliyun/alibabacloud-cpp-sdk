// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHITRULETRENDRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHITRULETRENDRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHitRuleTrendResponseBodyResultObjectSeries.hpp>
#include <alibabacloud/models/DescribeHitRuleTrendResponseBodyResultObjectXaxis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHitRuleTrendResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHitRuleTrendResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(series, series_);
      DARABONBA_PTR_TO_JSON(xaxis, xaxis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHitRuleTrendResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(series, series_);
      DARABONBA_PTR_FROM_JSON(xaxis, xaxis_);
    };
    DescribeHitRuleTrendResponseBodyResultObject() = default ;
    DescribeHitRuleTrendResponseBodyResultObject(const DescribeHitRuleTrendResponseBodyResultObject &) = default ;
    DescribeHitRuleTrendResponseBodyResultObject(DescribeHitRuleTrendResponseBodyResultObject &&) = default ;
    DescribeHitRuleTrendResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHitRuleTrendResponseBodyResultObject() = default ;
    DescribeHitRuleTrendResponseBodyResultObject& operator=(const DescribeHitRuleTrendResponseBodyResultObject &) = default ;
    DescribeHitRuleTrendResponseBodyResultObject& operator=(DescribeHitRuleTrendResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->series_ != nullptr
        && this->xaxis_ != nullptr; };
    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeries>) };
    inline vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeries>) };
    inline DescribeHitRuleTrendResponseBodyResultObject& setSeries(const vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeHitRuleTrendResponseBodyResultObject& setSeries(vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // xaxis Field Functions 
    bool hasXaxis() const { return this->xaxis_ != nullptr;};
    void deleteXaxis() { this->xaxis_ = nullptr;};
    inline const Models::DescribeHitRuleTrendResponseBodyResultObjectXaxis & xaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, Models::DescribeHitRuleTrendResponseBodyResultObjectXaxis) };
    inline Models::DescribeHitRuleTrendResponseBodyResultObjectXaxis xaxis() { DARABONBA_PTR_GET(xaxis_, Models::DescribeHitRuleTrendResponseBodyResultObjectXaxis) };
    inline DescribeHitRuleTrendResponseBodyResultObject& setXaxis(const Models::DescribeHitRuleTrendResponseBodyResultObjectXaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
    inline DescribeHitRuleTrendResponseBodyResultObject& setXaxis(Models::DescribeHitRuleTrendResponseBodyResultObjectXaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


  protected:
    // Chart data
    std::shared_ptr<vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeries>> series_ = nullptr;
    // X-axis data
    std::shared_ptr<Models::DescribeHitRuleTrendResponseBodyResultObjectXaxis> xaxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
