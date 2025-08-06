// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTRAFFICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalTraffic, totalTraffic_);
      DARABONBA_PTR_TO_JSON(TrafficDataPerInterval, trafficDataPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalTraffic, totalTraffic_);
      DARABONBA_PTR_FROM_JSON(TrafficDataPerInterval, trafficDataPerInterval_);
    };
    DescribeVodDomainTrafficDataResponseBody() = default ;
    DescribeVodDomainTrafficDataResponseBody(const DescribeVodDomainTrafficDataResponseBody &) = default ;
    DescribeVodDomainTrafficDataResponseBody(DescribeVodDomainTrafficDataResponseBody &&) = default ;
    DescribeVodDomainTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainTrafficDataResponseBody() = default ;
    DescribeVodDomainTrafficDataResponseBody& operator=(const DescribeVodDomainTrafficDataResponseBody &) = default ;
    DescribeVodDomainTrafficDataResponseBody& operator=(DescribeVodDomainTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr && this->totalTraffic_ != nullptr
        && this->trafficDataPerInterval_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodDomainTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodDomainTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalTraffic Field Functions 
    bool hasTotalTraffic() const { return this->totalTraffic_ != nullptr;};
    void deleteTotalTraffic() { this->totalTraffic_ = nullptr;};
    inline string totalTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalTraffic_, "") };
    inline DescribeVodDomainTrafficDataResponseBody& setTotalTraffic(string totalTraffic) { DARABONBA_PTR_SET_VALUE(totalTraffic_, totalTraffic) };


    // trafficDataPerInterval Field Functions 
    bool hasTrafficDataPerInterval() const { return this->trafficDataPerInterval_ != nullptr;};
    void deleteTrafficDataPerInterval() { this->trafficDataPerInterval_ = nullptr;};
    inline const DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval & trafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(trafficDataPerInterval_, DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval) };
    inline DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval trafficDataPerInterval() { DARABONBA_PTR_GET(trafficDataPerInterval_, DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval) };
    inline DescribeVodDomainTrafficDataResponseBody& setTrafficDataPerInterval(const DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval & trafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(trafficDataPerInterval_, trafficDataPerInterval) };
    inline DescribeVodDomainTrafficDataResponseBody& setTrafficDataPerInterval(DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval && trafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(trafficDataPerInterval_, trafficDataPerInterval) };


  protected:
    // The time interval at which data is returned, which is the time granularity. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range.
    std::shared_ptr<string> startTime_ = nullptr;
    // The total amount of network traffic.
    std::shared_ptr<string> totalTraffic_ = nullptr;
    // The amount of network traffic at each time interval.
    std::shared_ptr<DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval> trafficDataPerInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
