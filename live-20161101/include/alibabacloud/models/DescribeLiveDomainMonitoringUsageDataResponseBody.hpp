// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMONITORINGUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMONITORINGUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainMonitoringUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainMonitoringUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MonitoringData, monitoringData_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainMonitoringUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MonitoringData, monitoringData_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainMonitoringUsageDataResponseBody() = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBody(const DescribeLiveDomainMonitoringUsageDataResponseBody &) = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBody(DescribeLiveDomainMonitoringUsageDataResponseBody &&) = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainMonitoringUsageDataResponseBody() = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBody& operator=(const DescribeLiveDomainMonitoringUsageDataResponseBody &) = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBody& operator=(DescribeLiveDomainMonitoringUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->endTime_ != nullptr && this->instanceId_ != nullptr && this->monitoringData_ != nullptr && this->region_ != nullptr && this->requestId_ != nullptr
        && this->startTime_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // monitoringData Field Functions 
    bool hasMonitoringData() const { return this->monitoringData_ != nullptr;};
    void deleteMonitoringData() { this->monitoringData_ = nullptr;};
    inline const DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData & monitoringData() const { DARABONBA_PTR_GET_CONST(monitoringData_, DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData) };
    inline DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData monitoringData() { DARABONBA_PTR_GET(monitoringData_, DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData) };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setMonitoringData(const DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData & monitoringData) { DARABONBA_PTR_SET_VALUE(monitoringData_, monitoringData) };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setMonitoringData(DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData && monitoringData) { DARABONBA_PTR_SET_RVALUE(monitoringData_, monitoringData) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the monitoring session.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The live monitoring data.
    std::shared_ptr<DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData> monitoringData_ = nullptr;
    // The region of the live center.
    std::shared_ptr<string> region_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
