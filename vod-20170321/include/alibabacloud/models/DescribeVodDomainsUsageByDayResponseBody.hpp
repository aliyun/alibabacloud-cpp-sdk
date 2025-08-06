// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINSUSAGEBYDAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINSUSAGEBYDAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainsUsageByDayResponseBodyUsageByDays.hpp>
#include <alibabacloud/models/DescribeVodDomainsUsageByDayResponseBodyUsageTotal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainsUsageByDayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainsUsageByDayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UsageByDays, usageByDays_);
      DARABONBA_PTR_TO_JSON(UsageTotal, usageTotal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainsUsageByDayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UsageByDays, usageByDays_);
      DARABONBA_PTR_FROM_JSON(UsageTotal, usageTotal_);
    };
    DescribeVodDomainsUsageByDayResponseBody() = default ;
    DescribeVodDomainsUsageByDayResponseBody(const DescribeVodDomainsUsageByDayResponseBody &) = default ;
    DescribeVodDomainsUsageByDayResponseBody(DescribeVodDomainsUsageByDayResponseBody &&) = default ;
    DescribeVodDomainsUsageByDayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainsUsageByDayResponseBody() = default ;
    DescribeVodDomainsUsageByDayResponseBody& operator=(const DescribeVodDomainsUsageByDayResponseBody &) = default ;
    DescribeVodDomainsUsageByDayResponseBody& operator=(DescribeVodDomainsUsageByDayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr && this->usageByDays_ != nullptr
        && this->usageTotal_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodDomainsUsageByDayResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainsUsageByDayResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodDomainsUsageByDayResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainsUsageByDayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainsUsageByDayResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // usageByDays Field Functions 
    bool hasUsageByDays() const { return this->usageByDays_ != nullptr;};
    void deleteUsageByDays() { this->usageByDays_ = nullptr;};
    inline const DescribeVodDomainsUsageByDayResponseBodyUsageByDays & usageByDays() const { DARABONBA_PTR_GET_CONST(usageByDays_, DescribeVodDomainsUsageByDayResponseBodyUsageByDays) };
    inline DescribeVodDomainsUsageByDayResponseBodyUsageByDays usageByDays() { DARABONBA_PTR_GET(usageByDays_, DescribeVodDomainsUsageByDayResponseBodyUsageByDays) };
    inline DescribeVodDomainsUsageByDayResponseBody& setUsageByDays(const DescribeVodDomainsUsageByDayResponseBodyUsageByDays & usageByDays) { DARABONBA_PTR_SET_VALUE(usageByDays_, usageByDays) };
    inline DescribeVodDomainsUsageByDayResponseBody& setUsageByDays(DescribeVodDomainsUsageByDayResponseBodyUsageByDays && usageByDays) { DARABONBA_PTR_SET_RVALUE(usageByDays_, usageByDays) };


    // usageTotal Field Functions 
    bool hasUsageTotal() const { return this->usageTotal_ != nullptr;};
    void deleteUsageTotal() { this->usageTotal_ = nullptr;};
    inline const DescribeVodDomainsUsageByDayResponseBodyUsageTotal & usageTotal() const { DARABONBA_PTR_GET_CONST(usageTotal_, DescribeVodDomainsUsageByDayResponseBodyUsageTotal) };
    inline DescribeVodDomainsUsageByDayResponseBodyUsageTotal usageTotal() { DARABONBA_PTR_GET(usageTotal_, DescribeVodDomainsUsageByDayResponseBodyUsageTotal) };
    inline DescribeVodDomainsUsageByDayResponseBody& setUsageTotal(const DescribeVodDomainsUsageByDayResponseBodyUsageTotal & usageTotal) { DARABONBA_PTR_SET_VALUE(usageTotal_, usageTotal) };
    inline DescribeVodDomainsUsageByDayResponseBody& setUsageTotal(DescribeVodDomainsUsageByDayResponseBodyUsageTotal && usageTotal) { DARABONBA_PTR_SET_RVALUE(usageTotal_, usageTotal) };


  protected:
    std::shared_ptr<string> dataInterval_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<DescribeVodDomainsUsageByDayResponseBodyUsageByDays> usageByDays_ = nullptr;
    std::shared_ptr<DescribeVodDomainsUsageByDayResponseBodyUsageTotal> usageTotal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
