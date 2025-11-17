// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTRESPONSEBODYMETRICTOTALMODELMETRICMODELLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTRESPONSEBODYMETRICTOTALMODELMETRICMODELLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMetricListResponseBodyMetricTotalModelMetricModelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricListResponseBodyMetricTotalModelMetricModelList& obj) { 
      DARABONBA_PTR_TO_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricListResponseBodyMetricTotalModelMetricModelList& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
    };
    DescribeMetricListResponseBodyMetricTotalModelMetricModelList() = default ;
    DescribeMetricListResponseBodyMetricTotalModelMetricModelList(const DescribeMetricListResponseBodyMetricTotalModelMetricModelList &) = default ;
    DescribeMetricListResponseBodyMetricTotalModelMetricModelList(DescribeMetricListResponseBodyMetricTotalModelMetricModelList &&) = default ;
    DescribeMetricListResponseBodyMetricTotalModelMetricModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricListResponseBodyMetricTotalModelMetricModelList() = default ;
    DescribeMetricListResponseBodyMetricTotalModelMetricModelList& operator=(const DescribeMetricListResponseBodyMetricTotalModelMetricModelList &) = default ;
    DescribeMetricListResponseBodyMetricTotalModelMetricModelList& operator=(DescribeMetricListResponseBodyMetricTotalModelMetricModelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataPoints_ == nullptr
        && return this->metricName_ == nullptr && return this->processName_ == nullptr; };
    // dataPoints Field Functions 
    bool hasDataPoints() const { return this->dataPoints_ != nullptr;};
    void deleteDataPoints() { this->dataPoints_ = nullptr;};
    inline const vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints> & dataPoints() const { DARABONBA_PTR_GET_CONST(dataPoints_, vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints>) };
    inline vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints> dataPoints() { DARABONBA_PTR_GET(dataPoints_, vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints>) };
    inline DescribeMetricListResponseBodyMetricTotalModelMetricModelList& setDataPoints(const vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints> & dataPoints) { DARABONBA_PTR_SET_VALUE(dataPoints_, dataPoints) };
    inline DescribeMetricListResponseBodyMetricTotalModelMetricModelList& setDataPoints(vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints> && dataPoints) { DARABONBA_PTR_SET_RVALUE(dataPoints_, dataPoints) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricListResponseBodyMetricTotalModelMetricModelList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline DescribeMetricListResponseBodyMetricTotalModelMetricModelList& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


  protected:
    std::shared_ptr<vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints>> dataPoints_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
