// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCTRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCTRAFFICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SrcTrafficDataPerInterval, srcTrafficDataPerInterval_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SrcTrafficDataPerInterval, srcTrafficDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainSrcTrafficDataResponseBody() = default ;
    DescribeDomainSrcTrafficDataResponseBody(const DescribeDomainSrcTrafficDataResponseBody &) = default ;
    DescribeDomainSrcTrafficDataResponseBody(DescribeDomainSrcTrafficDataResponseBody &&) = default ;
    DescribeDomainSrcTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcTrafficDataResponseBody() = default ;
    DescribeDomainSrcTrafficDataResponseBody& operator=(const DescribeDomainSrcTrafficDataResponseBody &) = default ;
    DescribeDomainSrcTrafficDataResponseBody& operator=(DescribeDomainSrcTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->requestId_ != nullptr && this->srcTrafficDataPerInterval_ != nullptr && this->startTime_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainSrcTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainSrcTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainSrcTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSrcTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // srcTrafficDataPerInterval Field Functions 
    bool hasSrcTrafficDataPerInterval() const { return this->srcTrafficDataPerInterval_ != nullptr;};
    void deleteSrcTrafficDataPerInterval() { this->srcTrafficDataPerInterval_ = nullptr;};
    inline const DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval & srcTrafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(srcTrafficDataPerInterval_, DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval) };
    inline DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval srcTrafficDataPerInterval() { DARABONBA_PTR_GET(srcTrafficDataPerInterval_, DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval) };
    inline DescribeDomainSrcTrafficDataResponseBody& setSrcTrafficDataPerInterval(const DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval & srcTrafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(srcTrafficDataPerInterval_, srcTrafficDataPerInterval) };
    inline DescribeDomainSrcTrafficDataResponseBody& setSrcTrafficDataPerInterval(DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval && srcTrafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(srcTrafficDataPerInterval_, srcTrafficDataPerInterval) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainSrcTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The amount of origin traffic returned at each time interval. Unit: bytes.
    std::shared_ptr<DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval> srcTrafficDataPerInterval_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
