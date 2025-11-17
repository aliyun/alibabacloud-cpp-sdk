// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICTOPRESPONSEBODYMETRICTOTALMODELMETRICMODELLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICTOPRESPONSEBODYMETRICTOTALMODELMETRICMODELLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMetricTopResponseBodyMetricTotalModelMetricModelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricTopResponseBodyMetricTotalModelMetricModelList& obj) { 
      DARABONBA_PTR_TO_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricTopResponseBodyMetricTotalModelMetricModelList& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
    };
    DescribeMetricTopResponseBodyMetricTotalModelMetricModelList() = default ;
    DescribeMetricTopResponseBodyMetricTotalModelMetricModelList(const DescribeMetricTopResponseBodyMetricTotalModelMetricModelList &) = default ;
    DescribeMetricTopResponseBodyMetricTotalModelMetricModelList(DescribeMetricTopResponseBodyMetricTotalModelMetricModelList &&) = default ;
    DescribeMetricTopResponseBodyMetricTotalModelMetricModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricTopResponseBodyMetricTotalModelMetricModelList() = default ;
    DescribeMetricTopResponseBodyMetricTotalModelMetricModelList& operator=(const DescribeMetricTopResponseBodyMetricTotalModelMetricModelList &) = default ;
    DescribeMetricTopResponseBodyMetricTotalModelMetricModelList& operator=(DescribeMetricTopResponseBodyMetricTotalModelMetricModelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataPoints_ == nullptr
        && return this->metricName_ == nullptr; };
    // dataPoints Field Functions 
    bool hasDataPoints() const { return this->dataPoints_ != nullptr;};
    void deleteDataPoints() { this->dataPoints_ = nullptr;};
    inline const vector<Models::DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints> & dataPoints() const { DARABONBA_PTR_GET_CONST(dataPoints_, vector<Models::DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints>) };
    inline vector<Models::DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints> dataPoints() { DARABONBA_PTR_GET(dataPoints_, vector<Models::DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints>) };
    inline DescribeMetricTopResponseBodyMetricTotalModelMetricModelList& setDataPoints(const vector<Models::DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints> & dataPoints) { DARABONBA_PTR_SET_VALUE(dataPoints_, dataPoints) };
    inline DescribeMetricTopResponseBodyMetricTotalModelMetricModelList& setDataPoints(vector<Models::DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints> && dataPoints) { DARABONBA_PTR_SET_RVALUE(dataPoints_, dataPoints) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricTopResponseBodyMetricTotalModelMetricModelList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


  protected:
    std::shared_ptr<vector<Models::DescribeMetricTopResponseBodyMetricTotalModelMetricModelListDataPoints>> dataPoints_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
