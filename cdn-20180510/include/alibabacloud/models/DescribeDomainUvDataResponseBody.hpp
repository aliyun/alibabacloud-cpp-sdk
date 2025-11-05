// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINUVDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINUVDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainUvDataResponseBodyUvDataInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainUvDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainUvDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UvDataInterval, uvDataInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainUvDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UvDataInterval, uvDataInterval_);
    };
    DescribeDomainUvDataResponseBody() = default ;
    DescribeDomainUvDataResponseBody(const DescribeDomainUvDataResponseBody &) = default ;
    DescribeDomainUvDataResponseBody(DescribeDomainUvDataResponseBody &&) = default ;
    DescribeDomainUvDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainUvDataResponseBody() = default ;
    DescribeDomainUvDataResponseBody& operator=(const DescribeDomainUvDataResponseBody &) = default ;
    DescribeDomainUvDataResponseBody& operator=(DescribeDomainUvDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr && return this->uvDataInterval_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainUvDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainUvDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainUvDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainUvDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainUvDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // uvDataInterval Field Functions 
    bool hasUvDataInterval() const { return this->uvDataInterval_ != nullptr;};
    void deleteUvDataInterval() { this->uvDataInterval_ = nullptr;};
    inline const DescribeDomainUvDataResponseBodyUvDataInterval & uvDataInterval() const { DARABONBA_PTR_GET_CONST(uvDataInterval_, DescribeDomainUvDataResponseBodyUvDataInterval) };
    inline DescribeDomainUvDataResponseBodyUvDataInterval uvDataInterval() { DARABONBA_PTR_GET(uvDataInterval_, DescribeDomainUvDataResponseBodyUvDataInterval) };
    inline DescribeDomainUvDataResponseBody& setUvDataInterval(const DescribeDomainUvDataResponseBodyUvDataInterval & uvDataInterval) { DARABONBA_PTR_SET_VALUE(uvDataInterval_, uvDataInterval) };
    inline DescribeDomainUvDataResponseBody& setUvDataInterval(DescribeDomainUvDataResponseBodyUvDataInterval && uvDataInterval) { DARABONBA_PTR_SET_RVALUE(uvDataInterval_, uvDataInterval) };


  protected:
    // The time interval. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range that was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range that was queried.
    std::shared_ptr<string> startTime_ = nullptr;
    // The number of UVs at each interval.
    std::shared_ptr<DescribeDomainUvDataResponseBodyUvDataInterval> uvDataInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
