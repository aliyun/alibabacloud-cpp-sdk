// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINTRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINTRAFFICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TrafficDataPerInterval, trafficDataPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TrafficDataPerInterval, trafficDataPerInterval_);
    };
    DescribeVsDomainTrafficDataResponseBody() = default ;
    DescribeVsDomainTrafficDataResponseBody(const DescribeVsDomainTrafficDataResponseBody &) = default ;
    DescribeVsDomainTrafficDataResponseBody(DescribeVsDomainTrafficDataResponseBody &&) = default ;
    DescribeVsDomainTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainTrafficDataResponseBody() = default ;
    DescribeVsDomainTrafficDataResponseBody& operator=(const DescribeVsDomainTrafficDataResponseBody &) = default ;
    DescribeVsDomainTrafficDataResponseBody& operator=(DescribeVsDomainTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr && this->trafficDataPerInterval_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVsDomainTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVsDomainTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVsDomainTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVsDomainTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trafficDataPerInterval Field Functions 
    bool hasTrafficDataPerInterval() const { return this->trafficDataPerInterval_ != nullptr;};
    void deleteTrafficDataPerInterval() { this->trafficDataPerInterval_ = nullptr;};
    inline const DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval & trafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(trafficDataPerInterval_, DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval) };
    inline DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval trafficDataPerInterval() { DARABONBA_PTR_GET(trafficDataPerInterval_, DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval) };
    inline DescribeVsDomainTrafficDataResponseBody& setTrafficDataPerInterval(const DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval & trafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(trafficDataPerInterval_, trafficDataPerInterval) };
    inline DescribeVsDomainTrafficDataResponseBody& setTrafficDataPerInterval(DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval && trafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(trafficDataPerInterval_, trafficDataPerInterval) };


  protected:
    std::shared_ptr<string> dataInterval_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<DescribeVsDomainTrafficDataResponseBodyTrafficDataPerInterval> trafficDataPerInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
