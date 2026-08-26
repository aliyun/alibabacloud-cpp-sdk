// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDELAYEDSTREAMINGUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDELAYEDSTREAMINGUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDelayedStreamingUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDelayedStreamingUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SplitBy, splitBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDelayedStreamingUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SplitBy, splitBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DescribeLiveDelayedStreamingUsageRequest() = default ;
    DescribeLiveDelayedStreamingUsageRequest(const DescribeLiveDelayedStreamingUsageRequest &) = default ;
    DescribeLiveDelayedStreamingUsageRequest(DescribeLiveDelayedStreamingUsageRequest &&) = default ;
    DescribeLiveDelayedStreamingUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDelayedStreamingUsageRequest() = default ;
    DescribeLiveDelayedStreamingUsageRequest& operator=(const DescribeLiveDelayedStreamingUsageRequest &) = default ;
    DescribeLiveDelayedStreamingUsageRequest& operator=(DescribeLiveDelayedStreamingUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->endTime_ == nullptr && this->interval_ == nullptr && this->ownerId_ == nullptr && this->region_ == nullptr && this->regionId_ == nullptr
        && this->splitBy_ == nullptr && this->startTime_ == nullptr && this->streamName_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDelayedStreamingUsageRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDelayedStreamingUsageRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeLiveDelayedStreamingUsageRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveDelayedStreamingUsageRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDelayedStreamingUsageRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveDelayedStreamingUsageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // splitBy Field Functions 
    bool hasSplitBy() const { return this->splitBy_ != nullptr;};
    void deleteSplitBy() { this->splitBy_ = nullptr;};
    inline string getSplitBy() const { DARABONBA_PTR_GET_DEFAULT(splitBy_, "") };
    inline DescribeLiveDelayedStreamingUsageRequest& setSplitBy(string splitBy) { DARABONBA_PTR_SET_VALUE(splitBy_, splitBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDelayedStreamingUsageRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveDelayedStreamingUsageRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The streaming domain name to query.
    // - You can specify a single domain name or multiple domain names. Separate multiple domain names with commas (,).
    // - If this parameter is left empty, the aggregated data of all live streaming domain names is returned by default.
    shared_ptr<string> domainName_ {};
    // The end of the time range to query. The end time must be later than the start time. The time span cannot exceed 10 hours. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // The time granularity of the queried data. Unit: seconds. Valid values:
    // - 300
    // - 3600
    // - 86400
    // 
    // If this parameter is left empty or set to an unsupported value, the default value 3600 is used.
    shared_ptr<string> interval_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The live center to query. You can specify multiple regions. Separate multiple regions with commas (,). Valid values:
    // - cn-beijing: Beijing
    // - cn-shanghai: Shanghai
    // - cn-shenzhen: Shenzhen
    // - cn-qingdao: Qingdao
    // - ap-southeast-1: Singapore
    // - eu-central-1: Germany
    // - ap-northeast-1: Tokyo
    // - ap-southeast-5: Jakarta
    // 
    // If this parameter is left empty, the aggregated data of all regions is returned by default.
    shared_ptr<string> region_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The grouping key. If this parameter is left empty, user data is aggregated. Valid values:
    // - domain: domain name. If the SplitBy (grouping key) parameter is set to domain, the Domain response parameter takes effect.
    // - region: live center region. If the SplitBy (grouping key) parameter is set to region, the Region response parameter takes effect.
    // - stream: stream name. If the SplitBy (grouping key) parameter is set to stream, the stream response parameter takes effect.
    // 
    // > You can query data only when the parameter corresponding to the grouping key is not empty. Otherwise, an error is returned. For example, when DomainName is empty, you cannot specify domain as the grouping key.
    shared_ptr<string> splitBy_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC. By default, data of the last seven days is returned.
    shared_ptr<string> startTime_ {};
    // The stream name. Separate multiple stream names with commas (,). By default, the data of all stream names is aggregated.
    shared_ptr<string> streamName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
