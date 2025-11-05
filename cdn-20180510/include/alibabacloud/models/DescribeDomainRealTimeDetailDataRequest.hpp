// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEDETAILDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEDETAILDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeDetailDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeDetailDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_TO_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_TO_JSON(Merge, merge_);
      DARABONBA_PTR_TO_JSON(MergeLocIsp, mergeLocIsp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeDetailDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_FROM_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_FROM_JSON(Merge, merge_);
      DARABONBA_PTR_FROM_JSON(MergeLocIsp, mergeLocIsp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainRealTimeDetailDataRequest() = default ;
    DescribeDomainRealTimeDetailDataRequest(const DescribeDomainRealTimeDetailDataRequest &) = default ;
    DescribeDomainRealTimeDetailDataRequest(DescribeDomainRealTimeDetailDataRequest &&) = default ;
    DescribeDomainRealTimeDetailDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeDetailDataRequest() = default ;
    DescribeDomainRealTimeDetailDataRequest& operator=(const DescribeDomainRealTimeDetailDataRequest &) = default ;
    DescribeDomainRealTimeDetailDataRequest& operator=(DescribeDomainRealTimeDetailDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->endTime_ == nullptr && return this->field_ == nullptr && return this->ispNameEn_ == nullptr && return this->locationNameEn_ == nullptr && return this->merge_ == nullptr
        && return this->mergeLocIsp_ == nullptr && return this->startTime_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainRealTimeDetailDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainRealTimeDetailDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeDomainRealTimeDetailDataRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // ispNameEn Field Functions 
    bool hasIspNameEn() const { return this->ispNameEn_ != nullptr;};
    void deleteIspNameEn() { this->ispNameEn_ = nullptr;};
    inline string ispNameEn() const { DARABONBA_PTR_GET_DEFAULT(ispNameEn_, "") };
    inline DescribeDomainRealTimeDetailDataRequest& setIspNameEn(string ispNameEn) { DARABONBA_PTR_SET_VALUE(ispNameEn_, ispNameEn) };


    // locationNameEn Field Functions 
    bool hasLocationNameEn() const { return this->locationNameEn_ != nullptr;};
    void deleteLocationNameEn() { this->locationNameEn_ = nullptr;};
    inline string locationNameEn() const { DARABONBA_PTR_GET_DEFAULT(locationNameEn_, "") };
    inline DescribeDomainRealTimeDetailDataRequest& setLocationNameEn(string locationNameEn) { DARABONBA_PTR_SET_VALUE(locationNameEn_, locationNameEn) };


    // merge Field Functions 
    bool hasMerge() const { return this->merge_ != nullptr;};
    void deleteMerge() { this->merge_ = nullptr;};
    inline string merge() const { DARABONBA_PTR_GET_DEFAULT(merge_, "") };
    inline DescribeDomainRealTimeDetailDataRequest& setMerge(string merge) { DARABONBA_PTR_SET_VALUE(merge_, merge) };


    // mergeLocIsp Field Functions 
    bool hasMergeLocIsp() const { return this->mergeLocIsp_ != nullptr;};
    void deleteMergeLocIsp() { this->mergeLocIsp_ = nullptr;};
    inline string mergeLocIsp() const { DARABONBA_PTR_GET_DEFAULT(mergeLocIsp_, "") };
    inline DescribeDomainRealTimeDetailDataRequest& setMergeLocIsp(string mergeLocIsp) { DARABONBA_PTR_SET_VALUE(mergeLocIsp_, mergeLocIsp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainRealTimeDetailDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The accelerated domain name that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. Example: 2019-11-30T05:40:00Z.
    // 
    // > The end time must be later than the start time. The difference between the end time and the start time cannot exceed 10 minutes.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The type of data that you want to query. You can specify multiple data types and separate them with commas (,). Valid values:
    // 
    // *   **qps**: queries per second (QPS)
    // *   **bps**: bandwidth
    // *   **http_code**: HTTP status code
    // 
    // This parameter is required.
    std::shared_ptr<string> field_ = nullptr;
    // The name of the Internet service provider (ISP). You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query ISPs. If you do not specify an ISP, data of all ISPs is queried.
    std::shared_ptr<string> ispNameEn_ = nullptr;
    // The name of the region. If you do not specify a region, data in all regions is queried. You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query regions.
    std::shared_ptr<string> locationNameEn_ = nullptr;
    // Specifies whether to return a summary value based on ISPs and regions. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // Default value: **false**.
    std::shared_ptr<string> merge_ = nullptr;
    // Specifies whether to return a summary value based on ISPs and regions. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // Default value: **false**.
    std::shared_ptr<string> mergeLocIsp_ = nullptr;
    // The beginning of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. Example: 2019-11-30T05:33:00Z.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
