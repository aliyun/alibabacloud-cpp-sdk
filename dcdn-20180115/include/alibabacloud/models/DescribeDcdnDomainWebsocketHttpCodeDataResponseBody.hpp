// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINWEBSOCKETHTTPCODEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINWEBSOCKETHTTPCODEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainWebsocketHttpCodeDataResponseBodyHttpCodeDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainWebsocketHttpCodeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HttpCodeDataPerInterval, httpCodeDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HttpCodeDataPerInterval, httpCodeDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainWebsocketHttpCodeDataResponseBody() = default ;
    DescribeDcdnDomainWebsocketHttpCodeDataResponseBody(const DescribeDcdnDomainWebsocketHttpCodeDataResponseBody &) = default ;
    DescribeDcdnDomainWebsocketHttpCodeDataResponseBody(DescribeDcdnDomainWebsocketHttpCodeDataResponseBody &&) = default ;
    DescribeDcdnDomainWebsocketHttpCodeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainWebsocketHttpCodeDataResponseBody() = default ;
    DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& operator=(const DescribeDcdnDomainWebsocketHttpCodeDataResponseBody &) = default ;
    DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& operator=(DescribeDcdnDomainWebsocketHttpCodeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->httpCodeDataPerInterval_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // httpCodeDataPerInterval Field Functions 
    bool hasHttpCodeDataPerInterval() const { return this->httpCodeDataPerInterval_ != nullptr;};
    void deleteHttpCodeDataPerInterval() { this->httpCodeDataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainWebsocketHttpCodeDataResponseBodyHttpCodeDataPerInterval & httpCodeDataPerInterval() const { DARABONBA_PTR_GET_CONST(httpCodeDataPerInterval_, DescribeDcdnDomainWebsocketHttpCodeDataResponseBodyHttpCodeDataPerInterval) };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBodyHttpCodeDataPerInterval httpCodeDataPerInterval() { DARABONBA_PTR_GET(httpCodeDataPerInterval_, DescribeDcdnDomainWebsocketHttpCodeDataResponseBodyHttpCodeDataPerInterval) };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setHttpCodeDataPerInterval(const DescribeDcdnDomainWebsocketHttpCodeDataResponseBodyHttpCodeDataPerInterval & httpCodeDataPerInterval) { DARABONBA_PTR_SET_VALUE(httpCodeDataPerInterval_, httpCodeDataPerInterval) };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setHttpCodeDataPerInterval(DescribeDcdnDomainWebsocketHttpCodeDataResponseBodyHttpCodeDataPerInterval && httpCodeDataPerInterval) { DARABONBA_PTR_SET_RVALUE(httpCodeDataPerInterval_, httpCodeDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<DescribeDcdnDomainWebsocketHttpCodeDataResponseBodyHttpCodeDataPerInterval> httpCodeDataPerInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
