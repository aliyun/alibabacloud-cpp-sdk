// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINHITRATEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINHITRATEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainHitRateDataResponseBodyHitRateInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainHitRateDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HitRateInterval, hitRateInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HitRateInterval, hitRateInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainHitRateDataResponseBody() = default ;
    DescribeDomainHitRateDataResponseBody(const DescribeDomainHitRateDataResponseBody &) = default ;
    DescribeDomainHitRateDataResponseBody(DescribeDomainHitRateDataResponseBody &&) = default ;
    DescribeDomainHitRateDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainHitRateDataResponseBody() = default ;
    DescribeDomainHitRateDataResponseBody& operator=(const DescribeDomainHitRateDataResponseBody &) = default ;
    DescribeDomainHitRateDataResponseBody& operator=(DescribeDomainHitRateDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->hitRateInterval_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainHitRateDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainHitRateDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainHitRateDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // hitRateInterval Field Functions 
    bool hasHitRateInterval() const { return this->hitRateInterval_ != nullptr;};
    void deleteHitRateInterval() { this->hitRateInterval_ = nullptr;};
    inline const DescribeDomainHitRateDataResponseBodyHitRateInterval & hitRateInterval() const { DARABONBA_PTR_GET_CONST(hitRateInterval_, DescribeDomainHitRateDataResponseBodyHitRateInterval) };
    inline DescribeDomainHitRateDataResponseBodyHitRateInterval hitRateInterval() { DARABONBA_PTR_GET(hitRateInterval_, DescribeDomainHitRateDataResponseBodyHitRateInterval) };
    inline DescribeDomainHitRateDataResponseBody& setHitRateInterval(const DescribeDomainHitRateDataResponseBodyHitRateInterval & hitRateInterval) { DARABONBA_PTR_SET_VALUE(hitRateInterval_, hitRateInterval) };
    inline DescribeDomainHitRateDataResponseBody& setHitRateInterval(DescribeDomainHitRateDataResponseBodyHitRateInterval && hitRateInterval) { DARABONBA_PTR_SET_RVALUE(hitRateInterval_, hitRateInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainHitRateDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainHitRateDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The byte hit ratio at each time interval. The byte hit ratio is measured in percentage.
    std::shared_ptr<DescribeDomainHitRateDataResponseBodyHitRateInterval> hitRateInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
