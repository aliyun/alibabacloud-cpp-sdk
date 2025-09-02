// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUCCESSINSTANCETRENDRESPONSEBODYINSTANCESTATUSTRENDYESTERDAYTREND_HPP_
#define ALIBABACLOUD_MODELS_GETSUCCESSINSTANCETRENDRESPONSEBODYINSTANCESTATUSTRENDYESTERDAYTREND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
    };
    GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend() = default ;
    GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend(const GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend &) = default ;
    GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend(GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend &&) = default ;
    GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend() = default ;
    GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend& operator=(const GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend &) = default ;
    GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend& operator=(GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend &&) = default ;
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
    inline GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // timePoint Field Functions 
    bool hasTimePoint() const { return this->timePoint_ != nullptr;};
    void deleteTimePoint() { this->timePoint_ = nullptr;};
    inline string timePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, "") };
    inline GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend& setTimePoint(string timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


  protected:
    // The number of instances.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The point in time. Valid values: 00:00 to 23:00.
    std::shared_ptr<string> timePoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
