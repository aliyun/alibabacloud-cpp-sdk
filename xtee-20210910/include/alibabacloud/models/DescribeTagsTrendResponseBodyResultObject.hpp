// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSTRENDRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSTRENDRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagsTrendResponseBodyResultObjectSeries.hpp>
#include <alibabacloud/models/DescribeTagsTrendResponseBodyResultObjectXaxis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeTagsTrendResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsTrendResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(series, series_);
      DARABONBA_PTR_TO_JSON(xaxis, xaxis_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsTrendResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(series, series_);
      DARABONBA_PTR_FROM_JSON(xaxis, xaxis_);
    };
    DescribeTagsTrendResponseBodyResultObject() = default ;
    DescribeTagsTrendResponseBodyResultObject(const DescribeTagsTrendResponseBodyResultObject &) = default ;
    DescribeTagsTrendResponseBodyResultObject(DescribeTagsTrendResponseBodyResultObject &&) = default ;
    DescribeTagsTrendResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsTrendResponseBodyResultObject() = default ;
    DescribeTagsTrendResponseBodyResultObject& operator=(const DescribeTagsTrendResponseBodyResultObject &) = default ;
    DescribeTagsTrendResponseBodyResultObject& operator=(DescribeTagsTrendResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->series_ == nullptr
        && return this->xaxis_ == nullptr; };
    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeTagsTrendResponseBodyResultObjectSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeTagsTrendResponseBodyResultObjectSeries>) };
    inline vector<Models::DescribeTagsTrendResponseBodyResultObjectSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeTagsTrendResponseBodyResultObjectSeries>) };
    inline DescribeTagsTrendResponseBodyResultObject& setSeries(const vector<Models::DescribeTagsTrendResponseBodyResultObjectSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeTagsTrendResponseBodyResultObject& setSeries(vector<Models::DescribeTagsTrendResponseBodyResultObjectSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // xaxis Field Functions 
    bool hasXaxis() const { return this->xaxis_ != nullptr;};
    void deleteXaxis() { this->xaxis_ = nullptr;};
    inline const Models::DescribeTagsTrendResponseBodyResultObjectXaxis & xaxis() const { DARABONBA_PTR_GET_CONST(xaxis_, Models::DescribeTagsTrendResponseBodyResultObjectXaxis) };
    inline Models::DescribeTagsTrendResponseBodyResultObjectXaxis xaxis() { DARABONBA_PTR_GET(xaxis_, Models::DescribeTagsTrendResponseBodyResultObjectXaxis) };
    inline DescribeTagsTrendResponseBodyResultObject& setXaxis(const Models::DescribeTagsTrendResponseBodyResultObjectXaxis & xaxis) { DARABONBA_PTR_SET_VALUE(xaxis_, xaxis) };
    inline DescribeTagsTrendResponseBodyResultObject& setXaxis(Models::DescribeTagsTrendResponseBodyResultObjectXaxis && xaxis) { DARABONBA_PTR_SET_RVALUE(xaxis_, xaxis) };


  protected:
    // Data list
    std::shared_ptr<vector<Models::DescribeTagsTrendResponseBodyResultObjectSeries>> series_ = nullptr;
    // xaxis returned data
    std::shared_ptr<Models::DescribeTagsTrendResponseBodyResultObjectXaxis> xaxis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
