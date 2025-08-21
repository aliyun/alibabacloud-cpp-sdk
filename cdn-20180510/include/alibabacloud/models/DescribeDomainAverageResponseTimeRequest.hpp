// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINAVERAGERESPONSETIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINAVERAGERESPONSETIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainAverageResponseTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainAverageResponseTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_TO_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeMerge, timeMerge_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainAverageResponseTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_FROM_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeMerge, timeMerge_);
    };
    DescribeDomainAverageResponseTimeRequest() = default ;
    DescribeDomainAverageResponseTimeRequest(const DescribeDomainAverageResponseTimeRequest &) = default ;
    DescribeDomainAverageResponseTimeRequest(DescribeDomainAverageResponseTimeRequest &&) = default ;
    DescribeDomainAverageResponseTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainAverageResponseTimeRequest() = default ;
    DescribeDomainAverageResponseTimeRequest& operator=(const DescribeDomainAverageResponseTimeRequest &) = default ;
    DescribeDomainAverageResponseTimeRequest& operator=(DescribeDomainAverageResponseTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->domainType_ != nullptr && this->endTime_ != nullptr && this->interval_ != nullptr && this->ispNameEn_ != nullptr && this->locationNameEn_ != nullptr
        && this->startTime_ != nullptr && this->timeMerge_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainAverageResponseTimeRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeDomainAverageResponseTimeRequest& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainAverageResponseTimeRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeDomainAverageResponseTimeRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispNameEn Field Functions 
    bool hasIspNameEn() const { return this->ispNameEn_ != nullptr;};
    void deleteIspNameEn() { this->ispNameEn_ = nullptr;};
    inline string ispNameEn() const { DARABONBA_PTR_GET_DEFAULT(ispNameEn_, "") };
    inline DescribeDomainAverageResponseTimeRequest& setIspNameEn(string ispNameEn) { DARABONBA_PTR_SET_VALUE(ispNameEn_, ispNameEn) };


    // locationNameEn Field Functions 
    bool hasLocationNameEn() const { return this->locationNameEn_ != nullptr;};
    void deleteLocationNameEn() { this->locationNameEn_ = nullptr;};
    inline string locationNameEn() const { DARABONBA_PTR_GET_DEFAULT(locationNameEn_, "") };
    inline DescribeDomainAverageResponseTimeRequest& setLocationNameEn(string locationNameEn) { DARABONBA_PTR_SET_VALUE(locationNameEn_, locationNameEn) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainAverageResponseTimeRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeMerge Field Functions 
    bool hasTimeMerge() const { return this->timeMerge_ != nullptr;};
    void deleteTimeMerge() { this->timeMerge_ = nullptr;};
    inline string timeMerge() const { DARABONBA_PTR_GET_DEFAULT(timeMerge_, "") };
    inline DescribeDomainAverageResponseTimeRequest& setTimeMerge(string timeMerge) { DARABONBA_PTR_SET_VALUE(timeMerge_, timeMerge) };


  protected:
    // The accelerated domain name. Separate multiple accelerated domain names with commas (,).
    // 
    // By default, this operation queries the geographic distribution of users for all accelerated domain names.
    std::shared_ptr<string> domainName_ = nullptr;
    // The type of the query condition. When you set the value to dynamic, this operation queries the average response time of dynamic resources and static resources. If you do not set this parameter, this operation queries the average response time of only static resources.
    std::shared_ptr<string> domainType_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // The end time must be later than the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time interval between the data entries. Unit: seconds. The value varies based on the values of the **StartTime** and **EndTime** parameters. Valid values:
    // 
    // *   If the time span between StartTime and EndTime is less than 3 days, valid values are **300**, **3600**, and **86400**. Default value: **300**.
    // *   If the time span between StartTime and EndTime is greater than or equal to 3 days and less than 31 days, valid values are **3600** and **86400**. Default value: **3600**.
    // *   If the time range between StartTime and EndTime is 31 days or longer, the valid value is **86400**. Default value: **86400**.
    std::shared_ptr<string> interval_ = nullptr;
    // The name of the Internet service provider (ISP) for your Alibaba Cloud CDN service. You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query ISPs. If you do not set this parameter, data of all ISPs is queried.
    std::shared_ptr<string> ispNameEn_ = nullptr;
    // The name of the region. You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query regions. If you do not set this parameter, data in all regions is queried.
    std::shared_ptr<string> locationNameEn_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // Specifies whether to automatically set the interval. If you set the value to 1, the value of the Interval parameter is automatically assigned based on the StartTime and EndTime parameters. You can set this parameter or the Interval parameter.
    std::shared_ptr<string> timeMerge_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
