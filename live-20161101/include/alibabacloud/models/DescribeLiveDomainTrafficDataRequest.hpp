// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTRAFFICDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTRAFFICDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainTrafficDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainTrafficDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_TO_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainTrafficDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_FROM_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainTrafficDataRequest() = default ;
    DescribeLiveDomainTrafficDataRequest(const DescribeLiveDomainTrafficDataRequest &) = default ;
    DescribeLiveDomainTrafficDataRequest(DescribeLiveDomainTrafficDataRequest &&) = default ;
    DescribeLiveDomainTrafficDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainTrafficDataRequest() = default ;
    DescribeLiveDomainTrafficDataRequest& operator=(const DescribeLiveDomainTrafficDataRequest &) = default ;
    DescribeLiveDomainTrafficDataRequest& operator=(DescribeLiveDomainTrafficDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->endTime_ == nullptr && return this->interval_ == nullptr && return this->ispNameEn_ == nullptr && return this->locationNameEn_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->startTime_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainTrafficDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainTrafficDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeLiveDomainTrafficDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispNameEn Field Functions 
    bool hasIspNameEn() const { return this->ispNameEn_ != nullptr;};
    void deleteIspNameEn() { this->ispNameEn_ = nullptr;};
    inline string ispNameEn() const { DARABONBA_PTR_GET_DEFAULT(ispNameEn_, "") };
    inline DescribeLiveDomainTrafficDataRequest& setIspNameEn(string ispNameEn) { DARABONBA_PTR_SET_VALUE(ispNameEn_, ispNameEn) };


    // locationNameEn Field Functions 
    bool hasLocationNameEn() const { return this->locationNameEn_ != nullptr;};
    void deleteLocationNameEn() { this->locationNameEn_ = nullptr;};
    inline string locationNameEn() const { DARABONBA_PTR_GET_DEFAULT(locationNameEn_, "") };
    inline DescribeLiveDomainTrafficDataRequest& setLocationNameEn(string locationNameEn) { DARABONBA_PTR_SET_VALUE(locationNameEn_, locationNameEn) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveDomainTrafficDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveDomainTrafficDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainTrafficDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The streaming domain. You can query one or more domain names. If you specify multiple domain names, separate them with commas (,). If you do not specify this parameter, the data of all domain names within your Alibaba Cloud account is returned.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time granularity of the query. Unit: seconds. Valid values:
    // 
    // *   **300** (default)
    // *   **3600**
    // *   **86400**
    // 
    // >  If you specify an invalid value or do not specify this parameter, the default value **300** is used.
    std::shared_ptr<string> interval_ = nullptr;
    // The name of the Internet service provider (ISP). You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query a list of available ISPs. If you do not specify this parameter, the data of all ISPs is returned.
    std::shared_ptr<string> ispNameEn_ = nullptr;
    // The name of the region. You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query a list of available regions. If you do not specify this parameter, the data of all regions is returned.
    std::shared_ptr<string> locationNameEn_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // >  You can query data in the last **90** days.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
