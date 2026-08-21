// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEDETAILDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEDETAILDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeDetailDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeDetailDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_TO_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_TO_JSON(Merge, merge_);
      DARABONBA_PTR_TO_JSON(MergeLocIsp, mergeLocIsp_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeDetailDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_FROM_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_FROM_JSON(Merge, merge_);
      DARABONBA_PTR_FROM_JSON(MergeLocIsp, mergeLocIsp_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVodDomainRealTimeDetailDataRequest() = default ;
    DescribeVodDomainRealTimeDetailDataRequest(const DescribeVodDomainRealTimeDetailDataRequest &) = default ;
    DescribeVodDomainRealTimeDetailDataRequest(DescribeVodDomainRealTimeDetailDataRequest &&) = default ;
    DescribeVodDomainRealTimeDetailDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeDetailDataRequest() = default ;
    DescribeVodDomainRealTimeDetailDataRequest& operator=(const DescribeVodDomainRealTimeDetailDataRequest &) = default ;
    DescribeVodDomainRealTimeDetailDataRequest& operator=(DescribeVodDomainRealTimeDetailDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->endTime_ == nullptr && this->field_ == nullptr && this->ispNameEn_ == nullptr && this->locationNameEn_ == nullptr && this->merge_ == nullptr
        && this->mergeLocIsp_ == nullptr && this->ownerId_ == nullptr && this->startTime_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // ispNameEn Field Functions 
    bool hasIspNameEn() const { return this->ispNameEn_ != nullptr;};
    void deleteIspNameEn() { this->ispNameEn_ = nullptr;};
    inline string getIspNameEn() const { DARABONBA_PTR_GET_DEFAULT(ispNameEn_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setIspNameEn(string ispNameEn) { DARABONBA_PTR_SET_VALUE(ispNameEn_, ispNameEn) };


    // locationNameEn Field Functions 
    bool hasLocationNameEn() const { return this->locationNameEn_ != nullptr;};
    void deleteLocationNameEn() { this->locationNameEn_ = nullptr;};
    inline string getLocationNameEn() const { DARABONBA_PTR_GET_DEFAULT(locationNameEn_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setLocationNameEn(string locationNameEn) { DARABONBA_PTR_SET_VALUE(locationNameEn_, locationNameEn) };


    // merge Field Functions 
    bool hasMerge() const { return this->merge_ != nullptr;};
    void deleteMerge() { this->merge_ = nullptr;};
    inline string getMerge() const { DARABONBA_PTR_GET_DEFAULT(merge_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setMerge(string merge) { DARABONBA_PTR_SET_VALUE(merge_, merge) };


    // mergeLocIsp Field Functions 
    bool hasMergeLocIsp() const { return this->mergeLocIsp_ != nullptr;};
    void deleteMergeLocIsp() { this->mergeLocIsp_ = nullptr;};
    inline string getMergeLocIsp() const { DARABONBA_PTR_GET_DEFAULT(mergeLocIsp_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setMergeLocIsp(string mergeLocIsp) { DARABONBA_PTR_SET_VALUE(mergeLocIsp_, mergeLocIsp) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodDomainRealTimeDetailDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The accelerated domain name to query.
    // 
    // - Batch queries are supported. Separate multiple domain names with commas (,). You can specify up to 20 domain names at a time.
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com), and in the left-side navigation pane, choose **Configuration Management > CDN Configuration > Domain Names** to view the accelerated domain names that you have added to ApsaraVideo VOD. Alternatively, call the [DescribeVodUserDomains](~~DescribeVodUserDomains~~) operation to query the list of accelerated domain names.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // > The end time must be later than the start time, and the difference between the end time and the start time cannot exceed 10 minutes.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The type of access data to query. You can specify multiple types. Separate multiple types with commas (,). Valid values:
    // 
    // - **qps**: queries per second (QPS).
    // - **bps**: bandwidth data.
    // - **http_code**: HTTP status codes.
    // 
    // This parameter is required.
    shared_ptr<string> field_ {};
    // The Internet service provider (ISP) name in English. If you do not specify this parameter, data for all ISPs is queried by default.
    shared_ptr<string> ispNameEn_ {};
    // The region name in English. If you do not specify this parameter, data for all regions is queried by default.
    shared_ptr<string> locationNameEn_ {};
    // Specifies whether to return aggregated data by domain name. Valid values:
    // 
    // - **true**: Returns aggregated data across all domain names.
    // - **false** (default): Returns data grouped by domain name.
    shared_ptr<string> merge_ {};
    // Specifies whether to return aggregated data by region and ISP. Valid values:
    // 
    // - **true**: Returns data grouped only by domain name, with region and ISP values aggregated.
    // - **false** (default): Returns data grouped by domain name, region, and ISP.
    shared_ptr<string> mergeLocIsp_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
