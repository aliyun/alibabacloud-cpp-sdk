// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINTRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINTRAFFICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainOriginTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainOriginTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OriginTrafficDataPerInterval, originTrafficDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainOriginTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OriginTrafficDataPerInterval, originTrafficDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainOriginTrafficDataResponseBody() = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBody(const DescribeDcdnDomainOriginTrafficDataResponseBody &) = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBody(DescribeDcdnDomainOriginTrafficDataResponseBody &&) = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainOriginTrafficDataResponseBody() = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBody& operator=(const DescribeDcdnDomainOriginTrafficDataResponseBody &) = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBody& operator=(DescribeDcdnDomainOriginTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->originTrafficDataPerInterval_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // originTrafficDataPerInterval Field Functions 
    bool hasOriginTrafficDataPerInterval() const { return this->originTrafficDataPerInterval_ != nullptr;};
    void deleteOriginTrafficDataPerInterval() { this->originTrafficDataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval & originTrafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(originTrafficDataPerInterval_, DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval originTrafficDataPerInterval() { DARABONBA_PTR_GET(originTrafficDataPerInterval_, DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setOriginTrafficDataPerInterval(const DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval & originTrafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(originTrafficDataPerInterval_, originTrafficDataPerInterval) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setOriginTrafficDataPerInterval(DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval && originTrafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(originTrafficDataPerInterval_, originTrafficDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The amount of back-to-origin traffic returned at each time interval. Unit: bytes.
    std::shared_ptr<DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval> originTrafficDataPerInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
