// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTHISTOGRAMRESPONSEBODYEVENTHISTOGRAMSEVENTHISTOGRAM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTHISTOGRAMRESPONSEBODYEVENTHISTOGRAMSEVENTHISTOGRAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram() = default ;
    DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram(const DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram &) = default ;
    DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram(DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram &&) = default ;
    DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram() = default ;
    DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram& operator=(const DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram &) = default ;
    DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram& operator=(DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->endTime_ != nullptr && this->startTime_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The information about the number of times that the custom event occurred during an interval of the specified time period.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The end time.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The start time.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
