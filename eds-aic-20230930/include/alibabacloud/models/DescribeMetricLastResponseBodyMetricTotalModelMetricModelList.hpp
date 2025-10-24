// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTRESPONSEBODYMETRICTOTALMODELMETRICMODELLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTRESPONSEBODYMETRICTOTALMODELMETRICMODELLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints.hpp>
#include <alibabacloud/models/DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMetricLastResponseBodyMetricTotalModelMetricModelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricLastResponseBodyMetricTotalModelMetricModelList& obj) { 
      DARABONBA_PTR_TO_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(ProcessLastInfos, processLastInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricLastResponseBodyMetricTotalModelMetricModelList& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(ProcessLastInfos, processLastInfos_);
    };
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelList() = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelList(const DescribeMetricLastResponseBodyMetricTotalModelMetricModelList &) = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelList(DescribeMetricLastResponseBodyMetricTotalModelMetricModelList &&) = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricLastResponseBodyMetricTotalModelMetricModelList() = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelList& operator=(const DescribeMetricLastResponseBodyMetricTotalModelMetricModelList &) = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelList& operator=(DescribeMetricLastResponseBodyMetricTotalModelMetricModelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataPoints_ == nullptr
        && return this->metricName_ == nullptr && return this->processLastInfos_ == nullptr; };
    // dataPoints Field Functions 
    bool hasDataPoints() const { return this->dataPoints_ != nullptr;};
    void deleteDataPoints() { this->dataPoints_ = nullptr;};
    inline const vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints> & dataPoints() const { DARABONBA_PTR_GET_CONST(dataPoints_, vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints>) };
    inline vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints> dataPoints() { DARABONBA_PTR_GET(dataPoints_, vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints>) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelList& setDataPoints(const vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints> & dataPoints) { DARABONBA_PTR_SET_VALUE(dataPoints_, dataPoints) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelList& setDataPoints(vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints> && dataPoints) { DARABONBA_PTR_SET_RVALUE(dataPoints_, dataPoints) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // processLastInfos Field Functions 
    bool hasProcessLastInfos() const { return this->processLastInfos_ != nullptr;};
    void deleteProcessLastInfos() { this->processLastInfos_ = nullptr;};
    inline const vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos> & processLastInfos() const { DARABONBA_PTR_GET_CONST(processLastInfos_, vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos>) };
    inline vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos> processLastInfos() { DARABONBA_PTR_GET(processLastInfos_, vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos>) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelList& setProcessLastInfos(const vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos> & processLastInfos) { DARABONBA_PTR_SET_VALUE(processLastInfos_, processLastInfos) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelList& setProcessLastInfos(vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos> && processLastInfos) { DARABONBA_PTR_SET_RVALUE(processLastInfos_, processLastInfos) };


  protected:
    std::shared_ptr<vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints>> dataPoints_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos>> processLastInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
