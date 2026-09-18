// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ITEMSMETRICVALUESVALUE_HPP_
#define ALIBABACLOUD_MODELS_ITEMSMETRICVALUESVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ItemsMetricValuesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ItemsMetricValuesValue& obj) { 
      DARABONBA_PTR_TO_JSON(MetricCode, metricCode_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Primary, primary_);
      DARABONBA_PTR_TO_JSON(Time2, time2_);
      DARABONBA_PTR_TO_JSON(Avg, avg_);
      DARABONBA_PTR_TO_JSON(Sum, sum_);
      DARABONBA_PTR_TO_JSON(Max, max_);
    };
    friend void from_json(const Darabonba::Json& j, ItemsMetricValuesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricCode, metricCode_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Primary, primary_);
      DARABONBA_PTR_FROM_JSON(Time2, time2_);
      DARABONBA_PTR_FROM_JSON(Avg, avg_);
      DARABONBA_PTR_FROM_JSON(Sum, sum_);
      DARABONBA_PTR_FROM_JSON(Max, max_);
    };
    ItemsMetricValuesValue() = default ;
    ItemsMetricValuesValue(const ItemsMetricValuesValue &) = default ;
    ItemsMetricValuesValue(ItemsMetricValuesValue &&) = default ;
    ItemsMetricValuesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ItemsMetricValuesValue() = default ;
    ItemsMetricValuesValue& operator=(const ItemsMetricValuesValue &) = default ;
    ItemsMetricValuesValue& operator=(ItemsMetricValuesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Max : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Max& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeRatePercent, changeRatePercent_);
        DARABONBA_PTR_TO_JSON(Time1Value, time1Value_);
        DARABONBA_PTR_TO_JSON(Time1DisplayValue, time1DisplayValue_);
        DARABONBA_PTR_TO_JSON(Time2Value, time2Value_);
        DARABONBA_PTR_TO_JSON(Time2DisplayValue, time2DisplayValue_);
      };
      friend void from_json(const Darabonba::Json& j, Max& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeRatePercent, changeRatePercent_);
        DARABONBA_PTR_FROM_JSON(Time1Value, time1Value_);
        DARABONBA_PTR_FROM_JSON(Time1DisplayValue, time1DisplayValue_);
        DARABONBA_PTR_FROM_JSON(Time2Value, time2Value_);
        DARABONBA_PTR_FROM_JSON(Time2DisplayValue, time2DisplayValue_);
      };
      Max() = default ;
      Max(const Max &) = default ;
      Max(Max &&) = default ;
      Max(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Max() = default ;
      Max& operator=(const Max &) = default ;
      Max& operator=(Max &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->changeRatePercent_ == nullptr
        && this->time1Value_ == nullptr && this->time1DisplayValue_ == nullptr && this->time2Value_ == nullptr && this->time2DisplayValue_ == nullptr; };
      // changeRatePercent Field Functions 
      bool hasChangeRatePercent() const { return this->changeRatePercent_ != nullptr;};
      void deleteChangeRatePercent() { this->changeRatePercent_ = nullptr;};
      inline double getChangeRatePercent() const { DARABONBA_PTR_GET_DEFAULT(changeRatePercent_, 0.0) };
      inline Max& setChangeRatePercent(double changeRatePercent) { DARABONBA_PTR_SET_VALUE(changeRatePercent_, changeRatePercent) };


      // time1Value Field Functions 
      bool hasTime1Value() const { return this->time1Value_ != nullptr;};
      void deleteTime1Value() { this->time1Value_ = nullptr;};
      inline double getTime1Value() const { DARABONBA_PTR_GET_DEFAULT(time1Value_, 0.0) };
      inline Max& setTime1Value(double time1Value) { DARABONBA_PTR_SET_VALUE(time1Value_, time1Value) };


      // time1DisplayValue Field Functions 
      bool hasTime1DisplayValue() const { return this->time1DisplayValue_ != nullptr;};
      void deleteTime1DisplayValue() { this->time1DisplayValue_ = nullptr;};
      inline string getTime1DisplayValue() const { DARABONBA_PTR_GET_DEFAULT(time1DisplayValue_, "") };
      inline Max& setTime1DisplayValue(string time1DisplayValue) { DARABONBA_PTR_SET_VALUE(time1DisplayValue_, time1DisplayValue) };


      // time2Value Field Functions 
      bool hasTime2Value() const { return this->time2Value_ != nullptr;};
      void deleteTime2Value() { this->time2Value_ = nullptr;};
      inline double getTime2Value() const { DARABONBA_PTR_GET_DEFAULT(time2Value_, 0.0) };
      inline Max& setTime2Value(double time2Value) { DARABONBA_PTR_SET_VALUE(time2Value_, time2Value) };


      // time2DisplayValue Field Functions 
      bool hasTime2DisplayValue() const { return this->time2DisplayValue_ != nullptr;};
      void deleteTime2DisplayValue() { this->time2DisplayValue_ = nullptr;};
      inline string getTime2DisplayValue() const { DARABONBA_PTR_GET_DEFAULT(time2DisplayValue_, "") };
      inline Max& setTime2DisplayValue(string time2DisplayValue) { DARABONBA_PTR_SET_VALUE(time2DisplayValue_, time2DisplayValue) };


    protected:
      // The change rate of the peak value in a single minute bucket, calculated as (Time 2 value − Time 1 value) / Time 1 value × 100. A value of 200 indicates a 200% increase. When the Time 1 value is 0, a finite change rate cannot be calculated. This field may not be returned and must not be treated as 0%.
      shared_ptr<double> changeRatePercent_ {};
      // The peak value in a single minute bucket for Time 1. The unit depends on MetricCode: count for QUERY_COUNT, seconds for CPU_COST, and GB (1 GB = 1024³ bytes) for SHUFFLE_SIZE, PEAK_MEMORY, and SCAN_SIZE.
      shared_ptr<double> time1Value_ {};
      // The display string of the peak value in a single minute bucket for Time 1, with the unit included.
      shared_ptr<string> time1DisplayValue_ {};
      // The peak value in a single minute bucket for Time 2. The unit depends on MetricCode: count for QUERY_COUNT, seconds for CPU_COST, and GB (1 GB = 1024³ bytes) for SHUFFLE_SIZE, PEAK_MEMORY, and SCAN_SIZE.
      shared_ptr<double> time2Value_ {};
      // The display string of the peak value in a single minute bucket for Time 2, with the unit included.
      shared_ptr<string> time2DisplayValue_ {};
    };

    class Sum : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sum& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeRatePercent, changeRatePercent_);
        DARABONBA_PTR_TO_JSON(Time1Value, time1Value_);
        DARABONBA_PTR_TO_JSON(Time1DisplayValue, time1DisplayValue_);
        DARABONBA_PTR_TO_JSON(Time1RatioPercent, time1RatioPercent_);
        DARABONBA_PTR_TO_JSON(Time2Value, time2Value_);
        DARABONBA_PTR_TO_JSON(Time2DisplayValue, time2DisplayValue_);
        DARABONBA_PTR_TO_JSON(Time2RatioPercent, time2RatioPercent_);
      };
      friend void from_json(const Darabonba::Json& j, Sum& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeRatePercent, changeRatePercent_);
        DARABONBA_PTR_FROM_JSON(Time1Value, time1Value_);
        DARABONBA_PTR_FROM_JSON(Time1DisplayValue, time1DisplayValue_);
        DARABONBA_PTR_FROM_JSON(Time1RatioPercent, time1RatioPercent_);
        DARABONBA_PTR_FROM_JSON(Time2Value, time2Value_);
        DARABONBA_PTR_FROM_JSON(Time2DisplayValue, time2DisplayValue_);
        DARABONBA_PTR_FROM_JSON(Time2RatioPercent, time2RatioPercent_);
      };
      Sum() = default ;
      Sum(const Sum &) = default ;
      Sum(Sum &&) = default ;
      Sum(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sum() = default ;
      Sum& operator=(const Sum &) = default ;
      Sum& operator=(Sum &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->changeRatePercent_ == nullptr
        && this->time1Value_ == nullptr && this->time1DisplayValue_ == nullptr && this->time1RatioPercent_ == nullptr && this->time2Value_ == nullptr && this->time2DisplayValue_ == nullptr
        && this->time2RatioPercent_ == nullptr; };
      // changeRatePercent Field Functions 
      bool hasChangeRatePercent() const { return this->changeRatePercent_ != nullptr;};
      void deleteChangeRatePercent() { this->changeRatePercent_ = nullptr;};
      inline double getChangeRatePercent() const { DARABONBA_PTR_GET_DEFAULT(changeRatePercent_, 0.0) };
      inline Sum& setChangeRatePercent(double changeRatePercent) { DARABONBA_PTR_SET_VALUE(changeRatePercent_, changeRatePercent) };


      // time1Value Field Functions 
      bool hasTime1Value() const { return this->time1Value_ != nullptr;};
      void deleteTime1Value() { this->time1Value_ = nullptr;};
      inline double getTime1Value() const { DARABONBA_PTR_GET_DEFAULT(time1Value_, 0.0) };
      inline Sum& setTime1Value(double time1Value) { DARABONBA_PTR_SET_VALUE(time1Value_, time1Value) };


      // time1DisplayValue Field Functions 
      bool hasTime1DisplayValue() const { return this->time1DisplayValue_ != nullptr;};
      void deleteTime1DisplayValue() { this->time1DisplayValue_ = nullptr;};
      inline string getTime1DisplayValue() const { DARABONBA_PTR_GET_DEFAULT(time1DisplayValue_, "") };
      inline Sum& setTime1DisplayValue(string time1DisplayValue) { DARABONBA_PTR_SET_VALUE(time1DisplayValue_, time1DisplayValue) };


      // time1RatioPercent Field Functions 
      bool hasTime1RatioPercent() const { return this->time1RatioPercent_ != nullptr;};
      void deleteTime1RatioPercent() { this->time1RatioPercent_ = nullptr;};
      inline double getTime1RatioPercent() const { DARABONBA_PTR_GET_DEFAULT(time1RatioPercent_, 0.0) };
      inline Sum& setTime1RatioPercent(double time1RatioPercent) { DARABONBA_PTR_SET_VALUE(time1RatioPercent_, time1RatioPercent) };


      // time2Value Field Functions 
      bool hasTime2Value() const { return this->time2Value_ != nullptr;};
      void deleteTime2Value() { this->time2Value_ = nullptr;};
      inline double getTime2Value() const { DARABONBA_PTR_GET_DEFAULT(time2Value_, 0.0) };
      inline Sum& setTime2Value(double time2Value) { DARABONBA_PTR_SET_VALUE(time2Value_, time2Value) };


      // time2DisplayValue Field Functions 
      bool hasTime2DisplayValue() const { return this->time2DisplayValue_ != nullptr;};
      void deleteTime2DisplayValue() { this->time2DisplayValue_ = nullptr;};
      inline string getTime2DisplayValue() const { DARABONBA_PTR_GET_DEFAULT(time2DisplayValue_, "") };
      inline Sum& setTime2DisplayValue(string time2DisplayValue) { DARABONBA_PTR_SET_VALUE(time2DisplayValue_, time2DisplayValue) };


      // time2RatioPercent Field Functions 
      bool hasTime2RatioPercent() const { return this->time2RatioPercent_ != nullptr;};
      void deleteTime2RatioPercent() { this->time2RatioPercent_ = nullptr;};
      inline double getTime2RatioPercent() const { DARABONBA_PTR_GET_DEFAULT(time2RatioPercent_, 0.0) };
      inline Sum& setTime2RatioPercent(double time2RatioPercent) { DARABONBA_PTR_SET_VALUE(time2RatioPercent_, time2RatioPercent) };


    protected:
      // The change rate of the sum of metric values across active query minute buckets, calculated as (Time 2 value − Time 1 value) / Time 1 value × 100. A value of 200 indicates a 200% increase. When the Time 1 value is 0, a finite change rate cannot be calculated. This field may not be returned and must not be treated as 0%.
      shared_ptr<double> changeRatePercent_ {};
      // The sum of metric values across active query minute buckets for Time 1. The unit depends on MetricCode: count for QUERY_COUNT, seconds for CPU_COST, and GB (1 GB = 1024³ bytes) for SHUFFLE_SIZE, PEAK_MEMORY, and SCAN_SIZE.
      shared_ptr<double> time1Value_ {};
      // The display string of the sum of metric values across active query minute buckets for Time 1, with the unit included.
      shared_ptr<string> time1DisplayValue_ {};
      // The percentage of this Pattern\\"s Time 1 sum of metric values across active query minute buckets relative to the sum of the corresponding statistics for all results before dimension filtering in the current report. A value of 10 indicates 10%.
      shared_ptr<double> time1RatioPercent_ {};
      // The sum of metric values across active query minute buckets for Time 2. The unit depends on MetricCode: count for QUERY_COUNT, seconds for CPU_COST, and GB (1 GB = 1024³ bytes) for SHUFFLE_SIZE, PEAK_MEMORY, and SCAN_SIZE.
      shared_ptr<double> time2Value_ {};
      // The display string of the sum of metric values across active query minute buckets for Time 2, with the unit included.
      shared_ptr<string> time2DisplayValue_ {};
      // The percentage of this Pattern\\"s Time 2 sum of metric values across active query minute buckets relative to the sum of the corresponding statistics for all results before dimension filtering in the current report. A value of 10 indicates 10%.
      shared_ptr<double> time2RatioPercent_ {};
    };

    class Avg : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Avg& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeRatePercent, changeRatePercent_);
        DARABONBA_PTR_TO_JSON(Time1Value, time1Value_);
        DARABONBA_PTR_TO_JSON(Time1DisplayValue, time1DisplayValue_);
        DARABONBA_PTR_TO_JSON(Time1RatioPercent, time1RatioPercent_);
        DARABONBA_PTR_TO_JSON(Time2Value, time2Value_);
        DARABONBA_PTR_TO_JSON(Time2DisplayValue, time2DisplayValue_);
        DARABONBA_PTR_TO_JSON(Time2RatioPercent, time2RatioPercent_);
      };
      friend void from_json(const Darabonba::Json& j, Avg& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeRatePercent, changeRatePercent_);
        DARABONBA_PTR_FROM_JSON(Time1Value, time1Value_);
        DARABONBA_PTR_FROM_JSON(Time1DisplayValue, time1DisplayValue_);
        DARABONBA_PTR_FROM_JSON(Time1RatioPercent, time1RatioPercent_);
        DARABONBA_PTR_FROM_JSON(Time2Value, time2Value_);
        DARABONBA_PTR_FROM_JSON(Time2DisplayValue, time2DisplayValue_);
        DARABONBA_PTR_FROM_JSON(Time2RatioPercent, time2RatioPercent_);
      };
      Avg() = default ;
      Avg(const Avg &) = default ;
      Avg(Avg &&) = default ;
      Avg(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Avg() = default ;
      Avg& operator=(const Avg &) = default ;
      Avg& operator=(Avg &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->changeRatePercent_ == nullptr
        && this->time1Value_ == nullptr && this->time1DisplayValue_ == nullptr && this->time1RatioPercent_ == nullptr && this->time2Value_ == nullptr && this->time2DisplayValue_ == nullptr
        && this->time2RatioPercent_ == nullptr; };
      // changeRatePercent Field Functions 
      bool hasChangeRatePercent() const { return this->changeRatePercent_ != nullptr;};
      void deleteChangeRatePercent() { this->changeRatePercent_ = nullptr;};
      inline double getChangeRatePercent() const { DARABONBA_PTR_GET_DEFAULT(changeRatePercent_, 0.0) };
      inline Avg& setChangeRatePercent(double changeRatePercent) { DARABONBA_PTR_SET_VALUE(changeRatePercent_, changeRatePercent) };


      // time1Value Field Functions 
      bool hasTime1Value() const { return this->time1Value_ != nullptr;};
      void deleteTime1Value() { this->time1Value_ = nullptr;};
      inline double getTime1Value() const { DARABONBA_PTR_GET_DEFAULT(time1Value_, 0.0) };
      inline Avg& setTime1Value(double time1Value) { DARABONBA_PTR_SET_VALUE(time1Value_, time1Value) };


      // time1DisplayValue Field Functions 
      bool hasTime1DisplayValue() const { return this->time1DisplayValue_ != nullptr;};
      void deleteTime1DisplayValue() { this->time1DisplayValue_ = nullptr;};
      inline string getTime1DisplayValue() const { DARABONBA_PTR_GET_DEFAULT(time1DisplayValue_, "") };
      inline Avg& setTime1DisplayValue(string time1DisplayValue) { DARABONBA_PTR_SET_VALUE(time1DisplayValue_, time1DisplayValue) };


      // time1RatioPercent Field Functions 
      bool hasTime1RatioPercent() const { return this->time1RatioPercent_ != nullptr;};
      void deleteTime1RatioPercent() { this->time1RatioPercent_ = nullptr;};
      inline double getTime1RatioPercent() const { DARABONBA_PTR_GET_DEFAULT(time1RatioPercent_, 0.0) };
      inline Avg& setTime1RatioPercent(double time1RatioPercent) { DARABONBA_PTR_SET_VALUE(time1RatioPercent_, time1RatioPercent) };


      // time2Value Field Functions 
      bool hasTime2Value() const { return this->time2Value_ != nullptr;};
      void deleteTime2Value() { this->time2Value_ = nullptr;};
      inline double getTime2Value() const { DARABONBA_PTR_GET_DEFAULT(time2Value_, 0.0) };
      inline Avg& setTime2Value(double time2Value) { DARABONBA_PTR_SET_VALUE(time2Value_, time2Value) };


      // time2DisplayValue Field Functions 
      bool hasTime2DisplayValue() const { return this->time2DisplayValue_ != nullptr;};
      void deleteTime2DisplayValue() { this->time2DisplayValue_ = nullptr;};
      inline string getTime2DisplayValue() const { DARABONBA_PTR_GET_DEFAULT(time2DisplayValue_, "") };
      inline Avg& setTime2DisplayValue(string time2DisplayValue) { DARABONBA_PTR_SET_VALUE(time2DisplayValue_, time2DisplayValue) };


      // time2RatioPercent Field Functions 
      bool hasTime2RatioPercent() const { return this->time2RatioPercent_ != nullptr;};
      void deleteTime2RatioPercent() { this->time2RatioPercent_ = nullptr;};
      inline double getTime2RatioPercent() const { DARABONBA_PTR_GET_DEFAULT(time2RatioPercent_, 0.0) };
      inline Avg& setTime2RatioPercent(double time2RatioPercent) { DARABONBA_PTR_SET_VALUE(time2RatioPercent_, time2RatioPercent) };


    protected:
      // The change rate of the average value across active query minute buckets, calculated as (Time 2 value − Time 1 value) / Time 1 value × 100. A value of 200 indicates a 200% increase. When the Time 1 value is 0, a finite change rate cannot be calculated. This field may not be returned and must not be treated as 0%.
      shared_ptr<double> changeRatePercent_ {};
      // The average value across active query minute buckets for Time 1. The unit depends on MetricCode: count for QUERY_COUNT, seconds for CPU_COST, and GB (1 GB = 1024³ bytes) for SHUFFLE_SIZE, PEAK_MEMORY, and SCAN_SIZE.
      shared_ptr<double> time1Value_ {};
      // The display string of the average value across active query minute buckets for Time 1, with the unit included.
      shared_ptr<string> time1DisplayValue_ {};
      // The percentage of this Pattern\\"s Time 1 average value across active query minute buckets relative to the sum of the corresponding statistics for all results before dimension filtering in the current report. A value of 10 indicates 10%.
      shared_ptr<double> time1RatioPercent_ {};
      // The average value across active query minute buckets for Time 2. The unit depends on MetricCode: count for QUERY_COUNT, seconds for CPU_COST, and GB (1 GB = 1024³ bytes) for SHUFFLE_SIZE, PEAK_MEMORY, and SCAN_SIZE.
      shared_ptr<double> time2Value_ {};
      // The display string of the average value across active query minute buckets for Time 2, with the unit included.
      shared_ptr<string> time2DisplayValue_ {};
      // The percentage of this Pattern\\"s Time 2 average value across active query minute buckets relative to the sum of the corresponding statistics for all results before dimension filtering in the current report. A value of 10 indicates 10%.
      shared_ptr<double> time2RatioPercent_ {};
    };

    class Time2 : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Time2& obj) { 
        DARABONBA_PTR_TO_JSON(SumValue, sumValue_);
        DARABONBA_PTR_TO_JSON(SumDisplayValue, sumDisplayValue_);
        DARABONBA_PTR_TO_JSON(AvgValue, avgValue_);
        DARABONBA_PTR_TO_JSON(AvgDisplayValue, avgDisplayValue_);
        DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
        DARABONBA_PTR_TO_JSON(MaxDisplayValue, maxDisplayValue_);
        DARABONBA_PTR_TO_JSON(SumRatioPercent, sumRatioPercent_);
        DARABONBA_PTR_TO_JSON(AvgRatioPercent, avgRatioPercent_);
      };
      friend void from_json(const Darabonba::Json& j, Time2& obj) { 
        DARABONBA_PTR_FROM_JSON(SumValue, sumValue_);
        DARABONBA_PTR_FROM_JSON(SumDisplayValue, sumDisplayValue_);
        DARABONBA_PTR_FROM_JSON(AvgValue, avgValue_);
        DARABONBA_PTR_FROM_JSON(AvgDisplayValue, avgDisplayValue_);
        DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
        DARABONBA_PTR_FROM_JSON(MaxDisplayValue, maxDisplayValue_);
        DARABONBA_PTR_FROM_JSON(SumRatioPercent, sumRatioPercent_);
        DARABONBA_PTR_FROM_JSON(AvgRatioPercent, avgRatioPercent_);
      };
      Time2() = default ;
      Time2(const Time2 &) = default ;
      Time2(Time2 &&) = default ;
      Time2(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Time2() = default ;
      Time2& operator=(const Time2 &) = default ;
      Time2& operator=(Time2 &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sumValue_ == nullptr
        && this->sumDisplayValue_ == nullptr && this->avgValue_ == nullptr && this->avgDisplayValue_ == nullptr && this->maxValue_ == nullptr && this->maxDisplayValue_ == nullptr
        && this->sumRatioPercent_ == nullptr && this->avgRatioPercent_ == nullptr; };
      // sumValue Field Functions 
      bool hasSumValue() const { return this->sumValue_ != nullptr;};
      void deleteSumValue() { this->sumValue_ = nullptr;};
      inline double getSumValue() const { DARABONBA_PTR_GET_DEFAULT(sumValue_, 0.0) };
      inline Time2& setSumValue(double sumValue) { DARABONBA_PTR_SET_VALUE(sumValue_, sumValue) };


      // sumDisplayValue Field Functions 
      bool hasSumDisplayValue() const { return this->sumDisplayValue_ != nullptr;};
      void deleteSumDisplayValue() { this->sumDisplayValue_ = nullptr;};
      inline string getSumDisplayValue() const { DARABONBA_PTR_GET_DEFAULT(sumDisplayValue_, "") };
      inline Time2& setSumDisplayValue(string sumDisplayValue) { DARABONBA_PTR_SET_VALUE(sumDisplayValue_, sumDisplayValue) };


      // avgValue Field Functions 
      bool hasAvgValue() const { return this->avgValue_ != nullptr;};
      void deleteAvgValue() { this->avgValue_ = nullptr;};
      inline double getAvgValue() const { DARABONBA_PTR_GET_DEFAULT(avgValue_, 0.0) };
      inline Time2& setAvgValue(double avgValue) { DARABONBA_PTR_SET_VALUE(avgValue_, avgValue) };


      // avgDisplayValue Field Functions 
      bool hasAvgDisplayValue() const { return this->avgDisplayValue_ != nullptr;};
      void deleteAvgDisplayValue() { this->avgDisplayValue_ = nullptr;};
      inline string getAvgDisplayValue() const { DARABONBA_PTR_GET_DEFAULT(avgDisplayValue_, "") };
      inline Time2& setAvgDisplayValue(string avgDisplayValue) { DARABONBA_PTR_SET_VALUE(avgDisplayValue_, avgDisplayValue) };


      // maxValue Field Functions 
      bool hasMaxValue() const { return this->maxValue_ != nullptr;};
      void deleteMaxValue() { this->maxValue_ = nullptr;};
      inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
      inline Time2& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


      // maxDisplayValue Field Functions 
      bool hasMaxDisplayValue() const { return this->maxDisplayValue_ != nullptr;};
      void deleteMaxDisplayValue() { this->maxDisplayValue_ = nullptr;};
      inline string getMaxDisplayValue() const { DARABONBA_PTR_GET_DEFAULT(maxDisplayValue_, "") };
      inline Time2& setMaxDisplayValue(string maxDisplayValue) { DARABONBA_PTR_SET_VALUE(maxDisplayValue_, maxDisplayValue) };


      // sumRatioPercent Field Functions 
      bool hasSumRatioPercent() const { return this->sumRatioPercent_ != nullptr;};
      void deleteSumRatioPercent() { this->sumRatioPercent_ = nullptr;};
      inline double getSumRatioPercent() const { DARABONBA_PTR_GET_DEFAULT(sumRatioPercent_, 0.0) };
      inline Time2& setSumRatioPercent(double sumRatioPercent) { DARABONBA_PTR_SET_VALUE(sumRatioPercent_, sumRatioPercent) };


      // avgRatioPercent Field Functions 
      bool hasAvgRatioPercent() const { return this->avgRatioPercent_ != nullptr;};
      void deleteAvgRatioPercent() { this->avgRatioPercent_ = nullptr;};
      inline double getAvgRatioPercent() const { DARABONBA_PTR_GET_DEFAULT(avgRatioPercent_, 0.0) };
      inline Time2& setAvgRatioPercent(double avgRatioPercent) { DARABONBA_PTR_SET_VALUE(avgRatioPercent_, avgRatioPercent) };


    protected:
      // The sum of metric values across active query minute buckets for Time 2. The unit depends on MetricCode: count for QUERY_COUNT, seconds for CPU_COST, and GB (1 GB = 1024³ bytes) for SHUFFLE_SIZE, PEAK_MEMORY, and SCAN_SIZE.
      shared_ptr<double> sumValue_ {};
      // The display string of the total sum for Time 2, with the unit included.
      shared_ptr<string> sumDisplayValue_ {};
      // The average value across active query minute buckets for Time 2, calculated as the total sum divided by the number of minute buckets that contain queries for this Pattern. The unit depends on MetricCode: count for QUERY_COUNT, seconds for CPU_COST, and GB (1 GB = 1024³ bytes) for SHUFFLE_SIZE, PEAK_MEMORY, and SCAN_SIZE.
      shared_ptr<double> avgValue_ {};
      // The display string of the average value across active query minute buckets for Time 2, with the unit included.
      shared_ptr<string> avgDisplayValue_ {};
      // The maximum metric value in a single minute bucket for Time 2. The unit depends on MetricCode: count for QUERY_COUNT, seconds for CPU_COST, and GB (1 GB = 1024³ bytes) for SHUFFLE_SIZE, PEAK_MEMORY, and SCAN_SIZE.
      shared_ptr<double> maxValue_ {};
      // The display string of the peak value in a single minute bucket for Time 2, with the unit included.
      shared_ptr<string> maxDisplayValue_ {};
      // The percentage of this Pattern\\"s Time 2 total sum relative to the total sum of all results before dimension filtering in the current report. A value of 10 indicates 10%.
      shared_ptr<double> sumRatioPercent_ {};
      // The percentage of this Pattern\\"s Time 2 average value relative to the sum of average values across all Patterns before dimension filtering in the current report. A value of 10 indicates 10%.
      shared_ptr<double> avgRatioPercent_ {};
    };

    virtual bool empty() const override { return this->metricCode_ == nullptr
        && this->metricName_ == nullptr && this->primary_ == nullptr && this->time2_ == nullptr && this->avg_ == nullptr && this->sum_ == nullptr
        && this->max_ == nullptr; };
    // metricCode Field Functions 
    bool hasMetricCode() const { return this->metricCode_ != nullptr;};
    void deleteMetricCode() { this->metricCode_ = nullptr;};
    inline string getMetricCode() const { DARABONBA_PTR_GET_DEFAULT(metricCode_, "") };
    inline ItemsMetricValuesValue& setMetricCode(string metricCode) { DARABONBA_PTR_SET_VALUE(metricCode_, metricCode) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ItemsMetricValuesValue& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // primary Field Functions 
    bool hasPrimary() const { return this->primary_ != nullptr;};
    void deletePrimary() { this->primary_ = nullptr;};
    inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
    inline ItemsMetricValuesValue& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


    // time2 Field Functions 
    bool hasTime2() const { return this->time2_ != nullptr;};
    void deleteTime2() { this->time2_ = nullptr;};
    inline const ItemsMetricValuesValue::Time2 & getTime2() const { DARABONBA_PTR_GET_CONST(time2_, ItemsMetricValuesValue::Time2) };
    inline ItemsMetricValuesValue::Time2 getTime2() { DARABONBA_PTR_GET(time2_, ItemsMetricValuesValue::Time2) };
    inline ItemsMetricValuesValue& setTime2(const ItemsMetricValuesValue::Time2 & time2) { DARABONBA_PTR_SET_VALUE(time2_, time2) };
    inline ItemsMetricValuesValue& setTime2(ItemsMetricValuesValue::Time2 && time2) { DARABONBA_PTR_SET_RVALUE(time2_, time2) };


    // avg Field Functions 
    bool hasAvg() const { return this->avg_ != nullptr;};
    void deleteAvg() { this->avg_ = nullptr;};
    inline const ItemsMetricValuesValue::Avg & getAvg() const { DARABONBA_PTR_GET_CONST(avg_, ItemsMetricValuesValue::Avg) };
    inline ItemsMetricValuesValue::Avg getAvg() { DARABONBA_PTR_GET(avg_, ItemsMetricValuesValue::Avg) };
    inline ItemsMetricValuesValue& setAvg(const ItemsMetricValuesValue::Avg & avg) { DARABONBA_PTR_SET_VALUE(avg_, avg) };
    inline ItemsMetricValuesValue& setAvg(ItemsMetricValuesValue::Avg && avg) { DARABONBA_PTR_SET_RVALUE(avg_, avg) };


    // sum Field Functions 
    bool hasSum() const { return this->sum_ != nullptr;};
    void deleteSum() { this->sum_ = nullptr;};
    inline const ItemsMetricValuesValue::Sum & getSum() const { DARABONBA_PTR_GET_CONST(sum_, ItemsMetricValuesValue::Sum) };
    inline ItemsMetricValuesValue::Sum getSum() { DARABONBA_PTR_GET(sum_, ItemsMetricValuesValue::Sum) };
    inline ItemsMetricValuesValue& setSum(const ItemsMetricValuesValue::Sum & sum) { DARABONBA_PTR_SET_VALUE(sum_, sum) };
    inline ItemsMetricValuesValue& setSum(ItemsMetricValuesValue::Sum && sum) { DARABONBA_PTR_SET_RVALUE(sum_, sum) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline const ItemsMetricValuesValue::Max & getMax() const { DARABONBA_PTR_GET_CONST(max_, ItemsMetricValuesValue::Max) };
    inline ItemsMetricValuesValue::Max getMax() { DARABONBA_PTR_GET(max_, ItemsMetricValuesValue::Max) };
    inline ItemsMetricValuesValue& setMax(const ItemsMetricValuesValue::Max & max) { DARABONBA_PTR_SET_VALUE(max_, max) };
    inline ItemsMetricValuesValue& setMax(ItemsMetricValuesValue::Max && max) { DARABONBA_PTR_SET_RVALUE(max_, max) };


  protected:
    // The primary metric code, which matches the key in `MetricValues` and the `MetricType` request parameter. Valid values:
    // 
    // - `QUERY_COUNT`: the number of query executions.
    // - `CPU_COST`: the CPU consumption.
    // - `SHUFFLE_SIZE`: the shuffle data volume.
    // - `PEAK_MEMORY`: the peak memory consumption.
    // - `SCAN_SIZE`: the scan data volume.
    shared_ptr<string> metricCode_ {};
    // The primary metric name. The mapping is as follows:
    // 
    // - `QUERY_COUNT`: `QueryCount`.
    // - `CPU_COST`: `OperatorCost`.
    // - `SHUFFLE_SIZE`: `ShuffleSize`.
    // - `PEAK_MEMORY`: `PeakMemory`.
    // - `SCAN_SIZE`: `ScanSize`.
    shared_ptr<string> metricName_ {};
    // Indicates whether this is the primary metric for the current analysis dimension. The current value is true.
    shared_ptr<bool> primary_ {};
    // The aggregated result for Time 2 in the NEW report. This field is returned only for NEW reports.
    shared_ptr<ItemsMetricValuesValue::Time2> time2_ {};
    // The dual-window comparison of the average value across active query minute buckets for the CHANGED report. This field is returned only for CHANGED reports.
    shared_ptr<ItemsMetricValuesValue::Avg> avg_ {};
    // The dual-window comparison of the sum of metric values across active query minute buckets for the CHANGED report. This field is returned only for CHANGED reports.
    shared_ptr<ItemsMetricValuesValue::Sum> sum_ {};
    // The dual-window comparison of the peak value in a single minute bucket for the CHANGED report. This field is returned only for CHANGED reports.
    shared_ptr<ItemsMetricValuesValue::Max> max_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
