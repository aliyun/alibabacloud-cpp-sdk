// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYUSAGEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYUSAGEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePushProxyUsageDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePushProxyUsageDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SplitBy, splitBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePushProxyUsageDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SplitBy, splitBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLivePushProxyUsageDataRequest() = default ;
    DescribeLivePushProxyUsageDataRequest(const DescribeLivePushProxyUsageDataRequest &) = default ;
    DescribeLivePushProxyUsageDataRequest(DescribeLivePushProxyUsageDataRequest &&) = default ;
    DescribeLivePushProxyUsageDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePushProxyUsageDataRequest() = default ;
    DescribeLivePushProxyUsageDataRequest& operator=(const DescribeLivePushProxyUsageDataRequest &) = default ;
    DescribeLivePushProxyUsageDataRequest& operator=(DescribeLivePushProxyUsageDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->endTime_ == nullptr && this->ownerId_ == nullptr && this->region_ == nullptr && this->regionId_ == nullptr && this->splitBy_ == nullptr
        && this->startTime_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLivePushProxyUsageDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLivePushProxyUsageDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLivePushProxyUsageDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLivePushProxyUsageDataRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLivePushProxyUsageDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // splitBy Field Functions 
    bool hasSplitBy() const { return this->splitBy_ != nullptr;};
    void deleteSplitBy() { this->splitBy_ = nullptr;};
    inline string getSplitBy() const { DARABONBA_PTR_GET_DEFAULT(splitBy_, "") };
    inline DescribeLivePushProxyUsageDataRequest& setSplitBy(string splitBy) { DARABONBA_PTR_SET_VALUE(splitBy_, splitBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLivePushProxyUsageDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ingest domain name of the streamer to query.
    // - You can specify a single domain name or multiple domain names separated by commas (,).
    // - If this parameter is left empty, the aggregated data of all live streaming domain names is returned by default.
    shared_ptr<string> domainName_ {};
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The live center to query. You can specify multiple regions separated by commas (,). Valid values:
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
    // The grouping key. If this parameter is left empty, the default value is region, and the aggregated data is returned. You can specify multiple values separated by commas (,). Valid values:
    // - domain: the domain name. If SplitBy is set to domain, the Domain field in the response takes effect.
    // - region (default): the live center region. If SplitBy is set to region, the Region field in the response takes effect.
    shared_ptr<string> splitBy_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC. By default, data from the last seven days is returned.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
