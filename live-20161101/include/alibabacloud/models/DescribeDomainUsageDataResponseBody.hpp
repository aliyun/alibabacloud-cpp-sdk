// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainUsageDataResponseBodyUsageDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeDomainUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UsageDataPerInterval, usageDataPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UsageDataPerInterval, usageDataPerInterval_);
    };
    DescribeDomainUsageDataResponseBody() = default ;
    DescribeDomainUsageDataResponseBody(const DescribeDomainUsageDataResponseBody &) = default ;
    DescribeDomainUsageDataResponseBody(DescribeDomainUsageDataResponseBody &&) = default ;
    DescribeDomainUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainUsageDataResponseBody() = default ;
    DescribeDomainUsageDataResponseBody& operator=(const DescribeDomainUsageDataResponseBody &) = default ;
    DescribeDomainUsageDataResponseBody& operator=(DescribeDomainUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && return this->dataInterval_ == nullptr && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr
        && return this->type_ == nullptr && return this->usageDataPerInterval_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeDomainUsageDataResponseBody& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainUsageDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainUsageDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDomainUsageDataResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // usageDataPerInterval Field Functions 
    bool hasUsageDataPerInterval() const { return this->usageDataPerInterval_ != nullptr;};
    void deleteUsageDataPerInterval() { this->usageDataPerInterval_ = nullptr;};
    inline const DescribeDomainUsageDataResponseBodyUsageDataPerInterval & usageDataPerInterval() const { DARABONBA_PTR_GET_CONST(usageDataPerInterval_, DescribeDomainUsageDataResponseBodyUsageDataPerInterval) };
    inline DescribeDomainUsageDataResponseBodyUsageDataPerInterval usageDataPerInterval() { DARABONBA_PTR_GET(usageDataPerInterval_, DescribeDomainUsageDataResponseBodyUsageDataPerInterval) };
    inline DescribeDomainUsageDataResponseBody& setUsageDataPerInterval(const DescribeDomainUsageDataResponseBodyUsageDataPerInterval & usageDataPerInterval) { DARABONBA_PTR_SET_VALUE(usageDataPerInterval_, usageDataPerInterval) };
    inline DescribeDomainUsageDataResponseBody& setUsageDataPerInterval(DescribeDomainUsageDataResponseBodyUsageDataPerInterval && usageDataPerInterval) { DARABONBA_PTR_SET_RVALUE(usageDataPerInterval_, usageDataPerInterval) };


  protected:
    // The billable region where the resource usage data was generated.
    std::shared_ptr<string> area_ = nullptr;
    // The time interval between the returned entries. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range for which the resource usage data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range for which the resource usage data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The type of the resource usage data.
    std::shared_ptr<string> type_ = nullptr;
    // The resource usage data that was collected for each time interval.
    std::shared_ptr<DescribeDomainUsageDataResponseBodyUsageDataPerInterval> usageDataPerInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
