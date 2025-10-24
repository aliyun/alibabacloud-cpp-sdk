// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTRESPONSEBODYMETRICTOTALMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTRESPONSEBODYMETRICTOTALMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricLastResponseBodyMetricTotalModelMetricModelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMetricLastResponseBodyMetricTotalModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricLastResponseBodyMetricTotalModel& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_TO_JSON(MetricModelList, metricModelList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricLastResponseBodyMetricTotalModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_FROM_JSON(MetricModelList, metricModelList_);
    };
    DescribeMetricLastResponseBodyMetricTotalModel() = default ;
    DescribeMetricLastResponseBodyMetricTotalModel(const DescribeMetricLastResponseBodyMetricTotalModel &) = default ;
    DescribeMetricLastResponseBodyMetricTotalModel(DescribeMetricLastResponseBodyMetricTotalModel &&) = default ;
    DescribeMetricLastResponseBodyMetricTotalModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricLastResponseBodyMetricTotalModel() = default ;
    DescribeMetricLastResponseBodyMetricTotalModel& operator=(const DescribeMetricLastResponseBodyMetricTotalModel &) = default ;
    DescribeMetricLastResponseBodyMetricTotalModel& operator=(DescribeMetricLastResponseBodyMetricTotalModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && return this->metricModelList_ == nullptr; };
    // androidInstanceId Field Functions 
    bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
    void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
    inline string androidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
    inline DescribeMetricLastResponseBodyMetricTotalModel& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


    // metricModelList Field Functions 
    bool hasMetricModelList() const { return this->metricModelList_ != nullptr;};
    void deleteMetricModelList() { this->metricModelList_ = nullptr;};
    inline const vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelList> & metricModelList() const { DARABONBA_PTR_GET_CONST(metricModelList_, vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelList>) };
    inline vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelList> metricModelList() { DARABONBA_PTR_GET(metricModelList_, vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelList>) };
    inline DescribeMetricLastResponseBodyMetricTotalModel& setMetricModelList(const vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelList> & metricModelList) { DARABONBA_PTR_SET_VALUE(metricModelList_, metricModelList) };
    inline DescribeMetricLastResponseBodyMetricTotalModel& setMetricModelList(vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelList> && metricModelList) { DARABONBA_PTR_SET_RVALUE(metricModelList_, metricModelList) };


  protected:
    std::shared_ptr<string> androidInstanceId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeMetricLastResponseBodyMetricTotalModelMetricModelList>> metricModelList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
