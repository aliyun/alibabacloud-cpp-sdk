// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataPerInterval, bpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_TO_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataPerInterval, bpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_FROM_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVodDomainBpsDataResponseBody() = default ;
    DescribeVodDomainBpsDataResponseBody(const DescribeVodDomainBpsDataResponseBody &) = default ;
    DescribeVodDomainBpsDataResponseBody(DescribeVodDomainBpsDataResponseBody &&) = default ;
    DescribeVodDomainBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainBpsDataResponseBody() = default ;
    DescribeVodDomainBpsDataResponseBody& operator=(const DescribeVodDomainBpsDataResponseBody &) = default ;
    DescribeVodDomainBpsDataResponseBody& operator=(DescribeVodDomainBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bpsDataPerInterval_ != nullptr
        && this->dataInterval_ != nullptr && this->domainName_ != nullptr && this->endTime_ != nullptr && this->ispNameEn_ != nullptr && this->locationNameEn_ != nullptr
        && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // bpsDataPerInterval Field Functions 
    bool hasBpsDataPerInterval() const { return this->bpsDataPerInterval_ != nullptr;};
    void deleteBpsDataPerInterval() { this->bpsDataPerInterval_ = nullptr;};
    inline const DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval & bpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(bpsDataPerInterval_, DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval) };
    inline DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval bpsDataPerInterval() { DARABONBA_PTR_GET(bpsDataPerInterval_, DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval) };
    inline DescribeVodDomainBpsDataResponseBody& setBpsDataPerInterval(const DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval & bpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(bpsDataPerInterval_, bpsDataPerInterval) };
    inline DescribeVodDomainBpsDataResponseBody& setBpsDataPerInterval(DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval && bpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(bpsDataPerInterval_, bpsDataPerInterval) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodDomainBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodDomainBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ispNameEn Field Functions 
    bool hasIspNameEn() const { return this->ispNameEn_ != nullptr;};
    void deleteIspNameEn() { this->ispNameEn_ = nullptr;};
    inline string ispNameEn() const { DARABONBA_PTR_GET_DEFAULT(ispNameEn_, "") };
    inline DescribeVodDomainBpsDataResponseBody& setIspNameEn(string ispNameEn) { DARABONBA_PTR_SET_VALUE(ispNameEn_, ispNameEn) };


    // locationNameEn Field Functions 
    bool hasLocationNameEn() const { return this->locationNameEn_ != nullptr;};
    void deleteLocationNameEn() { this->locationNameEn_ = nullptr;};
    inline string locationNameEn() const { DARABONBA_PTR_GET_DEFAULT(locationNameEn_, "") };
    inline DescribeVodDomainBpsDataResponseBody& setLocationNameEn(string locationNameEn) { DARABONBA_PTR_SET_VALUE(locationNameEn_, locationNameEn) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The bandwidth data that is collected for each interval.
    std::shared_ptr<DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval> bpsDataPerInterval_ = nullptr;
    // The time interval between the returned entries. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The domain name for CDN.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range in which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the ISP. By default, the data of all ISPs is returned.
    std::shared_ptr<string> ispNameEn_ = nullptr;
    // The name of the region. By default, the data in all regions is returned.
    std::shared_ptr<string> locationNameEn_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range in which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
