// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTRESPONSEBODYMETRICTOTALMODELMETRICMODELLISTDATAPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTRESPONSEBODYMETRICTOTALMODELMETRICMODELLISTDATAPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints& obj) { 
      DARABONBA_PTR_TO_JSON(Average, average_);
      DARABONBA_PTR_TO_JSON(Maximum, maximum_);
      DARABONBA_PTR_TO_JSON(Minimum, minimum_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Average, average_);
      DARABONBA_PTR_FROM_JSON(Maximum, maximum_);
      DARABONBA_PTR_FROM_JSON(Minimum, minimum_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints() = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints(const DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints &) = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints(DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints &&) = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints() = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints& operator=(const DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints &) = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints& operator=(DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->average_ == nullptr
        && return this->maximum_ == nullptr && return this->minimum_ == nullptr && return this->timestamp_ == nullptr; };
    // average Field Functions 
    bool hasAverage() const { return this->average_ != nullptr;};
    void deleteAverage() { this->average_ = nullptr;};
    inline double average() const { DARABONBA_PTR_GET_DEFAULT(average_, 0.0) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints& setAverage(double average) { DARABONBA_PTR_SET_VALUE(average_, average) };


    // maximum Field Functions 
    bool hasMaximum() const { return this->maximum_ != nullptr;};
    void deleteMaximum() { this->maximum_ = nullptr;};
    inline double maximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, 0.0) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints& setMaximum(double maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


    // minimum Field Functions 
    bool hasMinimum() const { return this->minimum_ != nullptr;};
    void deleteMinimum() { this->minimum_ = nullptr;};
    inline double minimum() const { DARABONBA_PTR_GET_DEFAULT(minimum_, 0.0) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints& setMinimum(double minimum) { DARABONBA_PTR_SET_VALUE(minimum_, minimum) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<double> average_ = nullptr;
    std::shared_ptr<double> maximum_ = nullptr;
    std::shared_ptr<double> minimum_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
