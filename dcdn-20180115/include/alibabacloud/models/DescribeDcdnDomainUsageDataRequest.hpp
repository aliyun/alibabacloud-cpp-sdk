// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINUSAGEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINUSAGEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainUsageDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainUsageDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(DataProtocol, dataProtocol_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainUsageDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(DataProtocol, dataProtocol_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDcdnDomainUsageDataRequest() = default ;
    DescribeDcdnDomainUsageDataRequest(const DescribeDcdnDomainUsageDataRequest &) = default ;
    DescribeDcdnDomainUsageDataRequest(DescribeDcdnDomainUsageDataRequest &&) = default ;
    DescribeDcdnDomainUsageDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainUsageDataRequest() = default ;
    DescribeDcdnDomainUsageDataRequest& operator=(const DescribeDcdnDomainUsageDataRequest &) = default ;
    DescribeDcdnDomainUsageDataRequest& operator=(DescribeDcdnDomainUsageDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->dataProtocol_ != nullptr && this->domainName_ != nullptr && this->endTime_ != nullptr && this->field_ != nullptr && this->interval_ != nullptr
        && this->startTime_ != nullptr && this->type_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeDcdnDomainUsageDataRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // dataProtocol Field Functions 
    bool hasDataProtocol() const { return this->dataProtocol_ != nullptr;};
    void deleteDataProtocol() { this->dataProtocol_ = nullptr;};
    inline string dataProtocol() const { DARABONBA_PTR_GET_DEFAULT(dataProtocol_, "") };
    inline DescribeDcdnDomainUsageDataRequest& setDataProtocol(string dataProtocol) { DARABONBA_PTR_SET_VALUE(dataProtocol_, dataProtocol) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainUsageDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainUsageDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeDcdnDomainUsageDataRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeDcdnDomainUsageDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainUsageDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDcdnDomainUsageDataRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The billable region. Valid values:
    // 
    // *   **CN**: Chinese mainland
    // *   **OverSeas**: outside the Chinese mainland
    // *   **AP1**: Asia Pacific 1
    // *   **AP2**: Asia Pacific 2
    // *   **AP3**: Asia Pacific 3
    // *   **NA**: North America
    // *   **SA**: South America
    // *   **EU**: Europe
    // *   **MEAA**: Middle East and Africa
    // *   **all**: all the preceding billable regions
    // 
    // Default value: **CN**
    std::shared_ptr<string> area_ = nullptr;
    // The protocol of the data to query. Valid values:
    // 
    // *   **quic**: Quick UDP Internet Connections (QUIC)
    // *   **https**: HTTPS
    // *   **http**: HTTP
    // *   **all**: all the preceding protocols
    // 
    // Default value: **all**
    std::shared_ptr<string> dataProtocol_ = nullptr;
    // The accelerated domain name. You can specify up to 100 domain names in each request. Separate multiple domain names with commas (,).
    // 
    // >  If you do not specify this parameter, the usage data of all accelerated domain names that belong to your Alibaba Cloud account is returned.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // >  The end time must be later than the start time. The maximum time range that can be queried is 31 days.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The type of data that you want to query. Valid values:
    // 
    // *   **bps**: bandwidth
    // *   **traf**: traffic
    // *   **acc**: requests
    // 
    // >  **acc** does not support the **Area** parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> field_ = nullptr;
    // The time interval between the data entries to return. Unit: seconds.
    // 
    // The time interval varies with the maximum time range per query. Valid values: 300 (5 minutes), 3600 (1 hour), and 86400 (1 day). For more information, see **Usage notes**.
    std::shared_ptr<string> interval_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // >  The minimum time granularity at which the data is queried is 5 minutes.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The type of the requests. Valid values:
    // 
    // *   **static**: static requests
    // *   **dynamic**: dynamic requests
    // *   **all**: all requests
    // 
    // Default value: **all**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
