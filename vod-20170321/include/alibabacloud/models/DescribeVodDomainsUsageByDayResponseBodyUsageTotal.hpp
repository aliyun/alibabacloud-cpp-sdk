// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINSUSAGEBYDAYRESPONSEBODYUSAGETOTAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINSUSAGEBYDAYRESPONSEBODYUSAGETOTAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainsUsageByDayResponseBodyUsageTotal : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainsUsageByDayResponseBodyUsageTotal& obj) { 
      DARABONBA_PTR_TO_JSON(BytesHitRate, bytesHitRate_);
      DARABONBA_PTR_TO_JSON(MaxBps, maxBps_);
      DARABONBA_PTR_TO_JSON(MaxBpsTime, maxBpsTime_);
      DARABONBA_PTR_TO_JSON(MaxSrcBps, maxSrcBps_);
      DARABONBA_PTR_TO_JSON(MaxSrcBpsTime, maxSrcBpsTime_);
      DARABONBA_PTR_TO_JSON(RequestHitRate, requestHitRate_);
      DARABONBA_PTR_TO_JSON(TotalAccess, totalAccess_);
      DARABONBA_PTR_TO_JSON(TotalTraffic, totalTraffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainsUsageByDayResponseBodyUsageTotal& obj) { 
      DARABONBA_PTR_FROM_JSON(BytesHitRate, bytesHitRate_);
      DARABONBA_PTR_FROM_JSON(MaxBps, maxBps_);
      DARABONBA_PTR_FROM_JSON(MaxBpsTime, maxBpsTime_);
      DARABONBA_PTR_FROM_JSON(MaxSrcBps, maxSrcBps_);
      DARABONBA_PTR_FROM_JSON(MaxSrcBpsTime, maxSrcBpsTime_);
      DARABONBA_PTR_FROM_JSON(RequestHitRate, requestHitRate_);
      DARABONBA_PTR_FROM_JSON(TotalAccess, totalAccess_);
      DARABONBA_PTR_FROM_JSON(TotalTraffic, totalTraffic_);
    };
    DescribeVodDomainsUsageByDayResponseBodyUsageTotal() = default ;
    DescribeVodDomainsUsageByDayResponseBodyUsageTotal(const DescribeVodDomainsUsageByDayResponseBodyUsageTotal &) = default ;
    DescribeVodDomainsUsageByDayResponseBodyUsageTotal(DescribeVodDomainsUsageByDayResponseBodyUsageTotal &&) = default ;
    DescribeVodDomainsUsageByDayResponseBodyUsageTotal(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainsUsageByDayResponseBodyUsageTotal() = default ;
    DescribeVodDomainsUsageByDayResponseBodyUsageTotal& operator=(const DescribeVodDomainsUsageByDayResponseBodyUsageTotal &) = default ;
    DescribeVodDomainsUsageByDayResponseBodyUsageTotal& operator=(DescribeVodDomainsUsageByDayResponseBodyUsageTotal &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bytesHitRate_ != nullptr
        && this->maxBps_ != nullptr && this->maxBpsTime_ != nullptr && this->maxSrcBps_ != nullptr && this->maxSrcBpsTime_ != nullptr && this->requestHitRate_ != nullptr
        && this->totalAccess_ != nullptr && this->totalTraffic_ != nullptr; };
    // bytesHitRate Field Functions 
    bool hasBytesHitRate() const { return this->bytesHitRate_ != nullptr;};
    void deleteBytesHitRate() { this->bytesHitRate_ = nullptr;};
    inline string bytesHitRate() const { DARABONBA_PTR_GET_DEFAULT(bytesHitRate_, "") };
    inline DescribeVodDomainsUsageByDayResponseBodyUsageTotal& setBytesHitRate(string bytesHitRate) { DARABONBA_PTR_SET_VALUE(bytesHitRate_, bytesHitRate) };


    // maxBps Field Functions 
    bool hasMaxBps() const { return this->maxBps_ != nullptr;};
    void deleteMaxBps() { this->maxBps_ = nullptr;};
    inline string maxBps() const { DARABONBA_PTR_GET_DEFAULT(maxBps_, "") };
    inline DescribeVodDomainsUsageByDayResponseBodyUsageTotal& setMaxBps(string maxBps) { DARABONBA_PTR_SET_VALUE(maxBps_, maxBps) };


    // maxBpsTime Field Functions 
    bool hasMaxBpsTime() const { return this->maxBpsTime_ != nullptr;};
    void deleteMaxBpsTime() { this->maxBpsTime_ = nullptr;};
    inline string maxBpsTime() const { DARABONBA_PTR_GET_DEFAULT(maxBpsTime_, "") };
    inline DescribeVodDomainsUsageByDayResponseBodyUsageTotal& setMaxBpsTime(string maxBpsTime) { DARABONBA_PTR_SET_VALUE(maxBpsTime_, maxBpsTime) };


    // maxSrcBps Field Functions 
    bool hasMaxSrcBps() const { return this->maxSrcBps_ != nullptr;};
    void deleteMaxSrcBps() { this->maxSrcBps_ = nullptr;};
    inline string maxSrcBps() const { DARABONBA_PTR_GET_DEFAULT(maxSrcBps_, "") };
    inline DescribeVodDomainsUsageByDayResponseBodyUsageTotal& setMaxSrcBps(string maxSrcBps) { DARABONBA_PTR_SET_VALUE(maxSrcBps_, maxSrcBps) };


    // maxSrcBpsTime Field Functions 
    bool hasMaxSrcBpsTime() const { return this->maxSrcBpsTime_ != nullptr;};
    void deleteMaxSrcBpsTime() { this->maxSrcBpsTime_ = nullptr;};
    inline string maxSrcBpsTime() const { DARABONBA_PTR_GET_DEFAULT(maxSrcBpsTime_, "") };
    inline DescribeVodDomainsUsageByDayResponseBodyUsageTotal& setMaxSrcBpsTime(string maxSrcBpsTime) { DARABONBA_PTR_SET_VALUE(maxSrcBpsTime_, maxSrcBpsTime) };


    // requestHitRate Field Functions 
    bool hasRequestHitRate() const { return this->requestHitRate_ != nullptr;};
    void deleteRequestHitRate() { this->requestHitRate_ = nullptr;};
    inline string requestHitRate() const { DARABONBA_PTR_GET_DEFAULT(requestHitRate_, "") };
    inline DescribeVodDomainsUsageByDayResponseBodyUsageTotal& setRequestHitRate(string requestHitRate) { DARABONBA_PTR_SET_VALUE(requestHitRate_, requestHitRate) };


    // totalAccess Field Functions 
    bool hasTotalAccess() const { return this->totalAccess_ != nullptr;};
    void deleteTotalAccess() { this->totalAccess_ = nullptr;};
    inline string totalAccess() const { DARABONBA_PTR_GET_DEFAULT(totalAccess_, "") };
    inline DescribeVodDomainsUsageByDayResponseBodyUsageTotal& setTotalAccess(string totalAccess) { DARABONBA_PTR_SET_VALUE(totalAccess_, totalAccess) };


    // totalTraffic Field Functions 
    bool hasTotalTraffic() const { return this->totalTraffic_ != nullptr;};
    void deleteTotalTraffic() { this->totalTraffic_ = nullptr;};
    inline string totalTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalTraffic_, "") };
    inline DescribeVodDomainsUsageByDayResponseBodyUsageTotal& setTotalTraffic(string totalTraffic) { DARABONBA_PTR_SET_VALUE(totalTraffic_, totalTraffic) };


  protected:
    std::shared_ptr<string> bytesHitRate_ = nullptr;
    std::shared_ptr<string> maxBps_ = nullptr;
    std::shared_ptr<string> maxBpsTime_ = nullptr;
    std::shared_ptr<string> maxSrcBps_ = nullptr;
    std::shared_ptr<string> maxSrcBpsTime_ = nullptr;
    std::shared_ptr<string> requestHitRate_ = nullptr;
    std::shared_ptr<string> totalAccess_ = nullptr;
    std::shared_ptr<string> totalTraffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
