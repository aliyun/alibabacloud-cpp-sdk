// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSAGEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSAGEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainUsageDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainUsageDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(DataProtocol, dataProtocol_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainUsageDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(DataProtocol, dataProtocol_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDomainUsageDataRequest() = default ;
    DescribeDomainUsageDataRequest(const DescribeDomainUsageDataRequest &) = default ;
    DescribeDomainUsageDataRequest(DescribeDomainUsageDataRequest &&) = default ;
    DescribeDomainUsageDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainUsageDataRequest() = default ;
    DescribeDomainUsageDataRequest& operator=(const DescribeDomainUsageDataRequest &) = default ;
    DescribeDomainUsageDataRequest& operator=(DescribeDomainUsageDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && return this->dataProtocol_ == nullptr && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->field_ == nullptr && return this->interval_ == nullptr
        && return this->serviceType_ == nullptr && return this->startTime_ == nullptr && return this->type_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeDomainUsageDataRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // dataProtocol Field Functions 
    bool hasDataProtocol() const { return this->dataProtocol_ != nullptr;};
    void deleteDataProtocol() { this->dataProtocol_ = nullptr;};
    inline string dataProtocol() const { DARABONBA_PTR_GET_DEFAULT(dataProtocol_, "") };
    inline DescribeDomainUsageDataRequest& setDataProtocol(string dataProtocol) { DARABONBA_PTR_SET_VALUE(dataProtocol_, dataProtocol) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainUsageDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainUsageDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeDomainUsageDataRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeDomainUsageDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline DescribeDomainUsageDataRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainUsageDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDomainUsageDataRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The billable region. Valid values:
    // 
    // *   **CN** (default): inside the Chinese mainland
    // *   **OverSeas**: outside the Chinese mainland
    // *   **AP1**: Asia Pacific 1
    // *   **AP2**: Asia Pacific 2
    // *   **AP3**: Asia Pacific 3
    // *   **NA**: North America
    // *   **SA**: South America
    // *   **EU**: Europe
    // *   **MEAA**: Middle East and Africa
    // *   **all**: all the preceding billable regions
    std::shared_ptr<string> area_ = nullptr;
    // The protocol of the data that you want to query. Valid values:
    // 
    // *   **http:** HTTP
    // *   **https:** HTTPS
    // *   **quic**: QUIC
    // *   **all** (default): HTTP, HTTPS, and QUIC
    std::shared_ptr<string> dataProtocol_ = nullptr;
    // The accelerated domain name. You can specify up to 100 domain names in each request. Separate multiple domain names with commas (,).
    // 
    // > If you leave this parameter empty, the usage data of all accelerated domain names in your Alibaba Cloud account is returned.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > The end time must be later than the start time. The maximum time range that can be specified is 31 days.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The type of the data that you want to query. Valid values:
    // 
    // *   **bps**: bandwidth
    // *   **traf**: traffic
    // *   **acc**: requests
    // 
    // > If you set this parameter to **acc**, the **Area** parameter is not supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> field_ = nullptr;
    // The time granularity of the data entries. Unit: seconds. Valid values: **300** (5 minutes), **3600** (1 hour), and **86400** (1 day).
    // 
    // *   If **Interval** is set to **300**, you can query usage data in the last 6 months. The maximum time range per query that can be specified is 3 days.
    // *   If **Interval** is set to **3600** or **86400**, you can query usage data of the previous year.
    // *   If you leave the **Interval** parameter empty, the maximum time range that you can query is 1 month. If you specify a time range of 1 to 3 days, the time interval between the entries that are returned is 1 hour. If you specify a time range of at least 4 days, the time interval between the entries that are returned is 1 day.
    std::shared_ptr<string> interval_ = nullptr;
    std::shared_ptr<string> serviceType_ = nullptr;
    // The beginning of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > Data is collected every 5 minutes.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The type of content that you want to query. Valid values:
    // 
    // *   **static**: static content
    // *   **dynamic**: dynamic content
    // *   **all** (default): both static and dynamic content
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
