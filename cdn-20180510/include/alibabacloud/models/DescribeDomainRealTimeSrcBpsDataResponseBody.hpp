// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMESRCBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMESRCBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeSrcBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeSrcBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeSrcBpsDataPerInterval, realTimeSrcBpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeSrcBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeSrcBpsDataPerInterval, realTimeSrcBpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainRealTimeSrcBpsDataResponseBody() = default ;
    DescribeDomainRealTimeSrcBpsDataResponseBody(const DescribeDomainRealTimeSrcBpsDataResponseBody &) = default ;
    DescribeDomainRealTimeSrcBpsDataResponseBody(DescribeDomainRealTimeSrcBpsDataResponseBody &&) = default ;
    DescribeDomainRealTimeSrcBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeSrcBpsDataResponseBody() = default ;
    DescribeDomainRealTimeSrcBpsDataResponseBody& operator=(const DescribeDomainRealTimeSrcBpsDataResponseBody &) = default ;
    DescribeDomainRealTimeSrcBpsDataResponseBody& operator=(DescribeDomainRealTimeSrcBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->realTimeSrcBpsDataPerInterval_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeSrcBpsDataPerInterval Field Functions 
    bool hasRealTimeSrcBpsDataPerInterval() const { return this->realTimeSrcBpsDataPerInterval_ != nullptr;};
    void deleteRealTimeSrcBpsDataPerInterval() { this->realTimeSrcBpsDataPerInterval_ = nullptr;};
    inline const DescribeDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval & realTimeSrcBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(realTimeSrcBpsDataPerInterval_, DescribeDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval) };
    inline DescribeDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval realTimeSrcBpsDataPerInterval() { DARABONBA_PTR_GET(realTimeSrcBpsDataPerInterval_, DescribeDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval) };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setRealTimeSrcBpsDataPerInterval(const DescribeDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval & realTimeSrcBpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(realTimeSrcBpsDataPerInterval_, realTimeSrcBpsDataPerInterval) };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setRealTimeSrcBpsDataPerInterval(DescribeDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval && realTimeSrcBpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(realTimeSrcBpsDataPerInterval_, realTimeSrcBpsDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    // 
    // The time granularity varies with the maximum time range per query. Valid values: 60 (1 minute), 300 (5 minutes), and 3600(1 hour). For more information, see **Usage notes**.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The origin bandwidth data at each interval.
    std::shared_ptr<DescribeDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval> realTimeSrcBpsDataPerInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
