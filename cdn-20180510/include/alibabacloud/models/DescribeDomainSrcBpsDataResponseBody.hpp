// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SrcBpsDataPerInterval, srcBpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SrcBpsDataPerInterval, srcBpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainSrcBpsDataResponseBody() = default ;
    DescribeDomainSrcBpsDataResponseBody(const DescribeDomainSrcBpsDataResponseBody &) = default ;
    DescribeDomainSrcBpsDataResponseBody(DescribeDomainSrcBpsDataResponseBody &&) = default ;
    DescribeDomainSrcBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcBpsDataResponseBody() = default ;
    DescribeDomainSrcBpsDataResponseBody& operator=(const DescribeDomainSrcBpsDataResponseBody &) = default ;
    DescribeDomainSrcBpsDataResponseBody& operator=(DescribeDomainSrcBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->requestId_ != nullptr && this->srcBpsDataPerInterval_ != nullptr && this->startTime_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainSrcBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainSrcBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainSrcBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSrcBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // srcBpsDataPerInterval Field Functions 
    bool hasSrcBpsDataPerInterval() const { return this->srcBpsDataPerInterval_ != nullptr;};
    void deleteSrcBpsDataPerInterval() { this->srcBpsDataPerInterval_ = nullptr;};
    inline const DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval & srcBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(srcBpsDataPerInterval_, DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval) };
    inline DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval srcBpsDataPerInterval() { DARABONBA_PTR_GET(srcBpsDataPerInterval_, DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval) };
    inline DescribeDomainSrcBpsDataResponseBody& setSrcBpsDataPerInterval(const DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval & srcBpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(srcBpsDataPerInterval_, srcBpsDataPerInterval) };
    inline DescribeDomainSrcBpsDataResponseBody& setSrcBpsDataPerInterval(DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval && srcBpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(srcBpsDataPerInterval_, srcBpsDataPerInterval) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainSrcBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The origin bandwidth data at each time interval. Unit: bit/s.
    std::shared_ptr<DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval> srcBpsDataPerInterval_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
