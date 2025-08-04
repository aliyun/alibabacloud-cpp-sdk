// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESESSIONSTATISTICRESPONSEBODYSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESESSIONSTATISTICRESPONSEBODYSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeSessionStatisticResponseBodyStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSessionStatisticResponseBodyStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSessionStatisticResponseBodyStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
    };
    DescribeSessionStatisticResponseBodyStatistic() = default ;
    DescribeSessionStatisticResponseBodyStatistic(const DescribeSessionStatisticResponseBodyStatistic &) = default ;
    DescribeSessionStatisticResponseBodyStatistic(DescribeSessionStatisticResponseBodyStatistic &&) = default ;
    DescribeSessionStatisticResponseBodyStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSessionStatisticResponseBodyStatistic() = default ;
    DescribeSessionStatisticResponseBodyStatistic& operator=(const DescribeSessionStatisticResponseBodyStatistic &) = default ;
    DescribeSessionStatisticResponseBodyStatistic& operator=(DescribeSessionStatisticResponseBodyStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->timePoint_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeSessionStatisticResponseBodyStatistic& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // timePoint Field Functions 
    bool hasTimePoint() const { return this->timePoint_ != nullptr;};
    void deleteTimePoint() { this->timePoint_ = nullptr;};
    inline int64_t timePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, 0L) };
    inline DescribeSessionStatisticResponseBodyStatistic& setTimePoint(int64_t timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


  protected:
    // The total number of sessions in the time range.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The point in time.
    std::shared_ptr<int64_t> timePoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
