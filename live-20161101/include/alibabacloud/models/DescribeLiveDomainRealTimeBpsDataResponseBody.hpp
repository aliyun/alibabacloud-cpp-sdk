// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMEBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMEBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainRealTimeBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeBpsDataPerInterval, realTimeBpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeBpsDataPerInterval, realTimeBpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainRealTimeBpsDataResponseBody() = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBody(const DescribeLiveDomainRealTimeBpsDataResponseBody &) = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBody(DescribeLiveDomainRealTimeBpsDataResponseBody &&) = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainRealTimeBpsDataResponseBody() = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBody& operator=(const DescribeLiveDomainRealTimeBpsDataResponseBody &) = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBody& operator=(DescribeLiveDomainRealTimeBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->realTimeBpsDataPerInterval_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeBpsDataPerInterval Field Functions 
    bool hasRealTimeBpsDataPerInterval() const { return this->realTimeBpsDataPerInterval_ != nullptr;};
    void deleteRealTimeBpsDataPerInterval() { this->realTimeBpsDataPerInterval_ = nullptr;};
    inline const DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval & realTimeBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(realTimeBpsDataPerInterval_, DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval) };
    inline DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval realTimeBpsDataPerInterval() { DARABONBA_PTR_GET(realTimeBpsDataPerInterval_, DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval) };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setRealTimeBpsDataPerInterval(const DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval & realTimeBpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(realTimeBpsDataPerInterval_, realTimeBpsDataPerInterval) };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setRealTimeBpsDataPerInterval(DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval && realTimeBpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(realTimeBpsDataPerInterval_, realTimeBpsDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The interval at which data was queried.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The streaming domain name or names that was queried.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range in which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The bandwidth data that was collected every minute.
    std::shared_ptr<DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval> realTimeBpsDataPerInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range in which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
