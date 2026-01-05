// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINRECORDUSAGEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINRECORDUSAGEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainRecordUsageDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainRecordUsageDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SplitBy, splitBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainRecordUsageDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SplitBy, splitBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainRecordUsageDataRequest() = default ;
    DescribeLiveDomainRecordUsageDataRequest(const DescribeLiveDomainRecordUsageDataRequest &) = default ;
    DescribeLiveDomainRecordUsageDataRequest(DescribeLiveDomainRecordUsageDataRequest &&) = default ;
    DescribeLiveDomainRecordUsageDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainRecordUsageDataRequest() = default ;
    DescribeLiveDomainRecordUsageDataRequest& operator=(const DescribeLiveDomainRecordUsageDataRequest &) = default ;
    DescribeLiveDomainRecordUsageDataRequest& operator=(DescribeLiveDomainRecordUsageDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->endTime_ == nullptr && this->interval_ == nullptr && this->ownerId_ == nullptr && this->region_ == nullptr && this->regionId_ == nullptr
        && this->splitBy_ == nullptr && this->startTime_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainRecordUsageDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainRecordUsageDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeLiveDomainRecordUsageDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveDomainRecordUsageDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDomainRecordUsageDataRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveDomainRecordUsageDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // splitBy Field Functions 
    bool hasSplitBy() const { return this->splitBy_ != nullptr;};
    void deleteSplitBy() { this->splitBy_ = nullptr;};
    inline string getSplitBy() const { DARABONBA_PTR_GET_DEFAULT(splitBy_, "") };
    inline DescribeLiveDomainRecordUsageDataRequest& setSplitBy(string splitBy) { DARABONBA_PTR_SET_VALUE(splitBy_, splitBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainRecordUsageDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The main streaming domain to query.
    // 
    // *   You can query one or more domain names. If you specify multiple domain names, separate them with commas (,).
    // *   If you leave this parameter empty, the data of all domain names within your Alibaba Cloud account is returned.
    shared_ptr<string> domainName_ {};
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC. Value requirements:
    // 
    // *   The end time is later than the start time.
    // *   The time range between the start time and end time is up to 31 days. If the time range is more than 31 days, the request fails and an error is reported.
    shared_ptr<string> endTime_ {};
    // The time granularity of the query. Unit: seconds. Valid values:
    // 
    // *   60
    // *   300
    // *   3600
    // *   86400
    // 
    // > If you do not specify this parameter or specify an invalid value: The time granularity of the query for a time range that is less than or equal to 31 days is 300 seconds by default. The time granularity of the query for a time range that is more than 31 days is 86400 seconds by default.
    shared_ptr<string> interval_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region. Valid values:
    // 
    // *   **cn-beijing**: China (Beijing)
    // *   **cn-shanghai**: China (Shanghai)
    // *   **cn-shenzhen**: China (Shenzhen)
    // *   **cn-qingdao**: China (Qingdao)
    // *   **ap-southeast-1**: Singapore
    // *   **eu-central-1**: Germany (Frankfurt)
    // *   **ap-northeast-1**: Japan (Tokyo)
    // *   **ap-southeast-5**: Indonesia (Jakarta)
    shared_ptr<string> region_ {};
    shared_ptr<string> regionId_ {};
    // The key that is used to group data. Valid values:
    // 
    // *   **domain**: groups results by domain name.
    // *   **record_fmt**: groups results by recording type.
    // 
    // >  You can select one option or both. If you want to select both options, separate them with a comma (,). The default value is `domain,record_fmt`. If you leave this parameter empty or set the value to `null`, this parameter is ignored.
    shared_ptr<string> splitBy_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // *   The minimum data granularity is 5 minutes.
    // *   If you do not specify this parameter, the data in the last 24 hours is returned.
    // 
    // > The earliest start time that you can specify is 90 days back from the current time, accurate to seconds.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
