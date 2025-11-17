// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTRESPONSEBODYMETRICTOTALMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTRESPONSEBODYMETRICTOTALMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricListResponseBodyMetricTotalModelMetricModelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMetricListResponseBodyMetricTotalModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricListResponseBodyMetricTotalModel& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MetricModelList, metricModelList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricListResponseBodyMetricTotalModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MetricModelList, metricModelList_);
    };
    DescribeMetricListResponseBodyMetricTotalModel() = default ;
    DescribeMetricListResponseBodyMetricTotalModel(const DescribeMetricListResponseBodyMetricTotalModel &) = default ;
    DescribeMetricListResponseBodyMetricTotalModel(DescribeMetricListResponseBodyMetricTotalModel &&) = default ;
    DescribeMetricListResponseBodyMetricTotalModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricListResponseBodyMetricTotalModel() = default ;
    DescribeMetricListResponseBodyMetricTotalModel& operator=(const DescribeMetricListResponseBodyMetricTotalModel &) = default ;
    DescribeMetricListResponseBodyMetricTotalModel& operator=(DescribeMetricListResponseBodyMetricTotalModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && return this->instanceId_ == nullptr && return this->metricModelList_ == nullptr; };
    // androidInstanceId Field Functions 
    bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
    void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
    inline string androidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
    inline DescribeMetricListResponseBodyMetricTotalModel& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMetricListResponseBodyMetricTotalModel& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metricModelList Field Functions 
    bool hasMetricModelList() const { return this->metricModelList_ != nullptr;};
    void deleteMetricModelList() { this->metricModelList_ = nullptr;};
    inline const vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelList> & metricModelList() const { DARABONBA_PTR_GET_CONST(metricModelList_, vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelList>) };
    inline vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelList> metricModelList() { DARABONBA_PTR_GET(metricModelList_, vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelList>) };
    inline DescribeMetricListResponseBodyMetricTotalModel& setMetricModelList(const vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelList> & metricModelList) { DARABONBA_PTR_SET_VALUE(metricModelList_, metricModelList) };
    inline DescribeMetricListResponseBodyMetricTotalModel& setMetricModelList(vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelList> && metricModelList) { DARABONBA_PTR_SET_RVALUE(metricModelList_, metricModelList) };


  protected:
    std::shared_ptr<string> androidInstanceId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeMetricListResponseBodyMetricTotalModelMetricModelList>> metricModelList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
