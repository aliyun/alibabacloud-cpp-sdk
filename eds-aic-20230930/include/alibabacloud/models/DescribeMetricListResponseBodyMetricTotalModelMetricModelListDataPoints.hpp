// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTRESPONSEBODYMETRICTOTALMODELMETRICMODELLISTDATAPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTRESPONSEBODYMETRICTOTALMODELMETRICMODELLISTDATAPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints& obj) { 
      DARABONBA_PTR_TO_JSON(Average, average_);
      DARABONBA_PTR_TO_JSON(GpuId, gpuId_);
      DARABONBA_PTR_TO_JSON(Maximum, maximum_);
      DARABONBA_PTR_TO_JSON(Minimum, minimum_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Average, average_);
      DARABONBA_PTR_FROM_JSON(GpuId, gpuId_);
      DARABONBA_PTR_FROM_JSON(Maximum, maximum_);
      DARABONBA_PTR_FROM_JSON(Minimum, minimum_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints() = default ;
    DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints(const DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints &) = default ;
    DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints(DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints &&) = default ;
    DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints() = default ;
    DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints& operator=(const DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints &) = default ;
    DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints& operator=(DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->average_ == nullptr
        && return this->gpuId_ == nullptr && return this->maximum_ == nullptr && return this->minimum_ == nullptr && return this->timestamp_ == nullptr && return this->value_ == nullptr; };
    // average Field Functions 
    bool hasAverage() const { return this->average_ != nullptr;};
    void deleteAverage() { this->average_ = nullptr;};
    inline double average() const { DARABONBA_PTR_GET_DEFAULT(average_, 0.0) };
    inline DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints& setAverage(double average) { DARABONBA_PTR_SET_VALUE(average_, average) };


    // gpuId Field Functions 
    bool hasGpuId() const { return this->gpuId_ != nullptr;};
    void deleteGpuId() { this->gpuId_ = nullptr;};
    inline string gpuId() const { DARABONBA_PTR_GET_DEFAULT(gpuId_, "") };
    inline DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints& setGpuId(string gpuId) { DARABONBA_PTR_SET_VALUE(gpuId_, gpuId) };


    // maximum Field Functions 
    bool hasMaximum() const { return this->maximum_ != nullptr;};
    void deleteMaximum() { this->maximum_ = nullptr;};
    inline double maximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, 0.0) };
    inline DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints& setMaximum(double maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


    // minimum Field Functions 
    bool hasMinimum() const { return this->minimum_ != nullptr;};
    void deleteMinimum() { this->minimum_ = nullptr;};
    inline double minimum() const { DARABONBA_PTR_GET_DEFAULT(minimum_, 0.0) };
    inline DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints& setMinimum(double minimum) { DARABONBA_PTR_SET_VALUE(minimum_, minimum) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeMetricListResponseBodyMetricTotalModelMetricModelListDataPoints& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<double> average_ = nullptr;
    std::shared_ptr<string> gpuId_ = nullptr;
    std::shared_ptr<double> maximum_ = nullptr;
    std::shared_ptr<double> minimum_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
