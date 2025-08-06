// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINSRCTRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINSRCTRAFFICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainSrcTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainSrcTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SrcTrafficDataPerInterval, srcTrafficDataPerInterval_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalTraffic, totalTraffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainSrcTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SrcTrafficDataPerInterval, srcTrafficDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalTraffic, totalTraffic_);
    };
    DescribeVodDomainSrcTrafficDataResponseBody() = default ;
    DescribeVodDomainSrcTrafficDataResponseBody(const DescribeVodDomainSrcTrafficDataResponseBody &) = default ;
    DescribeVodDomainSrcTrafficDataResponseBody(DescribeVodDomainSrcTrafficDataResponseBody &&) = default ;
    DescribeVodDomainSrcTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainSrcTrafficDataResponseBody() = default ;
    DescribeVodDomainSrcTrafficDataResponseBody& operator=(const DescribeVodDomainSrcTrafficDataResponseBody &) = default ;
    DescribeVodDomainSrcTrafficDataResponseBody& operator=(DescribeVodDomainSrcTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->requestId_ != nullptr && this->srcTrafficDataPerInterval_ != nullptr && this->startTime_ != nullptr
        && this->totalTraffic_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodDomainSrcTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainSrcTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodDomainSrcTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainSrcTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // srcTrafficDataPerInterval Field Functions 
    bool hasSrcTrafficDataPerInterval() const { return this->srcTrafficDataPerInterval_ != nullptr;};
    void deleteSrcTrafficDataPerInterval() { this->srcTrafficDataPerInterval_ = nullptr;};
    inline const DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval & srcTrafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(srcTrafficDataPerInterval_, DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval) };
    inline DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval srcTrafficDataPerInterval() { DARABONBA_PTR_GET(srcTrafficDataPerInterval_, DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval) };
    inline DescribeVodDomainSrcTrafficDataResponseBody& setSrcTrafficDataPerInterval(const DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval & srcTrafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(srcTrafficDataPerInterval_, srcTrafficDataPerInterval) };
    inline DescribeVodDomainSrcTrafficDataResponseBody& setSrcTrafficDataPerInterval(DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval && srcTrafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(srcTrafficDataPerInterval_, srcTrafficDataPerInterval) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainSrcTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalTraffic Field Functions 
    bool hasTotalTraffic() const { return this->totalTraffic_ != nullptr;};
    void deleteTotalTraffic() { this->totalTraffic_ = nullptr;};
    inline string totalTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalTraffic_, "") };
    inline DescribeVodDomainSrcTrafficDataResponseBody& setTotalTraffic(string totalTraffic) { DARABONBA_PTR_SET_VALUE(totalTraffic_, totalTraffic) };


  protected:
    // The time interval between the entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details about the origin traffic returned at each time interval. Unit: bytes.
    std::shared_ptr<DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval> srcTrafficDataPerInterval_ = nullptr;
    // The start of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The total traffic. Unit: bytes.
    std::shared_ptr<string> totalTraffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
