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
        && return this->endTime_ == nullptr && return this->field_ == nullptr && return this->ispNameEn_ == nullptr && return this->locationNameEn_ == nullptr && return this->merge_ == nullptr
        && return this->mergeLocIsp_ == nullptr && return this->ownerId_ == nullptr && return this->startTime_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // ispNameEn Field Functions 
    bool hasIspNameEn() const { return this->ispNameEn_ != nullptr;};
    void deleteIspNameEn() { this->ispNameEn_ = nullptr;};
    inline string ispNameEn() const { DARABONBA_PTR_GET_DEFAULT(ispNameEn_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setIspNameEn(string ispNameEn) { DARABONBA_PTR_SET_VALUE(ispNameEn_, ispNameEn) };


    // locationNameEn Field Functions 
    bool hasLocationNameEn() const { return this->locationNameEn_ != nullptr;};
    void deleteLocationNameEn() { this->locationNameEn_ = nullptr;};
    inline string locationNameEn() const { DARABONBA_PTR_GET_DEFAULT(locationNameEn_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setLocationNameEn(string locationNameEn) { DARABONBA_PTR_SET_VALUE(locationNameEn_, locationNameEn) };


    // merge Field Functions 
    bool hasMerge() const { return this->merge_ != nullptr;};
    void deleteMerge() { this->merge_ = nullptr;};
    inline string merge() const { DARABONBA_PTR_GET_DEFAULT(merge_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setMerge(string merge) { DARABONBA_PTR_SET_VALUE(merge_, merge) };


    // mergeLocIsp Field Functions 
    bool hasMergeLocIsp() const { return this->mergeLocIsp_ != nullptr;};
    void deleteMergeLocIsp() { this->mergeLocIsp_ = nullptr;};
    inline string mergeLocIsp() const { DARABONBA_PTR_GET_DEFAULT(mergeLocIsp_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setMergeLocIsp(string mergeLocIsp) { DARABONBA_PTR_SET_VALUE(mergeLocIsp_, mergeLocIsp) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodDomainRealTimeDetailDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainRealTimeDetailDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The accelerated domain name. You can specify a maximum of 20 accelerated domain names in each call. Separate domain names with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. Example: 2019-11-30T05:40:00Z.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The type of data that you want to query. You can specify multiple data types and separate them with commas (,). Valid values:
    // 
    // qps: the number of queries per second bps: bandwidth data http_code: HTTP status codes
    // 
    // This parameter is required.
    std::shared_ptr<string> field_ = nullptr;
    // The name of the Internet service provider (ISP).
    std::shared_ptr<string> ispNameEn_ = nullptr;
    // The name of the region. If you do not specify a region, data in all regions is queried.
    std::shared_ptr<string> locationNameEn_ = nullptr;
    // Specifies whether to return a summary value. Valid values:
    // 
    // true false (default)
    std::shared_ptr<string> merge_ = nullptr;
    // Specifies whether to return a summary value. Valid values:
    // 
    // *   **true**: groups the results by domain name and merges the results by region and ISP.
    // *   **false**: groups the results by domain name.
    // 
    // Default value: **false**.
    std::shared_ptr<string> mergeLocIsp_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The beginning of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. Example: 2019-11-30T05:33:00Z.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
