// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUCCESSINSTANCEAMOUNTRESPONSEBODYINSTANCESTATUSTRENDYESTERDAYTREND_HPP_
#define ALIBABACLOUD_MODELS_LISTSUCCESSINSTANCEAMOUNTRESPONSEBODYINSTANCESTATUSTRENDYESTERDAYTREND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
    };
    friend void from_json(const Darabonba::Json& j, ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
    };
    ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend() = default ;
    ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend(const ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend &) = default ;
    ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend(ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend &&) = default ;
    ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend() = default ;
    ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend& operator=(const ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend &) = default ;
    ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend& operator=(ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->timePoint_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // timePoint Field Functions 
    bool hasTimePoint() const { return this->timePoint_ != nullptr;};
    void deleteTimePoint() { this->timePoint_ = nullptr;};
    inline string timePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, "") };
    inline ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend& setTimePoint(string timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


  protected:
    // The number of instances that are successfully run.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The point in time. The value is an exact hour that ranges from 00:00 to 23:00, such as 00:00, 01:00, or 02:00.
    std::shared_ptr<string> timePoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
