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
    // The streaming domain name to query.
    // 
    // - Supports single or batch domain queries. Separate multiple domain names with commas (,).
    // - If this parameter is left empty, the merged data of all live streaming domain names is returned by default.
    // - When you specify DomainName, make sure that the specified domain name is a live streaming domain name and that the caller has the required permissions on the domain name.
    shared_ptr<string> domainName_ {};
    // The end time. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format in UTC. Requirements:
    // 
    // - The end time must be later than the start time (StartTime).
    // - The maximum time span between the end time and the start time is 31 days. Requests that exceed 31 days fail and return an error.
    shared_ptr<string> endTime_ {};
    // The time granularity of the queried data. Unit: seconds. Valid values:
    // 
    // - 60.
    // 
    // - 300.
    // 
    // - 3600.
    // 
    // - 86400.
    // 
    // >If this parameter is not specified or an unsupported value is specified, the default time granularity is 300 seconds for query spans within 31 days and 86400 seconds for query spans longer than 31 days.
    shared_ptr<string> interval_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region. Valid values:
    // 
    // - **cn-beijing**: Beijing.
    // 
    // - **cn-shanghai**: Shanghai.
    // 
    // - **cn-shenzhen**: Shenzhen.
    // 
    // - **cn-qingdao**: Qingdao.
    // 
    // - **ap-southeast-1**: Singapore.
    // 
    // - **eu-central-1**: Germany.
    // 
    // - **ap-northeast-1**: Tokyo.
    // 
    // - **ap-southeast-5**: Jakarta.
    shared_ptr<string> region_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The grouping key. Valid values:
    // 
    // - **domain**: groups query results by domain name.
    // - **record_fmt**: groups query results by recording type.
    // 
    // > You can specify one or more values. Separate multiple values with commas (,). Default value: `domain,record_fmt`. If this parameter is set to empty or `null`, the results are not grouped by the preceding keys.
    shared_ptr<string> splitBy_ {};
    // The start time. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format in UTC.
    // 
    // - The minimum data granularity is 5 minutes.
    // - If this parameter is not specified, data of the last 24 hours is returned by default.
    // 
    // >The start time can be set to a point in time within the last 90 days from the current time, accurate to the second.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
