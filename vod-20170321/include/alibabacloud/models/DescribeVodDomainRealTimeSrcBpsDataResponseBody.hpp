// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMESRCBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMESRCBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeSrcBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeSrcBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeSrcBpsDataPerInterval, realTimeSrcBpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeSrcBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeSrcBpsDataPerInterval, realTimeSrcBpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVodDomainRealTimeSrcBpsDataResponseBody() = default ;
    DescribeVodDomainRealTimeSrcBpsDataResponseBody(const DescribeVodDomainRealTimeSrcBpsDataResponseBody &) = default ;
    DescribeVodDomainRealTimeSrcBpsDataResponseBody(DescribeVodDomainRealTimeSrcBpsDataResponseBody &&) = default ;
    DescribeVodDomainRealTimeSrcBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeSrcBpsDataResponseBody() = default ;
    DescribeVodDomainRealTimeSrcBpsDataResponseBody& operator=(const DescribeVodDomainRealTimeSrcBpsDataResponseBody &) = default ;
    DescribeVodDomainRealTimeSrcBpsDataResponseBody& operator=(DescribeVodDomainRealTimeSrcBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->realTimeSrcBpsDataPerInterval_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodDomainRealTimeSrcBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainRealTimeSrcBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodDomainRealTimeSrcBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeSrcBpsDataPerInterval Field Functions 
    bool hasRealTimeSrcBpsDataPerInterval() const { return this->realTimeSrcBpsDataPerInterval_ != nullptr;};
    void deleteRealTimeSrcBpsDataPerInterval() { this->realTimeSrcBpsDataPerInterval_ = nullptr;};
    inline const DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval & realTimeSrcBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(realTimeSrcBpsDataPerInterval_, DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval) };
    inline DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval realTimeSrcBpsDataPerInterval() { DARABONBA_PTR_GET(realTimeSrcBpsDataPerInterval_, DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval) };
    inline DescribeVodDomainRealTimeSrcBpsDataResponseBody& setRealTimeSrcBpsDataPerInterval(const DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval & realTimeSrcBpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(realTimeSrcBpsDataPerInterval_, realTimeSrcBpsDataPerInterval) };
    inline DescribeVodDomainRealTimeSrcBpsDataResponseBody& setRealTimeSrcBpsDataPerInterval(DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval && realTimeSrcBpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(realTimeSrcBpsDataPerInterval_, realTimeSrcBpsDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainRealTimeSrcBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainRealTimeSrcBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> dataInterval_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval> realTimeSrcBpsDataPerInterval_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
