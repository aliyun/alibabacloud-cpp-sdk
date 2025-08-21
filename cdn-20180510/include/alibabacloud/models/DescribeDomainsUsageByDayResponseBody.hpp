// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSUSAGEBYDAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSUSAGEBYDAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainsUsageByDayResponseBodyUsageByDays.hpp>
#include <alibabacloud/models/DescribeDomainsUsageByDayResponseBodyUsageTotal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainsUsageByDayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsUsageByDayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UsageByDays, usageByDays_);
      DARABONBA_PTR_TO_JSON(UsageTotal, usageTotal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsUsageByDayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UsageByDays, usageByDays_);
      DARABONBA_PTR_FROM_JSON(UsageTotal, usageTotal_);
    };
    DescribeDomainsUsageByDayResponseBody() = default ;
    DescribeDomainsUsageByDayResponseBody(const DescribeDomainsUsageByDayResponseBody &) = default ;
    DescribeDomainsUsageByDayResponseBody(DescribeDomainsUsageByDayResponseBody &&) = default ;
    DescribeDomainsUsageByDayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsUsageByDayResponseBody() = default ;
    DescribeDomainsUsageByDayResponseBody& operator=(const DescribeDomainsUsageByDayResponseBody &) = default ;
    DescribeDomainsUsageByDayResponseBody& operator=(DescribeDomainsUsageByDayResponseBody &&) = default ;
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
    inline DescribeDomainsUsageByDayResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainsUsageByDayResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainsUsageByDayResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainsUsageByDayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainsUsageByDayResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // usageByDays Field Functions 
    bool hasUsageByDays() const { return this->usageByDays_ != nullptr;};
    void deleteUsageByDays() { this->usageByDays_ = nullptr;};
    inline const DescribeDomainsUsageByDayResponseBodyUsageByDays & usageByDays() const { DARABONBA_PTR_GET_CONST(usageByDays_, DescribeDomainsUsageByDayResponseBodyUsageByDays) };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDays usageByDays() { DARABONBA_PTR_GET(usageByDays_, DescribeDomainsUsageByDayResponseBodyUsageByDays) };
    inline DescribeDomainsUsageByDayResponseBody& setUsageByDays(const DescribeDomainsUsageByDayResponseBodyUsageByDays & usageByDays) { DARABONBA_PTR_SET_VALUE(usageByDays_, usageByDays) };
    inline DescribeDomainsUsageByDayResponseBody& setUsageByDays(DescribeDomainsUsageByDayResponseBodyUsageByDays && usageByDays) { DARABONBA_PTR_SET_RVALUE(usageByDays_, usageByDays) };


    // usageTotal Field Functions 
    bool hasUsageTotal() const { return this->usageTotal_ != nullptr;};
    void deleteUsageTotal() { this->usageTotal_ = nullptr;};
    inline const DescribeDomainsUsageByDayResponseBodyUsageTotal & usageTotal() const { DARABONBA_PTR_GET_CONST(usageTotal_, DescribeDomainsUsageByDayResponseBodyUsageTotal) };
    inline DescribeDomainsUsageByDayResponseBodyUsageTotal usageTotal() { DARABONBA_PTR_GET(usageTotal_, DescribeDomainsUsageByDayResponseBodyUsageTotal) };
    inline DescribeDomainsUsageByDayResponseBody& setUsageTotal(const DescribeDomainsUsageByDayResponseBodyUsageTotal & usageTotal) { DARABONBA_PTR_SET_VALUE(usageTotal_, usageTotal) };
    inline DescribeDomainsUsageByDayResponseBody& setUsageTotal(DescribeDomainsUsageByDayResponseBodyUsageTotal && usageTotal) { DARABONBA_PTR_SET_RVALUE(usageTotal_, usageTotal) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
    // The monitoring data collected at each time interval.
    std::shared_ptr<DescribeDomainsUsageByDayResponseBodyUsageByDays> usageByDays_ = nullptr;
    // The summarized monitoring data.
    std::shared_ptr<DescribeDomainsUsageByDayResponseBodyUsageTotal> usageTotal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
