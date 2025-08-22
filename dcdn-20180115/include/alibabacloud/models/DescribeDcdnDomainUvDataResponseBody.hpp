// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINUVDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINUVDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainUvDataResponseBodyUvDataInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainUvDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainUvDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UvDataInterval, uvDataInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainUvDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UvDataInterval, uvDataInterval_);
    };
    DescribeDcdnDomainUvDataResponseBody() = default ;
    DescribeDcdnDomainUvDataResponseBody(const DescribeDcdnDomainUvDataResponseBody &) = default ;
    DescribeDcdnDomainUvDataResponseBody(DescribeDcdnDomainUvDataResponseBody &&) = default ;
    DescribeDcdnDomainUvDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainUvDataResponseBody() = default ;
    DescribeDcdnDomainUvDataResponseBody& operator=(const DescribeDcdnDomainUvDataResponseBody &) = default ;
    DescribeDcdnDomainUvDataResponseBody& operator=(DescribeDcdnDomainUvDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr && this->uvDataInterval_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainUvDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainUvDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainUvDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainUvDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainUvDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // uvDataInterval Field Functions 
    bool hasUvDataInterval() const { return this->uvDataInterval_ != nullptr;};
    void deleteUvDataInterval() { this->uvDataInterval_ = nullptr;};
    inline const DescribeDcdnDomainUvDataResponseBodyUvDataInterval & uvDataInterval() const { DARABONBA_PTR_GET_CONST(uvDataInterval_, DescribeDcdnDomainUvDataResponseBodyUvDataInterval) };
    inline DescribeDcdnDomainUvDataResponseBodyUvDataInterval uvDataInterval() { DARABONBA_PTR_GET(uvDataInterval_, DescribeDcdnDomainUvDataResponseBodyUvDataInterval) };
    inline DescribeDcdnDomainUvDataResponseBody& setUvDataInterval(const DescribeDcdnDomainUvDataResponseBodyUvDataInterval & uvDataInterval) { DARABONBA_PTR_SET_VALUE(uvDataInterval_, uvDataInterval) };
    inline DescribeDcdnDomainUvDataResponseBody& setUvDataInterval(DescribeDcdnDomainUvDataResponseBodyUvDataInterval && uvDataInterval) { DARABONBA_PTR_SET_RVALUE(uvDataInterval_, uvDataInterval) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range that was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range that was queried.
    std::shared_ptr<string> startTime_ = nullptr;
    // The number of UVs at each interval.
    std::shared_ptr<DescribeDcdnDomainUvDataResponseBodyUvDataInterval> uvDataInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
