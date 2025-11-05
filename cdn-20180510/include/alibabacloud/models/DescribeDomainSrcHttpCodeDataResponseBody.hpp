// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCHTTPCODEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCHTTPCODEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcHttpCodeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HttpCodeData, httpCodeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HttpCodeData, httpCodeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainSrcHttpCodeDataResponseBody() = default ;
    DescribeDomainSrcHttpCodeDataResponseBody(const DescribeDomainSrcHttpCodeDataResponseBody &) = default ;
    DescribeDomainSrcHttpCodeDataResponseBody(DescribeDomainSrcHttpCodeDataResponseBody &&) = default ;
    DescribeDomainSrcHttpCodeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcHttpCodeDataResponseBody() = default ;
    DescribeDomainSrcHttpCodeDataResponseBody& operator=(const DescribeDomainSrcHttpCodeDataResponseBody &) = default ;
    DescribeDomainSrcHttpCodeDataResponseBody& operator=(DescribeDomainSrcHttpCodeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->httpCodeData_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainSrcHttpCodeDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainSrcHttpCodeDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainSrcHttpCodeDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // httpCodeData Field Functions 
    bool hasHttpCodeData() const { return this->httpCodeData_ != nullptr;};
    void deleteHttpCodeData() { this->httpCodeData_ = nullptr;};
    inline const DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData & httpCodeData() const { DARABONBA_PTR_GET_CONST(httpCodeData_, DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData) };
    inline DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData httpCodeData() { DARABONBA_PTR_GET(httpCodeData_, DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData) };
    inline DescribeDomainSrcHttpCodeDataResponseBody& setHttpCodeData(const DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData & httpCodeData) { DARABONBA_PTR_SET_VALUE(httpCodeData_, httpCodeData) };
    inline DescribeDomainSrcHttpCodeDataResponseBody& setHttpCodeData(DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData && httpCodeData) { DARABONBA_PTR_SET_RVALUE(httpCodeData_, httpCodeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSrcHttpCodeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainSrcHttpCodeDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The proportions of HTTP status codes at each time interval.
    std::shared_ptr<DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData> httpCodeData_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
