// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSUSAGEBYDAYRESPONSEBODYUSAGEBYDAYSUSAGEBYDAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSUSAGEBYDAYRESPONSEBODYUSAGEBYDAYSUSAGEBYDAY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& obj) { 
      DARABONBA_PTR_TO_JSON(BytesHitRate, bytesHitRate_);
      DARABONBA_PTR_TO_JSON(MaxBps, maxBps_);
      DARABONBA_PTR_TO_JSON(MaxBpsTime, maxBpsTime_);
      DARABONBA_PTR_TO_JSON(MaxSrcBps, maxSrcBps_);
      DARABONBA_PTR_TO_JSON(MaxSrcBpsTime, maxSrcBpsTime_);
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(RequestHitRate, requestHitRate_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TotalAccess, totalAccess_);
      DARABONBA_PTR_TO_JSON(TotalTraffic, totalTraffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& obj) { 
      DARABONBA_PTR_FROM_JSON(BytesHitRate, bytesHitRate_);
      DARABONBA_PTR_FROM_JSON(MaxBps, maxBps_);
      DARABONBA_PTR_FROM_JSON(MaxBpsTime, maxBpsTime_);
      DARABONBA_PTR_FROM_JSON(MaxSrcBps, maxSrcBps_);
      DARABONBA_PTR_FROM_JSON(MaxSrcBpsTime, maxSrcBpsTime_);
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(RequestHitRate, requestHitRate_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TotalAccess, totalAccess_);
      DARABONBA_PTR_FROM_JSON(TotalTraffic, totalTraffic_);
    };
    DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay() = default ;
    DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay(const DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay &) = default ;
    DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay(DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay &&) = default ;
    DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay() = default ;
    DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& operator=(const DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay &) = default ;
    DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& operator=(DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bytesHitRate_ == nullptr
        && return this->maxBps_ == nullptr && return this->maxBpsTime_ == nullptr && return this->maxSrcBps_ == nullptr && return this->maxSrcBpsTime_ == nullptr && return this->qps_ == nullptr
        && return this->requestHitRate_ == nullptr && return this->timeStamp_ == nullptr && return this->totalAccess_ == nullptr && return this->totalTraffic_ == nullptr; };
    // bytesHitRate Field Functions 
    bool hasBytesHitRate() const { return this->bytesHitRate_ != nullptr;};
    void deleteBytesHitRate() { this->bytesHitRate_ = nullptr;};
    inline string bytesHitRate() const { DARABONBA_PTR_GET_DEFAULT(bytesHitRate_, "") };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& setBytesHitRate(string bytesHitRate) { DARABONBA_PTR_SET_VALUE(bytesHitRate_, bytesHitRate) };


    // maxBps Field Functions 
    bool hasMaxBps() const { return this->maxBps_ != nullptr;};
    void deleteMaxBps() { this->maxBps_ = nullptr;};
    inline string maxBps() const { DARABONBA_PTR_GET_DEFAULT(maxBps_, "") };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& setMaxBps(string maxBps) { DARABONBA_PTR_SET_VALUE(maxBps_, maxBps) };


    // maxBpsTime Field Functions 
    bool hasMaxBpsTime() const { return this->maxBpsTime_ != nullptr;};
    void deleteMaxBpsTime() { this->maxBpsTime_ = nullptr;};
    inline string maxBpsTime() const { DARABONBA_PTR_GET_DEFAULT(maxBpsTime_, "") };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& setMaxBpsTime(string maxBpsTime) { DARABONBA_PTR_SET_VALUE(maxBpsTime_, maxBpsTime) };


    // maxSrcBps Field Functions 
    bool hasMaxSrcBps() const { return this->maxSrcBps_ != nullptr;};
    void deleteMaxSrcBps() { this->maxSrcBps_ = nullptr;};
    inline string maxSrcBps() const { DARABONBA_PTR_GET_DEFAULT(maxSrcBps_, "") };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& setMaxSrcBps(string maxSrcBps) { DARABONBA_PTR_SET_VALUE(maxSrcBps_, maxSrcBps) };


    // maxSrcBpsTime Field Functions 
    bool hasMaxSrcBpsTime() const { return this->maxSrcBpsTime_ != nullptr;};
    void deleteMaxSrcBpsTime() { this->maxSrcBpsTime_ = nullptr;};
    inline string maxSrcBpsTime() const { DARABONBA_PTR_GET_DEFAULT(maxSrcBpsTime_, "") };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& setMaxSrcBpsTime(string maxSrcBpsTime) { DARABONBA_PTR_SET_VALUE(maxSrcBpsTime_, maxSrcBpsTime) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline string qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, "") };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& setQps(string qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // requestHitRate Field Functions 
    bool hasRequestHitRate() const { return this->requestHitRate_ != nullptr;};
    void deleteRequestHitRate() { this->requestHitRate_ = nullptr;};
    inline string requestHitRate() const { DARABONBA_PTR_GET_DEFAULT(requestHitRate_, "") };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& setRequestHitRate(string requestHitRate) { DARABONBA_PTR_SET_VALUE(requestHitRate_, requestHitRate) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // totalAccess Field Functions 
    bool hasTotalAccess() const { return this->totalAccess_ != nullptr;};
    void deleteTotalAccess() { this->totalAccess_ = nullptr;};
    inline string totalAccess() const { DARABONBA_PTR_GET_DEFAULT(totalAccess_, "") };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& setTotalAccess(string totalAccess) { DARABONBA_PTR_SET_VALUE(totalAccess_, totalAccess) };


    // totalTraffic Field Functions 
    bool hasTotalTraffic() const { return this->totalTraffic_ != nullptr;};
    void deleteTotalTraffic() { this->totalTraffic_ = nullptr;};
    inline string totalTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalTraffic_, "") };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay& setTotalTraffic(string totalTraffic) { DARABONBA_PTR_SET_VALUE(totalTraffic_, totalTraffic) };


  protected:
    // The byte hit ratio. The byte hit ratio is measured in percentage.
    std::shared_ptr<string> bytesHitRate_ = nullptr;
    // The peak bandwidth value. Unit: bit/s.
    std::shared_ptr<string> maxBps_ = nullptr;
    // The time when the bandwidth reached the peak value.
    std::shared_ptr<string> maxBpsTime_ = nullptr;
    // The peak bandwidth value during back-to-origin routing. Unit: bit/s.
    std::shared_ptr<string> maxSrcBps_ = nullptr;
    // The time when the bandwidth during back-to-origin routing reached the peak value.
    std::shared_ptr<string> maxSrcBpsTime_ = nullptr;
    // The number of queries per second (QPS).
    std::shared_ptr<string> qps_ = nullptr;
    // The cache hit ratio that is calculated based on requests. The cache hit ratio is measured in percentage.
    std::shared_ptr<string> requestHitRate_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The total amount of requests.
    std::shared_ptr<string> totalAccess_ = nullptr;
    // The total amount of network traffic. Unit: bytes.
    std::shared_ptr<string> totalTraffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
