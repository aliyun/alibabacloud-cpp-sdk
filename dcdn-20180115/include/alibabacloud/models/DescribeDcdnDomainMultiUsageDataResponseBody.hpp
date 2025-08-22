// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINMULTIUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINMULTIUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval.hpp>
#include <alibabacloud/models/DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainMultiUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainMultiUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestPerInterval, requestPerInterval_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TrafficPerInterval, trafficPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainMultiUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestPerInterval, requestPerInterval_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TrafficPerInterval, trafficPerInterval_);
    };
    DescribeDcdnDomainMultiUsageDataResponseBody() = default ;
    DescribeDcdnDomainMultiUsageDataResponseBody(const DescribeDcdnDomainMultiUsageDataResponseBody &) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBody(DescribeDcdnDomainMultiUsageDataResponseBody &&) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainMultiUsageDataResponseBody() = default ;
    DescribeDcdnDomainMultiUsageDataResponseBody& operator=(const DescribeDcdnDomainMultiUsageDataResponseBody &) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBody& operator=(DescribeDcdnDomainMultiUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->requestId_ != nullptr && this->requestPerInterval_ != nullptr && this->startTime_ != nullptr && this->trafficPerInterval_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestPerInterval Field Functions 
    bool hasRequestPerInterval() const { return this->requestPerInterval_ != nullptr;};
    void deleteRequestPerInterval() { this->requestPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval & requestPerInterval() const { DARABONBA_PTR_GET_CONST(requestPerInterval_, DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval) };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval requestPerInterval() { DARABONBA_PTR_GET(requestPerInterval_, DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval) };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setRequestPerInterval(const DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval & requestPerInterval) { DARABONBA_PTR_SET_VALUE(requestPerInterval_, requestPerInterval) };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setRequestPerInterval(DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval && requestPerInterval) { DARABONBA_PTR_SET_RVALUE(requestPerInterval_, requestPerInterval) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trafficPerInterval Field Functions 
    bool hasTrafficPerInterval() const { return this->trafficPerInterval_ != nullptr;};
    void deleteTrafficPerInterval() { this->trafficPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval & trafficPerInterval() const { DARABONBA_PTR_GET_CONST(trafficPerInterval_, DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval) };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval trafficPerInterval() { DARABONBA_PTR_GET(trafficPerInterval_, DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval) };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setTrafficPerInterval(const DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval & trafficPerInterval) { DARABONBA_PTR_SET_VALUE(trafficPerInterval_, trafficPerInterval) };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setTrafficPerInterval(DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval && trafficPerInterval) { DARABONBA_PTR_SET_RVALUE(trafficPerInterval_, trafficPerInterval) };


  protected:
    // The end of the time range that was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about requests collected every 5 minutes.
    std::shared_ptr<DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval> requestPerInterval_ = nullptr;
    // The beginning of the time range that was queried.
    std::shared_ptr<string> startTime_ = nullptr;
    // The statistics of network traffic collected every 5 minutes.
    std::shared_ptr<DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval> trafficPerInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
