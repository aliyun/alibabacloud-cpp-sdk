// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTHISTOGRAMRESPONSEBODYSYSTEMEVENTHISTOGRAMSSYSTEMEVENTHISTOGRAM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTHISTOGRAMRESPONSEBODYSYSTEMEVENTHISTOGRAMSSYSTEMEVENTHISTOGRAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram() = default ;
    DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram(const DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram &) = default ;
    DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram(DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram &&) = default ;
    DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram() = default ;
    DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram& operator=(const DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram &) = default ;
    DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram& operator=(DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->endTime_ == nullptr && return this->startTime_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSystemEventHistogramResponseBodySystemEventHistogramsSystemEventHistogram& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The number of times the system event occurred.
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
