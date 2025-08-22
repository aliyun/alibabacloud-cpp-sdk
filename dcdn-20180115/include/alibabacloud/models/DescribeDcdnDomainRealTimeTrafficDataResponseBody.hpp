// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMETRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMETRAFFICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeTrafficDataPerInterval, realTimeTrafficDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeTrafficDataPerInterval, realTimeTrafficDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainRealTimeTrafficDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeTrafficDataResponseBody(const DescribeDcdnDomainRealTimeTrafficDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeTrafficDataResponseBody(DescribeDcdnDomainRealTimeTrafficDataResponseBody &&) = default ;
    DescribeDcdnDomainRealTimeTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeTrafficDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeTrafficDataResponseBody& operator=(const DescribeDcdnDomainRealTimeTrafficDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeTrafficDataResponseBody& operator=(DescribeDcdnDomainRealTimeTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->realTimeTrafficDataPerInterval_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainRealTimeTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainRealTimeTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainRealTimeTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeTrafficDataPerInterval Field Functions 
    bool hasRealTimeTrafficDataPerInterval() const { return this->realTimeTrafficDataPerInterval_ != nullptr;};
    void deleteRealTimeTrafficDataPerInterval() { this->realTimeTrafficDataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval & realTimeTrafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(realTimeTrafficDataPerInterval_, DescribeDcdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval) };
    inline DescribeDcdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval realTimeTrafficDataPerInterval() { DARABONBA_PTR_GET(realTimeTrafficDataPerInterval_, DescribeDcdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval) };
    inline DescribeDcdnDomainRealTimeTrafficDataResponseBody& setRealTimeTrafficDataPerInterval(const DescribeDcdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval & realTimeTrafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(realTimeTrafficDataPerInterval_, realTimeTrafficDataPerInterval) };
    inline DescribeDcdnDomainRealTimeTrafficDataResponseBody& setRealTimeTrafficDataPerInterval(DescribeDcdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval && realTimeTrafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(realTimeTrafficDataPerInterval_, realTimeTrafficDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainRealTimeTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainRealTimeTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries. Unit: seconds.
    // 
    // The time granularity varies with the maximum time range per query. Valid values: 60 (1 minute), 300 (5 minutes), and 3600(1 hour). For more information, see **Usage notes**.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The amount of back-to-origin traffic returned at each interval.
    std::shared_ptr<DescribeDcdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval> realTimeTrafficDataPerInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
