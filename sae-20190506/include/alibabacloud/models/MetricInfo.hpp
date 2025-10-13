// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICINFO_HPP_
#define ALIBABACLOUD_MODELS_METRICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class MetricInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Average, average_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Maximum, maximum_);
      DARABONBA_PTR_TO_JSON(Minimum, minimum_);
      DARABONBA_PTR_TO_JSON(Sum, sum_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, MetricInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Average, average_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Maximum, maximum_);
      DARABONBA_PTR_FROM_JSON(Minimum, minimum_);
      DARABONBA_PTR_FROM_JSON(Sum, sum_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    MetricInfo() = default ;
    MetricInfo(const MetricInfo &) = default ;
    MetricInfo(MetricInfo &&) = default ;
    MetricInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricInfo() = default ;
    MetricInfo& operator=(const MetricInfo &) = default ;
    MetricInfo& operator=(MetricInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->average_ == nullptr
        && return this->count_ == nullptr && return this->maximum_ == nullptr && return this->minimum_ == nullptr && return this->sum_ == nullptr && return this->timestamp_ == nullptr
        && return this->value_ == nullptr; };
    // average Field Functions 
    bool hasAverage() const { return this->average_ != nullptr;};
    void deleteAverage() { this->average_ = nullptr;};
    inline float average() const { DARABONBA_PTR_GET_DEFAULT(average_, 0.0) };
    inline MetricInfo& setAverage(float average) { DARABONBA_PTR_SET_VALUE(average_, average) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline float count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0.0) };
    inline MetricInfo& setCount(float count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maximum Field Functions 
    bool hasMaximum() const { return this->maximum_ != nullptr;};
    void deleteMaximum() { this->maximum_ = nullptr;};
    inline float maximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, 0.0) };
    inline MetricInfo& setMaximum(float maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


    // minimum Field Functions 
    bool hasMinimum() const { return this->minimum_ != nullptr;};
    void deleteMinimum() { this->minimum_ = nullptr;};
    inline float minimum() const { DARABONBA_PTR_GET_DEFAULT(minimum_, 0.0) };
    inline MetricInfo& setMinimum(float minimum) { DARABONBA_PTR_SET_VALUE(minimum_, minimum) };


    // sum Field Functions 
    bool hasSum() const { return this->sum_ != nullptr;};
    void deleteSum() { this->sum_ = nullptr;};
    inline float sum() const { DARABONBA_PTR_GET_DEFAULT(sum_, 0.0) };
    inline MetricInfo& setSum(float sum) { DARABONBA_PTR_SET_VALUE(sum_, sum) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline MetricInfo& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline MetricInfo& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<float> average_ = nullptr;
    std::shared_ptr<float> count_ = nullptr;
    std::shared_ptr<float> maximum_ = nullptr;
    std::shared_ptr<float> minimum_ = nullptr;
    std::shared_ptr<float> sum_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
