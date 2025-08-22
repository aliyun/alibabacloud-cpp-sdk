// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainOriginBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainOriginBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OriginBpsDataPerInterval, originBpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainOriginBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OriginBpsDataPerInterval, originBpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainOriginBpsDataResponseBody() = default ;
    DescribeDcdnDomainOriginBpsDataResponseBody(const DescribeDcdnDomainOriginBpsDataResponseBody &) = default ;
    DescribeDcdnDomainOriginBpsDataResponseBody(DescribeDcdnDomainOriginBpsDataResponseBody &&) = default ;
    DescribeDcdnDomainOriginBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainOriginBpsDataResponseBody() = default ;
    DescribeDcdnDomainOriginBpsDataResponseBody& operator=(const DescribeDcdnDomainOriginBpsDataResponseBody &) = default ;
    DescribeDcdnDomainOriginBpsDataResponseBody& operator=(DescribeDcdnDomainOriginBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->originBpsDataPerInterval_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // originBpsDataPerInterval Field Functions 
    bool hasOriginBpsDataPerInterval() const { return this->originBpsDataPerInterval_ != nullptr;};
    void deleteOriginBpsDataPerInterval() { this->originBpsDataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval & originBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(originBpsDataPerInterval_, DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval) };
    inline DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval originBpsDataPerInterval() { DARABONBA_PTR_GET(originBpsDataPerInterval_, DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval) };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setOriginBpsDataPerInterval(const DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval & originBpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(originBpsDataPerInterval_, originBpsDataPerInterval) };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setOriginBpsDataPerInterval(DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval && originBpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(originBpsDataPerInterval_, originBpsDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The origin bandwidth data returned at each time interval. Unit: bit/s.
    std::shared_ptr<DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval> originBpsDataPerInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
