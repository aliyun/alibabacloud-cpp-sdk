// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTRENDRESPONSEBODYTREND_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTRENDRESPONSEBODYTREND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserAbnormalTrendResponseBodyTrend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAbnormalTrendResponseBodyTrend& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalHigh, abnormalHigh_);
      DARABONBA_PTR_TO_JSON(AbnormalLow, abnormalLow_);
      DARABONBA_PTR_TO_JSON(AbnormalMedium, abnormalMedium_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAbnormalTrendResponseBodyTrend& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalHigh, abnormalHigh_);
      DARABONBA_PTR_FROM_JSON(AbnormalLow, abnormalLow_);
      DARABONBA_PTR_FROM_JSON(AbnormalMedium, abnormalMedium_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeUserAbnormalTrendResponseBodyTrend() = default ;
    DescribeUserAbnormalTrendResponseBodyTrend(const DescribeUserAbnormalTrendResponseBodyTrend &) = default ;
    DescribeUserAbnormalTrendResponseBodyTrend(DescribeUserAbnormalTrendResponseBodyTrend &&) = default ;
    DescribeUserAbnormalTrendResponseBodyTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAbnormalTrendResponseBodyTrend() = default ;
    DescribeUserAbnormalTrendResponseBodyTrend& operator=(const DescribeUserAbnormalTrendResponseBodyTrend &) = default ;
    DescribeUserAbnormalTrendResponseBodyTrend& operator=(DescribeUserAbnormalTrendResponseBodyTrend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalHigh_ == nullptr
        && return this->abnormalLow_ == nullptr && return this->abnormalMedium_ == nullptr && return this->timeStamp_ == nullptr && return this->timestamp_ == nullptr; };
    // abnormalHigh Field Functions 
    bool hasAbnormalHigh() const { return this->abnormalHigh_ != nullptr;};
    void deleteAbnormalHigh() { this->abnormalHigh_ = nullptr;};
    inline int64_t abnormalHigh() const { DARABONBA_PTR_GET_DEFAULT(abnormalHigh_, 0L) };
    inline DescribeUserAbnormalTrendResponseBodyTrend& setAbnormalHigh(int64_t abnormalHigh) { DARABONBA_PTR_SET_VALUE(abnormalHigh_, abnormalHigh) };


    // abnormalLow Field Functions 
    bool hasAbnormalLow() const { return this->abnormalLow_ != nullptr;};
    void deleteAbnormalLow() { this->abnormalLow_ = nullptr;};
    inline int64_t abnormalLow() const { DARABONBA_PTR_GET_DEFAULT(abnormalLow_, 0L) };
    inline DescribeUserAbnormalTrendResponseBodyTrend& setAbnormalLow(int64_t abnormalLow) { DARABONBA_PTR_SET_VALUE(abnormalLow_, abnormalLow) };


    // abnormalMedium Field Functions 
    bool hasAbnormalMedium() const { return this->abnormalMedium_ != nullptr;};
    void deleteAbnormalMedium() { this->abnormalMedium_ = nullptr;};
    inline int64_t abnormalMedium() const { DARABONBA_PTR_GET_DEFAULT(abnormalMedium_, 0L) };
    inline DescribeUserAbnormalTrendResponseBodyTrend& setAbnormalMedium(int64_t abnormalMedium) { DARABONBA_PTR_SET_VALUE(abnormalMedium_, abnormalMedium) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline int64_t timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
    inline DescribeUserAbnormalTrendResponseBodyTrend& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeUserAbnormalTrendResponseBodyTrend& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The number of high risks.
    std::shared_ptr<int64_t> abnormalHigh_ = nullptr;
    // The number of low risks.
    std::shared_ptr<int64_t> abnormalLow_ = nullptr;
    // The number of medium risks.
    std::shared_ptr<int64_t> abnormalMedium_ = nullptr;
    // The time at which the API was called. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    // 
    // >Notice: The parameter has been deprecated, it is recommended to use the Timestamp parameter.
    std::shared_ptr<int64_t> timeStamp_ = nullptr;
    // The time at which the API was called. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
